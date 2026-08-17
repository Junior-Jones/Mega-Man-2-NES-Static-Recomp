# Mega Man 2 (NES) Static Recomp 1.1.0

Native Windows static recompilation frontend and core for Mega Man 2 on the
Nintendo Entertainment System.

The original game ROM is not included. Use a legally obtained Mega Man 2
(USA) `.nes` ROM matching `ROM-REQUIREMENTS.txt` and place it in the portable
`Rom` folder.

## Frontend

- `Launcher.exe` is portable on Windows 10 and Windows 11.
- Escape switches between the Launcher and game window.
- F4 opens frontend settings, F5 opens controller bindings, and F6 opens audio
  settings.
- SDL 3.4.10 video, audio, and gamepad support is statically linked.
- No third-party DLL is required beside `Launcher.exe`.

Player 1 uses the arrow keys for the D-pad, F for A, D for B, S for Start, and
A for Select by default.

## Building on Windows

Requirements:

- Windows 10 or Windows 11
- CMake 3.20 or later
- Visual Studio 2022 with Desktop development with C++

```text
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release --target mega-man-2-launcher
ctest --test-dir build -C Release --output-on-failure
```

The resulting portable application is written to `build/release`.
