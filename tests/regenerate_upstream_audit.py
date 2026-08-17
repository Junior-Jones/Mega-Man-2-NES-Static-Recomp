#!/usr/bin/env python3
from __future__ import annotations
import pathlib,subprocess,sys,tempfile

def main()->int:
    if len(sys.argv)!=5:
        print("usage: regenerate_upstream_audit.py SOURCE NESRecomp.exe ROM.nes TEMP-ROOT",file=sys.stderr);return 2
    source,tool,rom,temp_root=map(lambda x:pathlib.Path(x).resolve(),sys.argv[1:])
    expected=source/"generated"/"upstream-audit-v03"/"upstream_audit_summary.json"
    temp_root.mkdir(parents=True,exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="audit-receipt-",dir=temp_root) as td:
        actual=pathlib.Path(td)/"summary.json"
        subprocess.run([sys.executable,str(source/"tools"/"audit_upstream_generation.py"),str(tool),str(rom),str(temp_root),str(actual)],check=True)
        if actual.read_bytes()!=expected.read_bytes():
            print("FAIL upstream audit receipt differs from clean regeneration",file=sys.stderr);return 1
    print("PASS clean upstream audit regeneration: receipt byte-identical")
    return 0
if __name__=="__main__": raise SystemExit(main())
