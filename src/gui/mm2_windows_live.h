#ifndef MM2_WINDOWS_LIVE_H
#define MM2_WINDOWS_LIVE_H

#ifdef _WIN32
#include <windows.h>
#include <stddef.h>

#define MM2_NES_PLAYER_COUNT 1
#define MM2_NES_BINDING_COUNT 8
#define MM2_INPUT_KEYBOARD 0
#define MM2_INPUT_GAMEPAD 1
#define MM2_INPUT_COMBINED 2

enum MM2NesBindingAction {
    MM2_BIND_UP=0, MM2_BIND_DOWN, MM2_BIND_LEFT, MM2_BIND_RIGHT,
    MM2_BIND_B, MM2_BIND_A, MM2_BIND_START, MM2_BIND_SELECT
};

struct MM2LiveSettings {
    int fullscreen;
    int wide_screen;
    int integer_scale;
    int correct_aspect;
    int vsync;
    int pause_on_focus_loss;
    int audio_enabled;
    int volume_percent;
    int audio_latency_ms;
    int input_source;
    int gamepad_deadzone_percent;
    UINT bindings[MM2_NES_PLAYER_COUNT][MM2_NES_BINDING_COUNT];
    int gamepad_bindings[MM2_NES_BINDING_COUNT];
};

void mm2_windows_live_settings_defaults(MM2LiveSettings *settings);
void mm2_windows_live_set_next_settings(const MM2LiveSettings *settings);
void mm2_windows_live_set_volume(int volume_percent);
bool mm2_windows_live_start(HWND owner, const wchar_t *rom_path,
    wchar_t *error_text, size_t error_text_count);
void mm2_windows_live_stop(void);
void mm2_windows_live_toggle_pause(void);
void mm2_windows_live_set_wide_screen(bool enabled);
void mm2_windows_live_resize(int x, int y, int width, int height);
void mm2_windows_live_key_event(UINT message, WPARAM key);
HANDLE mm2_windows_live_frame_timer(void);
void mm2_windows_live_service_frame_timer(void);
bool mm2_windows_live_quick_save(void);
bool mm2_windows_live_quick_load(void);
bool mm2_windows_live_take_screenshot(void);
bool mm2_windows_live_is_running(void);
bool mm2_windows_live_is_paused(void);
HWND mm2_windows_live_window(void);
#endif

#endif
