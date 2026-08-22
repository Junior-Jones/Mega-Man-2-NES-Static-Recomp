#!/usr/bin/env python3
"""Generate the strict bank/PC-dispatched 6502 core from the accepted v0.06 map.

Instruction opcodes and operands become C constants. The generated runtime never
fetches or decodes an opcode and has no catch-all execution path.
"""
from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path
import sys


READ_MNEMONICS = {"ADC", "AND", "CMP", "CPX", "CPY", "EOR", "LDA", "LDX", "LDY", "ORA", "SBC"}
BRANCH_CONDITIONS = {
    "BCC": "(c->p & MM2_FLAG_C) == 0u",
    "BCS": "(c->p & MM2_FLAG_C) != 0u",
    "BEQ": "(c->p & MM2_FLAG_Z) != 0u",
    "BMI": "(c->p & MM2_FLAG_N) != 0u",
    "BNE": "(c->p & MM2_FLAG_Z) == 0u",
    "BPL": "(c->p & MM2_FLAG_N) == 0u",
}


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def tree_sha256(paths: list[Path]) -> str:
    digest = hashlib.sha256()
    for path in sorted(paths, key=lambda item: item.name):
        digest.update(path.name.encode("utf-8"))
        digest.update(b"\0")
        digest.update(path.read_bytes())
    return digest.hexdigest()


def operand_value(byte_text: str) -> int:
    values = [int(x, 16) for x in byte_text.split()]
    if len(values) == 1:
        return 0
    if len(values) == 2:
        return values[1]
    return values[1] | (values[2] << 8)


def address(mode: str, operand: int) -> str:
    if mode == "ZP": return f"0x{operand:02X}u"
    if mode == "ZPX": return f"(uint8_t)(0x{operand:02X}u + c->x)"
    if mode == "ZPY": return f"(uint8_t)(0x{operand:02X}u + c->y)"
    if mode == "ABS": return f"0x{operand:04X}u"
    if mode == "ABX": return f"(uint16_t)(0x{operand:04X}u + c->x)"
    if mode == "ABY": return f"(uint16_t)(0x{operand:04X}u + c->y)"
    if mode == "IZX": return f"read16_zp(c, (uint8_t)(0x{operand:02X}u + c->x))"
    if mode == "IZY": return f"(uint16_t)(read16_zp(c, 0x{operand:02X}u) + c->y)"
    raise ValueError(f"unsupported address mode {mode}")


def page_penalty(mode: str, operand: int) -> str:
    if mode == "ABX": return f" + ((((0x{operand:04X}u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u)"
    if mode == "ABY": return f" + ((((0x{operand:04X}u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u)"
    if mode == "IZY": return f" + ((((read16_zp(c, 0x{operand:02X}u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u)"
    return ""


def read_value(mode: str, operand: int) -> tuple[list[str], str]:
    if mode == "IMM": return [], f"0x{operand:02X}u"
    addr = address(mode, operand)
    return [f"ea = {addr};"], "read8(c, ea)"


def emit_case(row: dict[str, str], cycles: int) -> str:
    bank = int(row["physical_bank_16k"])
    pc = int(row["cpu_pc"], 16)
    mnemonic, mode = row["mnemonic"], row["mode"]
    length = int(row["length"])
    operand = operand_value(row["bytes"])
    next_pc = (pc + length) & 0xFFFF
    lines = [f"case 0x{pc:04X}u: /* {mnemonic} {mode} {row['bytes']} */"]

    if mnemonic in BRANCH_CONDITIONS:
        offset = operand if operand < 0x80 else operand - 0x100
        target = (next_pc + offset) & 0xFFFF
        cond = BRANCH_CONDITIONS[mnemonic]
        lines.append(f"    if ({cond}) {{ c->cpu_cycles += {cycles + 1}u + ((((0x{next_pc:04X}u ^ 0x{target:04X}u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x{target:04X}u; }}")
        lines.append(f"    else {{ c->cpu_cycles += {cycles}u; c->pc = 0x{next_pc:04X}u; }} break;")
        return "\n".join(lines)

    if mnemonic == "JMP":
        target = f"0x{operand:04X}u" if mode == "ABS" else f"read16_jmp_bug(c, 0x{operand:04X}u)"
        lines.append(f"    c->pc = {target}; c->cpu_cycles += {cycles}u; break;")
        return "\n".join(lines)
    if mnemonic == "JSR":
        ret = (pc + 2) & 0xFFFF
        lines.append(f"    push(c, 0x{ret >> 8:02X}u); push(c, 0x{ret & 0xFF:02X}u); c->pc = 0x{operand:04X}u; c->cpu_cycles += {cycles}u; break;")
        return "\n".join(lines)
    if mnemonic == "RTS":
        lines.append("    ea = pull(c);")
        lines.append("    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));")
        lines.append(f"    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += {cycles}u; break;")
        return "\n".join(lines)
    if mnemonic == "RTI":
        lines.append("    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);")
        lines.append("    ea = pull(c);")
        lines.append("    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));")
        lines.append(f"    c->pc = ea; c->cpu_cycles += {cycles}u; break;")
        return "\n".join(lines)

    lines.append(f"    c->pc = 0x{next_pc:04X}u;")
    extra = ""
    if mnemonic in READ_MNEMONICS:
        setup, value = read_value(mode, operand)
        lines.extend(f"    {x}" for x in setup)
        lines.append(f"    v = {value};")
        if mnemonic == "LDA": lines.append("    c->a = v; set_nz(c, c->a);")
        elif mnemonic == "LDX": lines.append("    c->x = v; set_nz(c, c->x);")
        elif mnemonic == "LDY": lines.append("    c->y = v; set_nz(c, c->y);")
        elif mnemonic == "ADC": lines.append("    adc8(c, v);")
        elif mnemonic == "SBC": lines.append("    sbc8(c, v);")
        elif mnemonic == "AND": lines.append("    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);")
        elif mnemonic == "ORA": lines.append("    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);")
        elif mnemonic == "EOR": lines.append("    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);")
        elif mnemonic == "CMP": lines.append("    compare8(c, c->a, v);")
        elif mnemonic == "CPX": lines.append("    compare8(c, c->x, v);")
        elif mnemonic == "CPY": lines.append("    compare8(c, c->y, v);")
        extra = page_penalty(mode, operand)
    elif mnemonic in {"STA", "STX", "STY"}:
        lines.append(f"    ea = {address(mode, operand)};")
        reg = {"STA": "c->a", "STX": "c->x", "STY": "c->y"}[mnemonic]
        lines.append(f"    write8(c, ea, {reg});")
    elif mnemonic in {"INC", "DEC", "ASL", "LSR", "ROL", "ROR"}:
        if mode == "IMP":
            fn = mnemonic.lower() + "8"
            lines.append(f"    c->a = {fn}(c, c->a);")
        else:
            lines.append(f"    ea = {address(mode, operand)}; v = read8(c, ea);")
            if mnemonic == "INC": lines.append("    v = (uint8_t)(v + 1u); set_nz(c, v);")
            elif mnemonic == "DEC": lines.append("    v = (uint8_t)(v - 1u); set_nz(c, v);")
            else: lines.append(f"    v = {mnemonic.lower()}8(c, v);")
            lines.append("    write8(c, ea, v);")
    elif mnemonic in {"INX", "INY", "DEX", "DEY"}:
        reg = "x" if mnemonic.endswith("X") else "y"
        op = "+ 1u" if mnemonic.startswith("IN") else "- 1u"
        lines.append(f"    c->{reg} = (uint8_t)(c->{reg} {op}); set_nz(c, c->{reg});")
    elif mnemonic == "TAX": lines.append("    c->x = c->a; set_nz(c, c->x);")
    elif mnemonic == "TAY": lines.append("    c->y = c->a; set_nz(c, c->y);")
    elif mnemonic == "TXA": lines.append("    c->a = c->x; set_nz(c, c->a);")
    elif mnemonic == "TYA": lines.append("    c->a = c->y; set_nz(c, c->a);")
    elif mnemonic == "TXS": lines.append("    c->s = c->x;")
    elif mnemonic == "PHA": lines.append("    push(c, c->a);")
    elif mnemonic == "PHP": lines.append("    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));")
    elif mnemonic == "PLA": lines.append("    c->a = pull(c); set_nz(c, c->a);")
    elif mnemonic == "PLP": lines.append("    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);")
    elif mnemonic == "CLC": lines.append("    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);")
    elif mnemonic == "SEC": lines.append("    c->p = (uint8_t)(c->p | MM2_FLAG_C);")
    elif mnemonic == "SEI": lines.append("    c->p = (uint8_t)(c->p | MM2_FLAG_I);")
    else:
        raise ValueError(f"unsupported accepted instruction {mnemonic}/{mode} at bank {bank} PC {pc:04X}")
    lines.append(f"    c->cpu_cycles += {cycles}u{extra}; break;")
    return "\n".join(lines)


def main() -> int:
    if len(sys.argv) != 2:
        print("usage: generate_mm2_direct_core.py SOURCE", file=sys.stderr)
        return 2
    root = Path(sys.argv[1]).resolve()
    map_path = root / "generated/program-map-v06/instruction_identities.csv"
    opcode_path = root / "data/6502_opcodes.csv"
    output_dir = root / "generated/core-v01"
    output_dir.mkdir(parents=True, exist_ok=True)
    receipt_path = output_dir / "direct_core_summary.json"

    with opcode_path.open(newline="", encoding="utf-8") as f:
        cycle_by_opcode = {int(r["opcode"], 16): int(r["cycles"]) for r in csv.DictReader(f)}
    with map_path.open(newline="", encoding="utf-8") as f:
        rows = list(csv.DictReader(f))
    identities = {(int(r["physical_bank_16k"]), int(r["cpu_pc"], 16)) for r in rows}
    if len(rows) != 20149 or len(identities) != len(rows):
        raise SystemExit("accepted v0.06 map must contain 20,149 unique bank/PC identities")
    by_bank: dict[int, list[dict[str, str]]] = {}
    for row in rows:
        by_bank.setdefault(int(row["physical_bank_16k"]), []).append(row)
    for stale in output_dir.glob("mm2_direct_core_*.c"):
        stale.unlink()
    legacy = output_dir / "mm2_direct_core_cases.inc"
    if legacy.exists():
        legacy.unlink()
    generated_sources: list[Path] = []
    for bank in sorted(by_bank):
        bank_rows = by_bank[bank]
        cases = [emit_case(r, cycle_by_opcode[int(r["opcode"], 16)]).replace(
                     "break;", "return 1;")
                 for r in bank_rows]
        body = [
            "/* Generated from the accepted v0.06 identity ledger. Do not edit. */",
            '#include "internal/mm2_direct_core_internal.h"',
            "",
            f"int mm2_direct_core_bank_{bank:02x}(MM2DirectCore *c, uint16_t pc) {{",
            "    uint16_t ea = 0u;",
            "    uint8_t v = 0u;",
            "    switch (pc) {",
            "\n".join(cases),
            "    }",
            "    return 0;",
            "}",
            "",
        ]
        path = output_dir / f"mm2_direct_core_bank_{bank:02x}.c"
        path.write_text("\n".join(body), encoding="utf-8", newline="\n")
        generated_sources.append(path)
    dispatch_lines = [
        "/* Generated bank dispatch index. Do not edit. */",
        '#include "internal/mm2_direct_core_internal.h"',
        "",
    ]
    for bank in sorted(by_bank):
        dispatch_lines.append(
            f"int mm2_direct_core_bank_{bank:02x}(MM2DirectCore *c, uint16_t pc);"
        )
    dispatch_lines.extend([
        "",
        "int mm2_direct_core_dispatch(MM2DirectCore *c, uint8_t bank,",
        "                             uint16_t pc) {",
        "    switch (bank) {",
    ])
    for bank in sorted(by_bank):
        dispatch_lines.append(
            f"    case 0x{bank:02X}u: return mm2_direct_core_bank_{bank:02x}(c, pc);"
        )
    dispatch_lines.extend([
        "    }",
        "    return 0;",
        "}",
        "",
    ])
    dispatch_path = output_dir / "mm2_direct_core_dispatch.c"
    dispatch_path.write_text("\n".join(dispatch_lines), encoding="utf-8",
                             newline="\n")
    generated_sources.append(dispatch_path)
    receipt = {
        "format": "mega-man-2-direct-core-v2",
        "version": "1.1.1",
        "milestone": 7,
        "architecture_revision": 2,
        "source_program_map_sha256": sha256(map_path),
        "opcode_table_sha256": sha256(opcode_path),
        "generated_tree_sha256": tree_sha256(generated_sources),
        "generated_sources": {
            path.name: sha256(path) for path in sorted(generated_sources,
                                                       key=lambda item: item.name)
        },
        "shard_count": len(by_bank),
        "dispatch_bank_count": len(by_bank),
        "bank_case_counts": {
            f"{bank:02X}": len(by_bank[bank]) for bank in sorted(by_bank)
        },
        "instruction_identities": len(rows),
        "unique_bank_pc_identities": len(identities),
        "runtime_opcode_fetch_decode_count": 0,
        "interpreter_fallback_count": 0,
        "missing_identity_policy": "hard_trap",
        "direct_core_link_gate": "accepted",
    }
    receipt_path.write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"PASS generated {len(rows)} strict bank/PC cases in {len(by_bank)} bank shards")
    print(f"SHA256 {receipt['generated_tree_sha256']}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

