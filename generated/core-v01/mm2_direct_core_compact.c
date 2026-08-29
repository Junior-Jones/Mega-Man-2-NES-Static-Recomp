#include "mm2_direct_core_compact.h"

int mm2_compact_semantic_000(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0; c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_001(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_002(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_003(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = p1;
    write8(c, ea, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_004(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_005(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2, uint8_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(read16_zp(c, p1) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((read16_zp(c, p3) ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_006(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    c->pc = p0;
    c->y = (uint8_t)(c->y + p1); set_nz(c, c->y);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_007(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_008(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_009(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_010(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    c->pc = p0;
    c->x = (uint8_t)(c->x + p1); set_nz(c, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_011(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint8_t p3) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1; v = read8(c, ea);
    v = (uint8_t)(v - p2); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p3; return 1;
}

int mm2_compact_semantic_012(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint16_t p8, uint8_t p9, uint16_t p10) {
    if ((c->p & MM2_FLAG_Z) == p0) { c->cpu_cycles += p1 + ((((p2 ^ p3) & p4) != p5) ? p6 : p7); c->pc = p8; }
    else { c->cpu_cycles += p9; c->pc = p10; } return 1;
}

int mm2_compact_semantic_013(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = p1;
    write8(c, ea, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_014(MM2DirectCore *c, uint8_t p0, uint8_t p1) {
    uint16_t ea = 0u;
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + p0); c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_015(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_016(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_017(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_018(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_019(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_020(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint16_t p8, uint8_t p9, uint16_t p10) {
    if ((c->p & MM2_FLAG_Z) != p0) { c->cpu_cycles += p1 + ((((p2 ^ p3) & p4) != p5) ? p6 : p7); c->pc = p8; }
    else { c->cpu_cycles += p9; c->pc = p10; } return 1;
}

int mm2_compact_semantic_021(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_022(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_023(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_024(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_025(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint8_t p3) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1; v = read8(c, ea);
    v = (uint8_t)(v + p2); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p3; return 1;
}

int mm2_compact_semantic_026(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    adc8(c, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_027(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    compare8(c, c->a, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_028(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint16_t p8, uint8_t p9, uint16_t p10) {
    if ((c->p & MM2_FLAG_C) == p0) { c->cpu_cycles += p1 + ((((p2 ^ p3) & p4) != p5) ? p6 : p7); c->pc = p8; }
    else { c->cpu_cycles += p9; c->pc = p10; } return 1;
}

int mm2_compact_semantic_029(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_030(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint8_t p3) {
    push(c, p0); push(c, p1); c->pc = p2; c->cpu_cycles += p3; return 1;
}

int mm2_compact_semantic_031(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    c->pc = p0;
    c->x = (uint8_t)(c->x - p1); set_nz(c, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_032(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint16_t p8, uint8_t p9, uint16_t p10) {
    if ((c->p & MM2_FLAG_N) == p0) { c->cpu_cycles += p1 + ((((p2 ^ p3) & p4) != p5) ? p6 : p7); c->pc = p8; }
    else { c->cpu_cycles += p9; c->pc = p10; } return 1;
}

int mm2_compact_semantic_033(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_034(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = asl8(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_035(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_036(MM2DirectCore *c, uint8_t p0, uint8_t p1) {
    c->pc = read16_jmp_bug(c, p0); c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_037(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_038(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint16_t p8, uint8_t p9, uint16_t p10) {
    if ((c->p & MM2_FLAG_C) != p0) { c->cpu_cycles += p1 + ((((p2 ^ p3) & p4) != p5) ? p6 : p7); c->pc = p8; }
    else { c->cpu_cycles += p9; c->pc = p10; } return 1;
}

int mm2_compact_semantic_039(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_040(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_041(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    sbc8(c, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_042(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_043(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_044(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_045(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_046(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = p1;
    write8(c, ea, c->y);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_047(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint8_t p3) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x); v = read8(c, ea);
    v = (uint8_t)(v + p2); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p3; return 1;
}

int mm2_compact_semantic_048(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    compare8(c, c->x, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_049(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_050(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    c->pc = p0;
    c->y = (uint8_t)(c->y - p1); set_nz(c, c->y);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_051(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_052(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_053(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_054(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_055(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_056(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    push(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_057(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_058(MM2DirectCore *c, uint8_t p0, uint8_t p1, uint16_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint16_t p8, uint8_t p9, uint16_t p10) {
    if ((c->p & MM2_FLAG_N) != p0) { c->cpu_cycles += p1 + ((((p2 ^ p3) & p4) != p5) ? p6 : p7); c->pc = p8; }
    else { c->cpu_cycles += p9; c->pc = p10; } return 1;
}

int mm2_compact_semantic_059(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_060(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_061(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint8_t v = 0u;
    c->pc = p0;
    v = p1;
    compare8(c, c->y, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_062(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_063(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_064(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_065(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_066(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_067(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = rol8(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_068(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_069(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_070(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_071(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_072(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_073(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2, uint8_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(read16_zp(c, p1) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += p2 + ((((read16_zp(c, p3) ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_074(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = (uint16_t)(read16_zp(c, p1) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_075(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2, uint8_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(read16_zp(c, p1) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((read16_zp(c, p3) ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_076(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2, uint8_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(read16_zp(c, p1) + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += p2 + ((((read16_zp(c, p3) ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_077(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2, uint8_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(read16_zp(c, p1) + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += p2 + ((((read16_zp(c, p3) ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_078(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->a = ror8(c, c->a);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_079(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = read16_zp(c, (uint8_t)(p1 + c->x));
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_080(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_081(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_082(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint8_t p3) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x); v = read8(c, ea);
    v = (uint8_t)(v - p2); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p3; return 1;
}

int mm2_compact_semantic_083(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_084(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_085(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->p = (uint8_t)(c->p | MM2_FLAG_I);
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_086(MM2DirectCore *c, uint16_t p0, uint8_t p1) {
    c->pc = p0;
    c->s = c->x;
    c->cpu_cycles += p1; return 1;
}

int mm2_compact_semantic_087(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2, uint8_t p3) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->x); v = read8(c, ea);
    v = (uint8_t)(v + p2); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p3; return 1;
}

int mm2_compact_semantic_088(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_089(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->x); v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_090(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2, uint16_t p3, uint16_t p4, uint8_t p5, uint8_t p6, uint8_t p7) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint16_t)(p1 + c->y);
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += p2 + ((((p3 ^ ea) & p4) != p5) ? p6 : p7); return 1;
}

int mm2_compact_semantic_091(MM2DirectCore *c, uint16_t p0, uint16_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = p1;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_092(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->y);
    write8(c, ea, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_093(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->y);
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += p2; return 1;
}

int mm2_compact_semantic_094(MM2DirectCore *c, uint8_t p0) {
    uint16_t ea = 0u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = ea; c->cpu_cycles += p0; return 1;
}

int mm2_compact_semantic_095(MM2DirectCore *c, uint16_t p0, uint8_t p1, uint8_t p2) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    c->pc = p0;
    ea = (uint8_t)(p1 + c->x); v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += p2; return 1;
}
