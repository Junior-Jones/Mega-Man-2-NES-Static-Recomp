#!/usr/bin/env python3
"""Run the pinned generator with the reviewed v0.06 configuration."""
from __future__ import annotations

import hashlib
import json
import pathlib
import re
import subprocess
import sys
import tempfile

EXPECTED_ROM_SHA256 = "49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
EXPECTED_TOOL_SHA256 = "f8287544e29091cc87b30c96a618fb6bf8e12a2fefcec9f489c5db112e6849d2"
EXPECTED_TOOL_COMMIT = "f85051decadd3f4fab8ab0d15b4ace1b3df19764"
EXPECTED_CONFIG_SHA256 = "2fc2f3ab1f56ddf11e56f73749ec88a804e1a0225927033a0daa5e920d53bcd4"
V03_METRICS = {
    "functions_discovered": 7157, "functions_analyzed": 4363,
    "reachable_instructions": 747805, "false_positive_suspects": 836,
    "reachable_brk": 57234, "reachable_sized_skip": 95093, "reachable_halt": 29583,
}


def sha(path: pathlib.Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def tree_hash(root: pathlib.Path) -> str:
    digest = hashlib.sha256()
    for path in sorted((item for item in root.rglob("*") if item.is_file()), key=lambda item: item.relative_to(root).as_posix()):
        relative = path.relative_to(root).as_posix().encode()
        data = path.read_bytes()
        digest.update(len(relative).to_bytes(4, "big")); digest.update(relative)
        digest.update(len(data).to_bytes(8, "big")); digest.update(data)
    return digest.hexdigest()


def match_int(pattern: str, text: str) -> int:
    match = re.search(pattern, text, re.MULTILINE | re.DOTALL)
    if not match:
        raise RuntimeError(f"NESRecomp output missing metric: {pattern}")
    return int(match.group(1))


def main() -> int:
    if len(sys.argv) != 7:
        print("usage: audit_reviewed_generation_v06.py NESRecomp.exe ROM.nes CONFIG.toml PROGRAM-MAP.json TEMP-ROOT SUMMARY.json", file=sys.stderr)
        return 2
    tool, rom, config, program_map, temp_root, summary = map(lambda value: pathlib.Path(value).resolve(), sys.argv[1:])
    if sha(tool) != EXPECTED_TOOL_SHA256:
        raise SystemExit("pinned NESRecomp executable SHA-256 mismatch")
    if sha(rom) != EXPECTED_ROM_SHA256:
        raise SystemExit("exact Mega Man 2 ROM SHA-256 mismatch")
    if sha(config) != EXPECTED_CONFIG_SHA256:
        raise SystemExit("reviewed v0.06 configuration SHA-256 mismatch")
    mapped = json.loads(program_map.read_text(encoding="utf-8"))
    if mapped["format"] != "mega-man-2-program-map-v06":
        raise SystemExit("wrong program-map receipt format")
    temp_root.mkdir(parents=True, exist_ok=True)
    work = pathlib.Path(tempfile.mkdtemp(prefix="nesrecomp-mm2-v06-reviewed-", dir=temp_root))
    command = [str(tool), str(rom), "--game", str(config)]
    process = subprocess.run(command, cwd=work, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, timeout=180)
    log = process.stdout
    (work / "nesrecomp.log").write_text(log, encoding="utf-8", newline="\n")
    if process.returncode != 0:
        raise SystemExit(f"NESRecomp failed: {process.returncode}")
    coverage = work / "generated" / "mm2_reviewed_v06_coverage.txt"
    coverage_text = coverage.read_text(encoding="utf-8")
    metrics = {
        "functions_discovered": match_int(r"Total functions found:\s*(\d+)", log),
        "functions_analyzed": match_int(r"Coverage:.*?\((\d+) functions analyzed", log),
        "reachable_instructions": match_int(r"functions analyzed,\s*(\d+) reachable insns", log),
        "false_positive_suspects": match_int(r"False positive suspects:\s*(\d+)/", log),
        "reachable_brk": match_int(r"BRK \(official\)\s+count=(\d+)", coverage_text),
        "reachable_sized_skip": sum(int(value) for value in re.findall(r"unofficial(?: UNSTABLE)?, sized-skip\)\s+count=(\d+)", coverage_text)),
        "reachable_halt": match_int(r"KIL/STP/JAM .*?count=(\d+)", coverage_text),
    }
    reasons = []
    if metrics["false_positive_suspects"]:
        reasons.append(f"{metrics['false_positive_suspects']} finder false-positive suspects remain")
    if metrics["reachable_brk"]:
        reasons.append(f"{metrics['reachable_brk']} reachable BRK classifications remain")
    if metrics["reachable_sized_skip"]:
        reasons.append(f"{metrics['reachable_sized_skip']} instructions with skipped side effects remain")
    if metrics["reachable_halt"]:
        reasons.append(f"{metrics['reachable_halt']} reachable halt classifications remain")
    if not mapped["program_map_receipt_accepted"]:
        reasons.append(f"candidate map has {mapped['conflicting_code_bytes']} conflicting bytes and {mapped['unresolved_boundaries']} unresolved boundaries")
    improvements = {key: V03_METRICS[key] - metrics[key] for key in V03_METRICS}
    receipt = {
        "format": "mega-man-2-reviewed-generation-audit-v06", "version": "1.1.1", "milestone": 6,
        "tool": {"repository": "mstan/nesrecomp", "commit": EXPECTED_TOOL_COMMIT, "executable_sha256": sha(tool)},
        "rom_sha256": sha(rom), "reviewed_config_sha256": sha(config), "program_map_sha256": sha(program_map),
        "command": [tool.name, rom.name, "--game", config.name], "metrics": metrics,
        "improvement_from_v03": improvements,
        "artifacts": {"coverage_sha256": sha(coverage), "generated_tree_sha256": tree_hash(work / "generated")},
        "reviewed_configuration_used": True, "deterministic_regeneration_required": True,
        "production_core_accepted": not reasons, "acceptance_gate_worked": bool(reasons), "rejection_reasons": reasons,
        "runtime_opcode_fetch_decode_allowed": False, "interpreter_fallback_allowed": False,
        "audio_runtime_linked": False, "audio_test_status": "deferred_until_native_apu_sample_output_exists",
    }
    summary.parent.mkdir(parents=True, exist_ok=True)
    summary.write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"PASS reviewed generation audit executed; production core accepted={receipt['production_core_accepted']}")
    print(f"work={work}")
    print(f"summary={summary}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

