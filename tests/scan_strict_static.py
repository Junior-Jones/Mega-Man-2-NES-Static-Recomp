#!/usr/bin/env python3
from __future__ import annotations
from pathlib import Path
import sys

def main() -> int:
    if len(sys.argv)!=2:
        print('usage: scan_strict_static.py SOURCE',file=sys.stderr);return 2
    root=Path(sys.argv[1])
    forbidden_names={'interp.c','interp.cpp','interpreter.c','interpreter.cpp'}
    forbidden_symbols=('nes_interp_dispatch','interp_run(','interp_fetch(','NESRECOMP_INTERP_FALLBACK')
    bad=[]
    for p in root.rglob('*'):
        if not p.is_file(): continue
        rel=p.relative_to(root).as_posix()
        if p.suffix.lower() in {'.nes','.fds','.unf','.unif'}: bad.append(f'ROM-like file packaged: {rel}')
        if p.name.lower() in forbidden_names: bad.append(f'interpreter source packaged: {rel}')
        if p.suffix.lower() in {'.c','.cc','.cpp','.h','.hpp'}:
            text=p.read_text(encoding='utf-8',errors='replace')
            for token in forbidden_symbols:
                if token in text: bad.append(f'forbidden interpreter symbol {token} in {rel}')
    if bad:
        print('\n'.join('FAIL: '+x for x in bad),file=sys.stderr);return 1
    print('PASS strict-static source scan: no ROM and no runtime interpreter symbols')
    return 0
if __name__=='__main__': raise SystemExit(main())
