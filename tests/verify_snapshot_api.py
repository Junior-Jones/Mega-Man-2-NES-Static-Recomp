#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(sys.argv[1])
public = (root / "src/runtime/mm2_direct_core.h").read_text(encoding="utf-8")
snapshot = (root / "src/runtime/mm2_snapshot.c").read_text(encoding="utf-8")
frontend = (root / "src/gui/mm2_windows_live.cpp").read_text(encoding="utf-8")
cmake = (root / "CMakeLists.txt").read_text(encoding="utf-8")

for api in ("mm2_direct_core_snapshot_save", "mm2_direct_core_snapshot_load",
            "MM2_SNAPSHOT_PAYLOAD_HASH_MISMATCH", "MM2_SNAPSHOT_TRAILING_DATA",
            "MM2_SNAPSHOT_ROM_MISMATCH", "MM2_SNAPSHOT_CORE_MISMATCH"):
    assert api in public, api

for implementation in ("MM2_SNAPSHOT_FORMAT_VERSION", "mm2_sha256",
                       "mm2_direct_core_generated_crc32", "replace_utf8",
                       "MOVEFILE_REPLACE_EXISTING", "fsync(fileno(file))",
                       "sanitize_snapshot_payload", "fgetc(file)"):
    assert implementation in snapshot, implementation

for forbidden in ("struct SnapshotHeader", "MM2STATE", "fread(&h",
                  "mm2_direct_core_state_export", "mm2_direct_core_state_import",
                  "SnapshotHeader h"):
    assert forbidden not in frontend, forbidden
for api in ("mm2_direct_core_snapshot_save", "mm2_direct_core_snapshot_load"):
    assert api in frontend, api

assert "core-owned-snapshot-self-test" in cmake
assert "core-owned-snapshot-api" in cmake
print("PASS core-owned snapshot API: version/hash/ROM/core binding and atomic replace")
