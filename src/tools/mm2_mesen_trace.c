#include "mm2_direct_core_internal.h"
#include "mm2_rom.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    uint8_t *prg;
    MM2Rom rom;
    MM2DirectCore c;
    FILE *out;
    unsigned sprite;
    unsigned tick;
    unsigned overflow_dot = 0u;
    unsigned irq_before;
    unsigned irq_cycle;
    unsigned irq_status;
    unsigned five_mode_after_three;
    unsigned five_delay_after_three;
    unsigned five_mode_after_four;
    unsigned five_cycle_after_apply;
    unsigned pulse_ticks;
    unsigned pulse_position;
    unsigned triangle_ticks;
    unsigned triangle_position;
    unsigned triangle_output;
    unsigned noise_lfsr;
    int pulse_mix;
    int tnd_mix;
    unsigned cpu_vector;
    unsigned cpu_sp;
    unsigned cpu_stack_hi;
    unsigned cpu_stack_lo;
    unsigned cpu_stack_p;
    unsigned cpu_cycles;
    unsigned cpu_irq_count;
    if (argc != 2) {
        fprintf(stderr, "usage: %s OUTPUT.json\n", argv[0]);
        return 2;
    }
    prg = (uint8_t *)calloc(1u, 0x40000u);
    if (!prg) return 3;
    memset(&rom, 0, sizeof(rom));
    rom.prg = prg;
    rom.prg_size = 0x40000u;
    rom.mapper = 1;
    rom.reset_vector = 0xFFE0u;
    prg[0x3FFFEu] = 0x00u;
    prg[0x3FFFFu] = 0x90u;

    if (!mm2_direct_core_reset(&c, &rom)) { free(prg); return 4; }
    c.pc = 0x8123u;
    c.p = MM2_FLAG_U;
    c.apu_frame_irq = 1u;
    service_irq(&c);
    cpu_vector = c.pc;
    cpu_sp = c.s;
    cpu_stack_hi = c.ram[0x01FDu];
    cpu_stack_lo = c.ram[0x01FCu];
    cpu_stack_p = c.ram[0x01FBu];
    cpu_cycles = (unsigned)c.cpu_cycles;
    cpu_irq_count = (unsigned)c.irq_count;

    if (!mm2_direct_core_reset(&c, &rom)) { free(prg); return 4; }
    apu_advance(&c, 29827u);
    irq_before = c.apu_frame_irq;
    apu_advance(&c, 1u);
    irq_cycle = c.apu_frame_cycle;
    irq_status = mm2_apu_read_status(&c);
    mm2_apu_write_register(&c, 0x4017u, 0x80u);
    apu_advance(&c, 3u);
    five_mode_after_three = c.apu_frame_mode;
    five_delay_after_three = c.apu_frame_write_delay;
    apu_advance(&c, 1u);
    five_mode_after_four = c.apu_frame_mode;
    five_cycle_after_apply = c.apu_frame_cycle;

    if (!mm2_direct_core_reset(&c, &rom)) { free(prg); return 4; }
    c.apu_io[0x02u] = 1u;
    c.apu_io[0x0Au] = 2u;
    c.apu_io[0x15u] = 4u;
    c.apu_length[2] = 1u;
    c.apu_triangle_linear = 1u;
    apu_advance(&c, 9u);
    pulse_ticks = c.apu_pulse_phase[0];
    pulse_position = c.apu_pulse_sequence[0];
    triangle_ticks = c.apu_triangle_phase;
    triangle_position = c.apu_triangle_sequence;
    triangle_output = c.apu_triangle_output;
    noise_lfsr = c.apu_noise_lfsr;

    if (!mm2_direct_core_reset(&c, &rom)) { free(prg); return 4; }
    c.apu_dmc_output = 127u;
    tnd_mix = apu_current_mixed_sample(&c);
    c.apu_dmc_output = 0u;
    c.apu_io[0x15u] = 3u;
    c.apu_length[0] = c.apu_length[1] = 1u;
    c.apu_io[0x00u] = c.apu_io[0x04u] = 0xDFu;
    c.apu_io[0x01u] = c.apu_io[0x05u] = 0x08u;
    c.apu_io[0x02u] = c.apu_io[0x06u] = 8u;
    pulse_mix = apu_current_mixed_sample(&c);

    if (!mm2_direct_core_reset(&c, &rom)) { free(prg); return 4; }
    memset(c.oam, 0xFF, sizeof(c.oam));
    for (sprite = 0u; sprite < 9u; ++sprite) {
        c.oam[sprite * 4u] = 0u;
        c.oam[sprite * 4u + 1u] = 0u;
        c.oam[sprite * 4u + 2u] = 0u;
        c.oam[sprite * 4u + 3u] = (uint8_t)(sprite * 8u);
    }
    c.chr_ram[0u] = 0x80u;
    c.chr_ram[1u] = 0x80u;
    c.ppu_mask = 0x1Eu;
    for (tick = 0u; tick < 341u; ++tick) {
        unsigned dot = c.ppu_dot;
        ppu_tick(&c);
        if (overflow_dot == 0u && (c.ppu_status & 0x20u) != 0u)
            overflow_dot = dot;
    }
    ppu_tick(&c);
    ppu_tick(&c);

    out = fopen(argv[1], "wb");
    if (!out) { free(prg); return 5; }
    fprintf(out,
        "{\n"
        "  \"format\": \"mega-man-2-mesen-differential-trace-v1\",\n"
        "  \"cpu_irq\": {\"vector\": \"%04X\", \"sp\": %u, "
        "\"stack_hi\": \"%02X\", \"stack_lo\": \"%02X\", "
        "\"stack_p\": \"%02X\", \"cycles\": %u, \"count\": %u},\n"
        "  \"apu_frame\": {\"irq_before_29828\": %u, "
        "\"irq_cycle\": %u, \"status_at_irq\": \"%02X\", "
        "\"five_mode_after_3\": %u, \"delay_after_3\": %u, "
        "\"five_mode_after_4\": %u, \"cycle_after_apply\": %u},\n"
        "  \"apu_timers\": {\"pulse_ticks\": %u, \"pulse_position\": %u, "
        "\"triangle_ticks\": %u, \"triangle_position\": %u, "
        "\"triangle_output\": %u, \"noise_lfsr\": \"%04X\", "
        "\"pulse_mix_30\": %d, \"tnd_mix_dmc_127\": %d},\n"
        "  \"ppu_sprites\": {\"overflow_dot\": %u, \"selected\": %u, "
        "\"sprite0_selected\": %u, \"hit_scanline\": %u, "
        "\"hit_dot\": %u, \"status\": \"%02X\"}\n"
        "}\n",
        cpu_vector, cpu_sp, cpu_stack_hi, cpu_stack_lo, cpu_stack_p,
        cpu_cycles, cpu_irq_count,
        irq_before, irq_cycle, irq_status, five_mode_after_three,
        five_delay_after_three, five_mode_after_four, five_cycle_after_apply,
        pulse_ticks, pulse_position, triangle_ticks, triangle_position,
        triangle_output, noise_lfsr, pulse_mix, tnd_mix, overflow_dot,
        c.ppu_sprite_count_current, c.ppu_sprite0_current,
        c.ppu_scanline, c.ppu_dot - 1u, c.ppu_status);
    fclose(out);
    free(prg);
    return 0;
}
