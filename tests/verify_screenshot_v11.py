#!/usr/bin/env python3
from collections import Counter
from pathlib import Path
import struct
import subprocess
import sys

exe, rom, out_dir = map(Path, sys.argv[1:4])
out_dir.mkdir(parents=True, exist_ok=True)
subprocess.run([str(exe), str(rom), str(out_dir), "60000000"], check=True)

def read_bmp(name):
    data = (out_dir / name).read_bytes()
    assert data[:2] == b"BM"
    offset = struct.unpack_from("<I", data, 10)[0]
    width = struct.unpack_from("<I", data, 18)[0]
    height = struct.unpack_from("<I", data, 22)[0]
    bpp = struct.unpack_from("<H", data, 28)[0]
    assert (width, height, bpp, offset) == (256, 240, 24, 54)
    pixels = [tuple(data[i:i+3]) for i in range(offset, len(data), 3)]
    assert len(pixels) == 256 * 240
    return data, Counter(pixels)

stage_data, stage = read_bmp("checkpoint-1200.bmp")
intro_data, intro = read_bmp("checkpoint-1600.bmp")
game_data, game = read_bmp("checkpoint-2000.bmp")
named_data, named = read_bmp("first-controlled-gameplay-frame.bmp")

# NES palette BGR signatures: blue striped selector, black/blue boss intro,
# then Air Man's blue sky, white clouds, black health meter and platform colors.
assert stage[(196, 76, 8)] > 35000 and stage[(236, 238, 236)] > 6000 and len(stage) >= 12
assert intro[(0, 0, 0)] > 44000 and intro[(204, 180, 56)] > 12000 and len(intro) == 5
assert game[(236, 154, 76)] > 37000 and game[(236, 238, 236)] > 18000
assert game[(0, 0, 0)] > 2000 and len(game) == 8
assert named_data == game_data and named == game
print("PASS v0.11 screenshot oracle: dimensions, palette/content signatures and named gameplay capture")
