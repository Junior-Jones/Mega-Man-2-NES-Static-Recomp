#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(sys.argv[1])
header = (root / "src/runtime/mm2_direct_core.h").read_text(encoding="utf-8")
core = (root / "src/runtime/mm2_direct_core.c").read_text(encoding="utf-8")
apu = (root / "src/runtime/mm2_apu.c").read_text(encoding="utf-8")
private = (root / "src/runtime/internal/mm2_direct_core_internal.h").read_text(encoding="utf-8")
live = (root / "src/gui/mm2_windows_live.cpp").read_text(encoding="utf-8")

for api in ("MM2FrameResult", "mm2_direct_core_advance_frame",
            "mm2_direct_core_frame_copy_indexed",
            "mm2_direct_core_frame_copy_bgra",
            "mm2_direct_core_audio_available",
            "mm2_direct_core_audio_read",
            "mm2_direct_core_audio_discard",
            "mm2_direct_core_audio_clear",
            "mm2_direct_core_audio_overflowed"):
    assert api in header, api

assert "pcm_output_push" in apu
for implementation in ("MM2_CORE_TRAP_STEP_LIMIT",
                       "c->ppu_frames == start_frame"):
    assert implementation in core, implementation
for queue_field in ("pcm_output[8192]", "pcm_output_read",
                    "pcm_output_write", "pcm_output_count"):
    assert queue_field in private, queue_field

for frontend_api in ("mm2_direct_core_advance_frame",
                     "mm2_direct_core_presentation_copy_indexed",
                     "mm2_direct_core_audio_available",
                     "mm2_direct_core_audio_read"):
    assert frontend_api in live, frontend_api
assert "s->video.pixels" in live
for old_coupling in ("mm2_direct_core_step(", "pcm_total_samples",
                     "mm2_direct_core_pcm_copy"):
    assert old_coupling not in live, old_coupling

print("PASS unified frame/output API: frontend consumes frames and bounded PCM without instruction/ring coupling")
