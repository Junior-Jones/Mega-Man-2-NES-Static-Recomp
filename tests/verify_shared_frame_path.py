#!/usr/bin/env python3
from pathlib import Path
import re
import sys

root = Path(sys.argv[1])
cmake = (root / "CMakeLists.txt").read_text(encoding="utf-8")
support = (root / "src/tools/mm2_route_support.c").read_text(encoding="utf-8")
launcher = (root / "src/gui/mm2_windows_live.cpp").read_text(encoding="utf-8")
ordinary = [
    "mm2_headless.c", "mm2_native_route.c", "mm2_milestone09_route.c",
    "mm2_milestone10_route.c", "mm2_milestone12_route.c",
    "mm2_stage_matrix_route.c",
]

assert "mm2_direct_core_advance_frame" in launcher
assert "mm2_direct_core_advance_frame" in support
assert "mm2_direct_core_observe" in support
for name in ordinary:
    text = (root / "src/tools" / name).read_text(encoding="utf-8")
    assert "mm2_direct_core_internal.h" not in text, name
    assert "mm2_direct_core_step" not in text, name
    assert not re.search(r"\bMM2DirectCore\s+[A-Za-z_]\w*\s*[;,]", text), name
    assert "->ppu_" not in text and ".ppu_frames" not in text, name

for retained in ("mm2-direct-core-selftest", "mm2-runtime-hook-selftest",
                 "mm2-apu-accuracy-selftest", "mm2-metal-multipart-route"):
    assert retained in cmake, retained
for removed in ("mm2-headless", "mm2-native-route", "mm2-milestone09-route",
                "mm2-milestone10-route", "mm2-milestone12-route",
                "mm2-stage-matrix-route"):
    internal_block = cmake.split("set(MM2_INTERNAL_CORE_TOOLS", 1)[1].split(")", 1)[0]
    assert removed not in internal_block, removed

assert "shared-headed-headless-frame-self-test" in cmake
assert "shared-headed-headless-frame-api" in cmake
print("PASS shared headed/headless frame path: ordinary routes use opaque frame/observation APIs")
