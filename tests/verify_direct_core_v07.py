#!/usr/bin/env python3
from __future__ import annotations
import hashlib, json
from pathlib import Path
import sys

def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()

def tree_digest(paths: list[Path]) -> str:
    value = hashlib.sha256()
    for path in sorted(paths, key=lambda item: item.name):
        value.update(path.name.encode("utf-8"))
        value.update(b"\0")
        value.update(path.read_bytes())
    return value.hexdigest()

def main() -> int:
    if len(sys.argv) != 2:
        print("usage: verify_direct_core_v07.py SOURCE", file=sys.stderr); return 2
    root = Path(sys.argv[1])
    summary_path = root / "generated/core-v01/direct_core_summary.json"
    generated = root / "generated/core-v01"
    shard_paths = sorted(generated.glob("mm2_direct_core_bank_*.c"))
    dispatch_path = generated / "mm2_direct_core_dispatch.c"
    source_paths = shard_paths + [dispatch_path]
    summary = json.loads(summary_path.read_text(encoding="utf-8"))
    required = {
        "format": "mega-man-2-direct-core-v2",
        "version": "1.1.1",
        "milestone": 7,
        "architecture_revision": 2,
        "instruction_identities": 20149,
        "unique_bank_pc_identities": 20149,
        "runtime_opcode_fetch_decode_count": 0,
        "interpreter_fallback_count": 0,
        "missing_identity_policy": "hard_trap",
        "direct_core_link_gate": "accepted",
    }
    for key, expected in required.items():
        if summary.get(key) != expected:
            raise SystemExit(f"direct-core receipt mismatch: {key}")
    if len(shard_paths) != 6 or not dispatch_path.is_file():
        raise SystemExit("generated direct core must contain six bank shards and one dispatcher")
    source_hashes = summary.get("generated_sources", {})
    for path in source_paths:
        if source_hashes.get(path.name) != digest(path):
            raise SystemExit(f"generated source SHA-256 mismatch: {path.name}")
    if summary.get("generated_tree_sha256") != tree_digest(source_paths):
        raise SystemExit("generated direct-core tree SHA-256 mismatch")
    text = "\n".join(path.read_text(encoding="utf-8") for path in shard_paths)
    dispatch = dispatch_path.read_text(encoding="utf-8")
    if text.count("case 0x") != 20149 or "default:" in text + dispatch:
        raise SystemExit("generated direct core must contain exactly 20,149 explicit cases and no default")
    expected_counts = {"09": 122, "0B": 4170, "0C": 1249,
                       "0D": 3904, "0E": 6027, "0F": 4677}
    if summary.get("bank_case_counts") != expected_counts:
        raise SystemExit("generated direct-core bank counts mismatch")
    if summary.get("shard_count") != 6 or summary.get("dispatch_bank_count") != 6:
        raise SystemExit("generated direct-core dispatch count mismatch")
    if "mm2_direct_core_dispatch" not in dispatch or dispatch.count("case 0x") != 6:
        raise SystemExit("generated direct-core bank dispatch mismatch")
    if "ea = pull(c);" not in text:
        raise SystemExit("generated returns must sequence emulated stack pulls")
    if "c->pc = (uint16_t)((uint16_t)pull(c) |" in text:
        raise SystemExit("generated returns must not depend on C operand evaluation order")
    for token in ("opcode", "decode", "interpreter", "fallback"):
        if token in text.lower():
            raise SystemExit(f"forbidden generated-core token: {token}")
    print("PASS direct-core receipt: 20,149 identities in six deterministic bank shards, hard trap, zero decode/fallback")
    return 0

if __name__ == "__main__": raise SystemExit(main())

