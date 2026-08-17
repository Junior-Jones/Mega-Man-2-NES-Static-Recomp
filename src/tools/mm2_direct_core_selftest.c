#include "mm2_direct_core_internal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int structural_self_test(void) {
    uint8_t *prg = (uint8_t *)calloc(1u, 0x40000u);
    MM2Rom rom;
    MM2DirectCore core;
    MM2DirectCore *owned = NULL;
    MM2DirectCore *restored = NULL;
    void *state = NULL;
    int16_t audio[64];
    size_t chunk;
    int ok = 1;
    if (!prg) return 2;
    memset(&rom, 0, sizeof(rom));
    memset(&core, 0, sizeof(core));
    rom.prg = prg; rom.prg_size = 0x40000u; rom.mapper = 1; rom.reset_vector = 0xFFE0u;
    ok = ok && mm2_direct_core_reset(&core, &rom);
    ok = ok && core.pc == 0xFFE0u && core.s == 0xFDu && core.cpu_cycles == 7u;
    ok = ok && mm2_direct_core_step(&core) && core.pc == 0xFFE1u;
    core.pc = 0x7000u;
    ok = ok && !mm2_direct_core_step(&core) && core.trap == MM2_CORE_TRAP_MISSING_IDENTITY;
    ok = ok && mm2_direct_core_identity_count() == 20149u;
    ok = ok && mm2_direct_core_generated_crc32() == 0x0FCFC04Du;
    owned = mm2_direct_core_create();
    restored = mm2_direct_core_create();
    state = malloc(mm2_direct_core_state_size());
    ok = ok && owned && restored && state;
    ok = ok && mm2_direct_core_reset(owned, &rom);
    ok = ok && mm2_direct_core_step(owned);
    mm2_direct_core_apu_test_advance(owned, 4000u);
    ok = ok && mm2_direct_core_audio_available(owned) > 0u;
    ok = ok && mm2_direct_core_audio_read(owned, audio,
                                          sizeof(audio) / sizeof(audio[0])) > 0u;
    mm2_direct_core_audio_clear(owned);
    ok = ok && mm2_direct_core_audio_available(owned) == 0u;
    for (chunk = 0u; chunk < 400u; ++chunk)
        mm2_direct_core_apu_test_advance(owned, 1000u);
    ok = ok && mm2_direct_core_audio_available(owned) == 8192u;
    ok = ok && mm2_direct_core_audio_overflowed(owned);
    ok = ok && mm2_direct_core_audio_discard(owned, 100u) == 100u;
    ok = ok && mm2_direct_core_audio_available(owned) == 8092u;
    mm2_direct_core_audio_clear(owned);
    mm2_direct_core_audio_clear_overflow(owned);
    ok = ok && mm2_direct_core_audio_available(owned) == 0u;
    ok = ok && !mm2_direct_core_audio_overflowed(owned);
    ok = ok && mm2_direct_core_state_export(
        owned, state, mm2_direct_core_state_size());
    ((MM2DirectCore *)state)->pcm_output_count = 8193u;
    ok = ok && !mm2_direct_core_state_import(
        restored, state, mm2_direct_core_state_size(), &rom);
    ok = ok && mm2_direct_core_state_export(
        owned, state, mm2_direct_core_state_size());
    ok = ok && mm2_direct_core_state_import(
        restored, state, mm2_direct_core_state_size(), &rom);
    ok = ok && mm2_direct_core_program_counter(restored) ==
                   mm2_direct_core_program_counter(owned);
    ok = ok && mm2_direct_core_cpu_cycles(restored) ==
                   mm2_direct_core_cpu_cycles(owned);
    free(state);
    mm2_direct_core_destroy(restored);
    mm2_direct_core_destroy(owned);
    free(prg);
    if (!ok) { fputs("direct-core structural self-test failed\n", stderr); return 1; }
    puts("PASS direct core: opaque lifecycle/state transfer, compiled identity execution, and missing-identity hard trap");
    return 0;
}

static int rom_smoke(const char *path, uint64_t limit) {
    MM2Rom rom;
    MM2DirectCore core;
    char error[256], reason[256];
    uint64_t i;
    MM2FrameResult frame;
    if (!mm2_rom_load(path, &rom, error, sizeof(error))) { fprintf(stderr, "%s\n", error); return 3; }
    if (!mm2_rom_is_expected(&rom, reason, sizeof(reason))) { fprintf(stderr, "%s\n", reason); mm2_rom_free(&rom); return 4; }
    if (!mm2_direct_core_reset(&core, &rom)) { mm2_rom_free(&rom); return 5; }
    if (!mm2_direct_core_advance_frame(&core, 0u, 0u, 0u, &frame) ||
        !frame.completed || frame.end_frame != frame.start_frame + 1u) {
        fprintf(stderr, "frame API failed: trap=%s pc=%04X\n",
                mm2_direct_core_trap_name(core.trap), core.pc);
        mm2_rom_free(&rom); return 6;
    }
    for (i = 0u; i < limit; ++i) {
        if (!mm2_direct_core_step(&core)) {
            fprintf(stderr, "trap=%s identity=%08lX instructions=%llu cycles=%llu\n",
                    mm2_direct_core_trap_name(core.trap), (unsigned long)core.last_identity,
                    (unsigned long long)core.executed_instructions, (unsigned long long)core.cpu_cycles);
            mm2_rom_free(&rom); return 7;
        }
    }
    printf("PASS exact-ROM direct-core smoke: frames=%llu instructions=%llu cycles=%llu pc=%04X bank=%u mapper_commits=%llu\n",
           (unsigned long long)core.ppu_frames,
           (unsigned long long)core.executed_instructions, (unsigned long long)core.cpu_cycles, core.pc,
           mm2_mmc1_prg_bank_16k(&core.mapper, core.pc, 16u), (unsigned long long)core.mapper.commit_count);
    mm2_rom_free(&rom);
    return 0;
}

int main(int argc, char **argv) {
    if (argc == 1) return structural_self_test();
    if (argc == 3) return rom_smoke(argv[1], (uint64_t)strtoull(argv[2], NULL, 10));
    fprintf(stderr, "usage: %s [ROM INSTRUCTION-LIMIT]\n", argv[0]);
    return 2;
}
