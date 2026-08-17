#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(sys.argv[1])
public = (root / "src/runtime/mm2_direct_core.h").read_text(encoding="utf-8")
private = (root / "src/runtime/internal/mm2_direct_core_internal.h").read_text(encoding="utf-8")
live = (root / "src/gui/mm2_windows_live.cpp").read_text(encoding="utf-8")
cmake = (root / "CMakeLists.txt").read_text(encoding="utf-8")

assert "typedef struct MM2DirectCore MM2DirectCore;" in public
for leaked in ("struct MM2DirectCore {", "uint16_t pc;", "framebuffer[",
               "pcm_samples[", "MM2Mmc1 mapper"):
    assert leaked not in public, leaked

assert "struct MM2DirectCore {" in private
assert "mm2_direct_core_internal.h" not in live
for coupling in ("s->core.", "mm2_direct_core_step(&s->core)",
                 "mm2_direct_core_reset(&s->core", "sizeof(MM2DirectCore)"):
    assert coupling not in live, coupling
for api in ("mm2_direct_core_create", "mm2_direct_core_destroy",
            "mm2_direct_core_frame_count", "mm2_direct_core_frame_copy_indexed",
            "mm2_direct_core_audio_read", "mm2_direct_core_snapshot_save",
            "mm2_direct_core_snapshot_load"):
    assert api in public and api in live, api

assert "MM2_INTERNAL_CORE_TOOLS" in cmake
assert "src/runtime/internal" in cmake
print("PASS opaque core boundary: production frontend uses lifecycle and accessor APIs")
