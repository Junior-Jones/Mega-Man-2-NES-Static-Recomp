# NES static recomp compliance checklist

This is the project definition of an NES static recomp. Architecture and
accuracy are separate: partial device timing can exist in a genuine recomp, but
runtime execution through an opcode interpreter, JIT, or fallback cannot.

| Aspect | Required meaning | 1.1.1 status | Evidence |
|---|---|---|---|
| Translated game code | 6502 instruction identities become native C/C++ control flow ahead of time | PASS | Six generated physical-bank translation units contain 20,149 compiled PC cases and a generated bank dispatcher |
| No runtime decoding | Runtime never fetches an opcode and chooses its implementation | PASS | Dispatch uses mapped physical bank plus PC; strict scan rejects decoder patterns |
| No emulator fallback | Missing code cannot fall back to an interpreter/JIT/dynamic translator | PASS | Default dispatch path hard-traps `MM2_CORE_TRAP_MISSING_IDENTITY` |
| Finite identity domain | Accepted executable identities are enumerated and reproducible | PASS | 20,149 identities, generated summary, CRC, and clean-regeneration test |
| CPU state | Native code updates A/X/Y/S/P/PC, stack, flags, addressing, bus effects, and cycles | PASS | `MM2DirectCore`, generated cases, exact-ROM smoke and route tests |
| Hardware state models | Mapper, PPU, APU, controllers, and bus are explicit support models | PASS/PARTIAL | MMC1/PPU/APU/controller C state; deferred timing is named separately |
| Mapper-visible identity | Same CPU address in different physical PRG banks remains distinct | PASS | Key is mapped 16 KiB PRG bank shifted above PC |
| External ROM role | User ROM supplies identity validation and immutable data, not interpreted execution | PASS | SHA-256/board audit; generated cases execute code; packages exclude ROM |
| Deterministic scheduling | CPU/PPU/APU/mapper/input advance from explicit clocks and state | PASS/PARTIAL | Exact route matrix and NTSC host pacing; dot-perfect comparison remains open |
| Native presentation | Graphics, audio, and input consume recomp state, not a hidden emulator frontend | PASS/PARTIAL | Native framebuffer, statically linked SDL3 stream, keyboard/gamepad; cycle-exact DMC DMA edge cases remain open |
| Audio path | APU support state produces PCM consumed directly by native SDL3 output | PASS/PARTIAL | Compiled C APU support and locked PCM identity gates; transistor-level output equivalence remains open |
| Headed tests | Test automation drives the same compiled native runtime and never launches an emulator | PASS | Test Centre calls `mm2_direct_core_step`, native paint/audio, snapshots, and hard result gates |
| Multipart snapshots | Save/load serializes native recomp/runtime state and resumes the same native process | PASS | Versioned state header, core/MMC1 state copy, visible pause/load/resume transition |
| Keyboard bindings | Bindings modify native controller bits supplied to compiled game flow | PASS | Eight-action binding dialog feeds `mm2_direct_core_set_controller` |
| Pause UI | Pause/resume changes native scheduling and SDL3 state, never switches execution engines | PASS | Escape returns to Launcher and pauses the timer/audio queue; Play or Escape resumes the same core |
| Fullscreen UI | Presentation mode changes only the native game window | PASS | Checked toolbar/menu state uses the monitor in full screen and restores the saved window placement |
| Reproducible generation | Reviewed inputs regenerate static output and receipts | PASS | Direct-core, seed, program-map, and reviewed-generation CTest gates |
| ROM-free packaging | Source/research ZIPs reject ROMs and compiled/runtime media | PASS | Suffix scan, file inventory, SHA-256, duplicate-entry and ZIP CRC checks |
| Accuracy is a separate gate | “Static recomp” never means cycle-perfect or full-game complete by itself | PASS | Current status and acceptance matrix explicitly list deferred hardware/routes |

Acceptance rule: every architectural row must remain PASS. A hardware
PASS/PARTIAL is allowed only when the missing behavior is named and is not
described as complete.
