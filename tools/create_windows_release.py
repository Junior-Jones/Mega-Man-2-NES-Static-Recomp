#!/usr/bin/env python3
"""Create and verify the clean portable Mega Man 2 Windows release."""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import sys
import zipfile


FILES = {
    "README.txt": "README.txt",
    "VERSION.txt": "VERSION.txt",
    "Wide Screen (v1).txt": "Wide Screen (v1).txt",
    "THIRD-PARTY-NOTICES.txt": "THIRD-PARTY-NOTICES.txt",
    "third_party/SDL-LICENSE.txt": "SDL-LICENSE.txt",
    "third_party/SDL_GameControllerDB-LICENSE.txt": "SDL_GameControllerDB-LICENSE.txt",
    "third_party/gamecontrollerdb.txt": "gamecontrollerdb.txt",
    "Rom/Readme.txt": "Rom/Readme.txt",
    "Snapshots/Readme.txt": "Snapshots/Readme.txt",
    "Screenshots/Readme.txt": "Screenshots/Readme.txt",
}
FORBIDDEN = {".nes", ".pdb", ".obj", ".lib", ".zip"}


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main() -> int:
    if len(sys.argv) != 5:
        print(
            "usage: create_windows_release.py SOURCE LAUNCHER OUTPUT-DIR OUTPUT.zip",
            file=sys.stderr,
        )
        return 2
    source = Path(sys.argv[1]).resolve()
    launcher = Path(sys.argv[2]).resolve()
    output = Path(sys.argv[3]).resolve()
    archive_path = Path(sys.argv[4]).resolve()
    if not source.is_dir() or not launcher.is_file():
        raise SystemExit("source directory or Launcher.exe is missing")
    if output.exists() or archive_path.exists():
        raise SystemExit("release output targets must not already exist")

    output.mkdir(parents=True)
    shutil.copy2(launcher, output / "Launcher.exe")
    for relative_source, relative_output in FILES.items():
        source_path = source / relative_source
        destination = output / relative_output
        if not source_path.is_file():
            raise SystemExit(f"required release file is missing: {relative_source}")
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source_path, destination)

    files = sorted(
        (path for path in output.rglob("*") if path.is_file()),
        key=lambda path: path.relative_to(output).as_posix().lower(),
    )
    for path in files:
        relative = path.relative_to(output).as_posix()
        if path.suffix.lower() in FORBIDDEN:
            raise SystemExit(f"forbidden release file: {relative}")
        if path.name.lower() == "settings.ini":
            raise SystemExit("settings.ini must not be shipped")
        if relative.lower().startswith("test/"):
            raise SystemExit("test content must not be shipped")

    archive_path.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(
        archive_path, "w", compression=zipfile.ZIP_DEFLATED, compresslevel=9
    ) as archive:
        for path in files:
            relative = (Path(output.name) / path.relative_to(output)).as_posix()
            archive.write(path, relative)

    with zipfile.ZipFile(archive_path) as archive:
        if archive.testzip() is not None:
            raise SystemExit("release ZIP CRC verification failed")
        names = archive.namelist()
        if len(names) != len(set(name.lower() for name in names)):
            raise SystemExit("release ZIP contains duplicate entries")
        if len(names) != len(FILES) + 1:
            raise SystemExit("release ZIP file count is not the expected clean set")

    print(
        f"PASS clean Windows release: {archive_path} "
        f"({archive_path.stat().st_size} bytes, {len(files)} files)"
    )
    print(f"SHA256 {digest(archive_path)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
