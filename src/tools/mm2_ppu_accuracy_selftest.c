#include "mm2_direct_core_internal.h"
#include "mm2_rom.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int fail(const char *message) {
    fprintf(stderr, "FAIL PPU sprite accuracy: %s\n", message);
    return 1;
}

int main(void) {
    uint8_t *prg = (uint8_t *)calloc(1u, 0x40000u);
    MM2Rom rom;
    MM2DirectCore core;
    unsigned sprite;
    unsigned tick;
    unsigned overflow_dot = 0u;
    uint8_t *presentation = NULL;
    int result = 0;
    if (!prg) return 2;
    memset(&rom, 0, sizeof(rom));
    rom.prg = prg;
    rom.prg_size = 0x40000u;
    rom.mapper = 1;
    rom.reset_vector = 0xFFE0u;
    if (!mm2_direct_core_reset(&core, &rom)) result = fail("reset failed");
    if (!result) {
        memset(core.oam, 0xFF, sizeof(core.oam));
        for (sprite = 0u; sprite < 9u; ++sprite) {
            core.oam[sprite * 4u] = 0u;
            core.oam[sprite * 4u + 1u] = 0u;
            core.oam[sprite * 4u + 2u] = 0u;
            core.oam[sprite * 4u + 3u] = (uint8_t)(sprite * 8u);
        }
        core.chr_ram[0u] = 0x80u;
        core.chr_ram[1u] = 0x80u;
        core.ppu_mask = 0x1Eu;
        for (tick = 0u; tick < 341u; ++tick) {
            unsigned dot = core.ppu_dot;
            ppu_tick(&core);
            if (overflow_dot == 0u && (core.ppu_status & 0x20u) != 0u)
                overflow_dot = dot;
        }
        if (overflow_dot != 130u || core.sprite_overflow_scanlines != 1u ||
            core.ppu_sprite_count_current != 8u ||
            core.ppu_sprite_count_next != 8u ||
            !core.ppu_sprite0_current || core.ppu_scanline != 1u ||
            core.ppu_dot != 0u)
            result = fail("dot-window OAM evaluation/overflow mismatch");
    }
    if (!result) {
        ppu_tick(&core);
        if ((core.ppu_status & 0x40u) != 0u)
            result = fail("sprite-zero hit asserted before its visible dot");
        ppu_tick(&core);
        if ((core.ppu_status & 0x40u) == 0u || core.sprite_zero_hits != 1u)
            result = fail("sprite-zero hit did not assert on the visible dot");
    }
    if (!result) {
        core.ppu_scanline = 261u;
        core.ppu_dot = 1u;
        ppu_tick(&core);
        if ((core.ppu_status & 0x60u) != 0u)
            result = fail("pre-render dot did not clear sprite flags");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("disabled-render reset failed");
    if (!result) {
        memset(core.oam, 0, 9u * 4u);
        for (tick = 0u; tick < 257u; ++tick) ppu_tick(&core);
        if ((core.ppu_status & 0x20u) != 0u ||
            core.ppu_sprite_count_next != 0u)
            result = fail("sprite evaluation ran while rendering was disabled");
    }
    if (!result && !mm2_direct_core_reset(&core, &rom))
        result = fail("completed-frame latch reset failed");
    if (!result) {
        MM2PresentationInfo info;
        presentation = (uint8_t *)malloc(MM2_PRESENTATION_MAX_FRAME_PIXELS);
        if (!presentation) result = fail("presentation allocation failed");
        if (!result) {
            memset(core.ciram, 1, 0x3C0u);
            memset(core.ciram + 0x3C0u, 0, 0x40u);
            memset(core.chr_ram + 16u, 0xFF, 8u);
            core.palette[0] = 0x0Fu;
            core.palette[1] = 0x21u;
            core.ppu_ctrl = 0u;
            core.ppu_mask = 0x08u;
            core.ram[0x29u] = 0x0Eu;
            core.ram[0x6C0u] = 16u;
            core.wide_layout_mode = 1u;
            core.wide_screen_enabled = 1u;
            core.ppu_scanline = 239u;
            core.ppu_dot = 340u;
            ppu_tick(&core);
            if (core.ppu_scanline != 240u || core.ppu_dot != 0u ||
                core.framebuffer[0] != 0x21u)
                result = fail("visible frame was not published at scanline 240");
        }
        if (!result) {
            memset(core.chr_ram, 0, sizeof(core.chr_ram));
            memset(core.ciram, 0, sizeof(core.ciram));
            core.palette[1] = 0x0Fu;
            core.ppu_mask = 0u;
            while (core.ppu_frames == 0u) ppu_tick(&core);
            if (!ppu_presentation_copy_indexed(&core, 1, presentation,
                    MM2_PRESENTATION_MAX_FRAME_PIXELS, &info) ||
                info.mode != MM2_PRESENTATION_WIDE_GAMEPLAY ||
                info.width != MM2_PRESENTATION_WIDE_FRAME_WIDTH ||
                presentation[0] != 0x21u ||
                presentation[MM2_PRESENTATION_WIDE_MARGIN] != 0x21u ||
                core.framebuffer[0] != 0x21u)
                result = fail("vblank writes contaminated the completed presentation");
        }
    }
    if (!result)
        puts("PASS dot-timed sprites and scanline-240 presentation latch");
    free(presentation);
    free(prg);
    return result;
}
