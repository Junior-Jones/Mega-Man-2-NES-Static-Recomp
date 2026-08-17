#!/usr/bin/env python3
from pathlib import Path
import json
import subprocess
import sys

exe, rom, out_dir, oracle_path = map(Path, sys.argv[1:5])
out_dir.mkdir(parents=True, exist_ok=True)
subprocess.run([str(exe), str(rom), str(out_dir), "60000000"], check=True)
actual = json.loads((out_dir / "milestone-10-route.json").read_text(encoding="utf-8"))
oracle = json.loads(oracle_path.read_text(encoding="utf-8"))
for key in ("ppu_frames", "framebuffer_hash_fnv1a64", "gameplay_frame_hash_fnv1a64",
            "gameplay_sprite_pixels", "controller_reads", "pcm_total_samples",
            "pcm_hash_fnv1a64", "pcm_peak", "trap"):
    assert actual[key] == oracle[key], (key, actual[key], oracle[key])
assert actual["ok"] is True
assert actual["apu_write_events_total"] >= 30000
assert actual["sprite_zero_hits"] > 0
assert actual["sprite_overflow_scanlines"] > 0
for key in ("frame_evidence", "apu_evidence", "pcm_evidence"):
    assert (out_dir / actual[key]).stat().st_size > 1000, key
print("PASS milestone 10 exact controlled-gameplay graphics/input/APU oracle")
