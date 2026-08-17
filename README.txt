Mega Man 2 (NES) Static Recomp - 1.1.0

Launcher.exe is a portable Windows 10/11 frontend for the Mega Man 2 static
recompilation core. The original game ROM is not included.

Place a legally obtained Mega Man 2 (USA) .nes ROM in the Rom folder, then
open Launcher.exe and select Run. Browse opens the Rom folder by default.
This exact USA ROM uses the NES NTSC cadence of approximately 60.0988 frames
per second; the frontend follows the static core at that rate.

Player 1 controls:
  Arrow keys  D-pad
  F           A
  D           B
  S           Start
  A           Select

Escape switches between the game and Launcher. F1 shows the complete controls
guide. F2/F3 save and load a snapshot, F4 opens frontend settings, F5 opens
controller bindings, F6 opens audio settings, F7 runs the selected ROM, and F8
captures the game window.

SDL3 audio, video and gamepad support and the Microsoft C/C++ runtime are
statically linked. The included gamecontrollerdb.txt expands controller
compatibility; no third-party DLL is required beside Launcher.exe.
