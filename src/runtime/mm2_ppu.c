#include "internal/mm2_direct_core_internal.h"

static uint16_t ciram_address(const MM2DirectCore *c, uint16_t address) {
    unsigned table = (unsigned)(((address - 0x2000u) & 0x0FFFu) >> 10);
    unsigned offset = (unsigned)(address & 0x03FFu);
    unsigned physical;
    switch (mm2_mmc1_mirroring(&c->mapper)) {
    case MM2_MIRROR_ONE_HIGH: physical = 1u; break;
    case MM2_MIRROR_VERTICAL: physical = table & 1u; break;
    case MM2_MIRROR_HORIZONTAL: physical = (table >> 1) & 1u; break;
    case MM2_MIRROR_ONE_LOW:
    default: physical = 0u; break;
    }
    return (uint16_t)(physical * 0x400u + offset);
}

static uint8_t ppu_read_memory(MM2DirectCore *c, uint16_t address) {
    address &= 0x3FFFu;
    if (address < 0x2000u) return c->chr_ram[address];
    if (address < 0x3F00u) return c->ciram[ciram_address(c, address)];
    address = (uint16_t)((address - 0x3F00u) & 0x1Fu);
    if ((address & 0x13u) == 0x10u) address = (uint16_t)(address & 0x0Fu);
    return c->palette[address];
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
        if (c->ppu_scanline >= 262u) {
            c->ppu_scanline = 0u;
            c->ppu_frames++;
            render_background(c);
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
