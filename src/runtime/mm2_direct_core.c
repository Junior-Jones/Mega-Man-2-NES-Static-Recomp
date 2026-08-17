#include "internal/mm2_direct_core_internal.h"
#include <stdlib.h>
#include <string.h>

void emit_runtime_event(MM2DirectCore *c, MM2RuntimeEventType type,
                        uint16_t address, uint8_t value) {
    MM2RuntimeEvent event;
    MM2RuntimeHookAction action;
    if (!c || !c->runtime_hook || c->runtime_hook_dispatching ||
        c->runtime_hook_stop_requested ||
        (c->runtime_hook_mask & (uint32_t)type) == 0u) return;
    memset(&event, 0, sizeof(event));
    event.type = type;
    event.sequence = c->runtime_hook_sequence++;
    event.instruction_index = c->executed_instructions;
    event.cpu_cycle = c->cpu_cycles;
    event.frame = c->ppu_frames;
    event.identity = c->last_identity;
    event.program_counter = c->pc;
    event.bus_address = address;
    event.bus_value = value;
    event.trap = c->trap;
    c->runtime_hook_dispatching = 1u;
    action = c->runtime_hook(&event, c->runtime_hook_user);
    c->runtime_hook_dispatching = 0u;
    if (action == MM2_RUNTIME_HOOK_STOP)
        c->runtime_hook_stop_requested = 1u;
}

static void commit_runtime_stop(MM2DirectCore *c) {
    if (!c || !c->runtime_hook_stop_requested) return;
    c->runtime_hook_stop_requested = 0u;
    c->runtime_hook_stopped = 1u;
}

int mm2_direct_core_reset(MM2DirectCore *c, const MM2Rom *rom) {
    if (!c) return 0;
    memset(c, 0, sizeof(*c));
    if (!rom || !rom->prg || rom->prg_size != 0x40000u || rom->mapper != 1 || rom->reset_vector != 0xFFE0u) {
        c->trap = MM2_CORE_TRAP_BAD_ROM; return 0;
    }
    c->prg = rom->prg; c->prg_size = rom->prg_size;
    c->s = 0xFDu; c->p = MM2_FLAG_U | MM2_FLAG_I; c->pc = rom->reset_vector; c->cpu_cycles = 7u;
    c->apu_noise_lfsr = 1u; c->pcm_hash = 1469598103934665603ull;
    c->apu_dmc_timer = 428u;
    c->apu_dmc_address = 0xC000u;
    c->apu_dmc_buffer_empty = 1u;
    c->apu_dmc_bits_remaining = 8u;
    c->apu_dmc_silence = 1u;
    memset(c->ppu_secondary_oam, 0xFF, sizeof(c->ppu_secondary_oam));
    mm2_mmc1_reset(&c->mapper);
    return 1;
}

MM2DirectCore *mm2_direct_core_create(void) {
    return (MM2DirectCore *)calloc(1u, sizeof(MM2DirectCore));
}

void mm2_direct_core_destroy(MM2DirectCore *c) {
    free(c);
}

void mm2_direct_core_request_nmi(MM2DirectCore *c) { if (c) c->nmi_pending = 1u; }

void mm2_direct_core_set_controller(MM2DirectCore *c, unsigned port, uint8_t buttons) {
    if (!c || port >= 2u) return;
    c->controller_buttons[port] = buttons;
    if (c->controller_strobe) c->controller_shift[port] = buttons;
}

void mm2_direct_core_set_runtime_hook(MM2DirectCore *c, uint32_t mask,
                                      MM2RuntimeHook hook, void *user_data) {
    if (!c) return;
    c->runtime_hook = hook;
    c->runtime_hook_user = user_data;
    c->runtime_hook_mask = hook ? mask & (uint32_t)MM2_RUNTIME_EVENT_ALL : 0u;
    c->runtime_hook_stop_requested = 0u;
    c->runtime_hook_stopped = 0u;
    c->runtime_hook_dispatching = 0u;
    c->runtime_hook_sequence = 0u;
}

void mm2_direct_core_clear_runtime_hook(MM2DirectCore *c) {
    mm2_direct_core_set_runtime_hook(c, 0u, NULL, NULL);
}

void mm2_direct_core_request_stop(MM2DirectCore *c) {
    if (c && !c->runtime_hook_stopped) c->runtime_hook_stop_requested = 1u;
}

int mm2_direct_core_is_stopped(const MM2DirectCore *c) {
    return c && c->runtime_hook_stopped != 0u;
}

void mm2_direct_core_resume(MM2DirectCore *c) {
    if (!c) return;
    c->runtime_hook_stop_requested = 0u;
    c->runtime_hook_stopped = 0u;
}

uint64_t mm2_direct_core_render_hash(const MM2DirectCore *c) { return c ? c->framebuffer_hash : 0u; }
uint64_t mm2_direct_core_frame_count(const MM2DirectCore *c) { return c ? c->ppu_frames : 0u; }
const uint8_t *mm2_direct_core_framebuffer(const MM2DirectCore *c) { return c ? c->framebuffer : NULL; }
size_t mm2_direct_core_framebuffer_size(void) { return MM2_DIRECT_CORE_FRAME_PIXELS; }
int mm2_direct_core_frame_copy_indexed(const MM2DirectCore *c, uint8_t *output,
                                       size_t capacity) {
    if (!c || !output || capacity < MM2_DIRECT_CORE_FRAME_PIXELS) return 0;
    memcpy(output, c->framebuffer, MM2_DIRECT_CORE_FRAME_PIXELS);
    return 1;
}

int mm2_direct_core_frame_copy_bgra(const MM2DirectCore *c, uint32_t *output,
                                    size_t capacity) {
    static const uint32_t rgb[64] = {
        0x545454u,0x001E74u,0x081090u,0x300088u,0x440064u,0x5C0030u,0x540400u,0x3C1800u,
        0x202A00u,0x083A00u,0x004000u,0x003C00u,0x00323Cu,0u,0u,0u,
        0x989698u,0x084CC4u,0x3032ECu,0x5C1EE4u,0x8814B0u,0xA01464u,0x982220u,0x783C00u,
        0x545A00u,0x287200u,0x087C00u,0x007628u,0x006678u,0u,0u,0u,
        0xECEEECu,0x4C9AECu,0x787CECu,0xB062ECu,0xE454ECu,0xEC58B4u,0xEC6A64u,0xD48820u,
        0xA0AA00u,0x74C400u,0x4CD020u,0x38CC6Cu,0x38B4CCu,0x3C3C3Cu,0u,0u,
        0xECEEECu,0xA8CCECu,0xBCBCECu,0xD4B2ECu,0xECAEECu,0xECAED4u,0xECB4B0u,0xE4C490u,
        0xCCD278u,0xB4DE78u,0xA8E290u,0x98E2B4u,0xA0D6E4u,0xA0A2A0u,0u,0u
    };
    size_t index;
    if (!c || !output || capacity < MM2_DIRECT_CORE_FRAME_PIXELS) return 0;
    for (index = 0u; index < MM2_DIRECT_CORE_FRAME_PIXELS; ++index)
        output[index] = UINT32_C(0xff000000) | rgb[c->framebuffer[index] & 0x3fu];
    return 1;
}
size_t mm2_direct_core_apu_write_count(const MM2DirectCore *c) { return c ? c->apu_write_count : 0u; }
size_t mm2_direct_core_pcm_sample_count(const MM2DirectCore *c) { return c ? c->pcm_sample_count : 0u; }
uint64_t mm2_direct_core_pcm_hash(const MM2DirectCore *c) { return c ? c->pcm_hash : 0u; }

int mm2_direct_core_observe(const MM2DirectCore *c,
                            MM2CoreObservation *observation) {
    if (!c || !observation) return 0;
    memset(observation, 0, sizeof(*observation));
    observation->trap = c->trap;
    observation->program_counter = c->pc;
    observation->last_identity = c->last_identity;
    observation->executed_instructions = c->executed_instructions;
    observation->cpu_cycles = c->cpu_cycles;
    observation->ppu_cycles = c->ppu_cycles;
    observation->frames = c->ppu_frames;
    observation->nmi_count = c->nmi_count;
    observation->irq_count = c->irq_count;
    observation->framebuffer_hash = c->framebuffer_hash;
    observation->sprite_pixels = c->sprite_pixels;
    observation->sprite_zero_hits = c->sprite_zero_hits;
    observation->sprite_overflow_scanlines = c->sprite_overflow_scanlines;
    observation->controller_reads[0] = c->controller_reads[0];
    observation->controller_reads[1] = c->controller_reads[1];
    observation->controller_latches = c->controller_latches;
    observation->apu_write_count = c->apu_write_count;
    observation->apu_write_overflow = c->apu_write_overflow;
    observation->pcm_sample_count = c->pcm_sample_count;
    observation->pcm_total_samples = c->pcm_total_samples;
    observation->pcm_hash = c->pcm_hash;
    observation->pcm_peak = c->pcm_peak;
    observation->pcm_dc_sum = c->pcm_dc_sum;
    observation->pcm_abs_sum = c->pcm_abs_sum;
    observation->pcm_delta_abs_sum = c->pcm_delta_abs_sum;
    observation->pcm_zero_crossings = c->pcm_zero_crossings;
    return 1;
}

size_t mm2_direct_core_apu_write_copy(const MM2DirectCore *c,
                                      size_t first, MM2ApuWriteEvent *output,
                                      size_t capacity) {
    size_t count;
    if (!c || !output || capacity == 0u || first >= c->apu_write_count)
        return 0u;
    count = c->apu_write_count - first;
    if (count > capacity) count = capacity;
    memcpy(output, c->apu_writes + first, count * sizeof(*output));
    return count;
}

uint8_t mm2_direct_core_ram_peek(const MM2DirectCore *c, uint16_t address) {
    return c ? c->ram[address & 0x07FFu] : 0u;
}
uint64_t mm2_direct_core_pcm_total_samples(const MM2DirectCore *c) { return c ? c->pcm_total_samples : 0u; }

size_t mm2_direct_core_pcm_copy(const MM2DirectCore *c, uint64_t first,
                                int16_t *output, size_t capacity) {
    uint64_t oldest;
    uint64_t available;
    size_t count;
    size_t index;
    if (!c || !output || capacity == 0u) return 0u;
    oldest = c->pcm_total_samples > 8192u ? c->pcm_total_samples - 8192u : 0u;
    if (first < oldest || first >= c->pcm_total_samples) return 0u;
    available = c->pcm_total_samples - first;
    count = available < capacity ? (size_t)available : capacity;
    for (index = 0u; index < count; ++index)
        output[index] = c->pcm_samples[(size_t)((first + index) % 8192u)];
    return count;
}

size_t mm2_direct_core_audio_available(const MM2DirectCore *c) {
    return c ? c->pcm_output_count : 0u;
}

size_t mm2_direct_core_audio_read(MM2DirectCore *c, int16_t *output,
                                  size_t capacity) {
    const size_t queue_capacity = c ? sizeof(c->pcm_output) / sizeof(c->pcm_output[0]) : 0u;
    size_t count;
    size_t index;
    if (!c || !output || capacity == 0u) return 0u;
    count = c->pcm_output_count < capacity ? c->pcm_output_count : capacity;
    for (index = 0u; index < count; ++index) {
        output[index] = c->pcm_output[c->pcm_output_read];
        c->pcm_output_read = (c->pcm_output_read + 1u) % queue_capacity;
    }
    c->pcm_output_count -= count;
    return count;
}

size_t mm2_direct_core_audio_discard(MM2DirectCore *c, size_t count) {
    const size_t capacity = c ? sizeof(c->pcm_output) / sizeof(c->pcm_output[0]) : 0u;
    if (!c) return 0u;
    if (count > c->pcm_output_count) count = c->pcm_output_count;
    c->pcm_output_read = (c->pcm_output_read + count) % capacity;
    c->pcm_output_count -= count;
    return count;
}

void mm2_direct_core_audio_clear(MM2DirectCore *c) {
    if (!c) return;
    c->pcm_output_read = 0u;
    c->pcm_output_write = 0u;
    c->pcm_output_count = 0u;
}

int mm2_direct_core_audio_overflowed(const MM2DirectCore *c) {
    return c && c->pcm_output_overflowed != 0u;
}

void mm2_direct_core_audio_clear_overflow(MM2DirectCore *c) {
    if (c) c->pcm_output_overflowed = 0u;
}

MM2CoreTrap mm2_direct_core_trap(const MM2DirectCore *c) {
    return c ? c->trap : MM2_CORE_TRAP_BAD_ROM;
}
uint16_t mm2_direct_core_program_counter(const MM2DirectCore *c) { return c ? c->pc : 0u; }
uint64_t mm2_direct_core_executed_instructions(const MM2DirectCore *c) { return c ? c->executed_instructions : 0u; }
uint64_t mm2_direct_core_cpu_cycles(const MM2DirectCore *c) { return c ? c->cpu_cycles : 0u; }

size_t mm2_direct_core_state_size(void) { return sizeof(MM2DirectCore); }

int mm2_direct_core_state_export(const MM2DirectCore *c, void *output,
                                 size_t output_size) {
    MM2DirectCore copy;
    if (!c || !output || output_size != sizeof(*c)) return 0;
    copy = *c;
    copy.prg = NULL;
    copy.prg_size = 0u;
    copy.runtime_hook = NULL;
    copy.runtime_hook_user = NULL;
    copy.runtime_hook_mask = 0u;
    copy.runtime_hook_stop_requested = 0u;
    copy.runtime_hook_stopped = 0u;
    copy.runtime_hook_dispatching = 0u;
    copy.runtime_hook_sequence = 0u;
    memcpy(output, &copy, sizeof(copy));
    return 1;
}

int mm2_direct_core_state_import(MM2DirectCore *c, const void *input,
                                 size_t input_size, const MM2Rom *rom) {
    MM2DirectCore *copy;
    MM2RuntimeHook hook;
    void *hook_user;
    uint32_t hook_mask;
    uint64_t hook_sequence;
    if (!c || !input || input_size != sizeof(*c) || !rom || !rom->prg ||
        rom->prg_size != 0x40000u || rom->mapper != 1 ||
        rom->reset_vector != 0xFFE0u) return 0;
    hook = c->runtime_hook;
    hook_user = c->runtime_hook_user;
    hook_mask = c->runtime_hook_mask;
    hook_sequence = c->runtime_hook_sequence;
    copy = (MM2DirectCore *)malloc(sizeof(*copy));
    if (!copy) return 0;
    memcpy(copy, input, sizeof(*copy));
    if (copy->prg != NULL || copy->prg_size != 0u ||
        copy->ppu_scanline >= 262u || copy->ppu_dot >= 341u ||
        copy->apu_write_count > sizeof(copy->apu_writes) / sizeof(copy->apu_writes[0]) ||
        copy->pcm_sample_count > sizeof(copy->pcm_samples) / sizeof(copy->pcm_samples[0]) ||
        copy->pcm_output_read >= sizeof(copy->pcm_output) / sizeof(copy->pcm_output[0]) ||
        copy->pcm_output_write >= sizeof(copy->pcm_output) / sizeof(copy->pcm_output[0]) ||
        copy->pcm_output_count > sizeof(copy->pcm_output) / sizeof(copy->pcm_output[0]) ||
        copy->mapper.shift_count > 4u || copy->trap > MM2_CORE_TRAP_STEP_LIMIT ||
        copy->apu_frame_mode > 1u || copy->apu_frame_irq > 1u ||
        copy->apu_frame_irq_inhibit > 1u ||
        copy->apu_frame_write_pending > 1u ||
        copy->apu_frame_write_delay > 4u || copy->apu_frame_tick_block > 2u ||
        copy->apu_sample_cycle_remainder >= 1789773u ||
        copy->apu_mix_accumulator_cycles > 41u ||
        copy->apu_pulse_sequence[0] > 7u ||
        copy->apu_pulse_sequence[1] > 7u ||
        copy->apu_triangle_sequence > 31u ||
        copy->apu_triangle_output > 15u || copy->apu_dmc_output > 127u ||
        copy->ppu_sprite_count_next > 8u ||
        copy->ppu_sprite_count_current > 8u ||
        copy->ppu_eval_secondary_addr > 32u ||
        copy->ppu_sprite0_next > 1u || copy->ppu_sprite0_current > 1u ||
        copy->ppu_eval_sprite_in_range > 1u ||
        copy->ppu_eval_copy_done > 1u ||
        copy->ppu_eval_overflow_recorded > 1u ||
        copy->runtime_hook != NULL || copy->runtime_hook_user != NULL ||
        copy->runtime_hook_mask != 0u || copy->runtime_hook_stop_requested != 0u ||
        copy->runtime_hook_stopped != 0u || copy->runtime_hook_dispatching != 0u ||
        copy->runtime_hook_sequence != 0u) {
        free(copy);
        return 0;
    }
    copy->prg = rom->prg;
    copy->prg_size = rom->prg_size;
    copy->runtime_hook = hook;
    copy->runtime_hook_user = hook_user;
    copy->runtime_hook_mask = hook_mask;
    copy->runtime_hook_sequence = hook_sequence;
    *c = *copy;
    free(copy);
    return 1;
}

int mm2_direct_core_step(MM2DirectCore *c) {
    uint32_t key;
    uint8_t bank;
    uint64_t start_cycles;
    if (!c || c->trap != MM2_CORE_TRAP_NONE || c->runtime_hook_stopped) return 0;
    if (c->runtime_hook_stop_requested) {
        commit_runtime_stop(c);
        return 0;
    }
    start_cycles = c->cpu_cycles;
    if (c->nmi_pending) service_nmi(c);
    else if ((c->apu_frame_irq || c->apu_dmc_irq) &&
             (c->p & MM2_FLAG_I) == 0u)
        service_irq(c);
    bank = (uint8_t)mm2_mmc1_prg_bank_16k(&c->mapper, c->pc, 16u);
    key = ((uint32_t)bank << 16) | c->pc;
    c->last_identity = key;
    emit_runtime_event(c, MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE, 0u, 0u);
    if (c->runtime_hook_stop_requested) {
        commit_runtime_stop(c);
        return 0;
    }
    if (!mm2_direct_core_dispatch(c, bank, c->pc)) {
        c->trap = MM2_CORE_TRAP_MISSING_IDENTITY;
        emit_runtime_event(c, MM2_RUNTIME_EVENT_FRONTIER, 0u, 0u);
        return 0;
    }
    scheduler_advance(c, c->cpu_cycles - start_cycles);
    c->executed_instructions++;
    emit_runtime_event(c, MM2_RUNTIME_EVENT_INSTRUCTION_AFTER, 0u, 0u);
    commit_runtime_stop(c);
    return 1;
}

int mm2_direct_core_advance_frame(MM2DirectCore *c, uint8_t player1,
                                  uint8_t player2, uint64_t limit,
                                  MM2FrameResult *result) {
    uint64_t start_frame;
    uint64_t start_instructions;
    uint64_t index;
    if (result) memset(result, 0, sizeof(*result));
    if (!c) return 0;
    if (c->trap != MM2_CORE_TRAP_NONE || c->runtime_hook_stopped) {
        if (result) {
            result->stopped = c->runtime_hook_stopped;
            result->program_counter = c->pc;
            result->start_frame = c->ppu_frames;
            result->end_frame = c->ppu_frames;
            result->trap = c->trap;
        }
        return 0;
    }
    if (limit == 0u) limit = MM2_DIRECT_CORE_DEFAULT_FRAME_INSTRUCTION_LIMIT;
    start_frame = c->ppu_frames;
    start_instructions = c->executed_instructions;
    mm2_direct_core_set_controller(c, 0u, player1);
    mm2_direct_core_set_controller(c, 1u, player2);
    for (index = 0u; index < limit && c->ppu_frames == start_frame; ++index) {
        if (!mm2_direct_core_step(c)) break;
    }
    if (c->ppu_frames == start_frame && c->trap == MM2_CORE_TRAP_NONE &&
        !c->runtime_hook_stopped)
        c->trap = MM2_CORE_TRAP_STEP_LIMIT;
    if (result) {
        result->completed = (uint8_t)(c->ppu_frames > start_frame);
        result->stopped = c->runtime_hook_stopped;
        result->player1_buttons = player1;
        result->player2_buttons = player2;
        result->program_counter = c->pc;
        result->start_frame = start_frame;
        result->end_frame = c->ppu_frames;
        result->executed_instructions = c->executed_instructions - start_instructions;
        result->trap = c->trap;
    }
    return c->ppu_frames > start_frame;
}

int mm2_direct_core_run(MM2DirectCore *c, uint64_t limit) {
    uint64_t i;
    for (i = 0u; i < limit; ++i) if (!mm2_direct_core_step(c)) return 0;
    c->trap = MM2_CORE_TRAP_STEP_LIMIT;
    return 1;
}

const char *mm2_direct_core_trap_name(MM2CoreTrap trap) {
    switch (trap) {
    case MM2_CORE_TRAP_NONE: return "none";
    case MM2_CORE_TRAP_MISSING_IDENTITY: return "missing_bank_pc_identity";
    case MM2_CORE_TRAP_BAD_ROM: return "bad_rom";
    case MM2_CORE_TRAP_STEP_LIMIT: return "step_limit";
    default: return "unknown";
    }
}

size_t mm2_direct_core_identity_count(void) { return 20149u; }
uint32_t mm2_direct_core_generated_crc32(void) { return 0x0FCFC04Du; }
void mm2_direct_core_apu_test_write(MM2DirectCore *c, uint16_t address, uint8_t value) {
    if (c && address >= 0x4000u && address <= 0x4017u)
        write8(c, address, value);
}
void mm2_direct_core_apu_test_advance(MM2DirectCore *c, uint64_t cpu_cycles) {
    if (c) apu_advance(c, cpu_cycles);
}
