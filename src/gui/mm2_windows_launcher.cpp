#define UNICODE
#define _UNICODE
#include <windows.h>
#include <commdlg.h>
#include <shellapi.h>
extern "C" {
#include "mm2_rom.h"
}
#include "mm2_windows_live.h"
#include "mm2_windows_log.h"
#include "mm2_gamepad_input_win32.h"
#include <algorithm>
#include <cstring>
#include <iterator>
#include <string>
#include <string_view>
#include <vector>

#define MM2_COUNT(a) (sizeof(a)/sizeof((a)[0]))

namespace {
constexpr int MM2_SETTINGS_VERSION=2;
constexpr int kInvalidArguments=2, kInvalidRom=3, kStartupFailure=4, kRuntimeFailure=5;

struct LaunchOptions {
    std::wstring game;
    int widescreen=-1;
};

bool parse_launch_options(LaunchOptions &options){
    int count=0;
    wchar_t **arguments=CommandLineToArgvW(GetCommandLineW(),&count);
    if(!arguments)return false;
    bool valid=true;
    for(int i=1;i<count&&valid;++i){
        const std::wstring_view argument=arguments[i];
        if(argument==L"--game"){
            valid=options.game.empty()&&i+1<count;
            if(valid){
                const std::wstring_view path=arguments[++i];
                valid=!path.empty()&&path.substr(0,2)!=L"--";
                if(valid)options.game=path;
            }
        }else if(argument==L"--port-widescreen"){
            options.widescreen=1;
        }else if(argument==L"--no-port-widescreen"){
            options.widescreen=0;
        }else{
            valid=false;
        }
    }
    LocalFree(arguments);
    return valid;
}
enum {
    CMD_BROWSE=100,CMD_RUN,CMD_PLAY,CMD_RESET,CMD_AUDIO,CMD_SETTINGS,CMD_KEYS,
    CMD_FULLSCREEN,CMD_WIDESCREEN,CMD_AUTORUN,CMD_SAVE,CMD_LOAD,CMD_SCREENSHOT,
    CMD_ABOUT,CMD_EXIT,
    TOOL_BROWSE=200,TOOL_PLAY,TOOL_RESET,TOOL_AUDIO,TOOL_SETTINGS,TOOL_KEYS,
    TOOL_FULLSCREEN,TOOL_WIDESCREEN,TOOL_AUTORUN
};
HINSTANCE g_instance{};HWND g_main{},g_video{},g_browse{},g_play{},g_reset{},g_audio{},g_settings_button{},g_keys{},g_fullscreen{},g_widescreen{},g_autorun{},g_status{};
HWND g_settings_window{},g_audio_window{},g_bindings_window{},g_info_window{};HMENU g_menu{};std::wstring g_rom_path{};std::wstring g_rom_folder{};std::wstring g_ini_path{};
MM2LiveSettings g_settings{};bool g_auto_run{},g_welcome_shown{},g_hidden{},g_fullscreen_active{};
bool g_direct_play{};
int g_widescreen_override{-1};
int g_exit_code{};
DWORD g_saved_style{},g_saved_ex_style{};WINDOWPLACEMENT g_saved_placement{sizeof(WINDOWPLACEMENT)};

/* Multiline read-only edit controls retain Tab themselves. Route dialog Tab
   explicitly so Welcome/About and every settings window have predictable
   Tab and Shift+Tab navigation, matching the mature Bubble Bobble frontend. */
int route_dialog_keyboard(HWND dialog,MSG *message){
    if(dialog&&message&&message->message==WM_KEYDOWN&&
       (message->hwnd==dialog||IsChild(dialog,message->hwnd))){
        if(dialog==g_bindings_window&&(message->hwnd==dialog||message->wParam==VK_ESCAPE)){
            SendMessageW(dialog,WM_KEYDOWN,message->wParam,message->lParam);return 1;
        }
        if(message->wParam==VK_ESCAPE){SendMessageW(dialog,WM_CLOSE,0,0);return 1;}
    }
    if(!dialog||!message||message->message!=WM_KEYDOWN||message->wParam!=VK_TAB)
        return dialog&&IsDialogMessageW(dialog,message);
    if(!IsWindow(dialog)||!IsWindowVisible(dialog)||!IsWindowEnabled(dialog))return 0;
    HWND focused=GetFocus(),next=nullptr;BOOL previous=GetKeyState(VK_SHIFT)<0?TRUE:FALSE;
    if(dialog==g_info_window){HWND text=FindWindowExW(dialog,nullptr,L"EDIT",nullptr),close=GetDlgItem(dialog,IDOK);if(!text||!close)return 0;next=focused==text?close:(focused==close?text:(previous?text:close));}
    else{if(!focused||(focused!=dialog&&!IsChild(dialog,focused)))return 0;next=GetNextDlgTabItem(dialog,focused,previous);}
    if(!next||next==focused)return 0;SetFocus(next);return 1;
}

#define IsDialogMessageW(dialog,message) route_dialog_keyboard((dialog),(message))

std::wstring exe_directory(){wchar_t p[32768]={};DWORD n=GetModuleFileNameW(nullptr,p,(DWORD)MM2_COUNT(p));if(!n||n>=MM2_COUNT(p))return L".";std::wstring s(p,n);size_t slash=s.find_last_of(L"\\/");return slash==std::wstring::npos?L".":s.substr(0,slash);}
bool path_is_directory(const std::wstring &path){DWORD attributes=GetFileAttributesW(path.c_str());return attributes!=INVALID_FILE_ATTRIBUTES&&(attributes&FILE_ATTRIBUTE_DIRECTORY)!=0;}
std::wstring parent_directory(const std::wstring &path){size_t slash=path.find_last_of(L"\\/");return slash==std::wstring::npos?std::wstring{}:path.substr(0,slash);}
std::wstring widen(const char *s){if(!s||!*s)return {};int n=MultiByteToWideChar(CP_UTF8,0,s,-1,nullptr,0);if(n<=0)return {};std::wstring r((size_t)n,L'\0');MultiByteToWideChar(CP_UTF8,0,s,-1,r.data(),n);r.pop_back();return r;}
void status(const wchar_t *text){if(!g_status)return;SetWindowTextW(g_status,text);NotifyWinEvent(EVENT_OBJECT_VALUECHANGE,g_status,OBJID_CLIENT,CHILDID_SELF);}
void font(HWND w){if(w)SendMessageW(w,WM_SETFONT,(WPARAM)GetStockObject(DEFAULT_GUI_FONT),TRUE);}
bool frontend_key(UINT key){return key==VK_ESCAPE||(key>=VK_F1&&key<=VK_F8);}

int effective_widescreen(){
    return g_widescreen_override>=0?g_widescreen_override:g_settings.wide_screen;
}

void defaults(){mm2_windows_live_settings_defaults(&g_settings);}
void write_number(const wchar_t *section,const wchar_t *key,int value);
void save_settings();
void load_settings(bool direct_play){
    defaults();g_ini_path=exe_directory()+L"\\settings.ini";g_rom_folder=exe_directory()+L"\\Rom";CreateDirectoryW(g_rom_folder.c_str(),nullptr);
    int settings_version=GetPrivateProfileIntW(L"General",L"SettingsVersion",0,g_ini_path.c_str());
    bool modern=settings_version>=1;
    bool settings_need_write=settings_version<MM2_SETTINGS_VERSION;wchar_t stored_rom_folder[32768]={};
    const wchar_t *general=modern?L"General":L"Frontend";
    g_settings.fullscreen=GetPrivateProfileIntW(general,modern?L"FullScreenOnPlay":L"FullScreen",0,g_ini_path.c_str());
    if(direct_play&&!modern)
        g_settings.fullscreen=GetPrivateProfileIntW(L"General",L"FullScreenOnPlay",g_settings.fullscreen,g_ini_path.c_str());
    g_settings.integer_scale=GetPrivateProfileIntW(general,L"IntegerScale",0,g_ini_path.c_str());
    g_settings.pause_on_focus_loss=GetPrivateProfileIntW(general,L"PauseOnFocusLoss",0,g_ini_path.c_str());
    g_auto_run=GetPrivateProfileIntW(general,modern?L"AutoRunOnLoad":L"AutoRun",0,g_ini_path.c_str())!=0;
    g_welcome_shown=GetPrivateProfileIntW(general,L"WelcomeShown",0,g_ini_path.c_str())!=0;
    if(!modern)
        g_settings.wide_screen=GetPrivateProfileIntW(L"Frontend",L"WideScreen",g_settings.wide_screen,g_ini_path.c_str())!=0;
    // RecompLauncher may write this choice before the INI is first initialized.
    g_settings.wide_screen=GetPrivateProfileIntW(L"Display",L"Widescreen",g_settings.wide_screen,g_ini_path.c_str())!=0;
    g_settings.correct_aspect=GetPrivateProfileIntW(modern?L"Display":L"Frontend",L"CorrectAspect",1,g_ini_path.c_str());
    g_settings.vsync=GetPrivateProfileIntW(modern?L"Display":L"Frontend",L"VSync",0,g_ini_path.c_str());
    g_settings.audio_enabled=GetPrivateProfileIntW(L"Audio",L"Enabled",1,g_ini_path.c_str());
    g_settings.volume_percent=GetPrivateProfileIntW(L"Audio",modern?L"VolumePercent":L"Volume",70,g_ini_path.c_str());
    g_settings.audio_latency_ms=GetPrivateProfileIntW(L"Audio",L"LatencyMs",60,g_ini_path.c_str());
    g_settings.input_source=GetPrivateProfileIntW(L"Input",L"Source",MM2_INPUT_COMBINED,g_ini_path.c_str());
    if(g_settings.input_source<MM2_INPUT_KEYBOARD||g_settings.input_source>MM2_INPUT_COMBINED)g_settings.input_source=MM2_INPUT_COMBINED;
    g_settings.gamepad_deadzone_percent=GetPrivateProfileIntW(L"Input",L"GamepadDeadzonePercent",35,g_ini_path.c_str());
    if(g_settings.gamepad_deadzone_percent<10||g_settings.gamepad_deadzone_percent>90)g_settings.gamepad_deadzone_percent=35;
    if(g_settings.integer_scale<0||g_settings.integer_scale>4)g_settings.integer_scale=0;
    g_settings.volume_percent=std::clamp(g_settings.volume_percent,0,100);
    g_settings.audio_latency_ms=std::clamp(g_settings.audio_latency_ms,20,250);
    if(modern){DWORD length=GetPrivateProfileStringW(L"General",L"RomFolder",L"",stored_rom_folder,(DWORD)MM2_COUNT(stored_rom_folder),g_ini_path.c_str());if(length>0&&length<(DWORD)(MM2_COUNT(stored_rom_folder)-1)&&path_is_directory(stored_rom_folder))g_rom_folder=stored_rom_folder;else settings_need_write=true;}
    for(unsigned a=0;a<MM2_NES_BINDING_COUNT;++a){
        wchar_t keyboard_key[32]={},gamepad_key[32]={};
        _snwprintf(keyboard_key,MM2_COUNT(keyboard_key),modern?L"Action%u":L"P1Action%u",a);
        _snwprintf(gamepad_key,MM2_COUNT(gamepad_key),L"%sAction%u",modern?L"Gamepad":L"",a);
        int keyboard_value=GetPrivateProfileIntW(modern?L"Input":L"Keyboard",keyboard_key,(int)g_settings.bindings[0][a],g_ini_path.c_str());
        int gamepad_value=GetPrivateProfileIntW(modern?L"Input":L"Gamepad",gamepad_key,g_settings.gamepad_bindings[a],g_ini_path.c_str());
        if(keyboard_value>0&&keyboard_value<=0xFF&&!frontend_key((UINT)keyboard_value))g_settings.bindings[0][a]=(UINT)keyboard_value;
        if(gamepad_value>=MM2_GAMEPAD_DPAD_UP&&gamepad_value<=MM2_GAMEPAD_CONTROL_LAST)g_settings.gamepad_bindings[a]=gamepad_value;
    }
    if(settings_need_write)save_settings();
    if(!modern){
        WritePrivateProfileStringW(L"Frontend",nullptr,nullptr,g_ini_path.c_str());
        WritePrivateProfileStringW(L"Keyboard",nullptr,nullptr,g_ini_path.c_str());
        WritePrivateProfileStringW(L"Gamepad",nullptr,nullptr,g_ini_path.c_str());
        WritePrivateProfileStringW(L"Audio",L"Volume",nullptr,g_ini_path.c_str());
        WritePrivateProfileStringW(nullptr,nullptr,nullptr,g_ini_path.c_str());
    }
}
void write_number(const wchar_t *section,const wchar_t *key,int value){wchar_t text[24]={};_snwprintf(text,MM2_COUNT(text),L"%d",value);WritePrivateProfileStringW(section,key,text,g_ini_path.c_str());}
void save_settings(){
    write_number(L"General",L"SettingsVersion",MM2_SETTINGS_VERSION);write_number(L"General",L"IntegerScale",g_settings.integer_scale);
    write_number(L"General",L"PauseOnFocusLoss",g_settings.pause_on_focus_loss);write_number(L"General",L"AutoRunOnLoad",g_auto_run?1:0);
    write_number(L"General",L"FullScreenOnPlay",g_settings.fullscreen);write_number(L"General",L"WelcomeShown",g_welcome_shown?1:0);WritePrivateProfileStringW(L"General",L"RomFolder",g_rom_folder.c_str(),g_ini_path.c_str());
    write_number(L"Display",L"Widescreen",g_settings.wide_screen);write_number(L"Display",L"CorrectAspect",g_settings.correct_aspect);write_number(L"Display",L"VSync",g_settings.vsync);
    write_number(L"Audio",L"Enabled",g_settings.audio_enabled);write_number(L"Audio",L"VolumePercent",g_settings.volume_percent);write_number(L"Audio",L"LatencyMs",g_settings.audio_latency_ms);
    write_number(L"Input",L"Source",g_settings.input_source);write_number(L"Input",L"GamepadDeadzonePercent",g_settings.gamepad_deadzone_percent);
    for(unsigned a=0;a<MM2_NES_BINDING_COUNT;++a){wchar_t keyboard_key[32]={},gamepad_key[32]={};_snwprintf(keyboard_key,MM2_COUNT(keyboard_key),L"Action%u",a);_snwprintf(gamepad_key,MM2_COUNT(gamepad_key),L"GamepadAction%u",a);write_number(L"Input",keyboard_key,(int)g_settings.bindings[0][a]);write_number(L"Input",gamepad_key,g_settings.gamepad_bindings[a]);}
    WritePrivateProfileStringW(nullptr,nullptr,nullptr,g_ini_path.c_str());
}

bool validate_rom(const std::wstring &path,bool report){
    MM2Rom rom{};char error[256]={},reason[256]={};
    if(!mm2_rom_load_wide(path.c_str(),&rom,error,sizeof(error))){
        const std::wstring message=L"ROM load failed. "+widen(error);
        mm2_windows_log_write(message.c_str());
        if(report)MessageBoxW(g_main,message.c_str(),L"Mega Man 2 ROM",MB_OK|MB_ICONERROR);
        return false;
    }
    bool ok=mm2_rom_is_expected(&rom,reason,sizeof(reason))!=0;mm2_rom_free(&rom);
    if(!ok){
        const std::wstring message=L"ROM validation failed. "+widen(reason);
        mm2_windows_log_write(message.c_str());
        if(report)MessageBoxW(g_main,message.c_str(),L"Mega Man 2 ROM",MB_OK|MB_ICONERROR);
        return false;
    }
    g_rom_path=path;status(L"Exact Mega Man 2 (USA) ROM ready. Select Run or press F7.");return true;
}
bool path_is_file(const std::wstring &path){DWORD attributes=GetFileAttributesW(path.c_str());return attributes!=INVALID_FILE_ATTRIBUTES&&!(attributes&FILE_ATTRIBUTE_DIRECTORY);}
bool try_default_rom(){
    std::wstring dir=exe_directory()+L"\\Rom",preferred=dir+L"\\Mega Man 2 (USA).nes";CreateDirectoryW(dir.c_str(),nullptr);std::vector<std::wstring> candidates{preferred};
    WIN32_FIND_DATAW data{};HANDLE find=FindFirstFileW((dir+L"\\*.nes").c_str(),&data);if(find!=INVALID_HANDLE_VALUE){do{if(!(data.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)){std::wstring candidate=dir+L"\\"+data.cFileName;if(_wcsicmp(candidate.c_str(),preferred.c_str())!=0)candidates.push_back(candidate);}}while(FindNextFileW(find,&data));FindClose(find);}
    for(const auto &candidate:candidates)if(path_is_file(candidate)&&validate_rom(candidate,false))return true;return false;
}
bool choose_rom(HWND owner){
    wchar_t path[32768]={};OPENFILENAMEW ofn{};ofn.lStructSize=sizeof(ofn);ofn.hwndOwner=owner;ofn.lpstrTitle=L"Select Mega Man 2 (USA) ROM";
    ofn.lpstrFilter=L"NES ROM (*.nes)\0*.nes\0All files (*.*)\0*.*\0";ofn.lpstrFile=path;ofn.nMaxFile=(DWORD)MM2_COUNT(path);ofn.lpstrInitialDir=g_rom_folder.c_str();ofn.lpstrDefExt=L"nes";ofn.nFilterIndex=1;ofn.Flags=OFN_FILEMUSTEXIST|OFN_PATHMUSTEXIST|OFN_NOCHANGEDIR;
    if(!GetOpenFileNameW(&ofn)||!validate_rom(path,true))return false;
    std::wstring selected_folder=parent_directory(path);if(path_is_directory(selected_folder)){g_rom_folder=selected_folder;save_settings();}return true;
}

void show_information(HWND owner,const wchar_t *title,const wchar_t *body,int width,int height);

struct InfoData{HWND text{},close{},owner{};const wchar_t *body{};};
LRESULT CALLBACK InfoProc(HWND w,UINT m,WPARAM wp,LPARAM lp){
    InfoData *d=(InfoData*)GetWindowLongPtrW(w,GWLP_USERDATA);
    if(m==WM_CREATE){d=(InfoData*)((CREATESTRUCTW*)lp)->lpCreateParams;SetWindowLongPtrW(w,GWLP_USERDATA,(LONG_PTR)d);
        d->text=CreateWindowExW(WS_EX_CLIENTEDGE,L"EDIT",d->body,WS_CHILD|WS_VISIBLE|WS_TABSTOP|ES_LEFT|ES_MULTILINE|ES_READONLY|ES_AUTOVSCROLL|WS_VSCROLL,16,16,10,10,w,nullptr,g_instance,nullptr);
        d->close=CreateWindowW(L"BUTTON",L"&Close",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,0,0,100,32,w,(HMENU)IDOK,g_instance,nullptr);font(d->text);font(d->close);SetFocus(d->close);NotifyWinEvent(EVENT_OBJECT_FOCUS,d->close,OBJID_CLIENT,CHILDID_SELF);return 0;}
    if(m==WM_SIZE&&d){RECT r{};GetClientRect(w,&r);int width=std::max((int)r.right,1),height=std::max((int)r.bottom,1);MoveWindow(d->text,16,16,std::max(width-32,1),std::max(height-72,1),TRUE);MoveWindow(d->close,std::max((width-100)/2,0),std::max(height-44,0),100,32,TRUE);return 0;}
    if(m==WM_COMMAND&&LOWORD(wp)==IDOK){DestroyWindow(w);return 0;}
    if((m==WM_KEYDOWN&&wp==VK_ESCAPE)||m==WM_CLOSE){DestroyWindow(w);return 0;}
    if(m==WM_DESTROY&&d){if(d->owner&&IsWindow(d->owner))SetForegroundWindow(d->owner);delete d;g_info_window=nullptr;return 0;}
    return DefWindowProcW(w,m,wp,lp);
}
void show_information(HWND owner,const wchar_t *title,const wchar_t *body,int width,int height){
    if(g_info_window){ShowWindow(g_info_window,SW_SHOWNORMAL);BringWindowToTop(g_info_window);SetForegroundWindow(g_info_window);return;}
    WNDCLASSW wc{};wc.lpfnWndProc=InfoProc;wc.hInstance=g_instance;wc.lpszClassName=L"MM2InformationWindow";wc.hCursor=LoadCursor(nullptr,IDC_ARROW);wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);RegisterClassW(&wc);
    InfoData *d=new InfoData{};d->owner=owner;d->body=body;
    g_info_window=CreateWindowExW(WS_EX_CONTROLPARENT|WS_EX_DLGMODALFRAME,wc.lpszClassName,title,WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_VISIBLE,CW_USEDEFAULT,CW_USEDEFAULT,width,height,owner,nullptr,g_instance,d);
    if(!g_info_window){delete d;return;}ShowWindow(g_info_window,SW_SHOWNORMAL);BringWindowToTop(g_info_window);SetForegroundWindow(g_info_window);
}
void welcome(HWND owner){if(g_info_window)DestroyWindow(g_info_window);show_information(owner,L"Welcome to Mega Man 2 (NES)",
    L"Welcome to Mega Man 2 (NES) Static Recomp 1.2.2\r\n\r\n"
    L"Frontend shortcuts\r\n"
    L"Escape - Switch between the game and Launcher\r\n"
    L"F1 - Welcome and shortcut guide\r\n"
    L"F2 - Save snapshot\r\n"
    L"F3 - Load snapshot\r\n"
    L"F4 - Settings\r\n"
    L"F5 - Controls\r\n"
    L"F6 - Audio settings\r\n"
    L"F7 - Run the selected ROM\r\n"
    L"F8 - Capture the complete game window\r\n\r\n"
    L"ROM title: Mega Man 2\r\nRegion: USA\r\nFile type: .nes\r\nPlace the ROM in the Rom folder or select Browse ROM.",620,560);}

struct SettingsData{HWND fullscreen,aspect,vsync,pause_focus,scale;};
int combo_value(const int *values,size_t count,int value){for(size_t i=0;i<count;++i)if(values[i]==value)return (int)i;return 0;}
LRESULT CALLBACK SettingsProc(HWND w,UINT m,WPARAM wp,LPARAM lp){
    static SettingsData d{};static const int scales[]={0,1,2,3,4};
    if(m==WM_CREATE){d={};CreateWindowW(L"STATIC",L"Video",WS_CHILD|WS_VISIBLE,18,14,200,22,w,nullptr,g_instance,nullptr);
        d.fullscreen=CreateWindowW(L"BUTTON",L"Start gameplay in &full screen",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,18,40,320,28,w,nullptr,g_instance,nullptr);
        d.aspect=CreateWindowW(L"BUTTON",L"Correct NES pixel &aspect ratio",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,18,70,320,28,w,nullptr,g_instance,nullptr);
        d.vsync=CreateWindowW(L"BUTTON",L"Use &vertical synchronization",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,18,100,320,28,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"STATIC",L"&Scale:",WS_CHILD|WS_VISIBLE,362,44,70,22,w,nullptr,g_instance,nullptr);d.scale=CreateWindowW(L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,430,40,150,180,w,nullptr,g_instance,nullptr);
        for(const wchar_t *s:{L"Fit window",L"1x",L"2x",L"3x",L"4x"})SendMessageW(d.scale,CB_ADDSTRING,0,(LPARAM)s);
        d.pause_focus=CreateWindowW(L"BUTTON",L"&Pause when the game loses focus",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,18,146,390,28,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"STATIC",L"Changes apply the next time gameplay starts.",WS_CHILD|WS_VISIBLE,18,186,562,24,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"BUTTON",L"OK",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,352,226,105,32,w,(HMENU)IDOK,g_instance,nullptr);CreateWindowW(L"BUTTON",L"Cancel",WS_CHILD|WS_VISIBLE|WS_TABSTOP,475,226,105,32,w,(HMENU)IDCANCEL,g_instance,nullptr);
        SendMessageW(d.fullscreen,BM_SETCHECK,g_settings.fullscreen?BST_CHECKED:BST_UNCHECKED,0);SendMessageW(d.aspect,BM_SETCHECK,g_settings.correct_aspect?BST_CHECKED:BST_UNCHECKED,0);SendMessageW(d.vsync,BM_SETCHECK,g_settings.vsync?BST_CHECKED:BST_UNCHECKED,0);SendMessageW(d.pause_focus,BM_SETCHECK,g_settings.pause_on_focus_loss?BST_CHECKED:BST_UNCHECKED,0);
        SendMessageW(d.scale,CB_SETCURSEL,combo_value(scales,MM2_COUNT(scales),g_settings.integer_scale),0);SetFocus(d.fullscreen);return 0;}
    if(m==WM_COMMAND){if(LOWORD(wp)==IDOK){g_settings.fullscreen=SendMessageW(d.fullscreen,BM_GETCHECK,0,0)==BST_CHECKED;g_settings.correct_aspect=SendMessageW(d.aspect,BM_GETCHECK,0,0)==BST_CHECKED;g_settings.vsync=SendMessageW(d.vsync,BM_GETCHECK,0,0)==BST_CHECKED;g_settings.pause_on_focus_loss=SendMessageW(d.pause_focus,BM_GETCHECK,0,0)==BST_CHECKED;int s=(int)SendMessageW(d.scale,CB_GETCURSEL,0,0);if(s>=0&&s<(int)MM2_COUNT(scales))g_settings.integer_scale=scales[s];save_settings();status(L"Settings saved. They apply when gameplay next starts.");DestroyWindow(w);return 0;}if(LOWORD(wp)==IDCANCEL){DestroyWindow(w);return 0;}}
    if((m==WM_KEYDOWN&&wp==VK_ESCAPE)||m==WM_CLOSE){DestroyWindow(w);return 0;}if(m==WM_DESTROY&&w==g_settings_window){g_settings_window=nullptr;return 0;}return DefWindowProcW(w,m,wp,lp);
}
void open_settings(HWND owner){if(g_settings_window){ShowWindow(g_settings_window,SW_SHOW);SetForegroundWindow(g_settings_window);return;}WNDCLASSW wc{};wc.lpfnWndProc=SettingsProc;wc.hInstance=g_instance;wc.lpszClassName=L"MM2ModernSettings";wc.hCursor=LoadCursor(nullptr,IDC_ARROW);wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);RegisterClassW(&wc);g_settings_window=CreateWindowExW(WS_EX_CONTROLPARENT,wc.lpszClassName,L"Mega Man 2 Settings",WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_VISIBLE,CW_USEDEFAULT,CW_USEDEFAULT,620,320,owner,nullptr,g_instance,nullptr);}

struct AudioData{HWND enabled{},volume{},latency{};};
LRESULT CALLBACK AudioProc(HWND w,UINT m,WPARAM wp,LPARAM lp){
    static AudioData d{};static const int latencies[]={20,40,60,80,120,250};
    if(m==WM_CREATE){d={};CreateWindowW(L"STATIC",L"Audio output",WS_CHILD|WS_VISIBLE,18,14,260,22,w,nullptr,g_instance,nullptr);
        d.enabled=CreateWindowW(L"BUTTON",L"Enable &audio output",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,18,42,260,28,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"STATIC",L"&Volume (0-100):",WS_CHILD|WS_VISIBLE,18,88,126,22,w,nullptr,g_instance,nullptr);d.volume=CreateWindowW(L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST|WS_VSCROLL,150,84,96,280,w,nullptr,g_instance,nullptr);
        for(int value=0;value<=100;++value){wchar_t label[8]={};_snwprintf(label,MM2_COUNT(label),L"%d%%",value);SendMessageW(d.volume,CB_ADDSTRING,0,(LPARAM)label);}
        CreateWindowW(L"STATIC",L"&Latency:",WS_CHILD|WS_VISIBLE,18,128,86,22,w,nullptr,g_instance,nullptr);d.latency=CreateWindowW(L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,110,124,120,190,w,nullptr,g_instance,nullptr);
        for(const wchar_t *s:{L"20 ms",L"40 ms",L"60 ms",L"80 ms",L"120 ms",L"250 ms"})SendMessageW(d.latency,CB_ADDSTRING,0,(LPARAM)s);
        CreateWindowW(L"STATIC",L"Volume applies immediately. Output and latency apply when gameplay is next started.",WS_CHILD|WS_VISIBLE,18,170,430,24,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"BUTTON",L"OK",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,226,210,105,32,w,(HMENU)IDOK,g_instance,nullptr);CreateWindowW(L"BUTTON",L"Cancel",WS_CHILD|WS_VISIBLE|WS_TABSTOP,349,210,105,32,w,(HMENU)IDCANCEL,g_instance,nullptr);
        SendMessageW(d.enabled,BM_SETCHECK,g_settings.audio_enabled?BST_CHECKED:BST_UNCHECKED,0);SendMessageW(d.volume,CB_SETCURSEL,g_settings.volume_percent,0);SendMessageW(d.latency,CB_SETCURSEL,combo_value(latencies,MM2_COUNT(latencies),g_settings.audio_latency_ms),0);SetFocus(d.enabled);return 0;}
    if(m==WM_COMMAND){if(LOWORD(wp)==IDOK){g_settings.audio_enabled=SendMessageW(d.enabled,BM_GETCHECK,0,0)==BST_CHECKED;int v=(int)SendMessageW(d.volume,CB_GETCURSEL,0,0),l=(int)SendMessageW(d.latency,CB_GETCURSEL,0,0);if(v>=0&&v<=100)g_settings.volume_percent=v;if(l>=0&&l<(int)MM2_COUNT(latencies))g_settings.audio_latency_ms=latencies[l];save_settings();mm2_windows_live_set_next_settings(&g_settings);mm2_windows_live_set_volume(g_settings.volume_percent);status(L"Audio settings saved. Volume was applied immediately; output and latency apply when gameplay is next started.");DestroyWindow(w);return 0;}if(LOWORD(wp)==IDCANCEL){DestroyWindow(w);return 0;}}
    if((m==WM_KEYDOWN&&wp==VK_ESCAPE)||m==WM_CLOSE){DestroyWindow(w);return 0;}if(m==WM_DESTROY&&w==g_audio_window){g_audio_window=nullptr;return 0;}return DefWindowProcW(w,m,wp,lp);
}
void open_audio(HWND owner){if(g_audio_window){ShowWindow(g_audio_window,SW_SHOW);SetForegroundWindow(g_audio_window);return;}WNDCLASSW wc{};wc.lpfnWndProc=AudioProc;wc.hInstance=g_instance;wc.lpszClassName=L"MM2ModernAudio";wc.hCursor=LoadCursor(nullptr,IDC_ARROW);wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);RegisterClassW(&wc);g_audio_window=CreateWindowExW(WS_EX_CONTROLPARENT,wc.lpszClassName,L"Mega Man 2 Audio Settings",WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_VISIBLE,CW_USEDEFAULT,CW_USEDEFAULT,490,300,owner,nullptr,g_instance,nullptr);}

const wchar_t *action_name(unsigned a){static const wchar_t *names[8]={L"Up",L"Down",L"Left",L"Right",L"B",L"A",L"Start",L"Select"};return a<8?names[a]:L"Unknown";}
std::wstring key_name(UINT key){switch(key){case VK_UP:return L"Up Arrow";case VK_DOWN:return L"Down Arrow";case VK_LEFT:return L"Left Arrow";case VK_RIGHT:return L"Right Arrow";case VK_TAB:return L"Tab";case VK_SHIFT:return L"Shift";default:break;}UINT scan=MapVirtualKeyW(key,MAPVK_VK_TO_VSC);wchar_t name[64]={};if(GetKeyNameTextW((LONG)(scan<<16),name,(int)MM2_COUNT(name))>0)return name;return L"Key "+std::to_wstring(key);}
constexpr int keyboard_binding_base=5000;
constexpr int gamepad_binding_base=5100;
constexpr UINT_PTR gamepad_capture_timer=1;
constexpr int binding_deadzones[]={20,35,50,65};

struct BindData {
    HWND keyboard[MM2_NES_BINDING_COUNT]{},gamepad[MM2_NES_BINDING_COUNT]{};
    HWND source{},deadzone{},device{};
    UINT keys[MM2_NES_BINDING_COUNT]{};
    int controls[MM2_GAMEPAD_BINDING_COUNT]{};
    MM2GamepadInputWin32 input{};
    SDL_JoystickID device_id{};
    int action{-1};
    bool capture_gamepad{};
};

int binding_deadzone(const BindData &d){
    const auto index=SendMessageW(d.deadzone,CB_GETCURSEL,0,0);
    return index>=0&&index<(LRESULT)MM2_COUNT(binding_deadzones)
        ? binding_deadzones[index] : g_settings.gamepad_deadzone_percent;
}

void binding_text(const BindData &d,unsigned action,bool gamepad){
    std::wstring text=std::wstring(action_name(action))+L": ";
    if(gamepad){
        wchar_t name[128]{};
        mm2_gamepad_win32_control_display_name(&d.input,d.controls[action],name,MM2_COUNT(name));
        text+=name;
    }else{
        text+=key_name(d.keys[action]);
    }
    SetWindowTextW(gamepad?d.gamepad[action]:d.keyboard[action],text.c_str());
}

void finish_binding(BindData &d,bool restore_focus){
    if(d.action<0)return;
    const auto action=(unsigned)d.action;
    binding_text(d,action,d.capture_gamepad);
    d.action=-1;
    if(restore_focus)SetFocus(d.capture_gamepad?d.gamepad[action]:d.keyboard[action]);
}

template<typename Control>
void apply_binding(BindData &d,Control (&bindings)[MM2_NES_BINDING_COUNT],Control control){
    const auto action=(unsigned)d.action;
    for(unsigned other=0;other<MM2_NES_BINDING_COUNT;++other){
        if(other!=action&&bindings[other]==control){
            bindings[other]=bindings[action];
            binding_text(d,other,d.capture_gamepad);
        }
    }
    bindings[action]=control;
    finish_binding(d,true);
}

void poll_binding_gamepad(BindData &d){
    const int control=mm2_gamepad_win32_capture_control(&d.input,binding_deadzone(d));
    const SDL_JoystickID device=d.input.handle?SDL_GetGamepadID(d.input.handle):0;
    if(device!=d.device_id){
        d.device_id=device;
        SetWindowTextW(d.device,mm2_gamepad_win32_name(&d.input));
        for(unsigned action=0;action<MM2_NES_BINDING_COUNT;++action)
            if(!d.capture_gamepad||(int)action!=d.action)binding_text(d,action,true);
    }
    if(control&&d.action>=0&&d.capture_gamepad)apply_binding(d,d.controls,control);
}

LRESULT CALLBACK BindProc(HWND w,UINT m,WPARAM wp,LPARAM lp){
    static BindData d{};
    if(m==WM_CREATE){
        d={};
        std::memcpy(d.keys,g_settings.bindings[0],sizeof(d.keys));
        std::memcpy(d.controls,g_settings.gamepad_bindings,sizeof(d.controls));
        CreateWindowW(L"STATIC",L"Input source:",WS_CHILD|WS_VISIBLE,18,14,90,22,w,nullptr,g_instance,nullptr);
        d.source=CreateWindowW(L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,110,10,205,120,w,(HMENU)4900,g_instance,nullptr);
        for(const wchar_t *s:{L"Keyboard",L"Gamepad",L"Keyboard + gamepad"})SendMessageW(d.source,CB_ADDSTRING,0,(LPARAM)s);
        SendMessageW(d.source,CB_SETCURSEL,g_settings.input_source,0);
        CreateWindowW(L"STATIC",L"Deadzone:",WS_CHILD|WS_VISIBLE,338,14,80,22,w,nullptr,g_instance,nullptr);
        d.deadzone=CreateWindowW(L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,426,10,110,120,w,(HMENU)4901,g_instance,nullptr);
        for(const wchar_t *s:{L"20%",L"35%",L"50%",L"65%"})SendMessageW(d.deadzone,CB_ADDSTRING,0,(LPARAM)s);
        const int deadzone=g_settings.gamepad_deadzone_percent;
        const int dead_index=deadzone<=20?0:deadzone<=35?1:deadzone<=50?2:3;
        SendMessageW(d.deadzone,CB_SETCURSEL,dead_index,0);

        const auto database=exe_directory()+L"\\gamecontrollerdb.txt";
        mm2_gamepad_win32_initialize(&d.input,database.c_str(),MM2_GAMEPAD_CAPTURE_PLAYER,nullptr);
        d.device=CreateWindowW(L"STATIC",mm2_gamepad_win32_name(&d.input),WS_CHILD|WS_VISIBLE,286,72,250,22,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"STATIC",L"Keyboard",WS_CHILD|WS_VISIBLE,18,48,250,22,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"STATIC",L"Gamepad",WS_CHILD|WS_VISIBLE,286,48,250,22,w,nullptr,g_instance,nullptr);
        for(unsigned action=0;action<MM2_NES_BINDING_COUNT;++action){
            const int y=100+(int)action*38;
            d.keyboard[action]=CreateWindowW(L"BUTTON",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP,18,y,250,30,w,(HMENU)(INT_PTR)(keyboard_binding_base+action),g_instance,nullptr);
            d.gamepad[action]=CreateWindowW(L"BUTTON",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP,286,y,250,30,w,(HMENU)(INT_PTR)(gamepad_binding_base+action),g_instance,nullptr);
            binding_text(d,action,false);
            binding_text(d,action,true);
        }
        CreateWindowW(L"STATIC",L"Choose an action, then press a key or gamepad control. Escape cancels capture. Assigning an existing control swaps the two bindings.",WS_CHILD|WS_VISIBLE,18,414,518,48,w,nullptr,g_instance,nullptr);
        CreateWindowW(L"BUTTON",L"OK",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,308,474,105,32,w,(HMENU)IDOK,g_instance,nullptr);
        CreateWindowW(L"BUTTON",L"Cancel",WS_CHILD|WS_VISIBLE|WS_TABSTOP,431,474,105,32,w,(HMENU)IDCANCEL,g_instance,nullptr);
        SetTimer(w,gamepad_capture_timer,30,nullptr);
        SetFocus(d.keyboard[0]);
        return 0;
    }
    if(m==WM_TIMER&&wp==gamepad_capture_timer){
        if(GetActiveWindow()==w)poll_binding_gamepad(d);
        return 0;
    }
    if(m==WM_ACTIVATE){
        const bool focused=LOWORD(wp)!=WA_INACTIVE&&HIWORD(wp)==0;
        mm2_gamepad_win32_set_capture_focus(focused);
        if(!focused)finish_binding(d,false);
    }
    if(m==WM_COMMAND){
        const int id=LOWORD(wp);
        const bool keyboard=id>=keyboard_binding_base&&id<keyboard_binding_base+MM2_NES_BINDING_COUNT;
        const bool gamepad=id>=gamepad_binding_base&&id<gamepad_binding_base+MM2_NES_BINDING_COUNT;
        if(keyboard||gamepad){
            finish_binding(d,false);
            if(gamepad)poll_binding_gamepad(d);
            d.capture_gamepad=gamepad;
            d.action=id-(gamepad?gamepad_binding_base:keyboard_binding_base);
            SetWindowTextW(gamepad?d.gamepad[d.action]:d.keyboard[d.action],
                gamepad?L"Press a gamepad control...":L"Press a key...");
            SetFocus(w);
            return 0;
        }
        if(id==IDOK){
            const auto source=SendMessageW(d.source,CB_GETCURSEL,0,0);
            if(source>=MM2_INPUT_KEYBOARD&&source<=MM2_INPUT_COMBINED)g_settings.input_source=(int)source;
            g_settings.gamepad_deadzone_percent=binding_deadzone(d);
            std::memcpy(g_settings.bindings[0],d.keys,sizeof(d.keys));
            std::memcpy(g_settings.gamepad_bindings,d.controls,sizeof(d.controls));
            save_settings();
            mm2_windows_live_set_next_settings(&g_settings);
            status(L"Controls saved. They apply when gameplay is next started.");
            DestroyWindow(w);
            return 0;
        }
        if(id==IDCANCEL){DestroyWindow(w);return 0;}
    }
    if(m==WM_KEYDOWN&&d.action>=0){
        const auto key=(UINT)wp;
        if(key==VK_ESCAPE)finish_binding(d,true);
        else if(!d.capture_gamepad){
            if(frontend_key(key)){
                SetWindowTextW(d.keyboard[d.action],L"F1-F8 are reserved. Press another key.");
            }else{
                apply_binding(d,d.keys,key);
            }
        }
        return 0;
    }
    if((m==WM_KEYDOWN&&wp==VK_ESCAPE)||m==WM_CLOSE){DestroyWindow(w);return 0;}
    if(m==WM_DESTROY){
        KillTimer(w,gamepad_capture_timer);
        mm2_gamepad_win32_set_capture_focus(false);
        mm2_gamepad_win32_shutdown(&d.input);
        if(w==g_bindings_window)g_bindings_window=nullptr;
        return 0;
    }
    return DefWindowProcW(w,m,wp,lp);
}
void open_bindings(HWND owner){if(g_bindings_window){ShowWindow(g_bindings_window,SW_SHOW);SetForegroundWindow(g_bindings_window);return;}WNDCLASSW wc{};wc.lpfnWndProc=BindProc;wc.hInstance=g_instance;wc.lpszClassName=L"MM2ModernBindings";wc.hCursor=LoadCursor(nullptr,IDC_ARROW);wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);RegisterClassW(&wc);g_bindings_window=CreateWindowExW(WS_EX_CONTROLPARENT,wc.lpszClassName,L"Mega Man 2 Controls",WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_VISIBLE,CW_USEDEFAULT,CW_USEDEFAULT,578,585,owner,nullptr,g_instance,nullptr);}

void visible(bool show){int c=show?SW_SHOW:SW_HIDE;for(HWND w:{g_browse,g_play,g_reset,g_audio,g_settings_button,g_keys,g_fullscreen,g_widescreen,g_autorun,g_status})ShowWindow(w,c);}
void layout(HWND w){RECT r{};GetClientRect(w,&r);int width=std::max((int)r.right,1),height=std::max((int)r.bottom,1),top=g_hidden?0:80;
    if(!g_hidden){MoveWindow(g_browse,8,8,92,30,TRUE);MoveWindow(g_play,106,8,72,30,TRUE);MoveWindow(g_reset,184,8,66,30,TRUE);MoveWindow(g_audio,256,8,66,30,TRUE);MoveWindow(g_settings_button,328,8,82,30,TRUE);MoveWindow(g_keys,416,8,76,30,TRUE);MoveWindow(g_fullscreen,498,10,112,26,TRUE);MoveWindow(g_widescreen,616,10,138,26,TRUE);MoveWindow(g_autorun,760,10,100,26,TRUE);MoveWindow(g_status,12,48,std::max(width-24,1),24,TRUE);}MoveWindow(g_video,0,top,width,std::max(height-top,1),TRUE);mm2_windows_live_resize(0,top,width,std::max(height-top,1));}
void update(){bool running=mm2_windows_live_is_running();EnableWindow(g_browse,!running);EnableWindow(g_play,running);EnableWindow(g_reset,running);SetWindowTextW(g_browse,g_rom_path.empty()?L"&Browse":L"&Run");SetWindowTextW(g_play,running&&!mm2_windows_live_is_paused()?L"&Pause":L"&Play");SendMessageW(g_fullscreen,BM_SETCHECK,g_settings.fullscreen?BST_CHECKED:BST_UNCHECKED,0);SendMessageW(g_widescreen,BM_SETCHECK,effective_widescreen()?BST_CHECKED:BST_UNCHECKED,0);SendMessageW(g_autorun,BM_SETCHECK,g_auto_run?BST_CHECKED:BST_UNCHECKED,0);ShowWindow(g_video,running?SW_HIDE:SW_SHOW);
    EnableMenuItem(g_menu,CMD_BROWSE,MF_BYCOMMAND|(running?MF_GRAYED:MF_ENABLED));EnableMenuItem(g_menu,CMD_RUN,MF_BYCOMMAND|(!running&&!g_rom_path.empty()?MF_ENABLED:MF_GRAYED));EnableMenuItem(g_menu,CMD_PLAY,MF_BYCOMMAND|(running?MF_ENABLED:MF_GRAYED));EnableMenuItem(g_menu,CMD_RESET,MF_BYCOMMAND|(running?MF_ENABLED:MF_GRAYED));EnableMenuItem(g_menu,CMD_SAVE,MF_BYCOMMAND|(running?MF_ENABLED:MF_GRAYED));EnableMenuItem(g_menu,CMD_LOAD,MF_BYCOMMAND|(running?MF_ENABLED:MF_GRAYED));EnableMenuItem(g_menu,CMD_SCREENSHOT,MF_BYCOMMAND|(running?MF_ENABLED:MF_GRAYED));CheckMenuItem(g_menu,CMD_FULLSCREEN,MF_BYCOMMAND|(g_settings.fullscreen?MF_CHECKED:MF_UNCHECKED));CheckMenuItem(g_menu,CMD_WIDESCREEN,MF_BYCOMMAND|(effective_widescreen()?MF_CHECKED:MF_UNCHECKED));CheckMenuItem(g_menu,CMD_AUTORUN,MF_BYCOMMAND|(g_auto_run?MF_CHECKED:MF_UNCHECKED));DrawMenuBar(g_main);}
void launcher_view(HWND w){if(!g_hidden)return;if(g_fullscreen_active){SetWindowLongPtrW(w,GWL_STYLE,g_saved_style);SetWindowLongPtrW(w,GWL_EXSTYLE,g_saved_ex_style);SetWindowPos(w,nullptr,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE|SWP_NOZORDER|SWP_NOACTIVATE|SWP_FRAMECHANGED);g_fullscreen_active=false;}SetWindowPlacement(w,&g_saved_placement);SetMenu(w,g_menu);g_hidden=false;visible(true);SetWindowTextW(w,L"Launcher");layout(w);DrawMenuBar(w);InvalidateRect(w,nullptr,TRUE);}
void game_view(HWND w){if(g_hidden)return;g_saved_style=(DWORD)GetWindowLongPtrW(w,GWL_STYLE);g_saved_ex_style=(DWORD)GetWindowLongPtrW(w,GWL_EXSTYLE);g_saved_placement.length=sizeof(g_saved_placement);GetWindowPlacement(w,&g_saved_placement);g_hidden=true;visible(false);SetMenu(w,nullptr);
    if(g_settings.fullscreen){MONITORINFO mi{sizeof(mi)};GetMonitorInfoW(MonitorFromWindow(w,MONITOR_DEFAULTTONEAREST),&mi);g_fullscreen_active=true;SetWindowLongPtrW(w,GWL_STYLE,g_saved_style&~(DWORD)WS_OVERLAPPEDWINDOW);SetWindowLongPtrW(w,GWL_EXSTYLE,g_saved_ex_style&~(DWORD)WS_EX_WINDOWEDGE);SetWindowPos(w,HWND_TOP,mi.rcMonitor.left,mi.rcMonitor.top,mi.rcMonitor.right-mi.rcMonitor.left,mi.rcMonitor.bottom-mi.rcMonitor.top,SWP_FRAMECHANGED|SWP_SHOWWINDOW);}else{g_fullscreen_active=false;ShowWindow(w,SW_MAXIMIZE);}SetWindowTextW(w,L"Mega Man 2 (NES)");layout(w);InvalidateRect(w,nullptr,TRUE);SetFocus(w);}
bool start(HWND w,bool report=true){
    if(g_rom_path.empty()){
        if(report)MessageBoxW(w,L"Place Mega Man 2 (USA).nes in the Rom folder or select Browse ROM.",L"Mega Man 2 ROM",MB_OK|MB_ICONINFORMATION);
        return false;
    }
    wchar_t error[512]={};
    MM2LiveSettings session_settings=g_settings;
    session_settings.wide_screen=effective_widescreen();
    mm2_windows_live_set_next_settings(&session_settings);
    if(!mm2_windows_live_start(w,g_rom_path.c_str(),error,MM2_COUNT(error),g_direct_play)){
        const wchar_t *message=error[0]?error:L"The Mega Man 2 static core could not start.";
        mm2_windows_log_write(message);
        if(report)MessageBoxW(w,message,L"Play",MB_OK|MB_ICONERROR);
        return false;
    }
    wchar_t mode[128]{};
    swprintf_s(mode,MM2_COUNT(mode),L"Gameplay started. Full screen=%d, Wide Screen=%d.",
        g_settings.fullscreen!=0,session_settings.wide_screen!=0);
    mm2_windows_log_write(mode);
    layout(w);update();status(L"Mega Man 2 is running at native NTSC timing. Press Escape to return to Launcher.");game_view(w);
    return true;
}
void toggle_play(HWND w){if(!mm2_windows_live_is_running())return;if(mm2_windows_live_is_paused()){mm2_windows_live_toggle_pause();status(L"Mega Man 2 resumed. Press Escape to return to Launcher.");update();game_view(w);}else{mm2_windows_live_toggle_pause();launcher_view(w);status(L"Paused. Choose Play or press Escape to continue.");update();SetFocus(g_play);NotifyWinEvent(EVENT_OBJECT_FOCUS,g_play,OBJID_CLIENT,CHILDID_SELF);}}
void reset_game(HWND w){if(mm2_windows_live_is_running()){mm2_windows_live_stop();start(w);status(L"Mega Man 2 reset from frame 0.");}}

LRESULT CALLBACK MainProc(HWND w,UINT m,WPARAM wp,LPARAM lp){switch(m){
    case WM_CREATE:g_main=w;g_video=CreateWindowExW(WS_EX_NOACTIVATE,L"STATIC",L"",WS_CHILD|WS_VISIBLE|WS_DISABLED|SS_BLACKRECT,0,80,1,1,w,nullptr,g_instance,nullptr);g_browse=CreateWindowW(L"BUTTON",L"&Browse",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,8,8,92,30,w,(HMENU)TOOL_BROWSE,g_instance,nullptr);g_play=CreateWindowW(L"BUTTON",L"&Play",WS_CHILD|WS_VISIBLE|WS_TABSTOP,106,8,72,30,w,(HMENU)TOOL_PLAY,g_instance,nullptr);g_reset=CreateWindowW(L"BUTTON",L"&Reset",WS_CHILD|WS_VISIBLE|WS_TABSTOP,184,8,66,30,w,(HMENU)TOOL_RESET,g_instance,nullptr);g_audio=CreateWindowW(L"BUTTON",L"&Audio",WS_CHILD|WS_VISIBLE|WS_TABSTOP,256,8,66,30,w,(HMENU)TOOL_AUDIO,g_instance,nullptr);g_settings_button=CreateWindowW(L"BUTTON",L"&Settings",WS_CHILD|WS_VISIBLE|WS_TABSTOP,328,8,82,30,w,(HMENU)TOOL_SETTINGS,g_instance,nullptr);g_keys=CreateWindowW(L"BUTTON",L"&Controls",WS_CHILD|WS_VISIBLE|WS_TABSTOP,416,8,76,30,w,(HMENU)TOOL_KEYS,g_instance,nullptr);g_fullscreen=CreateWindowW(L"BUTTON",L"&Full screen",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,498,10,112,26,w,(HMENU)TOOL_FULLSCREEN,g_instance,nullptr);g_widescreen=CreateWindowW(L"BUTTON",L"&Wide Screen (v1)",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,616,10,138,26,w,(HMENU)TOOL_WIDESCREEN,g_instance,nullptr);g_autorun=CreateWindowW(L"BUTTON",L"Auto-&Run",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,760,10,100,26,w,(HMENU)TOOL_AUTORUN,g_instance,nullptr);g_status=CreateWindowW(L"STATIC",L"Place Mega Man 2 (USA).nes in the portable Rom folder.",WS_CHILD|WS_VISIBLE|SS_LEFT|SS_NOPREFIX,12,48,800,24,w,nullptr,g_instance,nullptr);for(HWND c:{g_browse,g_play,g_reset,g_audio,g_settings_button,g_keys,g_fullscreen,g_widescreen,g_autorun,g_status})font(c);update();return 0;
    case WM_SIZE:layout(w);return 0;case WM_GETMINMAXINFO:((MINMAXINFO*)lp)->ptMinTrackSize={900,580};return 0;
    case WM_COMMAND:{unsigned id=LOWORD(wp);if(id==CMD_BROWSE||(id==TOOL_BROWSE&&g_rom_path.empty())){if(choose_rom(w)){if(mm2_windows_live_is_running())mm2_windows_live_stop();update();}return 0;}if(id==CMD_RUN||(id==TOOL_BROWSE&&!g_rom_path.empty())){if(!mm2_windows_live_is_running())start(w);return 0;}if(id==TOOL_PLAY||id==CMD_PLAY){toggle_play(w);return 0;}if(id==TOOL_RESET||id==CMD_RESET){reset_game(w);return 0;}if(id==TOOL_AUDIO||id==CMD_AUDIO){open_audio(w);return 0;}if(id==TOOL_SETTINGS||id==CMD_SETTINGS){open_settings(w);return 0;}if(id==TOOL_KEYS||id==CMD_KEYS){open_bindings(w);return 0;}if(id==TOOL_FULLSCREEN||id==CMD_FULLSCREEN){if(id==CMD_FULLSCREEN)SendMessageW(g_fullscreen,BM_SETCHECK,SendMessageW(g_fullscreen,BM_GETCHECK,0,0)==BST_CHECKED?BST_UNCHECKED:BST_CHECKED,0);g_settings.fullscreen=SendMessageW(g_fullscreen,BM_GETCHECK,0,0)==BST_CHECKED;save_settings();update();return 0;}if(id==TOOL_WIDESCREEN||id==CMD_WIDESCREEN){if(id==CMD_WIDESCREEN)SendMessageW(g_widescreen,BM_SETCHECK,SendMessageW(g_widescreen,BM_GETCHECK,0,0)==BST_CHECKED?BST_UNCHECKED:BST_CHECKED,0);g_widescreen_override=-1;g_settings.wide_screen=SendMessageW(g_widescreen,BM_GETCHECK,0,0)==BST_CHECKED;mm2_windows_live_set_wide_screen(g_settings.wide_screen!=0);save_settings();update();status(g_settings.wide_screen?L"Wide Screen enabled for supported gameplay.":L"Wide Screen disabled.");return 0;}if(id==TOOL_AUTORUN||id==CMD_AUTORUN){if(id==CMD_AUTORUN)SendMessageW(g_autorun,BM_SETCHECK,SendMessageW(g_autorun,BM_GETCHECK,0,0)==BST_CHECKED?BST_UNCHECKED:BST_CHECKED,0);g_auto_run=SendMessageW(g_autorun,BM_GETCHECK,0,0)==BST_CHECKED;save_settings();update();status(g_auto_run?L"Auto-Run enabled for the next launch.":L"Auto-Run disabled.");return 0;}if(id==CMD_SAVE){if(!mm2_windows_live_quick_save())MessageBoxW(w,L"The snapshot could not be saved.",L"Save Snapshot",MB_OK|MB_ICONERROR);return 0;}if(id==CMD_LOAD){if(!mm2_windows_live_quick_load())MessageBoxW(w,L"No compatible snapshot was found.",L"Load Snapshot",MB_OK|MB_ICONINFORMATION);return 0;}if(id==CMD_SCREENSHOT){if(!mm2_windows_live_take_screenshot())MessageBoxW(w,L"The game-window screenshot could not be saved.",L"Capture Game Window",MB_OK|MB_ICONERROR);return 0;}if(id==CMD_ABOUT){show_information(w,L"About Mega Man 2",L"F1 - Welcome and shortcut guide\r\n\r\nMega Man 2 NES Static Recompilation\r\n\r\nTitle: Mega Man 2\r\nRegion: USA\r\nFile type: .nes",520,320);return 0;}if(id==CMD_EXIT){DestroyWindow(w);return 0;}break;}
    case WM_KEYDOWN:if(wp==VK_ESCAPE){if((lp&(1L<<30))==0)toggle_play(w);return 0;}if(wp==VK_F1){if(g_hidden)toggle_play(w);welcome(w);return 0;}if(wp==VK_F2){SendMessageW(w,WM_COMMAND,CMD_SAVE,0);return 0;}if(wp==VK_F3){SendMessageW(w,WM_COMMAND,CMD_LOAD,0);return 0;}if(wp==VK_F4){if(g_hidden)toggle_play(w);open_settings(w);return 0;}if(wp==VK_F5){if(g_hidden)toggle_play(w);open_bindings(w);return 0;}if(wp==VK_F6){if(g_hidden)toggle_play(w);open_audio(w);return 0;}if(wp==VK_F7){if(!mm2_windows_live_is_running())SendMessageW(w,WM_COMMAND,CMD_RUN,0);return 0;}if(wp==VK_F8){SendMessageW(w,WM_COMMAND,CMD_SCREENSHOT,0);return 0;}if(mm2_windows_live_is_running()&&!mm2_windows_live_is_paused()){mm2_windows_live_key_event(WM_KEYDOWN,wp);return 0;}break;
    case WM_KEYUP:if(mm2_windows_live_is_running()&&!mm2_windows_live_is_paused()){mm2_windows_live_key_event(WM_KEYUP,wp);return 0;}break;
    case WM_KILLFOCUS:if(g_settings.pause_on_focus_loss&&g_hidden&&mm2_windows_live_is_running()&&!mm2_windows_live_is_paused())toggle_play(w);return 0;
    case MM2_WM_RUNTIME_FAILURE:g_exit_code=kRuntimeFailure;SendMessageW(w,WM_CLOSE,0,0);return 0;
    case WM_CLOSE:mm2_windows_live_stop();DestroyWindow(w);return 0;case WM_DESTROY:PostQuitMessage(g_exit_code);return 0;default:break;}return DefWindowProcW(w,m,wp,lp);}

HMENU make_menu(){HMENU bar=CreateMenu(),file=CreatePopupMenu(),settings=CreatePopupMenu();AppendMenuW(file,MF_STRING,CMD_BROWSE,L"&Browse ROM...");AppendMenuW(file,MF_STRING,CMD_RUN,L"&Run\tF7");AppendMenuW(file,MF_STRING,CMD_PLAY,L"&Play\tEscape");AppendMenuW(file,MF_STRING,CMD_RESET,L"&Reset ROM");AppendMenuW(file,MF_SEPARATOR,0,nullptr);AppendMenuW(file,MF_STRING,CMD_SAVE,L"Save Snapshot\tF2");AppendMenuW(file,MF_STRING,CMD_LOAD,L"Load Snapshot\tF3");AppendMenuW(file,MF_STRING,CMD_SCREENSHOT,L"Capture Game Window\tF8");AppendMenuW(file,MF_SEPARATOR,0,nullptr);AppendMenuW(file,MF_STRING,CMD_EXIT,L"E&xit\tAlt+F4");AppendMenuW(settings,MF_STRING,CMD_SETTINGS,L"&Settings...\tF4");AppendMenuW(settings,MF_STRING,CMD_KEYS,L"&Controls...\tF5");AppendMenuW(settings,MF_STRING,CMD_AUDIO,L"&Audio Settings...\tF6");AppendMenuW(settings,MF_SEPARATOR,0,nullptr);AppendMenuW(settings,MF_STRING,CMD_FULLSCREEN,L"Use &Full Screen When Playing");AppendMenuW(settings,MF_STRING,CMD_WIDESCREEN,L"Use &Wide Screen (v1) During Supported Gameplay");AppendMenuW(settings,MF_STRING,CMD_AUTORUN,L"&Auto-Run at Startup");AppendMenuW(settings,MF_SEPARATOR,0,nullptr);AppendMenuW(settings,MF_STRING,CMD_ABOUT,L"&About");AppendMenuW(bar,MF_POPUP,(UINT_PTR)file,L"&File");AppendMenuW(bar,MF_POPUP,(UINT_PTR)settings,L"&Settings");return bar;}
}

int WINAPI wWinMain(HINSTANCE h,HINSTANCE,LPWSTR,int){
    g_instance=h;
    mm2_windows_log_open(exe_directory().c_str());
    mm2_windows_log_write(L"Mega Man 2 launcher started.");
    LaunchOptions options;
    if(!parse_launch_options(options)){
        mm2_windows_log_write(L"Invalid launch options. Use --game <ROM path>, --port-widescreen or --no-port-widescreen.");
        return kInvalidArguments;
    }
    const bool direct_play=!options.game.empty();
    g_direct_play=direct_play;
    if(direct_play&&!validate_rom(options.game,false))return kInvalidRom;
    load_settings(direct_play);
    g_widescreen_override=options.widescreen;
    g_menu=make_menu();
    WNDCLASSW wc{};
    wc.lpfnWndProc=MainProc;
    wc.hInstance=h;
    wc.lpszClassName=L"MM2ModernLauncher";
    wc.hCursor=LoadCursor(nullptr,IDC_ARROW);
    wc.hIcon=LoadIcon(nullptr,IDI_APPLICATION);
    wc.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH);
    if(!RegisterClassW(&wc)&&GetLastError()!=ERROR_CLASS_ALREADY_EXISTS){
        const wchar_t *message=L"Windows could not register the Launcher window class.";
        mm2_windows_log_write(message);
        if(!direct_play)MessageBoxW(nullptr,message,L"Launcher startup error",MB_OK|MB_ICONERROR);
        return kStartupFailure;
    }
    HWND w=CreateWindowExW(WS_EX_CONTROLPARENT,wc.lpszClassName,L"Launcher",WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,CW_USEDEFAULT,1024,820,nullptr,g_menu,h,nullptr);
    if(!w){
        mm2_windows_log_write(L"Windows could not create the Launcher window.");
        return kStartupFailure;
    }
    if(direct_play){
        if(!start(w,false)){
            DestroyWindow(w);
            return kStartupFailure;
        }
    }else{
        bool found=try_default_rom();
        update();ShowWindow(w,SW_SHOWNORMAL);UpdateWindow(w);BringWindowToTop(w);SetForegroundWindow(w);
        if(!g_welcome_shown){g_welcome_shown=true;save_settings();welcome(w);}
        if(found&&g_auto_run)PostMessageW(w,WM_COMMAND,CMD_RUN,0);
    }
    MSG msg{};bool running=true;while(running){HANDLE timer=mm2_windows_live_frame_timer();DWORD count=timer?1u:0u;DWORD result=MsgWaitForMultipleObjectsEx(count,timer?&timer:nullptr,INFINITE,QS_ALLINPUT,MWMO_INPUTAVAILABLE);bool timer_ready=timer&&result==WAIT_OBJECT_0;if(result==WAIT_FAILED)break;
        while(PeekMessageW(&msg,nullptr,0,0,PM_REMOVE)){if(msg.message==WM_QUIT){running=false;break;}if(g_info_window&&IsDialogMessageW(g_info_window,&msg))continue;if(g_settings_window&&IsDialogMessageW(g_settings_window,&msg))continue;if(g_audio_window&&IsDialogMessageW(g_audio_window,&msg))continue;if(g_bindings_window&&IsDialogMessageW(g_bindings_window,&msg))continue;bool root=msg.message==WM_KEYDOWN&&frontend_key((UINT)msg.wParam);if(root){SendMessageW(w,msg.message,msg.wParam,msg.lParam);continue;}if(g_hidden||!IsDialogMessageW(w,&msg)){TranslateMessage(&msg);DispatchMessageW(&msg);}}
        HANDLE current=mm2_windows_live_frame_timer();if(timer_ready&&current==timer)mm2_windows_live_service_frame_timer();}
    mm2_windows_log_write(L"Mega Man 2 launcher stopped.");
    return (int)msg.wParam;}
