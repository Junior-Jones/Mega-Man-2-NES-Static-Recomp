# Mega Man 2 (NES) Static Recomp 1.2.0

Native Windows static recompilation frontend and core for Mega Man 2 on the
Nintendo Entertainment System.

The original game ROM is not included. Use a legally obtained Mega Man 2
(USA) `.nes` ROM matching `ROM-REQUIREMENTS.txt` and place it in the portable
`Rom` folder.

## What "fully static recompilation" means

Mega Man 2 is a fully static, ahead-of-time recompilation. Its executable NES
6502 game instructions were analysed and translated into native C code before
the application was built. The production launcher executes the generated game
code directly.

At runtime, the application does not use a general-purpose 6502 interpreter,
runtime opcode decoder, dynamic recompiler, JIT compiler, learning system or
emulator fallback. The static core contains 20,149 accepted bank-and-address
identities divided into deterministic generated translation units. Missing
banks or addresses stop through a fail-closed trap instead of falling back to
interpreted execution.

Version 1.2.0 preserves all 20,149 identities while factoring their repeated
implementations into 96 fixed compile-time helpers. The helper is selected by
each explicit generated bank/PC case, never by decoding an opcode at runtime.
The offline context-to-helper sidecar is not linked into the production core.
See `docs/STATIC-CORE-COMPACTION-1.2.0.md` for measurements and equivalence
evidence.

The complete runtime includes:

- Generated native execution of the original 6502 game code.
- Native MMC1 cartridge-bank and memory mapping.
- NES CPU bus and controller handling.
- Native PPU memory, register, background and sprite rendering.
- Dot-timed sprite evaluation and sprite-zero behaviour.
- Native NES APU pulse, triangle, noise and DMC audio generation.
- CPU-to-PPU/APU scheduling, NMI, IRQ and DMA handling.
- Core-owned framebuffer, PCM output and deterministic snapshots.
- Exact-ROM and generated-core identity validation.
- A portable, accessible Windows launcher with statically linked SDL video,
  audio and gamepad support.

"Fully static" does not mean that gameplay, graphics or sound are prerecorded.
Every frame is produced live from player input and current machine state. It
means that the game's executable instructions are already compiled into the
application and no interpretive or fallback game-code engine is used.

Development and certification tools may compare results against pinned
reference traces. Those tools are not part of the production runtime.

## Frontend

- `Launcher.exe` is portable on Windows 10 and Windows 11.
- Escape switches between the Launcher and game window.
- F4 opens settings, F5 opens controller bindings, and F6 opens audio
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
