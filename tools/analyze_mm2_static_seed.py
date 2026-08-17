#!/usr/bin/env python3
"""Create the milestone-02, fail-closed static-code seed for Mega Man 2 (USA).

This is not a whole-ROM proof or a complete recompilation. It follows direct 6502
control flow from RESET/NMI/IRQ under MMC1's reset mapping (bank 0 at $8000 and
the final 16 KiB bank at $C000). It terminates a path at mapper writes, indirect
jumps, unsupported/unstable opcodes, and mapping ambiguities. All such boundaries
are emitted as machine-readable unresolved evidence.
"""
from __future__ import annotations
import argparse, csv, hashlib, json, struct, sys, zlib
from collections import deque
from dataclasses import dataclass
from pathlib import Path

EXPECTED_SHA256 = "49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
EXPECTED_CRC32 = 0x0FCFC04D
STOP_MNEMONICS = {"RTS", "RTI", "BRK", "KIL"}
BRANCHES = {"BCC", "BCS", "BEQ", "BMI", "BNE", "BPL", "BVC", "BVS"}
WRITE_MNEMONICS = {"STA", "STX", "STY", "SAX", "SLO", "RLA", "SRE", "RRA", "DCP", "ISC", "ASL", "LSR", "ROL", "ROR", "INC", "DEC", "SHX", "SHY", "SHA", "TAS"}
UNSTABLE = {"KIL", "XAA", "SHA", "TAS", "SHX", "SHY", "LAS", "AHX"}
MODE_LENGTH = {
    "IMP": 1, "ACC": 1,
    "IMM": 2, "ZP": 2, "ZPX": 2, "ZPY": 2, "IZX": 2, "IZY": 2, "REL": 2,
    "ABS": 3, "ABX": 3, "ABY": 3, "IND": 3,
}

@dataclass(frozen=True)
class Opcode:
    code: int
    mnemonic: str
    mode: str
    cycles: int
    length: int

@dataclass(frozen=True)
class Node:
    low_bank: int
    pc: int


def read_opcodes(path: Path) -> dict[int, Opcode]:
    out: dict[int, Opcode] = {}
    with path.open(newline="", encoding="utf-8") as f:
        for row in csv.DictReader(f):
            code = int(row["opcode"], 16)
            mode = row["mode"].strip().upper()
            if mode not in MODE_LENGTH:
                raise ValueError(f"unknown addressing mode {mode}")
            out[code] = Opcode(code, row["mnemonic"].strip().upper(), mode, int(row["cycles"]), MODE_LENGTH[mode])
    if len(out) != 256:
        raise ValueError(f"expected 256 opcode rows, got {len(out)}")
    return out


def load_rom(path: Path) -> tuple[bytes, bytes, dict[str, object]]:
    data = path.read_bytes()
    if len(data) < 16 or data[:4] != b"NES\x1a":
        raise ValueError("not an iNES ROM")
    trainer = bool(data[6] & 4)
    mapper = (data[6] >> 4) | (data[7] & 0xF0)
    prg_size = data[4] * 16384
    chr_size = data[5] * 8192
    off = 16 + (512 if trainer else 0)
    if off + prg_size + chr_size > len(data):
        raise ValueError("truncated ROM")
    prg = data[off:off + prg_size]
    sha = hashlib.sha256(data).hexdigest()
    crc = zlib.crc32(prg + data[off + prg_size:off + prg_size + chr_size]) & 0xFFFFFFFF
    vectors = struct.unpack_from("<HHH", prg, len(prg) - 6)
    info = {
        "file_size": len(data), "sha256": sha, "payload_crc32": f"{crc:08X}",
        "mapper": mapper, "prg_bytes": prg_size, "chr_bytes": chr_size,
        "nmi_vector": f"{vectors[0]:04X}", "reset_vector": f"{vectors[1]:04X}", "irq_vector": f"{vectors[2]:04X}",
    }
    if sha != EXPECTED_SHA256 or crc != EXPECTED_CRC32 or mapper != 1 or prg_size != 262144 or chr_size != 0:
        raise ValueError("ROM does not match the exact Mega Man 2 (USA) identity")
    return data, prg, info


def prg_offset(node: Node, prg_size: int) -> int | None:
    if 0x8000 <= node.pc < 0xC000:
        if not 0 <= node.low_bank < prg_size // 0x4000:
            return None
        return node.low_bank * 0x4000 + (node.pc - 0x8000)
    if 0xC000 <= node.pc <= 0xFFFF:
        return (prg_size - 0x4000) + (node.pc - 0xC000)
    return None


def cpu_operand(raw: bytes, mode: str) -> int | None:
    if mode in {"ABS", "ABX", "ABY", "IND"} and len(raw) >= 3:
        return raw[1] | (raw[2] << 8)
    if mode in {"IMM", "ZP", "ZPX", "ZPY", "IZX", "IZY", "REL"} and len(raw) >= 2:
        return raw[1]
    return None


def signed8(value: int) -> int:
    return value - 256 if value & 0x80 else value


def add_unresolved(unresolved: list[dict[str, object]], node: Node, kind: str, detail: str, opcode: Opcode | None = None) -> None:
    unresolved.append({
        "low_bank": node.low_bank,
        "cpu_pc": f"{node.pc:04X}",
        "kind": kind,
        "mnemonic": opcode.mnemonic if opcode else "",
        "mode": opcode.mode if opcode else "",
        "detail": detail,
    })


def analyze(prg: bytes, opcodes: dict[int, Opcode], vectors: list[tuple[str, int]]) -> tuple[list[dict[str, object]], list[dict[str, object]], list[dict[str, object]], dict[str, object]]:
    q: deque[tuple[Node, str]] = deque()
    for name, pc in vectors:
        q.append((Node(0, pc), name))
    seen: set[Node] = set()
    instructions: list[dict[str, object]] = []
    unresolved: list[dict[str, object]] = []
    mapper_writes: list[dict[str, object]] = []
    origins: dict[Node, set[str]] = {}
    while q:
        node, origin = q.popleft()
        origins.setdefault(node, set()).add(origin)
        if node in seen:
            continue
        seen.add(node)
        off = prg_offset(node, len(prg))
        if off is None or off >= len(prg):
            add_unresolved(unresolved, node, "outside_initial_rom_mapping", "target is outside $8000-$FFFF under reset mapping")
            continue
        code = prg[off]
        op = opcodes[code]
        if off + op.length > len(prg):
            add_unresolved(unresolved, node, "truncated_instruction", "instruction crosses PRG end", op)
            continue
        raw = prg[off:off + op.length]
        operand = cpu_operand(raw, op.mode)
        physical_bank = node.low_bank if node.pc < 0xC000 else 15
        rec = {
            "physical_bank_16k": physical_bank,
            "initial_low_bank": node.low_bank,
            "cpu_pc": f"{node.pc:04X}",
            "prg_offset": f"{off:06X}",
            "opcode": f"{code:02X}",
            "bytes": " ".join(f"{b:02X}" for b in raw),
            "mnemonic": op.mnemonic,
            "mode": op.mode,
            "base_cycles": op.cycles,
            "origin": origin,
        }
        instructions.append(rec)
        if op.mnemonic in UNSTABLE:
            add_unresolved(unresolved, node, "unsupported_or_unstable_opcode", "path stops instead of silently approximating the opcode", op)
            continue
        if op.mnemonic in WRITE_MNEMONICS and op.mode in {"ABS", "ABX", "ABY"} and operand is not None and operand >= 0x8000:
            mapper_writes.append({
                "physical_bank_16k": physical_bank,
                "cpu_pc": f"{node.pc:04X}", "opcode": f"{code:02X}", "mnemonic": op.mnemonic,
                "mode": op.mode, "base_address": f"{operand:04X}",
                "classification": "definite" if op.mode == "ABS" else "indexed_range_requires_value_proof",
                "decision": "terminate_path_at_milestone_02_mapper_boundary",
            })
            add_unresolved(unresolved, node, "mmc1_write_boundary", "mapper write may change the active 16 KiB bank; value flow is not proven in milestone 01", op)
            continue
        next_pc = (node.pc + op.length) & 0xFFFF
        if op.mnemonic in STOP_MNEMONICS:
            if op.mnemonic == "BRK":
                add_unresolved(unresolved, node, "brk_semantics_not_yet_compiled", "BRK is not accepted as a silent stop in a completed recompilation", op)
            continue
        if op.mnemonic == "JMP":
            if op.mode == "ABS" and operand is not None:
                q.append((Node(node.low_bank, operand), origin))
            elif op.mode == "IND":
                add_unresolved(unresolved, node, "indirect_jump", "finite target set has not been proven", op)
            else:
                add_unresolved(unresolved, node, "unexpected_jump_mode", "unsupported JMP addressing mode", op)
            continue
        if op.mnemonic == "JSR" and op.mode == "ABS" and operand is not None:
            q.append((Node(node.low_bank, operand), origin))
            q.append((Node(node.low_bank, next_pc), origin))
            continue
        if op.mnemonic in BRANCHES and op.mode == "REL" and operand is not None:
            target = (next_pc + signed8(operand)) & 0xFFFF
            q.append((Node(node.low_bank, target), origin))
            q.append((Node(node.low_bank, next_pc), origin))
            continue
        q.append((Node(node.low_bank, next_pc), origin))
    instructions.sort(key=lambda r: (int(r["physical_bank_16k"]), int(str(r["cpu_pc"]), 16), int(str(r["initial_low_bank"]))))
    unresolved.sort(key=lambda r: (int(r["low_bank"]), int(str(r["cpu_pc"]), 16), str(r["kind"])))
    mapper_writes.sort(key=lambda r: (int(r["physical_bank_16k"]), int(str(r["cpu_pc"]), 16)))
    summary = {
        "format": "mega-man-2-static-seed-proof-v2",
        "scope": "direct graph from RESET/NMI/IRQ in MMC1 reset mapping only",
        "initial_mapping": {"8000-BFFF": "physical 16 KiB bank 0", "C000-FFFF": "physical 16 KiB bank 15"},
        "proven_instruction_records": len(instructions),
        "unique_nodes": len(seen),
        "definite_or_indexed_mapper_write_sites": len(mapper_writes),
        "unresolved_boundaries": len(unresolved),
        "whole_rom_static_recomp_complete": False,
        "runtime_opcode_fetch_decode_allowed": False,
        "interpreter_fallback_allowed": False,
        "acceptance_decision": "milestone_02_foundation_only_fail_closed",
    }
    return instructions, unresolved, mapper_writes, summary


def write_csv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=fields)
        w.writeheader(); w.writerows(rows)


def write_generated_c(out_dir: Path, rows: list[dict[str, object]]) -> None:
    h = '''#ifndef MM2_STATIC_SEED_H\n#define MM2_STATIC_SEED_H\n#include <stddef.h>\n#include <stdint.h>\ntypedef struct MM2StaticSeedRecord { uint8_t physical_bank_16k; uint16_t cpu_pc; uint32_t prg_offset; uint8_t opcode; uint8_t length; uint8_t base_cycles; } MM2StaticSeedRecord;\nextern const MM2StaticSeedRecord mm2_static_seed[];\nextern const size_t mm2_static_seed_count;\n#endif\n'''
    lines = ['#include "mm2_static_seed.h"', 'const MM2StaticSeedRecord mm2_static_seed[] = {']
    for r in rows:
        lines.append('    {%du, 0x%sU, 0x%sU, 0x%sU, %du, %du},' % (
            r["physical_bank_16k"], r["cpu_pc"], r["prg_offset"], r["opcode"], len(str(r["bytes"]).split()), r["base_cycles"]))
    lines += ['};', 'const size_t mm2_static_seed_count = sizeof(mm2_static_seed) / sizeof(mm2_static_seed[0]);', '']
    (out_dir / "mm2_static_seed.h").write_text(h, encoding="utf-8")
    (out_dir / "mm2_static_seed.c").write_text("\n".join(lines), encoding="utf-8")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", required=True, type=Path)
    ap.add_argument("--opcodes", required=True, type=Path)
    ap.add_argument("--output", required=True, type=Path)
    args = ap.parse_args()
    try:
        _, prg, rom_info = load_rom(args.rom)
        ops = read_opcodes(args.opcodes)
        vectors = [("NMI", int(str(rom_info["nmi_vector"]), 16)), ("RESET", int(str(rom_info["reset_vector"]), 16)), ("IRQ", int(str(rom_info["irq_vector"]), 16))]
        insns, unresolved, writes, summary = analyze(prg, ops, vectors)
        out = args.output; out.mkdir(parents=True, exist_ok=True)
        write_csv(out / "proven_instructions.csv", insns, ["physical_bank_16k","initial_low_bank","cpu_pc","prg_offset","opcode","bytes","mnemonic","mode","base_cycles","origin"])
        write_csv(out / "unresolved_boundaries.csv", unresolved, ["low_bank","cpu_pc","kind","mnemonic","mode","detail"])
        write_csv(out / "mapper_write_sites.csv", writes, ["physical_bank_16k","cpu_pc","opcode","mnemonic","mode","base_address","classification","decision"])
        (out / "static_proof_summary.json").write_text(json.dumps({"rom":rom_info,**summary},indent=2)+"\n",encoding="utf-8")
        report = [
            "MEGA MAN 2 NES STATIC RECOMP - MILESTONE 02 STATIC SEED REPORT",
            "",
            f"Exact ROM SHA-256: {rom_info['sha256']}",
            f"Mapper: {rom_info['mapper']} (MMC1)",
            f"Initial RESET mapping: bank 0 at $8000-$BFFF; bank 15 at $C000-$FFFF.",
            f"Direct instruction records: {len(insns)}",
            f"Mapper-write boundaries: {len(writes)}",
            f"Unresolved boundaries: {len(unresolved)}",
            "",
            "Decision: milestone 02 foundation only. This evidence is deliberately fail-closed.",
            "It does not claim complete code discovery, complete bank-value proof, or playable native execution.",
            "No runtime opcode fetch/decode or interpreter fallback is authorized.",
        ]
        (out / "STATIC-PROOF-REPORT.txt").write_text("\n".join(report)+"\n",encoding="utf-8")
        write_generated_c(out, insns)
        print(json.dumps(summary, sort_keys=True))
        return 0
    except Exception as e:
        print(f"ERROR: {e}", file=sys.stderr)
        return 1
if __name__ == "__main__":
    raise SystemExit(main())
