#include "mm2_route_support.h"

#include <stdio.h>
#include <string.h>

static void put16(uint8_t *output, unsigned value) {
    output[0] = (uint8_t)value;
    output[1] = (uint8_t)(value >> 8);
}

static void put32(uint8_t *output, uint32_t value) {
    output[0] = (uint8_t)value;
    output[1] = (uint8_t)(value >> 8);
    output[2] = (uint8_t)(value >> 16);
    output[3] = (uint8_t)(value >> 24);
}

int mm2_route_advance_frame(MM2DirectCore *core, uint8_t player1,
                            uint8_t player2, uint64_t instruction_limit,
                            MM2CoreObservation *observation) {
    MM2CoreObservation before;
    MM2FrameResult frame;
    uint64_t remaining;
    if (!core || !mm2_direct_core_observe(core, &before) ||
        before.trap != MM2_CORE_TRAP_NONE ||
        before.executed_instructions >= instruction_limit) return 0;
    remaining = instruction_limit - before.executed_instructions;
    if (!mm2_direct_core_advance_frame(core, player1, player2, remaining,
                                       &frame)) {
        if (observation) mm2_direct_core_observe(core, observation);
        return 0;
    }
    return !observation || mm2_direct_core_observe(core, observation);
}

static int write_bgra_bmp(const char *path, const uint32_t *pixels,
                          uint32_t width, uint32_t height) {
    uint8_t header[54] = {0};
    uint8_t padding[3] = {0u, 0u, 0u};
    uint32_t row_bytes = width * 3u;
    uint32_t row_padding = (4u - (row_bytes & 3u)) & 3u;
    uint32_t image_bytes = (row_bytes + row_padding) * height;
    FILE *file;
    int y;
    unsigned x;
    if (!path || !pixels || width == 0u || height == 0u) return 0;
    file = fopen(path, "wb");
    if (!file) return 0;
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
    if (fwrite(header, 1u, sizeof(header), file) != sizeof(header)) {
        fclose(file);
        return 0;
    }
    for (y = (int)height - 1; y >= 0; --y) {
        for (x = 0u; x < width; ++x) {
            uint32_t color = pixels[(size_t)(unsigned)y * width + x];
            uint8_t bgr[3] = {(uint8_t)color, (uint8_t)(color >> 8),
                              (uint8_t)(color >> 16)};
            if (fwrite(bgr, 1u, sizeof(bgr), file) != sizeof(bgr)) {
                fclose(file);
                return 0;
            }
        }
        if (row_padding != 0u &&
            fwrite(padding, 1u, row_padding, file) != row_padding) {
            fclose(file);
            return 0;
        }
    }
    return fclose(file) == 0;
}

int mm2_route_write_bmp(const char *path, const MM2DirectCore *core) {
    uint32_t pixels[MM2_DIRECT_CORE_FRAME_PIXELS];
    if (!mm2_direct_core_frame_copy_bgra(
            core, pixels, MM2_DIRECT_CORE_FRAME_PIXELS)) return 0;
    return write_bgra_bmp(path, pixels, MM2_DIRECT_CORE_FRAME_WIDTH,
                          MM2_DIRECT_CORE_FRAME_HEIGHT);
}

int mm2_route_write_presentation_bmp(const char *path,
                                     const MM2DirectCore *core,
                                     int wide_screen_enabled,
                                     MM2PresentationInfo *info) {
    uint32_t pixels[MM2_PRESENTATION_MAX_FRAME_PIXELS];
    MM2PresentationInfo local_info;
    if (!mm2_direct_core_presentation_copy_bgra(
            core, wide_screen_enabled, pixels,
            MM2_PRESENTATION_MAX_FRAME_PIXELS, &local_info)) return 0;
    if (!write_bgra_bmp(path, pixels, local_info.width, local_info.height))
        return 0;
    if (info) *info = local_info;
    return 1;
}

int mm2_route_write_apu_csv(const char *path, const MM2DirectCore *core) {
    MM2ApuWriteEvent events[256];
    FILE *file = path ? fopen(path, "wb") : NULL;
    size_t first = 0u;
    size_t count;
    size_t index;
    if (!file) return 0;
    fputs("cpu_cycle,address,value\n", file);
    while ((count = mm2_direct_core_apu_write_copy(
                core, first, events, sizeof(events) / sizeof(events[0]))) != 0u) {
        for (index = 0u; index < count; ++index)
            fprintf(file, "%llu,%04X,%02X\n",
                    (unsigned long long)events[index].cpu_cycle,
                    events[index].address, events[index].value);
        first += count;
    }
    return fclose(file) == 0;
}

size_t mm2_route_copy_pcm_tail(const MM2DirectCore *core, int16_t *output,
                               size_t capacity) {
    MM2CoreObservation observation;
    uint64_t first;
    size_t count;
    if (!output || capacity == 0u ||
        !mm2_direct_core_observe(core, &observation)) return 0u;
    count = observation.pcm_sample_count;
    if (count > capacity) count = capacity;
    first = observation.pcm_total_samples - observation.pcm_sample_count;
    if (observation.pcm_sample_count > count)
        first += observation.pcm_sample_count - count;
    return mm2_direct_core_pcm_copy(core, first, output, count);
}

int mm2_route_write_pcm_wav(const char *path, const MM2DirectCore *core) {
    int16_t samples[8192];
    uint8_t header[44] = {0};
    size_t count = mm2_route_copy_pcm_tail(
        core, samples, sizeof(samples) / sizeof(samples[0]));
    uint32_t bytes = (uint32_t)(count * 2u);
    size_t index;
    FILE *file = path ? fopen(path, "wb") : NULL;
    if (!file) return 0;
    memcpy(header, "RIFF", 4u);
    put32(header + 4, bytes + 36u);
    memcpy(header + 8, "WAVEfmt ", 8u);
    put32(header + 16, 16u);
    put16(header + 20, 1u);
    put16(header + 22, 1u);
    put32(header + 24, 44100u);
    put32(header + 28, 88200u);
    put16(header + 32, 2u);
    put16(header + 34, 16u);
    memcpy(header + 36, "data", 4u);
    put32(header + 40, bytes);
    if (fwrite(header, 1u, sizeof(header), file) != sizeof(header)) {
        fclose(file);
        return 0;
    }
    for (index = 0u; index < count; ++index) {
        uint16_t bits = (uint16_t)samples[index];
        uint8_t sample[2] = {(uint8_t)bits, (uint8_t)(bits >> 8)};
        if (fwrite(sample, 1u, sizeof(sample), file) != sizeof(sample)) {
            fclose(file);
            return 0;
        }
    }
    return fclose(file) == 0;
}
