#include "mm2_direct_core_internal.h"
#include "mm2_rom.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const uint8_t rgb[64][3] = {
    {84,84,84},{0,30,116},{8,16,144},{48,0,136},{68,0,100},{92,0,48},{84,4,0},{60,24,0},{32,42,0},{8,58,0},{0,64,0},{0,60,0},{0,50,60},{0,0,0},{0,0,0},{0,0,0},
    {152,150,152},{8,76,196},{48,50,236},{92,30,228},{136,20,176},{160,20,100},{152,34,32},{120,60,0},{84,90,0},{40,114,0},{8,124,0},{0,118,40},{0,102,120},{0,0,0},{0,0,0},{0,0,0},
    {236,238,236},{76,154,236},{120,124,236},{176,98,236},{228,84,236},{236,88,180},{236,106,100},{212,136,32},{160,170,0},{116,196,0},{76,208,32},{56,204,108},{56,180,204},{60,60,60},{0,0,0},{0,0,0},
    {236,238,236},{168,204,236},{188,188,236},{212,178,236},{236,174,236},{236,174,212},{236,180,176},{228,196,144},{204,210,120},{180,222,120},{168,226,144},{152,226,180},{160,214,228},{160,162,160},{0,0,0},{0,0,0}
};

typedef struct SnapshotHeader {
    char magic[8];
    uint32_t version;
    uint32_t core_size;
    char rom_sha256[65];
} SnapshotHeader;

static void put16(uint8_t *p, unsigned value) {
    p[0] = (uint8_t)value;
    p[1] = (uint8_t)(value >> 8);
}

static void put32(uint8_t *p, uint32_t value) {
    p[0] = (uint8_t)value;
    p[1] = (uint8_t)(value >> 8);
    p[2] = (uint8_t)(value >> 16);
    p[3] = (uint8_t)(value >> 24);
}

static const char *reason_name(MM2PresentationReason reason) {
    switch (reason) {
        case MM2_PRESENTATION_REASON_WIDE_DISABLED: return "wide-disabled";
        case MM2_PRESENTATION_REASON_WIDE_GAMEPLAY: return "wide-gameplay";
        case MM2_PRESENTATION_REASON_UNSUPPORTED_STAGE: return "unsupported-stage";
        case MM2_PRESENTATION_REASON_FIXED_SCREEN_OR_MENU: return "fixed-screen-or-menu";
        case MM2_PRESENTATION_REASON_PLAYER_INACTIVE: return "player-inactive";
        case MM2_PRESENTATION_REASON_TRANSITION: return "transition";
        case MM2_PRESENTATION_REASON_BOSS_APPROACH_OR_ROOM: return "boss-approach-or-room";
        case MM2_PRESENTATION_REASON_UNSUPPORTED_LAYOUT: return "unsupported-layout";
        default: return "unknown";
    }
}

static uint8_t gameplay_buttons(uint64_t local_frame, unsigned policy) {
    static const unsigned periods[8] =
        {44u, 52u, 60u, 68u, 76u, 88u, 104u, 120u};
    unsigned base_policy = policy & 63u;
    unsigned direction = policy / 64u;
    unsigned jump_period = periods[base_policy & 7u];
    unsigned phase = (base_policy & 8u) != 0u ? jump_period / 2u : 0u;
    unsigned jump_hold = (base_policy & 16u) != 0u ? 32u : 22u;
    uint8_t buttons;
    switch (direction) {
        case 0u: buttons = 0x80u; break;
        case 1u: buttons = 0u; break;
        case 2u: buttons = 0x40u; break;
        case 3u: buttons = 0x20u; break;
        case 4u: buttons = 0xA0u; break;
        case 5u: buttons = 0x60u; break;
        case 6u: buttons = 0x10u; break;
        default: buttons = 0x90u; break;
    }
    if ((local_frame + phase) % jump_period < jump_hold) buttons |= 0x01u;
    if (local_frame % ((base_policy & 32u) != 0u ? 10u :
                      ((base_policy & 8u) != 0u ? 22u : 34u)) < 3u)
        buttons |= 0x02u;
    return buttons;
}

static unsigned visible_margin_piece_count(const MM2DirectCore *core) {
    unsigned index;
    unsigned count = 0u;
    for (index = 0u; index < core->wide_sprite_count; ++index) {
        int left = core->wide_sprites[index].x;
        if ((left < 0 && left + 7 >= -(int)MM2_PRESENTATION_WIDE_MARGIN) ||
            (left < (int)(MM2_DIRECT_CORE_FRAME_WIDTH +
                          MM2_PRESENTATION_WIDE_MARGIN) &&
             left + 7 >= (int)MM2_DIRECT_CORE_FRAME_WIDTH))
            count++;
    }
    return count;
}

static int has_active_margin_object(const MM2DirectCore *core) {
    unsigned slot;
    for (slot = 1u; slot < 32u; ++slot) {
        int page_delta;
        int screen_x;
        if ((core->ram[0x420u + slot] & 0x80u) == 0u) continue;
        page_delta = (int)(int8_t)(uint8_t)(
            core->ram[0x440u + slot] - core->ram[0x20u]);
        screen_x = page_delta * 256 + (int)core->ram[0x460u + slot] -
                   (int)core->ram[0x1Fu];
        if ((screen_x >= -(int)MM2_PRESENTATION_WIDE_MARGIN && screen_x < 0) ||
            (screen_x >= (int)MM2_DIRECT_CORE_FRAME_WIDTH &&
             screen_x < (int)(MM2_DIRECT_CORE_FRAME_WIDTH +
                              MM2_PRESENTATION_WIDE_MARGIN)))
            return 1;
    }
    return 0;
}

static int load_route_snapshot(const char *path, MM2DirectCore *core,
                               const MM2Rom *rom) {
    SnapshotHeader header;
    FILE *file = fopen(path, "rb");
    int ok;
    if (!file) return 0;
    ok = fread(&header, 1u, sizeof(header), file) == sizeof(header) &&
         memcmp(header.magic, "MM2PARTS", 8u) == 0 &&
         header.version == 14u &&
         header.core_size <= sizeof(*core) &&
         strcmp(header.rom_sha256, rom->sha256) == 0;
    if (ok) {
        memset(core, 0, sizeof(*core));
        ok = fread(core, 1u, header.core_size, file) == header.core_size &&
             fgetc(file) == EOF;
    }
    if (fclose(file) != 0) ok = 0;
    if (!ok) return 0;
    core->prg = rom->prg;
    core->prg_size = rom->prg_size;
    core->runtime_hook = NULL;
    core->runtime_hook_user = NULL;
    core->runtime_hook_mask = 0u;
    core->runtime_hook_stop_requested = 0u;
    core->runtime_hook_stopped = 0u;
    core->runtime_hook_dispatching = 0u;
    return 1;
}

static int write_bmp(const char *path, const uint8_t *pixels,
                     uint32_t width, uint32_t height) {
    uint8_t header[54] = {0};
    uint8_t padding[3] = {0, 0, 0};
    const uint32_t row_bytes = width * 3u;
    const uint32_t row_padding = (4u - (row_bytes & 3u)) & 3u;
    const uint32_t image_bytes = (row_bytes + row_padding) * height;
    FILE *file = fopen(path, "wb");
    int y;
    uint32_t x;
    int ok = file != NULL;
    if (!ok) return 0;
    header[0] = 'B';
    header[1] = 'M';
    put32(header + 2, 54u + image_bytes);
    put32(header + 10, 54u);
    put32(header + 14, 40u);
    put32(header + 18, width);
    put32(header + 22, height);
    put16(header + 26, 1u);
    put16(header + 28, 24u);
    put32(header + 34, image_bytes);
    ok = fwrite(header, 1u, sizeof(header), file) == sizeof(header);
    for (y = (int)height - 1; ok && y >= 0; --y) {
        for (x = 0u; ok && x < width; ++x) {
            const uint8_t *color = rgb[pixels[(size_t)y * width + x] & 0x3Fu];
            uint8_t bgr[3] = {color[2], color[1], color[0]};
            ok = fwrite(bgr, 1u, sizeof(bgr), file) == sizeof(bgr);
        }
        if (ok && row_padding != 0u)
            ok = fwrite(padding, 1u, row_padding, file) == row_padding;
    }
    if (fclose(file) != 0) ok = 0;
    return ok;
}

static int write_json(const char *path, const MM2DirectCore *core,
                      const MM2PresentationInfo *info,
                      unsigned trace_margin_frames,
                      unsigned trace_margin_sprite_pieces,
                      unsigned trace_active_object_margin_frames) {
    FILE *file = fopen(path, "wb");
    unsigned slot;
    unsigned written = 0u;
    int ok;
    if (!file) return 0;
    ok = fprintf(file,
        "{\n"
        "  \"frame\": %llu,\n"
        "  \"pc\": \"%04X\",\n"
        "  \"mode\": \"%s\",\n"
        "  \"reason\": \"%s\",\n"
        "  \"width\": %u,\n"
        "  \"height\": %u,\n"
        "  \"native_x\": %u,\n"
        "  \"trace_margin_frames\": %u,\n"
        "  \"trace_margin_sprite_pieces\": %u,\n"
        "  \"trace_active_object_margin_frames\": %u,\n"
        "  \"ram\": {\n"
        "    \"screen_0020\": %u,\n"
        "    \"bank_0029\": %u,\n"
        "    \"stage_002A\": %u,\n"
        "    \"update_001B\": %u,\n"
        "    \"door_0054\": %u,\n"
        "    \"boss_ai_00B1\": %u,\n"
        "    \"player_hp_06C0\": %u,\n"
        "    \"boss_hp_06C1\": %u\n"
        "  },\n"
        "  \"objects\": [\n",
        (unsigned long long)mm2_direct_core_frame_count(core),
        mm2_direct_core_program_counter(core),
        info->mode == MM2_PRESENTATION_WIDE_GAMEPLAY ? "wide-gameplay" : "native-4:3",
        reason_name(info->reason), info->width, info->height, info->native_x,
        trace_margin_frames, trace_margin_sprite_pieces,
        trace_active_object_margin_frames,
        mm2_direct_core_ram_peek(core, 0x20u),
        mm2_direct_core_ram_peek(core, 0x29u),
        mm2_direct_core_ram_peek(core, 0x2Au),
        mm2_direct_core_ram_peek(core, 0x1Bu),
        mm2_direct_core_ram_peek(core, 0x54u),
        mm2_direct_core_ram_peek(core, 0xB1u),
        mm2_direct_core_ram_peek(core, 0x6C0u),
        mm2_direct_core_ram_peek(core, 0x6C1u)) > 0;
    for (slot = 0u; ok && slot < 32u; ++slot) {
        uint8_t pointer = mm2_direct_core_ram_peek(
            core, (uint16_t)(0x400u + slot));
        uint8_t flag = mm2_direct_core_ram_peek(
            core, (uint16_t)(0x420u + slot));
        uint8_t page = mm2_direct_core_ram_peek(
            core, (uint16_t)(0x440u + slot));
        uint8_t x = mm2_direct_core_ram_peek(
            core, (uint16_t)(0x460u + slot));
        uint8_t y = mm2_direct_core_ram_peek(
            core, (uint16_t)(0x4A0u + slot));
        int camera_world =
            (int)mm2_direct_core_ram_peek(core, 0x20u) * 256 +
            (int)mm2_direct_core_ram_peek(core, 0x1Fu);
        int object_world = (int)page * 256 + (int)x;
        if (slot != 0u && pointer == 0u && flag == 0u) continue;
        ok = fprintf(file,
            "%s    {\"slot\": %u, \"pointer\": %u, \"flag\": %u, "
            "\"page\": %u, \"x\": %u, \"y\": %u, \"screen_x\": %d}",
            written ? ",\n" : "", slot, pointer, flag, page, x, y,
            object_world - camera_world) > 0;
        ++written;
    }
    if (ok) ok = fprintf(file, "\n  ],\n  \"captured_margin_sprites\": [\n") > 0;
    for (slot = 0u; ok && slot < core->wide_sprite_count; ++slot) {
        const MM2WideSpriteCapture *capture = &core->wide_sprites[slot];
        ok = fprintf(file,
            "%s    {\"x\": %d, \"y\": %u, \"tile\": %u, "
            "\"attributes\": %u, \"oam_index\": %u, \"object_slot\": %u}",
            slot ? ",\n" : "", (int)capture->x, capture->y,
            capture->tile, capture->attributes, capture->oam_index,
            capture->object_slot) > 0;
    }
    if (ok) ok = fprintf(file, "\n  ],\n  \"oam\": [\n") > 0;
    for (slot = 0u; ok && slot < 64u; ++slot) {
        unsigned offset = slot * 4u;
        ok = fprintf(file,
            "%s    {\"index\": %u, \"y\": %u, \"tile\": %u, "
            "\"attributes\": %u, \"x\": %u}",
            slot ? ",\n" : "", slot, core->oam[offset],
            core->oam[offset + 1u], core->oam[offset + 2u],
            core->oam[offset + 3u]) > 0;
    }
    if (ok) ok = fprintf(file, "\n  ]\n}\n") > 0;
    if (fclose(file) != 0) ok = 0;
    return ok;
}

int main(int argc, char **argv) {
    MM2Rom rom;
    MM2DirectCore *core = mm2_direct_core_create();
    uint8_t *pixels = (uint8_t *)malloc(MM2_PRESENTATION_MAX_FRAME_PIXELS);
    MM2PresentationInfo info = {0};
    char error[256] = {0};
    char reason[256] = {0};
    unsigned advance_frames = 0u;
    unsigned input_value = 0u;
    unsigned trace_margin_frames = 0u;
    unsigned trace_margin_sprite_pieces = 0u;
    unsigned trace_active_object_margin_frames = 0u;
    unsigned frame_index;
    int policy_mode = 0;
    int ok;
    if (argc != 5 && argc != 7 && argc != 8) {
        fprintf(stderr, "usage: %s <rom> <route-snapshot> <output.bmp> <output.json> [advance-frames input-value [held|policy]]\n", argv[0]);
        free(pixels);
        mm2_direct_core_destroy(core);
        return 2;
    }
    if (argc >= 7) {
        char *end = NULL;
        unsigned long parsed_frames = strtoul(argv[5], &end, 0);
        if (!end || *end != '\0') {
            fprintf(stderr, "invalid advance frame count: %s\n", argv[5]);
            free(pixels);
            mm2_direct_core_destroy(core);
            return 2;
        }
        advance_frames = (unsigned)parsed_frames;
        end = NULL;
        input_value = (unsigned)strtoul(argv[6], &end, 0);
        if (argc == 8) {
            if (strcmp(argv[7], "policy") == 0) policy_mode = 1;
            else if (strcmp(argv[7], "held") != 0) {
                fprintf(stderr, "invalid input mode: %s\n", argv[7]);
                free(pixels);
                mm2_direct_core_destroy(core);
                return 2;
            }
        }
        if (!end || *end != '\0' ||
            (policy_mode ? input_value > 511u : input_value > 0xFFu)) {
            fprintf(stderr, "invalid input value: %s\n", argv[6]);
            free(pixels);
            mm2_direct_core_destroy(core);
            return 2;
        }
    }
    memset(&rom, 0, sizeof(rom));
    ok = core && pixels && mm2_rom_load(argv[1], &rom, error, sizeof(error));
    if (ok && !mm2_rom_is_expected(&rom, reason, sizeof(reason))) {
        snprintf(error, sizeof(error), "%s", reason);
        ok = 0;
    }
    if (ok && !load_route_snapshot(argv[2], core, &rom)) {
        snprintf(error, sizeof(error), "route snapshot is incompatible or corrupt");
        ok = 0;
    }
    if (ok) mm2_direct_core_set_wide_screen_enabled(core, 1);
    for (frame_index = 0u; ok && frame_index < advance_frames; ++frame_index) {
        MM2FrameResult frame_result;
        unsigned margin_pieces;
        ok = mm2_direct_core_advance_frame(
            core, policy_mode ? gameplay_buttons(frame_index, input_value) :
                                (uint8_t)input_value,
            0u, 0u, &frame_result);
        if (!ok) snprintf(error, sizeof(error), "core stopped while advancing snapshot");
        if (!ok) break;
        margin_pieces = visible_margin_piece_count(core);
        if (margin_pieces != 0u) trace_margin_frames++;
        trace_margin_sprite_pieces += margin_pieces;
        if (has_active_margin_object(core))
            trace_active_object_margin_frames++;
    }
    if (ok) ok = mm2_direct_core_presentation_copy_indexed(
        core, 1, pixels, MM2_PRESENTATION_MAX_FRAME_PIXELS, &info);
    if (ok) ok = write_bmp(argv[3], pixels, info.width, info.height);
    if (ok) ok = write_json(argv[4], core, &info,
                            trace_margin_frames,
                            trace_margin_sprite_pieces,
                            trace_active_object_margin_frames);
    if (ok) {
        printf("PASS snapshot widescreen probe: frame=%llu screen=%u bank=%02X mode=%s reason=%s %ux%u\n",
               (unsigned long long)mm2_direct_core_frame_count(core),
               mm2_direct_core_ram_peek(core, 0x20u),
               mm2_direct_core_ram_peek(core, 0x29u),
               info.mode == MM2_PRESENTATION_WIDE_GAMEPLAY ? "wide" : "native-4:3",
               reason_name(info.reason), info.width, info.height);
    } else {
        fprintf(stderr, "widescreen snapshot probe failed: %s\n",
                error[0] ? error : "output failure");
    }
    if (rom.file_data) mm2_rom_free(&rom);
    free(pixels);
    mm2_direct_core_destroy(core);
    return ok ? 0 : 1;
}
