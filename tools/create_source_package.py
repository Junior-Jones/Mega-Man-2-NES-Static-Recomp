#!/usr/bin/env python3
"""Create and verify the ROM-free Mega Man 2 source archive."""
from __future__ import annotations

import hashlib
import pathlib
import sys
import zipfile

FORBIDDEN_SUFFIXES = {
    ".nes", ".zip", ".exe", ".dll", ".o", ".obj", ".a", ".lib", ".pdb",
    ".png", ".jpg", ".jpeg", ".wav", ".mp3", ".mp4",
}
INVENTORY_NAME = "FILE-INVENTORY-SHA256.txt"


def digest(path: pathlib.Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def source_files(root: pathlib.Path) -> list[pathlib.Path]:
    return sorted(
        (
            path
            for path in root.rglob("*")
            if path.is_file() and ".git" not in path.parts
        ),
        key=lambda path: path.relative_to(root).as_posix().lower(),
    )


def main() -> int:
    if len(sys.argv) != 3:
        print("usage: create_source_package.py SOURCE-DIR OUTPUT.zip", file=sys.stderr)
        return 2

    root = pathlib.Path(sys.argv[1]).resolve()
    output = pathlib.Path(sys.argv[2]).resolve()
    if not root.is_dir():
        raise SystemExit(f"source directory not found: {root}")
    if output.is_relative_to(root):
        raise SystemExit("output ZIP must be outside the source directory")

    bad = [
        path for path in source_files(root)
        if path.suffix.lower() in FORBIDDEN_SUFFIXES
    ]
    if bad:
        raise SystemExit(
            "forbidden source-package files: " + ", ".join(str(path) for path in bad)
        )

    inventory = root / INVENTORY_NAME
    payload = [path for path in source_files(root) if path != inventory]
    inventory.write_text(
        "".join(
            f"{digest(path)}  {path.relative_to(root).as_posix()}\n"
            for path in payload
        ),
        encoding="utf-8",
        newline="\n",
    )

    output.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(
        output, "w", compression=zipfile.ZIP_DEFLATED, compresslevel=9
    ) as archive:
        for path in source_files(root):
            archive.write(
                path,
                (pathlib.Path(root.name) / path.relative_to(root)).as_posix(),
            )

    with zipfile.ZipFile(output) as archive:
        if archive.testzip() is not None:
            raise SystemExit("ZIP CRC verification failed")
        names = archive.namelist()
        if len(names) != len({name.lower() for name in names}):
            raise SystemExit("duplicate ZIP entry")
        if any(
            pathlib.PurePosixPath(name).suffix.lower() in FORBIDDEN_SUFFIXES
            for name in names
        ):
            raise SystemExit("forbidden ZIP entry")

    print(
        f"PASS source-only ZIP: {output} "
        f"({output.stat().st_size} bytes, {len(source_files(root))} files)"
    )
    print(f"SHA256 {digest(output)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
