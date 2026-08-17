#include "mm2_route_support.h"
#include "mm2_rom.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct FrameEvents {
    uint64_t completed;
} FrameEvents;

static MM2RuntimeHookAction count_frames(const MM2RuntimeEvent *event,
                                         void *user_data) {
    FrameEvents *events = (FrameEvents *)user_data;
    if (event && events && event->type == MM2_RUNTIME_EVENT_FRAME_COMPLETE)
        events->completed++;
    return MM2_RUNTIME_HOOK_CONTINUE;
}

static uint8_t test_buttons(uint64_t frame) {
    if (frame >= 90u && frame < 94u) return 0x08u;
    if (frame % 60u < 2u) return 0x01u;
    return 0u;
}

static int exact_test(const char *path) {
    const uint64_t frames = 240u;
    const uint64_t instruction_limit = 10000000u;
    MM2Rom rom;
    MM2DirectCore *headed = mm2_direct_core_create();
    MM2DirectCore *headless = mm2_direct_core_create();
    MM2CoreObservation observation = {0};
    MM2FrameResult result;
    FrameEvents events = {0};
    void *headed_state = NULL;
    void *headless_state = NULL;
    size_t state_size = mm2_direct_core_state_size();
    char error[256], reason[256];
    uint64_t frame;
    int ok;
    memset(&rom, 0, sizeof(rom));
    ok = headed && headless && mm2_rom_load(path, &rom, error, sizeof(error));
    if (ok) ok = mm2_rom_is_expected(&rom, reason, sizeof(reason));
    if (ok) ok = mm2_direct_core_reset(headed, &rom) &&
                 mm2_direct_core_reset(headless, &rom);
    mm2_direct_core_set_runtime_hook(
        headless, MM2_RUNTIME_EVENT_FRAME_COMPLETE, count_frames, &events);
    for (frame = 0u; ok && frame < frames; ++frame) {
        uint8_t buttons = test_buttons(frame);
        ok = mm2_direct_core_advance_frame(
                 headed, buttons, 0u, 0u, &result) &&
             mm2_route_advance_frame(headless, buttons, 0u,
                                     instruction_limit, &observation);
    }
    headed_state = malloc(state_size);
    headless_state = malloc(state_size);
    ok = ok && headed_state && headless_state;
    ok = ok && mm2_direct_core_state_export(headed, headed_state, state_size) &&
         mm2_direct_core_state_export(headless, headless_state, state_size);
    ok = ok && memcmp(headed_state, headless_state, state_size) == 0;
    ok = ok && events.completed == frames && observation.frames == frames;
    free(headless_state);
    free(headed_state);
    mm2_direct_core_destroy(headless);
    mm2_direct_core_destroy(headed);
    if (rom.file_data) mm2_rom_free(&rom);
    if (!ok) {
        fputs("shared headed/headless exact-ROM frame test failed\n", stderr);
        return 1;
    }
    printf("PASS shared headed/headless path: frames=%llu instructions=%llu hash=%016llX\n",
           (unsigned long long)observation.frames,
           (unsigned long long)observation.executed_instructions,
           (unsigned long long)observation.framebuffer_hash);
    return 0;
}

int main(int argc, char **argv) {
    MM2CoreObservation observation;
    if (mm2_direct_core_observe(NULL, &observation) ||
        mm2_route_advance_frame(NULL, 0u, 0u, 1u, &observation)) {
        fputs("shared frame API null-guard self-test failed\n", stderr);
        return 1;
    }
    puts("PASS shared frame API structural guards");
    return argc == 2 ? exact_test(argv[1]) : 0;
}
