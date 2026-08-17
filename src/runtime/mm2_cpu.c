#include "internal/mm2_direct_core_internal.h"

void set_nz(MM2DirectCore *c, uint8_t v) {
    c->p = (uint8_t)((c->p & (uint8_t)~(MM2_FLAG_N | MM2_FLAG_Z)) |
                     (v == 0u ? MM2_FLAG_Z : 0u) | (v & MM2_FLAG_N));
}

void push(MM2DirectCore *c, uint8_t v) {
    uint16_t address = (uint16_t)(0x100u | c->s);
    c->ram[address] = v;
    c->s--;
    c->bus_writes++;
    emit_runtime_event(c, MM2_RUNTIME_EVENT_BUS_WRITE, address, v);
}

uint8_t pull(MM2DirectCore *c) {
    uint16_t address;
    uint8_t value;
    c->s++;
    address = (uint16_t)(0x100u | c->s);
    value = c->ram[address];
    c->bus_reads++;
    emit_runtime_event(c, MM2_RUNTIME_EVENT_BUS_READ, address, value);
    return value;
}

void compare8(MM2DirectCore *c, uint8_t left, uint8_t right) {
    uint8_t r = (uint8_t)(left - right);
    c->p = (uint8_t)((c->p & (uint8_t)~MM2_FLAG_C) |
                     (left >= right ? MM2_FLAG_C : 0u));
    set_nz(c, r);
}

void adc8(MM2DirectCore *c, uint8_t v) {
    unsigned sum = (unsigned)c->a + (unsigned)v +
                   ((c->p & MM2_FLAG_C) != 0u ? 1u : 0u);
    uint8_t r = (uint8_t)sum;
    uint8_t overflow =
        (uint8_t)((~(c->a ^ v) & (c->a ^ r) & 0x80u) != 0u);
    c->p = (uint8_t)((c->p & (uint8_t)~(MM2_FLAG_C | MM2_FLAG_V)) |
                     (sum > 0xFFu ? MM2_FLAG_C : 0u) |
                     (overflow ? MM2_FLAG_V : 0u));
    c->a = r;
    set_nz(c, c->a);
}

void sbc8(MM2DirectCore *c, uint8_t v) {
    adc8(c, (uint8_t)~v);
}

uint8_t asl8(MM2DirectCore *c, uint8_t v) {
    c->p = (uint8_t)((c->p & (uint8_t)~MM2_FLAG_C) |
                     ((v & 0x80u) ? MM2_FLAG_C : 0u));
    v = (uint8_t)(v << 1);
    set_nz(c, v);
    return v;
}

uint8_t lsr8(MM2DirectCore *c, uint8_t v) {
    c->p = (uint8_t)((c->p & (uint8_t)~MM2_FLAG_C) |
                     ((v & 1u) ? MM2_FLAG_C : 0u));
    v = (uint8_t)(v >> 1);
    set_nz(c, v);
    return v;
}

uint8_t rol8(MM2DirectCore *c, uint8_t v) {
    uint8_t carry = (uint8_t)((c->p & MM2_FLAG_C) != 0u);
    c->p = (uint8_t)((c->p & (uint8_t)~MM2_FLAG_C) |
                     ((v & 0x80u) ? MM2_FLAG_C : 0u));
    v = (uint8_t)((v << 1) | carry);
    set_nz(c, v);
    return v;
}

uint8_t ror8(MM2DirectCore *c, uint8_t v) {
    uint8_t carry =
        (uint8_t)((c->p & MM2_FLAG_C) != 0u ? 0x80u : 0u);
    c->p = (uint8_t)((c->p & (uint8_t)~MM2_FLAG_C) |
                     ((v & 1u) ? MM2_FLAG_C : 0u));
    v = (uint8_t)((v >> 1) | carry);
    set_nz(c, v);
    return v;
}

void service_nmi(MM2DirectCore *c) {
    push(c, (uint8_t)(c->pc >> 8));
    push(c, (uint8_t)c->pc);
    push(c, (uint8_t)((c->p & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U));
    c->p = (uint8_t)(c->p | MM2_FLAG_I);
    c->pc = 0xCFF0u;
    c->cpu_cycles += 7u;
    c->nmi_pending = 0u;
    c->nmi_count++;
}

void service_irq(MM2DirectCore *c) {
    uint8_t lo;
    uint8_t hi;
    push(c, (uint8_t)(c->pc >> 8));
    push(c, (uint8_t)c->pc);
    push(c, (uint8_t)((c->p & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U));
    c->p = (uint8_t)(c->p | MM2_FLAG_I);
    lo = read8(c, 0xFFFEu);
    hi = read8(c, 0xFFFFu);
    c->pc = (uint16_t)(lo | ((uint16_t)hi << 8));
    c->cpu_cycles += 7u;
    c->irq_count++;
}
