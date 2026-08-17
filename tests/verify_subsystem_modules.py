#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(sys.argv[1])
runtime = root / "src/runtime"
cmake = (root / "CMakeLists.txt").read_text(encoding="utf-8")
coordinator = (runtime / "mm2_direct_core.c").read_text(encoding="utf-8")
private = (runtime / "internal/mm2_direct_core_internal.h").read_text(
    encoding="utf-8"
)

modules = {
    "mm2_cpu.c": ("service_nmi", "adc8", "compare8"),
    "mm2_bus.c": ("read8", "write8", "mm2_mmc1_write_cpu_cycle"),
    "mm2_ppu.c": ("ppu_tick", "ppu_read_register", "render_background"),
    "mm2_apu.c": ("apu_advance", "mm2_apu_write_register", "apu_current_mixed_sample"),
    "mm2_scheduler.c": ("scheduler_advance", "apu_advance", "ppu_tick"),
}

for name, required in modules.items():
    path = runtime / name
    assert path.is_file(), name
    text = path.read_text(encoding="utf-8")
    assert "internal/mm2_direct_core_internal.h" in text, name
    for token in required:
        assert token in text, f"{name}: {token}"
    assert f"src/runtime/{name}" in cmake, name

for moved in (
    "static uint8_t read8_raw", "static void render_background",
    "static int16_t apu_current_mixed_sample", "static void set_nz",
    "static void scheduler_advance",
):
    assert moved not in coordinator, moved

for internal_api in (
    "read8(MM2DirectCore", "ppu_tick(MM2DirectCore",
    "apu_advance(MM2DirectCore", "scheduler_advance(MM2DirectCore",
):
    assert internal_api in private, internal_api

assert "mm2_direct_core_dispatch" in coordinator
assert "int mm2_direct_core_step" in coordinator
assert "struct MM2DirectCore {" not in coordinator
print("PASS direct-core subsystem boundaries: CPU, bus, PPU, APU and scheduler are separate internal modules")
