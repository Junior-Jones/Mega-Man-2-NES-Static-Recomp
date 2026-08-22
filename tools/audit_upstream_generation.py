#!/usr/bin/env python3
"""Run pinned NESRecomp in isolation and emit a fail-closed acceptance receipt."""
from __future__ import annotations
import hashlib, json, pathlib, re, subprocess, sys, tempfile

EXPECTED_ROM_SHA256="49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
EXPECTED_TOOL_SHA256="f8287544e29091cc87b30c96a618fb6bf8e12a2fefcec9f489c5db112e6849d2"
EXPECTED_TOOL_COMMIT="f85051decadd3f4fab8ab0d15b4ace1b3df19764"

def sha(path:pathlib.Path)->str:
    return hashlib.sha256(path.read_bytes()).hexdigest()

def tree_hash(root:pathlib.Path)->str:
    h=hashlib.sha256()
    for p in sorted((x for x in root.rglob("*") if x.is_file()),key=lambda x:x.relative_to(root).as_posix()):
        rel=p.relative_to(root).as_posix().encode()
        h.update(len(rel).to_bytes(4,"big"));h.update(rel)
        data=p.read_bytes();h.update(len(data).to_bytes(8,"big"));h.update(data)
    return h.hexdigest()

def match_int(pattern:str,text:str)->int:
    m=re.search(pattern,text,re.MULTILINE)
    if not m: raise RuntimeError(f"NESRecomp output missing metric: {pattern}")
    return int(m.group(1))

def main()->int:
    if len(sys.argv)!=5:
        print("usage: audit_upstream_generation.py NESRecomp.exe ROM.nes TEMP-ROOT SUMMARY.json",file=sys.stderr);return 2
    tool,rom,temp_root,summary=map(lambda x:pathlib.Path(x).resolve(),sys.argv[1:])
    if sha(tool)!=EXPECTED_TOOL_SHA256: raise SystemExit("pinned NESRecomp executable SHA-256 mismatch")
    if sha(rom)!=EXPECTED_ROM_SHA256: raise SystemExit("exact Mega Man 2 ROM SHA-256 mismatch")
    temp_root.mkdir(parents=True,exist_ok=True)
    work=pathlib.Path(tempfile.mkdtemp(prefix="nesrecomp-mm2-v03-",dir=temp_root))
    cmd=[str(tool),str(rom),"--output-prefix","mm2_upstream_v03"]
    proc=subprocess.run(cmd,cwd=work,text=True,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=180)
    log=proc.stdout
    (work/"nesrecomp.log").write_text(log,encoding="utf-8",newline="\n")
    if proc.returncode!=0: raise SystemExit(f"NESRecomp failed: {proc.returncode}")
    suspects=match_int(r"False positive suspects:\s*(\d+)/",log)
    discovered=match_int(r"Total functions found:\s*(\d+)",log)
    analyzed=match_int(r"Coverage:.*?\((\d+) functions analyzed",log)
    reachable=match_int(r"functions analyzed,\s*(\d+) reachable insns",log)
    coverage=work/"generated"/"mm2_upstream_v03_coverage.txt"
    cov=coverage.read_text(encoding="utf-8")
    brk=match_int(r"BRK \(official\)\s+count=(\d+)",cov)
    sized_skip=sum(int(x) for x in re.findall(r"unofficial(?: UNSTABLE)?, sized-skip\)\s+count=(\d+)",cov))
    halt=match_int(r"KIL/STP/JAM .*?count=(\d+)",cov)
    proposal=work/"game.toml"
    generated=work/"generated"
    reasons=[]
    if suspects: reasons.append(f"{suspects} finder false-positive suspects")
    if brk: reasons.append(f"{brk} reachable BRK classifications")
    if sized_skip: reasons.append(f"{sized_skip} reachable instructions with skipped side effects")
    if halt: reasons.append(f"{halt} reachable halt classifications")
    reasons.append("auto-generated game.toml is unreviewed")
    receipt={
      "format":"mega-man-2-upstream-generation-audit-v1","version":"1.1.1","milestone":3,
      "tool":{"repository":"mstan/nesrecomp","commit":EXPECTED_TOOL_COMMIT,"executable_sha256":sha(tool)},
      "rom_sha256":sha(rom),"command":[tool.name,rom.name,"--output-prefix","mm2_upstream_v03"],
      "metrics":{"functions_discovered":discovered,"functions_analyzed":analyzed,"reachable_instructions":reachable,
                 "false_positive_suspects":suspects,"reachable_brk":brk,"reachable_sized_skip":sized_skip,"reachable_halt":halt},
      "artifacts":{"proposal_game_toml_sha256":sha(proposal),"coverage_sha256":sha(coverage),"generated_tree_sha256":tree_hash(generated)},
      "production_core_accepted":not reasons,"acceptance_gate_worked":bool(reasons),"rejection_reasons":reasons,
      "audio_runtime_linked":False,"audio_test_status":"deferred_until_native_apu_sample_output_exists"
    }
    summary.parent.mkdir(parents=True,exist_ok=True)
    summary.write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8",newline="\n")
    print(f"PASS upstream audit executed; production core accepted={receipt['production_core_accepted']}")
    print(f"work={work}")
    print(f"summary={summary}")
    return 0
if __name__=="__main__": raise SystemExit(main())

