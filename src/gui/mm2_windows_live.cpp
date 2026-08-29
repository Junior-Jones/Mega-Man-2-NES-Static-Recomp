#ifdef _WIN32
#define UNICODE
#define _UNICODE

#include "mm2_windows_live.h"
#include "mm2_audio_output_sdl3.h"
#include "mm2_gamepad_input_win32.h"
#include "mm2_video_output_sdl3.h"
extern "C" {
#include "mm2_direct_core.h"
#include "mm2_rom.h"
}
#include <SDL3/SDL.h>
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <string>

namespace {
constexpr double kNesFps=60.0988138974405;
constexpr double kHnsPerSecond=10000000.0;
constexpr uint8_t kA=0x01,kB=0x02,kSelect=0x04,kStart=0x08,
                  kUp=0x10,kDown=0x20,kLeft=0x40,kRight=0x80;

struct MM2LiveWindow {
    MM2Rom rom{};
    MM2DirectCore *core{};
    MM2AudioOutput audio{};
    MM2VideoOutput video{};
    MM2LiveSettings settings{};
    std::array<MM2GamepadInputWin32,MM2_NES_PLAYER_COUNT> gamepads{};
    std::array<uint8_t,MM2_PRESENTATION_MAX_FRAME_PIXELS> frame{};
    MM2PresentationInfo presentation{};
    uint8_t keyboard[MM2_NES_PLAYER_COUNT]{};
    uint8_t pressed[MM2_NES_PLAYER_COUNT]{};
    int32_t filter_input{},filter_high{},filter_low{};
    bool paused{},failure_reported{};
    LARGE_INTEGER frequency{};
    double next_tick{};
    HANDLE timer{};
    HWND hwnd{},owner{};
};

HINSTANCE g_instance{};
MM2LiveSettings g_next{};
bool g_next_ready{};
MM2LiveWindow *g_active{};

std::string utf8(const wchar_t *text){
    if(!text||!*text)return {};
    int n=WideCharToMultiByte(CP_UTF8,0,text,-1,nullptr,0,nullptr,nullptr);
    if(n<=0)return {};
    std::string out((size_t)n,'\0');WideCharToMultiByte(CP_UTF8,0,text,-1,out.data(),n,nullptr,nullptr);out.pop_back();return out;
}
std::wstring exe_directory(){
    wchar_t path[32768]={};DWORD n=GetModuleFileNameW(nullptr,path,(DWORD)std::size(path));
    if(!n||n>=std::size(path))return L".";std::wstring out(path,n);size_t slash=out.find_last_of(L"\\/");return slash==std::wstring::npos?L".":out.substr(0,slash);
}
void set_error(wchar_t *text,size_t count,const wchar_t *message){if(text&&count){lstrcpynW(text,message?message:L"The game could not start.",(int)count);}}

uint8_t keyboard_mask(const MM2LiveWindow *s,WPARAM key,unsigned player){
    static const uint8_t masks[MM2_NES_BINDING_COUNT]={kUp,kDown,kLeft,kRight,kB,kA,kStart,kSelect};
    uint8_t result=0;if(!s||player>=MM2_NES_PLAYER_COUNT)return 0;
    for(unsigned i=0;i<MM2_NES_BINDING_COUNT;++i)if(s->settings.bindings[player][i]==(UINT)key)result|=masks[i];return result;
}
uint8_t sanitize(uint8_t input){
    if((input&(kUp|kDown))==(kUp|kDown))input&=(uint8_t)~(kUp|kDown);
    if((input&(kLeft|kRight))==(kLeft|kRight))input&=(uint8_t)~(kLeft|kRight);return input;
}
void open_gamepads(MM2LiveWindow *s){
    if(!s)return;std::wstring database=exe_directory()+L"\\gamecontrollerdb.txt";
    for(unsigned player=0;player<MM2_NES_PLAYER_COUNT;++player)
        (void)mm2_gamepad_win32_initialize(&s->gamepads[player],database.c_str(),player,nullptr);
}
void close_gamepads(MM2LiveWindow *s){if(s)for(auto &gamepad:s->gamepads)mm2_gamepad_win32_shutdown(&gamepad);}

void reset_clock(MM2LiveWindow *s){LARGE_INTEGER now{};if(!s)return;QueryPerformanceCounter(&now);s->next_tick=(double)now.QuadPart+(double)s->frequency.QuadPart/kNesFps;}
bool arm_timer(MM2LiveWindow *s){
    LARGE_INTEGER now{},due{};if(!s||!s->timer||s->frequency.QuadPart<=0||!QueryPerformanceCounter(&now))return false;
    double remain=s->next_tick-(double)now.QuadPart;LONGLONG delay=1;
    if(remain>0){delay=(LONGLONG)(remain*kHnsPerSecond/(double)s->frequency.QuadPart+0.999999);if(delay<1)delay=1;}
    due.QuadPart=-delay;return SetWaitableTimer(s->timer,&due,0,nullptr,nullptr,FALSE)!=FALSE;
}
void submit_frame(MM2LiveWindow *s){if(s&&s->core&&mm2_direct_core_presentation_copy_indexed(s->core,s->settings.wide_screen,s->frame.data(),s->frame.size(),&s->presentation))mm2_video_output_submit(&s->video,s->frame.data(),(int)s->presentation.width,(int)s->presentation.height);}
void drain_audio(MM2LiveWindow *s){
    if(!s||!s->settings.audio_enabled)return;int16_t staging[2048];
    while(mm2_direct_core_audio_available(s->core)){size_t count=mm2_direct_core_audio_read(s->core,staging,std::size(staging));
        if(!count)break;
        for(size_t i=0;i<count;++i){int32_t input=staging[i];int32_t high=input-s->filter_input+((s->filter_high*32604)>>15);
            s->filter_input=input;s->filter_high=high;s->filter_low+=(high-s->filter_low)>>2;staging[i]=(int16_t)std::clamp(s->filter_low,-32768,32767);}
        mm2_audio_output_push(&s->audio,staging,count);
    }
}
void report_failure(MM2LiveWindow *s){if(!s||s->failure_reported)return;s->failure_reported=true;wchar_t msg[384]={};
    _snwprintf(msg,std::size(msg),L"The Mega Man 2 static core stopped at frame %llu. Trap: %S; PC $%04X.",
        (unsigned long long)mm2_direct_core_frame_count(s->core),mm2_direct_core_trap_name(mm2_direct_core_trap(s->core)),mm2_direct_core_program_counter(s->core));MessageBoxW(s->owner,msg,L"Mega Man 2 static-core error",MB_OK|MB_ICONERROR);}
void pump(MM2LiveWindow *s){
    if(!s)return;SDL_PumpEvents();if(s->paused){reset_clock(s);drain_audio(s);return;}
    LARGE_INTEGER now{};QueryPerformanceCounter(&now);double ticks=(double)s->frequency.QuadPart/kNesFps;unsigned ran=0;
    mm2_gamepad_win32_begin_frame(s->gamepads.data(),s->gamepads.size());
    uint8_t pad[MM2_NES_PLAYER_COUNT]={};
    if(s->settings.input_source!=MM2_INPUT_KEYBOARD)
        for(unsigned player=0;player<MM2_NES_PLAYER_COUNT;++player)
            pad[player]=(uint8_t)mm2_gamepad_win32_poll(&s->gamepads[player],s->settings.gamepad_bindings,s->settings.gamepad_deadzone_percent);
    while((double)now.QuadPart>=s->next_tick&&ran<4u){
        uint8_t keyboard[MM2_NES_PLAYER_COUNT]={};if(s->settings.input_source!=MM2_INPUT_GAMEPAD)keyboard[0]=(uint8_t)(s->keyboard[0]|s->pressed[0]);
        uint8_t buttons=sanitize((uint8_t)(keyboard[0]|pad[0]));MM2FrameResult frame_result{};
        /* Mega Man 2 is single-player. Keep the NES controller-two port
           electrically idle instead of exposing an unsupported host input. */
        if(!mm2_direct_core_advance_frame(s->core,buttons,0u,0u,&frame_result)){s->paused=true;mm2_audio_output_pause(&s->audio);report_failure(s);break;}
        s->pressed[0]=0;s->next_tick+=ticks;++ran;
    }
    if(ran==4u&&(double)now.QuadPart>=s->next_tick+ticks*4.0)s->next_tick=(double)now.QuadPart+ticks;
    if(ran)submit_frame(s);drain_audio(s);mm2_video_output_present(&s->video,s->settings.integer_scale,s->settings.correct_aspect);
}
void toggle(MM2LiveWindow *s){if(!s)return;s->paused=!s->paused;if(s->paused){s->keyboard[0]=s->pressed[0]=0;mm2_audio_output_pause(&s->audio);}else{reset_clock(s);mm2_audio_output_resume(&s->audio);}}

bool ensure_directory(const std::wstring &path){
    if(CreateDirectoryW(path.c_str(),nullptr))return true;
    if(GetLastError()!=ERROR_ALREADY_EXISTS)return false;
    DWORD attributes=GetFileAttributesW(path.c_str());
    return attributes!=INVALID_FILE_ATTRIBUTES&&(attributes&FILE_ATTRIBUTE_DIRECTORY)!=0;
}
std::wstring snapshot_directory(){return exe_directory()+L"\\Snapshots";}
std::wstring snapshot_path(){return snapshot_directory()+L"\\Quick Save.mm2state";}
bool save_snapshot(MM2LiveWindow *s){
    if(!s||!ensure_directory(snapshot_directory()))return false;std::string path=utf8(snapshot_path().c_str());char error[256]={};
    return !path.empty()&&mm2_direct_core_snapshot_save(s->core,&s->rom,path.c_str(),error,sizeof(error))==MM2_SNAPSHOT_OK;
}
bool load_snapshot(MM2LiveWindow *s){
    if(!s)return false;std::string path=utf8(snapshot_path().c_str());char error[256]={};
    if(path.empty()||mm2_direct_core_snapshot_load(s->core,&s->rom,path.c_str(),error,sizeof(error))!=MM2_SNAPSHOT_OK)return false;
    mm2_direct_core_set_wide_screen_enabled(s->core,s->settings.wide_screen);s->filter_input=s->filter_high=s->filter_low=0;mm2_audio_output_flush(&s->audio);submit_frame(s);reset_clock(s);return true;
}
void put16(unsigned char *p,unsigned v){p[0]=(unsigned char)v;p[1]=(unsigned char)(v>>8);}
void put32(unsigned char *p,unsigned long v){p[0]=(unsigned char)v;p[1]=(unsigned char)(v>>8);p[2]=(unsigned char)(v>>16);p[3]=(unsigned char)(v>>24);}
bool write_all(HANDLE file,const void *data,DWORD size){
    const unsigned char *bytes=static_cast<const unsigned char *>(data);
    while(size){DWORD written=0;if(!WriteFile(file,bytes,size,&written,nullptr)||!written)return false;bytes+=written;size-=written;}return true;
}
bool screenshot(MM2LiveWindow *s){
    if(!s||!s->video.frame_valid||s->video.active_width<1||s->video.active_width>MM2_VIDEO_MAX_WIDTH||s->video.active_height<1||s->video.active_height>MM2_VIDEO_HEIGHT)return false;
    const unsigned width=(unsigned)s->video.active_width,height=(unsigned)s->video.active_height;const size_t pixels=(size_t)width*height;
    std::array<uint32_t,MM2_VIDEO_MAX_PIXELS> frame{};std::memcpy(frame.data(),s->video.pixels,pixels*sizeof(frame[0]));
    std::wstring dir=exe_directory()+L"\\Screenshots";if(!ensure_directory(dir))return false;
    SYSTEMTIME t{};GetLocalTime(&t);std::wstring path;HANDLE file=INVALID_HANDLE_VALUE;
    for(unsigned suffix=0;suffix<10000u;++suffix){wchar_t name[192]={};_snwprintf(name,std::size(name),L"Mega Man 2 %04u-%02u-%02u %02u-%02u-%02u-%03u-%04u.bmp",t.wYear,t.wMonth,t.wDay,t.wHour,t.wMinute,t.wSecond,t.wMilliseconds,suffix);path=dir+L"\\"+name;file=CreateFileW(path.c_str(),GENERIC_WRITE,FILE_SHARE_READ,nullptr,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,nullptr);if(file!=INVALID_HANDLE_VALUE)break;if(GetLastError()!=ERROR_FILE_EXISTS&&GetLastError()!=ERROR_ALREADY_EXISTS)return false;}
    if(file==INVALID_HANDLE_VALUE)return false;
    const unsigned row_bytes=width*3u,row_stride=(row_bytes+3u)&~3u,image_size=row_stride*height;unsigned char header[54]={};header[0]='B';header[1]='M';put32(header+2,54u+image_size);put32(header+10,54);put32(header+14,40);put32(header+18,width);put32(header+22,height);put16(header+26,1);put16(header+28,24);put32(header+34,image_size);
    bool ok=write_all(file,header,(DWORD)sizeof(header));std::array<unsigned char,MM2_VIDEO_MAX_WIDTH*3u+3u> row{};
    for(int y=(int)height-1;ok&&y>=0;--y){for(unsigned x=0;x<width;++x){uint32_t rgba=frame[(size_t)(unsigned)y*width+x];row[x*3u]=(unsigned char)(rgba>>16);row[x*3u+1u]=(unsigned char)(rgba>>8);row[x*3u+2u]=(unsigned char)rgba;}std::memset(row.data()+row_bytes,0,row_stride-row_bytes);ok=write_all(file,row.data(),row_stride);}
    if(!CloseHandle(file))ok=false;if(!ok)DeleteFileW(path.c_str());return ok;
}

LRESULT CALLBACK LiveProc(HWND w,UINT m,WPARAM wp,LPARAM lp){
    MM2LiveWindow *s=(MM2LiveWindow*)GetWindowLongPtrW(w,GWLP_USERDATA);
    if(m==WM_NCCREATE){s=(MM2LiveWindow*)((CREATESTRUCTW*)lp)->lpCreateParams;s->hwnd=w;SetWindowLongPtrW(w,GWLP_USERDATA,(LONG_PTR)s);}
    if(m==WM_ERASEBKGND)return 1;
    if(m==WM_PAINT&&s){PAINTSTRUCT paint{};BeginPaint(w,&paint);mm2_video_output_present(&s->video,s->settings.integer_scale,s->settings.correct_aspect);EndPaint(w,&paint);return 0;}
    if(m==WM_SIZE&&s){mm2_video_output_present(&s->video,s->settings.integer_scale,s->settings.correct_aspect);return 0;}
    if(m==WM_GETOBJECT)return 0;
    if(m==WM_DESTROY&&s){if(s->timer){CancelWaitableTimer(s->timer);CloseHandle(s->timer);}mm2_audio_output_close(&s->audio);mm2_video_output_close(&s->video);close_gamepads(s);mm2_direct_core_destroy(s->core);mm2_rom_free(&s->rom);if(g_active==s)g_active=nullptr;delete s;SetWindowLongPtrW(w,GWLP_USERDATA,0);return 0;}
    return DefWindowProcW(w,m,wp,lp);
}
}

void mm2_windows_live_settings_defaults(MM2LiveSettings *s){if(!s)return;std::memset(s,0,sizeof(*s));s->wide_screen=0;s->correct_aspect=1;s->vsync=0;s->pause_on_focus_loss=0;s->audio_enabled=1;s->volume_percent=70;s->audio_latency_ms=60;s->input_source=MM2_INPUT_COMBINED;s->gamepad_deadzone_percent=35;
    mm2_gamepad_win32_default_bindings(s->gamepad_bindings);
    UINT p1[8]={VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,'D','F','S','A'};std::memcpy(s->bindings[0],p1,sizeof(p1));}
void mm2_windows_live_set_next_settings(const MM2LiveSettings *s){if(s){g_next=*s;g_next_ready=true;}}
void mm2_windows_live_set_volume(int volume_percent){volume_percent=std::clamp(volume_percent,0,100);if(g_active){g_active->settings.volume_percent=volume_percent;mm2_audio_output_set_volume(&g_active->audio,volume_percent);}}
bool mm2_windows_live_start(HWND owner,const wchar_t *rom_path,wchar_t *error,size_t count){
    if(g_active)return false;auto *s=new MM2LiveWindow{};s->owner=owner;if(g_next_ready)s->settings=g_next;else mm2_windows_live_settings_defaults(&s->settings);
    char reason[256]={};std::string path=utf8(rom_path);if(!mm2_rom_load(path.c_str(),&s->rom,reason,sizeof(reason))||!mm2_rom_is_expected(&s->rom,reason,sizeof(reason))){set_error(error,count,L"The selected file is not the required Mega Man 2 (USA) NES ROM.");mm2_rom_free(&s->rom);delete s;return false;}
    s->core=mm2_direct_core_create();if(!s->core||!mm2_direct_core_reset(s->core,&s->rom)){set_error(error,count,L"The Mega Man 2 static core could not reset.");mm2_direct_core_destroy(s->core);mm2_rom_free(&s->rom);delete s;return false;}mm2_direct_core_set_wide_screen_enabled(s->core,s->settings.wide_screen);
    QueryPerformanceFrequency(&s->frequency);if(s->frequency.QuadPart<=0){set_error(error,count,L"The high-resolution frame clock is unavailable.");mm2_direct_core_destroy(s->core);mm2_rom_free(&s->rom);delete s;return false;}
    open_gamepads(s);wchar_t backend[384]={};mm2_audio_output_initialize(&s->audio);if(s->settings.audio_enabled&&!mm2_audio_output_open(&s->audio,s->settings.volume_percent,s->settings.audio_latency_ms,backend,std::size(backend))){set_error(error,count,backend);close_gamepads(s);mm2_direct_core_destroy(s->core);mm2_rom_free(&s->rom);delete s;return false;}
    WNDCLASSW wc{};wc.lpfnWndProc=LiveProc;wc.hInstance=g_instance?g_instance:(g_instance=GetModuleHandleW(nullptr));wc.lpszClassName=L"MM2ModernLiveWindow";wc.hCursor=LoadCursor(nullptr,IDC_ARROW);wc.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH);RegisterClassW(&wc);
    HWND hwnd=CreateWindowExW(WS_EX_NOPARENTNOTIFY|WS_EX_NOACTIVATE,wc.lpszClassName,L"Mega Man 2 (NES)",WS_CHILD|WS_VISIBLE|WS_DISABLED|WS_CLIPSIBLINGS,0,80,1,1,owner,nullptr,wc.hInstance,s);
    if(!hwnd){set_error(error,count,L"Could not create the game presentation surface.");mm2_audio_output_close(&s->audio);close_gamepads(s);mm2_direct_core_destroy(s->core);mm2_rom_free(&s->rom);delete s;return false;}
    if(!mm2_video_output_open(&s->video,hwnd,s->settings.vsync,backend,std::size(backend))){set_error(error,count,backend);DestroyWindow(hwnd);return false;}
    s->timer=CreateWaitableTimerExW(nullptr,nullptr,0x2u,0x001F0003u);if(!s->timer)s->timer=CreateWaitableTimerW(nullptr,FALSE,nullptr);reset_clock(s);
    if(!s->timer||!arm_timer(s)){set_error(error,count,L"The emulation frame timer could not be created.");DestroyWindow(hwnd);return false;}
    mm2_direct_core_audio_clear(s->core);submit_frame(s);g_active=s;if(s->settings.audio_enabled)mm2_audio_output_resume(&s->audio);ShowWindow(hwnd,SW_SHOWNOACTIVATE);SetFocus(owner);return true;
}
void mm2_windows_live_stop(){if(g_active&&IsWindow(g_active->hwnd))DestroyWindow(g_active->hwnd);}
void mm2_windows_live_toggle_pause(){if(g_active)toggle(g_active);}
void mm2_windows_live_set_wide_screen(bool enabled){if(g_active){g_active->settings.wide_screen=enabled?1:0;mm2_direct_core_set_wide_screen_enabled(g_active->core,enabled?1:0);submit_frame(g_active);}}
void mm2_windows_live_resize(int x,int y,int w,int h){if(g_active&&IsWindow(g_active->hwnd))MoveWindow(g_active->hwnd,x,y,std::max(w,1),std::max(h,1),TRUE);}
void mm2_windows_live_key_event(UINT m,WPARAM key){MM2LiveWindow *s=g_active;if(!s||s->paused||(m!=WM_KEYDOWN&&m!=WM_KEYUP))return;bool down=m==WM_KEYDOWN;
    for(unsigned player=0;player<MM2_NES_PLAYER_COUNT;++player){uint8_t mask=keyboard_mask(s,key,player);if(!mask)continue;if(down){uint8_t action=kA|kB|kSelect|kStart;s->pressed[player]|=(uint8_t)(mask&action&~s->keyboard[player]);s->keyboard[player]|=mask;}else s->keyboard[player]&=(uint8_t)~mask;}}
HANDLE mm2_windows_live_frame_timer(){return g_active?g_active->timer:nullptr;}
void mm2_windows_live_service_frame_timer(){if(g_active&&g_active->timer){pump(g_active);arm_timer(g_active);}}
bool mm2_windows_live_quick_save(){return g_active&&save_snapshot(g_active);}
bool mm2_windows_live_quick_load(){return g_active&&load_snapshot(g_active);}
bool mm2_windows_live_take_screenshot(){return g_active&&screenshot(g_active);}
bool mm2_windows_live_is_running(){return g_active&&IsWindow(g_active->hwnd);}
bool mm2_windows_live_is_paused(){return !g_active||g_active->paused;}
HWND mm2_windows_live_window(){return g_active?g_active->hwnd:nullptr;}
#endif
