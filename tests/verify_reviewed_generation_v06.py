#!/usr/bin/env python3
from __future__ import annotations
import hashlib, json, pathlib, sys

EXPECTED_SHA = "09277fbc51d429367ff23e397705d703a70715777ae55103c7020d169a0d45a6"
EXPECTED_METRICS = {"functions_discovered":4203,"functions_analyzed":4199,"reachable_instructions":562696,"false_positive_suspects":643,"reachable_brk":42045,"reachable_sized_skip":63248,"reachable_halt":17381}

def main() -> int:
    if len(sys.argv) != 2: print("usage: verify_reviewed_generation_v06.py SOURCE", file=sys.stderr); return 2
    path = pathlib.Path(sys.argv[1]).resolve() / "generated" / "reviewed-generation-v06" / "reviewed_generation_summary.json"
    raw = path.read_bytes(); data = json.loads(raw)
    assert hashlib.sha256(raw).hexdigest() == EXPECTED_SHA
    assert data["format"] == "mega-man-2-reviewed-generation-audit-v06" and data["version"] == "1.1.0" and data["milestone"] == 6
    assert data["reviewed_config_sha256"] == "2fc2f3ab1f56ddf11e56f73749ec88a804e1a0225927033a0daa5e920d53bcd4"
    assert data["program_map_sha256"] == "748839837b0d15ca62c2a0eab5fa8916858f411586b158a90d2400a9a7e62121"
    assert data["metrics"] == EXPECTED_METRICS
    assert all(value > 0 for value in data["improvement_from_v03"].values())
    assert data["reviewed_configuration_used"] is True and data["deterministic_regeneration_required"] is True
    assert data["production_core_accepted"] is False and data["acceptance_gate_worked"] is True
    assert data["runtime_opcode_fetch_decode_allowed"] is False and data["interpreter_fallback_allowed"] is False
    print("PASS reviewed-generation receipt: deterministic improvements recorded and unsafe production output rejected")
    return 0
if __name__ == "__main__": raise SystemExit(main())
