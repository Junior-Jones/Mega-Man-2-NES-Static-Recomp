#!/usr/bin/env python3
from __future__ import annotations
import pathlib, subprocess, sys, tempfile

FILES = ["bank_value_contracts.csv", "entry_records.csv", "indirect_contracts.csv", "instruction_identities.csv", "mapper_transactions.csv", "program_identity_ledger.csv", "program_map_summary.json", "unresolved_boundaries.csv"]

def main() -> int:
    if len(sys.argv) != 4:
        print("usage: regenerate_program_map_v06.py SOURCE ROM.nes TEMP-ROOT", file=sys.stderr); return 2
    source, rom, temp_root = map(lambda value: pathlib.Path(value).resolve(), sys.argv[1:])
    expected = source / "generated" / "program-map-v06"
    temp_root.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="mm2-map-v06-", dir=temp_root) as temporary:
        actual = pathlib.Path(temporary)
        subprocess.run([sys.executable, str(source / "tools" / "analyze_mm2_program_map_v06.py"), "--rom", str(rom), "--opcodes", str(source / "data" / "6502_opcodes.csv"), "--config", str(source / "config" / "game-v06-reviewed.toml"), "--output", str(actual)], check=True)
        for name in FILES:
            if (actual / name).read_bytes() != (expected / name).read_bytes():
                print(f"FAIL program-map regeneration differs: {name}", file=sys.stderr); return 1
    print("PASS clean milestone-06 program-map regeneration: eight files byte-identical")
    return 0
if __name__ == "__main__": raise SystemExit(main())
