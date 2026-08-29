#include "internal/mm2_direct_core_internal.h"
#include <string.h>

#define MM2_WIDE_LAYOUT_UNKNOWN 0u
#define MM2_WIDE_LAYOUT_HORIZONTAL 1u
#define MM2_WIDE_LAYOUT_VERTICAL 2u

static void ppu_wide_observe_layout(MM2DirectCore *c) {
    uint8_t stage;
    uint8_t bank;
    uint8_t screen;
    uint8_t camera_x;
    uint8_t camera_y;
    int previous_world_x;
    int world_x;
    int delta_x;
    int delta_y;
    if (!c) return;
    stage = c->ram[0x2Au];
    bank = c->ram[0x29u];
    screen = c->ram[0x20u];
    camera_x = c->ram[0x1Fu];
    camera_y = c->ram[0x22u];
    if (c->wide_layout_initialized == 0u ||
        stage != c->wide_layout_stage || bank != c->wide_layout_bank) {
        c->wide_layout_initialized = 1u;
        c->wide_layout_mode = MM2_WIDE_LAYOUT_UNKNOWN;
    } else {
        previous_world_x = (int)c->wide_layout_screen * 256 +
                           (int)c->wide_layout_camera_x;
        world_x = (int)screen * 256 + (int)camera_x;
        delta_x = world_x - previous_world_x;
        delta_y = (int)(int8_t)(uint8_t)(camera_y -
                                         c->wide_layout_camera_y);

        /* A vertical scroll is authoritative. A normal horizontal page wrap
           changes the combined page/X position by only a few pixels; a large
           page discontinuity is therefore a room transition and returns to
           fail-closed unknown mode until actual movement proves the layout. */
        if (delta_y != 0) {
            c->wide_layout_mode = MM2_WIDE_LAYOUT_VERTICAL;
        } else if (delta_x >= -32 && delta_x <= 32 && delta_x != 0) {
            c->wide_layout_mode = MM2_WIDE_LAYOUT_HORIZONTAL;
        } else if (delta_x < -32 || delta_x > 32) {
            c->wide_layout_mode = MM2_WIDE_LAYOUT_UNKNOWN;
        }
    }
    c->wide_layout_stage = stage;
    c->wide_layout_bank = bank;
    c->wide_layout_screen = screen;
    c->wide_layout_camera_x = camera_x;
    c->wide_layout_camera_y = camera_y;

    if (c->wide_screen_enabled != 0u &&
        c->wide_layout_mode == MM2_WIDE_LAYOUT_HORIZONTAL &&
        bank == 0x0Eu && c->ram[0x6C0u] > 0u &&
        c->ram[0x6C0u] <= 28u && c->ram[0x54u] == 0u &&
        c->ram[0xB1u] == 0u &&
        !(c->ram[0x6C1u] > 0u && c->ram[0x6C1u] <= 28u) &&
        (c->ram[0x1Bu] == 0u || c->ram[0x1Bu] == 0x80u)) {
        unsigned slot;
        int camera_world = (int)screen * 256 + (int)camera_x;
        /* The stage-object pool occupies slots 24-31. Mark scheduled objects
           active when their world centre reaches either 71-pixel margin so
           their original update, collision and sprite routines—not a host
           substitute—run throughout the expanded playfield. */
        for (slot = 24u; slot < 32u; ++slot) {
            uint8_t flags = c->ram[0x420u + slot];
            int object_world;
            int screen_x;
            if (flags == 0u || (flags & 0x80u) != 0u ||
                c->ram[0x400u + slot] == 0u)
                continue;
            object_world = (int)c->ram[0x440u + slot] * 256 +
                           (int)c->ram[0x460u + slot];
            screen_x = object_world - camera_world;
            if (screen_x >= -(int)MM2_PRESENTATION_WIDE_MARGIN &&
                screen_x < (int)(MM2_DIRECT_CORE_FRAME_WIDTH +
                                 MM2_PRESENTATION_WIDE_MARGIN))
                c->ram[0x420u + slot] = (uint8_t)(flags | 0x80u);
        }
    }
}

static int wide_gameplay_mod_active(const MM2DirectCore *c) {
    uint8_t update;
    if (!c || c->wide_screen_enabled == 0u ||
        c->ram[0x29u] != 0x0Eu ||
        c->ram[0x6C0u] == 0u || c->ram[0x6C0u] > 28u ||
        c->wide_layout_mode != MM2_WIDE_LAYOUT_HORIZONTAL ||
        c->ram[0x54u] != 0u ||
        c->ram[0xB1u] != 0u ||
        (c->ram[0x6C1u] > 0u && c->ram[0x6C1u] <= 28u))
        return 0;
    update = c->ram[0x1Bu];
    return update == 0u || update == 0x80u;
}

static uint16_t ciram_address_for_mirroring(uint8_t mirroring,
                                            uint16_t address) {
    unsigned table = (unsigned)(((address - 0x2000u) & 0x0FFFu) >> 10);
    unsigned offset = (unsigned)(address & 0x03FFu);
    unsigned physical;
    switch ((MM2MirrorMode)mirroring) {
    case MM2_MIRROR_ONE_HIGH: physical = 1u; break;
    case MM2_MIRROR_VERTICAL: physical = table & 1u; break;
    case MM2_MIRROR_HORIZONTAL: physical = (table >> 1) & 1u; break;
    case MM2_MIRROR_ONE_LOW:
    default: physical = 0u; break;
    }
    return (uint16_t)(physical * 0x400u + offset);
}

static uint16_t ciram_address(const MM2DirectCore *c, uint16_t address) {
    return ciram_address_for_mirroring(
        (uint8_t)mm2_mmc1_mirroring(&c->mapper), address);
}

static uint8_t ppu_read_memory(MM2DirectCore *c, uint16_t address) {
    address &= 0x3FFFu;
    if (address < 0x2000u) return c->chr_ram[address];
    if (address < 0x3F00u) return c->ciram[ciram_address(c, address)];
    address = (uint16_t)((address - 0x3F00u) & 0x1Fu);
    if ((address & 0x13u) == 0x10u) address = (uint16_t)(address & 0x0Fu);
    return c->palette[address];
}

static uint8_t ppu_read_presentation_memory(const MM2DirectCore *c,
                                            uint16_t address) {
    const MM2PpuPresentationLatch *latch = &c->presentation_latch;
    address &= 0x3FFFu;
    if (!latch->valid) {
        return ppu_read_memory((MM2DirectCore *)c, address);
    }
    if (address < 0x2000u) return latch->chr_ram[address];
    if (address < 0x3F00u)
        return latch->ciram[ciram_address_for_mirroring(
            latch->mirroring, address)];
    address = (uint16_t)((address - 0x3F00u) & 0x1Fu);
    if ((address & 0x13u) == 0x10u) address = (uint16_t)(address & 0x0Fu);
    return latch->palette[address];
}

static void ppu_write_memory(MM2DirectCore *c, uint16_t address,
                             uint8_t value) {
    address &= 0x3FFFu;
    if (address < 0x2000u) c->chr_ram[address] = value;
    else if (address < 0x3F00u)
        c->ciram[ciram_address(c, address)] = value;
    else {
        address = (uint16_t)((address - 0x3F00u) & 0x1Fu);
        if ((address & 0x13u) == 0x10u)
            address = (uint16_t)(address & 0x0Fu);
        c->palette[address] = (uint8_t)(value & 0x3Fu);
    }
}

static unsigned ppu_background_color(MM2DirectCore *c, unsigned x,
                                     unsigned y) {
    unsigned world_x = x + c->scroll_x;
    unsigned world_y = y + c->scroll_y;
    unsigned base_nt = c->ppu_ctrl & 3u;
    unsigned nt_x = (base_nt & 1u) ^ ((world_x >> 8) & 1u);
    unsigned nt_y = ((base_nt >> 1) & 1u) ^ ((world_y / 240u) & 1u);
    uint16_t nt_base = (uint16_t)(0x2000u + ((nt_y * 2u + nt_x) << 10));
    unsigned tile_x = (world_x & 0xFFu) >> 3;
    unsigned tile_y = (world_y % 240u) >> 3;
    uint8_t tile = ppu_read_memory(c,
        (uint16_t)(nt_base + tile_y * 32u + tile_x));
    uint16_t pattern = (uint16_t)(((c->ppu_ctrl & 0x10u) ? 0x1000u : 0u) +
                                  (uint16_t)tile * 16u);
    unsigned fine_y = world_y & 7u;
    unsigned bit = 7u - (world_x & 7u);
    return ((ppu_read_memory(c, (uint16_t)(pattern + fine_y)) >> bit) & 1u) |
           (((ppu_read_memory(c, (uint16_t)(pattern + fine_y + 8u)) >> bit) & 1u) << 1);
}

static unsigned positive_mod(int value, unsigned divisor) {
    int result = value % (int)divisor;
    return (unsigned)(result < 0 ? result + (int)divisor : result);
}

static int floor_div(int value, int divisor) {
    int quotient = value / divisor;
    int remainder = value % divisor;
    return quotient - (remainder < 0 ? 1 : 0);
}

static uint8_t ppu_background_palette_at(MM2DirectCore *c,
                                         int native_x, unsigned y,
                                         uint8_t *opaque) {
    const MM2PpuPresentationLatch *latch = &c->presentation_latch;
    uint8_t ctrl = latch->valid ? latch->ppu_ctrl : c->ppu_ctrl;
    uint8_t mask = latch->valid ? latch->ppu_mask : c->ppu_mask;
    uint8_t scroll_x = latch->valid ? latch->scroll_x : c->scroll_x;
    uint8_t scroll_y = latch->valid ? latch->scroll_y : c->scroll_y;
    int world_x = native_x + (int)scroll_x;
    unsigned world_y = y + scroll_y;
    unsigned base_nt = ctrl & 3u;
    unsigned nt_x = (base_nt & 1u) ^
                    ((unsigned)floor_div(world_x, 256) & 1u);
    unsigned nt_y = ((base_nt >> 1) & 1u) ^
                    ((world_y / 240u) & 1u);
    uint16_t nt_base = (uint16_t)(0x2000u +
        ((nt_y * 2u + nt_x) << 10));
    unsigned local_x = positive_mod(world_x, 256u);
    unsigned tile_x = local_x >> 3;
    unsigned tile_y = (world_y % 240u) >> 3;
    uint8_t tile = ppu_read_presentation_memory(c,
        (uint16_t)(nt_base + tile_y * 32u + tile_x));
    uint16_t pattern = (uint16_t)(((ctrl & 0x10u) ? 0x1000u : 0u) +
                                  (uint16_t)tile * 16u);
    unsigned fine_y = world_y & 7u;
    unsigned bit = 7u - (local_x & 7u);
    unsigned color =
        ((ppu_read_presentation_memory(c,
            (uint16_t)(pattern + fine_y)) >> bit) & 1u) |
        (((ppu_read_presentation_memory(c,
            (uint16_t)(pattern + fine_y + 8u)) >> bit) & 1u) << 1);
    uint16_t attribute_address = (uint16_t)(nt_base + 0x03C0u +
        (tile_y >> 2) * 8u + (tile_x >> 2));
    uint8_t attribute = ppu_read_presentation_memory(c, attribute_address);
    unsigned shift = ((tile_y & 2u) ? 4u : 0u) +
                     ((tile_x & 2u) ? 2u : 0u);
    unsigned palette_select = (attribute >> shift) & 3u;
    if (opaque)
        *opaque = (uint8_t)((mask & 0x08u) != 0u && color != 0u);
    if ((mask & 0x08u) == 0u)
        return ppu_read_presentation_memory(c, 0x3F00u);
    return ppu_read_presentation_memory(c, (uint16_t)(0x3F00u +
        (color ? palette_select * 4u + color : 0u)));
}

void ppu_wide_sprite_capture_begin(MM2DirectCore *c) {
    if (c) c->wide_sprite_count = 0u;
}

void ppu_wide_sprite_capture_component(MM2DirectCore *c,
                                       uint8_t oam_offset,
                                       uint8_t wrapped_x,
                                       int native_will_hide) {
    MM2WideSpriteCapture *capture;
    uint8_t slot;
    int page_delta;
    int object_x;
    int component_offset;
    int signed_x;
    if (!c || (oam_offset & 3u) != 0u ||
        c->wide_sprite_count >= MM2_WIDE_SPRITE_CAPTURE_CAPACITY)
        return;
    slot = c->ram[0x2Bu];
    if (slot >= 32u) return;
    page_delta = (int)(int8_t)(uint8_t)(
        c->ram[0x440u + slot] - c->ram[0x20u]);
    object_x = page_delta * 256 + (int)c->ram[0x460u + slot] -
               (int)c->ram[0x1Fu];
    component_offset = (int)(int8_t)(uint8_t)(
        wrapped_x - c->ram[0x00u]);
    signed_x = object_x + component_offset;
    capture = &c->wide_sprites[c->wide_sprite_count++];
    capture->x = (int16_t)signed_x;
    capture->y = c->ram[0x200u + oam_offset];
    capture->tile = c->ram[0x201u + oam_offset];
    capture->attributes = c->ram[0x202u + oam_offset];
    capture->oam_index = (uint8_t)(oam_offset >> 2);
    capture->object_slot = slot;
    if (!native_will_hide && wide_gameplay_mod_active(c) &&
        (signed_x < 0 || signed_x >= 256))
        c->ram[0x200u + oam_offset] = 0xF8u;
}

void ppu_wide_expand_object_window(MM2DirectCore *c) {
    unsigned camera;
    unsigned left;
    unsigned right;
    if (!wide_gameplay_mod_active(c)) return;
    camera = ((unsigned)c->ram[0x20u] << 8) | c->ram[0x1Fu];
    left = (camera - MM2_PRESENTATION_WIDE_MARGIN) & 0xFFFFu;
    right = (camera + MM2_DIRECT_CORE_FRAME_WIDTH - 1u +
             MM2_PRESENTATION_WIDE_MARGIN) & 0xFFFFu;
    c->ram[0x0Au] = (uint8_t)left;
    c->ram[0x0Bu] = (uint8_t)(left >> 8);
    c->ram[0x08u] = (uint8_t)right;
    c->ram[0x09u] = (uint8_t)(right >> 8);
}

int ppu_wide_keep_projectile_active(const MM2DirectCore *c) {
    unsigned slot;
    int page_delta;
    int screen_x;
    if (!wide_gameplay_mod_active(c)) return 0;
    slot = c->x;
    if (slot < 2u || slot > 4u || c->ram[0x400u + slot] != 35u)
        return 0;
    page_delta = (int)(int8_t)(uint8_t)(
        c->ram[0x440u + slot] - c->ram[0x20u]);
    screen_x = page_delta * 256 + (int)c->ram[0x460u + slot] -
               (int)c->ram[0x1Fu];
    return screen_x >= -(int)MM2_PRESENTATION_WIDE_MARGIN &&
           screen_x < (int)(MM2_DIRECT_CORE_FRAME_WIDTH +
                            MM2_PRESENTATION_WIDE_MARGIN);
}

static void ppu_render_wide_sprite_capture(
    MM2DirectCore *c, uint8_t *output, const MM2PresentationInfo *info,
    const MM2WideSpriteCapture *capture) {
        const MM2PpuPresentationLatch *latch = &c->presentation_latch;
        uint8_t ctrl = latch->valid ? latch->ppu_ctrl : c->ppu_ctrl;
        unsigned top = (unsigned)capture->y + 1u;
        unsigned height = (ctrl & 0x20u) ? 16u : 8u;
        unsigned py;
        unsigned px;
        if (top >= info->height) return;
        for (py = 0u; py < height && top + py < info->height; ++py) {
            unsigned source_y = (capture->attributes & 0x80u) ?
                height - 1u - py : py;
            uint16_t pattern;
            if (height == 16u) {
                pattern = (uint16_t)(((capture->tile & 1u) << 12) +
                    ((capture->tile & 0xFEu) + (source_y >> 3)) * 16u +
                    (source_y & 7u));
            } else {
                pattern = (uint16_t)(
                    ((ctrl & 0x08u) ? 0x1000u : 0u) +
                    (uint16_t)capture->tile * 16u + source_y);
            }
            for (px = 0u; px < 8u; ++px) {
                int output_x = (int)info->native_x +
                               (int)capture->x + (int)px;
                unsigned source_x = (capture->attributes & 0x40u) ?
                    px : 7u - px;
                unsigned color;
                uint8_t background_opaque = 0u;
                if (output_x < 0 || output_x >= (int)info->width ||
                    (output_x >= (int)info->native_x &&
                     output_x < (int)(info->native_x +
                         MM2_DIRECT_CORE_FRAME_WIDTH)))
                    continue;
                color =
                    ((ppu_read_presentation_memory(c, pattern) >>
                       source_x) & 1u) |
                    (((ppu_read_presentation_memory(
                       c, (uint16_t)(pattern + 8u)) >>
                       source_x) & 1u) << 1);
                if (color == 0u) continue;
                if ((capture->attributes & 0x20u) != 0u)
                    (void)ppu_background_palette_at(
                        c, output_x - (int)info->native_x, top + py,
                        &background_opaque);
                if ((capture->attributes & 0x20u) != 0u &&
                    background_opaque)
                    continue;
                output[(size_t)(top + py) * info->width +
                       (unsigned)output_x] = ppu_read_presentation_memory(
                     c, (uint16_t)(0x3F10u +
                     (capture->attributes & 3u) * 4u + color));
            }
        }
}

static void ppu_render_wide_sprites(MM2DirectCore *c, uint8_t *output,
                                    const MM2PresentationInfo *info) {
    const MM2PpuPresentationLatch *latch;
    const MM2WideSpriteCapture *sprites;
    unsigned count;
    uint8_t mask;
    int capture_index;
    if (!c || !output || !info) return;
    latch = &c->presentation_latch;
    sprites = latch->valid ? latch->wide_sprites : c->wide_sprites;
    count = latch->valid ? latch->wide_sprite_count : c->wide_sprite_count;
    mask = latch->valid ? latch->ppu_mask : c->ppu_mask;
    if ((mask & 0x10u) == 0u) return;
    for (capture_index = (int)count - 1;
         capture_index >= 0; --capture_index) {
        ppu_render_wide_sprite_capture(
            c, output, info, &sprites[(unsigned)capture_index]);
    }
}

static MM2PresentationReason presentation_reason(const MM2DirectCore *c,
                                                  int wide_screen_enabled) {
    uint8_t bank;
    uint8_t player_hp;
    uint8_t update;
    if (!wide_screen_enabled) return MM2_PRESENTATION_REASON_WIDE_DISABLED;
    if (!c) return MM2_PRESENTATION_REASON_PLAYER_INACTIVE;
    bank = c->ram[0x29u];
    player_hp = c->ram[0x6C0u];
    update = c->ram[0x1Bu];
    if (bank != 0x0Eu)
        return MM2_PRESENTATION_REASON_FIXED_SCREEN_OR_MENU;
    if (player_hp == 0u || player_hp > 28u)
        return MM2_PRESENTATION_REASON_PLAYER_INACTIVE;
    if (c->ram[0x54u] != 0u || c->ram[0xB1u] != 0u ||
        (c->ram[0x6C1u] > 0u && c->ram[0x6C1u] <= 28u))
        return MM2_PRESENTATION_REASON_BOSS_APPROACH_OR_ROOM;
    if (c->wide_layout_mode != MM2_WIDE_LAYOUT_HORIZONTAL)
        return MM2_PRESENTATION_REASON_UNSUPPORTED_LAYOUT;
    if (update != 0u && update != 0x80u)
        return MM2_PRESENTATION_REASON_TRANSITION;
    return MM2_PRESENTATION_REASON_WIDE_GAMEPLAY;
}

static int ppu_presentation_info_current(const MM2DirectCore *c,
                                         int wide_screen_enabled,
                                         MM2PresentationInfo *info) {
    MM2PresentationReason reason;
    if (!c || !info) return 0;
    reason = presentation_reason(c, wide_screen_enabled);
    info->width = wide_screen_enabled ? MM2_PRESENTATION_WIDE_FRAME_WIDTH :
                                       MM2_DIRECT_CORE_FRAME_WIDTH;
    info->height = MM2_DIRECT_CORE_FRAME_HEIGHT;
    info->native_x = wide_screen_enabled ?
        (MM2_PRESENTATION_WIDE_FRAME_WIDTH - MM2_DIRECT_CORE_FRAME_WIDTH) / 2u : 0u;
    info->reason = reason;
    info->mode = reason == MM2_PRESENTATION_REASON_WIDE_GAMEPLAY ?
        MM2_PRESENTATION_WIDE_GAMEPLAY : MM2_PRESENTATION_NATIVE_4_3;
    return 1;
}

int ppu_presentation_info(const MM2DirectCore *c, int wide_screen_enabled,
                          MM2PresentationInfo *info) {
    if (!c || !info) return 0;
    if (wide_screen_enabled && c->presentation_latch.valid) {
        *info = c->presentation_latch.wide_info;
        return 1;
    }
    return ppu_presentation_info_current(c, wide_screen_enabled, info);
}

int ppu_presentation_copy_indexed(const MM2DirectCore *source,
                                  int wide_screen_enabled,
                                  uint8_t *output, size_t capacity,
                                  MM2PresentationInfo *info) {
    MM2PresentationInfo local;
    MM2DirectCore *c = (MM2DirectCore *)source;
    size_t pixels;
    unsigned x;
    unsigned y;
    if (!source || !output || !ppu_presentation_info(source,
            wide_screen_enabled, &local)) return 0;
    pixels = (size_t)local.width * local.height;
    if (capacity < pixels) return 0;
    if (!wide_screen_enabled) {
        memcpy(output, source->framebuffer, MM2_DIRECT_CORE_FRAME_PIXELS);
        if (info) *info = local;
        return 1;
    }

    memset(output, 0x0Fu, pixels);
    if (local.mode == MM2_PRESENTATION_WIDE_GAMEPLAY) {
        for (y = 0u; y < local.height; ++y) {
            for (x = 0u; x < local.width; ++x) {
                int native_x = (int)x - (int)local.native_x;
                output[(size_t)y * local.width + x] =
                    ppu_background_palette_at(c, native_x, y, NULL);
            }
        }
        ppu_render_wide_sprites(c, output, &local);
    }

    /* The native center remains the pixel-exact authority, including PPU
       priority, eight-sprite-per-scanline behavior and fixed HUD sprites.
       Captured signed sprite pieces are composited only into the new margins. */
    for (y = 0u; y < local.height; ++y)
        memcpy(output + (size_t)y * local.width + local.native_x,
               source->framebuffer + (size_t)y * MM2_DIRECT_CORE_FRAME_WIDTH,
               MM2_DIRECT_CORE_FRAME_WIDTH);
    if (info) *info = local;
    return 1;
}

static void ppu_latch_completed_presentation(MM2DirectCore *c) {
    MM2PpuPresentationLatch *latch;
    if (!c) return;
    latch = &c->presentation_latch;
    memcpy(latch->chr_ram, c->chr_ram, sizeof(latch->chr_ram));
    memcpy(latch->ciram, c->ciram, sizeof(latch->ciram));
    memcpy(latch->palette, c->palette, sizeof(latch->palette));
    memcpy(latch->wide_sprites, c->wide_sprites,
           sizeof(latch->wide_sprites));
    latch->ppu_ctrl = c->ppu_ctrl;
    latch->ppu_mask = c->ppu_mask;
    latch->scroll_x = c->scroll_x;
    latch->scroll_y = c->scroll_y;
    latch->mirroring = (uint8_t)mm2_mmc1_mirroring(&c->mapper);
    latch->wide_sprite_count = c->wide_sprite_count;
    (void)ppu_presentation_info_current(c, 1, &latch->wide_info);
    latch->valid = 1u;
}

static unsigned ppu_sprite_pixel(MM2DirectCore *c, unsigned sprite,
                                 unsigned x, unsigned y) {
    unsigned top = (unsigned)c->oam[sprite * 4u] + 1u;
    uint8_t tile = c->oam[sprite * 4u + 1u];
    uint8_t attr = c->oam[sprite * 4u + 2u];
    unsigned left = c->oam[sprite * 4u + 3u];
    unsigned height = (c->ppu_ctrl & 0x20u) ? 16u : 8u;
    unsigned source_y;
    unsigned px;
    unsigned source_x;
    uint16_t pattern;
    if (y < top || y >= top + height || x < left || x >= left + 8u)
        return 0u;
    source_y = y - top;
    if ((attr & 0x80u) != 0u) source_y = height - 1u - source_y;
    if (height == 16u) {
        pattern = (uint16_t)(((tile & 1u) << 12) +
            ((tile & 0xFEu) + (source_y >> 3)) * 16u + (source_y & 7u));
    } else {
        pattern = (uint16_t)(((c->ppu_ctrl & 0x08u) ? 0x1000u : 0u) +
                             (uint16_t)tile * 16u + source_y);
    }
    px = x - left;
    source_x = (attr & 0x40u) != 0u ? px : 7u - px;
    return ((ppu_read_memory(c, pattern) >> source_x) & 1u) |
           (((ppu_read_memory(c, (uint16_t)(pattern + 8u)) >> source_x) & 1u) << 1);
}

static int ppu_sprite_in_range(const MM2DirectCore *c, uint8_t y) {
    unsigned height = (c->ppu_ctrl & 0x20u) ? 16u : 8u;
    return c->ppu_scanline >= y && c->ppu_scanline < (unsigned)y + height;
}

static void ppu_sprite_evaluation_start(MM2DirectCore *c) {
    c->ppu_eval_oam_addr = c->oam_addr;
    c->ppu_eval_secondary_addr = 0u;
    c->ppu_eval_sprite_in_range = 0u;
    c->ppu_eval_copy_done = 0u;
    c->ppu_eval_overflow_recorded = 0u;
    c->ppu_sprite_count_next = 0u;
    c->ppu_sprite0_next = 0u;
}

static void ppu_sprite_evaluation_tick(MM2DirectCore *c) {
    unsigned sprite;
    unsigned byte;
    if (c->ppu_scanline >= 240u || (c->ppu_mask & 0x18u) == 0u) return;
    if (c->ppu_dot < 65u) {
        if ((c->ppu_dot & 1u) == 0u && c->ppu_dot != 0u) {
            unsigned address = (c->ppu_dot / 2u) - 1u;
            if (address < 32u) c->ppu_secondary_oam[address] = 0xFFu;
        }
        return;
    }
    if (c->ppu_dot > 256u) return;
    if (c->ppu_dot == 65u) ppu_sprite_evaluation_start(c);
    if ((c->ppu_dot & 1u) != 0u) {
        c->ppu_eval_buffer = c->oam[c->ppu_eval_oam_addr];
        return;
    }
    if (c->ppu_eval_copy_done) return;
    sprite = c->ppu_eval_oam_addr >> 2;
    byte = c->ppu_eval_oam_addr & 3u;
    if (c->ppu_eval_secondary_addr < 32u) {
        c->ppu_secondary_oam[c->ppu_eval_secondary_addr] = c->ppu_eval_buffer;
        if (!c->ppu_eval_sprite_in_range && byte == 0u &&
            ppu_sprite_in_range(c, c->ppu_eval_buffer)) {
            c->ppu_eval_sprite_in_range = 1u;
            c->ppu_sprite_count_next++;
            if (sprite == 0u) c->ppu_sprite0_next = 1u;
        }
        if (c->ppu_eval_sprite_in_range) {
            c->ppu_eval_secondary_addr++;
            c->ppu_eval_oam_addr++;
            if ((c->ppu_eval_oam_addr & 3u) == 0u)
                c->ppu_eval_sprite_in_range = 0u;
        } else {
            c->ppu_eval_oam_addr =
                (uint8_t)(((sprite + 1u) & 63u) << 2);
        }
    } else {
        if (byte == 0u && ppu_sprite_in_range(c, c->ppu_eval_buffer)) {
            c->ppu_status |= 0x20u;
            if (!c->ppu_eval_overflow_recorded) {
                c->sprite_overflow_scanlines++;
                c->ppu_eval_overflow_recorded = 1u;
            }
        }
        c->ppu_eval_oam_addr =
            (uint8_t)(((sprite + 1u) & 63u) << 2);
    }
    if (c->ppu_eval_oam_addr == c->oam_addr)
        c->ppu_eval_copy_done = 1u;
}

static void ppu_sprite_zero_tick(MM2DirectCore *c) {
    unsigned x;
    if (c->ppu_scanline >= 239u || c->ppu_dot == 0u || c->ppu_dot > 256u ||
        !c->ppu_sprite0_current || (c->ppu_status & 0x40u) != 0u ||
        (c->ppu_mask & 0x18u) != 0x18u)
        return;
    x = c->ppu_dot - 1u;
    if (x == 255u || (x < 8u && (c->ppu_mask & 0x06u) != 0x06u)) return;
    if (ppu_background_color(c, x, c->ppu_scanline) != 0u &&
        ppu_sprite_pixel(c, 0u, x, c->ppu_scanline) != 0u) {
        c->ppu_status |= 0x40u;
        c->sprite_zero_hits++;
    }
}

static void render_background(MM2DirectCore *c) {
    unsigned x, y;
    uint8_t opaque[256u * 240u];
    uint64_t hash;
    int sprite;
    for (y = 0u; y < 240u; ++y) {
        for (x = 0u; x < 256u; ++x) {
            unsigned world_x = x + c->scroll_x;
            unsigned world_y = y + c->scroll_y;
            unsigned base_nt = c->ppu_ctrl & 3u;
            unsigned nt_x = (base_nt & 1u) ^ ((world_x >> 8) & 1u);
            unsigned nt_y = ((base_nt >> 1) & 1u) ^
                            ((world_y / 240u) & 1u);
            uint16_t nt_base = (uint16_t)(0x2000u +
                ((nt_y * 2u + nt_x) << 10));
            unsigned tile_x = (world_x & 0xFFu) >> 3;
            unsigned tile_y = (world_y % 240u) >> 3;
            unsigned color = ppu_background_color(c, x, y);
            uint16_t attribute_address = (uint16_t)(nt_base + 0x03C0u +
                (tile_y >> 2) * 8u + (tile_x >> 2));
            uint8_t attribute = ppu_read_memory(c, attribute_address);
            unsigned shift = ((tile_y & 2u) ? 4u : 0u) +
                             ((tile_x & 2u) ? 2u : 0u);
            unsigned palette_select = (attribute >> shift) & 3u;
            uint8_t palette_value = ppu_read_memory(c,
                (uint16_t)(0x3F00u +
                (color ? palette_select * 4u + color : 0u)));
            if ((c->ppu_mask & 0x08u) == 0u)
                palette_value = ppu_read_memory(c, 0x3F00u);
            c->framebuffer[y * 256u + x] = palette_value;
            opaque[y * 256u + x] = (uint8_t)(color != 0u);
        }
    }
    c->sprite_pixels = 0u;
    for (sprite = 63; sprite >= 0; --sprite) {
        unsigned sy0 = (unsigned)c->oam[(unsigned)sprite * 4u] + 1u;
        uint8_t tile = c->oam[(unsigned)sprite * 4u + 1u];
        uint8_t attr = c->oam[(unsigned)sprite * 4u + 2u];
        unsigned sx0 = c->oam[(unsigned)sprite * 4u + 3u];
        unsigned height = (c->ppu_ctrl & 0x20u) ? 16u : 8u;
        unsigned py, px;
        if ((c->ppu_mask & 0x10u) == 0u || sy0 >= 240u) continue;
        for (py = 0u; py < height && sy0 + py < 240u; ++py) {
            unsigned earlier, in_range = 0u;
            unsigned source_y =
                (attr & 0x80u) ? height - 1u - py : py;
            uint16_t pattern;
            for (earlier = 0u; earlier < (unsigned)sprite; ++earlier) {
                unsigned earlier_y =
                    (unsigned)c->oam[earlier * 4u] + 1u;
                if (sy0 + py >= earlier_y &&
                    sy0 + py < earlier_y + height)
                    in_range++;
            }
            if (in_range >= 8u) {
                continue;
            }
            if (height == 16u) {
                pattern = (uint16_t)(((tile & 1u) << 12) +
                    ((tile & 0xFEu) + (source_y >> 3)) * 16u +
                    (source_y & 7u));
            } else {
                pattern = (uint16_t)(
                    ((c->ppu_ctrl & 0x08u) ? 0x1000u : 0u) +
                    (uint16_t)tile * 16u + source_y);
            }
            for (px = 0u; px < 8u && sx0 + px < 256u; ++px) {
                unsigned source_x = (attr & 0x40u) ? px : 7u - px;
                unsigned color =
                    ((ppu_read_memory(c, pattern) >> source_x) & 1u) |
                    (((ppu_read_memory(c,
                       (uint16_t)(pattern + 8u)) >> source_x) & 1u) << 1);
                unsigned index = (sy0 + py) * 256u + sx0 + px;
                if (color == 0u ||
                    ((sx0 + px) < 8u && (c->ppu_mask & 0x04u) == 0u))
                    continue;
                if ((attr & 0x20u) == 0u || !opaque[index])
                    c->framebuffer[index] = ppu_read_memory(c,
                        (uint16_t)(0x3F10u +
                        (attr & 3u) * 4u + color));
                c->sprite_pixels++;
            }
        }
    }
    hash = 1469598103934665603ull;
    for (y = 0u; y < 256u * 240u; ++y) {
        hash ^= c->framebuffer[y];
        hash *= 1099511628211ull;
    }
    c->framebuffer_hash = hash;
}

void ppu_tick(MM2DirectCore *c) {
    ppu_sprite_zero_tick(c);
    ppu_sprite_evaluation_tick(c);
    if (c->ppu_dot == 257u && c->ppu_scanline < 240u) {
        if ((c->ppu_mask & 0x18u) != 0u) {
            c->ppu_sprite_count_current = c->ppu_sprite_count_next;
            c->ppu_sprite0_current = c->ppu_sprite0_next;
        } else {
            c->ppu_sprite_count_current = 0u;
            c->ppu_sprite0_current = 0u;
        }
    }
    if (c->ppu_scanline == 241u && c->ppu_dot == 1u) {
        c->ppu_status |= 0x80u;
        if ((c->ppu_ctrl & 0x80u) != 0u) c->nmi_pending = 1u;
    } else if (c->ppu_scanline == 261u && c->ppu_dot == 1u) {
        c->ppu_status &= 0x1Fu;
    }
    c->ppu_cycles++;
    c->ppu_dot++;
    if (c->ppu_dot >= 341u) {
        c->ppu_dot = 0u;
        c->ppu_scanline++;
        if (c->ppu_scanline == 240u) {
            /* Publish the frame at the end of visible scanlines, matching the
               completed-frame boundary used by Mesen.  NMI/vblank code may
               immediately replace animated CHR data, so neither the native
               frame nor wide margins may be rebuilt at scanline 262. */
            render_background(c);
            ppu_latch_completed_presentation(c);
        }
        if (c->ppu_scanline >= 262u) {
            c->ppu_scanline = 0u;
            c->ppu_frames++;
            ppu_wide_observe_layout(c);
            emit_runtime_event(c, MM2_RUNTIME_EVENT_FRAME_COMPLETE, 0u, 0u);
        }
    }
}

uint8_t ppu_read_register(MM2DirectCore *c, unsigned reg) {
    uint8_t value = c->ppu_open_bus;
    if (reg == 2u) {
        value = (uint8_t)((c->ppu_status & 0xE0u) |
                          (c->ppu_open_bus & 0x1Fu));
        c->ppu_status &= 0x7Fu;
        c->ppu_write_toggle = 0u;
    } else if (reg == 4u) {
        value = c->oam[c->oam_addr];
    } else if (reg == 7u) {
        uint16_t address = (uint16_t)(c->ppu_v & 0x3FFFu);
        uint8_t raw = ppu_read_memory(c, address);
        if (address >= 0x3F00u) {
            value = raw;
            c->ppu_read_buffer =
                ppu_read_memory(c, (uint16_t)(address - 0x1000u));
        } else {
            value = c->ppu_read_buffer;
            c->ppu_read_buffer = raw;
        }
        c->ppu_v = (uint16_t)((c->ppu_v +
            ((c->ppu_ctrl & 4u) ? 32u : 1u)) & 0x7FFFu);
    }
    c->ppu_open_bus = value;
    return value;
}

void ppu_write_register(MM2DirectCore *c, unsigned reg, uint8_t value) {
    c->ppu_open_bus = value;
    if (reg == 0u) {
        uint8_t old = c->ppu_ctrl;
        c->ppu_ctrl = value;
        c->ppu_t = (uint16_t)((c->ppu_t & 0xF3FFu) |
                              ((uint16_t)(value & 3u) << 10));
        if ((old & 0x80u) == 0u && (value & 0x80u) != 0u &&
            (c->ppu_status & 0x80u) != 0u)
            c->nmi_pending = 1u;
    } else if (reg == 1u) {
        c->ppu_mask = value;
    } else if (reg == 3u) {
        c->oam_addr = value;
    } else if (reg == 4u) {
        c->oam[c->oam_addr] = value;
        c->oam_addr++;
    } else if (reg == 5u) {
        if (c->ppu_write_toggle == 0u) {
            c->scroll_x = value;
            c->fine_x = value & 7u;
            c->ppu_t = (uint16_t)((c->ppu_t & 0xFFE0u) | (value >> 3));
        } else {
            c->scroll_y = value;
            c->ppu_t = (uint16_t)((c->ppu_t & 0x8C1Fu) |
                ((uint16_t)(value & 7u) << 12) |
                ((uint16_t)(value & 0xF8u) << 2));
        }
        c->ppu_write_toggle ^= 1u;
    } else if (reg == 6u) {
        if (c->ppu_write_toggle == 0u)
            c->ppu_t = (uint16_t)((c->ppu_t & 0x00FFu) |
                                  ((uint16_t)(value & 0x3Fu) << 8));
        else {
            c->ppu_t = (uint16_t)((c->ppu_t & 0x7F00u) | value);
            c->ppu_v = c->ppu_t;
        }
        c->ppu_write_toggle ^= 1u;
    } else if (reg == 7u) {
        ppu_write_memory(c, c->ppu_v, value);
        c->ppu_v = (uint16_t)((c->ppu_v +
            ((c->ppu_ctrl & 4u) ? 32u : 1u)) & 0x7FFFu);
    }
}
