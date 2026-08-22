#include "mm2_route_support.h"
#include "mm2_rom.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <direct.h>
#define MM2_MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#define MM2_MKDIR(path) mkdir(path, 0777)
#endif

static int make_dir(const char *path) {
    return MM2_MKDIR(path) == 0 || errno == EEXIST;
}

int main(int argc, char **argv) {
    MM2Rom rom;
    MM2DirectCore *core = NULL;
    MM2CoreObservation observation;
    char error[256] = {0}, reason[256] = {0};
    char frame_path[1024], apu_path[1024], wav_path[1024], result_path[1024];
    uint64_t limit;
    FILE *result;
    int ok;
    if (argc != 4) {
        fprintf(stderr, "usage: %s ROM OUTPUT-DIR INSTRUCTION-LIMIT\n", argv[0]);
        return 2;
    }
    limit = (uint64_t)strtoull(argv[3], NULL, 10);
    if (!make_dir(argv[2])) return 3;
    if (!mm2_rom_load(argv[1], &rom, error, sizeof(error)) ||
        !mm2_rom_is_expected(&rom, reason, sizeof(reason))) {
        fprintf(stderr, "%s\n", error[0] ? error : reason);
        return 4;
    }
    core = mm2_direct_core_create();
    if (!core || !mm2_direct_core_reset(core, &rom) ||
        !mm2_direct_core_observe(core, &observation)) {
        mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 5;
    }
    while (observation.executed_instructions < limit && observation.frames < 180u) {
        uint8_t buttons = observation.frames >= 90u && observation.frames < 94u
                              ? 0x08u : 0u;
        if (!mm2_route_advance_frame(core, buttons, 0u, limit, &observation)) break;
    }
    snprintf(frame_path, sizeof(frame_path), "%s/title-input-sprite-frame.bmp", argv[2]);
    snprintf(apu_path, sizeof(apu_path), "%s/apu-register-writes.csv", argv[2]);
    snprintf(wav_path, sizeof(wav_path), "%s/native-apu-mix.wav", argv[2]);
    snprintf(result_path, sizeof(result_path), "%s/milestone-09-route.json", argv[2]);
    if (!mm2_route_write_bmp(frame_path, core) ||
        !mm2_route_write_apu_csv(apu_path, core) ||
        !mm2_route_write_pcm_wav(wav_path, core)) {
        mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 6;
    }
    ok = observation.trap == MM2_CORE_TRAP_NONE && observation.frames >= 180u &&
         observation.framebuffer_hash != 0u && observation.apu_write_count >= 128u &&
         observation.controller_reads[0] > 0u && observation.pcm_total_samples > 0u &&
         observation.pcm_peak > 0;
    result = fopen(result_path, "wb");
    if (!result) { mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 7; }
    fprintf(result,
      "{\n  \"format\": \"mega-man-2-title-input-pcm-route-v1\",\n  \"version\": \"1.1.1\",\n"
      "  \"ok\": %s,\n  \"instructions\": %llu,\n  \"cpu_cycles\": %llu,\n  \"ppu_cycles\": %llu,\n"
      "  \"ppu_frames\": %llu,\n  \"nmi_count\": %llu,\n  \"framebuffer_hash_fnv1a64\": \"%016llX\",\n"
      "  \"apu_write_events\": %llu,\n  \"apu_write_overflow\": %llu,\n  \"trap\": \"%s\",\n"
      "  \"sprite_pixels\": %llu,\n  \"sprite_zero_hits\": %llu,\n  \"controller_reads\": %llu,\n  \"controller_latches\": %llu,\n"
      "  \"pcm_total_samples\": %llu,\n  \"pcm_hash_fnv1a64\": \"%016llX\",\n  \"pcm_peak\": %d,\n  \"pcm_dc_sum\": %lld,\n"
      "  \"frame_evidence\": \"title-input-sprite-frame.bmp\",\n  \"apu_evidence\": \"apu-register-writes.csv\",\n  \"pcm_evidence\": \"native-apu-mix.wav\",\n"
      "  \"scope\": \"shared frame API title/input route with native video and PCM evidence\"\n}\n",
      ok ? "true" : "false",
      (unsigned long long)observation.executed_instructions,
      (unsigned long long)observation.cpu_cycles,
      (unsigned long long)observation.ppu_cycles,
      (unsigned long long)observation.frames,
      (unsigned long long)observation.nmi_count,
      (unsigned long long)observation.framebuffer_hash,
      (unsigned long long)observation.apu_write_count,
      (unsigned long long)observation.apu_write_overflow,
      mm2_direct_core_trap_name(observation.trap),
      (unsigned long long)observation.sprite_pixels,
      (unsigned long long)observation.sprite_zero_hits,
      (unsigned long long)observation.controller_reads[0],
      (unsigned long long)observation.controller_latches,
      (unsigned long long)observation.pcm_total_samples,
      (unsigned long long)observation.pcm_hash, (int)observation.pcm_peak,
      (long long)observation.pcm_dc_sum);
    fclose(result);
    printf("route frames=%llu instructions=%llu hash=%016llX sprites=%llu input_reads=%llu pcm=%llu peak=%d trap=%s\n",
           (unsigned long long)observation.frames,
           (unsigned long long)observation.executed_instructions,
           (unsigned long long)observation.framebuffer_hash,
           (unsigned long long)observation.sprite_pixels,
           (unsigned long long)observation.controller_reads[0],
           (unsigned long long)observation.pcm_total_samples,
           (int)observation.pcm_peak,
           mm2_direct_core_trap_name(observation.trap));
    mm2_direct_core_destroy(core);
    mm2_rom_free(&rom);
    return ok ? 0 : 8;
}

