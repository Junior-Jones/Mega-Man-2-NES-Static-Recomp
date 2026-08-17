#include "mm2_direct_core_internal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct HookLog {
    uint64_t counts[6];
    uint64_t next_sequence;
    int stop_on_first_before;
    int stop_on_first_bus_read;
    int sequence_ok;
} HookLog;

static unsigned event_index(MM2RuntimeEventType type) {
    unsigned index = 0u;
    uint32_t value = (uint32_t)type;
    while (value > 1u) {
        value >>= 1;
        index++;
    }
    return index;
}

static MM2RuntimeHookAction record_event(const MM2RuntimeEvent *event,
                                         void *user_data) {
    HookLog *log = (HookLog *)user_data;
    unsigned index;
    if (!event || !log) return MM2_RUNTIME_HOOK_CONTINUE;
    if (event->sequence != log->next_sequence) log->sequence_ok = 0;
    log->next_sequence++;
    index = event_index(event->type);
    if (index < 6u) log->counts[index]++;
    if (event->type == MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE &&
        log->stop_on_first_before) {
        log->stop_on_first_before = 0;
        return MM2_RUNTIME_HOOK_STOP;
    }
    if (event->type == MM2_RUNTIME_EVENT_BUS_READ &&
        log->stop_on_first_bus_read) {
        log->stop_on_first_bus_read = 0;
        return MM2_RUNTIME_HOOK_STOP;
    }
    return MM2_RUNTIME_HOOK_CONTINUE;
}

static int structural_test(void) {
    MM2DirectCore core;
    MM2Rom rom;
    HookLog log;
    MM2FrameResult frame = {0};
    uint8_t *prg = (uint8_t *)calloc(1u, 0x40000u);
    uint16_t pc;
    uint64_t cycles;
    int ok = prg != NULL;
    memset(&rom, 0, sizeof(rom));
    memset(&log, 0, sizeof(log));
    log.sequence_ok = 1;
    rom.prg = prg;
    rom.prg_size = 0x40000u;
    rom.mapper = 1;
    rom.reset_vector = 0xFFE0u;
    ok = ok && mm2_direct_core_reset(&core, &rom);
    mm2_direct_core_set_runtime_hook(&core, MM2_RUNTIME_EVENT_ALL,
                                     record_event, &log);
    pc = core.pc;
    cycles = core.cpu_cycles;
    log.stop_on_first_before = 1;
    ok = ok && !mm2_direct_core_step(&core);
    ok = ok && mm2_direct_core_is_stopped(&core);
    ok = ok && core.pc == pc && core.cpu_cycles == cycles &&
         core.executed_instructions == 0u;
    mm2_direct_core_resume(&core);
    ok = ok && mm2_direct_core_step(&core);
    ok = ok && !mm2_direct_core_is_stopped(&core) &&
         core.executed_instructions == 1u;

    mm2_direct_core_request_stop(&core);
    pc = core.pc;
    cycles = core.cpu_cycles;
    ok = ok && !mm2_direct_core_advance_frame(&core, 0u, 0u, 0u, &frame) &&
         mm2_direct_core_is_stopped(&core);
    ok = ok && frame.stopped && frame.trap == MM2_CORE_TRAP_NONE;
    ok = ok && !mm2_direct_core_advance_frame(&core, 0u, 0u, 0u, &frame) &&
         frame.stopped && frame.trap == MM2_CORE_TRAP_NONE;
    ok = ok && core.pc == pc && core.cpu_cycles == cycles;
    mm2_direct_core_resume(&core);

    core.pc = 0x7000u;
    core.trap = MM2_CORE_TRAP_NONE;
    ok = ok && !mm2_direct_core_step(&core);
    ok = ok && core.trap == MM2_CORE_TRAP_MISSING_IDENTITY;
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_FRONTIER)] == 1u;
    ok = ok && log.sequence_ok;
    mm2_direct_core_clear_runtime_hook(&core);

    ok = ok && mm2_direct_core_reset(&core, &rom);
    memset(&log, 0, sizeof(log));
    log.sequence_ok = 1;
    mm2_direct_core_set_runtime_hook(
        &core, MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE, record_event, &log);
    ok = ok && mm2_direct_core_step(&core);
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE)] == 1u;
    ok = ok && log.next_sequence == 1u && log.sequence_ok;
    free(prg);
    if (!ok) {
        fputs("runtime-hook structural self-test failed\n", stderr);
        return 1;
    }
    puts("PASS runtime hooks: before-boundary stop, external stop, resume and frontier event");
    return 0;
}

static int exact_rom_test(const char *path) {
    const uint64_t instruction_target = 25000u;
    MM2Rom rom;
    MM2DirectCore *baseline = mm2_direct_core_create();
    MM2DirectCore *hooked = mm2_direct_core_create();
    HookLog log;
    void *baseline_state = NULL;
    void *hooked_state = NULL;
    size_t state_size = mm2_direct_core_state_size();
    char error[256];
    char reason[256];
    unsigned stops = 0u;
    int ok;
    memset(&rom, 0, sizeof(rom));
    memset(&log, 0, sizeof(log));
    log.sequence_ok = 1;
    log.stop_on_first_bus_read = 1;
    ok = baseline && hooked && mm2_rom_load(path, &rom, error, sizeof(error));
    if (ok) ok = mm2_rom_is_expected(&rom, reason, sizeof(reason));
    if (ok) ok = mm2_direct_core_reset(baseline, &rom) &&
                 mm2_direct_core_reset(hooked, &rom);
    while (ok && baseline->executed_instructions < instruction_target)
        ok = mm2_direct_core_step(baseline);
    mm2_direct_core_set_runtime_hook(hooked, MM2_RUNTIME_EVENT_ALL,
                                     record_event, &log);
    while (ok && hooked->executed_instructions < instruction_target) {
        if (mm2_direct_core_is_stopped(hooked)) {
            stops++;
            mm2_direct_core_resume(hooked);
        }
        ok = mm2_direct_core_step(hooked);
    }
    if (ok && mm2_direct_core_is_stopped(hooked)) {
        stops++;
        mm2_direct_core_resume(hooked);
    }
    baseline_state = malloc(state_size);
    hooked_state = malloc(state_size);
    ok = ok && baseline_state && hooked_state;
    ok = ok && mm2_direct_core_state_export(baseline, baseline_state, state_size);
    ok = ok && mm2_direct_core_state_export(hooked, hooked_state, state_size);
    ok = ok && memcmp(baseline_state, hooked_state, state_size) == 0;
    ok = ok && stops == 1u && log.sequence_ok;
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE)] ==
                   instruction_target;
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_INSTRUCTION_AFTER)] ==
                   instruction_target - 1u;
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_BUS_READ)] > 0u;
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_BUS_WRITE)] > 0u;
    ok = ok && log.counts[event_index(MM2_RUNTIME_EVENT_FRAME_COMPLETE)] > 0u;
    free(hooked_state);
    free(baseline_state);
    mm2_direct_core_destroy(hooked);
    mm2_direct_core_destroy(baseline);
    if (rom.file_data) mm2_rom_free(&rom);
    if (!ok) {
        fputs("exact-ROM runtime-hook determinism test failed\n", stderr);
        return 1;
    }
    printf("PASS exact-ROM hook determinism: instructions=%llu events=%llu stops=%u\n",
           (unsigned long long)instruction_target,
           (unsigned long long)log.next_sequence, stops);
    return 0;
}

int main(int argc, char **argv) {
    int result = structural_test();
    if (result != 0 || argc != 2) return result;
    return exact_rom_test(argv[1]);
}
