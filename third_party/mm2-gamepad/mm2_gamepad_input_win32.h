#ifndef MM2_GAMEPAD_INPUT_WIN32_H
#define MM2_GAMEPAD_INPUT_WIN32_H

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#include <SDL3/SDL_gamepad.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MM2_GAMEPAD_BINDING_COUNT 8

typedef enum MM2GamepadControl {
    MM2_GAMEPAD_DPAD_UP = 1,
    MM2_GAMEPAD_DPAD_DOWN,
    MM2_GAMEPAD_DPAD_LEFT,
    MM2_GAMEPAD_DPAD_RIGHT,
    MM2_GAMEPAD_LEFT_STICK_UP,
    MM2_GAMEPAD_LEFT_STICK_DOWN,
    MM2_GAMEPAD_LEFT_STICK_LEFT,
    MM2_GAMEPAD_LEFT_STICK_RIGHT,
    MM2_GAMEPAD_FACE_SOUTH,
    MM2_GAMEPAD_FACE_EAST,
    MM2_GAMEPAD_FACE_WEST,
    MM2_GAMEPAD_FACE_NORTH,
    MM2_GAMEPAD_LEFT_SHOULDER,
    MM2_GAMEPAD_RIGHT_SHOULDER,
    MM2_GAMEPAD_LEFT_TRIGGER,
    MM2_GAMEPAD_RIGHT_TRIGGER,
    MM2_GAMEPAD_START,
    MM2_GAMEPAD_BACK,
    MM2_GAMEPAD_LEFT_STICK_BUTTON,
    MM2_GAMEPAD_RIGHT_STICK_BUTTON,
    MM2_GAMEPAD_CONTROL_LAST = MM2_GAMEPAD_RIGHT_STICK_BUTTON
} MM2GamepadControl;

typedef struct MM2GamepadInputWin32 {
    SDL_Gamepad *handle;
    int initialized;
    int startup_gamepad_found;
    unsigned player_index;
    unsigned refresh_countdown;
    uint32_t analog_latched;
    char preferred_guid[64];
    char guid[64];
    wchar_t name[160];
} MM2GamepadInputWin32;

int mm2_gamepad_win32_initialize(MM2GamepadInputWin32 *input,
                                     const wchar_t *mapping_path,
                                     unsigned player_index,
                                     const wchar_t *preferred_guid);
void mm2_gamepad_win32_shutdown(MM2GamepadInputWin32 *input);
void mm2_gamepad_win32_begin_frame(MM2GamepadInputWin32 *inputs,
                                       size_t input_count);
uint16_t mm2_gamepad_win32_poll(
    MM2GamepadInputWin32 *input,
    const int bindings[MM2_GAMEPAD_BINDING_COUNT],
    int deadzone_percent);
int mm2_gamepad_win32_connected(const MM2GamepadInputWin32 *input);
const wchar_t *mm2_gamepad_win32_name(const MM2GamepadInputWin32 *input);
void mm2_gamepad_win32_guid(const MM2GamepadInputWin32 *input,
                                wchar_t *guid, size_t capacity);
void mm2_gamepad_win32_default_bindings(
    int bindings[MM2_GAMEPAD_BINDING_COUNT]);
const wchar_t *mm2_gamepad_win32_control_name(int control);
int mm2_gamepad_win32_capture_control(MM2GamepadInputWin32 *input);
void mm2_gamepad_win32_control_display_name(
    const MM2GamepadInputWin32 *input, int control,
    wchar_t *text, size_t capacity);

#ifdef __cplusplus
}
#endif

#endif
