#!/usr/bin/env python3
from __future__ import annotations
import filecmp, pathlib, shutil, subprocess, sys, tempfile

def main() -> int:
    if len(sys.argv) != 2:
        print("usage: regenerate_direct_core_v07.py SOURCE", file=sys.stderr); return 2
    source = pathlib.Path(sys.argv[1]).resolve()
    with tempfile.TemporaryDirectory() as tmp:
        clone = pathlib.Path(tmp) / "Source"
        shutil.copytree(source, clone)
        out = clone / "generated/core-v01"
        shutil.rmtree(out)
        subprocess.run([sys.executable, str(clone / "tools/generate_mm2_direct_core.py"), str(clone)], check=True)
        subprocess.run([sys.executable, str(clone / "tools/compact_mm2_direct_core.py"), str(clone)], check=True)
        expected = source / "generated/core-v01"
        expected_names = sorted(path.name for path in expected.iterdir()
                                if path.is_file())
        actual_names = sorted(path.name for path in out.iterdir()
                              if path.is_file())
        if expected_names != actual_names:
            raise SystemExit("non-deterministic direct-core generated file set")
        for name in expected_names:
            if not filecmp.cmp(expected / name, out / name, shallow=False):
                raise SystemExit(f"non-deterministic direct-core generation: {name}")
    print("PASS clean direct-core regeneration is byte-identical")
    return 0

if __name__ == "__main__": raise SystemExit(main())
