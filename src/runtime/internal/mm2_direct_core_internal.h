#ifndef MM2_DIRECT_CORE_INTERNAL_H
#define MM2_DIRECT_CORE_INTERNAL_H

#include "mm2_direct_core.h"
#include "mm2_mmc1.h"

#define MM2_WIDE_SPRITE_CAPTURE_CAPACITY 64u

typedef struct MM2WideSpriteCapture {
    int16_t x;
    uint8_t y;
    uint8_t tile;
    uint8_t attributes;
    uint8_t oam_index;
    uint8_t object_slot;
} MM2WideSpriteCapture;

/* Presentation data must describe the completed visible frame, not the PPU
   memory after the following vblank/NMI has started changing CHR and
   nametables.  This compact latch is captured when scanline 240 begins and is
   shared by headed display, screenshots and headless frame copies. */
typedef struct MM2PpuPresentationLatch {
    uint8_t chr_ram[0x2000];
    uint8_t ciram[0x800];
    uint8_t palette[0x20];
    MM2WideSpriteCapture wide_sprites[MM2_WIDE_SPRITE_CAPTURE_CAPACITY];
    MM2PresentationInfo wide_info;
    uint8_t ppu_ctrl;
    uint8_t ppu_mask;
    uint8_t scroll_x;
    uint8_t scroll_y;
    uint8_t mirroring;
    uint8_t wide_sprite_count;
    uint8_t valid;
} MM2PpuPresentationLatch;

/* Private machine layout. Production frontends use mm2_direct_core.h only.
   State-search and certification tools may opt in when writable inspection or
   cheap deterministic state cloning is part of the test itself. */
struct MM2DirectCore {
    uint8_t a, x, y, s, p;
    uint16_t pc;
    uint8_t ram[0x800];
    uint8_t prg_ram[0x2000];
    uint8_t apu_io[0x20];
    uint8_t chr_ram[0x2000];
    uint8_t ciram[0x800];
    uint8_t palette[0x20];
    uint8_t oam[0x100];
    uint8_t framebuffer[256u * 240u];
    uint8_t ppu_ctrl, ppu_mask, ppu_status, oam_addr, ppu_read_buffer;
    uint8_t ppu_write_toggle, fine_x, scroll_x, scroll_y, ppu_open_bus;
    uint16_t ppu_v, ppu_t;
    uint16_t ppu_scanline, ppu_dot;
    uint64_t ppu_cycles, ppu_frames, framebuffer_hash;
    uint64_t sprite_pixels, sprite_zero_hits;
    uint64_t sprite_overflow_scanlines;
    uint8_t ppu_secondary_oam[32];
    uint8_t ppu_sprite_count_next, ppu_sprite_count_current;
    uint8_t ppu_sprite0_next, ppu_sprite0_current;
    uint8_t ppu_eval_oam_addr, ppu_eval_secondary_addr, ppu_eval_buffer;
    uint8_t ppu_eval_sprite_in_range, ppu_eval_copy_done;
    uint8_t ppu_eval_overflow_recorded;
    uint8_t controller_buttons[2], controller_shift[2], controller_strobe;
    uint64_t controller_reads[2], controller_latches;
    MM2ApuWriteEvent apu_writes[4096];
    size_t apu_write_count;
    uint64_t apu_write_overflow;
    int16_t pcm_samples[8192];
    size_t pcm_sample_count;
    uint64_t pcm_total_samples, pcm_hash;
    int16_t pcm_output[8192];
    size_t pcm_output_read, pcm_output_write, pcm_output_count;
    uint64_t pcm_output_dropped;
    uint8_t pcm_output_overflowed;
    int64_t pcm_dc_sum;
    uint64_t pcm_abs_sum, pcm_delta_abs_sum, pcm_zero_crossings;
    int16_t pcm_previous_sample;
    int16_t pcm_peak;
    uint32_t apu_sample_cycle_remainder;
    int64_t apu_mix_accumulator;
    uint32_t apu_mix_accumulator_cycles;
    uint32_t apu_pulse_phase[2], apu_triangle_phase;
    uint16_t apu_pulse_timer[2], apu_triangle_timer, apu_noise_timer;
    uint8_t apu_pulse_sequence[2], apu_triangle_sequence;
    uint8_t apu_triangle_output;
    uint8_t apu_sweep_divider[2], apu_sweep_reload[2];
    uint16_t apu_noise_lfsr;
    uint32_t apu_frame_cycle;
    uint8_t apu_frame_mode, apu_frame_irq, apu_frame_irq_inhibit;
    uint8_t apu_frame_write_pending, apu_frame_write_value;
    uint8_t apu_frame_write_delay, apu_frame_tick_block;
    uint16_t apu_length[4];
    uint8_t apu_envelope_decay[3], apu_envelope_divider[3], apu_envelope_start[3];
    uint8_t apu_triangle_linear, apu_triangle_reload;
    uint16_t apu_dmc_timer;
    uint16_t apu_dmc_address, apu_dmc_bytes_remaining;
    uint8_t apu_dmc_sample_buffer, apu_dmc_buffer_empty;
    uint8_t apu_dmc_shift, apu_dmc_bits_remaining, apu_dmc_silence;
    uint8_t apu_dmc_output, apu_dmc_irq;
    uint64_t apu_dmc_fetches, apu_dmc_stall_cycles;
    const uint8_t *prg;
    size_t prg_size;
    MM2Mmc1 mapper;
    uint64_t cpu_cycles;
    uint64_t executed_instructions;
    uint64_t nmi_count, irq_count;
    uint64_t bus_reads;
    uint64_t bus_writes;
    uint32_t last_identity;
    MM2CoreTrap trap;
    uint8_t nmi_pending;
    MM2RuntimeHook runtime_hook;
    void *runtime_hook_user;
    uint32_t runtime_hook_mask;
    uint8_t runtime_hook_stop_requested;
    uint8_t runtime_hook_stopped;
    uint8_t runtime_hook_dispatching;
    uint64_t runtime_hook_sequence;
    uint8_t wide_screen_enabled;
    MM2WideSpriteCapture wide_sprites[MM2_WIDE_SPRITE_CAPTURE_CAPACITY];
    uint8_t wide_sprite_count;
    uint8_t wide_layout_initialized;
    uint8_t wide_layout_mode;
    uint8_t wide_layout_stage;
    uint8_t wide_layout_bank;
    uint8_t wide_layout_screen;
    uint8_t wide_layout_camera_x;
    uint8_t wide_layout_camera_y;
    MM2PpuPresentationLatch presentation_latch;
};

/* Internal subsystem contract. These functions are linked only inside the
   direct-core library; the launcher and ordinary route tools continue to use
   the opaque API in mm2_direct_core.h. */
void emit_runtime_event(MM2DirectCore *c, MM2RuntimeEventType type,
                        uint16_t address, uint8_t value);

uint8_t ppu_read_register(MM2DirectCore *c, unsigned reg);
void ppu_write_register(MM2DirectCore *c, unsigned reg, uint8_t value);
void ppu_tick(MM2DirectCore *c);
int ppu_presentation_info(const MM2DirectCore *c, int wide_screen_enabled,
                          MM2PresentationInfo *info);
int ppu_presentation_copy_indexed(const MM2DirectCore *c,
                                  int wide_screen_enabled,
                                  uint8_t *output, size_t pixel_capacity,
                                  MM2PresentationInfo *info);
void ppu_wide_sprite_capture_begin(MM2DirectCore *c);
void ppu_wide_sprite_capture_component(MM2DirectCore *c,
                                       uint8_t oam_offset,
                                       uint8_t wrapped_x,
                                       int native_will_hide);
void ppu_wide_expand_object_window(MM2DirectCore *c);
int ppu_wide_keep_projectile_active(const MM2DirectCore *c);

uint8_t mm2_apu_read_status(MM2DirectCore *c);
void mm2_apu_write_register(MM2DirectCore *c, uint16_t address, uint8_t value);
uint64_t apu_advance(MM2DirectCore *c, uint64_t cpu_cycles);
int16_t apu_current_mixed_sample(MM2DirectCore *c);

uint8_t read8(MM2DirectCore *c, uint16_t address);
void write8(MM2DirectCore *c, uint16_t address, uint8_t value);
uint16_t read16_zp(MM2DirectCore *c, uint8_t address);
uint16_t read16_jmp_bug(MM2DirectCore *c, uint16_t address);

void set_nz(MM2DirectCore *c, uint8_t value);
void push(MM2DirectCore *c, uint8_t value);
uint8_t pull(MM2DirectCore *c);
void compare8(MM2DirectCore *c, uint8_t left, uint8_t right);
void adc8(MM2DirectCore *c, uint8_t value);
void sbc8(MM2DirectCore *c, uint8_t value);
uint8_t asl8(MM2DirectCore *c, uint8_t value);
uint8_t lsr8(MM2DirectCore *c, uint8_t value);
uint8_t rol8(MM2DirectCore *c, uint8_t value);
uint8_t ror8(MM2DirectCore *c, uint8_t value);
void service_nmi(MM2DirectCore *c);
void service_irq(MM2DirectCore *c);

void scheduler_advance(MM2DirectCore *c, uint64_t cpu_cycles);
int mm2_direct_core_dispatch(MM2DirectCore *c, uint8_t bank, uint16_t pc);

#endif
