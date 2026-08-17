#!/usr/bin/env bash
set -euo pipefail
SOURCE_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="${MM2_BUILD_DIR:-$SOURCE_DIR/build-linux}"
ROM_PATH="${1:-${MM2_TEST_ROM:-}}"
rm -rf "$BUILD_DIR"
args=(-S "$SOURCE_DIR" -B "$BUILD_DIR" -G Ninja -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=ON)
if [[ -n "$ROM_PATH" ]]; then args+=("-DMM2_TEST_ROM=$ROM_PATH"); fi
cmake "${args[@]}"
cmake --build "$BUILD_DIR" --parallel
ctest --test-dir "$BUILD_DIR" --output-on-failure
cmake --install "$BUILD_DIR" --prefix "$BUILD_DIR/package"
printf 'Linux build complete: %s\n' "$BUILD_DIR"
