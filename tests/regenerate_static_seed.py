#!/usr/bin/env python3
from __future__ import annotations
import subprocess
import sys
import tempfile
from pathlib import Path

OUTPUTS = (
    "proven_instructions.csv",
    "unresolved_boundaries.csv",
    "mapper_write_sites.csv",
    "static_proof_summary.json",
    "STATIC-PROOF-REPORT.txt",
    "mm2_static_seed.h",
    "mm2_static_seed.c",
)

def main() -> int:
    if len(sys.argv) != 3:
        print("usage: regenerate_static_seed.py SOURCE ROM", file=sys.stderr)
        return 2
    root = Path(sys.argv[1]).resolve()
    rom = Path(sys.argv[2]).resolve()
    expected = root / "generated" / "proof-v02"
    with tempfile.TemporaryDirectory(prefix="mm2-proof-regeneration-") as temporary:
        output = Path(temporary)
        command = [
            sys.executable,
            str(root / "tools" / "analyze_mm2_static_seed.py"),
            "--rom", str(rom),
            "--opcodes", str(root / "data" / "6502_opcodes.csv"),
            "--output", str(output),
        ]
        completed = subprocess.run(command, check=False, capture_output=True, text=True)
        if completed.returncode != 0:
            print(completed.stdout, end="")
            print(completed.stderr, end="", file=sys.stderr)
            return completed.returncode
        changed = [name for name in OUTPUTS if (output / name).read_bytes() != (expected / name).read_bytes()]
        if changed:
            print("FAIL regenerated proof differs: " + ", ".join(changed), file=sys.stderr)
            return 1
    print(f"PASS clean static-seed regeneration: {len(OUTPUTS)} files byte-identical")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
