#!/usr/bin/env python3
from pathlib import Path
import json
import subprocess
import sys

exe, rom, out_dir, oracle_path = map(Path, sys.argv[1:5])
out_dir.mkdir(parents=True, exist_ok=True)
subprocess.run([str(exe), str(rom), str(out_dir), "4000000"], check=True)
actual = json.loads((out_dir / "milestone-09-route.json").read_text(encoding="utf-8"))
oracle = json.loads(oracle_path.read_text(encoding="utf-8"))
for key in ("ppu_frames", "framebuffer_hash_fnv1a64", "sprite_pixels", "controller_reads",
            "pcm_total_samples", "pcm_hash_fnv1a64", "pcm_peak", "trap"):
    assert actual[key] == oracle[key], (key, actual[key], oracle[key])
assert actual["ok"] is True
assert (out_dir / actual["frame_evidence"]).stat().st_size > 1000
assert (out_dir / actual["pcm_evidence"]).stat().st_size > 1000
print("PASS milestone 09 exact title/input/sprite/PCM oracle")
