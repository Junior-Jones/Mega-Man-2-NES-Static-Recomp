#!/usr/bin/env python3
from pathlib import Path
import sys


root = Path(sys.argv[1])
launcher = (root / "src/gui/mm2_windows_launcher.cpp").read_text(encoding="utf-8")
live = (root / "src/gui/mm2_windows_live.cpp").read_text(encoding="utf-8")
live_header = (root / "src/gui/mm2_windows_live.h").read_text(encoding="utf-8")

# Every user-facing value is both read and written in the one settings.ini.
for key in (
    "SettingsVersion",
    "IntegerScale",
    "PauseOnFocusLoss",
    "AutoRunOnLoad",
    "FullScreenOnPlay",
    "WelcomeShown",
    "RomFolder",
    "Widescreen",
    "CorrectAspect",
    "VSync",
    "Enabled",
    "VolumePercent",
    "LatencyMs",
    "Source",
    "GamepadDeadzonePercent",
):
    assert launcher.count(f'L"{key}"') >= 2, f"setting is not loaded and saved: {key}"

for token in (
    "constexpr int MM2_SETTINGS_VERSION=2",
    "settings_version<MM2_SETTINGS_VERSION",
    "if(settings_version<MM2_SETTINGS_VERSION)g_settings.wide_screen=0",
    'write_number(L"General",L"SettingsVersion",MM2_SETTINGS_VERSION)',
    'g_ini_path=exe_directory()+L"\\\\settings.ini"',
    'g_rom_folder=exe_directory()+L"\\\\Rom"',
    'ofn.lpstrInitialDir=g_rom_folder.c_str()',
    'g_rom_folder=selected_folder;save_settings()',
    'WritePrivateProfileStringW(L"General",L"RomFolder",g_rom_folder.c_str()',
    'write_number(L"Input",keyboard_key,(int)g_settings.bindings[0][a])',
    'write_number(L"Input",gamepad_key,g_settings.gamepad_bindings[a])',
    'if(!g_welcome_shown){g_welcome_shown=true;save_settings();welcome(w);}',
    'if(g_settings.fullscreen)',
    'if(found&&g_auto_run)',
    'g_settings.pause_on_focus_loss&&g_hidden',
    'L"&Wide Screen (v1)"',
    'message->wParam==VK_ESCAPE',
    'SendMessageW(dialog,WM_CLOSE,0,0)',
):
    assert token in launcher, f"missing settings/frontend persistence contract: {token}"

for token in (
    "s->settings.wide_screen",
    "s->settings.integer_scale,s->settings.correct_aspect",
    "s->settings.vsync",
    "s->settings.audio_enabled",
    "s->settings.volume_percent,s->settings.audio_latency_ms",
    "s->settings.input_source",
    "s->settings.gamepad_bindings,s->settings.gamepad_deadzone_percent",
    "s->settings.bindings[player][i]",
    "mm2_direct_core_advance_frame(s->core,buttons,0u,0u",
):
    assert token in live, f"saved option lacks a runtime consumer: {token}"

assert "#define MM2_NES_PLAYER_COUNT 1" in live_header
assert "s->wide_screen=0" in live
assert "P2Action" not in launcher and "Player 2" not in launcher

print("PASS every frontend option is unified, persisted and consumed")
