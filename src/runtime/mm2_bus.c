#include "internal/mm2_direct_core_internal.h"

static uint8_t read8_raw(MM2DirectCore *c, uint16_t a) {
    c->bus_reads++;
    if (a < 0x2000u) return c->ram[a & 0x07FFu];
    if (a < 0x4000u) return ppu_read_register(c, a & 7u);
    if (a == 0x4016u || a == 0x4017u) {
        unsigned port = a - 0x4016u;
        uint8_t value;
        c->controller_reads[port]++;
        if (c->controller_strobe) value = c->controller_buttons[port] & 1u;
        else {
            value = c->controller_shift[port] & 1u;
            c->controller_shift[port] =
                (uint8_t)((c->controller_shift[port] >> 1) | 0x80u);
        }
        return (uint8_t)(0x40u | value);
    }
    if (a == 0x4015u) return mm2_apu_read_status(c);
    if (a < 0x4020u) return c->apu_io[a - 0x4000u];
    if (a < 0x6000u) return 0u;
    if (a < 0x8000u) return c->prg_ram[a - 0x6000u];
    if (!c->prg || c->prg_size != 0x40000u) return 0u;
    return c->prg[mm2_mmc1_prg_offset(&c->mapper, a, 16u)];
}

uint8_t read8(MM2DirectCore *c, uint16_t a) {
    uint8_t value = read8_raw(c, a);
    emit_runtime_event(c, MM2_RUNTIME_EVENT_BUS_READ, a, value);
    return value;
}

static void write8_raw(MM2DirectCore *c, uint16_t a, uint8_t v) {
    unsigned i;
    c->bus_writes++;
    if (a < 0x2000u) c->ram[a & 0x07FFu] = v;
    else if (a < 0x4000u) ppu_write_register(c, a & 7u, v);
    else if (a == 0x4014u) {
        uint16_t base = (uint16_t)((uint16_t)v << 8);
        for (i = 0u; i < 256u; ++i)
            c->oam[(uint8_t)(c->oam_addr + i)] =
                read8(c, (uint16_t)(base + i));
        c->cpu_cycles += 513u + (c->cpu_cycles & 1u);
    } else if (a == 0x4016u) {
        uint8_t old = c->controller_strobe;
        c->controller_strobe = v & 1u;
        if (c->controller_strobe || old != c->controller_strobe) {
            c->controller_shift[0] = c->controller_buttons[0];
            c->controller_shift[1] = c->controller_buttons[1];
            c->controller_latches++;
        }
    } else if (a < 0x4020u) {
        mm2_apu_write_register(c, a, v);
    } else if (a >= 0x6000u && a < 0x8000u) {
        c->prg_ram[a - 0x6000u] = v;
    } else if (a >= 0x8000u) {
        mm2_mmc1_write_cpu_cycle(&c->mapper, a, v, c->cpu_cycles);
    }
}

void write8(MM2DirectCore *c, uint16_t a, uint8_t v) {
    write8_raw(c, a, v);
    emit_runtime_event(c, MM2_RUNTIME_EVENT_BUS_WRITE, a, v);
}

uint16_t read16_zp(MM2DirectCore *c, uint8_t a) {
    uint8_t lo = read8(c, a);
    uint8_t hi = read8(c, (uint8_t)(a + 1u));
    return (uint16_t)(lo | ((uint16_t)hi << 8));
}

uint16_t read16_jmp_bug(MM2DirectCore *c, uint16_t a) {
    uint8_t lo = read8(c, a);
    uint16_t hi_addr = (uint16_t)((a & 0xFF00u) | (uint8_t)(a + 1u));
    return (uint16_t)(lo | ((uint16_t)read8(c, hi_addr) << 8));
}
