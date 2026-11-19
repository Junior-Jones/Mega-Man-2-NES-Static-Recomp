#!/usr/bin/env python3
"""Verify the portable SDK package and direct launch failure paths on Windows."""

import json
from pathlib import Path
import subprocess
import sys
import tempfile
import zipfile


def main() -> None:
    source, launcher = (Path(arg).resolve() for arg in sys.argv[1:])
    manifest_path = source / "recomplauncher.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    assert manifest["start"] == {"program": ["Launcher.exe"], "args": ["--game", "{game}"]}
    assert manifest["saves"] == ["{install}/Snapshots"]
    assert manifest["folders"]["logs"] == [{"path": "{install}/Logs"}]
    widescreen = next(setting for setting in manifest["settings"] if setting["id"] == "widescreen")
    assert widescreen["defaults"] == {"Display/Widescreen": "1"}
    assert any(choice["set"] == {"Display/Widescreen": "0"} for choice in widescreen["choices"])
    assert (launcher.parent / manifest_path.name).read_bytes() == manifest_path.read_bytes()

    with tempfile.TemporaryDirectory(prefix="mm2-launcher-test-") as tmp:
        sandbox = Path(tmp)
        release = sandbox / "Mega Man 2 (NES)"
        archive_path = sandbox / "Mega-Man-2-Windows-x64.zip"
        subprocess.run(
            [sys.executable, source / "tools/create_windows_release.py", source,
             launcher, release, archive_path], check=True, timeout=30,
        )
        with zipfile.ZipFile(archive_path) as archive:
            assert archive.testzip() is None
            assert archive.read(f"{release.name}/{manifest_path.name}") == manifest_path.read_bytes()
            assert archive.read(f"{release.name}/ROM-REQUIREMENTS.txt") == (source / "ROM-REQUIREMENTS.txt").read_bytes()
            assert all(Path(name).suffix.lower() != ".nes" for name in archive.namelist())
            assert all(Path(name).name not in {"settings.ini", "Logs"} for name in archive.namelist())

        invalid_rom = sandbox / "Wrong game 日.nes"
        invalid_rom.write_bytes(bytes(32))
        cases = [
            (["--game", "--port-widescreen"], 2, "Invalid launch options"),
            (["--game", str(sandbox / "Missing ROM.nes")], 3, "cannot open ROM"),
            (["--port-widescreen", "--game", str(invalid_rom)], 3, "not an iNES ROM"),
            (["--game", str(invalid_rom), "--no-port-widescreen"], 3, "not an iNES ROM"),
            (["--game", str(invalid_rom), "--game", str(invalid_rom)], 2, "Invalid launch options"),
            (["--unknown"], 2, "Invalid launch options"),
        ]
        log_dir = release / "Logs"
        for arguments, expected, expected_message in cases:
            with subprocess.Popen([release / "Launcher.exe", *arguments], cwd=sandbox) as process:
                try:
                    return_code = process.wait(timeout=10)
                except subprocess.TimeoutExpired:
                    process.kill()
                    raise
                assert return_code == expected, (arguments, return_code)
                assert str(return_code) in manifest["exit_codes"]

                logs = list(log_dir.glob(f"mm2-*-{process.pid:08X}.log"))
                assert len(logs) == 1, (arguments, logs)
                logged = logs[0].read_text(encoding="utf-8-sig")
                assert expected_message in logged, (expected_message, logged)
                assert str(invalid_rom) not in logged

        assert not (release / "settings.ini").exists()
        assert len(list(log_dir.glob("mm2-*.log"))) == 5

    print("PASS RecompLauncher manifest, portable ZIP, Unicode ROM paths and launch exit codes")


if __name__ == "__main__":
    main()
