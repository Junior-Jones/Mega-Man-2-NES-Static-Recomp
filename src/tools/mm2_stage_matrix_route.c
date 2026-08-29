#include "mm2_route_support.h"
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

typedef struct StageRoute {
    const char *name;
    const char *slug;
    uint8_t first;
    uint8_t second;
} StageRoute;

static const StageRoute stages[8] = {
    {"Bubble Man", "bubble-man", 0x10u, 0x40u},
    {"Air Man", "air-man", 0x10u, 0u},
    {"Quick Man", "quick-man", 0x10u, 0x80u},
    {"Heat Man", "heat-man", 0x40u, 0u},
    {"Wood Man", "wood-man", 0x80u, 0u},
    {"Metal Man", "metal-man", 0x20u, 0x40u},
    {"Flash Man", "flash-man", 0x20u, 0u},
    {"Crash Man", "crash-man", 0x20u, 0x80u}
};

static int make_dir(const char *path) {
    return MM2_MKDIR(path) == 0 || errno == EEXIST;
}

static uint8_t route_buttons(uint64_t frame, const StageRoute *stage) {
    if ((frame >= 280u && frame < 320u) ||
        (frame >= 600u && frame < 640u) ||
        (frame >= 850u && frame < 890u)) return 0xFFu;
    if (frame >= 1200u && frame < 1210u) return stage->first;
    if (stage->second != 0u && frame >= 1220u && frame < 1230u)
        return stage->second;
    if (frame >= 1270u && frame < 1280u) return 0x08u;
    if (frame >= 2050u) {
        uint8_t buttons = 0x80u;
        if (frame % 44u < 22u) buttons |= 0x01u;
        if (frame % 18u < 3u) buttons |= 0x02u;
        return buttons;
    }
    return 0u;
}

int main(int argc, char **argv) {
    MM2Rom rom;
    MM2DirectCore *core = NULL;
    MM2CoreObservation observation;
    char error[256] = {0}, reason[256] = {0};
    char stage_dir[1024], frame_path[2048], gameplay_path[2048], apu_path[2048];
    char wav_path[2048], result_path[1024];
    uint64_t limit;
    unsigned stage_index, passed = 0u;
    int wide_smoke;
    FILE *result;
    if (argc != 4 && argc != 5) {
        fprintf(stderr, "usage: %s ROM OUTPUT-DIR INSTRUCTION-LIMIT [--wide-smoke]\n", argv[0]);
        return 2;
    }
    wide_smoke = argc == 5 && strcmp(argv[4], "--wide-smoke") == 0;
    if (argc == 5 && !wide_smoke) return 2;
    limit = (uint64_t)strtoull(argv[3], NULL, 10);
    if (!make_dir(argv[2])) return 3;
    if (!mm2_rom_load(argv[1], &rom, error, sizeof(error)) ||
        !mm2_rom_is_expected(&rom, reason, sizeof(reason))) {
        fprintf(stderr, "%s\n", error[0] ? error : reason); return 4;
    }
    core = mm2_direct_core_create();
    if (!core) { mm2_rom_free(&rom); return 5; }
    snprintf(result_path, sizeof(result_path), "%s/stage-matrix-result.json", argv[2]);
    result = fopen(result_path, "wb");
    if (!result) { mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 5; }
    fputs("{\n  \"format\": \"mega-man-2-eight-stage-load-matrix-v1\",\n"
          "  \"version\": \"1.2.0\",\n  \"stages\": [\n", result);
    for (stage_index = 0u; stage_index < 8u; ++stage_index) {
        uint64_t capture_hash = 0u, capture_sprites = 0u;
        uint64_t wide_frames = 0u;
        uint64_t native_fallback_frames = 0u;
        uint64_t target_frame = wide_smoke ? 2350u : 2050u;
        MM2PresentationInfo gameplay_presentation = {0};
        int wrote = 0, wrote_gameplay = !wide_smoke, ok;
        if (!mm2_direct_core_reset(core, &rom) ||
            !mm2_direct_core_observe(core, &observation)) break;
        mm2_direct_core_set_wide_screen_enabled(core, wide_smoke);
        while (observation.executed_instructions < limit &&
               observation.frames < target_frame) {
            MM2PresentationInfo presentation;
            if (!mm2_route_advance_frame(
                    core, route_buttons(observation.frames, &stages[stage_index]),
                    0u, limit, &observation)) break;
            if (wide_smoke && observation.frames >= 2050u &&
                mm2_direct_core_presentation_info(core, 1, &presentation)) {
                if (presentation.mode == MM2_PRESENTATION_WIDE_GAMEPLAY)
                    wide_frames++;
                else
                    native_fallback_frames++;
            }
            if (!wrote && observation.frames >= 2000u) {
                snprintf(stage_dir, sizeof(stage_dir), "%s/%s", argv[2],
                         stages[stage_index].slug);
                if (!make_dir(stage_dir)) break;
                snprintf(frame_path, sizeof(frame_path), "%s/frame-2000.bmp", stage_dir);
                wrote = mm2_route_write_bmp(frame_path, core);
                capture_hash = observation.framebuffer_hash;
                capture_sprites = observation.sprite_pixels;
            }
            if (wide_smoke && !wrote_gameplay &&
                observation.frames >= 2163u) {
                snprintf(gameplay_path, sizeof(gameplay_path),
                         "%s/frame-2163-rapid-fire.bmp", stage_dir);
                wrote_gameplay = mm2_route_write_presentation_bmp(
                    gameplay_path, core, 1, &gameplay_presentation);
            }
        }
        snprintf(stage_dir, sizeof(stage_dir), "%s/%s", argv[2], stages[stage_index].slug);
        snprintf(apu_path, sizeof(apu_path), "%s/apu-register-writes.csv", stage_dir);
        snprintf(wav_path, sizeof(wav_path), "%s/audio-tail.wav", stage_dir);
        ok = wrote && wrote_gameplay && mm2_route_write_apu_csv(apu_path, core) &&
             mm2_route_write_pcm_wav(wav_path, core) &&
             observation.trap == MM2_CORE_TRAP_NONE &&
             observation.frames >= target_frame &&
             capture_hash != 0u && capture_sprites > 0u;
        if (ok) ++passed;
        fprintf(result,
                "    {\"name\":\"%s\",\"slug\":\"%s\",\"ok\":%s,"
                "\"frames\":%llu,\"framebuffer_hash_fnv1a64\":\"%016llX\","
                "\"sprite_pixels\":%llu,\"wide_frames\":%llu,"
                "\"native_fallback_frames\":%llu,"
                "\"pcm_hash_fnv1a64\":\"%016llX\","
                "\"trap\":\"%s\",\"screenshot\":\"%s/%s\","
                "\"presentation_width\":%u,\"presentation_mode\":\"%s\"}%s\n",
                stages[stage_index].name, stages[stage_index].slug,
                ok ? "true" : "false", (unsigned long long)observation.frames,
                (unsigned long long)capture_hash,
                (unsigned long long)capture_sprites,
                (unsigned long long)wide_frames,
                (unsigned long long)native_fallback_frames,
                (unsigned long long)observation.pcm_hash,
                mm2_direct_core_trap_name(observation.trap), stages[stage_index].slug,
                wide_smoke ? "frame-2163-rapid-fire.bmp" : "frame-2000.bmp",
                wide_smoke ? gameplay_presentation.width : 256u,
                wide_smoke && gameplay_presentation.mode ==
                    MM2_PRESENTATION_WIDE_GAMEPLAY ?
                    "wide-gameplay" : "native-4:3",
                stage_index == 7u ? "" : ",");
        printf("%s: %s frame=%llu wide=%llu fallback=%llu hash=%016llX\n",
               stages[stage_index].name,
               ok ? "PASS" : "FAIL", (unsigned long long)observation.frames,
               (unsigned long long)wide_frames,
               (unsigned long long)native_fallback_frames,
               (unsigned long long)capture_hash);
    }
    fprintf(result, "  ],\n  \"passed\": %u,\n  \"ok\": %s,\n"
                    "  \"timing_lock\": {\"ntsc_frame_hz\":60.098810,"
                    "\"cpu_hz\":1789773,\"pcm_hz\":44100}\n}\n",
            passed, passed == 8u ? "true" : "false");
    fclose(result);
    mm2_direct_core_destroy(core);
    mm2_rom_free(&rom);
    return passed == 8u ? 0 : 8;
}
