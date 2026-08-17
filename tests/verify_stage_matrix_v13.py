#!/usr/bin/env python3
import hashlib
import json
import shutil
import subprocess
import sys
from pathlib import Path

exe, rom, output, oracle_path = map(Path, sys.argv[1:5])
if output.exists():
    shutil.rmtree(output)
subprocess.run([str(exe), str(rom), str(output), "40000000"], check=True)
result = json.loads((output / "stage-matrix-result.json").read_text())
oracle = json.loads(oracle_path.read_text())
assert result["ok"] is True and result["passed"] == 8
assert result["timing_lock"] == {"ntsc_frame_hz": 60.098810,
                                 "cpu_hz": 1789773, "pcm_hz": 44100}
actual = {s["slug"]: s for s in result["stages"]}
assert set(actual) == set(oracle["stages"])
for slug, expected in oracle["stages"].items():
    stage = actual[slug]
    assert stage["ok"] is True and stage["trap"] == "none"
    assert stage["frames"] == 2050
    assert stage["framebuffer_hash_fnv1a64"] == expected["framebuffer_hash_fnv1a64"]
    bmp = output / stage["screenshot"]
    assert bmp.stat().st_size == 184374
    assert hashlib.sha256(bmp.read_bytes()).hexdigest().upper() == expected["bmp_sha256"]
print("PASS v0.13 eight-stage exact visual/timing oracle")
