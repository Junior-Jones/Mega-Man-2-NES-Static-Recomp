#!/usr/bin/env python3
from pathlib import Path
import json
import re
import sys

root = Path(sys.argv[1])
program = json.loads(
    (root / "generated/program-map-v06/program_map_summary.json").read_text()
)
direct = json.loads(
    (root / "generated/core-v01/direct_core_summary.json").read_text()
)
shards = sorted((root / "generated/core-v01").glob("mm2_direct_core_bank_*.c"))
route = (root / "src/tools/mm2_metal_multipart_route.c").read_text()

assert program["rom"]["prg_bytes"] == 262144
assert program["candidate_code_bytes"] == 44370
assert program["unclassified_bytes"] == 217774
assert program["whole_rom_static_recomp_complete"] is False
assert program["production_core_accepted"] is False
assert program["resolved_indirect_contracts"] == program["indirect_contracts"] == 27
assert program["unresolved_boundaries"] == 0
assert direct["instruction_identities"] == 20149
assert direct["runtime_opcode_fetch_decode_count"] == 0
assert direct["interpreter_fallback_count"] == 0
assert direct["missing_identity_policy"] == "hard_trap"

counts = {
    int(path.stem.rsplit("_", 1)[1], 16):
        len(re.findall(r"^\s*case 0x[0-9A-Fa-f]{4}u:", path.read_text(), re.M))
    for path in shards
}
assert counts == {9: 122, 11: 4170, 12: 1249, 13: 3904, 14: 6027, 15: 4677}
assert sum(counts.values()) == 20149

assert "mm2_direct_core_set_controller" in route
assert "progress_score" in route
assert not re.search(r"(?:core|trial|best)\.ram\[[^\]]+\]\s*=", route)

print(
    "PASS certification: whole-ROM false, 217774 bytes unclassified, "
    "20149 compiled identities, controller-only Metal agent"
)
