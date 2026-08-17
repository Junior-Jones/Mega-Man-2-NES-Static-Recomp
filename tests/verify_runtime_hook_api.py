#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(sys.argv[1])
public = (root / "src/runtime/mm2_direct_core.h").read_text(encoding="utf-8")
private = (root / "src/runtime/internal/mm2_direct_core_internal.h").read_text(encoding="utf-8")
core = (root / "src/runtime/mm2_direct_core.c").read_text(encoding="utf-8")
bus = (root / "src/runtime/mm2_bus.c").read_text(encoding="utf-8")
ppu = (root / "src/runtime/mm2_ppu.c").read_text(encoding="utf-8")
snapshot = (root / "src/runtime/mm2_snapshot.c").read_text(encoding="utf-8")
cmake = (root / "CMakeLists.txt").read_text(encoding="utf-8")

for token in ("MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE", "MM2_RUNTIME_EVENT_BUS_READ",
              "MM2_RUNTIME_EVENT_BUS_WRITE", "MM2_RUNTIME_EVENT_INSTRUCTION_AFTER",
              "MM2_RUNTIME_EVENT_FRAME_COMPLETE", "MM2_RUNTIME_EVENT_FRONTIER",
              "MM2RuntimeHook", "mm2_direct_core_set_runtime_hook",
              "mm2_direct_core_request_stop", "mm2_direct_core_is_stopped",
              "mm2_direct_core_resume"):
    assert token in public, token

for token in ("runtime_hook_stop_requested", "runtime_hook_stopped",
              "runtime_hook_dispatching", "runtime_hook_sequence"):
    assert token in private, token

for token in ("emit_runtime_event", "commit_runtime_stop",
              "MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE",
              "MM2_RUNTIME_EVENT_INSTRUCTION_AFTER",
              "MM2_RUNTIME_EVENT_FRONTIER"):
    assert token in core, token
for token in ("MM2_RUNTIME_EVENT_BUS_READ", "MM2_RUNTIME_EVENT_BUS_WRITE"):
    assert token in bus, token
assert "MM2_RUNTIME_EVENT_FRAME_COMPLETE" in ppu

assert "copy.runtime_hook = NULL" in core
assert "copy.runtime_hook_user = NULL" in core
assert "sanitize_snapshot_payload" in snapshot
assert "current-runtime-hook-self-test" in cmake
assert "current-runtime-hook-api" in cmake
print("PASS current-runtime hook API: safe boundaries, bus/frame/frontier events and transient hook state")
