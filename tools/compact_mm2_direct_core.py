#!/usr/bin/env python3
"""Losslessly factor repeated generated 6502 bodies.

Every physical-bank:PC identity remains an explicit production switch case.
Each case calls one fixed helper selected at generation time; no runtime opcode
fetch, decoder, interpreter, JIT, or fallback is introduced.  The complete
context-to-helper map is retained in an offline, non-linked sidecar.
"""
from __future__ import annotations

import hashlib
import json
import re
from pathlib import Path
import sys


CASE_RE = re.compile(
    r"^case (0x[0-9A-Fa-f]+u): /\* ([^*]+) \*/\n(.*?)(?=^case |^    \}\n)",
    re.MULTILINE | re.DOTALL,
)
NUMBER_RE = re.compile(r"0x[0-9A-Fa-f]+[uUlL]*|\b[0-9]+[uUlL]+\b")


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def tree_digest(paths: list[Path]) -> str:
    value = hashlib.sha256()
    for path in sorted(paths, key=lambda item: item.name):
        value.update(path.name.encode("utf-8"))
        value.update(b"\0")
        value.update(path.read_bytes())
    return value.hexdigest()


def collect(core: Path) -> dict:
    helpers: list[dict] = []
    helper_ids: dict[str, int] = {}
    banks: list[dict] = []
    source_hashes: dict[str, str] = {}
    source_bytes = 0
    total = 0

    for path in sorted(core.glob("mm2_direct_core_bank_*.c")):
        text = path.read_text(encoding="utf-8")
        source_hashes[path.name] = digest(path)
        source_bytes += path.stat().st_size
        cases = []
        for match in CASE_RE.finditer(text):
            arguments: list[str] = []

            def replace_number(number_match: re.Match[str]) -> str:
                index = len(arguments)
                arguments.append(number_match.group(0))
                return f"p{index}"

            body = NUMBER_RE.sub(replace_number, match.group(3))
            helper_id = helper_ids.get(body)
            if helper_id is None:
                helper_id = len(helpers)
                helper_ids[body] = helper_id
                helpers.append(
                    {
                        "id": helper_id,
                        "parameter_count": len(arguments),
                        "body": body,
                    }
                )
            elif helpers[helper_id]["parameter_count"] != len(arguments):
                raise RuntimeError("normalized helper parameter mismatch")
            cases.append(
                {
                    "pc": match.group(1),
                    "instruction": match.group(2).strip(),
                    "helper": helper_id,
                    "arguments": arguments,
                }
            )
            total += 1
        banks.append({"file": path.name, "cases": cases})

    dispatch = core / "mm2_direct_core_dispatch.c"
    source_hashes[dispatch.name] = digest(dispatch)
    source_bytes += dispatch.stat().st_size
    if total != 20149 or len(banks) != 6:
        raise RuntimeError(
            f"expected 20,149 identities in six shards, found {total} in {len(banks)}"
        )
    return {
        "format": "mega-man-2-direct-core-compaction-sidecar-v1",
        "compiled_into_runtime": False,
        "runtime_opcode_decoder": False,
        "runtime_context_key_extension_allowed": False,
        "context_identity": "physical_prg_bank:cpu_pc",
        "context_count": total,
        "helper_count": len(helpers),
        "original_generated_source_bytes": source_bytes,
        "original_source_sha256": source_hashes,
        "helpers": helpers,
        "banks": banks,
    }


def validate_originals(manifest: dict, core: Path) -> None:
    for name, expected in manifest["original_source_sha256"].items():
        path = core / name
        if not path.is_file() or digest(path) != expected:
            raise RuntimeError(
                f"uncompacted generator output changed: {name}; review and rebuild the sidecar"
            )


def literal_value(text: str) -> int:
    return int(text.rstrip("uUlL"), 0)


def parameter_widths(manifest: dict) -> dict[int, list[str]]:
    maxima = {
        helper["id"]: [0] * helper["parameter_count"]
        for helper in manifest["helpers"]
    }
    for bank in manifest["banks"]:
        for case in bank["cases"]:
            values = maxima[case["helper"]]
            for index, argument in enumerate(case["arguments"]):
                values[index] = max(values[index], literal_value(argument))
    return {
        helper_id: ["uint8_t" if value <= 0xFF else "uint16_t" for value in values]
        for helper_id, values in maxima.items()
    }


def declaration(helper: dict, widths: dict[int, list[str]]) -> str:
    params = ["MM2DirectCore *c"] + [
        f"{widths[helper['id']][i]} p{i}"
        for i in range(helper["parameter_count"])
    ]
    return f"int mm2_compact_semantic_{helper['id']:03d}({', '.join(params)})"


def render(manifest: dict, core: Path) -> list[Path]:
    if manifest.get("context_count") != 20149:
        raise RuntimeError("compaction sidecar context count is not 20,149")
    helpers = manifest["helpers"]
    widths = parameter_widths(manifest)
    header = [
        "#ifndef MM2_DIRECT_CORE_COMPACT_H",
        "#define MM2_DIRECT_CORE_COMPACT_H",
        '#include "internal/mm2_direct_core_internal.h"',
        "",
    ]
    implementation = ['#include "mm2_direct_core_compact.h"', ""]
    for helper in helpers:
        line = declaration(helper, widths)
        header.append(line + ";")
        implementation.append(line + " {")
        body = helper["body"]
        if re.search(r"\bea\b", body):
            implementation.append("    uint16_t ea = 0u;")
        if re.search(r"\bv\b", body):
            implementation.append("    uint8_t v = 0u;")
        implementation.append(body.rstrip("\r\n"))
        implementation.append("}")
        implementation.append("")
    header.extend(["", "#endif", ""])
    header_path = core / "mm2_direct_core_compact.h"
    helper_path = core / "mm2_direct_core_compact.c"
    header_path.write_text("\n".join(header), encoding="utf-8", newline="\n")
    helper_path.write_text(
        "\n".join(implementation), encoding="utf-8", newline="\n"
    )

    rendered = 0
    shard_paths: list[Path] = []
    for bank in manifest["banks"]:
        path = core / bank["file"]
        stem = path.stem
        bank_id = stem.rsplit("_", 1)[-1]
        lines = [
            "/* Compact generated authority. Do not edit. */",
            '#include "mm2_direct_core_compact.h"',
            "",
            f"int mm2_direct_core_bank_{bank_id}(MM2DirectCore *c, uint16_t pc) {{",
            "    switch (pc) {",
        ]
        for case in bank["cases"]:
            arguments = ["c"] + case["arguments"]
            lines.append(
                f"    case {case['pc']}: /* {case['instruction']} */ "
                f"return mm2_compact_semantic_{case['helper']:03d}"
                f"({', '.join(arguments)});"
            )
            rendered += 1
        lines.extend(["    }", "    return 0;", "}", ""])
        path.write_text("\n".join(lines), encoding="utf-8", newline="\n")
        shard_paths.append(path)
    if rendered != manifest["context_count"]:
        raise RuntimeError("rendered context count does not match sidecar")
    return shard_paths + [core / "mm2_direct_core_dispatch.c", helper_path, header_path]


def update_receipt(root: Path, manifest: dict, generated: list[Path], sidecar: Path) -> None:
    receipt_path = root / "generated/core-v01/direct_core_summary.json"
    receipt = json.loads(receipt_path.read_text(encoding="utf-8"))
    compact_bytes = sum(path.stat().st_size for path in generated)
    receipt.update(
        {
            "format": "mega-man-2-direct-core-v3-compact",
            "version": "1.2.0",
            "milestone": 15,
            "architecture_revision": 3,
            "generated_tree_sha256": tree_digest(generated),
            "generated_sources": {
                path.name: digest(path)
                for path in sorted(generated, key=lambda item: item.name)
            },
            "compaction_sidecar_sha256": digest(sidecar),
            "compaction_context_count": manifest["context_count"],
            "compaction_helper_count": manifest["helper_count"],
            "original_generated_source_bytes": manifest[
                "original_generated_source_bytes"
            ],
            "compact_generated_source_bytes": compact_bytes,
            "runtime_opcode_fetch_decode_count": 0,
            "interpreter_fallback_count": 0,
        }
    )
    receipt_path.write_text(
        json.dumps(receipt, indent=2) + "\n", encoding="utf-8", newline="\n"
    )


def main() -> int:
    if len(sys.argv) != 2:
        print("usage: compact_mm2_direct_core.py SOURCE", file=sys.stderr)
        return 2
    root = Path(sys.argv[1]).resolve()
    core = root / "generated/core-v01"
    analysis = root / "generated/analysis"
    sidecar = analysis / "mm2_direct_core_compaction.json"
    analysis.mkdir(parents=True, exist_ok=True)
    if sidecar.exists():
        manifest = json.loads(sidecar.read_text(encoding="utf-8"))
    else:
        manifest = collect(core)
        sidecar.write_text(
            json.dumps(manifest, indent=2) + "\n",
            encoding="utf-8",
            newline="\n",
        )
    validate_originals(manifest, core)
    generated = render(manifest, core)
    update_receipt(root, manifest, generated, sidecar)
    print(
        f"PASS compacted {manifest['context_count']} fixed identities into "
        f"{manifest['helper_count']} semantic helpers; no runtime decoder added"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
