#!/usr/bin/env python3
from __future__ import annotations
import csv, hashlib, json, pathlib, sys

EXPECTED_SHA = "81bb704a0564c9c20eddb2297efe88ce147b2f47b4030cd492d962691ea81a6c"

def main() -> int:
    if len(sys.argv) != 2: print("usage: verify_program_map_v06.py SOURCE", file=sys.stderr); return 2
    root = pathlib.Path(sys.argv[1]).resolve() / "generated" / "program-map-v06"
    raw = (root / "program_map_summary.json").read_bytes(); data = json.loads(raw)
    assert hashlib.sha256(raw).hexdigest() == EXPECTED_SHA
    assert data["format"] == "mega-man-2-program-map-v06" and data["version"] == "1.1.1" and data["milestone"] == 6
    assert data["rom"]["sha256"] == "49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
    assert data["reviewed_config_sha256"] == "2fc2f3ab1f56ddf11e56f73749ec88a804e1a0225927033a0daa5e920d53bcd4"
    assert data["instruction_identities"] == 20149 and data["candidate_code_bytes"] == 44370
    assert data["mapper_transaction_records"] == 1299 and data["bank_value_contracts"] == 98
    assert data["indirect_contracts"] == 27 and data["resolved_indirect_contracts"] == 27
    assert data["unresolved_boundaries"] == 0 and data["conflicting_code_bytes"] == 0
    assert data["program_map_receipt_accepted"] is True and data["program_map_gate_worked"] is False
    assert data["production_core_accepted"] is False and data["whole_rom_static_recomp_complete"] is False
    with (root / "indirect_contracts.csv").open(newline="", encoding="utf-8") as source:
        contracts = list(csv.DictReader(source))
    assert len(contracts) == 27 and all(row["decision"].startswith("resolved") for row in contracts)
    with (root / "bank_value_contracts.csv").open(newline="", encoding="utf-8") as source:
        bank_contracts = list(csv.DictReader(source))
    assert len(bank_contracts) == 98
    assert len({(row["mapping_low_bank"], row["cpu_pc"]) for row in bank_contracts}) == 98
    print("PASS milestone-06 program-map receipt: 98 finite bank-value applications, 27/27 indirect contracts, zero conflicts, zero unresolved boundaries")
    return 0
if __name__ == "__main__": raise SystemExit(main())
