#!/usr/bin/env python3
from __future__ import annotations
import csv, hashlib, json, re, sys
from pathlib import Path

def die(msg: str) -> int:
    print(f"FAIL: {msg}", file=sys.stderr); return 1

def main() -> int:
    if len(sys.argv) != 2: return die("usage: verify_static_seed.py SOURCE")
    root=Path(sys.argv[1]); proof=root/'generated/proof-v02'
    summary=json.loads((proof/'static_proof_summary.json').read_text(encoding='utf-8'))
    if summary['format']!='mega-man-2-static-seed-proof-v2': return die('wrong proof format')
    rows=list(csv.DictReader((proof/'proven_instructions.csv').open(encoding='utf-8',newline='')))
    unresolved=list(csv.DictReader((proof/'unresolved_boundaries.csv').open(encoding='utf-8',newline='')))
    writes=list(csv.DictReader((proof/'mapper_write_sites.csv').open(encoding='utf-8',newline='')))
    if summary['rom']['sha256']!='49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf': return die('wrong ROM identity')
    if summary['whole_rom_static_recomp_complete'] is not False: return die('milestone 02 must not claim whole-ROM completion')
    if summary['runtime_opcode_fetch_decode_allowed'] is not False or summary['interpreter_fallback_allowed'] is not False: return die('fallback policy changed')
    if len(rows)!=summary['proven_instruction_records']: return die('instruction count mismatch')
    if len(unresolved)!=summary['unresolved_boundaries'] or len(writes)!=summary['definite_or_indexed_mapper_write_sites']: return die('boundary count mismatch')
    if not any(r['cpu_pc']=='FFE1' and r['kind']=='mmc1_write_boundary' for r in unresolved): return die('reset MMC1 RMW boundary missing')
    if not any(r['cpu_pc']=='D097' and r['kind']=='mmc1_write_boundary' for r in unresolved): return die('NMI MMC1 boundary missing')
    identities={(int(r['physical_bank_16k']),int(r['cpu_pc'],16)) for r in rows}
    if len(identities)!=len(rows): return die('duplicate physical-bank/PC identity')
    for row in rows:
        bank=int(row['physical_bank_16k']); pc=int(row['cpu_pc'],16); offset=int(row['prg_offset'],16)
        expected_offset=bank*0x4000+(pc&0x3FFF)
        if bank!=15 or offset!=expected_offset: return die('unexpected bank or PRG offset in reset-map seed')
    c=(proof/'mm2_static_seed.c').read_text(encoding='utf-8')
    pattern=re.compile(r'\{(\d+)u, 0x([0-9A-F]+)U, 0x([0-9A-F]+)U, 0x([0-9A-F]+)U, (\d+)u, (\d+)u\},')
    generated=[tuple(int(value,16) if index in {1,2,3} else int(value) for index,value in enumerate(match.groups())) for match in pattern.finditer(c)]
    expected=[]
    for row in rows:
        expected.append((int(row['physical_bank_16k']),int(row['cpu_pc'],16),int(row['prg_offset'],16),int(row['opcode'],16),len(row['bytes'].split()),int(row['base_cycles'])))
    if generated!=expected: return die('generated C records do not exactly match proof CSV')
    proof_hash=hashlib.sha256((proof/'static_proof_summary.json').read_bytes()).hexdigest()
    if proof_hash!='a3a301c247b70612881dd4873acb609ad5dfd73aba9f500bb2e46f0a5f0b1234': return die('proof summary receipt hash mismatch')
    print(f"PASS static-seed rows={len(rows)} unresolved={len(unresolved)} mapper_writes={len(writes)}")
    return 0
if __name__=='__main__': raise SystemExit(main())
