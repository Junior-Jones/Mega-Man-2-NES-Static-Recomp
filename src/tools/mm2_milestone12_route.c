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

static uint8_t route_buttons(uint64_t frame) {
    uint8_t buttons = 0u;
    if ((frame >= 280u && frame < 320u) ||
        (frame >= 600u && frame < 640u) ||
        (frame >= 850u && frame < 890u)) buttons = 0xFFu;
    if (frame >= 1200u && frame < 1210u) buttons = 0x10u;
    if (frame >= 1250u && frame < 1260u) buttons = 0x08u;
    if (frame >= 2050u) {
        buttons = 0x80u;
        if (frame % 96u < 32u) buttons |= 0x01u;
        if (frame % 30u < 2u) buttons |= 0x02u;
    }
    return buttons;
}

static void analyze_presentation_tail(const MM2DirectCore *core,
                                      uint64_t *crossings,
                                      uint64_t *delta_abs_sum, int *peak) {
    int16_t samples[8192];
    size_t count = mm2_route_copy_pcm_tail(
        core, samples, sizeof(samples) / sizeof(samples[0]));
    size_t index;
    int32_t input_previous = 0, high = 0, low = 0, previous = 0;
    *crossings = 0u; *delta_abs_sum = 0u; *peak = 0;
    for (index = 0u; index < count; ++index) {
        int32_t input = samples[index];
        int32_t sample, magnitude, delta;
        high = input - input_previous + (int32_t)(((int64_t)high * 32604) >> 15);
        input_previous = input;
        low += (high - low) >> 2;
        sample = low < -32768 ? -32768 : (low > 32767 ? 32767 : low);
        magnitude = sample < 0 ? -sample : sample;
        delta = sample - previous;
        if (delta < 0) delta = -delta;
        if (magnitude > *peak) *peak = magnitude;
        *delta_abs_sum += (uint64_t)delta;
        if (index > 0u && ((previous < 0 && sample >= 0) ||
                           (previous >= 0 && sample < 0))) (*crossings)++;
        previous = sample;
    }
}

int main(int argc, char **argv) {
    MM2Rom rom;
    MM2DirectCore *core = NULL;
    MM2CoreObservation observation;
    char error[256] = {0}, reason[256] = {0};
    char frame_path[1024], apu_path[1024], wav_path[1024], result_path[1024];
    uint64_t limit, gameplay_hash = 0u, gameplay_sprites = 0u;
    uint64_t presentation_crossings = 0u, presentation_delta_abs_sum = 0u;
    int presentation_peak = 0, route_ok;
    unsigned checkpoints = 0u;
    FILE *result;
    if (argc != 4) { fprintf(stderr, "usage: %s ROM OUTPUT-DIR INSTRUCTION-LIMIT\n", argv[0]); return 2; }
    limit = (uint64_t)strtoull(argv[3], NULL, 10);
    if (!make_dir(argv[2])) return 3;
    if (!mm2_rom_load(argv[1], &rom, error, sizeof(error)) ||
        !mm2_rom_is_expected(&rom, reason, sizeof(reason))) {
        fprintf(stderr, "%s\n", error[0] ? error : reason); return 4;
    }
    core = mm2_direct_core_create();
    if (!core || !mm2_direct_core_reset(core, &rom) ||
        !mm2_direct_core_observe(core, &observation)) {
        mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 5;
    }
    while (observation.executed_instructions < limit && observation.frames < 4000u) {
        if (!mm2_route_advance_frame(core, route_buttons(observation.frames),
                                     0u, limit, &observation)) break;
        if ((checkpoints & 1u) == 0u && observation.frames >= 1200u) {
            snprintf(frame_path, sizeof(frame_path), "%s/checkpoint-1200.bmp", argv[2]);
            mm2_route_write_bmp(frame_path, core); checkpoints |= 1u;
        }
        if ((checkpoints & 2u) == 0u && observation.frames >= 1600u) {
            snprintf(frame_path, sizeof(frame_path), "%s/checkpoint-1600.bmp", argv[2]);
            mm2_route_write_bmp(frame_path, core); checkpoints |= 2u;
        }
        if ((checkpoints & 4u) == 0u && observation.frames >= 2000u) {
            snprintf(frame_path, sizeof(frame_path), "%s/checkpoint-2000.bmp", argv[2]);
            mm2_route_write_bmp(frame_path, core);
            snprintf(frame_path, sizeof(frame_path), "%s/first-controlled-gameplay-frame.bmp", argv[2]);
            mm2_route_write_bmp(frame_path, core);
            gameplay_hash = observation.framebuffer_hash;
            gameplay_sprites = observation.sprite_pixels;
            checkpoints |= 4u;
        }
        if ((checkpoints & 8u) == 0u && observation.frames >= 2400u) {
            snprintf(frame_path, sizeof(frame_path), "%s/checkpoint-2400.bmp", argv[2]);
            mm2_route_write_bmp(frame_path, core); checkpoints |= 8u;
        }
    }
    snprintf(apu_path, sizeof(apu_path), "%s/apu-register-writes.csv", argv[2]);
    snprintf(wav_path, sizeof(wav_path), "%s/controlled-gameplay-audio.wav", argv[2]);
    snprintf(result_path, sizeof(result_path), "%s/milestone-12-route.json", argv[2]);
    if (gameplay_hash == 0u || !mm2_route_write_apu_csv(apu_path, core) ||
        !mm2_route_write_pcm_wav(wav_path, core)) {
        mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 6;
    }
    analyze_presentation_tail(core, &presentation_crossings,
                              &presentation_delta_abs_sum, &presentation_peak);
    route_ok = observation.trap == MM2_CORE_TRAP_NONE && observation.frames >= 4000u &&
      gameplay_sprites > 0u && observation.apu_write_count >= 128u &&
      observation.controller_reads[0] > 0u && observation.pcm_total_samples > 0u &&
      observation.pcm_peak > 1000 && observation.pcm_peak < 30000 &&
      observation.pcm_delta_abs_sum > observation.pcm_abs_sum / 100u &&
      presentation_peak > 100 && presentation_crossings > 50u &&
      presentation_delta_abs_sum > 1000u;
    result = fopen(result_path, "wb");
    if (!result) { mm2_direct_core_destroy(core); mm2_rom_free(&rom); return 7; }
    fprintf(result,
      "{\n  \"format\": \"mega-man-2-controlled-gameplay-progression-route-v3\",\n  \"version\": \"1.1.0\",\n"
      "  \"ok\": %s,\n  \"instructions\": %llu,\n  \"cpu_cycles\": %llu,\n  \"ppu_cycles\": %llu,\n"
      "  \"ppu_frames\": %llu,\n  \"nmi_count\": %llu,\n  \"framebuffer_hash_fnv1a64\": \"%016llX\",\n"
      "  \"gameplay_frame_hash_fnv1a64\": \"%016llX\",\n  \"gameplay_sprite_pixels\": %llu,\n"
      "  \"apu_write_events_captured\": %llu,\n  \"apu_write_events_total\": %llu,\n  \"trap\": \"%s\",\n"
      "  \"sprite_pixels\": %llu,\n  \"sprite_zero_hits\": %llu,\n  \"sprite_overflow_scanlines\": %llu,\n  \"controller_reads\": %llu,\n  \"controller_latches\": %llu,\n"
      "  \"pcm_total_samples\": %llu,\n  \"pcm_hash_fnv1a64\": \"%016llX\",\n  \"pcm_peak\": %d,\n  \"pcm_dc_sum\": %lld,\n"
      "  \"pcm_abs_sum\": %llu,\n  \"pcm_delta_abs_sum\": %llu,\n  \"pcm_zero_crossings\": %llu,\n"
      "  \"presentation_tail_peak\": %d,\n  \"presentation_tail_delta_abs_sum\": %llu,\n  \"presentation_tail_zero_crossings\": %llu,\n"
      "  \"scope\": \"shared headed/headless frame API progression and PCM evidence\"\n}\n",
      route_ok ? "true" : "false",
      (unsigned long long)observation.executed_instructions,
      (unsigned long long)observation.cpu_cycles,
      (unsigned long long)observation.ppu_cycles,
      (unsigned long long)observation.frames,
      (unsigned long long)observation.nmi_count,
      (unsigned long long)observation.framebuffer_hash,
      (unsigned long long)gameplay_hash, (unsigned long long)gameplay_sprites,
      (unsigned long long)observation.apu_write_count,
      (unsigned long long)(observation.apu_write_count + observation.apu_write_overflow),
      mm2_direct_core_trap_name(observation.trap),
      (unsigned long long)observation.sprite_pixels,
      (unsigned long long)observation.sprite_zero_hits,
      (unsigned long long)observation.sprite_overflow_scanlines,
      (unsigned long long)observation.controller_reads[0],
      (unsigned long long)observation.controller_latches,
      (unsigned long long)observation.pcm_total_samples,
      (unsigned long long)observation.pcm_hash, (int)observation.pcm_peak,
      (long long)observation.pcm_dc_sum,
      (unsigned long long)observation.pcm_abs_sum,
      (unsigned long long)observation.pcm_delta_abs_sum,
      (unsigned long long)observation.pcm_zero_crossings,
      presentation_peak, (unsigned long long)presentation_delta_abs_sum,
      (unsigned long long)presentation_crossings);
    fclose(result);
    printf("route frames=%llu instructions=%llu hash=%016llX sprites=%llu input_reads=%llu pcm=%llu peak=%d pad23=%02X pad24=%02X pc=%04X identity=%08lX trap=%s\n",
           (unsigned long long)observation.frames,
           (unsigned long long)observation.executed_instructions,
           (unsigned long long)observation.framebuffer_hash,
           (unsigned long long)observation.sprite_pixels,
           (unsigned long long)observation.controller_reads[0],
           (unsigned long long)observation.pcm_total_samples,
           (int)observation.pcm_peak,
           mm2_direct_core_ram_peek(core, 0x23u),
           mm2_direct_core_ram_peek(core, 0x24u),
           observation.program_counter, (unsigned long)observation.last_identity,
           mm2_direct_core_trap_name(observation.trap));
    mm2_direct_core_destroy(core); mm2_rom_free(&rom);
    return route_ok ? 0 : 8;
}

