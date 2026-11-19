"""Exercise the ROM audit and snapshot reader with alternate dump containers."""

import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import zlib


PRG_SIZE = 256 * 1024
INES = bytes.fromhex("4e45531a100010000000000000000000")
NES2 = bytes.fromhex("4e45531a100010080000000700000000")
NES2_EXPONENT = bytes.fromhex("4e45531a48001008000f000700000000")
EXPECTED_PAYLOAD = "1e588d435e75d80c5c0b578b4fa8d196f2cf4346c11c9a7b7e435d768828ad01"
WRONG_PAYLOAD = "game payload SHA-256 does not match"


def change(header: bytes, offset: int, value: int) -> bytes:
    return header[:offset] + bytes([value]) + header[offset + 1:]


def main() -> None:
    audit = Path(sys.argv[1]).resolve()
    payload = bytes(PRG_SIZE)
    if len(sys.argv) == 4:
        source = Path(sys.argv[2]).read_bytes()
        payload = source if len(source) == PRG_SIZE else source[16:]
        assert len(payload) == PRG_SIZE
        assert hashlib.sha256(payload).hexdigest() == EXPECTED_PAYLOAD

    with tempfile.TemporaryDirectory(prefix="mm2-rom-containers-") as directory:
        root = Path(directory)

        def inspect(name: str, data: bytes, exit_code: int, reason: str) -> dict:
            candidate = root / name
            candidate.write_bytes(data)
            report = root / (name + ".json")
            result = subprocess.run([audit, candidate, report], capture_output=True,
                                    text=True, timeout=15)
            assert result.returncode == exit_code, (name, result.stdout, result.stderr)
            assert reason in result.stdout + result.stderr, (name, result.stdout, result.stderr)
            if exit_code == 3:
                return {}
            details = json.loads(report.read_text(encoding="utf-8"))
            assert details["expected"] is (exit_code == 0), (name, details)
            return details

        variants = {
            "legacy.nes": INES + payload,
            "nes2.nes": NES2 + payload,
            "exponent.nes": NES2_EXPONENT + payload,
            "other-mirroring.nes": change(INES, 6, 0x11) + payload,
            "raw.bin": payload,
        }
        for name, data in variants.items():
            real_rom = len(sys.argv) == 4
            details = inspect(name, data, 0 if real_rom else 5,
                              "exact expected" if real_rom else WRONG_PAYLOAD)
            assert details["sha256"] == hashlib.sha256(data).hexdigest()
            assert details["payload_sha256"] == hashlib.sha256(payload).hexdigest()
            assert details["prg_bytes"] == PRG_SIZE and details["chr_rom_bytes"] == 0

        invalid = [
            ("wrong-game.nes", INES + change(payload, 0, payload[0] ^ 1), 5, WRONG_PAYLOAD),
            ("wrong-mapper.nes", change(INES, 6, 0x20) + payload, 5, "mapper 1/MMC1"),
            ("extended-mapper.nes", change(NES2, 8, 0x01) + payload, 5, "mapper 1/MMC1"),
            ("wrong-console.nes", change(NES2, 7, 0x09) + payload, 5, "unsupported NES console"),
            ("trainer.nes", change(INES, 6, 0x14) + bytes(512) + payload, 5, "trainer"),
            ("battery.nes", change(INES, 6, 0x12) + payload, 5, "battery"),
            ("four-screen.nes", change(INES, 6, 0x18) + payload, 5, "four-screen"),
            ("with-chr.nes", change(INES, 5, 1) + payload + bytes(8192), 5, "unexpected PRG or CHR"),
            ("extra.nes", INES + payload + b"\0", 5, "unexpected data after"),
            ("truncated.nes", INES + payload[:-1], 3, "truncated PRG/CHR payload"),
            ("oversize.nes", change(NES2_EXPONENT, 4, 0xFF) + payload, 3, "invalid NES 2.0"),
            ("unknown.bin", payload[:-1], 3, "not an iNES ROM"),
        ]
        for name, data, status, reason in invalid:
            inspect(name, data, status, reason)

        if len(sys.argv) == 4:
            snapshot = Path(sys.argv[3]).resolve()
            for name in variants.keys() - {"legacy.nes"}:
                for save, restore in (("legacy.nes", name), (name, "legacy.nes")):
                    subprocess.run([snapshot, save, restore], cwd=root, check=True, timeout=30)
            manifest = Path(__file__).resolve().parents[1] / "recomplauncher.json"
            fingerprints = json.loads(manifest.read_text(encoding="utf-8"))["game"]["dumps"]
            assert {(item["size"], item["crc32"]) for item in fingerprints} == {
                (len(variants[name]), f"{zlib.crc32(variants[name]):08X}")
                for name in ("legacy.nes", "nes2.nes", "raw.bin")
            }

    print("PASS ROM container validation and payload identity")


if __name__ == "__main__":
    main()
