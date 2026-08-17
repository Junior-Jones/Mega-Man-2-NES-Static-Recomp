#!/usr/bin/env python3
import json
import re
import subprocess
import sys
from pathlib import Path

exe = Path(sys.argv[1])
reference_path = Path(sys.argv[2])
output = Path(sys.argv[3])
reference = json.loads(reference_path.read_text(encoding="utf-8"))

assert reference["format"] == "mega-man-2-pinned-mesen-differential-reference-v1"
assert re.fullmatch(r"[0-9a-f]{40}", reference["reference_commit"])
assert len(reference["reference_files"]) == 7
for pin in reference["reference_files"]:
    assert pin["path"].startswith("Core/NES/")
    assert re.fullmatch(r"[0-9a-f]{64}", pin["sha256"])

output.parent.mkdir(parents=True, exist_ok=True)
subprocess.run([str(exe), str(output)], check=True)
actual = json.loads(output.read_text(encoding="utf-8"))
assert actual == reference["trace"], (actual, reference["trace"])
print("PASS pinned Mesen differential trace: CPU IRQ, APU frame/timers/mixer and PPU sprites")
