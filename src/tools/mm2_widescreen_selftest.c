#include "internal/mm2_direct_core_internal.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fail(const char *message) {
    fprintf(stderr, "wide-screen self-test failed: %s\n", message);
    return 1;
}

static int center_matches(const MM2DirectCore *core, const uint8_t *wide,
                          const MM2PresentationInfo *info) {
    unsigned y;
    for (y = 0u; y < MM2_DIRECT_CORE_FRAME_HEIGHT; ++y) {
        if (memcmp(wide + (size_t)y * info->width + info->native_x,
                   core->framebuffer +
                       (size_t)y * MM2_DIRECT_CORE_FRAME_WIDTH,
                   MM2_DIRECT_CORE_FRAME_WIDTH) != 0)
            return 0;
    }
    return 1;
}

int main(void) {
    MM2DirectCore core;
    MM2PresentationInfo info;
    uint8_t frame[MM2_PRESENTATION_MAX_FRAME_PIXELS];
    uint32_t bgra[MM2_PRESENTATION_MAX_FRAME_PIXELS];
    size_t index;

    memset(&core, 0, sizeof(core));
    for (index = 0u; index < MM2_DIRECT_CORE_FRAME_PIXELS; ++index)
        core.framebuffer[index] = (uint8_t)(index & 0x3Fu);

    if (!mm2_direct_core_presentation_info(&core, 0, &info) ||
        info.width != 256u || info.height != 240u || info.native_x != 0u ||
        info.mode != MM2_PRESENTATION_NATIVE_4_3 ||
        info.reason != MM2_PRESENTATION_REASON_WIDE_DISABLED)
        return fail("disabled descriptor");
    if (!mm2_direct_core_presentation_copy_indexed(
            &core, 0, frame, sizeof(frame), &info) ||
        memcmp(frame, core.framebuffer, MM2_DIRECT_CORE_FRAME_PIXELS) != 0)
        return fail("disabled native copy identity");

    if (!mm2_direct_core_presentation_copy_indexed(
            &core, 1, frame, sizeof(frame), &info) ||
        info.width != 398u || info.native_x != 71u ||
        info.mode != MM2_PRESENTATION_NATIVE_4_3 ||
        info.reason != MM2_PRESENTATION_REASON_FIXED_SCREEN_OR_MENU ||
        frame[0] != 0x0Fu || !center_matches(&core, frame, &info))
        return fail("unsupported scene centered native canvas");

    core.ram[0x2Au] = 6u;
    core.ram[0x29u] = 0x0Eu;
    core.ram[0x6C0u] = 28u;
    core.ram[0x20u] = 19u;
    core.wide_layout_mode = 1u;
    core.ppu_mask = 0x08u;
    core.palette[0] = 0x21u;
    if (!mm2_direct_core_presentation_copy_indexed(
            &core, 1, frame, sizeof(frame), &info) ||
        info.mode != MM2_PRESENTATION_WIDE_GAMEPLAY ||
        info.reason != MM2_PRESENTATION_REASON_WIDE_GAMEPLAY ||
        frame[0] != 0x21u || !center_matches(&core, frame, &info))
        return fail("eligible horizontal gameplay wide frame");
    if (!mm2_direct_core_presentation_copy_bgra(
            &core, 1, bgra, MM2_PRESENTATION_MAX_FRAME_PIXELS, &info) ||
        info.mode != MM2_PRESENTATION_WIDE_GAMEPLAY)
        return fail("wide BGRA copy");

    core.ram[0x20u] = 9u;
    core.wide_layout_mode = 2u;
    core.ram[0x08u] = 0x11u;
    core.ram[0x09u] = 0x22u;
    core.ram[0x0Au] = 0x33u;
    core.ram[0x0Bu] = 0x44u;
    mm2_direct_core_set_wide_screen_enabled(&core, 1);
    ppu_wide_expand_object_window(&core);
    if (!mm2_direct_core_presentation_copy_indexed(
            &core, 1, frame, sizeof(frame), &info) ||
        info.mode != MM2_PRESENTATION_NATIVE_4_3 ||
        info.reason != MM2_PRESENTATION_REASON_UNSUPPORTED_LAYOUT ||
        core.ram[0x08u] != 0x11u || core.ram[0x09u] != 0x22u ||
        core.ram[0x0Au] != 0x33u || core.ram[0x0Bu] != 0x44u ||
        !center_matches(&core, frame, &info))
        return fail("vertical layout native fallback");

    mm2_direct_core_set_wide_screen_enabled(&core, 1);
    core.ram[0x20u] = 4u;
    core.ram[0x1Fu] = 247u;
    core.wide_layout_mode = 1u;
    ppu_wide_expand_object_window(&core);
    if (!mm2_direct_core_wide_screen_enabled(&core) ||
        core.ram[0x0Bu] != 4u || core.ram[0x0Au] != 176u ||
        core.ram[0x09u] != 6u || core.ram[0x08u] != 61u)
        return fail("71-pixel object activation margins");

    memset(core.chr_ram, 0, sizeof(core.chr_ram));
    for (index = 0u; index < 8u; ++index) core.chr_ram[index] = 0xFFu;
    core.palette[0x11u] = 0x30u;
    core.ppu_mask = 0x18u;
    core.wide_sprite_count = 1u;
    core.wide_sprites[0].x = -2;
    core.wide_sprites[0].y = 9u;
    core.wide_sprites[0].tile = 0u;
    core.wide_sprites[0].attributes = 0u;
    if (!mm2_direct_core_presentation_copy_indexed(
            &core, 1, frame, sizeof(frame), &info) ||
        frame[10u * info.width + 69u] != 0x30u ||
        frame[10u * info.width + 70u] != 0x30u ||
        !center_matches(&core, frame, &info))
        return fail("signed sprite capture in left margin");

    core.x = 2u;
    core.ram[0x402u] = 35u;
    core.ram[0x442u] = 6u;
    core.ram[0x462u] = 15u;
    if (!ppu_wide_keep_projectile_active(&core))
        return fail("Mega Buster retained in right margin");
    core.ram[0x462u] = 100u;
    if (ppu_wide_keep_projectile_active(&core))
        return fail("Mega Buster retained beyond wide boundary");

    core.ram[0x6C1u] = 28u;
    if (!mm2_direct_core_presentation_copy_indexed(
            &core, 1, frame, sizeof(frame), &info) ||
        info.mode != MM2_PRESENTATION_NATIVE_4_3 ||
        info.reason != MM2_PRESENTATION_REASON_BOSS_APPROACH_OR_ROOM ||
        frame[0] != 0x0Fu || !center_matches(&core, frame, &info))
        return fail("boss approach native fallback");

    core.ram[0x6C1u] = 0u;
    core.ram[0x29u] = 0x0Du;
    core.ram[0x08u] = 0x11u;
    core.ram[0x09u] = 0x22u;
    core.ram[0x0Au] = 0x33u;
    core.ram[0x0Bu] = 0x44u;
    ppu_wide_expand_object_window(&core);
    if (!mm2_direct_core_presentation_info(&core, 1, &info) ||
        info.reason != MM2_PRESENTATION_REASON_FIXED_SCREEN_OR_MENU ||
        core.ram[0x08u] != 0x11u || core.ram[0x09u] != 0x22u ||
        core.ram[0x0Au] != 0x33u || core.ram[0x0Bu] != 0x44u)
        return fail("Start/menu bank native fallback");

    core.ram[0x29u] = 0x0Eu;
    core.ram[0x1Bu] = 1u;
    if (!mm2_direct_core_presentation_info(&core, 1, &info) ||
        info.reason != MM2_PRESENTATION_REASON_TRANSITION)
        return fail("transition native fallback");

    core.ram[0x1Bu] = 0u;
    core.ram[0x6C0u] = 0u;
    if (!mm2_direct_core_presentation_info(&core, 1, &info) ||
        info.reason != MM2_PRESENTATION_REASON_PLAYER_INACTIVE)
        return fail("inactive player native fallback");

    if (mm2_direct_core_presentation_copy_indexed(
            &core, 1, frame, MM2_PRESENTATION_MAX_FRAME_PIXELS - 1u, &info))
        return fail("short output buffer accepted");

    puts("PASS wide presentation: native identity, 398x240 horizontal gameplay, "
         "Start/menu/transition/boss 4:3 fallbacks");
    return 0;
}
