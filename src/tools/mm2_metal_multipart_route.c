#include "mm2_direct_core_internal.h"
#include "mm2_rom.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <direct.h>
#define MM2_MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#define MM2_MKDIR(path) mkdir(path, 0777)
#endif

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

typedef struct WideTraceStats {
    uint64_t margin_frames;
    uint64_t margin_sprite_pieces;
    uint64_t active_object_margin_frames;
} WideTraceStats;

static void observe_wide_frame(const MM2DirectCore *core,
                               WideTraceStats *stats) {
    unsigned index;
    int margin_frame = 0;
    int active_margin_frame = 0;
    if (!core || !stats) return;
    for (index = 0u; index < core->wide_sprite_count; ++index) {
        int left = core->wide_sprites[index].x;
        if ((left < 0 && left + 7 >= -(int)MM2_PRESENTATION_WIDE_MARGIN) ||
            (left < (int)(MM2_DIRECT_CORE_FRAME_WIDTH +
                          MM2_PRESENTATION_WIDE_MARGIN) &&
             left + 7 >= (int)MM2_DIRECT_CORE_FRAME_WIDTH)) {
            stats->margin_sprite_pieces++;
            margin_frame = 1;
        }
    }
    for (index = 1u; index < 32u; ++index) {
        int page_delta;
        int screen_x;
        if ((core->ram[0x420u + index] & 0x80u) == 0u) continue;
        page_delta = (int)(int8_t)(uint8_t)(
            core->ram[0x440u + index] - core->ram[0x20u]);
        screen_x = page_delta * 256 + (int)core->ram[0x460u + index] -
                   (int)core->ram[0x1Fu];
        if ((screen_x >= -(int)MM2_PRESENTATION_WIDE_MARGIN && screen_x < 0) ||
            (screen_x >= (int)MM2_DIRECT_CORE_FRAME_WIDTH &&
             screen_x < (int)(MM2_DIRECT_CORE_FRAME_WIDTH +
                              MM2_PRESENTATION_WIDE_MARGIN))) {
            active_margin_frame = 1;
            break;
        }
    }
    if (margin_frame) stats->margin_frames++;
    if (active_margin_frame) stats->active_object_margin_frames++;
}

static int make_dir(const char *path) {
    return MM2_MKDIR(path) == 0 || errno == EEXIST;
}
static void put16(uint8_t *p, unsigned v) {
    p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8);
}
static void put32(uint8_t *p, uint32_t v) {
    p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8);
    p[2] = (uint8_t)(v >> 16); p[3] = (uint8_t)(v >> 24);
}
static int write_bmp(const char *path, const MM2DirectCore *core) {
    FILE *file = fopen(path, "wb");
    uint8_t header[54] = {0};
    int y;
    unsigned x;
    if (!file) return 0;
    header[0] = 'B'; header[1] = 'M';
    put32(header + 2, 54u + 256u * 240u * 3u); put32(header + 10, 54u);
    put32(header + 14, 40u); put32(header + 18, 256u); put32(header + 22, 240u);
    put16(header + 26, 1u); put16(header + 28, 24u);
    put32(header + 34, 256u * 240u * 3u);
    fwrite(header, 1u, sizeof(header), file);
    for (y = 239; y >= 0; --y) for (x = 0u; x < 256u; ++x) {
        const uint8_t *color = rgb[core->framebuffer[(unsigned)y * 256u + x] & 0x3Fu];
        uint8_t bgr[3] = {color[2], color[1], color[0]};
        fwrite(bgr, 1u, 3u, file);
    }
    return fclose(file) == 0;
}
static int save_snapshot(const char *path, const MM2DirectCore *core,
                         const MM2Rom *rom) {
    SnapshotHeader header = {{'M','M','2','P','A','R','T','S'}, 14u,
                             (uint32_t)sizeof(*core), {0}};
    MM2DirectCore *copy = (MM2DirectCore *)malloc(sizeof(*copy));
    FILE *file;
    int ok;
    if (!copy) return 0;
    *copy = *core;
    memcpy(header.rom_sha256, rom->sha256, 64u);
    header.rom_sha256[64] = '\0';
    copy->prg = NULL;
    file = fopen(path, "wb");
    if (!file) {
        free(copy);
        return 0;
    }
    ok = fwrite(&header, 1u, sizeof(header), file) == sizeof(header) &&
         fwrite(copy, 1u, sizeof(*copy), file) == sizeof(*copy);
    if (fclose(file) != 0) ok = 0;
    free(copy);
    return ok;
}
static int load_snapshot(const char *path, MM2DirectCore *core,
                         const MM2Rom *rom) {
    SnapshotHeader header;
    FILE *file = fopen(path, "rb");
    if (!file) return 0;
    if (fread(&header, 1u, sizeof(header), file) != sizeof(header) ||
        fread(core, 1u, sizeof(*core), file) != sizeof(*core) ||
        memcmp(header.magic, "MM2PARTS", 8u) != 0 ||
        header.version != 14u || header.core_size != sizeof(*core) ||
        strcmp(header.rom_sha256, rom->sha256) != 0) {
        fclose(file); return 0;
    }
    fclose(file);
    core->prg = rom->prg;
    core->prg_size = rom->prg_size;
    return 1;
}
static uint8_t startup_buttons(uint64_t frame) {
    if ((frame >= 280u && frame < 320u) ||
        (frame >= 600u && frame < 640u) ||
        (frame >= 850u && frame < 890u)) return 0xFFu;
    if (frame >= 1200u && frame < 1210u) return 0x20u;
    if (frame >= 1220u && frame < 1230u) return 0x40u;
    if (frame >= 1270u && frame < 1280u) return 0x08u;
    return 0u;
}
static uint8_t gameplay_buttons(uint64_t local_frame, unsigned policy) {
    static const unsigned periods[8] =
        {44u, 52u, 60u, 68u, 76u, 88u, 104u, 120u};
    unsigned base_policy = policy & 63u;
    unsigned direction = policy / 64u;
    uint8_t buttons;
    switch (direction) {
    case 0u: buttons = 0x80u; break;        /* right */
    case 1u: buttons = 0u; break;           /* wait */
    case 2u: buttons = 0x40u; break;        /* left recovery */
    case 3u: buttons = 0x20u; break;        /* down */
    case 4u: buttons = 0xA0u; break;        /* right + down */
    case 5u: buttons = 0x60u; break;        /* left + down */
    case 6u: buttons = 0x10u; break;        /* up */
    default: buttons = 0x90u; break;        /* right + up */
    }
    unsigned jump_period = periods[base_policy & 7u];
    unsigned phase = (base_policy >> 3) != 0u && jump_period != 0u
                       ? jump_period / 2u : 0u;
    unsigned jump_hold = (base_policy & 16u) != 0u ? 32u : 22u;
    if ((local_frame + phase) % jump_period < jump_hold) buttons |= 0x01u;
    if (local_frame % ((base_policy & 32u) != 0u ? 10u :
                       ((base_policy & 8u) != 0u ? 22u : 34u)) < 3u)
        buttons |= 0x02u;
    return buttons;
}
static uint8_t known_opening_buttons(uint64_t frame) {
    static const unsigned opening_75[12] =
        {9u,0u,17u,0u,0u,9u,0u,8u,12u,2u,8u,13u};
    static const unsigned bridge_25[4] = {8u,8u,0u,64u};
    uint64_t local;
    unsigned segment;
    if (frame < 2950u) {
        local = frame - 2050u;
        segment = (unsigned)(local / 75u);
        return gameplay_buttons(local % 75u, opening_75[segment]);
    }
    local = frame - 2950u;
    segment = (unsigned)(local / 25u);
    return gameplay_buttons(local % 25u, bridge_25[segment]);
}
static uint64_t progress_score(const MM2DirectCore *core, uint8_t start_lives) {
    uint64_t camera = (uint64_t)core->ram[0x20] * 256u + core->ram[0x1F];
    if (core->ram[0xA8] != start_lives || core->ram[0x6C0] == 0u) return 0u;
    return 1000000000000ull + (uint64_t)core->ram[0x6C0] * 1000000u +
           camera * 1000u + core->ram[0x460];
}

int main(int argc, char **argv) {
    enum { PART_COUNT = 48 };
    static const uint64_t part_length = 25u;
    MM2Rom rom;
    MM2DirectCore core;
    char error[256] = {0}, reason[256] = {0};
    char part_dir[1024], snapshot_path[2048], screenshot_path[2048];
    char result_path[1024];
    uint64_t limit, instructions = 0u;
    unsigned part, passed = 0u;
    unsigned part_limit;
    int wide_requested;
    WideTraceStats total_wide = {0};
    FILE *result;
    if (argc != 4 && argc != 5) {
        fprintf(stderr, "usage: %s ROM OUTPUT-DIR INSTRUCTION-LIMIT [START-SNAPSHOT|--wide]\n", argv[0]);
        return 2;
    }
    wide_requested = argc == 5 && strcmp(argv[4], "--wide") == 0;
    limit = (uint64_t)strtoull(argv[3], NULL, 10);
    part_limit = argc == 5 && !wide_requested ? PART_COUNT : 24u;
    if (!make_dir(argv[2])) return 3;
    if (!mm2_rom_load(argv[1], &rom, error, sizeof(error)) ||
        !mm2_rom_is_expected(&rom, reason, sizeof(reason))) return 4;
    if (argc == 5 && !wide_requested) {
        if (!load_snapshot(argv[4], &core, &rom)) return 5;
    } else {
        if (!mm2_direct_core_reset(&core, &rom)) return 5;
        while (instructions < limit && core.ppu_frames < 2050u) {
            mm2_direct_core_set_controller(&core, 0u, startup_buttons(core.ppu_frames));
            if (!mm2_direct_core_step(&core)) break;
            instructions++;
        }
        while (instructions < limit && core.ppu_frames < 3050u) {
            mm2_direct_core_set_controller(
                &core, 0u, known_opening_buttons(core.ppu_frames));
            if (!mm2_direct_core_step(&core)) break;
            instructions++;
        }
    }
    mm2_direct_core_set_wide_screen_enabled(&core, wide_requested);
    snprintf(result_path, sizeof(result_path), "%s/metal-multipart-result.json", argv[2]);
    result = fopen(result_path, "wb");
    if (!result) return 6;
    fprintf(result,
          "{\n  \"format\":\"mega-man-2-metal-man-multipart-v1\",\n"
          "  \"version\":\"1.2.0\",\n  \"wide_screen\":%s,\n  \"parts\":[\n",
          wide_requested ? "true" : "false");
    for (part = 0u; part < part_limit && instructions < limit; ++part) {
        uint64_t start_frame = core.ppu_frames;
        uint64_t target = start_frame + part_length;
        MM2DirectCore best = core;
        uint64_t best_score = 0u;
        unsigned best_policy = 0u, policy;
        WideTraceStats part_wide = {0};
        int ok;
        snprintf(part_dir, sizeof(part_dir), "%s/part-%u", argv[2], part + 1u);
        if (!make_dir(part_dir)) break;
        unsigned policy_limit = core.ram[0x20] >= 10u ? 512u : 192u;
        for (policy = 0u; policy < policy_limit; ++policy) {
            MM2DirectCore trial = core;
            MM2DirectCore commit = core;
            uint64_t local_steps = 0u;
            uint64_t planning_target = target + part_length;
            int captured_commit = 0;
            while (trial.ppu_frames < planning_target && local_steps < limit) {
                mm2_direct_core_set_controller(
                    &trial, 0u,
                    gameplay_buttons(trial.ppu_frames - start_frame, policy));
                if (!mm2_direct_core_step(&trial)) break;
                if (!captured_commit && trial.ppu_frames >= target) {
                    commit = trial;
                    captured_commit = 1;
                }
                local_steps++;
            }
            if (captured_commit && trial.ppu_frames >= planning_target &&
                trial.trap == MM2_CORE_TRAP_NONE) {
                uint64_t score = progress_score(&trial, core.ram[0xA8]);
                if (score > best_score) {
                    best_score = score;
                    best = commit;
                    best_policy = policy;
                }
            }
        }
        if (best_score == 0u) break;
        if (wide_requested) {
            MM2DirectCore replay = core;
            while (replay.ppu_frames < target) {
                uint64_t previous_frame = replay.ppu_frames;
                mm2_direct_core_set_controller(
                    &replay, 0u,
                    gameplay_buttons(replay.ppu_frames - start_frame,
                                     best_policy));
                if (!mm2_direct_core_step(&replay)) break;
                if (replay.ppu_frames != previous_frame)
                    observe_wide_frame(&replay, &part_wide);
            }
            if (replay.ppu_frames < target ||
                replay.framebuffer_hash != best.framebuffer_hash ||
                replay.trap != best.trap)
                break;
            core = replay;
            total_wide.margin_frames += part_wide.margin_frames;
            total_wide.margin_sprite_pieces +=
                part_wide.margin_sprite_pieces;
            total_wide.active_object_margin_frames +=
                part_wide.active_object_margin_frames;
        } else {
            core = best;
        }
        snprintf(screenshot_path, sizeof(screenshot_path),
                 "%s/end-frame.bmp", part_dir);
        snprintf(snapshot_path, sizeof(snapshot_path), "%s/end.mm2state", part_dir);
        ok = core.trap == MM2_CORE_TRAP_NONE &&
             core.ppu_frames >= target &&
             write_bmp(screenshot_path, &core) &&
             save_snapshot(snapshot_path, &core, &rom);
        if (part != 0u) fputs(",\n", result);
        fprintf(result,
                "    {\"part\":%u,\"ok\":%s,\"start_frame\":%llu,"
                "\"end_frame\":%llu,\"framebuffer_hash_fnv1a64\":\"%016llX\","
                "\"camera_screen\":%u,\"camera_x\":%u,\"player_x\":%u,"
                "\"player_y\":%u,\"hp\":%u,\"lives\":%u,\"policy\":%u,"
                "\"sprite_pixels\":%llu,\"wide_margin_frames\":%llu,"
                "\"wide_margin_sprite_pieces\":%llu,"
                "\"wide_active_object_margin_frames\":%llu,"
                "\"snapshot\":\"part-%u/end.mm2state\","
                "\"screenshot\":\"part-%u/end-frame.bmp\"}",
                part + 1u, ok ? "true" : "false",
                (unsigned long long)start_frame,
                (unsigned long long)core.ppu_frames,
                (unsigned long long)core.framebuffer_hash,
                core.ram[0x20], core.ram[0x1F], core.ram[0x460],
                core.ram[0x4A0], core.ram[0x6C0], core.ram[0xA8],
                best_policy, (unsigned long long)core.sprite_pixels,
                (unsigned long long)part_wide.margin_frames,
                (unsigned long long)part_wide.margin_sprite_pieces,
                (unsigned long long)part_wide.active_object_margin_frames,
                part + 1u, part + 1u);
        if (!ok) break;
        passed++;
        memset(&core, 0, sizeof(core));
        if (!load_snapshot(snapshot_path, &core, &rom)) break;
    }
    fprintf(result,
            "\n  ],\n  \"parts_passed\":%u,\n  \"snapshot_reloads\":%u,\n"
            "  \"final_frame\":%llu,\n  \"final_hash\":\"%016llX\",\n"
            "  \"trap\":\"%s\",\n  \"wide_margin_frames\":%llu,\n"
            "  \"wide_margin_sprite_pieces\":%llu,\n"
            "  \"wide_active_object_margin_frames\":%llu,\n"
            "  \"frontier\":\"adaptive 25-frame parts with rightward, wait, and recovery policies; boss-room entry is attempted and only claimed if evidenced\",\n  \"ok\":%s,\n"
            "  \"goal\":\"reach the Metal Man boss room using deterministic rightward movement, conveyor-aware jumps and continuous fire\"\n}\n",
            passed, passed, (unsigned long long)core.ppu_frames,
            (unsigned long long)core.framebuffer_hash,
            mm2_direct_core_trap_name(core.trap),
            (unsigned long long)total_wide.margin_frames,
            (unsigned long long)total_wide.margin_sprite_pieces,
            (unsigned long long)total_wide.active_object_margin_frames,
            passed == part_limit ? "true" : "false");
    fclose(result);
    printf("Metal multipart: %u/%u parts, frame=%llu, screen=%u camera=%u "
           "player=(%u,%u) hp=%u lives=%u hash=%016llX trap=%s\n",
           passed, part_limit, (unsigned long long)core.ppu_frames,
           core.ram[0x20], core.ram[0x1F], core.ram[0x460],
           core.ram[0x4A0], core.ram[0x6C0], core.ram[0xA8],
           (unsigned long long)core.framebuffer_hash,
           mm2_direct_core_trap_name(core.trap));
    mm2_rom_free(&rom);
    return passed == part_limit ? 0 : 7;
}
