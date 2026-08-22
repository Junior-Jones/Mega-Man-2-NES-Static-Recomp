#!/usr/bin/env python3
"""Build the conservative, physical-bank-aware milestone-06 program map.

Only exact-ROM vector flow, direct control flow, constant accumulator state,
reviewed MMC1 serial transactions, and ROM-resident indirect pointers are
accepted. Everything else remains explicitly unclassified or unresolved.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
import zlib
from collections import defaultdict, deque
from dataclasses import dataclass
from pathlib import Path

EXPECTED_SHA256 = "49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
EXPECTED_CRC32 = 0x0FCFC04D
STOP = {"RTS", "RTI", "BRK", "KIL"}
BRANCHES = {"BCC", "BCS", "BEQ", "BMI", "BNE", "BPL", "BVC", "BVS"}
WRITES = {"STA", "STX", "STY", "SAX", "SLO", "RLA", "SRE", "RRA", "DCP", "ISC", "ASL", "LSR", "ROL", "ROR", "INC", "DEC", "SHX", "SHY", "SHA", "TAS"}
UNSUPPORTED = {"KIL", "XAA", "SHA", "TAS", "SHX", "SHY", "LAS", "AHX"}
MODE_LENGTH = {
    "IMP": 1, "ACC": 1,
    "IMM": 2, "ZP": 2, "ZPX": 2, "ZPY": 2, "IZX": 2, "IZY": 2, "REL": 2,
    "ABS": 3, "ABX": 3, "ABY": 3, "IND": 3,
}

# Each split table was reviewed against the exact ROM and its local selector
# bounds. Milestone 05 corrects the $8028 contract: $802B,Y is a separate
# pre-dispatch data lookup, while the actual target is $8047,Y/$8055,Y.
SPLIT_INDIRECT_CONTRACTS = (
    (11, 0x8028, 0x8047, 0x8055, 0, 14),
    # Each stage entry decrements the reviewed 1-based selector in X and reads
    # a local split table. The high table begins exactly after the low table.
    (11, 0x80D0, 0x82D9, 0x82DE, 0, 5),
    (11, 0x82EE, 0x84F3, 0x84F7, 0, 4),
    (11, 0x8506, 0x864E, 0x8652, 0, 4),
    (11, 0x8661, 0x8796, 0x879A, 0, 4),
    (11, 0x87A9, 0x894C, 0x8951, 0, 5),
    (11, 0x8961, 0x8B16, 0x8B1B, 0, 5),
    (11, 0x8B2B, 0x8CBB, 0x8CBF, 0, 4),
    (11, 0x8CCE, 0x8E08, 0x8E0C, 0, 4),
    (11, 0x8E1B, 0x9205, 0x920C, 0, 7),
    (11, 0x921E, 0x9395, 0x9398, 0, 3),
    (11, 0x93A6, 0x9662, 0x9668, 0, 6),
    (11, 0x9679, 0x96BC, 0x96BE, 0, 2),
    (11, 0x96CB, 0x9B1C, 0x9B23, 0, 7),
    (11, 0x9B35, 0x9FBD, 0x9FC8, 0, 11),
    (11, 0x9FE5, 0xA100, 0xA106, 0, 6),
    (11, 0x9D43, 0x9FC0, 0x9FCB, 0, 8),
    (11, 0xA5FE, 0xA930, 0xA939, 0, 9),
    (14, 0x82E9, 0x84DC, 0x84E5, 0, 9),
    (14, 0x8505, 0x8783, 0x878F, 0, 12),
    # $7F is the unused padding sentinel after the last valid handler.
    (14, 0x9296, 0x92F0, 0x9370, 0, 127),
    (14, 0x92D5, 0x92F0, 0x9370, 0, 127),
    # The preceding $93F0,Y lookup yields 1..8 on its nonzero arm, then DEY.
    (14, 0x92E4, 0x9470, 0x947F, 0, 8),
    (-1, 0xDA67, 0xDCB8, 0xDCC4, 0, 12),
    (-1, 0xDD11, 0xDD14, 0xDD24, 0, 16),
    (-1, 0xE64F, 0xE986, 0xE98F, 0, 9),
)

INLINE_INDIRECT_CONTRACTS = {
    # JSR $8556 is followed by a bounded inline table. The routine indexes the
    # table with 2*X and jumps through $00F4/$00F5. The next proved instruction
    # marks each table end, giving exact bounds of seven and ten entries.
    (12, 0x856A): ((0x85C2, 7), (0x87C0, 10)),
}

# These JSRs are followed by inline pointer data consumed by $8556. Returning
# to the byte after JSR would decode the table as instructions; the trampoline
# instead resumes at the exact end of the bounded table.
INLINE_CALL_CONTINUATIONS = {
    (12, 0x85C2): (0x8556, 0x85D3),
    (12, 0x87C0): (0x8556, 0x87D7),
}

# Effective PRG-bank domains at the 23 milestone-05 boundaries.  Every entry
# is a source-level proof contract, not an emulator observation.  The domains
# come from an immediately dominating mask, the saved/current-bank invariant,
# an exact-ROM table with bounded callers, or a bounded register value.
#
# Contracts are keyed by (currently mapped low bank, callsite).  Values are
# effective 16 KiB PRG banks after the MMC1 PRG register's documented P bits
# are applied.  The broad C70C bank-13 contract deliberately enumerates all
# hardware-representable P values because $0440,X has multiple bounded writers;
# it remains finite and fail-closed without claiming a narrower observed set.
BANK_VALUE_CONTRACTS = {
    (11, 0xC19A): (tuple(range(8)), "A=$2A AND $07"),
    (11, 0xC70C): ((8, 9, 11), "caller constants preserved by PHA/PLA at $C5F1"),
    (11, 0xC96F): (tuple(range(8)), "A=$2A AND $07"),
    (11, 0xCA12): ((11,), "A=$29 saved before temporary switch and restored by PLA"),
    (11, 0xCB34): (tuple(range(8)), "A=$2A AND $07"),
    (11, 0xCBC7): (tuple(range(8)), "A=$2A AND $07"),
    (12, 0xC04E): ((12,), "A=$69 saved on entry to $C000 and restored for tail call"),
    (12, 0xD0C3): ((12,), "A=$29 current-bank invariant"),
    (13, 0xC66A): ((0, 5, 6), "bounded callers 0..6 through exact ROM tables $C690/$C6BE/$C697"),
    (13, 0xC70C): (tuple(range(16)), "bounded $0440,X bank-tag writers projected to MMC1 P bits"),
    (13, 0xC78D): ((0,), "all four callers execute LDX #$00 before $C760"),
    (13, 0xC96F): (tuple(range(8)), "A=$2A AND $07"),
    (13, 0xCA12): ((13,), "A=$29 saved before temporary switch and restored by PLA"),
    (14, 0xC19A): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xC461): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xC4D1): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xC7A8): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xC7CD): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xC96F): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xCA1A): ((14,), "A=$29 saved before temporary switch and restored by PLA"),
    (14, 0xCB34): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xCBC7): (tuple(range(8)), "A=$2A AND $07"),
    (14, 0xD65C): (tuple(range(8)), "A=$2A AND $07"),
}

# Intrinsic fixed-bank callsite proofs discovered after the first 23 contracts
# opened their legitimate successors.  These apply regardless of the bank
# currently visible at $8000-$BFFF.  Stack/stream/table sources are projected
# to the MMC1's four effective PRG-bank bits; masked sites retain their tighter
# domains.  Keeping these separate makes the original milestone-05 closure and
# the recursively discovered closure independently auditable.
FIXED_SITE_BANK_VALUE_CONTRACTS = {
    0xC498: (tuple(range(16)), "bounded inline stream bank byte projected to MMC1 P bits"),
    0xC537: (tuple(range(16)), "caller bank byte restored from bounded stack frame"),
    0xC66A: ((0, 5, 6), "bounded callers 0..6 through exact ROM tables $C690/$C6BE/$C697"),
    0xC7CD: (tuple(range(8)), "A=$2A AND $07"),
    0xC4AF: (tuple(range(8)), "A=$2A AND $07"),
    0xCB4A: (tuple(range(16)), "exact-ROM split pointer table bank byte projected to MMC1 P bits"),
}

CURRENT_BANK_RESTORE_SITES = {
    0xCB60: "A=$29 current bank saved at $CB13 and restored by PLA",
}

# The finite $92E4 dispatch deliberately enters at $E6B5, two bytes into the
# ordinary $E6B3 instruction stream. Both starts are independently proven and
# the shared bytes are represented explicitly instead of called conflicts.
REVIEWED_OVERLAPS = {
    (15, 0xE6B5): {(15, 0xE6B3), (15, 0xE6B5)},
    (15, 0xE6B6): {(15, 0xE6B5), (15, 0xE6B6)},
}


@dataclass(frozen=True)
class Opcode:
    code: int
    mnemonic: str
    mode: str
    cycles: int
    length: int


@dataclass(frozen=True)
class State:
    low_bank: int
    pc: int
    a: int  # -1 is unknown


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def read_opcodes(path: Path) -> dict[int, Opcode]:
    result: dict[int, Opcode] = {}
    with path.open(newline="", encoding="utf-8") as source:
        for row in csv.DictReader(source):
            mode = row["mode"].strip().upper()
            code = int(row["opcode"], 16)
            result[code] = Opcode(code, row["mnemonic"].strip().upper(), mode, int(row["cycles"]), MODE_LENGTH[mode])
    if len(result) != 256:
        raise ValueError(f"expected 256 opcode rows, got {len(result)}")
    return result


def load_rom(path: Path) -> tuple[bytes, dict[str, object]]:
    data = path.read_bytes()
    if len(data) < 16 or data[:4] != b"NES\x1a":
        raise ValueError("not an iNES ROM")
    mapper = (data[6] >> 4) | (data[7] & 0xF0)
    trainer = 512 if data[6] & 4 else 0
    prg_size = data[4] * 16384
    chr_size = data[5] * 8192
    start = 16 + trainer
    prg = data[start:start + prg_size]
    payload_crc = zlib.crc32(data[start:start + prg_size + chr_size]) & 0xFFFFFFFF
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_SHA256 or payload_crc != EXPECTED_CRC32 or mapper != 1 or prg_size != 262144 or chr_size != 0:
        raise ValueError("ROM does not match the exact Mega Man 2 (USA) identity")
    nmi, reset, irq = struct.unpack_from("<HHH", prg, len(prg) - 6)
    return prg, {
        "file_size": len(data), "sha256": digest, "payload_crc32": f"{payload_crc:08X}",
        "mapper": mapper, "prg_bytes": prg_size, "chr_bytes": chr_size,
        "nmi_vector": f"{nmi:04X}", "reset_vector": f"{reset:04X}", "irq_vector": f"{irq:04X}",
    }


def physical_offset(bank: int, pc: int, prg_size: int) -> int | None:
    if 0x8000 <= pc < 0xC000 and 0 <= bank < prg_size // 0x4000:
        return bank * 0x4000 + pc - 0x8000
    if 0xC000 <= pc <= 0xFFFF:
        return prg_size - 0x4000 + pc - 0xC000
    return None


def operand(raw: bytes, mode: str) -> int | None:
    if mode in {"ABS", "ABX", "ABY", "IND"} and len(raw) == 3:
        return raw[1] | raw[2] << 8
    if mode in {"IMM", "ZP", "ZPX", "ZPY", "IZX", "IZY", "REL"} and len(raw) >= 2:
        return raw[1]
    return None


def signed8(value: int) -> int:
    return value - 256 if value & 0x80 else value


def csv_write(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="", encoding="utf-8") as output:
        writer = csv.DictWriter(output, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


class Analyzer:
    def __init__(self, prg: bytes, ops: dict[int, Opcode]):
        self.prg = prg
        self.ops = ops
        self.queue: deque[tuple[State, str]] = deque()
        self.states: set[State] = set()
        self.identities: dict[tuple[int, int], dict[str, object]] = {}
        self.byte_owners: dict[int, set[tuple[int, int]]] = defaultdict(set)
        self.entries: set[tuple[int, int, str]] = set()
        self.unresolved: set[tuple[int, int, str, str]] = set()
        self.mapper_transactions: set[tuple[int, int, str, int, int]] = set()
        self.indirects: set[tuple[int, int, int, str, str]] = set()
        self.bank_value_contracts_used: set[tuple[int, int, str, str]] = set()

    def reviewed_bank_values(self, state: State) -> tuple[int, ...] | None:
        contract = BANK_VALUE_CONTRACTS.get((state.low_bank, state.pc))
        if contract is None:
            contract = FIXED_SITE_BANK_VALUE_CONTRACTS.get(state.pc)
        if contract is None and state.pc in CURRENT_BANK_RESTORE_SITES:
            contract = ((state.low_bank,), CURRENT_BANK_RESTORE_SITES[state.pc])
        if contract is None:
            return None
        values, proof = contract
        if not values or any(value < 0 or value > 0x0F for value in values):
            raise ValueError(f"invalid bank-value contract at ${state.pc:04X}")
        rendered = " ".join(f"{value:02X}" for value in values)
        self.bank_value_contracts_used.add((state.low_bank, state.pc, rendered, proof))
        return values

    def enqueue(self, state: State, reason: str) -> None:
        if 0x8000 <= state.pc <= 0xFFFF:
            self.queue.append((state, reason))
        else:
            self.unresolved.add((state.low_bank, state.pc, "target_outside_prg", reason))

    def decode(self, state: State) -> tuple[int, Opcode, bytes, int | None]:
        offset = physical_offset(state.low_bank, state.pc, len(self.prg))
        if offset is None:
            raise ValueError("outside mapped PRG")
        op = self.ops[self.prg[offset]]
        raw = self.prg[offset:offset + op.length]
        if len(raw) != op.length:
            raise ValueError("truncated instruction")
        return offset, op, raw, operand(raw, op.mode)

    def record(self, state: State, reason: str) -> tuple[int, Opcode, bytes, int | None]:
        offset, op, raw, value = self.decode(state)
        physical_bank = offset // 0x4000
        cpu_pc = 0x8000 + offset % 0x4000 if physical_bank < 15 else 0xC000 + offset % 0x4000
        key = (physical_bank, cpu_pc)
        row = {
            "physical_bank_16k": physical_bank, "cpu_pc": f"{cpu_pc:04X}", "prg_offset": f"{offset:06X}",
            "opcode": f"{op.code:02X}", "bytes": " ".join(f"{item:02X}" for item in raw),
            "mnemonic": op.mnemonic, "mode": op.mode, "length": op.length,
            "mapping_low_bank": state.low_bank, "a_constant": "unknown" if state.a < 0 else f"{state.a:02X}",
            "discovery_reason": reason,
        }
        old = self.identities.get(key)
        if old is None:
            self.identities[key] = row
        elif old["bytes"] != row["bytes"]:
            self.unresolved.add((state.low_bank, state.pc, "identity_decode_conflict", f"{old['bytes']} versus {row['bytes']}"))
        for byte_offset in range(offset, offset + op.length):
            self.byte_owners[byte_offset].add(key)
        return offset, op, raw, value

    def serial_transaction(self, state: State, reason: str) -> bool:
        if state.a < 0:
            return False
        cursor = state.pc
        decoded: list[tuple[State, Opcode, bytes, int]] = []
        current_a = state.a & 0xFF
        target = -1
        for write_index in range(5):
            part = State(state.low_bank, cursor, current_a)
            try:
                _, op, raw, value = self.record(part, reason)
            except ValueError:
                return False
            if op.mnemonic != "STA" or op.mode != "ABS" or value is None or value < 0x8000:
                return False
            if target < 0:
                target = value
            if value != target:
                return False
            decoded.append((part, op, raw, value))
            cursor += op.length
            if write_index != 4:
                shift = State(state.low_bank, cursor, current_a)
                _, shift_op, shift_raw, _ = self.record(shift, reason)
                if shift_op.code != 0x4A or shift_raw != b"\x4a":
                    return False
                current_a >>= 1
                cursor += 1
        register = (target >> 13) & 3
        committed = state.a & 0x1F
        next_bank = state.low_bank
        if register == 3:
            next_bank = committed & 0x0F
        self.mapper_transactions.add((state.low_bank, state.pc, f"serial_register_{register}", committed, next_bank))
        self.enqueue(State(next_bank, cursor, -1), "after_reviewed_mmc1_serial_commit")
        return True

    def rom_byte(self, bank: int, address: int) -> int:
        offset = physical_offset(bank, address, len(self.prg))
        if offset is None:
            raise ValueError(f"contract address ${address:04X} is outside mapped PRG")
        return self.prg[offset]

    def reviewed_indirect_targets(self, state: State) -> tuple[list[int], str] | None:
        for bank, site, low, high, selector_start, count in SPLIT_INDIRECT_CONTRACTS:
            if site != state.pc or (bank >= 0 and bank != state.low_bank):
                continue
            targets = []
            for selector in range(selector_start, selector_start + count):
                targets.append(self.rom_byte(state.low_bank, low + selector) | self.rom_byte(state.low_bank, high + selector) << 8)
            if any(not 0x8000 <= target <= 0xFFFF for target in targets):
                raise ValueError(f"reviewed split contract at ${site:04X} produced an outside-PRG target")
            detail = f"resolved_reviewed_split_table_${low:04X}_${high:04X}_selector_{selector_start}_{selector_start + count - 1}"
            return sorted(set(targets)), detail
        inline = INLINE_INDIRECT_CONTRACTS.get((state.low_bank, state.pc))
        if inline is not None:
            targets = []
            descriptions = []
            for callsite, count in inline:
                table = callsite + 3
                descriptions.append(f"${table:04X}:{count}")
                for index in range(count):
                    address = table + index * 2
                    targets.append(self.rom_byte(state.low_bank, address) | self.rom_byte(state.low_bank, address + 1) << 8)
            if any(not 0x8000 <= target <= 0xFFFF for target in targets):
                raise ValueError(f"reviewed inline contract at ${state.pc:04X} produced an outside-PRG target")
            return sorted(set(targets)), "resolved_reviewed_inline_tables_" + "_".join(descriptions)
        return None

    def run(self, vectors: list[tuple[str, int]]) -> None:
        for name, pc in vectors:
            self.entries.add((0, pc, name))
            self.enqueue(State(0, pc, -1), name)
        while self.queue:
            state, reason = self.queue.popleft()
            if state in self.states:
                continue
            self.states.add(state)
            try:
                _, op, raw, value = self.record(state, reason)
            except ValueError as error:
                self.unresolved.add((state.low_bank, state.pc, "decode_error", str(error)))
                continue
            next_pc = (state.pc + op.length) & 0xFFFF

            if state.pc == 0xFFE1 and op.code == 0xEE and value == 0xFFE1:
                self.mapper_transactions.add((state.low_bank, state.pc, "rmw_shift_reset", 0x80, state.low_bank))
                self.enqueue(State(state.low_bank, next_pc, state.a), "after_reviewed_mmc1_rmw_reset")
                continue

            if op.mnemonic in WRITES and op.mode in {"ABS", "ABX", "ABY"} and value is not None and value >= 0x8000:
                if op.mnemonic == "STA" and op.mode == "ABS" and self.serial_transaction(state, reason):
                    continue
                self.unresolved.add((state.low_bank, state.pc, "unproved_mmc1_write", f"{op.mnemonic} {op.mode} ${value:04X}"))
                continue

            if op.mnemonic in UNSUPPORTED:
                self.unresolved.add((state.low_bank, state.pc, "unsupported_opcode", f"{op.mnemonic} {op.mode}"))
                continue
            if op.mnemonic in STOP:
                if op.mnemonic == "BRK":
                    self.unresolved.add((state.low_bank, state.pc, "reachable_brk", "BRK is not accepted as normal termination"))
                continue

            next_a = state.a
            if op.mnemonic == "LDA":
                next_a = value if op.mode == "IMM" and value is not None else -1
            elif op.code == 0x4A and state.a >= 0:
                next_a = state.a >> 1
            elif op.mnemonic == "AND" and op.mode == "IMM" and value is not None and state.a >= 0:
                next_a = state.a & value
            elif op.mnemonic == "ORA" and op.mode == "IMM" and value is not None and state.a >= 0:
                next_a = state.a | value
            elif op.mnemonic == "EOR" and op.mode == "IMM" and value is not None and state.a >= 0:
                next_a = state.a ^ value
            elif op.mnemonic in {"PLA", "TXA", "TYA", "ADC", "SBC", "LAX", "XAA"}:
                next_a = -1

            if op.mnemonic == "JMP":
                if op.mode == "ABS" and value is not None:
                    if value == 0xC000:
                        if 0 <= state.a <= 0x0F:
                            mapped = state.a & 0x0F
                            self.mapper_transactions.add((state.low_bank, state.pc, "tail_bank_switch_C000", state.a, mapped))
                            self.entries.add((state.low_bank, 0xC000, f"bank_switch_tail_from_{state.pc:04X}"))
                            self.enqueue(State(state.low_bank, 0xC000, state.a), "reviewed_bank_switch_tail")
                        else:
                            values = self.reviewed_bank_values(state)
                            if values is None:
                                self.unresolved.add((state.low_bank, state.pc, "bank_switch_value_unknown", "A has no finite proof contract at JMP $C000"))
                            else:
                                for bank_value in values:
                                    self.mapper_transactions.add((state.low_bank, state.pc, "contract_tail_bank_switch_C000", bank_value, bank_value))
                                    self.entries.add((state.low_bank, 0xC000, f"contract_bank_switch_tail_from_{state.pc:04X}"))
                                    self.enqueue(State(state.low_bank, 0xC000, bank_value), "finite_contract_bank_switch_tail")
                        continue
                    self.entries.add((state.low_bank, value, f"direct_jmp_from_{state.pc:04X}"))
                    self.enqueue(State(state.low_bank, value, next_a), "direct_jmp")
                elif op.mode == "IND" and value is not None:
                    reviewed = self.reviewed_indirect_targets(state)
                    if reviewed is not None:
                        targets, decision = reviewed
                        self.indirects.add((state.low_bank, state.pc, value, " ".join(f"{target:04X}" for target in targets), decision))
                        for target in targets:
                            self.entries.add((state.low_bank, target, f"reviewed_indirect_from_{state.pc:04X}"))
                            self.enqueue(State(state.low_bank, target, next_a), "reviewed_finite_indirect")
                    else:
                        lo_off = physical_offset(state.low_bank, value, len(self.prg))
                        hi_addr = (value & 0xFF00) | ((value + 1) & 0x00FF)
                        hi_off = physical_offset(state.low_bank, hi_addr, len(self.prg))
                        if lo_off is not None and hi_off is not None:
                            target = self.prg[lo_off] | self.prg[hi_off] << 8
                            self.indirects.add((state.low_bank, state.pc, value, f"{target:04X}", "resolved_rom_pointer_with_6502_wrap"))
                            self.entries.add((state.low_bank, target, f"rom_indirect_from_{state.pc:04X}"))
                            self.enqueue(State(state.low_bank, target, next_a), "resolved_rom_indirect")
                        else:
                            self.indirects.add((state.low_bank, state.pc, value, "", "unresolved_ram_pointer"))
                            self.unresolved.add((state.low_bank, state.pc, "indirect_jump_ram_pointer", f"pointer ${value:04X} requires a finite writer contract"))
                else:
                    self.unresolved.add((state.low_bank, state.pc, "unexpected_jump_mode", op.mode))
                continue

            if op.mnemonic == "JSR" and op.mode == "ABS" and value is not None:
                if value == 0xC000 and 0 <= state.a <= 0x0F:
                    mapped = state.a & 0x0F
                    self.mapper_transactions.add((state.low_bank, state.pc, "call_bank_switch_C000", state.a, mapped))
                    self.entries.add((state.low_bank, 0xC000, f"bank_switch_call_from_{state.pc:04X}"))
                    self.enqueue(State(state.low_bank, 0xC000, state.a), "reviewed_bank_switch_routine")
                    self.enqueue(State(mapped, next_pc, -1), "return_after_constant_bank_switch")
                elif value == 0xC000:
                    values = self.reviewed_bank_values(state)
                    if values is None:
                        self.unresolved.add((state.low_bank, state.pc, "bank_switch_value_unknown", "A has no finite proof contract at JSR $C000"))
                    else:
                        for bank_value in values:
                            self.mapper_transactions.add((state.low_bank, state.pc, "contract_call_bank_switch_C000", bank_value, bank_value))
                            self.entries.add((state.low_bank, 0xC000, f"contract_bank_switch_call_from_{state.pc:04X}"))
                            self.enqueue(State(state.low_bank, 0xC000, bank_value), "finite_contract_bank_switch_call")
                            self.enqueue(State(bank_value, next_pc, -1), "return_after_finite_bank_contract")
                else:
                    self.entries.add((state.low_bank, value, f"direct_jsr_from_{state.pc:04X}"))
                    self.enqueue(State(state.low_bank, value, next_a), "direct_jsr")
                    inline_continuation = INLINE_CALL_CONTINUATIONS.get((state.low_bank, state.pc))
                    if inline_continuation is not None and value == inline_continuation[0]:
                        self.enqueue(State(state.low_bank, inline_continuation[1], -1), "reviewed_inline_table_continuation")
                    else:
                        self.enqueue(State(state.low_bank, next_pc, -1), "jsr_continuation")
                continue

            if op.mnemonic in BRANCHES and op.mode == "REL" and value is not None:
                target = (next_pc + signed8(value)) & 0xFFFF
                self.enqueue(State(state.low_bank, target, next_a), "branch_taken")
                self.enqueue(State(state.low_bank, next_pc, next_a), "branch_fallthrough")
                continue
            self.enqueue(State(state.low_bank, next_pc, next_a), "fallthrough")

    def ledger(self) -> list[dict[str, object]]:
        rows: list[dict[str, object]] = []
        for bank in range(16):
            start_offset = bank * 0x4000
            labels: list[str] = []
            for local in range(0x4000):
                owners = self.byte_owners.get(start_offset + local, set())
                cpu_base = 0x8000 if bank < 15 else 0xC000
                address = cpu_base + local
                if not owners:
                    labels.append("unclassified")
                elif len(owners) == 1:
                    labels.append("candidate_code")
                elif REVIEWED_OVERLAPS.get((bank, address)) == owners:
                    labels.append("reviewed_overlap_code")
                else:
                    labels.append("conflicting_code")
            run_start = 0
            for index in range(1, 0x4001):
                if index == 0x4000 or labels[index] != labels[run_start]:
                    cpu_base = 0x8000 if bank < 15 else 0xC000
                    rows.append({
                        "physical_bank_16k": bank, "cpu_start": f"{cpu_base + run_start:04X}",
                        "cpu_end_inclusive": f"{cpu_base + index - 1:04X}",
                        "prg_offset_start": f"{start_offset + run_start:06X}",
                        "length": index - run_start, "classification": labels[run_start],
                    })
                    run_start = index
        return rows


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--rom", required=True, type=Path)
    parser.add_argument("--opcodes", required=True, type=Path)
    parser.add_argument("--config", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    args = parser.parse_args()
    try:
        prg, rom = load_rom(args.rom)
        analyzer = Analyzer(prg, read_opcodes(args.opcodes))
        vectors = [("NMI", int(str(rom["nmi_vector"]), 16)), ("RESET", int(str(rom["reset_vector"]), 16)), ("IRQ", int(str(rom["irq_vector"]), 16))]
        analyzer.run(vectors)
        output = args.output
        output.mkdir(parents=True, exist_ok=True)
        instructions = sorted(analyzer.identities.values(), key=lambda row: (int(row["physical_bank_16k"]), int(str(row["cpu_pc"]), 16)))
        unresolved = [
            {"mapping_low_bank": bank, "cpu_pc": f"{pc:04X}", "kind": kind, "detail": detail}
            for bank, pc, kind, detail in sorted(analyzer.unresolved)
        ]
        transactions = [
            {"mapping_low_bank_before": bank, "cpu_pc": f"{pc:04X}", "kind": kind, "committed_value": f"{value:02X}", "mapping_low_bank_after": after}
            for bank, pc, kind, value, after in sorted(analyzer.mapper_transactions)
        ]
        indirects = [
            {"mapping_low_bank": bank, "cpu_pc": f"{pc:04X}", "pointer": f"{pointer:04X}", "targets": targets, "decision": decision}
            for bank, pc, pointer, targets, decision in sorted(analyzer.indirects)
        ]
        bank_contracts = [
            {"mapping_low_bank": bank, "cpu_pc": f"{pc:04X}", "effective_banks": values, "proof": proof}
            for bank, pc, values, proof in sorted(analyzer.bank_value_contracts_used)
        ]
        entries = [
            {"mapping_low_bank": bank, "cpu_pc": f"{pc:04X}", "reason": reason}
            for bank, pc, reason in sorted(analyzer.entries)
        ]
        ledger = analyzer.ledger()
        candidate_bytes = sum(int(row["length"]) for row in ledger if row["classification"] == "candidate_code")
        overlap_bytes = sum(int(row["length"]) for row in ledger if row["classification"] == "reviewed_overlap_code")
        conflict_bytes = sum(int(row["length"]) for row in ledger if row["classification"] == "conflicting_code")
        resolved_indirects = sum(row["decision"].startswith("resolved") for row in indirects)
        summary = {
            "format": "mega-man-2-program-map-v06", "version": "1.1.1", "milestone": 6,
            "rom": rom, "reviewed_config_sha256": sha256(args.config),
            "scope": "exact-ROM physical-bank ledger from vectors, direct flow, constant MMC1 transactions, and ROM-resident indirect pointers",
            "instruction_identities": len(instructions), "candidate_code_bytes": candidate_bytes,
            "reviewed_overlap_bytes": overlap_bytes,
            "unclassified_bytes": len(prg) - candidate_bytes - overlap_bytes - conflict_bytes, "conflicting_code_bytes": conflict_bytes,
            "entry_records": len(entries), "mapper_transaction_records": len(transactions),
            "indirect_contracts": len(indirects), "resolved_indirect_contracts": resolved_indirects,
            "bank_value_contracts": len(bank_contracts),
            "unresolved_boundaries": len(unresolved),
            "program_map_receipt_accepted": conflict_bytes == 0 and len(unresolved) == 0 and len(instructions) > 317,
            "program_map_gate_worked": conflict_bytes > 0 or len(unresolved) > 0,
            "whole_rom_static_recomp_complete": False, "production_core_accepted": False,
            "runtime_opcode_fetch_decode_allowed": False, "interpreter_fallback_allowed": False,
            "acceptance_decision": "milestone_06_candidate_map_rejected_fail_closed" if unresolved or conflict_bytes else "milestone_06_candidate_map_accepted",
        }
        csv_write(output / "instruction_identities.csv", instructions, ["physical_bank_16k", "cpu_pc", "prg_offset", "opcode", "bytes", "mnemonic", "mode", "length", "mapping_low_bank", "a_constant", "discovery_reason"])
        csv_write(output / "program_identity_ledger.csv", ledger, ["physical_bank_16k", "cpu_start", "cpu_end_inclusive", "prg_offset_start", "length", "classification"])
        csv_write(output / "entry_records.csv", entries, ["mapping_low_bank", "cpu_pc", "reason"])
        csv_write(output / "mapper_transactions.csv", transactions, ["mapping_low_bank_before", "cpu_pc", "kind", "committed_value", "mapping_low_bank_after"])
        csv_write(output / "indirect_contracts.csv", indirects, ["mapping_low_bank", "cpu_pc", "pointer", "targets", "decision"])
        csv_write(output / "bank_value_contracts.csv", bank_contracts, ["mapping_low_bank", "cpu_pc", "effective_banks", "proof"])
        csv_write(output / "unresolved_boundaries.csv", unresolved, ["mapping_low_bank", "cpu_pc", "kind", "detail"])
        (output / "program_map_summary.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8", newline="\n")
        print(json.dumps(summary, sort_keys=True))
        return 0
    except Exception as error:
        print(f"ERROR: {error}")
        return 2


if __name__ == "__main__":
    raise SystemExit(main())

