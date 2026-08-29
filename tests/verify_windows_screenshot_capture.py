#!/usr/bin/env python3
from pathlib import Path
import sys


root = Path(sys.argv[1])
source = (root / "src/gui/mm2_windows_live.cpp").read_text(encoding="utf-8")
start = source.index("bool screenshot(MM2LiveWindow *s)")
end = source.index("LRESULT CALLBACK LiveProc", start)
capture = source[start:end]

required = (
    "s->video.frame_valid",
    "s->video.pixels",
    "s->video.active_width",
    "s->video.active_height",
    "t.wMilliseconds",
    "CREATE_NEW",
    "ensure_directory(dir)",
    "write_all",
    "DeleteFileW",
)
for token in required:
    assert token in capture, f"missing screenshot safety contract: {token}"

assert "mm2_direct_core_presentation_copy" not in capture, (
    "screenshot must save the immutable frame submitted to video, not rebuild "
    "a presentation from mutable core state"
)
assert 'L"wb"' not in capture, (
    "overwrite-prone second-resolution stdio capture path returned"
)

print("PASS Windows screenshot capture uses the displayed frame and safe files")
