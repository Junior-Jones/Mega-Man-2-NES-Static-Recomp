Mega Man 2 (NES) Static Recomp - 1.2.0

Launcher.exe is a portable Windows 10/11 frontend for the Mega Man 2 static
recompilation core. The original game ROM is not included.

Place a legally obtained Mega Man 2 (USA) .nes ROM in the Rom folder, then
open Launcher.exe and select Run. Browse opens the Rom folder by default.
After a valid ROM is selected elsewhere, Browse remembers that folder in the
single settings.ini file and uses it as the next default browsing location.
This exact USA ROM uses the NES NTSC cadence of approximately 60.0988 frames
per second; the frontend follows the static core at that rate.

Wide Screen (v1) expands supported horizontal gameplay to 398x240 using live
stage backgrounds, enemies and Mega Buster projectiles. Title screens, menus,
vertical rooms, transitions and boss rooms remain centred 4:3 in version 1.2.0.
Wide Screen (v1) is disabled by default. Use its toolbar checkbox to turn the
feature on or off. See Wide Screen (v1).txt for the implementation, safety
policy and test details.

Player 1 controls:
  Arrow keys  D-pad
  F           A
  D           B
  S           Start
  A           Select

Escape switches between the game and Launcher. F1 shows the complete controls
guide. F2/F3 save and load a snapshot, F4 opens settings, F5 opens
controls, F6 opens audio settings, F7 runs the selected ROM, and F8
captures the game window.

Welcome, About, Settings, Controls and Audio Settings close with Escape. Tab
and Shift+Tab move between their controls without becoming trapped in a text
box.

All frontend choices are stored beside Launcher.exe in one settings.ini file:
first-run Welcome state, remembered ROM folder, full screen, Wide Screen (v1),
image scale, aspect correction, vertical synchronization, focus pause, Auto-Run,
audio output, volume, latency, input source, gamepad deadzone, keyboard controls
and gamepad mappings. Deleting settings.ini restores defaults and displays the
Welcome window again. Mega Man 2 is single-player; controller port 2 is inactive.

Snapshots and screenshots are created on demand in the portable Snapshots and
Screenshots folders. F8 captures the exact game framebuffer shown by the app,
including the complete 398x240 Wide Screen (v1) output when active.

SDL3 audio, video and gamepad support and the Microsoft C/C++ runtime are
statically linked. The included gamecontrollerdb.txt expands controller
compatibility; no third-party DLL is required beside Launcher.exe.

The compact production core preserves all 20,149 explicit bank-and-address
identities while factoring repeated implementations into 96 fixed helpers.
There is no runtime opcode decoder or fallback. See the source compaction
receipt for the measured reductions and byte-identical gameplay proof.
