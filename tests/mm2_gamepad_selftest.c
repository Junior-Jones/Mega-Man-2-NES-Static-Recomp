#include "mm2_gamepad_input_win32.h"

#include <SDL3/SDL.h>
#include <stdio.h>
#include <wchar.h>

#define CHECK(condition) do { \
    if (!(condition)) { \
        fprintf(stderr, "%s:%d: %s (%s)\n", __FILE__, __LINE__, #condition, SDL_GetError()); \
        return 0; \
    } \
} while (0)

typedef struct Controller {
    const char *name;
    Uint16 vendor;
    Uint16 product;
    SDL_GamepadType type;
    const wchar_t *south_label;
} Controller;

static SDL_JoystickID attach(const Controller *controller) {
    SDL_VirtualJoystickDesc desc;
    SDL_INIT_INTERFACE(&desc);
    desc.name = controller->name;
    desc.vendor_id = controller->vendor;
    desc.product_id = controller->product;
    desc.type = SDL_JOYSTICK_TYPE_GAMEPAD;
    desc.nbuttons = SDL_GAMEPAD_BUTTON_COUNT;
    desc.naxes = SDL_GAMEPAD_AXIS_COUNT;
    return SDL_AttachVirtualJoystick(&desc);
}

static int check_controller(const Controller *controller, const wchar_t *database) {
    MM2GamepadInputWin32 player, capture;
    SDL_JoystickID id = attach(controller);
    SDL_Joystick *joystick;
    int bindings[MM2_GAMEPAD_BINDING_COUNT];
    wchar_t label[128];

    CHECK(id != 0);
    joystick = SDL_OpenJoystick(id);
    CHECK(joystick != NULL);
    CHECK(mm2_gamepad_win32_initialize(&player, database, 0, NULL));
    CHECK(mm2_gamepad_win32_initialize(&capture, database, MM2_GAMEPAD_CAPTURE_PLAYER, NULL));
    mm2_gamepad_win32_set_capture_focus(1);
    CHECK(SDL_GetGamepadID(player.handle) == id);
    CHECK(SDL_GetGamepadID(capture.handle) == id);
    CHECK(SDL_GetRealGamepadType(capture.handle) == controller->type);
    mm2_gamepad_win32_control_display_name(&capture, MM2_GAMEPAD_FACE_SOUTH,
                                         label, SDL_arraysize(label));
    CHECK(wcsstr(label, controller->south_label) != NULL);

    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_SOUTH, true));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == 0);
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == 0);
    mm2_gamepad_win32_default_bindings(bindings);
    CHECK(mm2_gamepad_win32_poll(&player, bindings, 50) == 0x01);

    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_WEST, true));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == MM2_GAMEPAD_FACE_WEST);
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == 0);
    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_SOUTH, false));
    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_WEST, false));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == 0);

    CHECK(SDL_SetJoystickVirtualAxis(joystick, SDL_GAMEPAD_AXIS_LEFTX, 14000));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == 0);
    CHECK(SDL_SetJoystickVirtualAxis(joystick, SDL_GAMEPAD_AXIS_LEFTX, 20000));
    bindings[5] = mm2_gamepad_win32_capture_control(&capture, 50);
    CHECK(bindings[5] == MM2_GAMEPAD_LEFT_STICK_RIGHT);
    CHECK(mm2_gamepad_win32_poll(&player, bindings, 50) == 0x01);
    CHECK(SDL_SetJoystickVirtualAxis(joystick, SDL_GAMEPAD_AXIS_LEFTX, 0));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == 0);

    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_DPAD_UP, true));
    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_START, true));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 50) == MM2_GAMEPAD_DPAD_UP);
    CHECK(mm2_gamepad_win32_poll(&player, bindings, 50) == 0x18);
    mm2_gamepad_win32_set_capture_focus(0);
    mm2_gamepad_win32_shutdown(&capture);
    CHECK(mm2_gamepad_win32_connected(&player));
    CHECK(mm2_gamepad_win32_poll(&player, bindings, 50) == 0x18);
    mm2_gamepad_win32_shutdown(&player);
    SDL_CloseJoystick(joystick);
    CHECK(SDL_DetachVirtualJoystick(id));
    printf("PASS %s capture, labels, deadzone and NES input\n", controller->name);
    return 1;
}

static int check_hotplug(const Controller *controller, const wchar_t *database) {
    MM2GamepadInputWin32 capture;
    SDL_JoystickID id;
    SDL_Joystick *joystick;
    CHECK(mm2_gamepad_win32_initialize(&capture, database, MM2_GAMEPAD_CAPTURE_PLAYER, NULL));
    mm2_gamepad_win32_set_capture_focus(1);
    CHECK(mm2_gamepad_win32_capture_control(&capture, 35) == 0);
    id = attach(controller);
    CHECK(id != 0);
    joystick = SDL_OpenJoystick(id);
    CHECK(joystick != NULL);
    CHECK(mm2_gamepad_win32_capture_control(&capture, 35) == 0);
    CHECK(SDL_GetGamepadID(capture.handle) == id);
    CHECK(SDL_SetJoystickVirtualButton(joystick, SDL_GAMEPAD_BUTTON_EAST, true));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 35) == MM2_GAMEPAD_FACE_EAST);
    CHECK(SDL_DetachVirtualJoystick(id));
    CHECK(mm2_gamepad_win32_capture_control(&capture, 35) == 0);
    CHECK(!mm2_gamepad_win32_connected(&capture));
    mm2_gamepad_win32_set_capture_focus(0);
    SDL_CloseJoystick(joystick);
    mm2_gamepad_win32_shutdown(&capture);
    puts("PASS hot-plug detection and capture after connection");
    return 1;
}

int wmain(int argc, wchar_t **argv) {
    const Controller controllers[] = {
        {"DualSense", 0x054c, 0x0ce6, SDL_GAMEPAD_TYPE_PS5, L"(Cross)"},
        {"DualSense Edge", 0x054c, 0x0df2, SDL_GAMEPAD_TYPE_PS5, L"(Cross)"},
        {"DualShock 4", 0x054c, 0x09cc, SDL_GAMEPAD_TYPE_PS4, L"(Cross)"},
        {"Xbox 360", 0x045e, 0x028e, SDL_GAMEPAD_TYPE_XBOX360, L"(A)"},
        {"Switch Pro", 0x057e, 0x2009, SDL_GAMEPAD_TYPE_NINTENDO_SWITCH_PRO, L"(B)"},
    };
    SDL_Window *unfocused_game_window;
    int passed = 1;
    if (argc != 2) return 1;
    SDL_SetHint(SDL_HINT_VIDEO_DRIVER, "dummy");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI, "0");
    SDL_SetHint(SDL_HINT_JOYSTICK_DIRECTINPUT, "0");
    SDL_SetHint(SDL_HINT_JOYSTICK_RAWINPUT, "0");
    SDL_SetHint(SDL_HINT_JOYSTICK_WGI, "0");
    SDL_SetHint(SDL_HINT_XINPUT_ENABLED, "0");
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) return 1;
    unfocused_game_window = SDL_CreateWindow("Unfocused gameplay", 64, 64, SDL_WINDOW_HIDDEN);
    if (!unfocused_game_window || SDL_GetKeyboardFocus() != NULL) {
        fprintf(stderr, "Unable to set up unfocused SDL video: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    for (size_t i = 0; i < SDL_arraysize(controllers) && passed; ++i)
        passed = check_controller(&controllers[i], argv[1]);
    if (passed) passed = check_hotplug(&controllers[0], argv[1]);
    SDL_DestroyWindow(unfocused_game_window);
    SDL_Quit();
    return passed ? 0 : 1;
}
