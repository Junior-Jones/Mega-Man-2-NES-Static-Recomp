#!/usr/bin/env python3
import hashlib
import json
from pathlib import Path
import subprocess
import sys

route_exe = Path(sys.argv[1])
rom = Path(sys.argv[2])
out = Path(sys.argv[3])
oracle = json.loads(Path(sys.argv[4]).read_text(encoding="utf-8"))
out.mkdir(parents=True, exist_ok=True)

subprocess.run([str(route_exe), str(rom), str(out), "60000000"], check=True)
result = json.loads((out / "milestone-12-route.json").read_text(encoding="utf-8"))

assert hashlib.sha256(rom.read_bytes()).hexdigest().upper() == oracle["rom_sha256"]
for checkpoint in oracle["checkpoints"]:
    image = out / f"checkpoint-{checkpoint['frame']}.bmp"
    assert image.is_file(), image
    assert hashlib.sha256(image.read_bytes()).hexdigest().upper() == checkpoint["bmp_sha256"]

state = oracle["final_state"]
mapping = {
    "ppu_frames": "ppu_frames",
    "framebuffer_hash_fnv1a64": "framebuffer_hash_fnv1a64",
    "gameplay_frame_hash_fnv1a64": "gameplay_frame_hash_fnv1a64",
    "gameplay_sprite_pixels": "gameplay_sprite_pixels",
    "controller_reads": "controller_reads",
    "pcm_total_samples": "pcm_total_samples",
    "pcm_hash_fnv1a64": "pcm_hash_fnv1a64",
    "pcm_peak": "pcm_peak",
    "trap": "trap",
}
for expected_key, result_key in mapping.items():
    assert result[result_key] == state[expected_key], (
        expected_key, result[result_key], state[expected_key]
    )

print("PASS v0.12 oracle matrix: 4 exact visual checkpoints plus final graphics/input/audio/state evidence")
