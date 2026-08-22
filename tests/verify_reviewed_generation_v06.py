#!/usr/bin/env python3
from __future__ import annotations
import hashlib, json, pathlib, sys

EXPECTED_SHA = "5332afd8e9cb6de26dce92afa6bf7f4a32e70af35a7a3f0fc6f0063d7eb15788"
EXPECTED_METRICS = {"functions_discovered":4203,"functions_analyzed":4199,"reachable_instructions":562696,"false_positive_suspects":643,"reachable_brk":42045,"reachable_sized_skip":63248,"reachable_halt":17381}

def main() -> int:
    if len(sys.argv) != 2: print("usage: verify_reviewed_generation_v06.py SOURCE", file=sys.stderr); return 2
    path = pathlib.Path(sys.argv[1]).resolve() / "generated" / "reviewed-generation-v06" / "reviewed_generation_summary.json"
    raw = path.read_bytes(); data = json.loads(raw)
    assert hashlib.sha256(raw).hexdigest() == EXPECTED_SHA
    assert data["format"] == "mega-man-2-reviewed-generation-audit-v06" and data["version"] == "1.1.1" and data["milestone"] == 6
    assert data["reviewed_config_sha256"] == "2fc2f3ab1f56ddf11e56f73749ec88a804e1a0225927033a0daa5e920d53bcd4"
    assert data["program_map_sha256"] == "81bb704a0564c9c20eddb2297efe88ce147b2f47b4030cd492d962691ea81a6c"
    assert data["metrics"] == EXPECTED_METRICS
    assert all(value > 0 for value in data["improvement_from_v03"].values())
    assert data["reviewed_configuration_used"] is True and data["deterministic_regeneration_required"] is True
    assert data["production_core_accepted"] is False and data["acceptance_gate_worked"] is True
    assert data["runtime_opcode_fetch_decode_allowed"] is False and data["interpreter_fallback_allowed"] is False
    print("PASS reviewed-generation receipt: deterministic improvements recorded and unsafe production output rejected")
    return 0
if __name__ == "__main__": raise SystemExit(main())
