#include "mm2_direct_core_internal.h"
#include "mm2_rom.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int fail(const char *message) {
    fprintf(stderr, "FAIL APU accuracy: %s\n", message);
    return 1;
}

static int structural_sweep_dmc_test(void) {
    uint8_t *prg = (uint8_t *)calloc(1u, 0x40000u);
    MM2Rom rom;
    MM2DirectCore core;
    int result = 0;
    if (!prg) return 2;
    memset(&rom, 0, sizeof(rom));
    memset(&core, 0, sizeof(core));
    prg[0x3C000u] = 0x85u;
    rom.prg = prg;
    rom.prg_size = 0x40000u;
    rom.mapper = 1;
    rom.reset_vector = 0xFFE0u;
    if (!mm2_direct_core_reset(&core, &rom)) result = fail("synthetic reset failed");
    if (!result) {
        mm2_direct_core_apu_test_write(&core, 0x4015u, 0x01u);
        mm2_direct_core_apu_test_write(&core, 0x4000u, 0x1Fu);
        mm2_direct_core_apu_test_write(&core, 0x4002u, 0x00u);
        mm2_direct_core_apu_test_write(&core, 0x4003u, 0x01u);
        mm2_direct_core_apu_test_write(&core, 0x4001u, 0x81u);
        mm2_direct_core_apu_test_advance(&core, 29829u);
        if ((core.apu_io[0x02u] |
             ((uint16_t)(core.apu_io[0x03u] & 7u) << 8)) != 0x0180u)
            result = fail("synthetic pulse sweep target mismatch");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic DMC reset failed");
    if (!result) {
        mm2_direct_core_apu_test_write(&core, 0x4010u, 0x8Fu);
        mm2_direct_core_apu_test_write(&core, 0x4011u, 0x40u);
        mm2_direct_core_apu_test_write(&core, 0x4012u, 0x00u);
        mm2_direct_core_apu_test_write(&core, 0x4013u, 0x00u);
        mm2_direct_core_apu_test_write(&core, 0x4015u, 0x10u);
        mm2_direct_core_apu_test_advance(&core, 1u);
        if (core.apu_dmc_sample_buffer != 0x85u ||
            core.apu_dmc_fetches != 1u ||
            core.apu_dmc_stall_cycles != 4u || !core.apu_dmc_irq)
            result = fail("synthetic DMC fetch/stall/IRQ mismatch");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic looping DMC reset failed");
    if (!result) {
        mm2_direct_core_apu_test_write(&core, 0x4010u, 0x4Fu);
        mm2_direct_core_apu_test_write(&core, 0x4012u, 0x00u);
        mm2_direct_core_apu_test_write(&core, 0x4013u, 0x00u);
        mm2_direct_core_apu_test_write(&core, 0x4015u, 0x10u);
        mm2_direct_core_apu_test_advance(&core, 6000u);
        if (core.apu_dmc_fetches < 2u || core.apu_dmc_irq)
            result = fail("synthetic looping DMC did not restart cleanly");
        mm2_direct_core_apu_test_write(&core, 0x4015u, 0x00u);
        if (core.apu_dmc_bytes_remaining != 0u ||
            (mm2_apu_read_status(&core) & 0x10u) != 0u)
            result = fail("DMC disable/status behavior is incorrect");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic frame-counter reset failed");
    if (!result) {
        mm2_direct_core_apu_test_advance(&core, 29827u);
        if (core.apu_frame_irq) result = fail("frame IRQ asserted too early");
        mm2_direct_core_apu_test_advance(&core, 1u);
        if (!core.apu_frame_irq ||
            (mm2_apu_read_status(&core) & 0x40u) == 0u ||
            core.apu_frame_irq)
            result = fail("four-step frame IRQ/status clear is incorrect");
        mm2_direct_core_apu_test_advance(&core, 1u);
        if (!core.apu_frame_irq)
            result = fail("frame IRQ was not reasserted on the second IRQ cycle");
        mm2_direct_core_apu_test_write(&core, 0x4017u, 0x40u);
        if (core.apu_frame_irq || !core.apu_frame_irq_inhibit)
            result = fail("$4017 IRQ inhibit did not clear the frame IRQ");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic five-step reset failed");
    if (!result) {
        mm2_direct_core_apu_test_write(&core, 0x4017u, 0x80u);
        mm2_direct_core_apu_test_advance(&core, 3u);
        if (core.apu_frame_mode)
            result = fail("odd-cycle $4017 write applied before four cycles");
        mm2_direct_core_apu_test_advance(&core, 1u);
        if (!core.apu_frame_mode || core.apu_frame_cycle != 0u)
            result = fail("odd-cycle $4017 write did not apply after four cycles");
        mm2_direct_core_apu_test_advance(&core, 40000u);
        if (core.apu_frame_irq)
            result = fail("five-step mode incorrectly generated a frame IRQ");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic CPU IRQ reset failed");
    if (!result) {
        prg[0x3FFFEu] = 0x00u;
        prg[0x3FFFFu] = 0x90u;
        core.pc = 0x8123u;
        core.p = MM2_FLAG_U;
        core.apu_frame_irq = 1u;
        service_irq(&core);
        if (core.pc != 0x9000u || core.s != 0xFAu ||
            core.ram[0x01FDu] != 0x81u || core.ram[0x01FCu] != 0x23u ||
            (core.ram[0x01FBu] & (MM2_FLAG_B | MM2_FLAG_U)) != MM2_FLAG_U ||
            (core.p & MM2_FLAG_I) == 0u || core.cpu_cycles != 14u ||
            core.irq_count != 1u || !core.apu_frame_irq)
            result = fail("CPU maskable IRQ entry sequence is incorrect");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic timer-sequencer reset failed");
    if (!result) {
        core.apu_io[0x02u] = 1u;
        core.apu_io[0x0Au] = 2u;
        core.apu_io[0x15u] = 4u;
        core.apu_length[2] = 1u;
        core.apu_triangle_linear = 1u;
        mm2_direct_core_apu_test_advance(&core, 9u);
        if (core.apu_pulse_phase[0] != 3u ||
            core.apu_pulse_sequence[0] != 5u ||
            core.apu_triangle_phase != 3u ||
            core.apu_triangle_sequence != 3u ||
            core.apu_triangle_output != 12u ||
            core.apu_noise_lfsr != 0x1000u)
            result = fail("CPU-clocked channel timer sequence mismatch");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic nonlinear-mixer reset failed");
    if (!result) {
        core.apu_dmc_output = 127u;
        if (apu_current_mixed_sample(&core) != 11484)
            result = fail("nonlinear TND mixer vector mismatch");
        core.apu_dmc_output = 0u;
        core.apu_io[0x15u] = 3u;
        core.apu_length[0] = core.apu_length[1] = 1u;
        core.apu_io[0x00u] = core.apu_io[0x04u] = 0xDFu;
        core.apu_io[0x01u] = core.apu_io[0x05u] = 0x08u;
        core.apu_io[0x02u] = core.apu_io[0x06u] = 8u;
        core.apu_pulse_sequence[0] = core.apu_pulse_sequence[1] = 0u;
        if (apu_current_mixed_sample(&core) != 5168)
            result = fail("nonlinear pulse mixer vector mismatch");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("synthetic cycle-resampler reset failed");
    if (!result) {
        size_t index;
        unsigned changes = 0u;
        mm2_direct_core_apu_test_write(&core, 0x4015u, 0x01u);
        mm2_direct_core_apu_test_write(&core, 0x4000u, 0x9Fu);
        mm2_direct_core_apu_test_write(&core, 0x4001u, 0x08u);
        mm2_direct_core_apu_test_write(&core, 0x4002u, 0x10u);
        mm2_direct_core_apu_test_write(&core, 0x4003u, 0x00u);
        mm2_direct_core_apu_test_advance(&core, 513u);
        for (index = 1u; index < core.pcm_total_samples; ++index) {
            if (core.pcm_samples[index] != core.pcm_samples[index - 1u])
                changes++;
        }
        if (core.pcm_total_samples != 12u || changes == 0u ||
            core.apu_mix_accumulator_cycles == 0u ||
            core.apu_mix_accumulator_cycles > 41u)
            result = fail("cycle resampler repeated a DMA-sized final state");
    }
    if (!result) puts("PASS structural APU timers/nonlinear mixer/resampler/IRQ self-test");
    free(prg);
    return result;
}

int main(int argc, char **argv) {
    MM2Rom rom;
    MM2DirectCore core;
    char error[256];
    uint64_t expected_samples;
    uint64_t baseline_samples, baseline_crossings;
    uint64_t dmc_fetches, dmc_stalls;
    uint8_t dmc_output;
    int16_t baseline_peak;
    if (argc == 1) return structural_sweep_dmc_test();
    if (argc != 2) {
        fprintf(stderr, "usage: %s EXACT-ROM\n", argv[0]);
        return 2;
    }
    if (!mm2_rom_load(argv[1], &rom, error, sizeof(error)))
        return fail(error);
    if (!mm2_direct_core_reset(&core, &rom))
        return fail("reset rejected exact ROM");

    mm2_direct_core_apu_test_write(&core, 0x4015u, 0x0Fu);
    mm2_direct_core_apu_test_write(&core, 0x4000u, 0xDFu);
    mm2_direct_core_apu_test_write(&core, 0x4002u, 0x80u);
    mm2_direct_core_apu_test_write(&core, 0x4003u, 0x01u);
    mm2_direct_core_apu_test_write(&core, 0x4008u, 0xBFu);
    mm2_direct_core_apu_test_write(&core, 0x400Au, 0x40u);
    mm2_direct_core_apu_test_write(&core, 0x400Bu, 0x01u);
    mm2_direct_core_apu_test_write(&core, 0x400Cu, 0x1Au);
    mm2_direct_core_apu_test_write(&core, 0x400Eu, 0x04u);
    mm2_direct_core_apu_test_write(&core, 0x400Fu, 0x01u);
    mm2_direct_core_apu_test_advance(&core, 20000u);
    expected_samples = (20000ull * 44100ull) / 1789773ull;
    if (core.pcm_total_samples != expected_samples)
        return fail("44.1 kHz sample cadence changed");
    if (core.pcm_peak == 0 || core.apu_pulse_phase[0] == 0u ||
        core.apu_triangle_phase == 0u || core.apu_noise_lfsr == 1u)
        return fail("timer-sequenced pulse/triangle/noise waveform is inactive");
    if (core.pcm_hash != 0xAFF34F312F210308ull) {
        fprintf(stderr, "new timer/nonlinear hash=%016llX peak=%d dc=%lld "
                "crossings=%llu\n", (unsigned long long)core.pcm_hash,
                (int)core.pcm_peak, (long long)core.pcm_dc_sum,
                (unsigned long long)core.pcm_zero_crossings);
        return fail("short waveform identity changed");
    }
    baseline_samples = core.pcm_total_samples;
    baseline_crossings = core.pcm_zero_crossings;
    baseline_peak = core.pcm_peak;

    if (!mm2_direct_core_reset(&core, &rom))
        return fail("reset before sweep test failed");
    mm2_direct_core_apu_test_write(&core, 0x4015u, 0x01u);
    mm2_direct_core_apu_test_write(&core, 0x4000u, 0x1Fu);
    mm2_direct_core_apu_test_write(&core, 0x4002u, 0x00u);
    mm2_direct_core_apu_test_write(&core, 0x4003u, 0x01u);
    mm2_direct_core_apu_test_write(&core, 0x4001u, 0x81u);
    mm2_direct_core_apu_test_advance(&core, 29829u);
    if ((core.apu_io[0x02u] |
         ((uint16_t)(core.apu_io[0x03u] & 7u) << 8)) != 0x0180u ||
        core.apu_sweep_reload[0] != 0u)
        return fail("pulse sweep divider did not apply the expected target period");

    if (!mm2_direct_core_reset(&core, &rom))
        return fail("reset before DMC test failed");
    mm2_direct_core_apu_test_write(&core, 0x4010u, 0x8Fu);
    mm2_direct_core_apu_test_write(&core, 0x4011u, 0x40u);
    mm2_direct_core_apu_test_write(&core, 0x4012u, 0x00u);
    mm2_direct_core_apu_test_write(&core, 0x4013u, 0x00u);
    mm2_direct_core_apu_test_write(&core, 0x4015u, 0x10u);
    mm2_direct_core_apu_test_advance(&core, 1u);
    if (core.apu_dmc_fetches != 1u || core.apu_dmc_stall_cycles != 4u ||
        core.cpu_cycles != 11u || core.apu_dmc_address != 0xC001u ||
        core.apu_dmc_bytes_remaining != 0u ||
        core.apu_dmc_sample_buffer != rom.prg[0x3C000u] ||
        !core.apu_dmc_irq || (mm2_apu_read_status(&core) & 0x80u) == 0u)
        return fail("DMC fetch, address, IRQ or four-cycle CPU stall is incorrect");
    mm2_direct_core_apu_test_advance(&core, 5000u);
    if (core.apu_dmc_output == 0x40u || core.apu_dmc_bits_remaining == 0u)
        return fail("DMC shift/output unit did not consume the fetched sample");
    mm2_direct_core_apu_test_write(&core, 0x4010u, 0x0Fu);
    if (core.apu_dmc_irq)
        return fail("disabling DMC IRQ did not clear its pending flag");
    dmc_fetches = core.apu_dmc_fetches;
    dmc_stalls = core.apu_dmc_stall_cycles;
    dmc_output = core.apu_dmc_output;

    if (!mm2_direct_core_reset(&core, &rom))
        return fail("reset before integrated CPU IRQ test failed");
    core.p = (uint8_t)(core.p & (uint8_t)~MM2_FLAG_I);
    core.apu_frame_irq = 1u;
    if (!mm2_direct_core_step(&core) || core.irq_count != 1u ||
        core.s != 0xFAu || core.ram[0x01FDu] != 0xFFu ||
        core.ram[0x01FCu] != 0xE0u ||
        (core.ram[0x01FBu] & (MM2_FLAG_B | MM2_FLAG_U)) != MM2_FLAG_U ||
        (core.p & MM2_FLAG_I) == 0u)
        return fail("instruction-boundary CPU IRQ delivery is incorrect");

    printf("PASS APU timer/mixer/DMC/IRQ accuracy: baseline_samples=%llu peak=%d "
           "crossings=%llu baseline_hash=%016llX dmc_fetches=%llu "
           "dmc_stalls=%llu dmc_output=%u\n",
           (unsigned long long)baseline_samples, (int)baseline_peak,
           (unsigned long long)baseline_crossings,
           (unsigned long long)0xAFF34F312F210308ull,
           (unsigned long long)dmc_fetches,
           (unsigned long long)dmc_stalls,
           (unsigned)dmc_output);
    mm2_rom_free(&rom);
    return 0;
}
