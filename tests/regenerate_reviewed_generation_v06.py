#!/usr/bin/env python3
from __future__ import annotations
import pathlib, subprocess, sys, tempfile

def main() -> int:
    if len(sys.argv) != 5:
        print("usage: regenerate_reviewed_generation_v06.py SOURCE NESRecomp.exe ROM.nes TEMP-ROOT", file=sys.stderr); return 2
    source, tool, rom, temp_root = map(lambda value: pathlib.Path(value).resolve(), sys.argv[1:])
    expected = source / "generated" / "reviewed-generation-v06" / "reviewed_generation_summary.json"
    temp_root.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="reviewed-receipt-v06-", dir=temp_root) as temporary:
        actual = pathlib.Path(temporary) / "summary.json"
        subprocess.run([sys.executable, str(source / "tools" / "audit_reviewed_generation_v06.py"), str(tool), str(rom), str(source / "config" / "game-v06-reviewed.toml"), str(source / "generated" / "program-map-v06" / "program_map_summary.json"), str(temp_root), str(actual)], check=True)
        if actual.read_bytes() != expected.read_bytes():
            print("FAIL reviewed-generation receipt differs from clean regeneration", file=sys.stderr); return 1
    print("PASS clean reviewed-generation regeneration: receipt byte-identical")
    return 0
if __name__ == "__main__": raise SystemExit(main())
