#include "mm2_direct_core.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <direct.h>
#define MM2_RMDIR(path) _rmdir(path)
#else
#include <unistd.h>
#define MM2_RMDIR(path) rmdir(path)
#endif

static int read_file(const char *path, uint8_t **data, size_t *size) {
    FILE *file = fopen(path, "rb");
    long length;
    if (!file || fseek(file, 0, SEEK_END) != 0 ||
        (length = ftell(file)) < 0 || fseek(file, 0, SEEK_SET) != 0) {
        if (file) fclose(file);
        return 0;
    }
    *data = (uint8_t *)malloc((size_t)length);
    if (!*data || fread(*data, 1u, (size_t)length, file) != (size_t)length ||
        fclose(file) != 0) {
        free(*data);
        *data = NULL;
        return 0;
    }
    *size = (size_t)length;
    return 1;
}

static int write_file(const char *path, const uint8_t *data, size_t size,
                      int append_byte) {
    FILE *file = fopen(path, "wb");
    uint8_t extra = 0xA5u;
    int ok = file && fwrite(data, 1u, size, file) == size;
    if (ok && append_byte) ok = fwrite(&extra, 1u, 1u, file) == 1u;
    if (file && fclose(file) != 0) ok = 0;
    return ok;
}

static int exact_rom_test(const char *rom_path) {
    static const char path[] =
        "mm2-exact-snapshot-selftest/Exact ROM.mm2state";
    MM2Rom rom;
    MM2DirectCore *core = mm2_direct_core_create();
    MM2FrameResult frame;
    char error[256];
    char reason[256];
    uint64_t saved_frame;
    uint64_t saved_cycles;
    uint16_t saved_pc;
    unsigned index;
    int ok;
    memset(&rom, 0, sizeof(rom));
    memset(error, 0, sizeof(error));
    memset(reason, 0, sizeof(reason));
    ok = core && mm2_rom_load(rom_path, &rom, error, sizeof(error));
    if (ok && !mm2_rom_is_expected(&rom, reason, sizeof(reason))) {
        snprintf(error, sizeof(error), "%s", reason);
        ok = 0;
    }
    if (ok) ok = mm2_direct_core_reset(core, &rom);
    for (index = 0u; ok && index < 3u; ++index)
        ok = mm2_direct_core_advance_frame(core, 0u, 0u, 0u, &frame);
    saved_frame = mm2_direct_core_frame_count(core);
    saved_cycles = mm2_direct_core_cpu_cycles(core);
    saved_pc = mm2_direct_core_program_counter(core);
    if (ok) ok = mm2_direct_core_snapshot_save(
        core, &rom, path, error, sizeof(error)) == MM2_SNAPSHOT_OK;
    if (ok) ok = mm2_direct_core_advance_frame(core, 0u, 0u, 0u, &frame);
    if (ok) ok = mm2_direct_core_snapshot_load(
        core, &rom, path, error, sizeof(error)) == MM2_SNAPSHOT_OK;
    if (ok) ok = mm2_direct_core_frame_count(core) == saved_frame &&
                 mm2_direct_core_cpu_cycles(core) == saved_cycles &&
                 mm2_direct_core_program_counter(core) == saved_pc &&
                 mm2_direct_core_audio_available(core) == 0u;
    mm2_direct_core_destroy(core);
    if (rom.file_data) mm2_rom_free(&rom);
    remove(path);
    MM2_RMDIR("mm2-exact-snapshot-selftest");
    if (!ok) {
        fprintf(stderr, "exact-ROM snapshot self-test failed: %s\n", error);
        return 1;
    }
    printf("PASS exact-ROM snapshot restore: frame=%llu cycles=%llu pc=%04X\n",
           (unsigned long long)saved_frame,
           (unsigned long long)saved_cycles, saved_pc);
    return 0;
}

int main(int argc, char **argv) {
    static const char path[] = "mm2-snapshot-selftest/Quick Save.mm2state";
    static const char temporary[] =
        "mm2-snapshot-selftest/Quick Save.mm2state.tmp";
    MM2DirectCore *core = mm2_direct_core_create();
    MM2Rom rom;
    MM2Rom other_rom;
    uint8_t *prg = (uint8_t *)calloc(1u, 0x40000u);
    uint8_t *good = NULL;
    size_t good_size = 0u;
    uint16_t saved_pc;
    uint64_t saved_cycles;
    char error[256];
    FILE *probe;
    int ok = core && prg;
    memset(&rom, 0, sizeof(rom));
    rom.prg = prg;
    rom.prg_size = 0x40000u;
    rom.mapper = 1;
    rom.reset_vector = 0xFFE0u;
    memset(rom.sha256, '1', 64u);
    rom.sha256[64] = '\0';
    remove(temporary);
    remove(path);
    MM2_RMDIR("mm2-snapshot-selftest");
    ok = ok && mm2_direct_core_reset(core, &rom);
    ok = ok && mm2_direct_core_step(core);
    saved_pc = mm2_direct_core_program_counter(core);
    saved_cycles = mm2_direct_core_cpu_cycles(core);
    ok = ok && mm2_direct_core_snapshot_save(core, &rom, path, error,
                                              sizeof(error)) == MM2_SNAPSHOT_OK;
    ok = ok && read_file(path, &good, &good_size) && good_size > 160u;
    ok = ok && mm2_direct_core_run(core, 1u);
    ok = ok && mm2_direct_core_snapshot_load(core, &rom, path, error,
                                              sizeof(error)) == MM2_SNAPSHOT_OK;
    ok = ok && mm2_direct_core_program_counter(core) == saved_pc;
    ok = ok && mm2_direct_core_cpu_cycles(core) == saved_cycles;
    ok = ok && mm2_direct_core_audio_available(core) == 0u;

    ok = ok && write_file(path, good, good_size, 1);
    ok = ok && mm2_direct_core_snapshot_load(core, &rom, path, error,
                                              sizeof(error)) ==
                   MM2_SNAPSHOT_TRAILING_DATA;
    ok = ok && write_file(path, good, good_size - 1u, 0);
    ok = ok && mm2_direct_core_snapshot_load(core, &rom, path, error,
                                              sizeof(error)) ==
                   MM2_SNAPSHOT_BAD_FORMAT;
    good[good_size - 1u] ^= 0x01u;
    ok = ok && write_file(path, good, good_size, 0);
    ok = ok && mm2_direct_core_snapshot_load(core, &rom, path, error,
                                              sizeof(error)) ==
                   MM2_SNAPSHOT_PAYLOAD_HASH_MISMATCH;
    good[good_size - 1u] ^= 0x01u;
    good[8] = 2u;
    ok = ok && write_file(path, good, good_size, 0);
    ok = ok && mm2_direct_core_snapshot_load(core, &rom, path, error,
                                              sizeof(error)) ==
                   MM2_SNAPSHOT_UNSUPPORTED_VERSION;
    good[8] = 1u;
    good[32] ^= 0x01u;
    ok = ok && write_file(path, good, good_size, 0);
    ok = ok && mm2_direct_core_snapshot_load(core, &rom, path, error,
                                              sizeof(error)) ==
                   MM2_SNAPSHOT_CORE_MISMATCH;
    good[32] ^= 0x01u;
    ok = ok && write_file(path, good, good_size, 0);
    other_rom = rom;
    other_rom.sha256[0] = '2';
    ok = ok && mm2_direct_core_snapshot_load(core, &other_rom, path, error,
                                              sizeof(error)) ==
                   MM2_SNAPSHOT_ROM_MISMATCH;
    ok = ok && mm2_direct_core_program_counter(core) == saved_pc;
    ok = ok && mm2_direct_core_cpu_cycles(core) == saved_cycles;

    ok = ok && mm2_direct_core_snapshot_save(core, &rom, path, error,
                                              sizeof(error)) == MM2_SNAPSHOT_OK;
    probe = fopen(temporary, "rb");
    ok = ok && probe == NULL;
    if (probe) fclose(probe);
    free(good);
    mm2_direct_core_destroy(core);
    free(prg);
    remove(temporary);
    remove(path);
    MM2_RMDIR("mm2-snapshot-selftest");
    if (!ok) {
        fprintf(stderr, "core-owned snapshot self-test failed: %s\n", error);
        return 1;
    }
    puts("PASS core-owned snapshots: atomic replace, ROM/core binding, hash, truncation and trailing-data rejection");
    return argc == 2 ? exact_rom_test(argv[1]) : 0;
}
