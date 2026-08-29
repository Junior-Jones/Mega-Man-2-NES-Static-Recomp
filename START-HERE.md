# Mega Man 2 NES Static Recomp - 1.2.0

This tree contains the native static-recompilation core, generated instruction
identities, reproducibility evidence, tests, and the single-process Windows
frontend. The original ROM is not included.

Use a legally obtained Mega Man 2 (USA) `.nes` ROM matching
`ROM-REQUIREMENTS.txt`.

## Windows frontend

- The launcher is titled `Launcher`; gameplay is titled `Mega Man 2 (NES)`.
- Browse starts in the portable `Rom` folder.
- Escape switches between the launcher and game windows.
- Player 1 defaults are arrows for the D-pad, F for A, D for B, S for Start,
  and A for Select.
- Controller Bindings offers Keyboard, Gamepad, and Keyboard + gamepad input,
  an adjustable stick deadzone, hot-plug reconnection, and the bundled SDL
  community controller database.
- F4 opens settings, F5 opens controller bindings, and F6 opens the
  separate audio settings window. F1 through F8 are reserved frontend keys.
- SDL 3.4.10 provides statically linked video, WASAPI audio, and gamepad support.
- Snapshot and screenshot folders are created only when a file is first written.

## Build

Requirements are Windows 10 or 11, CMake 3.20 or later, and Visual Studio 2022
with Desktop development with C++.

```text
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release --target mega-man-2-launcher
ctest --test-dir build -C Release --output-on-failure
```

Set `MM2_TEST_ROM` during configuration to enable exact-ROM route/oracle tests.
The portable application is written to `build/release`.
