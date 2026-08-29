#ifndef MM2_DIRECT_CORE_H
#define MM2_DIRECT_CORE_H

#include "mm2_rom.h"
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    MM2_FLAG_C = 0x01,
    MM2_FLAG_Z = 0x02,
    MM2_FLAG_I = 0x04,
    MM2_FLAG_D = 0x08,
    MM2_FLAG_B = 0x10,
    MM2_FLAG_U = 0x20,
    MM2_FLAG_V = 0x40,
    MM2_FLAG_N = 0x80
};

typedef enum MM2CoreTrap {
    MM2_CORE_TRAP_NONE = 0,
    MM2_CORE_TRAP_MISSING_IDENTITY = 1,
    MM2_CORE_TRAP_BAD_ROM = 2,
    MM2_CORE_TRAP_STEP_LIMIT = 3
} MM2CoreTrap;

typedef struct MM2ApuWriteEvent {
    uint64_t cpu_cycle;
    uint16_t address;
    uint8_t value;
} MM2ApuWriteEvent;

/* Stable application boundary. The machine layout is deliberately private so
   frontends cannot depend on incidental fields or bypass runtime invariants. */
typedef struct MM2DirectCore MM2DirectCore;

#define MM2_DIRECT_CORE_FRAME_WIDTH 256u
#define MM2_DIRECT_CORE_FRAME_HEIGHT 240u
#define MM2_DIRECT_CORE_FRAME_PIXELS \
    (MM2_DIRECT_CORE_FRAME_WIDTH * MM2_DIRECT_CORE_FRAME_HEIGHT)
#define MM2_PRESENTATION_WIDE_MARGIN 71u
#define MM2_PRESENTATION_WIDE_FRAME_WIDTH \
    (MM2_DIRECT_CORE_FRAME_WIDTH + MM2_PRESENTATION_WIDE_MARGIN * 2u)
#define MM2_PRESENTATION_MAX_FRAME_PIXELS \
    (MM2_PRESENTATION_WIDE_FRAME_WIDTH * MM2_DIRECT_CORE_FRAME_HEIGHT)
#define MM2_DIRECT_CORE_DEFAULT_FRAME_INSTRUCTION_LIMIT 50000u

typedef enum MM2PresentationMode {
    MM2_PRESENTATION_NATIVE_4_3 = 0,
    MM2_PRESENTATION_WIDE_GAMEPLAY = 1
} MM2PresentationMode;

typedef enum MM2PresentationReason {
    MM2_PRESENTATION_REASON_WIDE_DISABLED = 0,
    MM2_PRESENTATION_REASON_WIDE_GAMEPLAY = 1,
    MM2_PRESENTATION_REASON_UNSUPPORTED_STAGE = 2,
    MM2_PRESENTATION_REASON_FIXED_SCREEN_OR_MENU = 3,
    MM2_PRESENTATION_REASON_PLAYER_INACTIVE = 4,
    MM2_PRESENTATION_REASON_TRANSITION = 5,
    MM2_PRESENTATION_REASON_BOSS_APPROACH_OR_ROOM = 6,
    MM2_PRESENTATION_REASON_UNSUPPORTED_LAYOUT = 7
} MM2PresentationReason;

typedef struct MM2PresentationInfo {
    uint32_t width;
    uint32_t height;
    uint32_t native_x;
    MM2PresentationMode mode;
    MM2PresentationReason reason;
} MM2PresentationInfo;

typedef struct MM2FrameResult {
    uint8_t completed;
    uint8_t stopped;
    uint8_t player1_buttons;
    uint8_t player2_buttons;
    uint16_t program_counter;
    uint16_t reserved2;
    uint64_t start_frame;
    uint64_t end_frame;
    uint64_t executed_instructions;
    MM2CoreTrap trap;
} MM2FrameResult;

typedef enum MM2RuntimeEventType {
    MM2_RUNTIME_EVENT_INSTRUCTION_BEFORE = 1u << 0,
    MM2_RUNTIME_EVENT_BUS_READ = 1u << 1,
    MM2_RUNTIME_EVENT_BUS_WRITE = 1u << 2,
    MM2_RUNTIME_EVENT_INSTRUCTION_AFTER = 1u << 3,
    MM2_RUNTIME_EVENT_FRAME_COMPLETE = 1u << 4,
    MM2_RUNTIME_EVENT_FRONTIER = 1u << 5,
    MM2_RUNTIME_EVENT_ALL = (1u << 6) - 1u
} MM2RuntimeEventType;

typedef enum MM2RuntimeHookAction {
    MM2_RUNTIME_HOOK_CONTINUE = 0,
    MM2_RUNTIME_HOOK_STOP = 1
} MM2RuntimeHookAction;

typedef struct MM2RuntimeEvent {
    MM2RuntimeEventType type;
    uint64_t sequence;
    uint64_t instruction_index;
    uint64_t cpu_cycle;
    uint64_t frame;
    uint32_t identity;
    uint16_t program_counter;
    uint16_t bus_address;
    uint8_t bus_value;
    uint8_t reserved[3];
    MM2CoreTrap trap;
} MM2RuntimeEvent;

typedef MM2RuntimeHookAction (*MM2RuntimeHook)(
    const MM2RuntimeEvent *event, void *user_data);

typedef struct MM2CoreObservation {
    MM2CoreTrap trap;
    uint16_t program_counter;
    uint16_t reserved;
    uint32_t last_identity;
    uint64_t executed_instructions;
    uint64_t cpu_cycles;
    uint64_t ppu_cycles;
    uint64_t frames;
    uint64_t nmi_count;
    uint64_t irq_count;
    uint64_t framebuffer_hash;
    uint64_t sprite_pixels;
    uint64_t sprite_zero_hits;
    uint64_t sprite_overflow_scanlines;
    uint64_t controller_reads[2];
    uint64_t controller_latches;
    size_t apu_write_count;
    uint64_t apu_write_overflow;
    size_t pcm_sample_count;
    uint64_t pcm_total_samples;
    uint64_t pcm_hash;
    int16_t pcm_peak;
    int16_t reserved2;
    int64_t pcm_dc_sum;
    uint64_t pcm_abs_sum;
    uint64_t pcm_delta_abs_sum;
    uint64_t pcm_zero_crossings;
} MM2CoreObservation;

typedef enum MM2SnapshotStatus {
    MM2_SNAPSHOT_OK = 0,
    MM2_SNAPSHOT_INVALID_ARGUMENT = 1,
    MM2_SNAPSHOT_NO_MEMORY = 2,
    MM2_SNAPSHOT_IO_ERROR = 3,
    MM2_SNAPSHOT_BAD_FORMAT = 4,
    MM2_SNAPSHOT_UNSUPPORTED_VERSION = 5,
    MM2_SNAPSHOT_ROM_MISMATCH = 6,
    MM2_SNAPSHOT_CORE_MISMATCH = 7,
    MM2_SNAPSHOT_PAYLOAD_HASH_MISMATCH = 8,
    MM2_SNAPSHOT_TRAILING_DATA = 9,
    MM2_SNAPSHOT_INVALID_STATE = 10
} MM2SnapshotStatus;

MM2DirectCore *mm2_direct_core_create(void);
void mm2_direct_core_destroy(MM2DirectCore *core);

int mm2_direct_core_reset(MM2DirectCore *core, const MM2Rom *rom);
int mm2_direct_core_step(MM2DirectCore *core);
int mm2_direct_core_run(MM2DirectCore *core, uint64_t instruction_limit);
int mm2_direct_core_advance_frame(MM2DirectCore *core,
                                  uint8_t player1_buttons,
                                  uint8_t player2_buttons,
                                  uint64_t instruction_limit,
                                  MM2FrameResult *result);
void mm2_direct_core_request_nmi(MM2DirectCore *core);
void mm2_direct_core_set_controller(MM2DirectCore *core, unsigned port,
                                    uint8_t buttons);

/* Hooks execute synchronously on the core thread and must not re-enter it.
   A stop returned from an instruction-before event stops before that
   instruction. Stops requested by bus/frame/after events are committed after
   the current instruction, so no partially executed instruction is exposed. */
void mm2_direct_core_set_runtime_hook(MM2DirectCore *core,
                                      uint32_t event_mask,
                                      MM2RuntimeHook hook,
                                      void *user_data);
void mm2_direct_core_clear_runtime_hook(MM2DirectCore *core);
void mm2_direct_core_request_stop(MM2DirectCore *core);
int mm2_direct_core_is_stopped(const MM2DirectCore *core);
void mm2_direct_core_resume(MM2DirectCore *core);

uint64_t mm2_direct_core_frame_count(const MM2DirectCore *core);
const uint8_t *mm2_direct_core_framebuffer(const MM2DirectCore *core);
size_t mm2_direct_core_framebuffer_size(void);
int mm2_direct_core_frame_copy_indexed(const MM2DirectCore *core,
                                       uint8_t *output,
                                       size_t pixel_capacity);
int mm2_direct_core_frame_copy_bgra(const MM2DirectCore *core,
                                    uint32_t *output,
                                    size_t pixel_capacity);
int mm2_direct_core_presentation_info(const MM2DirectCore *core,
                                      int wide_screen_enabled,
                                      MM2PresentationInfo *info);
int mm2_direct_core_presentation_copy_indexed(
    const MM2DirectCore *core, int wide_screen_enabled,
    uint8_t *output, size_t pixel_capacity, MM2PresentationInfo *info);
int mm2_direct_core_presentation_copy_bgra(
    const MM2DirectCore *core, int wide_screen_enabled,
    uint32_t *output, size_t pixel_capacity, MM2PresentationInfo *info);
void mm2_direct_core_set_wide_screen_enabled(MM2DirectCore *core,
                                             int enabled);
int mm2_direct_core_wide_screen_enabled(const MM2DirectCore *core);
uint64_t mm2_direct_core_render_hash(const MM2DirectCore *core);

uint64_t mm2_direct_core_pcm_total_samples(const MM2DirectCore *core);
size_t mm2_direct_core_pcm_copy(const MM2DirectCore *core,
                                uint64_t first_sample, int16_t *output,
                                size_t sample_capacity);
size_t mm2_direct_core_audio_available(const MM2DirectCore *core);
size_t mm2_direct_core_audio_read(MM2DirectCore *core, int16_t *output,
                                  size_t sample_capacity);
size_t mm2_direct_core_audio_discard(MM2DirectCore *core,
                                     size_t sample_count);
void mm2_direct_core_audio_clear(MM2DirectCore *core);
int mm2_direct_core_audio_overflowed(const MM2DirectCore *core);
void mm2_direct_core_audio_clear_overflow(MM2DirectCore *core);
size_t mm2_direct_core_apu_write_count(const MM2DirectCore *core);
size_t mm2_direct_core_pcm_sample_count(const MM2DirectCore *core);
uint64_t mm2_direct_core_pcm_hash(const MM2DirectCore *core);
int mm2_direct_core_observe(const MM2DirectCore *core,
                            MM2CoreObservation *observation);
size_t mm2_direct_core_apu_write_copy(const MM2DirectCore *core,
                                      size_t first_event,
                                      MM2ApuWriteEvent *output,
                                      size_t event_capacity);
uint8_t mm2_direct_core_ram_peek(const MM2DirectCore *core,
                                 uint16_t address);

MM2CoreTrap mm2_direct_core_trap(const MM2DirectCore *core);
uint16_t mm2_direct_core_program_counter(const MM2DirectCore *core);
uint64_t mm2_direct_core_executed_instructions(const MM2DirectCore *core);
uint64_t mm2_direct_core_cpu_cycles(const MM2DirectCore *core);

/* UTF-8 paths are used on every host. Save writes and flushes a temporary file
   before atomically replacing the requested path. The versioned payload is
   bound to both the exact ROM SHA-256 and generated static-core identity. */
MM2SnapshotStatus mm2_direct_core_snapshot_save(
    const MM2DirectCore *core, const MM2Rom *rom, const char *utf8_path,
    char *error, size_t error_capacity);
MM2SnapshotStatus mm2_direct_core_snapshot_load(
    MM2DirectCore *core, const MM2Rom *rom, const char *utf8_path,
    char *error, size_t error_capacity);
const char *mm2_snapshot_status_name(MM2SnapshotStatus status);

/* Host-independent state transfer underlying core-owned snapshots and the
   internal state-search tools. Persist snapshots through the snapshot API so
   version, ROM/core identity, integrity and atomic-write checks are applied. */
size_t mm2_direct_core_state_size(void);
int mm2_direct_core_state_export(const MM2DirectCore *core, void *output,
                                 size_t output_size);
int mm2_direct_core_state_import(MM2DirectCore *core, const void *input,
                                 size_t input_size, const MM2Rom *rom);

const char *mm2_direct_core_trap_name(MM2CoreTrap trap);
size_t mm2_direct_core_identity_count(void);
uint32_t mm2_direct_core_generated_crc32(void);
void mm2_direct_core_apu_test_write(MM2DirectCore *core, uint16_t address,
                                    uint8_t value);
void mm2_direct_core_apu_test_advance(MM2DirectCore *core,
                                      uint64_t cpu_cycles);

#ifdef __cplusplus
}
#endif
#endif
