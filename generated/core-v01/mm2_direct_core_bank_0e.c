/* Generated from the accepted v0.06 identity ledger. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_0e(MM2DirectCore *c, uint16_t pc) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    switch (pc) {
case 0x8000u: /* SEI IMP 78 */
    c->pc = 0x8001u;
    c->p = (uint8_t)(c->p | MM2_FLAG_I);
    c->cpu_cycles += 2u; return 1;
case 0x8001u: /* LDX IMM A2 FF */
    c->pc = 0x8003u;
    v = 0xFFu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8003u: /* TXS IMP 9A */
    c->pc = 0x8004u;
    c->s = c->x;
    c->cpu_cycles += 2u; return 1;
case 0x8004u: /* LDX IMM A2 01 */
    c->pc = 0x8006u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8006u: /* LDA ABS AD 02 20 */
    c->pc = 0x8009u;
    ea = 0x2002u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8009u: /* BPL REL 10 FB */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x800Bu ^ 0x8006u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8006u; }
    else { c->cpu_cycles += 2u; c->pc = 0x800Bu; } return 1;
case 0x800Bu: /* LDA ABS AD 02 20 */
    c->pc = 0x800Eu;
    ea = 0x2002u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x800Eu: /* BMI REL 30 FB */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8010u ^ 0x800Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x800Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8010u; } return 1;
case 0x8010u: /* DEX IMP CA */
    c->pc = 0x8011u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8011u: /* BPL REL 10 F3 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8013u ^ 0x8006u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8006u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8013u; } return 1;
case 0x8013u: /* LDA IMM A9 00 */
    c->pc = 0x8015u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8015u: /* STA ZP 85 00 */
    c->pc = 0x8017u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8017u: /* STA ZP 85 01 */
    c->pc = 0x8019u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8019u: /* LDY IMM A0 00 */
    c->pc = 0x801Bu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x801Bu: /* STA IZY 91 00 */
    c->pc = 0x801Du;
    ea = (uint16_t)(read16_zp(c, 0x00u) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x801Du: /* INY IMP C8 */
    c->pc = 0x801Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x801Eu: /* BNE REL D0 FB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8020u ^ 0x801Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x801Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8020u; } return 1;
case 0x8020u: /* INC ZP E6 01 */
    c->pc = 0x8022u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8022u: /* LDX ZP A6 01 */
    c->pc = 0x8024u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8024u: /* CPX IMM E0 08 */
    c->pc = 0x8026u;
    v = 0x08u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8026u: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8028u ^ 0x801Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x801Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8028u; } return 1;
case 0x8028u: /* LDA IMM A9 0E */
    c->pc = 0x802Au;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x802Au: /* JSR ABS 20 5D C0 */
    push(c, 0x80u); push(c, 0x2Cu); c->pc = 0xC05Du; c->cpu_cycles += 6u; return 1;
case 0x802Du: /* LDA IMM A9 01 */
    c->pc = 0x802Fu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x802Fu: /* STA ABS 8D FF BF */
    c->pc = 0x8032u;
    ea = 0xBFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8032u: /* LSR IMP 4A */
    c->pc = 0x8033u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8033u: /* STA ABS 8D FF BF */
    c->pc = 0x8036u;
    ea = 0xBFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8036u: /* LSR IMP 4A */
    c->pc = 0x8037u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8037u: /* STA ABS 8D FF BF */
    c->pc = 0x803Au;
    ea = 0xBFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x803Au: /* LSR IMP 4A */
    c->pc = 0x803Bu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x803Bu: /* STA ABS 8D FF BF */
    c->pc = 0x803Eu;
    ea = 0xBFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x803Eu: /* LSR IMP 4A */
    c->pc = 0x803Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x803Fu: /* STA ABS 8D FF BF */
    c->pc = 0x8042u;
    ea = 0xBFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8042u: /* LDA IMM A9 1F */
    c->pc = 0x8044u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8044u: /* STA ABS 8D FF DF */
    c->pc = 0x8047u;
    ea = 0xDFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8047u: /* LSR IMP 4A */
    c->pc = 0x8048u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8048u: /* STA ABS 8D FF DF */
    c->pc = 0x804Bu;
    ea = 0xDFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x804Bu: /* LSR IMP 4A */
    c->pc = 0x804Cu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x804Cu: /* STA ABS 8D FF DF */
    c->pc = 0x804Fu;
    ea = 0xDFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x804Fu: /* LSR IMP 4A */
    c->pc = 0x8050u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8050u: /* STA ABS 8D FF DF */
    c->pc = 0x8053u;
    ea = 0xDFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8053u: /* LSR IMP 4A */
    c->pc = 0x8054u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8054u: /* STA ABS 8D FF DF */
    c->pc = 0x8057u;
    ea = 0xDFFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8057u: /* LDA IMM A9 03 */
    c->pc = 0x8059u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8059u: /* STA ZP 85 A8 */
    c->pc = 0x805Bu;
    ea = 0xA8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x805Bu: /* LDA IMM A9 00 */
    c->pc = 0x805Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x805Du: /* STA ZP 85 A7 */
    c->pc = 0x805Fu;
    ea = 0xA7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x805Fu: /* JSR ABS 20 57 C5 */
    push(c, 0x80u); push(c, 0x61u); c->pc = 0xC557u; c->cpu_cycles += 6u; return 1;
case 0x8062u: /* LDA ZP A5 BE */
    c->pc = 0x8064u;
    ea = 0xBEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8064u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8066u ^ 0x805Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x805Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8066u; } return 1;
case 0x8066u: /* LDA ZP A5 9A */
    c->pc = 0x8068u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8068u: /* CMP IMM C9 FF */
    c->pc = 0x806Au;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x806Au: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x806Cu ^ 0x8072u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8072u; }
    else { c->cpu_cycles += 2u; c->pc = 0x806Cu; } return 1;
case 0x806Cu: /* LDA IMM A9 08 */
    c->pc = 0x806Eu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x806Eu: /* STA ZP 85 2A */
    c->pc = 0x8070u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8070u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8072u ^ 0x8079u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8079u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8072u; } return 1;
case 0x8072u: /* LDA IMM A9 03 */
    c->pc = 0x8074u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8074u: /* STA ZP 85 A8 */
    c->pc = 0x8076u;
    ea = 0xA8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8076u: /* JSR ABS 20 65 C5 */
    push(c, 0x80u); push(c, 0x78u); c->pc = 0xC565u; c->cpu_cycles += 6u; return 1;
case 0x8079u: /* LDA ZP A5 2A */
    c->pc = 0x807Bu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x807Bu: /* CMP IMM C9 08 */
    c->pc = 0x807Du;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x807Du: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x807Fu ^ 0x8088u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8088u; }
    else { c->cpu_cycles += 2u; c->pc = 0x807Fu; } return 1;
case 0x807Fu: /* JSR ABS 20 71 C0 */
    push(c, 0x80u); push(c, 0x81u); c->pc = 0xC071u; c->cpu_cycles += 6u; return 1;
case 0x8082u: /* LDA ZP A5 2A */
    c->pc = 0x8084u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8084u: /* CMP IMM C9 09 */
    c->pc = 0x8086u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8086u: /* BCS REL B0 09 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8088u ^ 0x8091u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8091u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8088u; } return 1;
case 0x8088u: /* LDX IMM A2 0A */
    c->pc = 0x808Au;
    v = 0x0Au;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x808Au: /* LDA IMM A9 1C */
    c->pc = 0x808Cu;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x808Cu: /* STA ZPX 95 9C */
    c->pc = 0x808Eu;
    ea = (uint8_t)(0x9Cu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x808Eu: /* DEX IMP CA */
    c->pc = 0x808Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x808Fu: /* BPL REL 10 FB */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8091u ^ 0x808Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x808Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8091u; } return 1;
case 0x8091u: /* LDX IMM A2 00 */
    c->pc = 0x8093u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8093u: /* LDA ZP A5 2A */
    c->pc = 0x8095u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8095u: /* AND IMM 29 08 */
    c->pc = 0x8097u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8097u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8099u ^ 0x809Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x809Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8099u; } return 1;
case 0x8099u: /* LDX IMM A2 03 */
    c->pc = 0x809Bu;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x809Bu: /* STX ZP 86 B0 */
    c->pc = 0x809Du;
    ea = 0xB0u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x809Du: /* LDA IMM A9 14 */
    c->pc = 0x809Fu;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x809Fu: /* LDX IMM A2 1F */
    c->pc = 0x80A1u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x80A1u: /* STA ABX 9D 40 01 */
    c->pc = 0x80A4u;
    ea = (uint16_t)(0x0140u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x80A4u: /* DEX IMP CA */
    c->pc = 0x80A5u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x80A5u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x80A7u ^ 0x80A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80A7u; } return 1;
case 0x80A7u: /* LDA IMM A9 00 */
    c->pc = 0x80A9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80A9u: /* STA ZP 85 BC */
    c->pc = 0x80ABu;
    ea = 0xBCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80ABu: /* LDA IMM A9 00 */
    c->pc = 0x80ADu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80ADu: /* STA ZP 85 46 */
    c->pc = 0x80AFu;
    ea = 0x46u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80AFu: /* LDA IMM A9 40 */
    c->pc = 0x80B1u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B1u: /* STA ZP 85 45 */
    c->pc = 0x80B3u;
    ea = 0x45u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80B3u: /* LDA IMM A9 10 */
    c->pc = 0x80B5u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B5u: /* STA ZP 85 F7 */
    c->pc = 0x80B7u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80B7u: /* STA ABS 8D 00 20 */
    c->pc = 0x80BAu;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80BAu: /* LDA IMM A9 06 */
    c->pc = 0x80BCu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80BCu: /* STA ZP 85 F8 */
    c->pc = 0x80BEu;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80BEu: /* STA ABS 8D 01 20 */
    c->pc = 0x80C1u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80C1u: /* JSR ABS 20 5D C4 */
    push(c, 0x80u); push(c, 0xC3u); c->pc = 0xC45Du; c->cpu_cycles += 6u; return 1;
case 0x80C4u: /* LDA IMM A9 1C */
    c->pc = 0x80C6u;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80C6u: /* STA ABS 8D C0 06 */
    c->pc = 0x80C9u;
    ea = 0x06C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80C9u: /* LDA IMM A9 00 */
    c->pc = 0x80CBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80CBu: /* STA ZP 85 AA */
    c->pc = 0x80CDu;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80CDu: /* STA ZP 85 A9 */
    c->pc = 0x80CFu;
    ea = 0xA9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80CFu: /* JSR ABS 20 ED D2 */
    push(c, 0x80u); push(c, 0xD1u); c->pc = 0xD2EDu; c->cpu_cycles += 6u; return 1;
case 0x80D2u: /* JSR ABS 20 CD C4 */
    push(c, 0x80u); push(c, 0xD4u); c->pc = 0xC4CDu; c->cpu_cycles += 6u; return 1;
case 0x80D5u: /* LDA IMM A9 00 */
    c->pc = 0x80D7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80D7u: /* STA ZP 85 1F */
    c->pc = 0x80D9u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80D9u: /* STA ZP 85 1E */
    c->pc = 0x80DBu;
    ea = 0x1Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80DBu: /* STA ZP 85 22 */
    c->pc = 0x80DDu;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80DDu: /* STA ZP 85 B5 */
    c->pc = 0x80DFu;
    ea = 0xB5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80DFu: /* STA ZP 85 B6 */
    c->pc = 0x80E1u;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E1u: /* STA ZP 85 B7 */
    c->pc = 0x80E3u;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E3u: /* STA ZP 85 B8 */
    c->pc = 0x80E5u;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E5u: /* STA ZP 85 B9 */
    c->pc = 0x80E7u;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E7u: /* STA ABS 8D 60 04 */
    c->pc = 0x80EAu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80EAu: /* STA ABS 8D 80 04 */
    c->pc = 0x80EDu;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80EDu: /* STA ZP 85 43 */
    c->pc = 0x80EFu;
    ea = 0x43u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80EFu: /* STA ZP 85 44 */
    c->pc = 0x80F1u;
    ea = 0x44u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80F1u: /* STA ZP 85 B1 */
    c->pc = 0x80F3u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80F3u: /* LDA ZP A5 20 */
    c->pc = 0x80F5u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80F5u: /* JSR ABS 20 7D 90 */
    push(c, 0x80u); push(c, 0xF7u); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x80F8u: /* CLC IMP 18 */
    c->pc = 0x80F9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x80F9u: /* LDA ZP A5 20 */
    c->pc = 0x80FBu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80FBu: /* ADC IMM 69 01 */
    c->pc = 0x80FDu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x80FDu: /* JSR ABS 20 7D 90 */
    push(c, 0x80u); push(c, 0xFFu); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x8100u: /* LDA IMM A9 20 */
    c->pc = 0x8102u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8102u: /* STA ZP 85 1A */
    c->pc = 0x8104u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8104u: /* JSR ABS 20 6C CC */
    push(c, 0x81u); push(c, 0x06u); c->pc = 0xCC6Cu; c->cpu_cycles += 6u; return 1;
case 0x8107u: /* LDA ZP A5 F8 */
    c->pc = 0x8109u;
    ea = 0xF8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8109u: /* ORA IMM 09 1E */
    c->pc = 0x810Bu;
    v = 0x1Eu;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x810Bu: /* STA ZP 85 F8 */
    c->pc = 0x810Du;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x810Du: /* STA ABS 8D 01 20 */
    c->pc = 0x8110u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8110u: /* LDA ZP A5 F7 */
    c->pc = 0x8112u;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8112u: /* ORA IMM 09 80 */
    c->pc = 0x8114u;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8114u: /* STA ZP 85 F7 */
    c->pc = 0x8116u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8116u: /* STA ABS 8D 00 20 */
    c->pc = 0x8119u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8119u: /* STA ZP 85 1D */
    c->pc = 0x811Bu;
    ea = 0x1Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x811Bu: /* LDA IMM A9 40 */
    c->pc = 0x811Du;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x811Du: /* STA ZP 85 30 */
    c->pc = 0x811Fu;
    ea = 0x30u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x811Fu: /* LDA IMM A9 00 */
    c->pc = 0x8121u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8121u: /* STA ZP 85 31 */
    c->pc = 0x8123u;
    ea = 0x31u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8123u: /* LDX ZP A6 2A */
    c->pc = 0x8125u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8125u: /* LDA ABX BD D0 81 */
    c->pc = 0x8128u;
    ea = (uint16_t)(0x81D0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x81D0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8128u: /* JSR ABS 20 51 C0 */
    push(c, 0x81u); push(c, 0x2Au); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x812Bu: /* LDX IMM A2 13 */
    c->pc = 0x812Du;
    v = 0x13u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x812Du: /* LDA ABX BD BC 81 */
    c->pc = 0x8130u;
    ea = (uint16_t)(0x81BCu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x81BCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8130u: /* STA ABX 9D 00 02 */
    c->pc = 0x8133u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8133u: /* DEX IMP CA */
    c->pc = 0x8134u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8134u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8136u ^ 0x812Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x812Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8136u; } return 1;
case 0x8136u: /* LDA IMM A9 C0 */
    c->pc = 0x8138u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8138u: /* STA ZP 85 FD */
    c->pc = 0x813Au;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x813Au: /* LDY IMM A0 60 */
    c->pc = 0x813Cu;
    v = 0x60u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x813Cu: /* LDX IMM A2 10 */
    c->pc = 0x813Eu;
    v = 0x10u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x813Eu: /* LDA ZP A5 FD */
    c->pc = 0x8140u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8140u: /* AND IMM 29 08 */
    c->pc = 0x8142u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8142u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8144u ^ 0x8146u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8146u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8144u; } return 1;
case 0x8144u: /* LDY IMM A0 F8 */
    c->pc = 0x8146u;
    v = 0xF8u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8146u: /* TYA IMP 98 */
    c->pc = 0x8147u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8147u: /* STA ABX 9D 00 02 */
    c->pc = 0x814Au;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x814Au: /* DEX IMP CA */
    c->pc = 0x814Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x814Bu: /* DEX IMP CA */
    c->pc = 0x814Cu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x814Cu: /* DEX IMP CA */
    c->pc = 0x814Du;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x814Du: /* DEX IMP CA */
    c->pc = 0x814Eu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x814Eu: /* BPL REL 10 F6 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8150u ^ 0x8146u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8146u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8150u; } return 1;
case 0x8150u: /* JSR ABS 20 7F C0 */
    push(c, 0x81u); push(c, 0x52u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x8153u: /* DEC ZP C6 FD */
    c->pc = 0x8155u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8155u: /* BNE REL D0 E3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8157u ^ 0x813Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x813Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8157u; } return 1;
case 0x8157u: /* JSR ABS 20 6C CC */
    push(c, 0x81u); push(c, 0x59u); c->pc = 0xCC6Cu; c->cpu_cycles += 6u; return 1;
case 0x815Au: /* LDA IMM A9 DF */
    c->pc = 0x815Cu;
    v = 0xDFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x815Cu: /* STA ZP 85 3B */
    c->pc = 0x815Eu;
    ea = 0x3Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x815Eu: /* LDA IMM A9 04 */
    c->pc = 0x8160u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8160u: /* STA ZP 85 3C */
    c->pc = 0x8162u;
    ea = 0x3Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8162u: /* JSR ABS 20 20 92 */
    push(c, 0x81u); push(c, 0x64u); c->pc = 0x9220u; c->cpu_cycles += 6u; return 1;
case 0x8165u: /* JSR ABS 20 B5 C7 */
    push(c, 0x81u); push(c, 0x67u); c->pc = 0xC7B5u; c->cpu_cycles += 6u; return 1;
case 0x8168u: /* LDA ZP A5 2A */
    c->pc = 0x816Au;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x816Au: /* CMP IMM C9 0C */
    c->pc = 0x816Cu;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x816Cu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x816Eu ^ 0x8171u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8171u; }
    else { c->cpu_cycles += 2u; c->pc = 0x816Eu; } return 1;
case 0x816Eu: /* JMP ABS 4C 23 82 */
    c->pc = 0x8223u; c->cpu_cycles += 3u; return 1;
case 0x8171u: /* LDA ZP A5 AD */
    c->pc = 0x8173u;
    ea = 0xADu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8173u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8175u ^ 0x8178u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8178u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8175u; } return 1;
case 0x8175u: /* JSR ABS 20 D5 82 */
    push(c, 0x81u); push(c, 0x77u); c->pc = 0x82D5u; c->cpu_cycles += 6u; return 1;
case 0x8178u: /* LDA ZP A5 27 */
    c->pc = 0x817Au;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x817Au: /* AND IMM 29 08 */
    c->pc = 0x817Cu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x817Cu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x817Eu ^ 0x8181u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8181u; }
    else { c->cpu_cycles += 2u; c->pc = 0x817Eu; } return 1;
case 0x817Eu: /* JSR ABS 20 73 C5 */
    push(c, 0x81u); push(c, 0x80u); c->pc = 0xC573u; c->cpu_cycles += 6u; return 1;
case 0x8181u: /* JSR ABS 20 8C CB */
    push(c, 0x81u); push(c, 0x83u); c->pc = 0xCB8Cu; c->cpu_cycles += 6u; return 1;
case 0x8184u: /* JSR ABS 20 EE 84 */
    push(c, 0x81u); push(c, 0x86u); c->pc = 0x84EEu; c->cpu_cycles += 6u; return 1;
case 0x8187u: /* JSR ABS 20 D0 DC */
    push(c, 0x81u); push(c, 0x89u); c->pc = 0xDCD0u; c->cpu_cycles += 6u; return 1;
case 0x818Au: /* JSR ABS 20 58 D6 */
    push(c, 0x81u); push(c, 0x8Cu); c->pc = 0xD658u; c->cpu_cycles += 6u; return 1;
case 0x818Du: /* JSR ABS 20 A9 C5 */
    push(c, 0x81u); push(c, 0x8Fu); c->pc = 0xC5A9u; c->cpu_cycles += 6u; return 1;
case 0x8190u: /* JSR ABS 20 5B 92 */
    push(c, 0x81u); push(c, 0x92u); c->pc = 0x925Bu; c->cpu_cycles += 6u; return 1;
case 0x8193u: /* JSR ABS 20 77 CC */
    push(c, 0x81u); push(c, 0x95u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x8196u: /* LDA ZP A5 37 */
    c->pc = 0x8198u;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8198u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x819Au ^ 0x819Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x819Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x819Au; } return 1;
case 0x819Au: /* JSR ABS 20 78 82 */
    push(c, 0x81u); push(c, 0x9Cu); c->pc = 0x8278u; c->cpu_cycles += 6u; return 1;
case 0x819Du: /* LDA ZP A5 FB */
    c->pc = 0x819Fu;
    ea = 0xFBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x819Fu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x81A1u ^ 0x81B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x81A1u; } return 1;
case 0x81A1u: /* INC ZP E6 FC */
    c->pc = 0x81A3u;
    ea = 0xFCu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x81A3u: /* CMP ZP C5 FC */
    c->pc = 0x81A5u;
    ea = 0xFCu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x81A5u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x81A7u ^ 0x81A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x81A7u; } return 1;
case 0x81A7u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x81A9u ^ 0x81B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x81A9u; } return 1;
case 0x81A9u: /* JSR ABS 20 D7 C0 */
    push(c, 0x81u); push(c, 0xABu); c->pc = 0xC0D7u; c->cpu_cycles += 6u; return 1;
case 0x81ACu: /* LDA IMM A9 00 */
    c->pc = 0x81AEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81AEu: /* STA ZP 85 FC */
    c->pc = 0x81B0u;
    ea = 0xFCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81B0u: /* JSR ABS 20 7F C0 */
    push(c, 0x81u); push(c, 0xB2u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x81B3u: /* JMP ABS 4C 71 81 */
    c->pc = 0x8171u; c->cpu_cycles += 3u; return 1;
case 0x81DEu: /* LDA ZP A5 BC */
    c->pc = 0x81E0u;
    ea = 0xBCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81E0u: /* CMP IMM C9 FF */
    c->pc = 0x81E2u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x81E2u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81E4u ^ 0x81F9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81F9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x81E4u; } return 1;
case 0x81E4u: /* LDX IMM A2 00 */
    c->pc = 0x81E6u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81E6u: /* STX ZP 86 2B */
    c->pc = 0x81E8u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x81E8u: /* LDA IMM A9 7E */
    c->pc = 0x81EAu;
    v = 0x7Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81EAu: /* LDX IMM A2 0E */
    c->pc = 0x81ECu;
    v = 0x0Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81ECu: /* JSR ABS 20 60 F1 */
    push(c, 0x81u); push(c, 0xEEu); c->pc = 0xF160u; c->cpu_cycles += 6u; return 1;
case 0x81EFu: /* LDA IMM A9 3B */
    c->pc = 0x81F1u;
    v = 0x3Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81F1u: /* STA ABS 8D BE 04 */
    c->pc = 0x81F4u;
    ea = 0x04BEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81F4u: /* LDA IMM A9 80 */
    c->pc = 0x81F6u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81F6u: /* STA ABS 8D 7E 04 */
    c->pc = 0x81F9u;
    ea = 0x047Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81F9u: /* LDA IMM A9 00 */
    c->pc = 0x81FBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81FBu: /* STA ZP 85 2B */
    c->pc = 0x81FDu;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81FDu: /* STA ZP 85 02 */
    c->pc = 0x81FFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81FFu: /* LDA ZP A5 BC */
    c->pc = 0x8201u;
    ea = 0xBCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8201u: /* STA ZP 85 03 */
    c->pc = 0x8203u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8203u: /* LSR ZP 46 03 */
    c->pc = 0x8205u;
    ea = 0x03u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8205u: /* BCS REL B0 13 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8207u ^ 0x821Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x821Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8207u; } return 1;
case 0x8207u: /* LDA IMM A9 7C */
    c->pc = 0x8209u;
    v = 0x7Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8209u: /* LDX ZP A6 02 */
    c->pc = 0x820Bu;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x820Bu: /* JSR ABS 20 60 F1 */
    push(c, 0x82u); push(c, 0x0Du); c->pc = 0xF160u; c->cpu_cycles += 6u; return 1;
case 0x820Eu: /* LDA ABY B9 68 82 */
    c->pc = 0x8211u;
    ea = (uint16_t)(0x8268u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8268u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8211u: /* STA ABY 99 B0 04 */
    c->pc = 0x8214u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8214u: /* LDA ABY B9 70 82 */
    c->pc = 0x8217u;
    ea = (uint16_t)(0x8270u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8270u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8217u: /* STA ABY 99 70 04 */
    c->pc = 0x821Au;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x821Au: /* INC ZP E6 02 */
    c->pc = 0x821Cu;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x821Cu: /* LDA ZP A5 02 */
    c->pc = 0x821Eu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x821Eu: /* CMP IMM C9 08 */
    c->pc = 0x8220u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8220u: /* BNE REL D0 E1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8222u ^ 0x8203u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8203u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8222u; } return 1;
case 0x8222u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8223u: /* JSR ABS 20 DE 81 */
    push(c, 0x82u); push(c, 0x25u); c->pc = 0x81DEu; c->cpu_cycles += 6u; return 1;
case 0x8226u: /* LDA ZP A5 AD */
    c->pc = 0x8228u;
    ea = 0xADu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8228u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x822Au ^ 0x822Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x822Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x822Au; } return 1;
case 0x822Au: /* JSR ABS 20 D5 82 */
    push(c, 0x82u); push(c, 0x2Cu); c->pc = 0x82D5u; c->cpu_cycles += 6u; return 1;
case 0x822Du: /* LDA ZP A5 27 */
    c->pc = 0x822Fu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x822Fu: /* AND IMM 29 08 */
    c->pc = 0x8231u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8231u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8233u ^ 0x8236u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8236u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8233u; } return 1;
case 0x8233u: /* JSR ABS 20 73 C5 */
    push(c, 0x82u); push(c, 0x35u); c->pc = 0xC573u; c->cpu_cycles += 6u; return 1;
case 0x8236u: /* JSR ABS 20 8C CB */
    push(c, 0x82u); push(c, 0x38u); c->pc = 0xCB8Cu; c->cpu_cycles += 6u; return 1;
case 0x8239u: /* JSR ABS 20 EE 84 */
    push(c, 0x82u); push(c, 0x3Bu); c->pc = 0x84EEu; c->cpu_cycles += 6u; return 1;
case 0x823Cu: /* JSR ABS 20 D0 DC */
    push(c, 0x82u); push(c, 0x3Eu); c->pc = 0xDCD0u; c->cpu_cycles += 6u; return 1;
case 0x823Fu: /* JSR ABS 20 A9 C5 */
    push(c, 0x82u); push(c, 0x41u); c->pc = 0xC5A9u; c->cpu_cycles += 6u; return 1;
case 0x8242u: /* JSR ABS 20 5B 92 */
    push(c, 0x82u); push(c, 0x44u); c->pc = 0x925Bu; c->cpu_cycles += 6u; return 1;
case 0x8245u: /* JSR ABS 20 77 CC */
    push(c, 0x82u); push(c, 0x47u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x8248u: /* LDA ZP A5 37 */
    c->pc = 0x824Au;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x824Au: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x824Cu ^ 0x824Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x824Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x824Cu; } return 1;
case 0x824Cu: /* JSR ABS 20 78 82 */
    push(c, 0x82u); push(c, 0x4Eu); c->pc = 0x8278u; c->cpu_cycles += 6u; return 1;
case 0x824Fu: /* LDA ZP A5 FB */
    c->pc = 0x8251u;
    ea = 0xFBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8251u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8253u ^ 0x8262u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8262u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8253u; } return 1;
case 0x8253u: /* INC ZP E6 FC */
    c->pc = 0x8255u;
    ea = 0xFCu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8255u: /* CMP ZP C5 FC */
    c->pc = 0x8257u;
    ea = 0xFCu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8257u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8259u ^ 0x825Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x825Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8259u; } return 1;
case 0x8259u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x825Bu ^ 0x8262u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8262u; }
    else { c->cpu_cycles += 2u; c->pc = 0x825Bu; } return 1;
case 0x825Bu: /* JSR ABS 20 D7 C0 */
    push(c, 0x82u); push(c, 0x5Du); c->pc = 0xC0D7u; c->cpu_cycles += 6u; return 1;
case 0x825Eu: /* LDA IMM A9 00 */
    c->pc = 0x8260u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8260u: /* STA ZP 85 FC */
    c->pc = 0x8262u;
    ea = 0xFCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8262u: /* JSR ABS 20 7F C0 */
    push(c, 0x82u); push(c, 0x64u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x8265u: /* JMP ABS 4C 26 82 */
    c->pc = 0x8226u; c->cpu_cycles += 3u; return 1;
case 0x8278u: /* LDX ZP A6 1F */
    c->pc = 0x827Au;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x827Au: /* BNE REL D0 3F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x827Cu ^ 0x82BBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82BBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x827Cu; } return 1;
case 0x827Cu: /* LDX ZP A6 20 */
    c->pc = 0x827Eu;
    ea = 0x20u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x827Eu: /* BEQ REL F0 18 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8280u ^ 0x8298u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8298u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8280u; } return 1;
case 0x8280u: /* CPX ZP E4 14 */
    c->pc = 0x8282u;
    ea = 0x14u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x8282u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8284u ^ 0x8298u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8298u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8284u; } return 1;
case 0x8284u: /* LDY ZP A4 38 */
    c->pc = 0x8286u;
    ea = 0x38u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8286u: /* DEY IMP 88 */
    c->pc = 0x8287u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8287u: /* JSR ABS 20 A4 C7 */
    push(c, 0x82u); push(c, 0x89u); c->pc = 0xC7A4u; c->cpu_cycles += 6u; return 1;
case 0x828Au: /* TYA IMP 98 */
    c->pc = 0x828Bu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x828Bu: /* LDY ZP A4 37 */
    c->pc = 0x828Du;
    ea = 0x37u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x828Du: /* AND ABY 39 CC 82 */
    c->pc = 0x8290u;
    ea = (uint16_t)(0x82CCu + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x82CCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8290u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8292u ^ 0x8298u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8298u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8292u; } return 1;
case 0x8292u: /* JSR ABS 20 DD 8E */
    push(c, 0x82u); push(c, 0x94u); c->pc = 0x8EDDu; c->cpu_cycles += 6u; return 1;
case 0x8295u: /* JMP ABS 4C C8 82 */
    c->pc = 0x82C8u; c->cpu_cycles += 3u; return 1;
case 0x8298u: /* CPX ZP E4 15 */
    c->pc = 0x829Au;
    ea = 0x15u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x829Au: /* BNE REL D0 1F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x829Cu ^ 0x82BBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82BBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x829Cu; } return 1;
case 0x829Cu: /* LDY ZP A4 38 */
    c->pc = 0x829Eu;
    ea = 0x38u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x829Eu: /* JSR ABS 20 A4 C7 */
    push(c, 0x82u); push(c, 0xA0u); c->pc = 0xC7A4u; c->cpu_cycles += 6u; return 1;
case 0x82A1u: /* TYA IMP 98 */
    c->pc = 0x82A2u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82A2u: /* LDY ZP A4 37 */
    c->pc = 0x82A4u;
    ea = 0x37u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x82A4u: /* AND ABY 39 D0 82 */
    c->pc = 0x82A7u;
    ea = (uint16_t)(0x82D0u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x82D0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82A7u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82A9u ^ 0x82BBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82BBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x82A9u; } return 1;
case 0x82A9u: /* JSR ABS 20 39 8F */
    push(c, 0x82u); push(c, 0xABu); c->pc = 0x8F39u; c->cpu_cycles += 6u; return 1;
case 0x82ACu: /* LDX ZP A6 2A */
    c->pc = 0x82AEu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x82AEu: /* LDA ZP A5 20 */
    c->pc = 0x82B0u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82B0u: /* CMP ABX DD 6F 90 */
    c->pc = 0x82B3u;
    ea = (uint16_t)(0x906Fu + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x906Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82B3u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x82B5u ^ 0x82B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82B5u; } return 1;
case 0x82B5u: /* JSR ABS 20 08 C8 */
    push(c, 0x82u); push(c, 0xB7u); c->pc = 0xC808u; c->cpu_cycles += 6u; return 1;
case 0x82B8u: /* JMP ABS 4C C8 82 */
    c->pc = 0x82C8u; c->cpu_cycles += 3u; return 1;
case 0x82BBu: /* LDA ZP A5 37 */
    c->pc = 0x82BDu;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82BDu: /* CMP IMM C9 03 */
    c->pc = 0x82BFu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x82BFu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x82C1u ^ 0x82C8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82C8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82C1u; } return 1;
case 0x82C1u: /* LDA IMM A9 01 */
    c->pc = 0x82C3u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82C3u: /* STA ZP 85 2C */
    c->pc = 0x82C5u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82C5u: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0x82C8u: /* LDA IMM A9 00 */
    c->pc = 0x82CAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82CAu: /* STA ZP 85 37 */
    c->pc = 0x82CCu;
    ea = 0x37u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82CCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x82D5u: /* SEC IMP 38 */
    c->pc = 0x82D6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x82D6u: /* LDA ZP A5 AD */
    c->pc = 0x82D8u;
    ea = 0xADu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82D8u: /* SBC IMM E9 76 */
    c->pc = 0x82DAu;
    v = 0x76u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x82DAu: /* TAY IMP A8 */
    c->pc = 0x82DBu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x82DBu: /* LDA IMM A9 00 */
    c->pc = 0x82DDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82DDu: /* STA ZP 85 AD */
    c->pc = 0x82DFu;
    ea = 0xADu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82DFu: /* LDA ABY B9 DC 84 */
    c->pc = 0x82E2u;
    ea = (uint16_t)(0x84DCu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84DCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82E2u: /* STA ZP 85 08 */
    c->pc = 0x82E4u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82E4u: /* LDA ABY B9 E5 84 */
    c->pc = 0x82E7u;
    ea = (uint16_t)(0x84E5u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84E5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82E7u: /* STA ZP 85 09 */
    c->pc = 0x82E9u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82E9u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x82ECu: /* LDA IMM A9 0A */
    c->pc = 0x82EEu;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82EEu: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x82F0u ^ 0x82F2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82F2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82F0u; } return 1;
case 0x82F0u: /* LDA IMM A9 02 */
    c->pc = 0x82F2u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82F2u: /* STA ZP 85 FD */
    c->pc = 0x82F4u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82F4u: /* LDA ABS AD C0 06 */
    c->pc = 0x82F7u;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x82F7u: /* CMP IMM C9 1C */
    c->pc = 0x82F9u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x82F9u: /* BCS REL B0 2B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x82FBu ^ 0x8326u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8326u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82FBu; } return 1;
case 0x82FBu: /* LDA IMM A9 07 */
    c->pc = 0x82FDu;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82FDu: /* STA ZP 85 AA */
    c->pc = 0x82FFu;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82FFu: /* LDX ZP A6 A9 */
    c->pc = 0x8301u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8301u: /* LDA ABS AD C0 06 */
    c->pc = 0x8304u;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8304u: /* CMP IMM C9 1C */
    c->pc = 0x8306u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8306u: /* BCS REL B0 1B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8308u ^ 0x8323u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8323u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8308u; } return 1;
case 0x8308u: /* LDA ZP A5 1C */
    c->pc = 0x830Au;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x830Au: /* AND IMM 29 07 */
    c->pc = 0x830Cu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x830Cu: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x830Eu ^ 0x831Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x831Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x830Eu; } return 1;
case 0x830Eu: /* DEC ZP C6 FD */
    c->pc = 0x8310u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8310u: /* BMI REL 30 11 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8312u ^ 0x8323u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8323u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8312u; } return 1;
case 0x8312u: /* INC ABS EE C0 06 */
    c->pc = 0x8315u;
    ea = 0x06C0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8315u: /* LDA IMM A9 28 */
    c->pc = 0x8317u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8317u: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0x19u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x831Au: /* JSR ABS 20 77 CC */
    push(c, 0x83u); push(c, 0x1Cu); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x831Du: /* JSR ABS 20 7F C0 */
    push(c, 0x83u); push(c, 0x1Fu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x8320u: /* JMP ABS 4C FF 82 */
    c->pc = 0x82FFu; c->cpu_cycles += 3u; return 1;
case 0x8323u: /* JMP ABS 4C 61 83 */
    c->pc = 0x8361u; c->cpu_cycles += 3u; return 1;
case 0x8326u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8327u: /* LDA IMM A9 0A */
    c->pc = 0x8329u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8329u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x832Bu ^ 0x832Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x832Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x832Bu; } return 1;
case 0x832Bu: /* LDA IMM A9 02 */
    c->pc = 0x832Du;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x832Du: /* STA ZP 85 FD */
    c->pc = 0x832Fu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x832Fu: /* LDA ZP A5 A9 */
    c->pc = 0x8331u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8331u: /* BEQ REL F0 3B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8333u ^ 0x836Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x836Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8333u; } return 1;
case 0x8333u: /* LDX ZP A6 A9 */
    c->pc = 0x8335u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8335u: /* LDA ZPX B5 9B */
    c->pc = 0x8337u;
    ea = (uint8_t)(0x9Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8337u: /* CMP IMM C9 1C */
    c->pc = 0x8339u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8339u: /* BEQ REL F0 33 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x833Bu ^ 0x836Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x836Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x833Bu; } return 1;
case 0x833Bu: /* LDA IMM A9 07 */
    c->pc = 0x833Du;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x833Du: /* STA ZP 85 AA */
    c->pc = 0x833Fu;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x833Fu: /* LDX ZP A6 A9 */
    c->pc = 0x8341u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8341u: /* LDA ZPX B5 9B */
    c->pc = 0x8343u;
    ea = (uint8_t)(0x9Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8343u: /* CMP IMM C9 1C */
    c->pc = 0x8345u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8345u: /* BCS REL B0 1A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8347u ^ 0x8361u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8361u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8347u; } return 1;
case 0x8347u: /* LDA ZP A5 1C */
    c->pc = 0x8349u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8349u: /* AND IMM 29 07 */
    c->pc = 0x834Bu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x834Bu: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x834Du ^ 0x8358u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8358u; }
    else { c->cpu_cycles += 2u; c->pc = 0x834Du; } return 1;
case 0x834Du: /* DEC ZP C6 FD */
    c->pc = 0x834Fu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x834Fu: /* BMI REL 30 10 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8351u ^ 0x8361u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8361u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8351u; } return 1;
case 0x8351u: /* INC ZPX F6 9B */
    c->pc = 0x8353u;
    ea = (uint8_t)(0x9Bu + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8353u: /* LDA IMM A9 28 */
    c->pc = 0x8355u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8355u: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0x57u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8358u: /* JSR ABS 20 77 CC */
    push(c, 0x83u); push(c, 0x5Au); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x835Bu: /* JSR ABS 20 7F C0 */
    push(c, 0x83u); push(c, 0x5Du); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x835Eu: /* JMP ABS 4C 3F 83 */
    c->pc = 0x833Fu; c->cpu_cycles += 3u; return 1;
case 0x8361u: /* LDA IMM A9 00 */
    c->pc = 0x8363u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8363u: /* STA ZP 85 FD */
    c->pc = 0x8365u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8365u: /* STA ZP 85 AA */
    c->pc = 0x8367u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8367u: /* LDA IMM A9 03 */
    c->pc = 0x8369u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8369u: /* STA ZP 85 2C */
    c->pc = 0x836Bu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x836Bu: /* JSR ABS 20 A8 D3 */
    push(c, 0x83u); push(c, 0x6Du); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x836Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x836Fu: /* LDA ZP A5 A7 */
    c->pc = 0x8371u;
    ea = 0xA7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8371u: /* CMP IMM C9 04 */
    c->pc = 0x8373u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8373u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8375u ^ 0x8377u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8377u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8375u; } return 1;
case 0x8375u: /* INC ZP E6 A7 */
    c->pc = 0x8377u;
    ea = 0xA7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8377u: /* LDA IMM A9 42 */
    c->pc = 0x8379u;
    v = 0x42u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8379u: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0x7Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x837Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x837Du: /* LDA ZP A5 A8 */
    c->pc = 0x837Fu;
    ea = 0xA8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x837Fu: /* CMP IMM C9 63 */
    c->pc = 0x8381u;
    v = 0x63u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8381u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8383u ^ 0x838Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x838Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8383u; } return 1;
case 0x8383u: /* INC ZP E6 A8 */
    c->pc = 0x8385u;
    ea = 0xA8u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8385u: /* LDA IMM A9 42 */
    c->pc = 0x8387u;
    v = 0x42u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8387u: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0x89u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x838Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x838Bu: /* JSR ABS 20 DF 83 */
    push(c, 0x83u); push(c, 0x8Du); c->pc = 0x83DFu; c->cpu_cycles += 6u; return 1;
case 0x838Eu: /* LDA IMM A9 00 */
    c->pc = 0x8390u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8390u: /* STA ZP 85 FD */
    c->pc = 0x8392u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8392u: /* LDX ZP A6 BA */
    c->pc = 0x8394u;
    ea = 0xBAu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8394u: /* LDA ABX BD D6 83 */
    c->pc = 0x8397u;
    ea = (uint16_t)(0x83D6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x83D6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8397u: /* STA ZP 85 FE */
    c->pc = 0x8399u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8399u: /* DEX IMP CA */
    c->pc = 0x839Au;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x839Au: /* STX ZP 86 2A */
    c->pc = 0x839Cu;
    ea = 0x2Au;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x839Cu: /* JSR ABS 20 16 84 */
    push(c, 0x83u); push(c, 0x9Eu); c->pc = 0x8416u; c->cpu_cycles += 6u; return 1;
case 0x839Fu: /* LDA IMM A9 0C */
    c->pc = 0x83A1u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83A1u: /* STA ZP 85 2A */
    c->pc = 0x83A3u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83A3u: /* LDX IMM A2 05 */
    c->pc = 0x83A5u;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x83A5u: /* LDA ZP A5 BA */
    c->pc = 0x83A7u;
    ea = 0xBAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83A7u: /* CMP IMM C9 04 */
    c->pc = 0x83A9u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x83A9u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x83ABu ^ 0x83ADu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83ADu; }
    else { c->cpu_cycles += 2u; c->pc = 0x83ABu; } return 1;
case 0x83ABu: /* LDX IMM A2 02 */
    c->pc = 0x83ADu;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x83ADu: /* JSR ABS 20 81 84 */
    push(c, 0x83u); push(c, 0xAFu); c->pc = 0x8481u; c->cpu_cycles += 6u; return 1;
case 0x83B0u: /* INC ZP E6 20 */
    c->pc = 0x83B2u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83B2u: /* INC ABS EE 40 04 */
    c->pc = 0x83B5u;
    ea = 0x0440u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x83B5u: /* INC ZP E6 38 */
    c->pc = 0x83B7u;
    ea = 0x38u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83B7u: /* INC ZP E6 14 */
    c->pc = 0x83B9u;
    ea = 0x14u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83B9u: /* INC ZP E6 15 */
    c->pc = 0x83BBu;
    ea = 0x15u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83BBu: /* LDA IMM A9 20 */
    c->pc = 0x83BDu;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83BDu: /* STA ABS 8D 60 04 */
    c->pc = 0x83C0u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83C0u: /* LDA IMM A9 B4 */
    c->pc = 0x83C2u;
    v = 0xB4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83C2u: /* STA ABS 8D A0 04 */
    c->pc = 0x83C5u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83C5u: /* JSR ABS 20 07 84 */
    push(c, 0x83u); push(c, 0xC7u); c->pc = 0x8407u; c->cpu_cycles += 6u; return 1;
case 0x83C8u: /* LDA IMM A9 0B */
    c->pc = 0x83CAu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83CAu: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0xCCu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x83CDu: /* LDA ZP A5 BA */
    c->pc = 0x83CFu;
    ea = 0xBAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83CFu: /* STA ZP 85 B3 */
    c->pc = 0x83D1u;
    ea = 0xB3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83D1u: /* DEC ZP C6 B3 */
    c->pc = 0x83D3u;
    ea = 0xB3u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83D3u: /* JSR ABS 20 0C C8 */
    push(c, 0x83u); push(c, 0xD5u); c->pc = 0xC80Cu; c->cpu_cycles += 6u; return 1;
case 0x83D6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x83DFu: /* LDA IMM A9 30 */
    c->pc = 0x83E1u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83E1u: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0xE3u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x83E4u: /* LDA IMM A9 0B */
    c->pc = 0x83E6u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83E6u: /* STA ZP 85 2C */
    c->pc = 0x83E8u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83E8u: /* JSR ABS 20 A8 D3 */
    push(c, 0x83u); push(c, 0xEAu); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x83EBu: /* JSR ABS 20 20 92 */
    push(c, 0x83u); push(c, 0xEDu); c->pc = 0x9220u; c->cpu_cycles += 6u; return 1;
case 0x83EEu: /* LDA ABS AD A0 06 */
    c->pc = 0x83F1u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83F1u: /* CMP IMM C9 03 */
    c->pc = 0x83F3u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x83F3u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x83F5u ^ 0x83FEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83FEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x83F5u; } return 1;
case 0x83F5u: /* JSR ABS 20 77 CC */
    push(c, 0x83u); push(c, 0xF7u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x83F8u: /* JSR ABS 20 7F C0 */
    push(c, 0x83u); push(c, 0xFAu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x83FBu: /* JMP ABS 4C EE 83 */
    c->pc = 0x83EEu; c->cpu_cycles += 3u; return 1;
case 0x83FEu: /* LDA IMM A9 00 */
    c->pc = 0x8400u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8400u: /* STA ABS 8D 20 04 */
    c->pc = 0x8403u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8403u: /* JSR ABS 20 77 CC */
    push(c, 0x84u); push(c, 0x05u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x8406u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8407u: /* LDA IMM A9 C0 */
    c->pc = 0x8409u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8409u: /* STA ABS 8D 20 04 */
    c->pc = 0x840Cu;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x840Cu: /* LDA IMM A9 00 */
    c->pc = 0x840Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x840Eu: /* STA ZP 85 36 */
    c->pc = 0x8410u;
    ea = 0x36u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8410u: /* STA ZP 85 2C */
    c->pc = 0x8412u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8412u: /* JSR ABS 20 A8 D3 */
    push(c, 0x84u); push(c, 0x14u); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x8415u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8416u: /* JSR ABS 20 0C CB */
    push(c, 0x84u); push(c, 0x18u); c->pc = 0xCB0Cu; c->cpu_cycles += 6u; return 1;
case 0x8419u: /* JSR ABS 20 7F C0 */
    push(c, 0x84u); push(c, 0x1Bu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x841Cu: /* LDA ZP A5 FD */
    c->pc = 0x841Eu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x841Eu: /* CMP IMM C9 60 */
    c->pc = 0x8420u;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8420u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8422u ^ 0x8416u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8416u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8422u; } return 1;
case 0x8422u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8423u: /* JSR ABS 20 DF 83 */
    push(c, 0x84u); push(c, 0x25u); c->pc = 0x83DFu; c->cpu_cycles += 6u; return 1;
case 0x8426u: /* LDX ZP A6 B3 */
    c->pc = 0x8428u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8428u: /* LDA ZP A5 BC */
    c->pc = 0x842Au;
    ea = 0xBCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x842Au: /* ORA ABX 1D 79 C2 */
    c->pc = 0x842Du;
    ea = (uint16_t)(0xC279u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC279u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x842Du: /* STA ZP 85 BC */
    c->pc = 0x842Fu;
    ea = 0xBCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x842Fu: /* CMP IMM C9 FF */
    c->pc = 0x8431u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8431u: /* BNE REL D0 1D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8433u ^ 0x8450u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8450u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8433u; } return 1;
case 0x8433u: /* LDA IMM A9 00 */
    c->pc = 0x8435u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8435u: /* STA ZP 85 FD */
    c->pc = 0x8437u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8437u: /* LDA IMM A9 14 */
    c->pc = 0x8439u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8439u: /* STA ZP 85 FE */
    c->pc = 0x843Bu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x843Bu: /* JSR ABS 20 16 84 */
    push(c, 0x84u); push(c, 0x3Du); c->pc = 0x8416u; c->cpu_cycles += 6u; return 1;
case 0x843Eu: /* LDA IMM A9 28 */
    c->pc = 0x8440u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8440u: /* JSR ABS 20 7D 90 */
    push(c, 0x84u); push(c, 0x42u); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x8443u: /* LDA IMM A9 28 */
    c->pc = 0x8445u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8445u: /* STA ZP 85 20 */
    c->pc = 0x8447u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8447u: /* STA ABS 8D 40 04 */
    c->pc = 0x844Au;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x844Au: /* STA ZP 85 14 */
    c->pc = 0x844Cu;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x844Cu: /* STA ZP 85 15 */
    c->pc = 0x844Eu;
    ea = 0x15u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x844Eu: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8450u ^ 0x845Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x845Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8450u; } return 1;
case 0x8450u: /* DEC ZP C6 20 */
    c->pc = 0x8452u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8452u: /* DEC ABS CE 40 04 */
    c->pc = 0x8455u;
    ea = 0x0440u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8455u: /* DEC ZP C6 38 */
    c->pc = 0x8457u;
    ea = 0x38u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8457u: /* DEC ZP C6 14 */
    c->pc = 0x8459u;
    ea = 0x14u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8459u: /* DEC ZP C6 15 */
    c->pc = 0x845Bu;
    ea = 0x15u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x845Bu: /* LDX IMM A2 08 */
    c->pc = 0x845Du;
    v = 0x08u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x845Du: /* JSR ABS 20 81 84 */
    push(c, 0x84u); push(c, 0x5Fu); c->pc = 0x8481u; c->cpu_cycles += 6u; return 1;
case 0x8460u: /* LDA IMM A9 00 */
    c->pc = 0x8462u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8462u: /* STA ZP 85 B1 */
    c->pc = 0x8464u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8464u: /* LDX ZP A6 B3 */
    c->pc = 0x8466u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8466u: /* CLC IMP 18 */
    c->pc = 0x8467u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8467u: /* LDA ABX BD 68 82 */
    c->pc = 0x846Au;
    ea = (uint16_t)(0x8268u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8268u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x846Au: /* ADC IMM 69 07 */
    c->pc = 0x846Cu;
    v = 0x07u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x846Cu: /* STA ABS 8D A0 04 */
    c->pc = 0x846Fu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x846Fu: /* LDA ABX BD 70 82 */
    c->pc = 0x8472u;
    ea = (uint16_t)(0x8270u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8270u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8472u: /* STA ABS 8D 60 04 */
    c->pc = 0x8475u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8475u: /* JSR ABS 20 07 84 */
    push(c, 0x84u); push(c, 0x77u); c->pc = 0x8407u; c->cpu_cycles += 6u; return 1;
case 0x8478u: /* LDA IMM A9 09 */
    c->pc = 0x847Au;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x847Au: /* JSR ABS 20 51 C0 */
    push(c, 0x84u); push(c, 0x7Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x847Du: /* JSR ABS 20 DE 81 */
    push(c, 0x84u); push(c, 0x7Fu); c->pc = 0x81DEu; c->cpu_cycles += 6u; return 1;
case 0x8480u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8481u: /* LDY IMM A0 02 */
    c->pc = 0x8483u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8483u: /* LDA ABX BD 9A 84 */
    c->pc = 0x8486u;
    ea = (uint16_t)(0x849Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x849Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8486u: /* STA ABY 99 5F 03 */
    c->pc = 0x8489u;
    ea = (uint16_t)(0x035Fu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8489u: /* STA ABY 99 7F 03 */
    c->pc = 0x848Cu;
    ea = (uint16_t)(0x037Fu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x848Cu: /* STA ABY 99 8F 03 */
    c->pc = 0x848Fu;
    ea = (uint16_t)(0x038Fu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x848Fu: /* STA ABY 99 9F 03 */
    c->pc = 0x8492u;
    ea = (uint16_t)(0x039Fu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8492u: /* STA ABY 99 AF 03 */
    c->pc = 0x8495u;
    ea = (uint16_t)(0x03AFu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8495u: /* DEX IMP CA */
    c->pc = 0x8496u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8496u: /* DEY IMP 88 */
    c->pc = 0x8497u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8497u: /* BPL REL 10 EA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8499u ^ 0x8483u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8483u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8499u; } return 1;
case 0x8499u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84A3u: /* JSR ABS 20 DF 83 */
    push(c, 0x84u); push(c, 0xA5u); c->pc = 0x83DFu; c->cpu_cycles += 6u; return 1;
case 0x84A6u: /* LDA IMM A9 29 */
    c->pc = 0x84A8u;
    v = 0x29u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84A8u: /* JSR ABS 20 7D 90 */
    push(c, 0x84u); push(c, 0xAAu); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x84ABu: /* LDA IMM A9 29 */
    c->pc = 0x84ADu;
    v = 0x29u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84ADu: /* STA ZP 85 20 */
    c->pc = 0x84AFu;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84AFu: /* STA ABS 8D 40 04 */
    c->pc = 0x84B2u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84B2u: /* STA ZP 85 14 */
    c->pc = 0x84B4u;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84B4u: /* STA ZP 85 15 */
    c->pc = 0x84B6u;
    ea = 0x15u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84B6u: /* LDA IMM A9 00 */
    c->pc = 0x84B8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84B8u: /* STA ZP 85 FD */
    c->pc = 0x84BAu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84BAu: /* LDA IMM A9 15 */
    c->pc = 0x84BCu;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84BCu: /* STA ZP 85 FE */
    c->pc = 0x84BEu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84BEu: /* JSR ABS 20 16 84 */
    push(c, 0x84u); push(c, 0xC0u); c->pc = 0x8416u; c->cpu_cycles += 6u; return 1;
case 0x84C1u: /* LDA IMM A9 2A */
    c->pc = 0x84C3u;
    v = 0x2Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84C3u: /* JSR ABS 20 7D 90 */
    push(c, 0x84u); push(c, 0xC5u); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x84C6u: /* LDA IMM A9 B4 */
    c->pc = 0x84C8u;
    v = 0xB4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84C8u: /* STA ABS 8D A0 04 */
    c->pc = 0x84CBu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84CBu: /* LDA IMM A9 28 */
    c->pc = 0x84CDu;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84CDu: /* STA ABS 8D 60 04 */
    c->pc = 0x84D0u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84D0u: /* JSR ABS 20 07 84 */
    push(c, 0x84u); push(c, 0xD2u); c->pc = 0x8407u; c->cpu_cycles += 6u; return 1;
case 0x84D3u: /* LDA IMM A9 0B */
    c->pc = 0x84D5u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84D5u: /* JSR ABS 20 51 C0 */
    push(c, 0x84u); push(c, 0xD7u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x84D8u: /* JSR ABS 20 08 C8 */
    push(c, 0x84u); push(c, 0xDAu); c->pc = 0xC808u; c->cpu_cycles += 6u; return 1;
case 0x84DBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84EEu: /* LDA ZP A5 AA */
    c->pc = 0x84F0u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84F0u: /* AND IMM 29 04 */
    c->pc = 0x84F2u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84F2u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x84F4u ^ 0x84F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x84F4u; } return 1;
case 0x84F4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84F5u: /* LDA IMM A9 00 */
    c->pc = 0x84F7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84F7u: /* STA ZP 85 37 */
    c->pc = 0x84F9u;
    ea = 0x37u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84F9u: /* LDX ZP A6 2C */
    c->pc = 0x84FBu;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x84FBu: /* LDA ABX BD 83 87 */
    c->pc = 0x84FEu;
    ea = (uint16_t)(0x8783u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8783u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84FEu: /* STA ZP 85 08 */
    c->pc = 0x8500u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8500u: /* LDA ABX BD 8F 87 */
    c->pc = 0x8503u;
    ea = (uint16_t)(0x878Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x878Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8503u: /* STA ZP 85 09 */
    c->pc = 0x8505u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8505u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8508u: /* LDA ABS AD A0 06 */
    c->pc = 0x850Bu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x850Bu: /* CMP IMM C9 04 */
    c->pc = 0x850Du;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x850Du: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x850Fu ^ 0x8544u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8544u; }
    else { c->cpu_cycles += 2u; c->pc = 0x850Fu; } return 1;
case 0x850Fu: /* LDA IMM A9 C0 */
    c->pc = 0x8511u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8511u: /* STA ABS 8D 60 06 */
    c->pc = 0x8514u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8514u: /* LDA IMM A9 FF */
    c->pc = 0x8516u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8516u: /* STA ABS 8D 40 06 */
    c->pc = 0x8519u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8519u: /* LDA IMM A9 00 */
    c->pc = 0x851Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x851Bu: /* STA ZP 85 AA */
    c->pc = 0x851Du;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x851Du: /* LDA IMM A9 03 */
    c->pc = 0x851Fu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x851Fu: /* STA ZP 85 2C */
    c->pc = 0x8521u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8521u: /* JSR ABS 20 A8 D3 */
    push(c, 0x85u); push(c, 0x23u); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x8524u: /* LDA ABS AD 60 04 */
    c->pc = 0x8527u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8527u: /* STA ZP 85 08 */
    c->pc = 0x8529u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8529u: /* LDA ABS AD 40 04 */
    c->pc = 0x852Cu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x852Cu: /* STA ZP 85 09 */
    c->pc = 0x852Eu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x852Eu: /* LDA ABS AD A0 04 */
    c->pc = 0x8531u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8531u: /* STA ZP 85 0A */
    c->pc = 0x8533u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8533u: /* LDA IMM A9 00 */
    c->pc = 0x8535u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8535u: /* STA ZP 85 0B */
    c->pc = 0x8537u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8537u: /* JSR ABS 20 C3 CB */
    push(c, 0x85u); push(c, 0x39u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0x853Au: /* LDA ZP A5 00 */
    c->pc = 0x853Cu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x853Cu: /* CMP IMM C9 04 */
    c->pc = 0x853Eu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x853Eu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8540u ^ 0x8544u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8544u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8540u; } return 1;
case 0x8540u: /* LDA IMM A9 04 */
    c->pc = 0x8542u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8542u: /* STA ZP 85 FB */
    c->pc = 0x8544u;
    ea = 0xFBu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8544u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8545u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8546u: /* LDA ABS AD 20 04 */
    c->pc = 0x8549u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8549u: /* AND IMM 29 40 */
    c->pc = 0x854Bu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x854Bu: /* EOR IMM 49 40 */
    c->pc = 0x854Du;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x854Du: /* STA ZP 85 42 */
    c->pc = 0x854Fu;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x854Fu: /* JSR ABS 20 22 89 */
    push(c, 0x85u); push(c, 0x51u); c->pc = 0x8922u; c->cpu_cycles += 6u; return 1;
case 0x8552u: /* JSR ABS 20 83 8B */
    push(c, 0x85u); push(c, 0x54u); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x8555u: /* LDA ABS AD A0 06 */
    c->pc = 0x8558u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8558u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x855Au ^ 0x855Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x855Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x855Au; } return 1;
case 0x855Au: /* JSR ABS 20 A8 D3 */
    push(c, 0x85u); push(c, 0x5Cu); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x855Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x855Eu: /* LDY IMM A0 06 */
    c->pc = 0x8560u;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8560u: /* LDA ZP A5 00 */
    c->pc = 0x8562u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8562u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8564u ^ 0x8566u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8566u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8564u; } return 1;
case 0x8564u: /* LDY IMM A0 03 */
    c->pc = 0x8566u;
    v = 0x03u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8566u: /* STY ZP 84 2C */
    c->pc = 0x8568u;
    ea = 0x2Cu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8568u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8569u: /* JSR ABS 20 9B 87 */
    push(c, 0x85u); push(c, 0x6Bu); c->pc = 0x879Bu; c->cpu_cycles += 6u; return 1;
case 0x856Cu: /* LDA ZP A5 23 */
    c->pc = 0x856Eu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x856Eu: /* AND IMM 29 C0 */
    c->pc = 0x8570u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8570u: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8572u ^ 0x8579u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8579u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8572u; } return 1;
case 0x8572u: /* LDA IMM A9 04 */
    c->pc = 0x8574u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8574u: /* STA ZP 85 2C */
    c->pc = 0x8576u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8576u: /* JSR ABS 20 F2 87 */
    push(c, 0x85u); push(c, 0x78u); c->pc = 0x87F2u; c->cpu_cycles += 6u; return 1;
case 0x8579u: /* JSR ABS 20 0D 88 */
    push(c, 0x85u); push(c, 0x7Bu); c->pc = 0x880Du; c->cpu_cycles += 6u; return 1;
case 0x857Cu: /* JSR ABS 20 22 89 */
    push(c, 0x85u); push(c, 0x7Eu); c->pc = 0x8922u; c->cpu_cycles += 6u; return 1;
case 0x857Fu: /* JSR ABS 20 83 8B */
    push(c, 0x85u); push(c, 0x81u); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x8582u: /* LDA ZP A5 00 */
    c->pc = 0x8584u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8584u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8586u ^ 0x858Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x858Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8586u; } return 1;
case 0x8586u: /* LDA IMM A9 06 */
    c->pc = 0x8588u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8588u: /* STA ZP 85 2C */
    c->pc = 0x858Au;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x858Au: /* JSR ABS 20 A8 D3 */
    push(c, 0x85u); push(c, 0x8Cu); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x858Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x858Eu: /* LDA ZP A5 27 */
    c->pc = 0x8590u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8590u: /* AND IMM 29 01 */
    c->pc = 0x8592u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8592u: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8594u ^ 0x85A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8594u; } return 1;
case 0x8594u: /* LDA ZP A5 3B */
    c->pc = 0x8596u;
    ea = 0x3Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8596u: /* STA ABS 8D 60 06 */
    c->pc = 0x8599u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8599u: /* LDA ZP A5 3C */
    c->pc = 0x859Bu;
    ea = 0x3Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x859Bu: /* STA ABS 8D 40 06 */
    c->pc = 0x859Eu;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x859Eu: /* LDA IMM A9 06 */
    c->pc = 0x85A0u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85A0u: /* STA ZP 85 2C */
    c->pc = 0x85A2u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85A2u: /* JSR ABS 20 A8 D3 */
    push(c, 0x85u); push(c, 0xA4u); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x85A5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x85A6u: /* JSR ABS 20 9B 87 */
    push(c, 0x85u); push(c, 0xA8u); c->pc = 0x879Bu; c->cpu_cycles += 6u; return 1;
case 0x85A9u: /* JSR ABS 20 F2 87 */
    push(c, 0x85u); push(c, 0xABu); c->pc = 0x87F2u; c->cpu_cycles += 6u; return 1;
case 0x85ACu: /* JSR ABS 20 0D 88 */
    push(c, 0x85u); push(c, 0xAEu); c->pc = 0x880Du; c->cpu_cycles += 6u; return 1;
case 0x85AFu: /* JSR ABS 20 22 89 */
    push(c, 0x85u); push(c, 0xB1u); c->pc = 0x8922u; c->cpu_cycles += 6u; return 1;
case 0x85B2u: /* JSR ABS 20 83 8B */
    push(c, 0x85u); push(c, 0xB4u); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x85B5u: /* LDA ZP A5 00 */
    c->pc = 0x85B7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85B7u: /* BEQ REL F0 2D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x85B9u ^ 0x85E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85B9u; } return 1;
case 0x85B9u: /* LDA ZP A5 23 */
    c->pc = 0x85BBu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85BBu: /* AND IMM 29 C0 */
    c->pc = 0x85BDu;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85BDu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85BFu ^ 0x85C5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85C5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85BFu; } return 1;
case 0x85BFu: /* LDA IMM A9 03 */
    c->pc = 0x85C1u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85C1u: /* STA ZP 85 2C */
    c->pc = 0x85C3u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85C3u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85C5u ^ 0x85D0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85D0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85C5u; } return 1;
case 0x85C5u: /* LDA ABS AD A0 06 */
    c->pc = 0x85C8u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85C8u: /* CMP IMM C9 01 */
    c->pc = 0x85CAu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x85CAu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85CCu ^ 0x85D0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85D0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85CCu; } return 1;
case 0x85CCu: /* LDA IMM A9 05 */
    c->pc = 0x85CEu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85CEu: /* STA ZP 85 2C */
    c->pc = 0x85D0u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85D0u: /* JMP ABS 4C 8E 85 */
    c->pc = 0x858Eu; c->cpu_cycles += 3u; return 1;
case 0x85D3u: /* JSR ABS 20 9B 87 */
    push(c, 0x85u); push(c, 0xD5u); c->pc = 0x879Bu; c->cpu_cycles += 6u; return 1;
case 0x85D6u: /* JSR ABS 20 F2 87 */
    push(c, 0x85u); push(c, 0xD8u); c->pc = 0x87F2u; c->cpu_cycles += 6u; return 1;
case 0x85D9u: /* JSR ABS 20 0D 88 */
    push(c, 0x85u); push(c, 0xDBu); c->pc = 0x880Du; c->cpu_cycles += 6u; return 1;
case 0x85DCu: /* JSR ABS 20 22 89 */
    push(c, 0x85u); push(c, 0xDEu); c->pc = 0x8922u; c->cpu_cycles += 6u; return 1;
case 0x85DFu: /* JSR ABS 20 83 8B */
    push(c, 0x85u); push(c, 0xE1u); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x85E2u: /* LDA ZP A5 00 */
    c->pc = 0x85E4u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85E4u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85E6u ^ 0x85EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x85E6u; } return 1;
case 0x85E6u: /* LDA IMM A9 06 */
    c->pc = 0x85E8u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85E8u: /* STA ZP 85 2C */
    c->pc = 0x85EAu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85EAu: /* JSR ABS 20 A8 D3 */
    push(c, 0x85u); push(c, 0xECu); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x85EDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x85EEu: /* LDA ZP A5 23 */
    c->pc = 0x85F0u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85F0u: /* AND IMM 29 C0 */
    c->pc = 0x85F2u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85F2u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85F4u ^ 0x85F8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85F8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85F4u; } return 1;
case 0x85F4u: /* LDA IMM A9 07 */
    c->pc = 0x85F6u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85F6u: /* STA ZP 85 2C */
    c->pc = 0x85F8u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85F8u: /* JMP ABS 4C 8E 85 */
    c->pc = 0x858Eu; c->cpu_cycles += 3u; return 1;
case 0x85FBu: /* JSR ABS 20 9B 87 */
    push(c, 0x85u); push(c, 0xFDu); c->pc = 0x879Bu; c->cpu_cycles += 6u; return 1;
case 0x85FEu: /* LDA IMM A9 00 */
    c->pc = 0x8600u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8600u: /* STA ABS 8D 20 06 */
    c->pc = 0x8603u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8603u: /* STA ABS 8D 00 06 */
    c->pc = 0x8606u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8606u: /* LDA ZP A5 23 */
    c->pc = 0x8608u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8608u: /* AND IMM 29 C0 */
    c->pc = 0x860Au;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x860Au: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x860Cu ^ 0x863Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x863Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x860Cu; } return 1;
case 0x860Cu: /* LDA ZP A5 3E */
    c->pc = 0x860Eu;
    ea = 0x3Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x860Eu: /* ORA ZP 05 3F */
    c->pc = 0x8610u;
    ea = 0x3Fu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8610u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8612u ^ 0x861Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x861Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8612u; } return 1;
case 0x8612u: /* LDA ZP A5 40 */
    c->pc = 0x8614u;
    ea = 0x40u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8614u: /* AND IMM 29 0F */
    c->pc = 0x8616u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8616u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8618u ^ 0x8642u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8642u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8618u; } return 1;
case 0x8618u: /* JSR ABS 20 9E 88 */
    push(c, 0x86u); push(c, 0x1Au); c->pc = 0x889Eu; c->cpu_cycles += 6u; return 1;
case 0x861Bu: /* JMP ABS 4C 42 86 */
    c->pc = 0x8642u; c->cpu_cycles += 3u; return 1;
case 0x861Eu: /* SEC IMP 38 */
    c->pc = 0x861Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x861Fu: /* LDA ZP A5 3E */
    c->pc = 0x8621u;
    ea = 0x3Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8621u: /* SBC IMM E9 80 */
    c->pc = 0x8623u;
    v = 0x80u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8623u: /* STA ZP 85 3E */
    c->pc = 0x8625u;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8625u: /* TAX IMP AA */
    c->pc = 0x8626u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8626u: /* LDA ZP A5 3F */
    c->pc = 0x8628u;
    ea = 0x3Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8628u: /* SBC IMM E9 00 */
    c->pc = 0x862Au;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x862Au: /* STA ZP 85 3F */
    c->pc = 0x862Cu;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x862Cu: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x862Eu ^ 0x8634u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8634u; }
    else { c->cpu_cycles += 2u; c->pc = 0x862Eu; } return 1;
case 0x862Eu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8630u ^ 0x8642u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8642u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8630u; } return 1;
case 0x8630u: /* CPX IMM E0 80 */
    c->pc = 0x8632u;
    v = 0x80u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8632u: /* BCS REL B0 0E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8634u ^ 0x8642u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8642u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8634u; } return 1;
case 0x8634u: /* LDA IMM A9 00 */
    c->pc = 0x8636u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8636u: /* STA ZP 85 3E */
    c->pc = 0x8638u;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8638u: /* STA ZP 85 3F */
    c->pc = 0x863Au;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x863Au: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x863Cu ^ 0x8642u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8642u; }
    else { c->cpu_cycles += 2u; c->pc = 0x863Cu; } return 1;
case 0x863Cu: /* JSR ABS 20 F2 87 */
    push(c, 0x86u); push(c, 0x3Eu); c->pc = 0x87F2u; c->cpu_cycles += 6u; return 1;
case 0x863Fu: /* JSR ABS 20 0D 88 */
    push(c, 0x86u); push(c, 0x41u); c->pc = 0x880Du; c->cpu_cycles += 6u; return 1;
case 0x8642u: /* JSR ABS 20 22 89 */
    push(c, 0x86u); push(c, 0x44u); c->pc = 0x8922u; c->cpu_cycles += 6u; return 1;
case 0x8645u: /* LDA ABS AD 40 06 */
    c->pc = 0x8648u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8648u: /* BMI REL 30 23 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x864Au ^ 0x866Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x866Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x864Au; } return 1;
case 0x864Au: /* JSR ABS 20 83 8B */
    push(c, 0x86u); push(c, 0x4Cu); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x864Du: /* LDA ZP A5 00 */
    c->pc = 0x864Fu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x864Fu: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8651u ^ 0x866Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x866Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8651u; } return 1;
case 0x8651u: /* LDA ZP A5 23 */
    c->pc = 0x8653u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8653u: /* AND IMM 29 01 */
    c->pc = 0x8655u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8655u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8657u ^ 0x866Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x866Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8657u; } return 1;
case 0x8657u: /* LDA ABS AD 40 06 */
    c->pc = 0x865Au;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x865Au: /* BMI REL 30 10 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x865Cu ^ 0x866Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x866Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x865Cu; } return 1;
case 0x865Cu: /* CMP IMM C9 01 */
    c->pc = 0x865Eu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x865Eu: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8660u ^ 0x866Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x866Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8660u; } return 1;
case 0x8660u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8662u ^ 0x866Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x866Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8662u; } return 1;
case 0x8662u: /* LDA IMM A9 01 */
    c->pc = 0x8664u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8664u: /* STA ABS 8D 40 06 */
    c->pc = 0x8667u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8667u: /* LDA IMM A9 00 */
    c->pc = 0x8669u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8669u: /* STA ABS 8D 60 06 */
    c->pc = 0x866Cu;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x866Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x866Du: /* JSR ABS 20 83 8B */
    push(c, 0x86u); push(c, 0x6Fu); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x8670u: /* LDA ZP A5 00 */
    c->pc = 0x8672u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8672u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8674u ^ 0x8688u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8688u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8674u; } return 1;
case 0x8674u: /* LDA IMM A9 29 */
    c->pc = 0x8676u;
    v = 0x29u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8676u: /* JSR ABS 20 51 C0 */
    push(c, 0x86u); push(c, 0x78u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8679u: /* LDX IMM A2 05 */
    c->pc = 0x867Bu;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x867Bu: /* LDA ZP A5 25 */
    c->pc = 0x867Du;
    ea = 0x25u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x867Du: /* AND IMM 29 C0 */
    c->pc = 0x867Fu;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x867Fu: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8681u ^ 0x8683u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8683u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8681u; } return 1;
case 0x8681u: /* LDX IMM A2 08 */
    c->pc = 0x8683u;
    v = 0x08u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8683u: /* STX ZP 86 2C */
    c->pc = 0x8685u;
    ea = 0x2Cu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8685u: /* JMP ABS 4C 8E 85 */
    c->pc = 0x858Eu; c->cpu_cycles += 3u; return 1;
case 0x8688u: /* JSR ABS 20 A8 D3 */
    push(c, 0x86u); push(c, 0x8Au); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x868Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x868Cu: /* JSR ABS 20 9B 87 */
    push(c, 0x86u); push(c, 0x8Eu); c->pc = 0x879Bu; c->cpu_cycles += 6u; return 1;
case 0x868Fu: /* JSR ABS 20 F2 87 */
    push(c, 0x86u); push(c, 0x91u); c->pc = 0x87F2u; c->cpu_cycles += 6u; return 1;
case 0x8692u: /* JSR ABS 20 0D 88 */
    push(c, 0x86u); push(c, 0x94u); c->pc = 0x880Du; c->cpu_cycles += 6u; return 1;
case 0x8695u: /* JSR ABS 20 22 89 */
    push(c, 0x86u); push(c, 0x97u); c->pc = 0x8922u; c->cpu_cycles += 6u; return 1;
case 0x8698u: /* JSR ABS 20 83 8B */
    push(c, 0x86u); push(c, 0x9Au); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x869Bu: /* LDA ZP A5 00 */
    c->pc = 0x869Du;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x869Du: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x869Fu ^ 0x86A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x869Fu; } return 1;
case 0x869Fu: /* JMP ABS 4C E6 85 */
    c->pc = 0x85E6u; c->cpu_cycles += 3u; return 1;
case 0x86A2u: /* LDA ZP A5 23 */
    c->pc = 0x86A4u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86A4u: /* AND IMM 29 C0 */
    c->pc = 0x86A6u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86A6u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86A8u ^ 0x86B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86A8u; } return 1;
case 0x86A8u: /* LDA ABS AD A0 06 */
    c->pc = 0x86ABu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86ABu: /* CMP IMM C9 02 */
    c->pc = 0x86ADu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x86ADu: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86AFu ^ 0x86B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86AFu; } return 1;
case 0x86AFu: /* LDA IMM A9 03 */
    c->pc = 0x86B1u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86B1u: /* STA ZP 85 2C */
    c->pc = 0x86B3u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86B3u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86B5u ^ 0x86B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86B5u; } return 1;
case 0x86B5u: /* LDA IMM A9 04 */
    c->pc = 0x86B7u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86B7u: /* STA ZP 85 2C */
    c->pc = 0x86B9u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86B9u: /* JMP ABS 4C 8E 85 */
    c->pc = 0x858Eu; c->cpu_cycles += 3u; return 1;
case 0x86BCu: /* LDA IMM A9 09 */
    c->pc = 0x86BEu;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86BEu: /* STA ZP 85 2C */
    c->pc = 0x86C0u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86C0u: /* LDA ZP A5 23 */
    c->pc = 0x86C2u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86C2u: /* AND IMM 29 02 */
    c->pc = 0x86C4u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86C4u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86C6u ^ 0x86C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86C6u; } return 1;
case 0x86C6u: /* JMP ABS 4C 68 87 */
    c->pc = 0x8768u; c->cpu_cycles += 3u; return 1;
case 0x86C9u: /* LDA IMM A9 00 */
    c->pc = 0x86CBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86CBu: /* STA ZP 85 AB */
    c->pc = 0x86CDu;
    ea = 0xABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86CDu: /* LDA ZP A5 23 */
    c->pc = 0x86CFu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86CFu: /* AND IMM 29 31 */
    c->pc = 0x86D1u;
    v = 0x31u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86D1u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86D3u ^ 0x86D6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86D6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86D3u; } return 1;
case 0x86D3u: /* JMP ABS 4C 5F 87 */
    c->pc = 0x875Fu; c->cpu_cycles += 3u; return 1;
case 0x86D6u: /* AND IMM 29 30 */
    c->pc = 0x86D8u;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86D8u: /* BEQ REL F0 71 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86DAu ^ 0x874Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x874Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86DAu; } return 1;
case 0x86DAu: /* AND IMM 29 10 */
    c->pc = 0x86DCu;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86DCu: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86DEu ^ 0x8708u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8708u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86DEu; } return 1;
case 0x86DEu: /* LDY IMM A0 00 */
    c->pc = 0x86E0u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86E0u: /* LDX IMM A2 C0 */
    c->pc = 0x86E2u;
    v = 0xC0u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86E2u: /* LDA ZP A5 35 */
    c->pc = 0x86E4u;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86E4u: /* AND IMM 29 0C */
    c->pc = 0x86E6u;
    v = 0x0Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86E6u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86E8u ^ 0x86FEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86FEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86E8u; } return 1;
case 0x86E8u: /* LDA ABS AD A0 04 */
    c->pc = 0x86EBu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86EBu: /* AND IMM 29 F0 */
    c->pc = 0x86EDu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86EDu: /* SEC IMP 38 */
    c->pc = 0x86EEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x86EEu: /* SBC IMM E9 0C */
    c->pc = 0x86F0u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x86F0u: /* STA ABS 8D A0 04 */
    c->pc = 0x86F3u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86F3u: /* LDA ZP A5 F9 */
    c->pc = 0x86F5u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86F5u: /* SBC IMM E9 00 */
    c->pc = 0x86F7u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x86F7u: /* STA ZP 85 F9 */
    c->pc = 0x86F9u;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86F9u: /* LDX IMM A2 03 */
    c->pc = 0x86FBu;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86FBu: /* JMP ABS 4C 4D 87 */
    c->pc = 0x874Du; c->cpu_cycles += 3u; return 1;
case 0x86FEu: /* AND IMM 29 08 */
    c->pc = 0x8700u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8700u: /* BNE REL D0 29 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8702u ^ 0x872Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x872Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8702u; } return 1;
case 0x8702u: /* LDA IMM A9 0A */
    c->pc = 0x8704u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8704u: /* STA ZP 85 2C */
    c->pc = 0x8706u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8706u: /* BNE REL D0 23 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8708u ^ 0x872Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x872Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8708u; } return 1;
case 0x8708u: /* LDA ZP A5 35 */
    c->pc = 0x870Au;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x870Au: /* CMP IMM C9 01 */
    c->pc = 0x870Cu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x870Cu: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x870Eu ^ 0x871Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x871Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x870Eu; } return 1;
case 0x870Eu: /* LDA ABS AD A0 04 */
    c->pc = 0x8711u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8711u: /* CLC IMP 18 */
    c->pc = 0x8712u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8712u: /* ADC IMM 69 0C */
    c->pc = 0x8714u;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8714u: /* STA ABS 8D A0 04 */
    c->pc = 0x8717u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8717u: /* LDA ZP A5 F9 */
    c->pc = 0x8719u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8719u: /* ADC IMM 69 00 */
    c->pc = 0x871Bu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x871Bu: /* STA ZP 85 F9 */
    c->pc = 0x871Du;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x871Du: /* LDY IMM A0 FF */
    c->pc = 0x871Fu;
    v = 0xFFu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x871Fu: /* LDX IMM A2 40 */
    c->pc = 0x8721u;
    v = 0x40u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8721u: /* LDA ZP A5 35 */
    c->pc = 0x8723u;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8723u: /* AND IMM 29 0C */
    c->pc = 0x8725u;
    v = 0x0Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8725u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8727u ^ 0x872Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x872Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8727u; } return 1;
case 0x8727u: /* LDA IMM A9 0A */
    c->pc = 0x8729u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8729u: /* STA ZP 85 2C */
    c->pc = 0x872Bu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x872Bu: /* LDA ZP A5 3D */
    c->pc = 0x872Du;
    ea = 0x3Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x872Du: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x872Fu ^ 0x8733u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8733u; }
    else { c->cpu_cycles += 2u; c->pc = 0x872Fu; } return 1;
case 0x872Fu: /* LDY IMM A0 00 */
    c->pc = 0x8731u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8731u: /* LDX IMM A2 00 */
    c->pc = 0x8733u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8733u: /* STY ABS 8C 40 06 */
    c->pc = 0x8736u;
    ea = 0x0640u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x8736u: /* STX ABS 8E 60 06 */
    c->pc = 0x8739u;
    ea = 0x0660u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x8739u: /* JSR ABS 20 84 8A */
    push(c, 0x87u); push(c, 0x3Bu); c->pc = 0x8A84u; c->cpu_cycles += 6u; return 1;
case 0x873Cu: /* LDA ZP A5 35 */
    c->pc = 0x873Eu;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x873Eu: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8740u ^ 0x874Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x874Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8740u; } return 1;
case 0x8740u: /* JSR ABS 20 83 8B */
    push(c, 0x87u); push(c, 0x42u); c->pc = 0x8B83u; c->cpu_cycles += 6u; return 1;
case 0x8743u: /* LDA ZP A5 00 */
    c->pc = 0x8745u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8745u: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8747u ^ 0x8764u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8764u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8747u; } return 1;
case 0x8747u: /* LDX IMM A2 03 */
    c->pc = 0x8749u;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8749u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x874Bu ^ 0x874Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x874Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x874Bu; } return 1;
case 0x874Bu: /* LDX IMM A2 06 */
    c->pc = 0x874Du;
    v = 0x06u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x874Du: /* STX ZP 86 2C */
    c->pc = 0x874Fu;
    ea = 0x2Cu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x874Fu: /* LDA IMM A9 00 */
    c->pc = 0x8751u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8751u: /* STA ZP 85 35 */
    c->pc = 0x8753u;
    ea = 0x35u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8753u: /* LDA IMM A9 C0 */
    c->pc = 0x8755u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8755u: /* STA ABS 8D 60 06 */
    c->pc = 0x8758u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8758u: /* LDA IMM A9 FF */
    c->pc = 0x875Au;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x875Au: /* STA ABS 8D 40 06 */
    c->pc = 0x875Du;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x875Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x875Fu ^ 0x8764u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8764u; }
    else { c->cpu_cycles += 2u; c->pc = 0x875Fu; } return 1;
case 0x875Fu: /* LDA IMM A9 00 */
    c->pc = 0x8761u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8761u: /* STA ABS 8D 80 06 */
    c->pc = 0x8764u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8764u: /* JSR ABS 20 A8 D3 */
    push(c, 0x87u); push(c, 0x66u); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x8767u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8768u: /* JSR ABS 20 F2 87 */
    push(c, 0x87u); push(c, 0x6Au); c->pc = 0x87F2u; c->cpu_cycles += 6u; return 1;
case 0x876Bu: /* JSR ABS 20 51 DA */
    push(c, 0x87u); push(c, 0x6Du); c->pc = 0xDA51u; c->cpu_cycles += 6u; return 1;
case 0x876Eu: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8770u ^ 0x8773u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8773u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8770u; } return 1;
case 0x8770u: /* JMP ABS 4C CD 86 */
    c->pc = 0x86CDu; c->cpu_cycles += 3u; return 1;
case 0x8773u: /* JMP ABS 4C 5F 87 */
    c->pc = 0x875Fu; c->cpu_cycles += 3u; return 1;
case 0x8776u: /* LDA ABS AD A0 06 */
    c->pc = 0x8779u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8779u: /* CMP IMM C9 03 */
    c->pc = 0x877Bu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x877Bu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x877Du ^ 0x8782u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8782u; }
    else { c->cpu_cycles += 2u; c->pc = 0x877Du; } return 1;
case 0x877Du: /* LDA IMM A9 00 */
    c->pc = 0x877Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x877Fu: /* STA ABS 8D 80 06 */
    c->pc = 0x8782u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8782u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x879Bu: /* LDA ZP A5 23 */
    c->pc = 0x879Du;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x879Du: /* AND IMM 29 02 */
    c->pc = 0x879Fu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x879Fu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x87A1u ^ 0x87A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x87A1u; } return 1;
case 0x87A1u: /* LDA IMM A9 00 */
    c->pc = 0x87A3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87A3u: /* STA ZP 85 AB */
    c->pc = 0x87A5u;
    ea = 0xABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87A5u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x87A7u ^ 0x87AAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87AAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x87A7u; } return 1;
case 0x87A7u: /* JSR ABS 20 51 DA */
    push(c, 0x87u); push(c, 0xA9u); c->pc = 0xDA51u; c->cpu_cycles += 6u; return 1;
case 0x87AAu: /* LDA ZP A5 35 */
    c->pc = 0x87ACu;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87ACu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x87AEu ^ 0x87AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x87AEu; } return 1;
case 0x87AEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x87AFu: /* LDA ZP A5 23 */
    c->pc = 0x87B1u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87B1u: /* AND IMM 29 30 */
    c->pc = 0x87B3u;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87B3u: /* BEQ REL F0 F9 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x87B5u ^ 0x87AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x87B5u; } return 1;
case 0x87B5u: /* ORA ZP 05 35 */
    c->pc = 0x87B7u;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87B7u: /* CMP IMM C9 11 */
    c->pc = 0x87B9u;
    v = 0x11u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x87B9u: /* BEQ REL F0 F3 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x87BBu ^ 0x87AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x87BBu; } return 1;
case 0x87BBu: /* CMP IMM C9 2E */
    c->pc = 0x87BDu;
    v = 0x2Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x87BDu: /* BEQ REL F0 EF */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x87BFu ^ 0x87AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x87BFu; } return 1;
case 0x87BFu: /* LDA ABS AD 60 04 */
    c->pc = 0x87C2u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87C2u: /* STA ZP 85 2E */
    c->pc = 0x87C4u;
    ea = 0x2Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87C4u: /* AND IMM 29 F0 */
    c->pc = 0x87C6u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87C6u: /* ORA IMM 09 08 */
    c->pc = 0x87C8u;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87C8u: /* SEC IMP 38 */
    c->pc = 0x87C9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x87C9u: /* STA ABS 8D 60 04 */
    c->pc = 0x87CCu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87CCu: /* SBC ZP E5 2E */
    c->pc = 0x87CEu;
    ea = 0x2Eu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x87CEu: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x87D0u ^ 0x87D8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87D8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x87D0u; } return 1;
case 0x87D0u: /* STA ZP 85 00 */
    c->pc = 0x87D2u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87D2u: /* JSR ABS 20 F5 8D */
    push(c, 0x87u); push(c, 0xD4u); c->pc = 0x8DF5u; c->cpu_cycles += 6u; return 1;
case 0x87D5u: /* JMP ABS 4C E2 87 */
    c->pc = 0x87E2u; c->cpu_cycles += 3u; return 1;
case 0x87D8u: /* EOR IMM 49 FF */
    c->pc = 0x87DAu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87DAu: /* CLC IMP 18 */
    c->pc = 0x87DBu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x87DBu: /* ADC IMM 69 01 */
    c->pc = 0x87DDu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x87DDu: /* STA ZP 85 00 */
    c->pc = 0x87DFu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87DFu: /* JSR ABS 20 65 8E */
    push(c, 0x87u); push(c, 0xE1u); c->pc = 0x8E65u; c->cpu_cycles += 6u; return 1;
case 0x87E2u: /* LDA ABS AD 20 04 */
    c->pc = 0x87E5u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87E5u: /* EOR IMM 49 40 */
    c->pc = 0x87E7u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87E7u: /* STA ABS 8D 20 04 */
    c->pc = 0x87EAu;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87EAu: /* JSR ABS 20 A8 D3 */
    push(c, 0x87u); push(c, 0xECu); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x87EDu: /* PLA IMP 68 */
    c->pc = 0x87EEu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87EEu: /* PLA IMP 68 */
    c->pc = 0x87EFu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87EFu: /* JMP ABS 4C BC 86 */
    c->pc = 0x86BCu; c->cpu_cycles += 3u; return 1;
case 0x87F2u: /* LDA ZP A5 23 */
    c->pc = 0x87F4u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87F4u: /* AND IMM 29 C0 */
    c->pc = 0x87F6u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87F6u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x87F8u ^ 0x880Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x880Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x87F8u; } return 1;
case 0x87F8u: /* LDA ABS AD 20 04 */
    c->pc = 0x87FBu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87FBu: /* AND IMM 29 BF */
    c->pc = 0x87FDu;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87FDu: /* STA ABS 8D 20 04 */
    c->pc = 0x8800u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8800u: /* LDA ZP A5 23 */
    c->pc = 0x8802u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8802u: /* AND IMM 29 40 */
    c->pc = 0x8804u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8804u: /* EOR IMM 49 40 */
    c->pc = 0x8806u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8806u: /* ORA ABS 0D 20 04 */
    c->pc = 0x8809u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8809u: /* STA ABS 8D 20 04 */
    c->pc = 0x880Cu;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x880Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x880Du: /* LDX ZP A6 2C */
    c->pc = 0x880Fu;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x880Fu: /* LDA ABX BD 0C 89 */
    c->pc = 0x8812u;
    ea = (uint16_t)(0x890Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x890Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8812u: /* STA ABS 8D 00 06 */
    c->pc = 0x8815u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8815u: /* LDA ABX BD 17 89 */
    c->pc = 0x8818u;
    ea = (uint16_t)(0x8917u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8917u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8818u: /* STA ABS 8D 20 06 */
    c->pc = 0x881Bu;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x881Bu: /* LDA ZP A5 3D */
    c->pc = 0x881Du;
    ea = 0x3Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x881Du: /* CMP IMM C9 03 */
    c->pc = 0x881Fu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x881Fu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8821u ^ 0x882Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x882Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8821u; } return 1;
case 0x8821u: /* LDA ZP A5 2C */
    c->pc = 0x8823u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8823u: /* CMP IMM C9 06 */
    c->pc = 0x8825u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8825u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8827u ^ 0x882Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x882Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8827u; } return 1;
case 0x8827u: /* LDA IMM A9 00 */
    c->pc = 0x8829u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8829u: /* STA ABS 8D 20 06 */
    c->pc = 0x882Cu;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x882Cu: /* STA ABS 8D 00 06 */
    c->pc = 0x882Fu;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x882Fu: /* LDA ZP A5 40 */
    c->pc = 0x8831u;
    ea = 0x40u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8831u: /* BMI REL 30 08 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8833u ^ 0x883Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x883Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8833u; } return 1;
case 0x8833u: /* LDA ZP A5 3E */
    c->pc = 0x8835u;
    ea = 0x3Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8835u: /* ORA ZP 05 3F */
    c->pc = 0x8837u;
    ea = 0x3Fu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8837u: /* BEQ REL F0 65 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8839u ^ 0x889Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x889Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8839u; } return 1;
case 0x8839u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x883Bu ^ 0x8844u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8844u; }
    else { c->cpu_cycles += 2u; c->pc = 0x883Bu; } return 1;
case 0x883Bu: /* LDA ABS AD 20 04 */
    c->pc = 0x883Eu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x883Eu: /* AND IMM 29 40 */
    c->pc = 0x8840u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8840u: /* CMP ZP C5 42 */
    c->pc = 0x8842u;
    ea = 0x42u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8842u: /* BEQ REL F0 3C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8844u ^ 0x8880u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8880u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8844u; } return 1;
case 0x8844u: /* LDX IMM A2 00 */
    c->pc = 0x8846u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8846u: /* LDA ZP A5 2C */
    c->pc = 0x8848u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8848u: /* CMP IMM C9 06 */
    c->pc = 0x884Au;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x884Au: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x884Cu ^ 0x8854u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8854u; }
    else { c->cpu_cycles += 2u; c->pc = 0x884Cu; } return 1;
case 0x884Cu: /* INX IMP E8 */
    c->pc = 0x884Du;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x884Du: /* LDA ZP A5 23 */
    c->pc = 0x884Fu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x884Fu: /* AND IMM 29 C0 */
    c->pc = 0x8851u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8851u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8853u ^ 0x8854u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8854u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8853u; } return 1;
case 0x8853u: /* INX IMP E8 */
    c->pc = 0x8854u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8854u: /* SEC IMP 38 */
    c->pc = 0x8855u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8855u: /* LDA ZP A5 3E */
    c->pc = 0x8857u;
    ea = 0x3Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8857u: /* SBC ABX FD 09 89 */
    c->pc = 0x885Au;
    ea = (uint16_t)(0x8909u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x8909u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x885Au: /* STA ZP 85 3E */
    c->pc = 0x885Cu;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x885Cu: /* TAX IMP AA */
    c->pc = 0x885Du;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x885Du: /* LDA ZP A5 3F */
    c->pc = 0x885Fu;
    ea = 0x3Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x885Fu: /* SBC IMM E9 00 */
    c->pc = 0x8861u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8861u: /* STA ZP 85 3F */
    c->pc = 0x8863u;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8863u: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8865u ^ 0x886Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x886Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8865u; } return 1;
case 0x8865u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8867u ^ 0x8873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8873u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8867u; } return 1;
case 0x8867u: /* CPX IMM E0 80 */
    c->pc = 0x8869u;
    v = 0x80u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8869u: /* BCS REL B0 08 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x886Bu ^ 0x8873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8873u; }
    else { c->cpu_cycles += 2u; c->pc = 0x886Bu; } return 1;
case 0x886Bu: /* LDA IMM A9 00 */
    c->pc = 0x886Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x886Du: /* STA ZP 85 3E */
    c->pc = 0x886Fu;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x886Fu: /* STA ZP 85 3F */
    c->pc = 0x8871u;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8871u: /* BEQ REL F0 24 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8873u ^ 0x8897u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8897u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8873u; } return 1;
case 0x8873u: /* LDA ZP A5 3E */
    c->pc = 0x8875u;
    ea = 0x3Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8875u: /* STA ABS 8D 20 06 */
    c->pc = 0x8878u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8878u: /* LDA ZP A5 3F */
    c->pc = 0x887Au;
    ea = 0x3Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x887Au: /* STA ABS 8D 00 06 */
    c->pc = 0x887Du;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x887Du: /* JMP ABS 4C 9E 88 */
    c->pc = 0x889Eu; c->cpu_cycles += 3u; return 1;
case 0x8880u: /* SEC IMP 38 */
    c->pc = 0x8881u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8881u: /* LDA ABS AD 20 06 */
    c->pc = 0x8884u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8884u: /* SBC ZP E5 3E */
    c->pc = 0x8886u;
    ea = 0x3Eu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8886u: /* LDA ABS AD 00 06 */
    c->pc = 0x8889u;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8889u: /* SBC ZP E5 3F */
    c->pc = 0x888Bu;
    ea = 0x3Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x888Bu: /* BCC REL 90 B7 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x888Du ^ 0x8844u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8844u; }
    else { c->cpu_cycles += 2u; c->pc = 0x888Du; } return 1;
case 0x888Du: /* LDA ABS AD 20 06 */
    c->pc = 0x8890u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8890u: /* STA ZP 85 3E */
    c->pc = 0x8892u;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8892u: /* LDA ABS AD 00 06 */
    c->pc = 0x8895u;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8895u: /* STA ZP 85 3F */
    c->pc = 0x8897u;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8897u: /* LDA ABS AD 20 04 */
    c->pc = 0x889Au;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x889Au: /* AND IMM 29 40 */
    c->pc = 0x889Cu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x889Cu: /* STA ZP 85 42 */
    c->pc = 0x889Eu;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x889Eu: /* LDA ZP A5 40 */
    c->pc = 0x88A0u;
    ea = 0x40u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88A0u: /* BPL REL 10 01 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x88A2u ^ 0x88A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88A2u; } return 1;
case 0x88A2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88A3u: /* AND IMM 29 0F */
    c->pc = 0x88A5u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88A5u: /* BEQ REL F0 53 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x88A7u ^ 0x88FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x88A7u; } return 1;
case 0x88A7u: /* LDA ABS AD 20 04 */
    c->pc = 0x88AAu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88AAu: /* AND IMM 29 40 */
    c->pc = 0x88ACu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88ACu: /* CMP ZP C5 AF */
    c->pc = 0x88AEu;
    ea = 0xAFu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x88AEu: /* BEQ REL F0 34 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x88B0u ^ 0x88E4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88E4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88B0u; } return 1;
case 0x88B0u: /* SEC IMP 38 */
    c->pc = 0x88B1u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x88B1u: /* LDA ABS AD 20 06 */
    c->pc = 0x88B4u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88B4u: /* SBC ZP E5 4F */
    c->pc = 0x88B6u;
    ea = 0x4Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x88B6u: /* STA ABS 8D 20 06 */
    c->pc = 0x88B9u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88B9u: /* LDA ABS AD 00 06 */
    c->pc = 0x88BCu;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88BCu: /* SBC ZP E5 50 */
    c->pc = 0x88BEu;
    ea = 0x50u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x88BEu: /* STA ABS 8D 00 06 */
    c->pc = 0x88C1u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88C1u: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x88C3u ^ 0x88CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x88C3u; } return 1;
case 0x88C3u: /* LDA ABS AD 20 04 */
    c->pc = 0x88C6u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88C6u: /* AND IMM 29 40 */
    c->pc = 0x88C8u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88C8u: /* STA ZP 85 42 */
    c->pc = 0x88CAu;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88CAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88CBu: /* LDA ABS AD 20 06 */
    c->pc = 0x88CEu;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88CEu: /* EOR IMM 49 FF */
    c->pc = 0x88D0u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88D0u: /* ADC IMM 69 01 */
    c->pc = 0x88D2u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x88D2u: /* STA ABS 8D 20 06 */
    c->pc = 0x88D5u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88D5u: /* LDA ABS AD 00 06 */
    c->pc = 0x88D8u;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88D8u: /* EOR IMM 49 FF */
    c->pc = 0x88DAu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88DAu: /* ADC IMM 69 00 */
    c->pc = 0x88DCu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x88DCu: /* STA ABS 8D 00 06 */
    c->pc = 0x88DFu;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88DFu: /* LDA ZP A5 AF */
    c->pc = 0x88E1u;
    ea = 0xAFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88E1u: /* STA ZP 85 42 */
    c->pc = 0x88E3u;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88E3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88E4u: /* CLC IMP 18 */
    c->pc = 0x88E5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x88E5u: /* LDA ABS AD 20 06 */
    c->pc = 0x88E8u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88E8u: /* ADC ZP 65 4F */
    c->pc = 0x88EAu;
    ea = 0x4Fu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x88EAu: /* STA ABS 8D 20 06 */
    c->pc = 0x88EDu;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88EDu: /* LDA ABS AD 00 06 */
    c->pc = 0x88F0u;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88F0u: /* ADC ZP 65 50 */
    c->pc = 0x88F2u;
    ea = 0x50u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x88F2u: /* STA ABS 8D 00 06 */
    c->pc = 0x88F5u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88F5u: /* LDA ZP A5 AF */
    c->pc = 0x88F7u;
    ea = 0xAFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88F7u: /* STA ZP 85 42 */
    c->pc = 0x88F9u;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88F9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88FAu: /* LDA ZP A5 3F */
    c->pc = 0x88FCu;
    ea = 0x3Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88FCu: /* ORA ZP 05 3E */
    c->pc = 0x88FEu;
    ea = 0x3Eu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88FEu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8900u ^ 0x8901u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8901u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8900u; } return 1;
case 0x8900u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8901u: /* LDA ABS AD 20 04 */
    c->pc = 0x8904u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8904u: /* AND IMM 29 40 */
    c->pc = 0x8906u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8906u: /* STA ZP 85 42 */
    c->pc = 0x8908u;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8908u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8922u: /* LDX ABS AE 40 04 */
    c->pc = 0x8925u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x8925u: /* STX ZP 86 2D */
    c->pc = 0x8927u;
    ea = 0x2Du;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8927u: /* LDY ABS AC 60 04 */
    c->pc = 0x892Au;
    ea = 0x0460u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x892Au: /* STY ZP 84 2E */
    c->pc = 0x892Cu;
    ea = 0x2Eu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x892Cu: /* LDA ABS AD 80 04 */
    c->pc = 0x892Fu;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x892Fu: /* STA ZP 85 2F */
    c->pc = 0x8931u;
    ea = 0x2Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8931u: /* LDA IMM A9 00 */
    c->pc = 0x8933u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8933u: /* STA ZP 85 00 */
    c->pc = 0x8935u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8935u: /* LDA ZP A5 42 */
    c->pc = 0x8937u;
    ea = 0x42u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8937u: /* AND IMM 29 40 */
    c->pc = 0x8939u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8939u: /* BEQ REL F0 70 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x893Bu ^ 0x89ABu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x89ABu; }
    else { c->cpu_cycles += 2u; c->pc = 0x893Bu; } return 1;
case 0x893Bu: /* CPX ZP E4 15 */
    c->pc = 0x893Du;
    ea = 0x15u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x893Du: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x893Fu ^ 0x894Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x894Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x893Fu; } return 1;
case 0x893Fu: /* CPY IMM C0 EC */
    c->pc = 0x8941u;
    v = 0xECu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8941u: /* BCC REL 90 07 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8943u ^ 0x894Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x894Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8943u; } return 1;
case 0x8943u: /* LDA IMM A9 02 */
    c->pc = 0x8945u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8945u: /* STA ZP 85 37 */
    c->pc = 0x8947u;
    ea = 0x37u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8947u: /* JMP ABS 4C 12 8A */
    c->pc = 0x8A12u; c->cpu_cycles += 3u; return 1;
case 0x894Au: /* CLC IMP 18 */
    c->pc = 0x894Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x894Bu: /* LDA ABS AD 80 04 */
    c->pc = 0x894Eu;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x894Eu: /* ADC ABS 6D 20 06 */
    c->pc = 0x8951u;
    ea = 0x0620u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8951u: /* STA ABS 8D 80 04 */
    c->pc = 0x8954u;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8954u: /* LDA ABS AD 60 04 */
    c->pc = 0x8957u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8957u: /* ADC ABS 6D 00 06 */
    c->pc = 0x895Au;
    ea = 0x0600u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x895Au: /* STA ABS 8D 60 04 */
    c->pc = 0x895Du;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x895Du: /* LDA ABS AD 40 04 */
    c->pc = 0x8960u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8960u: /* ADC IMM 69 00 */
    c->pc = 0x8962u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8962u: /* STA ABS 8D 40 04 */
    c->pc = 0x8965u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8965u: /* CLC IMP 18 */
    c->pc = 0x8966u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8966u: /* LDA ABS AD 60 04 */
    c->pc = 0x8969u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8969u: /* ADC IMM 69 08 */
    c->pc = 0x896Bu;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x896Bu: /* STA ZP 85 08 */
    c->pc = 0x896Du;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x896Du: /* LDA ABS AD 40 04 */
    c->pc = 0x8970u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8970u: /* ADC IMM 69 00 */
    c->pc = 0x8972u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8972u: /* STA ZP 85 09 */
    c->pc = 0x8974u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8974u: /* JSR ABS 20 20 8A */
    push(c, 0x89u); push(c, 0x76u); c->pc = 0x8A20u; c->cpu_cycles += 6u; return 1;
case 0x8977u: /* LDA ZP A5 00 */
    c->pc = 0x8979u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8979u: /* BEQ REL F0 1C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x897Bu ^ 0x8997u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8997u; }
    else { c->cpu_cycles += 2u; c->pc = 0x897Bu; } return 1;
case 0x897Bu: /* LDA IMM A9 00 */
    c->pc = 0x897Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x897Du: /* STA ABS 8D 80 04 */
    c->pc = 0x8980u;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8980u: /* LDA ZP A5 08 */
    c->pc = 0x8982u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8982u: /* AND IMM 29 0F */
    c->pc = 0x8984u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8984u: /* STA ZP 85 00 */
    c->pc = 0x8986u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8986u: /* SEC IMP 38 */
    c->pc = 0x8987u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8987u: /* LDA ABS AD 60 04 */
    c->pc = 0x898Au;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x898Au: /* SBC ZP E5 00 */
    c->pc = 0x898Cu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x898Cu: /* STA ABS 8D 60 04 */
    c->pc = 0x898Fu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x898Fu: /* LDA ABS AD 40 04 */
    c->pc = 0x8992u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8992u: /* SBC IMM E9 00 */
    c->pc = 0x8994u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8994u: /* STA ABS 8D 40 04 */
    c->pc = 0x8997u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8997u: /* SEC IMP 38 */
    c->pc = 0x8998u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8998u: /* LDA ABS AD 60 04 */
    c->pc = 0x899Bu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x899Bu: /* SBC ZP E5 2E */
    c->pc = 0x899Du;
    ea = 0x2Eu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x899Du: /* STA ZP 85 00 */
    c->pc = 0x899Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x899Fu: /* BPL REL 10 71 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x89A1u ^ 0x8A12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A12u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89A1u; } return 1;
case 0x89A1u: /* CLC IMP 18 */
    c->pc = 0x89A2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x89A2u: /* EOR IMM 49 FF */
    c->pc = 0x89A4u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89A4u: /* ADC IMM 69 01 */
    c->pc = 0x89A6u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x89A6u: /* STA ZP 85 00 */
    c->pc = 0x89A8u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89A8u: /* JMP ABS 4C 19 8A */
    c->pc = 0x8A19u; c->cpu_cycles += 3u; return 1;
case 0x89ABu: /* CPX ZP E4 14 */
    c->pc = 0x89ADu;
    ea = 0x14u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x89ADu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x89AFu ^ 0x89B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x89B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89AFu; } return 1;
case 0x89AFu: /* CPY IMM C0 14 */
    c->pc = 0x89B1u;
    v = 0x14u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x89B1u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x89B3u ^ 0x89B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x89B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89B3u; } return 1;
case 0x89B3u: /* JMP ABS 4C 19 8A */
    c->pc = 0x8A19u; c->cpu_cycles += 3u; return 1;
case 0x89B6u: /* SEC IMP 38 */
    c->pc = 0x89B7u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x89B7u: /* LDA ABS AD 80 04 */
    c->pc = 0x89BAu;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89BAu: /* SBC ABS ED 20 06 */
    c->pc = 0x89BDu;
    ea = 0x0620u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x89BDu: /* STA ABS 8D 80 04 */
    c->pc = 0x89C0u;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89C0u: /* LDA ABS AD 60 04 */
    c->pc = 0x89C3u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89C3u: /* SBC ABS ED 00 06 */
    c->pc = 0x89C6u;
    ea = 0x0600u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x89C6u: /* STA ABS 8D 60 04 */
    c->pc = 0x89C9u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89C9u: /* LDA ABS AD 40 04 */
    c->pc = 0x89CCu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89CCu: /* SBC IMM E9 00 */
    c->pc = 0x89CEu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x89CEu: /* STA ABS 8D 40 04 */
    c->pc = 0x89D1u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89D1u: /* SEC IMP 38 */
    c->pc = 0x89D2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x89D2u: /* LDA ABS AD 60 04 */
    c->pc = 0x89D5u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89D5u: /* SBC IMM E9 08 */
    c->pc = 0x89D7u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x89D7u: /* STA ZP 85 08 */
    c->pc = 0x89D9u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89D9u: /* LDA ABS AD 40 04 */
    c->pc = 0x89DCu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89DCu: /* SBC IMM E9 00 */
    c->pc = 0x89DEu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x89DEu: /* STA ZP 85 09 */
    c->pc = 0x89E0u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89E0u: /* JSR ABS 20 20 8A */
    push(c, 0x89u); push(c, 0xE2u); c->pc = 0x8A20u; c->cpu_cycles += 6u; return 1;
case 0x89E3u: /* LDA ZP A5 00 */
    c->pc = 0x89E5u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89E5u: /* BEQ REL F0 1A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x89E7u ^ 0x8A01u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A01u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89E7u; } return 1;
case 0x89E7u: /* LDA IMM A9 00 */
    c->pc = 0x89E9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89E9u: /* STA ABS 8D 80 04 */
    c->pc = 0x89ECu;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89ECu: /* LDA ZP A5 08 */
    c->pc = 0x89EEu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89EEu: /* AND IMM 29 0F */
    c->pc = 0x89F0u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89F0u: /* EOR IMM 49 0F */
    c->pc = 0x89F2u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89F2u: /* SEC IMP 38 */
    c->pc = 0x89F3u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x89F3u: /* ADC ABS 6D 60 04 */
    c->pc = 0x89F6u;
    ea = 0x0460u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x89F6u: /* STA ABS 8D 60 04 */
    c->pc = 0x89F9u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89F9u: /* LDA ABS AD 40 04 */
    c->pc = 0x89FCu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89FCu: /* ADC IMM 69 00 */
    c->pc = 0x89FEu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x89FEu: /* STA ABS 8D 40 04 */
    c->pc = 0x8A01u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A01u: /* SEC IMP 38 */
    c->pc = 0x8A02u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A02u: /* LDA ZP A5 2E */
    c->pc = 0x8A04u;
    ea = 0x2Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A04u: /* SBC ABS ED 60 04 */
    c->pc = 0x8A07u;
    ea = 0x0460u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8A07u: /* STA ZP 85 00 */
    c->pc = 0x8A09u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A09u: /* BPL REL 10 0E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8A0Bu ^ 0x8A19u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A19u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A0Bu; } return 1;
case 0x8A0Bu: /* EOR IMM 49 FF */
    c->pc = 0x8A0Du;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A0Du: /* CLC IMP 18 */
    c->pc = 0x8A0Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A0Eu: /* ADC IMM 69 01 */
    c->pc = 0x8A10u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8A10u: /* STA ZP 85 00 */
    c->pc = 0x8A12u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A12u: /* JSR ABS 20 F5 8D */
    push(c, 0x8Au); push(c, 0x14u); c->pc = 0x8DF5u; c->cpu_cycles += 6u; return 1;
case 0x8A15u: /* JSR ABS 20 84 8A */
    push(c, 0x8Au); push(c, 0x17u); c->pc = 0x8A84u; c->cpu_cycles += 6u; return 1;
case 0x8A18u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8A19u: /* JSR ABS 20 65 8E */
    push(c, 0x8Au); push(c, 0x1Bu); c->pc = 0x8E65u; c->cpu_cycles += 6u; return 1;
case 0x8A1Cu: /* JSR ABS 20 84 8A */
    push(c, 0x8Au); push(c, 0x1Eu); c->pc = 0x8A84u; c->cpu_cycles += 6u; return 1;
case 0x8A1Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8A20u: /* LDA IMM A9 02 */
    c->pc = 0x8A22u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A22u: /* STA ZP 85 01 */
    c->pc = 0x8A24u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A24u: /* LDX ZP A6 01 */
    c->pc = 0x8A26u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8A26u: /* CLC IMP 18 */
    c->pc = 0x8A27u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A27u: /* LDA ABS AD A0 04 */
    c->pc = 0x8A2Au;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A2Au: /* ADC ABX 7D 7E 8A */
    c->pc = 0x8A2Du;
    ea = (uint16_t)(0x8A7Eu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8A7Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8A2Du: /* STA ZP 85 0A */
    c->pc = 0x8A2Fu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A2Fu: /* LDA ZP A5 F9 */
    c->pc = 0x8A31u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A31u: /* ADC ABX 7D 81 8A */
    c->pc = 0x8A34u;
    ea = (uint16_t)(0x8A81u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8A81u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8A34u: /* STA ZP 85 0B */
    c->pc = 0x8A36u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A36u: /* JSR ABS 20 A2 CB */
    push(c, 0x8Au); push(c, 0x38u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0x8A39u: /* LDX ZP A6 01 */
    c->pc = 0x8A3Bu;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8A3Bu: /* LDA ZP A5 00 */
    c->pc = 0x8A3Du;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A3Du: /* STA ZPX 95 32 */
    c->pc = 0x8A3Fu;
    ea = (uint8_t)(0x32u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A3Fu: /* DEC ZP C6 01 */
    c->pc = 0x8A41u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8A41u: /* BPL REL 10 E1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8A43u ^ 0x8A24u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A24u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A43u; } return 1;
case 0x8A43u: /* LDA IMM A9 00 */
    c->pc = 0x8A45u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A45u: /* STA ZP 85 00 */
    c->pc = 0x8A47u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A47u: /* LDX IMM A2 02 */
    c->pc = 0x8A49u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8A49u: /* LDY ZPX B4 32 */
    c->pc = 0x8A4Bu;
    ea = (uint8_t)(0x32u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x8A4Bu: /* LDA ABY B9 75 8A */
    c->pc = 0x8A4Eu;
    ea = (uint16_t)(0x8A75u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A75u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8A4Eu: /* BPL REL 10 06 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8A50u ^ 0x8A56u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A56u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A50u; } return 1;
case 0x8A50u: /* LDY IMM A0 02 */
    c->pc = 0x8A52u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8A52u: /* STY ZP 84 37 */
    c->pc = 0x8A54u;
    ea = 0x37u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8A54u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8A56u ^ 0x8A65u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A65u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A56u; } return 1;
case 0x8A56u: /* CMP IMM C9 03 */
    c->pc = 0x8A58u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8A58u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8A5Au ^ 0x8A65u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A65u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A5Au; } return 1;
case 0x8A5Au: /* LDY ZP A4 4B */
    c->pc = 0x8A5Cu;
    ea = 0x4Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8A5Cu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8A5Eu ^ 0x8A65u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A65u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A5Eu; } return 1;
case 0x8A5Eu: /* LDA IMM A9 00 */
    c->pc = 0x8A60u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A60u: /* STA ZP 85 2C */
    c->pc = 0x8A62u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A62u: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0x8A65u: /* ORA ZP 05 00 */
    c->pc = 0x8A67u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A67u: /* STA ZP 85 00 */
    c->pc = 0x8A69u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A69u: /* DEX IMP CA */
    c->pc = 0x8A6Au;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8A6Au: /* BPL REL 10 DD */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8A6Cu ^ 0x8A49u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A49u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A6Cu; } return 1;
case 0x8A6Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8A84u: /* LDA ABS AD 60 04 */
    c->pc = 0x8A87u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A87u: /* STA ZP 85 08 */
    c->pc = 0x8A89u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A89u: /* LDA ABS AD 40 04 */
    c->pc = 0x8A8Cu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A8Cu: /* STA ZP 85 09 */
    c->pc = 0x8A8Eu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A8Eu: /* LDA IMM A9 02 */
    c->pc = 0x8A90u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A90u: /* STA ZP 85 01 */
    c->pc = 0x8A92u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A92u: /* LDX ZP A6 01 */
    c->pc = 0x8A94u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8A94u: /* CLC IMP 18 */
    c->pc = 0x8A95u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A95u: /* LDA ABS AD A0 04 */
    c->pc = 0x8A98u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A98u: /* ADC ABX 7D 7E 8A */
    c->pc = 0x8A9Bu;
    ea = (uint16_t)(0x8A7Eu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8A7Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8A9Bu: /* STA ZP 85 0A */
    c->pc = 0x8A9Du;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A9Du: /* LDA ZP A5 F9 */
    c->pc = 0x8A9Fu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A9Fu: /* ADC ABX 7D 81 8A */
    c->pc = 0x8AA2u;
    ea = (uint16_t)(0x8A81u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8A81u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8AA2u: /* STA ZP 85 0B */
    c->pc = 0x8AA4u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AA4u: /* JSR ABS 20 C3 CB */
    push(c, 0x8Au); push(c, 0xA6u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0x8AA7u: /* LDX ZP A6 01 */
    c->pc = 0x8AA9u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8AA9u: /* LDA ZP A5 00 */
    c->pc = 0x8AABu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AABu: /* STA ZPX 95 32 */
    c->pc = 0x8AADu;
    ea = (uint8_t)(0x32u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AADu: /* DEC ZP C6 01 */
    c->pc = 0x8AAFu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8AAFu: /* BPL REL 10 E1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8AB1u ^ 0x8A92u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A92u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AB1u; } return 1;
case 0x8AB1u: /* LDX IMM A2 00 */
    c->pc = 0x8AB3u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8AB3u: /* LDA ZP A5 B1 */
    c->pc = 0x8AB5u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AB5u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8AB7u ^ 0x8ABDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8ABDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AB7u; } return 1;
case 0x8AB7u: /* LDA ZP A5 B3 */
    c->pc = 0x8AB9u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AB9u: /* CMP IMM C9 03 */
    c->pc = 0x8ABBu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8ABBu: /* BEQ REL F0 2B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8ABDu ^ 0x8AE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8ABDu; } return 1;
case 0x8ABDu: /* LDA ZP A5 33 */
    c->pc = 0x8ABFu;
    ea = 0x33u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ABFu: /* CMP IMM C9 04 */
    c->pc = 0x8AC1u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8AC1u: /* BNE REL D0 4F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8AC3u ^ 0x8B12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B12u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AC3u; } return 1;
case 0x8AC3u: /* LDA ZP A5 FB */
    c->pc = 0x8AC5u;
    ea = 0xFBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AC5u: /* BNE REL D0 21 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8AC7u ^ 0x8AE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AC7u; } return 1;
case 0x8AC7u: /* LDA ABS AD 40 06 */
    c->pc = 0x8ACAu;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8ACAu: /* BPL REL 10 1C */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8ACCu ^ 0x8AE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8ACCu; } return 1;
case 0x8ACCu: /* LDA IMM A9 3B */
    c->pc = 0x8ACEu;
    v = 0x3Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8ACEu: /* JSR ABS 20 51 C0 */
    push(c, 0x8Au); push(c, 0xD0u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8AD1u: /* LDA ABS AD 2E 04 */
    c->pc = 0x8AD4u;
    ea = 0x042Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AD4u: /* BMI REL 30 12 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8AD6u ^ 0x8AE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AD6u; } return 1;
case 0x8AD6u: /* LDY IMM A0 0E */
    c->pc = 0x8AD8u;
    v = 0x0Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8AD8u: /* LDX IMM A2 0E */
    c->pc = 0x8ADAu;
    v = 0x0Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8ADAu: /* JSR ABS 20 E0 D3 */
    push(c, 0x8Au); push(c, 0xDCu); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0x8ADDu: /* SEC IMP 38 */
    c->pc = 0x8ADEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8ADEu: /* LDA ABS AD AE 04 */
    c->pc = 0x8AE1u;
    ea = 0x04AEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AE1u: /* SBC IMM E9 04 */
    c->pc = 0x8AE3u;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8AE3u: /* AND IMM 29 F0 */
    c->pc = 0x8AE5u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AE5u: /* STA ABS 8D AE 04 */
    c->pc = 0x8AE8u;
    ea = 0x04AEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AE8u: /* INC ZP E6 39 */
    c->pc = 0x8AEAu;
    ea = 0x39u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8AEAu: /* LDA ZP A5 39 */
    c->pc = 0x8AECu;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AECu: /* CMP IMM C9 60 */
    c->pc = 0x8AEEu;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8AEEu: /* BCC REL 90 1F */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8AF0u ^ 0x8B0Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B0Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AF0u; } return 1;
case 0x8AF0u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8AF2u ^ 0x8AFAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AFAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AF2u; } return 1;
case 0x8AF2u: /* CMP IMM C9 80 */
    c->pc = 0x8AF4u;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8AF4u: /* BCC REL 90 19 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8AF6u ^ 0x8B0Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B0Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AF6u; } return 1;
case 0x8AF6u: /* LDA IMM A9 00 */
    c->pc = 0x8AF8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AF8u: /* STA ZP 85 39 */
    c->pc = 0x8AFAu;
    ea = 0x39u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AFAu: /* LDA ZP A5 F9 */
    c->pc = 0x8AFCu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AFCu: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8AFEu ^ 0x8B0Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B0Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AFEu; } return 1;
case 0x8AFEu: /* STX ZP 86 2B */
    c->pc = 0x8B00u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8B00u: /* LDA IMM A9 0E */
    c->pc = 0x8B02u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B02u: /* JSR ABS 20 59 F1 */
    push(c, 0x8Bu); push(c, 0x04u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x8B05u: /* BCS REL B0 08 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8B07u ^ 0x8B0Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B0Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B07u; } return 1;
case 0x8B07u: /* LDA ABY B9 30 04 */
    c->pc = 0x8B0Au;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B0Au: /* AND IMM 29 F0 */
    c->pc = 0x8B0Cu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B0Cu: /* STA ABY 99 30 04 */
    c->pc = 0x8B0Fu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8B0Fu: /* LDX IMM A2 00 */
    c->pc = 0x8B11u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8B11u: /* INX IMP E8 */
    c->pc = 0x8B12u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8B12u: /* LDA ABX BD 6D 8A */
    c->pc = 0x8B15u;
    ea = (uint16_t)(0x8A6Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A6Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B15u: /* STA ZP 85 30 */
    c->pc = 0x8B17u;
    ea = 0x30u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B17u: /* LDA ABX BD 6F 8A */
    c->pc = 0x8B1Au;
    ea = (uint16_t)(0x8A6Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A6Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B1Au: /* STA ZP 85 FB */
    c->pc = 0x8B1Cu;
    ea = 0xFBu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B1Cu: /* LDA ABX BD 71 8A */
    c->pc = 0x8B1Fu;
    ea = (uint16_t)(0x8A71u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A71u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B1Fu: /* STA ZP 85 3C */
    c->pc = 0x8B21u;
    ea = 0x3Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B21u: /* LDA ABX BD 73 8A */
    c->pc = 0x8B24u;
    ea = (uint16_t)(0x8A73u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A73u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B24u: /* STA ZP 85 3B */
    c->pc = 0x8B26u;
    ea = 0x3Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B26u: /* LDA IMM A9 00 */
    c->pc = 0x8B28u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B28u: /* STA ZP 85 35 */
    c->pc = 0x8B2Au;
    ea = 0x35u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B2Au: /* LDA IMM A9 02 */
    c->pc = 0x8B2Cu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B2Cu: /* STA ZP 85 01 */
    c->pc = 0x8B2Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B2Eu: /* LDX IMM A2 02 */
    c->pc = 0x8B30u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8B30u: /* LDA ZPX B5 32 */
    c->pc = 0x8B32u;
    ea = (uint8_t)(0x32u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B32u: /* CMP IMM C9 02 */
    c->pc = 0x8B34u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B34u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8B36u ^ 0x8B3Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B3Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B36u; } return 1;
case 0x8B36u: /* LDA ZP A5 01 */
    c->pc = 0x8B38u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B38u: /* ORA ZP 05 35 */
    c->pc = 0x8B3Au;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B3Au: /* STA ZP 85 35 */
    c->pc = 0x8B3Cu;
    ea = 0x35u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B3Cu: /* ASL ZP 06 01 */
    c->pc = 0x8B3Eu;
    ea = 0x01u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8B3Eu: /* DEX IMP CA */
    c->pc = 0x8B3Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8B3Fu: /* BPL REL 10 EF */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8B41u ^ 0x8B30u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B30u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B41u; } return 1;
case 0x8B41u: /* SEC IMP 38 */
    c->pc = 0x8B42u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8B42u: /* LDA ABS AD C0 04 */
    c->pc = 0x8B45u;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B45u: /* SBC ABS ED 60 06 */
    c->pc = 0x8B48u;
    ea = 0x0660u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8B48u: /* LDA ABS AD A0 04 */
    c->pc = 0x8B4Bu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B4Bu: /* SBC ABS ED 40 06 */
    c->pc = 0x8B4Eu;
    ea = 0x0640u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8B4Eu: /* LDX ABS AE 40 06 */
    c->pc = 0x8B51u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x8B51u: /* BMI REL 30 0C */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8B53u ^ 0x8B5Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B5Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B53u; } return 1;
case 0x8B53u: /* SEC IMP 38 */
    c->pc = 0x8B54u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8B54u: /* SBC IMM E9 0C */
    c->pc = 0x8B56u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B56u: /* STA ZP 85 0A */
    c->pc = 0x8B58u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B58u: /* LDA ZP A5 F9 */
    c->pc = 0x8B5Au;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B5Au: /* SBC IMM E9 00 */
    c->pc = 0x8B5Cu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B5Cu: /* JMP ABS 4C 68 8B */
    c->pc = 0x8B68u; c->cpu_cycles += 3u; return 1;
case 0x8B5Fu: /* CLC IMP 18 */
    c->pc = 0x8B60u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8B60u: /* ADC IMM 69 0C */
    c->pc = 0x8B62u;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B62u: /* STA ZP 85 0A */
    c->pc = 0x8B64u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B64u: /* LDA ZP A5 F9 */
    c->pc = 0x8B66u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B66u: /* ADC IMM 69 00 */
    c->pc = 0x8B68u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B68u: /* STA ZP 85 0B */
    c->pc = 0x8B6Au;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B6Au: /* JSR ABS 20 C3 CB */
    push(c, 0x8Bu); push(c, 0x6Cu); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0x8B6Du: /* LDA ZP A5 00 */
    c->pc = 0x8B6Fu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B6Fu: /* CMP IMM C9 02 */
    c->pc = 0x8B71u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B71u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8B73u ^ 0x8B82u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B82u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B73u; } return 1;
case 0x8B73u: /* LDA ABS AD 40 06 */
    c->pc = 0x8B76u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B76u: /* BMI REL 30 04 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8B78u ^ 0x8B7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B78u; } return 1;
case 0x8B78u: /* LDA IMM A9 10 */
    c->pc = 0x8B7Au;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B7Au: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8B7Cu ^ 0x8B7Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B7Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B7Cu; } return 1;
case 0x8B7Cu: /* LDA IMM A9 01 */
    c->pc = 0x8B7Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B7Eu: /* ORA ZP 05 35 */
    c->pc = 0x8B80u;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B80u: /* STA ZP 85 35 */
    c->pc = 0x8B82u;
    ea = 0x35u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B82u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8B83u: /* LDA ABS AD A0 04 */
    c->pc = 0x8B86u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B86u: /* STA ZP 85 2E */
    c->pc = 0x8B88u;
    ea = 0x2Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B88u: /* LDA ABS AD C0 04 */
    c->pc = 0x8B8Bu;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B8Bu: /* STA ZP 85 2F */
    c->pc = 0x8B8Du;
    ea = 0x2Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B8Du: /* LDA IMM A9 00 */
    c->pc = 0x8B8Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B8Fu: /* STA ZP 85 00 */
    c->pc = 0x8B91u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B91u: /* LDA ABS AD 40 06 */
    c->pc = 0x8B94u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B94u: /* BPL REL 10 02 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8B96u ^ 0x8B98u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B98u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B96u; } return 1;
case 0x8B96u: /* DEC ZP C6 00 */
    c->pc = 0x8B98u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8B98u: /* SEC IMP 38 */
    c->pc = 0x8B99u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8B99u: /* LDA ABS AD C0 04 */
    c->pc = 0x8B9Cu;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B9Cu: /* SBC ABS ED 60 06 */
    c->pc = 0x8B9Fu;
    ea = 0x0660u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8B9Fu: /* STA ABS 8D C0 04 */
    c->pc = 0x8BA2u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BA2u: /* LDA ABS AD A0 04 */
    c->pc = 0x8BA5u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BA5u: /* SBC ABS ED 40 06 */
    c->pc = 0x8BA8u;
    ea = 0x0640u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8BA8u: /* STA ABS 8D A0 04 */
    c->pc = 0x8BABu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BABu: /* TAX IMP AA */
    c->pc = 0x8BACu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8BACu: /* LDA ZP A5 F9 */
    c->pc = 0x8BAEu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BAEu: /* SBC ZP E5 00 */
    c->pc = 0x8BB0u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8BB0u: /* STA ZP 85 F9 */
    c->pc = 0x8BB2u;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BB2u: /* CPX IMM E0 04 */
    c->pc = 0x8BB4u;
    v = 0x04u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BB4u: /* BCS REL B0 10 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8BB6u ^ 0x8BC6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BC6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BB6u; } return 1;
case 0x8BB6u: /* LDA ZP A5 2C */
    c->pc = 0x8BB8u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BB8u: /* CMP IMM C9 09 */
    c->pc = 0x8BBAu;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BBAu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8BBCu ^ 0x8BC0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BC0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BBCu; } return 1;
case 0x8BBCu: /* CMP IMM C9 0A */
    c->pc = 0x8BBEu;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BBEu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8BC0u ^ 0x8BD2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BD2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BC0u; } return 1;
case 0x8BC0u: /* LDA IMM A9 01 */
    c->pc = 0x8BC2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BC2u: /* STA ZP 85 37 */
    c->pc = 0x8BC4u;
    ea = 0x37u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BC4u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8BC6u ^ 0x8BD2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BD2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BC6u; } return 1;
case 0x8BC6u: /* CPX IMM E0 E8 */
    c->pc = 0x8BC8u;
    v = 0xE8u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BC8u: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8BCAu ^ 0x8BD2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BD2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BCAu; } return 1;
case 0x8BCAu: /* LDA ZP A5 F9 */
    c->pc = 0x8BCCu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BCCu: /* BMI REL 30 04 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8BCEu ^ 0x8BD2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BD2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BCEu; } return 1;
case 0x8BCEu: /* LDA IMM A9 03 */
    c->pc = 0x8BD0u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BD0u: /* STA ZP 85 37 */
    c->pc = 0x8BD2u;
    ea = 0x37u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BD2u: /* LDA ABS AD 40 06 */
    c->pc = 0x8BD5u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BD5u: /* BMI REL 30 51 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8BD7u ^ 0x8C28u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C28u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BD7u; } return 1;
case 0x8BD7u: /* SEC IMP 38 */
    c->pc = 0x8BD8u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8BD8u: /* LDA ABS AD A0 04 */
    c->pc = 0x8BDBu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BDBu: /* SBC IMM E9 0C */
    c->pc = 0x8BDDu;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BDDu: /* STA ZP 85 0A */
    c->pc = 0x8BDFu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BDFu: /* LDA ZP A5 F9 */
    c->pc = 0x8BE1u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BE1u: /* SBC IMM E9 00 */
    c->pc = 0x8BE3u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BE3u: /* STA ZP 85 0B */
    c->pc = 0x8BE5u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BE5u: /* JSR ABS 20 6A 8C */
    push(c, 0x8Bu); push(c, 0xE7u); c->pc = 0x8C6Au; c->cpu_cycles += 6u; return 1;
case 0x8BE8u: /* LDA ZP A5 00 */
    c->pc = 0x8BEAu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BEAu: /* BEQ REL F0 1A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8BECu ^ 0x8C06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C06u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BECu; } return 1;
case 0x8BECu: /* LDA IMM A9 00 */
    c->pc = 0x8BEEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BEEu: /* STA ABS 8D C0 04 */
    c->pc = 0x8BF1u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BF1u: /* LDA ZP A5 0A */
    c->pc = 0x8BF3u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BF3u: /* AND IMM 29 0F */
    c->pc = 0x8BF5u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BF5u: /* EOR IMM 49 0F */
    c->pc = 0x8BF7u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BF7u: /* SEC IMP 38 */
    c->pc = 0x8BF8u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8BF8u: /* ADC ABS 6D A0 04 */
    c->pc = 0x8BFBu;
    ea = 0x04A0u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8BFBu: /* STA ABS 8D A0 04 */
    c->pc = 0x8BFEu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BFEu: /* LDA IMM A9 00 */
    c->pc = 0x8C00u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C00u: /* STA ABS 8D 60 06 */
    c->pc = 0x8C03u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C03u: /* STA ABS 8D 40 06 */
    c->pc = 0x8C06u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C06u: /* SEC IMP 38 */
    c->pc = 0x8C07u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8C07u: /* LDA ABS AD 60 06 */
    c->pc = 0x8C0Au;
    ea = 0x0660u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C0Au: /* SBC ZP E5 30 */
    c->pc = 0x8C0Cu;
    ea = 0x30u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8C0Cu: /* STA ABS 8D 60 06 */
    c->pc = 0x8C0Fu;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C0Fu: /* LDA ABS AD 40 06 */
    c->pc = 0x8C12u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C12u: /* SBC ZP E5 31 */
    c->pc = 0x8C14u;
    ea = 0x31u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8C14u: /* STA ABS 8D 40 06 */
    c->pc = 0x8C17u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C17u: /* BPL REL 10 0E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8C19u ^ 0x8C27u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C27u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C19u; } return 1;
case 0x8C19u: /* CMP IMM C9 F4 */
    c->pc = 0x8C1Bu;
    v = 0xF4u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C1Bu: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8C1Du ^ 0x8C27u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C27u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C1Du; } return 1;
case 0x8C1Du: /* LDA IMM A9 00 */
    c->pc = 0x8C1Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C1Fu: /* STA ABS 8D 60 06 */
    c->pc = 0x8C22u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C22u: /* LDA IMM A9 F4 */
    c->pc = 0x8C24u;
    v = 0xF4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C24u: /* STA ABS 8D 40 06 */
    c->pc = 0x8C27u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C27u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8C28u: /* CLC IMP 18 */
    c->pc = 0x8C29u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8C29u: /* LDA ABS AD A0 04 */
    c->pc = 0x8C2Cu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C2Cu: /* ADC IMM 69 0C */
    c->pc = 0x8C2Eu;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C2Eu: /* STA ZP 85 0A */
    c->pc = 0x8C30u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C30u: /* LDA ZP A5 F9 */
    c->pc = 0x8C32u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C32u: /* ADC IMM 69 00 */
    c->pc = 0x8C34u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C34u: /* STA ZP 85 0B */
    c->pc = 0x8C36u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C36u: /* JSR ABS 20 6A 8C */
    push(c, 0x8Cu); push(c, 0x38u); c->pc = 0x8C6Au; c->cpu_cycles += 6u; return 1;
case 0x8C39u: /* JSR ABS 20 F4 8C */
    push(c, 0x8Cu); push(c, 0x3Bu); c->pc = 0x8CF4u; c->cpu_cycles += 6u; return 1;
case 0x8C3Cu: /* LDA ZP A5 00 */
    c->pc = 0x8C3Eu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C3Eu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8C40u ^ 0x8C44u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C44u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C40u; } return 1;
case 0x8C40u: /* BCS REL B0 23 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8C42u ^ 0x8C65u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C65u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C42u; } return 1;
case 0x8C42u: /* BCC REL 90 C2 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8C44u ^ 0x8C06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C06u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C44u; } return 1;
case 0x8C44u: /* LDA IMM A9 00 */
    c->pc = 0x8C46u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C46u: /* STA ABS 8D C0 04 */
    c->pc = 0x8C49u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C49u: /* LDA ABS AD A0 04 */
    c->pc = 0x8C4Cu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C4Cu: /* PHA IMP 48 */
    c->pc = 0x8C4Du;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C4Du: /* LDA ZP A5 0A */
    c->pc = 0x8C4Fu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C4Fu: /* AND IMM 29 0F */
    c->pc = 0x8C51u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C51u: /* STA ABS 8D A0 04 */
    c->pc = 0x8C54u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C54u: /* PLA IMP 68 */
    c->pc = 0x8C55u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C55u: /* SEC IMP 38 */
    c->pc = 0x8C56u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8C56u: /* SBC ABS ED A0 04 */
    c->pc = 0x8C59u;
    ea = 0x04A0u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8C59u: /* STA ABS 8D A0 04 */
    c->pc = 0x8C5Cu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C5Cu: /* LDA ZP A5 F9 */
    c->pc = 0x8C5Eu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C5Eu: /* SBC IMM E9 00 */
    c->pc = 0x8C60u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C60u: /* STA ZP 85 F9 */
    c->pc = 0x8C62u;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C62u: /* JMP ABS 4C FE 8B */
    c->pc = 0x8BFEu; c->cpu_cycles += 3u; return 1;
case 0x8C65u: /* LDA IMM A9 01 */
    c->pc = 0x8C67u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C67u: /* STA ZP 85 00 */
    c->pc = 0x8C69u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C69u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8C6Au: /* LDA IMM A9 01 */
    c->pc = 0x8C6Cu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C6Cu: /* STA ZP 85 01 */
    c->pc = 0x8C6Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C6Eu: /* LDX ZP A6 01 */
    c->pc = 0x8C70u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8C70u: /* CLC IMP 18 */
    c->pc = 0x8C71u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8C71u: /* LDA ABS AD 60 04 */
    c->pc = 0x8C74u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C74u: /* ADC ABX 7D ED 8C */
    c->pc = 0x8C77u;
    ea = (uint16_t)(0x8CEDu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8CEDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8C77u: /* STA ZP 85 08 */
    c->pc = 0x8C79u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C79u: /* LDA ABS AD 40 04 */
    c->pc = 0x8C7Cu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C7Cu: /* ADC ABX 7D EF 8C */
    c->pc = 0x8C7Fu;
    ea = (uint16_t)(0x8CEFu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8CEFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8C7Fu: /* STA ZP 85 09 */
    c->pc = 0x8C81u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C81u: /* JSR ABS 20 A2 CB */
    push(c, 0x8Cu); push(c, 0x83u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0x8C84u: /* LDX ZP A6 01 */
    c->pc = 0x8C86u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8C86u: /* LDA ZP A5 00 */
    c->pc = 0x8C88u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C88u: /* STA ZPX 95 32 */
    c->pc = 0x8C8Au;
    ea = (uint8_t)(0x32u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C8Au: /* DEC ZP C6 01 */
    c->pc = 0x8C8Cu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8C8Cu: /* BPL REL 10 E0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8C8Eu ^ 0x8C6Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C6Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C8Eu; } return 1;
case 0x8C8Eu: /* LDA IMM A9 00 */
    c->pc = 0x8C90u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C90u: /* STA ZP 85 40 */
    c->pc = 0x8C92u;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C92u: /* LDX IMM A2 01 */
    c->pc = 0x8C94u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C94u: /* LDA ZPX B5 32 */
    c->pc = 0x8C96u;
    ea = (uint8_t)(0x32u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C96u: /* CMP IMM C9 08 */
    c->pc = 0x8C98u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C98u: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8C9Au ^ 0x8CBAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CBAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C9Au; } return 1;
case 0x8C9Au: /* CMP IMM C9 05 */
    c->pc = 0x8C9Cu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C9Cu: /* BCC REL 90 1C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8C9Eu ^ 0x8CBAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CBAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C9Eu; } return 1;
case 0x8C9Eu: /* SBC IMM E9 05 */
    c->pc = 0x8CA0u;
    v = 0x05u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8CA0u: /* TAY IMP A8 */
    c->pc = 0x8CA1u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8CA1u: /* LDA ABY B9 F1 8C */
    c->pc = 0x8CA4u;
    ea = (uint16_t)(0x8CF1u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8CF1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8CA4u: /* STA ZP 85 40 */
    c->pc = 0x8CA6u;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CA6u: /* BMI REL 30 0E */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8CA8u ^ 0x8CB6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CB6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CA8u; } return 1;
case 0x8CA8u: /* TAY IMP A8 */
    c->pc = 0x8CA9u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8CA9u: /* LDA ABY B9 44 00 */
    c->pc = 0x8CACu;
    ea = (uint16_t)(0x0044u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0044u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8CACu: /* STA ZP 85 AF */
    c->pc = 0x8CAEu;
    ea = 0xAFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CAEu: /* LDA IMM A9 01 */
    c->pc = 0x8CB0u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CB0u: /* STA ZP 85 50 */
    c->pc = 0x8CB2u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CB2u: /* LDA IMM A9 00 */
    c->pc = 0x8CB4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CB4u: /* STA ZP 85 4F */
    c->pc = 0x8CB6u;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CB6u: /* LDA IMM A9 01 */
    c->pc = 0x8CB8u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CB8u: /* BNE REL D0 18 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8CBAu ^ 0x8CD2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CD2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CBAu; } return 1;
case 0x8CBAu: /* CMP IMM C9 03 */
    c->pc = 0x8CBCu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8CBCu: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8CBEu ^ 0x8CC9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CC9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CBEu; } return 1;
case 0x8CBEu: /* LDY ZP A4 4B */
    c->pc = 0x8CC0u;
    ea = 0x4Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8CC0u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8CC2u ^ 0x8CC9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CC9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CC2u; } return 1;
case 0x8CC2u: /* LDA IMM A9 00 */
    c->pc = 0x8CC4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CC4u: /* STA ZP 85 2C */
    c->pc = 0x8CC6u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CC6u: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0x8CC9u: /* DEX IMP CA */
    c->pc = 0x8CCAu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8CCAu: /* BPL REL 10 C8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8CCCu ^ 0x8C94u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C94u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CCCu; } return 1;
case 0x8CCCu: /* LDA ZP A5 32 */
    c->pc = 0x8CCEu;
    ea = 0x32u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CCEu: /* ORA ZP 05 33 */
    c->pc = 0x8CD0u;
    ea = 0x33u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CD0u: /* AND IMM 29 01 */
    c->pc = 0x8CD2u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CD2u: /* STA ZP 85 00 */
    c->pc = 0x8CD4u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CD4u: /* LDA ZP A5 35 */
    c->pc = 0x8CD6u;
    ea = 0x35u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CD6u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8CD8u ^ 0x8CECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CECu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CD8u; } return 1;
case 0x8CD8u: /* CMP IMM C9 01 */
    c->pc = 0x8CDAu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8CDAu: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8CDCu ^ 0x8CEAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CEAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CDCu; } return 1;
case 0x8CDCu: /* LDX ZP A6 F9 */
    c->pc = 0x8CDEu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8CDEu: /* BPL REL 10 0C */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8CE0u ^ 0x8CECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CECu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CE0u; } return 1;
case 0x8CE0u: /* LDA ZP A5 23 */
    c->pc = 0x8CE2u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CE2u: /* AND IMM 29 30 */
    c->pc = 0x8CE4u;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CE4u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8CE6u ^ 0x8CECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CECu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CE6u; } return 1;
case 0x8CE6u: /* LDX IMM A2 01 */
    c->pc = 0x8CE8u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8CE8u: /* STX ZP 86 37 */
    c->pc = 0x8CEAu;
    ea = 0x37u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8CEAu: /* STA ZP 85 00 */
    c->pc = 0x8CECu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CECu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8CF4u: /* SEC IMP 38 */
    c->pc = 0x8CF5u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8CF5u: /* LDA ABS AD 60 04 */
    c->pc = 0x8CF8u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CF8u: /* SBC ZP E5 1F */
    c->pc = 0x8CFAu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8CFAu: /* STA ZP 85 08 */
    c->pc = 0x8CFCu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CFCu: /* CLC IMP 18 */
    c->pc = 0x8CFDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8CFDu: /* LDA ZP A5 2E */
    c->pc = 0x8CFFu;
    ea = 0x2Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CFFu: /* ADC IMM 69 0C */
    c->pc = 0x8D01u;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D01u: /* STA ZP 85 09 */
    c->pc = 0x8D03u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D03u: /* LDA ZP A5 A9 */
    c->pc = 0x8D05u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D05u: /* CMP IMM C9 09 */
    c->pc = 0x8D07u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D07u: /* BCC REL 90 0A */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8D09u ^ 0x8D13u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D13u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D09u; } return 1;
case 0x8D09u: /* LDX IMM A2 02 */
    c->pc = 0x8D0Bu;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8D0Bu: /* LDA ABX BD A0 05 */
    c->pc = 0x8D0Eu;
    ea = (uint16_t)(0x05A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x05A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D0Eu: /* BNE REL D0 76 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D10u ^ 0x8D86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D86u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D10u; } return 1;
case 0x8D10u: /* DEX IMP CA */
    c->pc = 0x8D11u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8D11u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8D13u ^ 0x8D0Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D0Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D13u; } return 1;
case 0x8D13u: /* LDX IMM A2 0F */
    c->pc = 0x8D15u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8D15u: /* LDA ABX BD 60 01 */
    c->pc = 0x8D18u;
    ea = (uint16_t)(0x0160u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0160u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D18u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D1Au ^ 0x8D1Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D1Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D1Au; } return 1;
case 0x8D1Au: /* DEX IMP CA */
    c->pc = 0x8D1Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8D1Bu: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8D1Du ^ 0x8D15u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D15u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D1Du; } return 1;
case 0x8D1Du: /* CLC IMP 18 */
    c->pc = 0x8D1Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D1Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8D1Fu: /* LDA ZP A5 F9 */
    c->pc = 0x8D21u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D21u: /* BNE REL D0 F7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D23u ^ 0x8D1Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D1Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D23u; } return 1;
case 0x8D23u: /* SEC IMP 38 */
    c->pc = 0x8D24u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D24u: /* LDA ABX BD 70 04 */
    c->pc = 0x8D27u;
    ea = (uint16_t)(0x0470u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D27u: /* SBC ZP E5 1F */
    c->pc = 0x8D29u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8D29u: /* STA ZP 85 0C */
    c->pc = 0x8D2Bu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D2Bu: /* SEC IMP 38 */
    c->pc = 0x8D2Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D2Cu: /* SBC ZP E5 08 */
    c->pc = 0x8D2Eu;
    ea = 0x08u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8D2Eu: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8D30u ^ 0x8D34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D34u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D30u; } return 1;
case 0x8D30u: /* EOR IMM 49 FF */
    c->pc = 0x8D32u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D32u: /* ADC IMM 69 01 */
    c->pc = 0x8D34u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D34u: /* CMP ABX DD 60 01 */
    c->pc = 0x8D37u;
    ea = (uint16_t)(0x0160u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0160u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D37u: /* BCS REL B0 E1 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8D39u ^ 0x8D1Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D1Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D39u; } return 1;
case 0x8D39u: /* LDA ABX BD B0 04 */
    c->pc = 0x8D3Cu;
    ea = (uint16_t)(0x04B0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D3Cu: /* CMP ZP C5 09 */
    c->pc = 0x8D3Eu;
    ea = 0x09u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8D3Eu: /* BCC REL 90 DA */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8D40u ^ 0x8D1Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D1Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D40u; } return 1;
case 0x8D40u: /* LDA ABX BD 70 01 */
    c->pc = 0x8D43u;
    ea = (uint16_t)(0x0170u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0170u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D43u: /* CMP ZP C5 0A */
    c->pc = 0x8D45u;
    ea = 0x0Au;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8D45u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8D47u ^ 0x8D49u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D49u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D47u; } return 1;
case 0x8D47u: /* BCS REL B0 D1 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8D49u ^ 0x8D1Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D1Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D49u; } return 1;
case 0x8D49u: /* LDA ABX BD 10 04 */
    c->pc = 0x8D4Cu;
    ea = (uint16_t)(0x0410u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0410u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D4Cu: /* CMP IMM C9 13 */
    c->pc = 0x8D4Eu;
    v = 0x13u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D4Eu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D50u ^ 0x8D53u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D53u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D50u; } return 1;
case 0x8D50u: /* INC ABX FE F0 04 */
    c->pc = 0x8D53u;
    ea = (uint16_t)(0x04F0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x8D53u: /* SEC IMP 38 */
    c->pc = 0x8D54u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D54u: /* LDA ABX BD 70 01 */
    c->pc = 0x8D57u;
    ea = (uint16_t)(0x0170u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0170u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D57u: /* SBC IMM E9 0C */
    c->pc = 0x8D59u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D59u: /* STA ABS 8D A0 04 */
    c->pc = 0x8D5Cu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D5Cu: /* LDA ZP A5 F9 */
    c->pc = 0x8D5Eu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D5Eu: /* SBC IMM E9 00 */
    c->pc = 0x8D60u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D60u: /* STA ZP 85 F9 */
    c->pc = 0x8D62u;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D62u: /* LDA IMM A9 00 */
    c->pc = 0x8D64u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D64u: /* STA ABS 8D C0 04 */
    c->pc = 0x8D67u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D67u: /* STA ABS 8D 60 06 */
    c->pc = 0x8D6Au;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D6Au: /* LDA IMM A9 FF */
    c->pc = 0x8D6Cu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D6Cu: /* STA ABS 8D 40 06 */
    c->pc = 0x8D6Fu;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D6Fu: /* LDA IMM A9 01 */
    c->pc = 0x8D71u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D71u: /* STA ZP 85 40 */
    c->pc = 0x8D73u;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D73u: /* LDA ABX BD 30 04 */
    c->pc = 0x8D76u;
    ea = (uint16_t)(0x0430u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D76u: /* AND IMM 29 40 */
    c->pc = 0x8D78u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D78u: /* STA ZP 85 AF */
    c->pc = 0x8D7Au;
    ea = 0xAFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D7Au: /* LDA ABX BD 30 06 */
    c->pc = 0x8D7Du;
    ea = (uint16_t)(0x0630u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0630u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D7Du: /* STA ZP 85 4F */
    c->pc = 0x8D7Fu;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D7Fu: /* LDA ABX BD 10 06 */
    c->pc = 0x8D82u;
    ea = (uint16_t)(0x0610u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0610u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D82u: /* STA ZP 85 50 */
    c->pc = 0x8D84u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D84u: /* SEC IMP 38 */
    c->pc = 0x8D85u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D85u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8D86u: /* LDA ZP A5 F9 */
    c->pc = 0x8D88u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D88u: /* BNE REL D0 68 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D8Au ^ 0x8DF2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DF2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D8Au; } return 1;
case 0x8D8Au: /* SEC IMP 38 */
    c->pc = 0x8D8Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D8Bu: /* LDA ABX BD 62 04 */
    c->pc = 0x8D8Eu;
    ea = (uint16_t)(0x0462u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0462u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D8Eu: /* SBC ZP E5 1F */
    c->pc = 0x8D90u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8D90u: /* STA ZP 85 0C */
    c->pc = 0x8D92u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D92u: /* SEC IMP 38 */
    c->pc = 0x8D93u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D93u: /* SBC ZP E5 08 */
    c->pc = 0x8D95u;
    ea = 0x08u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8D95u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8D97u ^ 0x8D9Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D9Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D97u; } return 1;
case 0x8D97u: /* EOR IMM 49 FF */
    c->pc = 0x8D99u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D99u: /* ADC IMM 69 01 */
    c->pc = 0x8D9Bu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D9Bu: /* CMP ABX DD A0 05 */
    c->pc = 0x8D9Eu;
    ea = (uint16_t)(0x05A0u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x05A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8D9Eu: /* BCS REL B0 52 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8DA0u ^ 0x8DF2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DF2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DA0u; } return 1;
case 0x8DA0u: /* LDA ABX BD A2 04 */
    c->pc = 0x8DA3u;
    ea = (uint16_t)(0x04A2u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DA3u: /* CMP ZP C5 09 */
    c->pc = 0x8DA5u;
    ea = 0x09u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8DA5u: /* BCC REL 90 4B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8DA7u ^ 0x8DF2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DF2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DA7u; } return 1;
case 0x8DA7u: /* LDA ABX BD A3 05 */
    c->pc = 0x8DAAu;
    ea = (uint16_t)(0x05A3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x05A3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DAAu: /* CMP ZP C5 0A */
    c->pc = 0x8DACu;
    ea = 0x0Au;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8DACu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8DAEu ^ 0x8DB0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DB0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DAEu; } return 1;
case 0x8DAEu: /* BCS REL B0 42 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8DB0u ^ 0x8DF2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DF2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DB0u; } return 1;
case 0x8DB0u: /* LDA ABX BD 02 04 */
    c->pc = 0x8DB3u;
    ea = (uint16_t)(0x0402u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0402u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DB3u: /* CMP IMM C9 3A */
    c->pc = 0x8DB5u;
    v = 0x3Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8DB5u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8DB7u ^ 0x8DBFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DBFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DB7u; } return 1;
case 0x8DB7u: /* LDA ABX BD E2 04 */
    c->pc = 0x8DBAu;
    ea = (uint16_t)(0x04E2u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DBAu: /* ORA IMM 09 80 */
    c->pc = 0x8DBCu;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DBCu: /* STA ABX 9D E2 04 */
    c->pc = 0x8DBFu;
    ea = (uint16_t)(0x04E2u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8DBFu: /* SEC IMP 38 */
    c->pc = 0x8DC0u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8DC0u: /* LDA ABX BD A3 05 */
    c->pc = 0x8DC3u;
    ea = (uint16_t)(0x05A3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x05A3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DC3u: /* SBC IMM E9 0C */
    c->pc = 0x8DC5u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8DC5u: /* STA ABS 8D A0 04 */
    c->pc = 0x8DC8u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DC8u: /* LDA ZP A5 F9 */
    c->pc = 0x8DCAu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DCAu: /* SBC IMM E9 00 */
    c->pc = 0x8DCCu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8DCCu: /* STA ZP 85 F9 */
    c->pc = 0x8DCEu;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DCEu: /* LDA IMM A9 00 */
    c->pc = 0x8DD0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DD0u: /* STA ABS 8D C0 04 */
    c->pc = 0x8DD3u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DD3u: /* STA ABS 8D 60 06 */
    c->pc = 0x8DD6u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DD6u: /* LDA IMM A9 FF */
    c->pc = 0x8DD8u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DD8u: /* STA ABS 8D 40 06 */
    c->pc = 0x8DDBu;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DDBu: /* LDA IMM A9 01 */
    c->pc = 0x8DDDu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DDDu: /* STA ZP 85 40 */
    c->pc = 0x8DDFu;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DDFu: /* LDA ABX BD 22 04 */
    c->pc = 0x8DE2u;
    ea = (uint16_t)(0x0422u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0422u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DE2u: /* AND IMM 29 40 */
    c->pc = 0x8DE4u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DE4u: /* STA ZP 85 AF */
    c->pc = 0x8DE6u;
    ea = 0xAFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DE6u: /* LDA ABX BD 22 06 */
    c->pc = 0x8DE9u;
    ea = (uint16_t)(0x0622u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0622u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DE9u: /* STA ZP 85 4F */
    c->pc = 0x8DEBu;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DEBu: /* LDA ABX BD 02 06 */
    c->pc = 0x8DEEu;
    ea = (uint16_t)(0x0602u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0602u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8DEEu: /* STA ZP 85 50 */
    c->pc = 0x8DF0u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DF0u: /* SEC IMP 38 */
    c->pc = 0x8DF1u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8DF1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8DF2u: /* JMP ABS 4C 10 8D */
    c->pc = 0x8D10u; c->cpu_cycles += 3u; return 1;
case 0x8DF5u: /* SEC IMP 38 */
    c->pc = 0x8DF6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8DF6u: /* LDA ABS AD 60 04 */
    c->pc = 0x8DF9u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DF9u: /* SBC ZP E5 1F */
    c->pc = 0x8DFBu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8DFBu: /* CMP IMM C9 80 */
    c->pc = 0x8DFDu;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8DFDu: /* BCS REL B0 01 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8DFFu ^ 0x8E00u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E00u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DFFu; } return 1;
case 0x8DFFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E00u: /* CLC IMP 18 */
    c->pc = 0x8E01u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E01u: /* LDA ZP A5 1F */
    c->pc = 0x8E03u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E03u: /* PHA IMP 48 */
    c->pc = 0x8E04u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E04u: /* ADC ZP 65 00 */
    c->pc = 0x8E06u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E06u: /* STA ZP 85 1F */
    c->pc = 0x8E08u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E08u: /* LDA ZP A5 20 */
    c->pc = 0x8E0Au;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E0Au: /* ADC IMM 69 00 */
    c->pc = 0x8E0Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E0Cu: /* STA ZP 85 20 */
    c->pc = 0x8E0Eu;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E0Eu: /* CMP ZP C5 15 */
    c->pc = 0x8E10u;
    ea = 0x15u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E10u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E12u ^ 0x8E1Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E1Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E12u; } return 1;
case 0x8E12u: /* SEC IMP 38 */
    c->pc = 0x8E13u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E13u: /* LDA ZP A5 00 */
    c->pc = 0x8E15u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E15u: /* SBC ZP E5 1F */
    c->pc = 0x8E17u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E17u: /* STA ZP 85 00 */
    c->pc = 0x8E19u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E19u: /* LDA IMM A9 00 */
    c->pc = 0x8E1Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E1Bu: /* STA ZP 85 1F */
    c->pc = 0x8E1Du;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E1Du: /* STA ZP 85 1E */
    c->pc = 0x8E1Fu;
    ea = 0x1Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E1Fu: /* PLA IMP 68 */
    c->pc = 0x8E20u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E20u: /* AND IMM 29 03 */
    c->pc = 0x8E22u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E22u: /* ADC ZP 65 00 */
    c->pc = 0x8E24u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E24u: /* LSR IMP 4A */
    c->pc = 0x8E25u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E25u: /* LSR IMP 4A */
    c->pc = 0x8E26u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E26u: /* STA ZP 85 01 */
    c->pc = 0x8E28u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E28u: /* BEQ REL F0 3A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8E2Au ^ 0x8E64u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E64u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E2Au; } return 1;
case 0x8E2Au: /* CLC IMP 18 */
    c->pc = 0x8E2Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E2Bu: /* LDA ZP A5 18 */
    c->pc = 0x8E2Du;
    ea = 0x18u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E2Du: /* STA ZP 85 08 */
    c->pc = 0x8E2Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E2Fu: /* ADC ZP 65 01 */
    c->pc = 0x8E31u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E31u: /* STA ZP 85 18 */
    c->pc = 0x8E33u;
    ea = 0x18u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E33u: /* LDA ZP A5 19 */
    c->pc = 0x8E35u;
    ea = 0x19u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E35u: /* STA ZP 85 09 */
    c->pc = 0x8E37u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E37u: /* ADC IMM 69 00 */
    c->pc = 0x8E39u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E39u: /* STA ZP 85 19 */
    c->pc = 0x8E3Bu;
    ea = 0x19u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E3Bu: /* CLC IMP 18 */
    c->pc = 0x8E3Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E3Cu: /* LDA ZP A5 16 */
    c->pc = 0x8E3Eu;
    ea = 0x16u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E3Eu: /* ADC ZP 65 01 */
    c->pc = 0x8E40u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E40u: /* STA ZP 85 16 */
    c->pc = 0x8E42u;
    ea = 0x16u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E42u: /* LDA ZP A5 17 */
    c->pc = 0x8E44u;
    ea = 0x17u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E44u: /* ADC IMM 69 00 */
    c->pc = 0x8E46u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E46u: /* STA ZP 85 17 */
    c->pc = 0x8E48u;
    ea = 0x17u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E48u: /* JSR ABS 20 6B C9 */
    push(c, 0x8Eu); push(c, 0x4Au); c->pc = 0xC96Bu; c->cpu_cycles += 6u; return 1;
case 0x8E4Bu: /* INC ZP E6 1A */
    c->pc = 0x8E4Du;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8E4Du: /* LDA ZP A5 1A */
    c->pc = 0x8E4Fu;
    ea = 0x1Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E4Fu: /* AND IMM 29 3F */
    c->pc = 0x8E51u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E51u: /* STA ZP 85 1A */
    c->pc = 0x8E53u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E53u: /* CLC IMP 18 */
    c->pc = 0x8E54u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E54u: /* LDA ZP A5 08 */
    c->pc = 0x8E56u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E56u: /* ADC IMM 69 01 */
    c->pc = 0x8E58u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E58u: /* STA ZP 85 08 */
    c->pc = 0x8E5Au;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E5Au: /* LDA ZP A5 09 */
    c->pc = 0x8E5Cu;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E5Cu: /* ADC IMM 69 00 */
    c->pc = 0x8E5Eu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E5Eu: /* STA ZP 85 09 */
    c->pc = 0x8E60u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E60u: /* DEC ZP C6 01 */
    c->pc = 0x8E62u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8E62u: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E64u ^ 0x8E48u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E48u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E64u; } return 1;
case 0x8E64u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E65u: /* SEC IMP 38 */
    c->pc = 0x8E66u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E66u: /* LDA ABS AD 60 04 */
    c->pc = 0x8E69u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E69u: /* SBC ZP E5 1F */
    c->pc = 0x8E6Bu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E6Bu: /* CMP IMM C9 80 */
    c->pc = 0x8E6Du;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E6Du: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8E6Fu ^ 0x8E70u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E70u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E6Fu; } return 1;
case 0x8E6Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E70u: /* SEC IMP 38 */
    c->pc = 0x8E71u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E71u: /* LDA ZP A5 1F */
    c->pc = 0x8E73u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E73u: /* PHA IMP 48 */
    c->pc = 0x8E74u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E74u: /* SBC ZP E5 00 */
    c->pc = 0x8E76u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E76u: /* STA ZP 85 1F */
    c->pc = 0x8E78u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E78u: /* LDA ZP A5 20 */
    c->pc = 0x8E7Au;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E7Au: /* SBC IMM E9 00 */
    c->pc = 0x8E7Cu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E7Cu: /* STA ZP 85 20 */
    c->pc = 0x8E7Eu;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E7Eu: /* LDX ZP A6 14 */
    c->pc = 0x8E80u;
    ea = 0x14u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8E80u: /* DEX IMP CA */
    c->pc = 0x8E81u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8E81u: /* CPX ZP E4 20 */
    c->pc = 0x8E83u;
    ea = 0x20u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E83u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E85u ^ 0x8E94u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E94u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E85u; } return 1;
case 0x8E85u: /* INC ZP E6 20 */
    c->pc = 0x8E87u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8E87u: /* CLC IMP 18 */
    c->pc = 0x8E88u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E88u: /* LDA ZP A5 00 */
    c->pc = 0x8E8Au;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E8Au: /* ADC ZP 65 1F */
    c->pc = 0x8E8Cu;
    ea = 0x1Fu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E8Cu: /* STA ZP 85 00 */
    c->pc = 0x8E8Eu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E8Eu: /* LDA IMM A9 00 */
    c->pc = 0x8E90u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E90u: /* STA ZP 85 1F */
    c->pc = 0x8E92u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E92u: /* STA ZP 85 1E */
    c->pc = 0x8E94u;
    ea = 0x1Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E94u: /* CLC IMP 18 */
    c->pc = 0x8E95u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8E95u: /* PLA IMP 68 */
    c->pc = 0x8E96u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E96u: /* EOR IMM 49 FF */
    c->pc = 0x8E98u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E98u: /* AND IMM 29 03 */
    c->pc = 0x8E9Au;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E9Au: /* ADC ZP 65 00 */
    c->pc = 0x8E9Cu;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8E9Cu: /* LSR IMP 4A */
    c->pc = 0x8E9Du;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E9Du: /* LSR IMP 4A */
    c->pc = 0x8E9Eu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E9Eu: /* STA ZP 85 01 */
    c->pc = 0x8EA0u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EA0u: /* BEQ REL F0 3A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8EA2u ^ 0x8EDCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8EDCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8EA2u; } return 1;
case 0x8EA2u: /* SEC IMP 38 */
    c->pc = 0x8EA3u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8EA3u: /* LDA ZP A5 16 */
    c->pc = 0x8EA5u;
    ea = 0x16u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EA5u: /* STA ZP 85 08 */
    c->pc = 0x8EA7u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EA7u: /* SBC ZP E5 01 */
    c->pc = 0x8EA9u;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8EA9u: /* STA ZP 85 16 */
    c->pc = 0x8EABu;
    ea = 0x16u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EABu: /* LDA ZP A5 17 */
    c->pc = 0x8EADu;
    ea = 0x17u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EADu: /* STA ZP 85 09 */
    c->pc = 0x8EAFu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EAFu: /* SBC IMM E9 00 */
    c->pc = 0x8EB1u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8EB1u: /* STA ZP 85 17 */
    c->pc = 0x8EB3u;
    ea = 0x17u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EB3u: /* SEC IMP 38 */
    c->pc = 0x8EB4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8EB4u: /* LDA ZP A5 18 */
    c->pc = 0x8EB6u;
    ea = 0x18u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EB6u: /* SBC ZP E5 01 */
    c->pc = 0x8EB8u;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8EB8u: /* STA ZP 85 18 */
    c->pc = 0x8EBAu;
    ea = 0x18u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EBAu: /* LDA ZP A5 19 */
    c->pc = 0x8EBCu;
    ea = 0x19u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EBCu: /* SBC IMM E9 00 */
    c->pc = 0x8EBEu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8EBEu: /* STA ZP 85 19 */
    c->pc = 0x8EC0u;
    ea = 0x19u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EC0u: /* JSR ABS 20 6B C9 */
    push(c, 0x8Eu); push(c, 0xC2u); c->pc = 0xC96Bu; c->cpu_cycles += 6u; return 1;
case 0x8EC3u: /* DEC ZP C6 1A */
    c->pc = 0x8EC5u;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8EC5u: /* LDA ZP A5 1A */
    c->pc = 0x8EC7u;
    ea = 0x1Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EC7u: /* AND IMM 29 3F */
    c->pc = 0x8EC9u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EC9u: /* STA ZP 85 1A */
    c->pc = 0x8ECBu;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ECBu: /* SEC IMP 38 */
    c->pc = 0x8ECCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8ECCu: /* LDA ZP A5 08 */
    c->pc = 0x8ECEu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ECEu: /* SBC IMM E9 01 */
    c->pc = 0x8ED0u;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8ED0u: /* STA ZP 85 08 */
    c->pc = 0x8ED2u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ED2u: /* LDA ZP A5 09 */
    c->pc = 0x8ED4u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ED4u: /* SBC IMM E9 00 */
    c->pc = 0x8ED6u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8ED6u: /* STA ZP 85 09 */
    c->pc = 0x8ED8u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ED8u: /* DEC ZP C6 01 */
    c->pc = 0x8EDAu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8EDAu: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8EDCu ^ 0x8EC0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8EC0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8EDCu; } return 1;
case 0x8EDCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8EDDu: /* JSR ABS 20 20 92 */
    push(c, 0x8Eu); push(c, 0xDFu); c->pc = 0x9220u; c->cpu_cycles += 6u; return 1;
case 0x8EE0u: /* LDX ZP A6 14 */
    c->pc = 0x8EE2u;
    ea = 0x14u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8EE2u: /* DEX IMP CA */
    c->pc = 0x8EE3u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8EE3u: /* STX ZP 86 15 */
    c->pc = 0x8EE5u;
    ea = 0x15u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8EE5u: /* DEC ZP C6 38 */
    c->pc = 0x8EE7u;
    ea = 0x38u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8EE7u: /* LDY ZP A4 38 */
    c->pc = 0x8EE9u;
    ea = 0x38u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8EE9u: /* JSR ABS 20 A4 C7 */
    push(c, 0x8Eu); push(c, 0xEBu); c->pc = 0xC7A4u; c->cpu_cycles += 6u; return 1;
case 0x8EECu: /* TYA IMP 98 */
    c->pc = 0x8EEDu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EEDu: /* AND IMM 29 1F */
    c->pc = 0x8EEFu;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EEFu: /* STA ZP 85 14 */
    c->pc = 0x8EF1u;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EF1u: /* TXA IMP 8A */
    c->pc = 0x8EF2u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EF2u: /* SEC IMP 38 */
    c->pc = 0x8EF3u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8EF3u: /* SBC ZP E5 14 */
    c->pc = 0x8EF5u;
    ea = 0x14u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8EF5u: /* STA ZP 85 14 */
    c->pc = 0x8EF7u;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EF7u: /* LDA ZP A5 15 */
    c->pc = 0x8EF9u;
    ea = 0x15u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EF9u: /* JSR ABS 20 7D 90 */
    push(c, 0x8Eu); push(c, 0xFBu); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x8EFCu: /* DEC ABS CE 40 04 */
    c->pc = 0x8EFFu;
    ea = 0x0440u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8EFFu: /* LDA ZP A5 38 */
    c->pc = 0x8F01u;
    ea = 0x38u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F01u: /* STA ZP 85 FE */
    c->pc = 0x8F03u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F03u: /* JSR ABS 20 C9 90 */
    push(c, 0x8Fu); push(c, 0x05u); c->pc = 0x90C9u; c->cpu_cycles += 6u; return 1;
case 0x8F06u: /* DEC ZP C6 20 */
    c->pc = 0x8F08u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8F08u: /* SEC IMP 38 */
    c->pc = 0x8F09u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8F09u: /* LDA ZP A5 16 */
    c->pc = 0x8F0Bu;
    ea = 0x16u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F0Bu: /* SBC IMM E9 40 */
    c->pc = 0x8F0Du;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8F0Du: /* STA ZP 85 16 */
    c->pc = 0x8F0Fu;
    ea = 0x16u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F0Fu: /* LDA ZP A5 17 */
    c->pc = 0x8F11u;
    ea = 0x17u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F11u: /* SBC IMM E9 00 */
    c->pc = 0x8F13u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8F13u: /* STA ZP 85 17 */
    c->pc = 0x8F15u;
    ea = 0x17u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F15u: /* SEC IMP 38 */
    c->pc = 0x8F16u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8F16u: /* LDA ZP A5 18 */
    c->pc = 0x8F18u;
    ea = 0x18u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F18u: /* SBC IMM E9 40 */
    c->pc = 0x8F1Au;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8F1Au: /* STA ZP 85 18 */
    c->pc = 0x8F1Cu;
    ea = 0x18u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F1Cu: /* LDA ZP A5 19 */
    c->pc = 0x8F1Eu;
    ea = 0x19u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F1Eu: /* SBC IMM E9 00 */
    c->pc = 0x8F20u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8F20u: /* STA ZP 85 19 */
    c->pc = 0x8F22u;
    ea = 0x19u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F22u: /* JSR ABS 20 7F C0 */
    push(c, 0x8Fu); push(c, 0x24u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x8F25u: /* SEC IMP 38 */
    c->pc = 0x8F26u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8F26u: /* LDA ZP A5 15 */
    c->pc = 0x8F28u;
    ea = 0x15u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F28u: /* SBC IMM E9 01 */
    c->pc = 0x8F2Au;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8F2Au: /* JSR ABS 20 7D 90 */
    push(c, 0x8Fu); push(c, 0x2Cu); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x8F2Du: /* LDA IMM A9 00 */
    c->pc = 0x8F2Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F2Fu: /* STA ZP 85 F9 */
    c->pc = 0x8F31u;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F31u: /* LDA IMM A9 00 */
    c->pc = 0x8F33u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F33u: /* STA ZP 85 42 */
    c->pc = 0x8F35u;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F35u: /* JSR ABS 20 58 D6 */
    push(c, 0x8Fu); push(c, 0x37u); c->pc = 0xD658u; c->cpu_cycles += 6u; return 1;
case 0x8F38u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8F39u: /* JSR ABS 20 20 92 */
    push(c, 0x8Fu); push(c, 0x3Bu); c->pc = 0x9220u; c->cpu_cycles += 6u; return 1;
case 0x8F3Cu: /* LDX ZP A6 15 */
    c->pc = 0x8F3Eu;
    ea = 0x15u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8F3Eu: /* INX IMP E8 */
    c->pc = 0x8F3Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8F3Fu: /* TXA IMP 8A */
    c->pc = 0x8F40u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F40u: /* PHA IMP 48 */
    c->pc = 0x8F41u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F41u: /* JSR ABS 20 7D 90 */
    push(c, 0x8Fu); push(c, 0x43u); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x8F44u: /* INC ABS EE 40 04 */
    c->pc = 0x8F47u;
    ea = 0x0440u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8F47u: /* LDA ZP A5 37 */
    c->pc = 0x8F49u;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F49u: /* AND IMM 29 01 */
    c->pc = 0x8F4Bu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F4Bu: /* BNE REL D0 44 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8F4Du ^ 0x8F91u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F91u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F4Du; } return 1;
case 0x8F4Du: /* LDA IMM A9 18 */
    c->pc = 0x8F4Fu;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F4Fu: /* STA ZP 85 FD */
    c->pc = 0x8F51u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F51u: /* LDA IMM A9 00 */
    c->pc = 0x8F53u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F53u: /* STA ZP 85 FE */
    c->pc = 0x8F55u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F55u: /* LDX ZP A6 2A */
    c->pc = 0x8F57u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8F57u: /* LDA ZP A5 20 */
    c->pc = 0x8F59u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F59u: /* CMP ABX DD 61 90 */
    c->pc = 0x8F5Cu;
    ea = (uint16_t)(0x9061u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x9061u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8F5Cu: /* BCC REL 90 33 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8F5Eu ^ 0x8F91u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F91u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F5Eu; } return 1;
case 0x8F5Eu: /* LDA ZP A5 FD */
    c->pc = 0x8F60u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F60u: /* AND IMM 29 07 */
    c->pc = 0x8F62u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F62u: /* BNE REL D0 21 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8F64u ^ 0x8F85u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F85u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F64u; } return 1;
case 0x8F64u: /* LDA IMM A9 34 */
    c->pc = 0x8F66u;
    v = 0x34u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F66u: /* JSR ABS 20 51 C0 */
    push(c, 0x8Fu); push(c, 0x68u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8F69u: /* LDA ZP A5 20 */
    c->pc = 0x8F6Bu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F6Bu: /* STA ZP 85 09 */
    c->pc = 0x8F6Du;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F6Du: /* LDA IMM A9 F0 */
    c->pc = 0x8F6Fu;
    v = 0xF0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F6Fu: /* STA ZP 85 08 */
    c->pc = 0x8F71u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F71u: /* LDA ZP A5 FD */
    c->pc = 0x8F73u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F73u: /* ASL IMP 0A */
    c->pc = 0x8F74u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F74u: /* ADC ABX 7D 45 90 */
    c->pc = 0x8F77u;
    ea = (uint16_t)(0x9045u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9045u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8F77u: /* STA ZP 85 0A */
    c->pc = 0x8F79u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F79u: /* JSR ABS 20 EF C8 */
    push(c, 0x8Fu); push(c, 0x7Bu); c->pc = 0xC8EFu; c->cpu_cycles += 6u; return 1;
case 0x8F7Cu: /* JSR ABS 20 1B C9 */
    push(c, 0x8Fu); push(c, 0x7Eu); c->pc = 0xC91Bu; c->cpu_cycles += 6u; return 1;
case 0x8F7Fu: /* LDA IMM A9 80 */
    c->pc = 0x8F81u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F81u: /* STA ZP 85 54 */
    c->pc = 0x8F83u;
    ea = 0x54u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F83u: /* INC ZP E6 51 */
    c->pc = 0x8F85u;
    ea = 0x51u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8F85u: /* JSR ABS 20 7F C0 */
    push(c, 0x8Fu); push(c, 0x87u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x8F88u: /* DEC ZP C6 FD */
    c->pc = 0x8F8Au;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8F8Au: /* BPL REL 10 C9 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8F8Cu ^ 0x8F55u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F55u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F8Cu; } return 1;
case 0x8F8Cu: /* LDA IMM A9 FE */
    c->pc = 0x8F8Eu;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F8Eu: /* JSR ABS 20 51 C0 */
    push(c, 0x8Fu); push(c, 0x90u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8F91u: /* LDA ZP A5 38 */
    c->pc = 0x8F93u;
    ea = 0x38u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F93u: /* STA ZP 85 FE */
    c->pc = 0x8F95u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F95u: /* INC ZP E6 FE */
    c->pc = 0x8F97u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8F97u: /* JSR ABS 20 C9 90 */
    push(c, 0x8Fu); push(c, 0x99u); c->pc = 0x90C9u; c->cpu_cycles += 6u; return 1;
case 0x8F9Au: /* INC ZP E6 20 */
    c->pc = 0x8F9Cu;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8F9Cu: /* JSR ABS 20 7F C0 */
    push(c, 0x8Fu); push(c, 0x9Eu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x8F9Fu: /* CLC IMP 18 */
    c->pc = 0x8FA0u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8FA0u: /* LDA ZP A5 15 */
    c->pc = 0x8FA2u;
    ea = 0x15u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FA2u: /* ADC IMM 69 02 */
    c->pc = 0x8FA4u;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FA4u: /* JSR ABS 20 7D 90 */
    push(c, 0x8Fu); push(c, 0xA6u); c->pc = 0x907Du; c->cpu_cycles += 6u; return 1;
case 0x8FA7u: /* INC ZP E6 38 */
    c->pc = 0x8FA9u;
    ea = 0x38u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8FA9u: /* LDY ZP A4 38 */
    c->pc = 0x8FABu;
    ea = 0x38u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8FABu: /* JSR ABS 20 A4 C7 */
    push(c, 0x8Fu); push(c, 0xADu); c->pc = 0xC7A4u; c->cpu_cycles += 6u; return 1;
case 0x8FAEu: /* TYA IMP 98 */
    c->pc = 0x8FAFu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FAFu: /* AND IMM 29 1F */
    c->pc = 0x8FB1u;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FB1u: /* STA ZP 85 14 */
    c->pc = 0x8FB3u;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FB3u: /* PLA IMP 68 */
    c->pc = 0x8FB4u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FB4u: /* TAX IMP AA */
    c->pc = 0x8FB5u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8FB5u: /* CLC IMP 18 */
    c->pc = 0x8FB6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8FB6u: /* ADC ZP 65 14 */
    c->pc = 0x8FB8u;
    ea = 0x14u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8FB8u: /* STA ZP 85 15 */
    c->pc = 0x8FBAu;
    ea = 0x15u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FBAu: /* STX ZP 86 14 */
    c->pc = 0x8FBCu;
    ea = 0x14u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8FBCu: /* CLC IMP 18 */
    c->pc = 0x8FBDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8FBDu: /* LDA ZP A5 18 */
    c->pc = 0x8FBFu;
    ea = 0x18u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FBFu: /* ADC IMM 69 40 */
    c->pc = 0x8FC1u;
    v = 0x40u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FC1u: /* STA ZP 85 18 */
    c->pc = 0x8FC3u;
    ea = 0x18u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FC3u: /* LDA ZP A5 19 */
    c->pc = 0x8FC5u;
    ea = 0x19u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FC5u: /* ADC IMM 69 00 */
    c->pc = 0x8FC7u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FC7u: /* STA ZP 85 19 */
    c->pc = 0x8FC9u;
    ea = 0x19u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FC9u: /* CLC IMP 18 */
    c->pc = 0x8FCAu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8FCAu: /* LDA ZP A5 16 */
    c->pc = 0x8FCCu;
    ea = 0x16u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FCCu: /* ADC IMM 69 40 */
    c->pc = 0x8FCEu;
    v = 0x40u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FCEu: /* STA ZP 85 16 */
    c->pc = 0x8FD0u;
    ea = 0x16u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FD0u: /* LDA ZP A5 17 */
    c->pc = 0x8FD2u;
    ea = 0x17u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FD2u: /* ADC IMM 69 00 */
    c->pc = 0x8FD4u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FD4u: /* STA ZP 85 17 */
    c->pc = 0x8FD6u;
    ea = 0x17u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FD6u: /* LDA IMM A9 00 */
    c->pc = 0x8FD8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FD8u: /* STA ZP 85 F9 */
    c->pc = 0x8FDAu;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FDAu: /* LDA ZP A5 37 */
    c->pc = 0x8FDCu;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FDCu: /* AND IMM 29 01 */
    c->pc = 0x8FDEu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FDEu: /* BNE REL D0 5D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8FE0u ^ 0x903Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x903Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FE0u; } return 1;
case 0x8FE0u: /* LDA IMM A9 00 */
    c->pc = 0x8FE2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FE2u: /* STA ZP 85 FD */
    c->pc = 0x8FE4u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FE4u: /* STA ZP 85 FE */
    c->pc = 0x8FE6u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FE6u: /* LDX ZP A6 2A */
    c->pc = 0x8FE8u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8FE8u: /* LDA ZP A5 20 */
    c->pc = 0x8FEAu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FEAu: /* CMP ABX DD 61 90 */
    c->pc = 0x8FEDu;
    ea = (uint16_t)(0x9061u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x9061u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8FEDu: /* BCC REL 90 4E */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8FEFu ^ 0x903Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x903Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FEFu; } return 1;
case 0x8FEFu: /* CMP ABX DD 6F 90 */
    c->pc = 0x8FF2u;
    ea = (uint16_t)(0x906Fu + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x906Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8FF2u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8FF4u ^ 0x9003u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9003u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FF4u; } return 1;
case 0x8FF4u: /* LDA IMM A9 0B */
    c->pc = 0x8FF6u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FF6u: /* JSR ABS 20 51 C0 */
    push(c, 0x8Fu); push(c, 0xF8u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8FF9u: /* LDA ZP A5 2A */
    c->pc = 0x8FFBu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FFBu: /* CMP IMM C9 0B */
    c->pc = 0x8FFDu;
    v = 0x0Bu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FFDu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8FFFu ^ 0x9003u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9003u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FFFu; } return 1;
case 0x8FFFu: /* CMP IMM C9 08 */
    c->pc = 0x9001u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9001u: /* BCS REL B0 3A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9003u ^ 0x903Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x903Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9003u; } return 1;
case 0x9003u: /* LDA ZP A5 FD */
    c->pc = 0x9005u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9005u: /* AND IMM 29 07 */
    c->pc = 0x9007u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9007u: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9009u ^ 0x902Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x902Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9009u; } return 1;
case 0x9009u: /* LDA IMM A9 34 */
    c->pc = 0x900Bu;
    v = 0x34u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x900Bu: /* JSR ABS 20 51 C0 */
    push(c, 0x90u); push(c, 0x0Du); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x900Eu: /* LDA ZP A5 20 */
    c->pc = 0x9010u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9010u: /* STA ZP 85 09 */
    c->pc = 0x9012u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9012u: /* LDA IMM A9 00 */
    c->pc = 0x9014u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9014u: /* STA ZP 85 08 */
    c->pc = 0x9016u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9016u: /* LDA ZP A5 FD */
    c->pc = 0x9018u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9018u: /* ASL IMP 0A */
    c->pc = 0x9019u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9019u: /* ADC ABX 7D 45 90 */
    c->pc = 0x901Cu;
    ea = (uint16_t)(0x9045u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9045u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x901Cu: /* STA ZP 85 0A */
    c->pc = 0x901Eu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x901Eu: /* JSR ABS 20 EF C8 */
    push(c, 0x90u); push(c, 0x20u); c->pc = 0xC8EFu; c->cpu_cycles += 6u; return 1;
case 0x9021u: /* LDX ZP A6 2A */
    c->pc = 0x9023u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9023u: /* LDA ABX BD 53 90 */
    c->pc = 0x9026u;
    ea = (uint16_t)(0x9053u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9053u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9026u: /* JSR ABS 20 1B C9 */
    push(c, 0x90u); push(c, 0x28u); c->pc = 0xC91Bu; c->cpu_cycles += 6u; return 1;
case 0x9029u: /* INC ZP E6 54 */
    c->pc = 0x902Bu;
    ea = 0x54u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x902Bu: /* INC ZP E6 51 */
    c->pc = 0x902Du;
    ea = 0x51u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x902Du: /* JSR ABS 20 7F C0 */
    push(c, 0x90u); push(c, 0x2Fu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x9030u: /* INC ZP E6 FD */
    c->pc = 0x9032u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9032u: /* LDA ZP A5 FD */
    c->pc = 0x9034u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9034u: /* CMP IMM C9 19 */
    c->pc = 0x9036u;
    v = 0x19u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9036u: /* BNE REL D0 AE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9038u ^ 0x8FE6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FE6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9038u; } return 1;
case 0x9038u: /* LDA IMM A9 FE */
    c->pc = 0x903Au;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x903Au: /* JSR ABS 20 51 C0 */
    push(c, 0x90u); push(c, 0x3Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x903Du: /* LDA IMM A9 40 */
    c->pc = 0x903Fu;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x903Fu: /* STA ZP 85 42 */
    c->pc = 0x9041u;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9041u: /* JSR ABS 20 58 D6 */
    push(c, 0x90u); push(c, 0x43u); c->pc = 0xD658u; c->cpu_cycles += 6u; return 1;
case 0x9044u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x907Du: /* LDX IMM A2 00 */
    c->pc = 0x907Fu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x907Fu: /* STX ZP 86 08 */
    c->pc = 0x9081u;
    ea = 0x08u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9081u: /* LSR IMP 4A */
    c->pc = 0x9082u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9082u: /* ROR ZP 66 08 */
    c->pc = 0x9084u;
    ea = 0x08u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9084u: /* LSR IMP 4A */
    c->pc = 0x9085u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9085u: /* ROR ZP 66 08 */
    c->pc = 0x9087u;
    ea = 0x08u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9087u: /* CLC IMP 18 */
    c->pc = 0x9088u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9088u: /* ADC IMM 69 85 */
    c->pc = 0x908Au;
    v = 0x85u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x908Au: /* STA ZP 85 09 */
    c->pc = 0x908Cu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x908Cu: /* LDA ZP A5 1A */
    c->pc = 0x908Eu;
    ea = 0x1Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x908Eu: /* PHA IMP 48 */
    c->pc = 0x908Fu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x908Fu: /* LDA IMM A9 00 */
    c->pc = 0x9091u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9091u: /* STA ZP 85 1A */
    c->pc = 0x9093u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9093u: /* JSR ABS 20 6B C9 */
    push(c, 0x90u); push(c, 0x95u); c->pc = 0xC96Bu; c->cpu_cycles += 6u; return 1;
case 0x9096u: /* INC ZP E6 08 */
    c->pc = 0x9098u;
    ea = 0x08u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9098u: /* INC ZP E6 1A */
    c->pc = 0x909Au;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x909Au: /* JSR ABS 20 6B C9 */
    push(c, 0x90u); push(c, 0x9Cu); c->pc = 0xC96Bu; c->cpu_cycles += 6u; return 1;
case 0x909Du: /* LDA ZP A5 08 */
    c->pc = 0x909Fu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x909Fu: /* PHA IMP 48 */
    c->pc = 0x90A0u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90A0u: /* LDA ZP A5 09 */
    c->pc = 0x90A2u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90A2u: /* PHA IMP 48 */
    c->pc = 0x90A3u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90A3u: /* LDA ZP A5 F7 */
    c->pc = 0x90A5u;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90A5u: /* AND IMM 29 80 */
    c->pc = 0x90A7u;
    v = 0x80u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90A7u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x90A9u ^ 0x90AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x90A9u; } return 1;
case 0x90A9u: /* JSR ABS 20 7F C0 */
    push(c, 0x90u); push(c, 0xABu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x90ACu: /* JMP ABS 4C B4 90 */
    c->pc = 0x90B4u; c->cpu_cycles += 3u; return 1;
case 0x90AFu: /* LDA ZP A5 1B */
    c->pc = 0x90B1u;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90B1u: /* JSR ABS 20 1B D1 */
    push(c, 0x90u); push(c, 0xB3u); c->pc = 0xD11Bu; c->cpu_cycles += 6u; return 1;
case 0x90B4u: /* CLC IMP 18 */
    c->pc = 0x90B5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x90B5u: /* PLA IMP 68 */
    c->pc = 0x90B6u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90B6u: /* STA ZP 85 09 */
    c->pc = 0x90B8u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90B8u: /* PLA IMP 68 */
    c->pc = 0x90B9u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90B9u: /* STA ZP 85 08 */
    c->pc = 0x90BBu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90BBu: /* INC ZP E6 08 */
    c->pc = 0x90BDu;
    ea = 0x08u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x90BDu: /* INC ZP E6 1A */
    c->pc = 0x90BFu;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x90BFu: /* LDA ZP A5 08 */
    c->pc = 0x90C1u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90C1u: /* AND IMM 29 3F */
    c->pc = 0x90C3u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90C3u: /* BNE REL D0 CE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x90C5u ^ 0x9093u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9093u; }
    else { c->cpu_cycles += 2u; c->pc = 0x90C5u; } return 1;
case 0x90C5u: /* PLA IMP 68 */
    c->pc = 0x90C6u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90C6u: /* STA ZP 85 1A */
    c->pc = 0x90C8u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90C8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x90C9u: /* LDA ZP A5 37 */
    c->pc = 0x90CBu;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90CBu: /* AND IMM 29 01 */
    c->pc = 0x90CDu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90CDu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x90CFu ^ 0x90D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x90CFu; } return 1;
case 0x90CFu: /* JMP ABS 4C 85 91 */
    c->pc = 0x9185u; c->cpu_cycles += 3u; return 1;
case 0x90D2u: /* JSR ABS 20 15 91 */
    push(c, 0x90u); push(c, 0xD4u); c->pc = 0x9115u; c->cpu_cycles += 6u; return 1;
case 0x90D5u: /* LDA IMM A9 00 */
    c->pc = 0x90D7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90D7u: /* STA ZP 85 3E */
    c->pc = 0x90D9u;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90D9u: /* STA ZP 85 3F */
    c->pc = 0x90DBu;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90DBu: /* STA ZP 85 FD */
    c->pc = 0x90DDu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90DDu: /* LDY IMM A0 3F */
    c->pc = 0x90DFu;
    v = 0x3Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x90DFu: /* TYA IMP 98 */
    c->pc = 0x90E0u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90E0u: /* PHA IMP 48 */
    c->pc = 0x90E1u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90E1u: /* LDA IMM A9 01 */
    c->pc = 0x90E3u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90E3u: /* CLC IMP 18 */
    c->pc = 0x90E4u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x90E4u: /* LDA ZP A5 1F */
    c->pc = 0x90E6u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90E6u: /* ADC IMM 69 04 */
    c->pc = 0x90E8u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x90E8u: /* STA ZP 85 1F */
    c->pc = 0x90EAu;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90EAu: /* CLC IMP 18 */
    c->pc = 0x90EBu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x90EBu: /* LDA ABS AD 80 04 */
    c->pc = 0x90EEu;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90EEu: /* ADC IMM 69 C0 */
    c->pc = 0x90F0u;
    v = 0xC0u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x90F0u: /* STA ABS 8D 80 04 */
    c->pc = 0x90F3u;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90F3u: /* LDA ABS AD 60 04 */
    c->pc = 0x90F6u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90F6u: /* ADC IMM 69 00 */
    c->pc = 0x90F8u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x90F8u: /* STA ABS 8D 60 04 */
    c->pc = 0x90FBu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90FBu: /* LDA ZP A5 A9 */
    c->pc = 0x90FDu;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90FDu: /* CMP IMM C9 01 */
    c->pc = 0x90FFu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x90FFu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9101u ^ 0x9104u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9104u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9101u; } return 1;
case 0x9101u: /* JSR ABS 20 FA 91 */
    push(c, 0x91u); push(c, 0x03u); c->pc = 0x91FAu; c->cpu_cycles += 6u; return 1;
case 0x9104u: /* JSR ABS 20 77 CC */
    push(c, 0x91u); push(c, 0x06u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x9107u: /* JSR ABS 20 0C CB */
    push(c, 0x91u); push(c, 0x09u); c->pc = 0xCB0Cu; c->cpu_cycles += 6u; return 1;
case 0x910Au: /* JSR ABS 20 7F C0 */
    push(c, 0x91u); push(c, 0x0Cu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x910Du: /* PLA IMP 68 */
    c->pc = 0x910Eu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x910Eu: /* TAY IMP A8 */
    c->pc = 0x910Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x910Fu: /* DEY IMP 88 */
    c->pc = 0x9110u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9110u: /* BNE REL D0 CD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9112u ^ 0x90DFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90DFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9112u; } return 1;
case 0x9112u: /* STY ZP 84 1F */
    c->pc = 0x9114u;
    ea = 0x1Fu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9114u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9115u: /* LDX ZP A6 2A */
    c->pc = 0x9117u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9117u: /* CPX IMM E0 03 */
    c->pc = 0x9119u;
    v = 0x03u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9119u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x911Bu ^ 0x9121u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9121u; }
    else { c->cpu_cycles += 2u; c->pc = 0x911Bu; } return 1;
case 0x911Bu: /* LDY ZP A4 38 */
    c->pc = 0x911Du;
    ea = 0x38u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x911Du: /* CPY IMM C0 04 */
    c->pc = 0x911Fu;
    v = 0x04u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x911Fu: /* BEQ REL F0 26 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9121u ^ 0x9147u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9147u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9121u; } return 1;
case 0x9121u: /* LDY ABX BC 48 91 */
    c->pc = 0x9124u;
    ea = (uint16_t)(0x9148u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x9148u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9124u: /* BEQ REL F0 21 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9126u ^ 0x9147u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9147u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9126u; } return 1;
case 0x9126u: /* LDA ABX BD 64 91 */
    c->pc = 0x9129u;
    ea = (uint16_t)(0x9164u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9164u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9129u: /* STA ZP 85 FD */
    c->pc = 0x912Bu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x912Bu: /* LDA ABX BD 56 91 */
    c->pc = 0x912Eu;
    ea = (uint16_t)(0x9156u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9156u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x912Eu: /* TAX IMP AA */
    c->pc = 0x912Fu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x912Fu: /* LDA ABX BD 72 91 */
    c->pc = 0x9132u;
    ea = (uint16_t)(0x9172u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9172u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9132u: /* STA ABY 99 56 03 */
    c->pc = 0x9135u;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9135u: /* STA ABY 99 76 03 */
    c->pc = 0x9138u;
    ea = (uint16_t)(0x0376u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9138u: /* STA ABY 99 86 03 */
    c->pc = 0x913Bu;
    ea = (uint16_t)(0x0386u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x913Bu: /* STA ABY 99 96 03 */
    c->pc = 0x913Eu;
    ea = (uint16_t)(0x0396u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x913Eu: /* STA ABY 99 A6 03 */
    c->pc = 0x9141u;
    ea = (uint16_t)(0x03A6u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9141u: /* DEX IMP CA */
    c->pc = 0x9142u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9142u: /* DEY IMP 88 */
    c->pc = 0x9143u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9143u: /* DEC ZP C6 FD */
    c->pc = 0x9145u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9145u: /* BNE REL D0 E8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9147u ^ 0x912Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x912Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9147u; } return 1;
case 0x9147u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9185u: /* LDA ZP A5 37 */
    c->pc = 0x9187u;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9187u: /* LSR IMP 4A */
    c->pc = 0x9188u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9188u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x918Au ^ 0x9193u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9193u; }
    else { c->cpu_cycles += 2u; c->pc = 0x918Au; } return 1;
case 0x918Au: /* LDX IMM A2 09 */
    c->pc = 0x918Cu;
    v = 0x09u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x918Cu: /* STX ZP 86 2C */
    c->pc = 0x918Eu;
    ea = 0x2Cu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x918Eu: /* PHA IMP 48 */
    c->pc = 0x918Fu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x918Fu: /* JSR ABS 20 A8 D3 */
    push(c, 0x91u); push(c, 0x91u); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0x9192u: /* PLA IMP 68 */
    c->pc = 0x9193u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9193u: /* TAX IMP AA */
    c->pc = 0x9194u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9194u: /* LDA ABX BD 12 92 */
    c->pc = 0x9197u;
    ea = (uint16_t)(0x9212u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9212u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9197u: /* STA ZP 85 39 */
    c->pc = 0x9199u;
    ea = 0x39u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9199u: /* LDA ABX BD 1C 92 */
    c->pc = 0x919Cu;
    ea = (uint16_t)(0x921Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x921Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x919Cu: /* STA ZP 85 22 */
    c->pc = 0x919Eu;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x919Eu: /* LDA IMM A9 00 */
    c->pc = 0x91A0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A0u: /* STA ZP 85 FD */
    c->pc = 0x91A2u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91A2u: /* TXA IMP 8A */
    c->pc = 0x91A3u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A3u: /* PHA IMP 48 */
    c->pc = 0x91A4u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91A4u: /* JSR ABS 20 77 CC */
    push(c, 0x91u); push(c, 0xA6u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x91A7u: /* JSR ABS 20 16 CA */
    push(c, 0x91u); push(c, 0xA9u); c->pc = 0xCA16u; c->cpu_cycles += 6u; return 1;
case 0x91AAu: /* JSR ABS 20 0C CB */
    push(c, 0x91u); push(c, 0xACu); c->pc = 0xCB0Cu; c->cpu_cycles += 6u; return 1;
case 0x91ADu: /* JSR ABS 20 7F C0 */
    push(c, 0x91u); push(c, 0xAFu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0x91B0u: /* PLA IMP 68 */
    c->pc = 0x91B1u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91B1u: /* TAX IMP AA */
    c->pc = 0x91B2u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91B2u: /* LDA ZP A5 A9 */
    c->pc = 0x91B4u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91B4u: /* CMP IMM C9 01 */
    c->pc = 0x91B6u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x91B6u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x91B8u ^ 0x91BBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91BBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x91B8u; } return 1;
case 0x91B8u: /* JSR ABS 20 FA 91 */
    push(c, 0x91u); push(c, 0xBAu); c->pc = 0x91FAu; c->cpu_cycles += 6u; return 1;
case 0x91BBu: /* CLC IMP 18 */
    c->pc = 0x91BCu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91BCu: /* LDA ABS AD C0 04 */
    c->pc = 0x91BFu;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91BFu: /* ADC ABX 7D 16 92 */
    c->pc = 0x91C2u;
    ea = (uint16_t)(0x9216u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9216u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91C2u: /* STA ABS 8D C0 04 */
    c->pc = 0x91C5u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91C5u: /* LDA ABS AD A0 04 */
    c->pc = 0x91C8u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91C8u: /* ADC ABX 7D 18 92 */
    c->pc = 0x91CBu;
    ea = (uint16_t)(0x9218u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9218u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91CBu: /* STA ABS 8D A0 04 */
    c->pc = 0x91CEu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91CEu: /* LDA ZP A5 F9 */
    c->pc = 0x91D0u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91D0u: /* ADC ABX 7D 1E 92 */
    c->pc = 0x91D3u;
    ea = (uint16_t)(0x921Eu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x921Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91D3u: /* STA ZP 85 F9 */
    c->pc = 0x91D5u;
    ea = 0xF9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91D5u: /* CLC IMP 18 */
    c->pc = 0x91D6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91D6u: /* LDA ZP A5 22 */
    c->pc = 0x91D8u;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91D8u: /* ADC ABX 7D 1A 92 */
    c->pc = 0x91DBu;
    ea = (uint16_t)(0x921Au + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x921Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91DBu: /* STA ZP 85 22 */
    c->pc = 0x91DDu;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91DDu: /* CLC IMP 18 */
    c->pc = 0x91DEu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91DEu: /* LDA ZP A5 39 */
    c->pc = 0x91E0u;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91E0u: /* ADC ABX 7D 14 92 */
    c->pc = 0x91E3u;
    ea = (uint16_t)(0x9214u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9214u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91E3u: /* STA ZP 85 39 */
    c->pc = 0x91E5u;
    ea = 0x39u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91E5u: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x91E7u ^ 0x91EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x91E7u; } return 1;
case 0x91E7u: /* CMP IMM C9 3C */
    c->pc = 0x91E9u;
    v = 0x3Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x91E9u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x91EBu ^ 0x91EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x91EBu; } return 1;
case 0x91EBu: /* BNE REL D0 B5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x91EDu ^ 0x91A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91EDu; } return 1;
case 0x91EDu: /* LDA IMM A9 00 */
    c->pc = 0x91EFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91EFu: /* STA ZP 85 21 */
    c->pc = 0x91F1u;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F1u: /* STA ZP 85 22 */
    c->pc = 0x91F3u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F3u: /* STA ABS 8D C0 04 */
    c->pc = 0x91F6u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91F6u: /* JSR ABS 20 77 CC */
    push(c, 0x91u); push(c, 0xF8u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0x91F9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x91FAu: /* LDA ABS AD 60 04 */
    c->pc = 0x91FDu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91FDu: /* STA ABS 8D 62 04 */
    c->pc = 0x9200u;
    ea = 0x0462u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9200u: /* LDA ABS AD 40 04 */
    c->pc = 0x9203u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9203u: /* STA ABS 8D 42 04 */
    c->pc = 0x9206u;
    ea = 0x0442u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9206u: /* LDA ABS AD A0 04 */
    c->pc = 0x9209u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9209u: /* STA ABS 8D A2 04 */
    c->pc = 0x920Cu;
    ea = 0x04A2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x920Cu: /* LDA IMM A9 00 */
    c->pc = 0x920Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x920Eu: /* STA ABS 8D 82 06 */
    c->pc = 0x9211u;
    ea = 0x0682u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9211u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9220u: /* LDX IMM A2 00 */
    c->pc = 0x9222u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9222u: /* LDA ZP A5 A9 */
    c->pc = 0x9224u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9224u: /* CMP IMM C9 06 */
    c->pc = 0x9226u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9226u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9228u ^ 0x922Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x922Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9228u; } return 1;
case 0x9228u: /* CMP IMM C9 01 */
    c->pc = 0x922Au;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x922Au: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x922Cu ^ 0x922Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x922Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x922Cu; } return 1;
case 0x922Cu: /* LDX ABS AE 22 04 */
    c->pc = 0x922Fu;
    ea = 0x0422u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x922Fu: /* TXA IMP 8A */
    c->pc = 0x9230u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9230u: /* PHA IMP 48 */
    c->pc = 0x9231u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9231u: /* LDA IMM A9 00 */
    c->pc = 0x9233u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9233u: /* LDX IMM A2 1F */
    c->pc = 0x9235u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9235u: /* STA ABX 9D 20 04 */
    c->pc = 0x9238u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9238u: /* DEX IMP CA */
    c->pc = 0x9239u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9239u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x923Bu ^ 0x9235u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9235u; }
    else { c->cpu_cycles += 2u; c->pc = 0x923Bu; } return 1;
case 0x923Bu: /* STA ABS 8D A0 05 */
    c->pc = 0x923Eu;
    ea = 0x05A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x923Eu: /* STA ABS 8D A1 05 */
    c->pc = 0x9241u;
    ea = 0x05A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9241u: /* STA ABS 8D A2 05 */
    c->pc = 0x9244u;
    ea = 0x05A2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9244u: /* PLA IMP 68 */
    c->pc = 0x9245u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9245u: /* STA ABS 8D 22 04 */
    c->pc = 0x9248u;
    ea = 0x0422u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9248u: /* LDX IMM A2 0F */
    c->pc = 0x924Au;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x924Au: /* LDA IMM A9 FF */
    c->pc = 0x924Cu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x924Cu: /* STA ABX 9D 00 01 */
    c->pc = 0x924Fu;
    ea = (uint16_t)(0x0100u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x924Fu: /* STA ABX 9D 30 01 */
    c->pc = 0x9252u;
    ea = (uint16_t)(0x0130u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9252u: /* LDA IMM A9 00 */
    c->pc = 0x9254u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9254u: /* STA ABX 9D 60 01 */
    c->pc = 0x9257u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9257u: /* DEX IMP CA */
    c->pc = 0x9258u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9258u: /* BPL REL 10 F0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x925Au ^ 0x924Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x924Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x925Au; } return 1;
case 0x925Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x925Bu: /* SEC IMP 38 */
    c->pc = 0x925Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x925Cu: /* LDA ABS AD 60 04 */
    c->pc = 0x925Fu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x925Fu: /* SBC ZP E5 1F */
    c->pc = 0x9261u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9261u: /* STA ZP 85 2D */
    c->pc = 0x9263u;
    ea = 0x2Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9263u: /* LDA ZP A5 AA */
    c->pc = 0x9265u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9265u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9267u ^ 0x926Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x926Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9267u; } return 1;
case 0x9267u: /* CMP IMM C9 04 */
    c->pc = 0x9269u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9269u: /* BNE REL D0 37 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x926Bu ^ 0x92A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x926Bu; } return 1;
case 0x926Bu: /* LDX IMM A2 10 */
    c->pc = 0x926Du;
    v = 0x10u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x926Du: /* STX ZP 86 2B */
    c->pc = 0x926Fu;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x926Fu: /* LDA ABX BD 20 04 */
    c->pc = 0x9272u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9272u: /* BPL REL 10 25 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9274u ^ 0x9299u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9299u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9274u; } return 1;
case 0x9274u: /* SEC IMP 38 */
    c->pc = 0x9275u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9275u: /* LDA ABX BD 60 04 */
    c->pc = 0x9278u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9278u: /* SBC ZP E5 1F */
    c->pc = 0x927Au;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x927Au: /* STA ZP 85 2E */
    c->pc = 0x927Cu;
    ea = 0x2Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x927Cu: /* LDA ABX BD 40 04 */
    c->pc = 0x927Fu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x927Fu: /* SBC ZP E5 20 */
    c->pc = 0x9281u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9281u: /* STA ZP 85 2F */
    c->pc = 0x9283u;
    ea = 0x2Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9283u: /* LDY ABX BC 00 04 */
    c->pc = 0x9286u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9286u: /* LDA ABY B9 F0 92 */
    c->pc = 0x9289u;
    ea = (uint16_t)(0x92F0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x92F0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9289u: /* STA ZP 85 08 */
    c->pc = 0x928Bu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x928Bu: /* LDA ABY B9 70 93 */
    c->pc = 0x928Eu;
    ea = (uint16_t)(0x9370u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9370u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x928Eu: /* STA ZP 85 09 */
    c->pc = 0x9290u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9290u: /* LDA IMM A9 92 */
    c->pc = 0x9292u;
    v = 0x92u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9292u: /* PHA IMP 48 */
    c->pc = 0x9293u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9293u: /* LDA IMM A9 98 */
    c->pc = 0x9295u;
    v = 0x98u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9295u: /* PHA IMP 48 */
    c->pc = 0x9296u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9296u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x9299u: /* INC ZP E6 2B */
    c->pc = 0x929Bu;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x929Bu: /* LDX ZP A6 2B */
    c->pc = 0x929Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x929Du: /* CPX IMM E0 20 */
    c->pc = 0x929Fu;
    v = 0x20u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x929Fu: /* BNE REL D0 CE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92A1u ^ 0x926Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x926Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x92A1u; } return 1;
case 0x92A1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x92A2u: /* LDX IMM A2 10 */
    c->pc = 0x92A4u;
    v = 0x10u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x92A4u: /* STX ZP 86 2B */
    c->pc = 0x92A6u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x92A6u: /* LDA ABX BD 20 04 */
    c->pc = 0x92A9u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92A9u: /* BPL REL 10 3C */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x92ABu ^ 0x92E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x92ABu; } return 1;
case 0x92ABu: /* SEC IMP 38 */
    c->pc = 0x92ACu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x92ACu: /* LDA ABX BD 60 04 */
    c->pc = 0x92AFu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92AFu: /* SBC ZP E5 1F */
    c->pc = 0x92B1u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x92B1u: /* STA ZP 85 2E */
    c->pc = 0x92B3u;
    ea = 0x2Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92B3u: /* LDA ABX BD 40 04 */
    c->pc = 0x92B6u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92B6u: /* SBC ZP E5 20 */
    c->pc = 0x92B8u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x92B8u: /* STA ZP 85 2F */
    c->pc = 0x92BAu;
    ea = 0x2Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92BAu: /* LDA IMM A9 92 */
    c->pc = 0x92BCu;
    v = 0x92u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92BCu: /* PHA IMP 48 */
    c->pc = 0x92BDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92BDu: /* LDA IMM A9 E6 */
    c->pc = 0x92BFu;
    v = 0xE6u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92BFu: /* PHA IMP 48 */
    c->pc = 0x92C0u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92C0u: /* LDY ABX BC 00 04 */
    c->pc = 0x92C3u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92C3u: /* LDA ABY B9 F0 93 */
    c->pc = 0x92C6u;
    ea = (uint16_t)(0x93F0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x93F0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92C6u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92C8u ^ 0x92D8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92D8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x92C8u; } return 1;
case 0x92C8u: /* LDY ABX BC 00 04 */
    c->pc = 0x92CBu;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92CBu: /* LDA ABY B9 F0 92 */
    c->pc = 0x92CEu;
    ea = (uint16_t)(0x92F0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x92F0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92CEu: /* STA ZP 85 08 */
    c->pc = 0x92D0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D0u: /* LDA ABY B9 70 93 */
    c->pc = 0x92D3u;
    ea = (uint16_t)(0x9370u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9370u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92D3u: /* STA ZP 85 09 */
    c->pc = 0x92D5u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D5u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x92D8u: /* TAY IMP A8 */
    c->pc = 0x92D9u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x92D9u: /* DEY IMP 88 */
    c->pc = 0x92DAu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x92DAu: /* LDA ABY B9 70 94 */
    c->pc = 0x92DDu;
    ea = (uint16_t)(0x9470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92DDu: /* STA ZP 85 08 */
    c->pc = 0x92DFu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92DFu: /* LDA ABY B9 7F 94 */
    c->pc = 0x92E2u;
    ea = (uint16_t)(0x947Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x947Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92E2u: /* STA ZP 85 09 */
    c->pc = 0x92E4u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92E4u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x92E7u: /* INC ZP E6 2B */
    c->pc = 0x92E9u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92E9u: /* LDX ZP A6 2B */
    c->pc = 0x92EBu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x92EBu: /* CPX IMM E0 20 */
    c->pc = 0x92EDu;
    v = 0x20u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x92EDu: /* BNE REL D0 B7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92EFu ^ 0x92A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x92EFu; } return 1;
case 0x92EFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x948Du: /* LDA ABX BD E0 04 */
    c->pc = 0x9490u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9490u: /* BNE REL D0 6F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9492u ^ 0x9501u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9501u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9492u; } return 1;
case 0x9492u: /* STA ABX 9D 80 06 */
    c->pc = 0x9495u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9495u: /* LDA ABX BD 10 01 */
    c->pc = 0x9498u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9498u: /* BNE REL D0 42 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x949Au ^ 0x94DCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x94DCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x949Au; } return 1;
case 0x949Au: /* LDA IMM A9 01 */
    c->pc = 0x949Cu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x949Cu: /* STA ABX 9D 10 01 */
    c->pc = 0x949Fu;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x949Fu: /* LDA IMM A9 14 */
    c->pc = 0x94A1u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94A1u: /* STA ABX 9D E0 04 */
    c->pc = 0x94A4u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94A4u: /* LDA IMM A9 05 */
    c->pc = 0x94A6u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94A6u: /* STA ABX 9D A0 06 */
    c->pc = 0x94A9u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94A9u: /* LDA ZP A5 4A */
    c->pc = 0x94ABu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94ABu: /* AND IMM 29 03 */
    c->pc = 0x94ADu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94ADu: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x94AFu ^ 0x94BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x94BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x94AFu; } return 1;
case 0x94AFu: /* LDA IMM A9 02 */
    c->pc = 0x94B1u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94B1u: /* STA ZP 85 09 */
    c->pc = 0x94B3u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94B3u: /* LDA IMM A9 0C */
    c->pc = 0x94B5u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94B5u: /* STA ZP 85 08 */
    c->pc = 0x94B7u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94B7u: /* JSR ABS 20 97 F1 */
    push(c, 0x94u); push(c, 0xB9u); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0x94BAu: /* LDX ZP A6 2B */
    c->pc = 0x94BCu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x94BCu: /* JMP ABS 4C 01 95 */
    c->pc = 0x9501u; c->cpu_cycles += 3u; return 1;
case 0x94BFu: /* JSR ABS 20 EE EF */
    push(c, 0x94u); push(c, 0xC1u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x94C2u: /* LDA ABS AD 01 DA */
    c->pc = 0x94C5u;
    ea = 0xDA01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94C5u: /* STA ABX 9D 00 06 */
    c->pc = 0x94C8u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94C8u: /* LDA ABS AD 02 DA */
    c->pc = 0x94CBu;
    ea = 0xDA02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94CBu: /* STA ABX 9D 20 06 */
    c->pc = 0x94CEu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94CEu: /* LDA ABS AD 21 DA */
    c->pc = 0x94D1u;
    ea = 0xDA21u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94D1u: /* STA ABX 9D 40 06 */
    c->pc = 0x94D4u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94D4u: /* LDA ABS AD 22 DA */
    c->pc = 0x94D7u;
    ea = 0xDA22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94D7u: /* STA ABX 9D 60 06 */
    c->pc = 0x94DAu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94DAu: /* BNE REL D0 25 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x94DCu ^ 0x9501u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9501u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94DCu; } return 1;
case 0x94DCu: /* LDA IMM A9 00 */
    c->pc = 0x94DEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94DEu: /* STA ABX 9D A0 06 */
    c->pc = 0x94E1u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94E1u: /* STA ABX 9D 10 01 */
    c->pc = 0x94E4u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94E4u: /* LDA ZP A5 4A */
    c->pc = 0x94E6u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94E6u: /* AND IMM 29 01 */
    c->pc = 0x94E8u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94E8u: /* TAY IMP A8 */
    c->pc = 0x94E9u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x94E9u: /* LDA ABY B9 21 95 */
    c->pc = 0x94ECu;
    ea = (uint16_t)(0x9521u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9521u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x94ECu: /* STA ABX 9D E0 04 */
    c->pc = 0x94EFu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94EFu: /* LDA IMM A9 00 */
    c->pc = 0x94F1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94F1u: /* STA ABX 9D 20 06 */
    c->pc = 0x94F4u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94F4u: /* STA ABX 9D 00 06 */
    c->pc = 0x94F7u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94F7u: /* LDA IMM A9 3C */
    c->pc = 0x94F9u;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94F9u: /* STA ABX 9D 60 06 */
    c->pc = 0x94FCu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94FCu: /* LDA IMM A9 FF */
    c->pc = 0x94FEu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94FEu: /* STA ABX 9D 40 06 */
    c->pc = 0x9501u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9501u: /* DEC ABX DE E0 04 */
    c->pc = 0x9504u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9504u: /* LDA ABX BD A0 06 */
    c->pc = 0x9507u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9507u: /* CMP IMM C9 04 */
    c->pc = 0x9509u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9509u: /* BCC REL 90 12 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x950Bu ^ 0x951Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x951Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x950Bu; } return 1;
case 0x950Bu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x950Du ^ 0x9514u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9514u; }
    else { c->cpu_cycles += 2u; c->pc = 0x950Du; } return 1;
case 0x950Du: /* LDA IMM A9 00 */
    c->pc = 0x950Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x950Fu: /* STA ABX 9D A0 06 */
    c->pc = 0x9512u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9512u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9514u ^ 0x951Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x951Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9514u; } return 1;
case 0x9514u: /* CMP IMM C9 07 */
    c->pc = 0x9516u;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9516u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9518u ^ 0x951Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x951Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9518u; } return 1;
case 0x9518u: /* LDA IMM A9 00 */
    c->pc = 0x951Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x951Au: /* STA ABX 9D 80 06 */
    c->pc = 0x951Du;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x951Du: /* JSR ABS 20 BA EE */
    push(c, 0x95u); push(c, 0x1Fu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9520u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9523u: /* LDA ABX BD E0 04 */
    c->pc = 0x9526u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9526u: /* BNE REL D0 26 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9528u ^ 0x954Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x954Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9528u; } return 1;
case 0x9528u: /* LDY IMM A0 0F */
    c->pc = 0x952Au;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x952Au: /* LDA IMM A9 02 */
    c->pc = 0x952Cu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x952Cu: /* STA ZP 85 01 */
    c->pc = 0x952Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x952Eu: /* LDA IMM A9 01 */
    c->pc = 0x9530u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9530u: /* STA ZP 85 00 */
    c->pc = 0x9532u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9532u: /* JSR ABS 20 14 F0 */
    push(c, 0x95u); push(c, 0x34u); c->pc = 0xF014u; c->cpu_cycles += 6u; return 1;
case 0x9535u: /* BCS REL B0 09 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9537u ^ 0x9540u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9540u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9537u; } return 1;
case 0x9537u: /* DEC ZP C6 01 */
    c->pc = 0x9539u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9539u: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x953Bu ^ 0x9549u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9549u; }
    else { c->cpu_cycles += 2u; c->pc = 0x953Bu; } return 1;
case 0x953Bu: /* DEY IMP 88 */
    c->pc = 0x953Cu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x953Cu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x953Eu ^ 0x9532u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9532u; }
    else { c->cpu_cycles += 2u; c->pc = 0x953Eu; } return 1;
case 0x953Eu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9540u ^ 0x9549u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9549u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9540u; } return 1;
case 0x9540u: /* LDA IMM A9 01 */
    c->pc = 0x9542u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9542u: /* JSR ABS 20 59 F1 */
    push(c, 0x95u); push(c, 0x44u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x9545u: /* LDA IMM A9 31 */
    c->pc = 0x9547u;
    v = 0x31u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9547u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9549u ^ 0x954Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x954Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9549u; } return 1;
case 0x9549u: /* LDA IMM A9 62 */
    c->pc = 0x954Bu;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x954Bu: /* STA ABX 9D E0 04 */
    c->pc = 0x954Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x954Eu: /* DEC ABX DE E0 04 */
    c->pc = 0x9551u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9551u: /* JSR ABS 20 AF EF */
    push(c, 0x95u); push(c, 0x53u); c->pc = 0xEFAFu; c->cpu_cycles += 6u; return 1;
case 0x9554u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9555u: /* LDA ABX BD 20 06 */
    c->pc = 0x9558u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9558u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x955Au ^ 0x9562u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9562u; }
    else { c->cpu_cycles += 2u; c->pc = 0x955Au; } return 1;
case 0x955Au: /* LDA IMM A9 03 */
    c->pc = 0x955Cu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x955Cu: /* JSR ABS 20 B5 95 */
    push(c, 0x95u); push(c, 0x5Eu); c->pc = 0x95B5u; c->cpu_cycles += 6u; return 1;
case 0x955Fu: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9561u ^ 0x9562u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9562u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9561u; } return 1;
case 0x9561u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9562u: /* LDA ABS AD 60 04 */
    c->pc = 0x9565u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9565u: /* STA ABX 9D 60 04 */
    c->pc = 0x9568u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9568u: /* LDA ABS AD 40 04 */
    c->pc = 0x956Bu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x956Bu: /* STA ABX 9D 40 04 */
    c->pc = 0x956Eu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x956Eu: /* LDA ABX BD E0 04 */
    c->pc = 0x9571u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9571u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9573u ^ 0x95A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9573u; } return 1;
case 0x9573u: /* LDA IMM A9 03 */
    c->pc = 0x9575u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9575u: /* STA ZP 85 01 */
    c->pc = 0x9577u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9577u: /* LDA IMM A9 04 */
    c->pc = 0x9579u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9579u: /* JSR ABS 20 CF 96 */
    push(c, 0x95u); push(c, 0x7Bu); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0x957Cu: /* BCS REL B0 25 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x957Eu ^ 0x95A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x957Eu; } return 1;
case 0x957Eu: /* LDA IMM A9 04 */
    c->pc = 0x9580u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9580u: /* JSR ABS 20 59 F1 */
    push(c, 0x95u); push(c, 0x82u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x9583u: /* BCS REL B0 1E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9585u ^ 0x95A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9585u; } return 1;
case 0x9585u: /* LDA ABX BD 10 01 */
    c->pc = 0x9588u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9588u: /* AND IMM 29 01 */
    c->pc = 0x958Au;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x958Au: /* TAX IMP AA */
    c->pc = 0x958Bu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x958Bu: /* CLC IMP 18 */
    c->pc = 0x958Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x958Cu: /* LDA ABY B9 70 04 */
    c->pc = 0x958Fu;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x958Fu: /* ADC ABX 7D B1 95 */
    c->pc = 0x9592u;
    ea = (uint16_t)(0x95B1u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x95B1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9592u: /* STA ABY 99 70 04 */
    c->pc = 0x9595u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9595u: /* LDA ABY B9 50 04 */
    c->pc = 0x9598u;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9598u: /* ADC ABX 7D B3 95 */
    c->pc = 0x959Bu;
    ea = (uint16_t)(0x95B3u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x95B3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x959Bu: /* STA ABY 99 50 04 */
    c->pc = 0x959Eu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x959Eu: /* LDX ZP A6 2B */
    c->pc = 0x95A0u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x95A0u: /* INC ABX FE 10 01 */
    c->pc = 0x95A3u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x95A3u: /* LDA IMM A9 4B */
    c->pc = 0x95A5u;
    v = 0x4Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95A5u: /* STA ABX 9D E0 04 */
    c->pc = 0x95A8u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95A8u: /* DEC ABX DE E0 04 */
    c->pc = 0x95ABu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x95ABu: /* LDY IMM A0 17 */
    c->pc = 0x95ADu;
    v = 0x17u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x95ADu: /* JSR ABS 20 8D 99 */
    push(c, 0x95u); push(c, 0xAFu); c->pc = 0x998Du; c->cpu_cycles += 6u; return 1;
case 0x95B0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x95B5u: /* STA ZP 85 00 */
    c->pc = 0x95B7u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x95B7u: /* LDY IMM A0 0F */
    c->pc = 0x95B9u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x95B9u: /* JSR ABS 20 14 F0 */
    push(c, 0x95u); push(c, 0xBBu); c->pc = 0xF014u; c->cpu_cycles += 6u; return 1;
case 0x95BCu: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x95BEu ^ 0x95D0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95D0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x95BEu; } return 1;
case 0x95BEu: /* LDA ABY B9 30 06 */
    c->pc = 0x95C1u;
    ea = (uint16_t)(0x0630u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0630u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95C1u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x95C3u ^ 0x95CDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95CDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x95C3u; } return 1;
case 0x95C3u: /* LSR ABX 5E 20 04 */
    c->pc = 0x95C6u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x95C6u: /* LDA IMM A9 00 */
    c->pc = 0x95C8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95C8u: /* STA ABX 9D F0 00 */
    c->pc = 0x95CBu;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95CBu: /* SEC IMP 38 */
    c->pc = 0x95CCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x95CCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x95CDu: /* DEY IMP 88 */
    c->pc = 0x95CEu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x95CEu: /* BNE REL D0 E9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x95D0u ^ 0x95B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x95D0u; } return 1;
case 0x95D0u: /* LDA IMM A9 01 */
    c->pc = 0x95D2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95D2u: /* STA ABX 9D 20 06 */
    c->pc = 0x95D5u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95D5u: /* CLC IMP 18 */
    c->pc = 0x95D6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x95D6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x95D7u: /* LDA ABX BD 20 06 */
    c->pc = 0x95DAu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95DAu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x95DCu ^ 0x95EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x95DCu; } return 1;
case 0x95DCu: /* SEC IMP 38 */
    c->pc = 0x95DDu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x95DDu: /* LDA ABS AD A0 04 */
    c->pc = 0x95E0u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x95E0u: /* SBC ABX FD A0 04 */
    c->pc = 0x95E3u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95E3u: /* CMP IMM C9 03 */
    c->pc = 0x95E5u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x95E5u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x95E7u ^ 0x95EBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95EBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x95E7u; } return 1;
case 0x95E7u: /* CMP IMM C9 FE */
    c->pc = 0x95E9u;
    v = 0xFEu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x95E9u: /* BCC REL 90 4F */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x95EBu ^ 0x963Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x963Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x95EBu; } return 1;
case 0x95EBu: /* JSR ABS 20 EE EF */
    push(c, 0x95u); push(c, 0xEDu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x95EEu: /* LDA ABX BD E0 04 */
    c->pc = 0x95F1u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95F1u: /* BNE REL D0 44 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x95F3u ^ 0x9637u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9637u; }
    else { c->cpu_cycles += 2u; c->pc = 0x95F3u; } return 1;
case 0x95F3u: /* LDA IMM A9 0B */
    c->pc = 0x95F5u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95F5u: /* STA ABX 9D E0 04 */
    c->pc = 0x95F8u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95F8u: /* LDA ABX BD 10 01 */
    c->pc = 0x95FBu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95FBu: /* PHA IMP 48 */
    c->pc = 0x95FCu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x95FCu: /* AND IMM 29 07 */
    c->pc = 0x95FEu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95FEu: /* TAY IMP A8 */
    c->pc = 0x95FFu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x95FFu: /* LDA IMM A9 00 */
    c->pc = 0x9601u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9601u: /* STA ABX 9D 00 06 */
    c->pc = 0x9604u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9604u: /* STA ABX 9D 40 06 */
    c->pc = 0x9607u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9607u: /* LDA ABY B9 3E 96 */
    c->pc = 0x960Au;
    ea = (uint16_t)(0x963Eu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x963Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x960Au: /* STA ABX 9D 20 06 */
    c->pc = 0x960Du;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x960Du: /* LDA ABY B9 46 96 */
    c->pc = 0x9610u;
    ea = (uint16_t)(0x9646u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9646u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9610u: /* STA ABX 9D 60 06 */
    c->pc = 0x9613u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9613u: /* PLA IMP 68 */
    c->pc = 0x9614u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9614u: /* PHA IMP 48 */
    c->pc = 0x9615u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9615u: /* CMP IMM C9 04 */
    c->pc = 0x9617u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9617u: /* BCC REL 90 15 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9619u ^ 0x962Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x962Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9619u; } return 1;
case 0x9619u: /* CMP IMM C9 0C */
    c->pc = 0x961Bu;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x961Bu: /* BCS REL B0 11 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x961Du ^ 0x962Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x962Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x961Du; } return 1;
case 0x961Du: /* LDA ABX BD 60 06 */
    c->pc = 0x9620u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9620u: /* EOR IMM 49 FF */
    c->pc = 0x9622u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9622u: /* ADC IMM 69 01 */
    c->pc = 0x9624u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9624u: /* STA ABX 9D 60 06 */
    c->pc = 0x9627u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9627u: /* LDA IMM A9 FF */
    c->pc = 0x9629u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9629u: /* ADC IMM 69 00 */
    c->pc = 0x962Bu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x962Bu: /* STA ABX 9D 40 06 */
    c->pc = 0x962Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x962Eu: /* PLA IMP 68 */
    c->pc = 0x962Fu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x962Fu: /* CLC IMP 18 */
    c->pc = 0x9630u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9630u: /* ADC IMM 69 01 */
    c->pc = 0x9632u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9632u: /* AND IMM 29 0F */
    c->pc = 0x9634u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9634u: /* STA ABX 9D 10 01 */
    c->pc = 0x9637u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9637u: /* DEC ABX DE E0 04 */
    c->pc = 0x963Au;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x963Au: /* JSR ABS 20 BA EE */
    push(c, 0x96u); push(c, 0x3Cu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x963Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x964Eu: /* LDA IMM A9 03 */
    c->pc = 0x9650u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9650u: /* STA ZP 85 00 */
    c->pc = 0x9652u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9652u: /* LDY IMM A0 0F */
    c->pc = 0x9654u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9654u: /* JSR ABS 20 14 F0 */
    push(c, 0x96u); push(c, 0x56u); c->pc = 0xF014u; c->cpu_cycles += 6u; return 1;
case 0x9657u: /* BCS REL B0 0D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9659u ^ 0x9666u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9666u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9659u; } return 1;
case 0x9659u: /* LDA IMM A9 00 */
    c->pc = 0x965Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x965Bu: /* STA ABY 99 30 04 */
    c->pc = 0x965Eu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x965Eu: /* LDA IMM A9 FF */
    c->pc = 0x9660u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9660u: /* STA ABY 99 00 01 */
    c->pc = 0x9663u;
    ea = (uint16_t)(0x0100u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9663u: /* DEY IMP 88 */
    c->pc = 0x9664u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9664u: /* BPL REL 10 EE */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9666u ^ 0x9654u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9654u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9666u; } return 1;
case 0x9666u: /* LDA IMM A9 00 */
    c->pc = 0x9668u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9668u: /* STA ABX 9D 20 04 */
    c->pc = 0x966Bu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x966Bu: /* LDA IMM A9 FF */
    c->pc = 0x966Du;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x966Du: /* STA ABX 9D F0 00 */
    c->pc = 0x9670u;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9670u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9671u: /* JSR ABS 20 B3 EF */
    push(c, 0x96u); push(c, 0x73u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0x9674u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9675u: /* LDA ABX BD 20 06 */
    c->pc = 0x9678u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9678u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x967Au ^ 0x9682u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9682u; }
    else { c->cpu_cycles += 2u; c->pc = 0x967Au; } return 1;
case 0x967Au: /* LDA IMM A9 07 */
    c->pc = 0x967Cu;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x967Cu: /* JSR ABS 20 B5 95 */
    push(c, 0x96u); push(c, 0x7Eu); c->pc = 0x95B5u; c->cpu_cycles += 6u; return 1;
case 0x967Fu: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9681u ^ 0x9682u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9682u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9681u; } return 1;
case 0x9681u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9682u: /* LDA ABS AD 60 04 */
    c->pc = 0x9685u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9685u: /* STA ABX 9D 60 04 */
    c->pc = 0x9688u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9688u: /* LDA ABS AD 40 04 */
    c->pc = 0x968Bu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x968Bu: /* STA ABX 9D 40 04 */
    c->pc = 0x968Eu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x968Eu: /* LDA ABX BD E0 04 */
    c->pc = 0x9691u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9691u: /* BNE REL D0 34 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9693u ^ 0x96C7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96C7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9693u; } return 1;
case 0x9693u: /* LDA IMM A9 02 */
    c->pc = 0x9695u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9695u: /* STA ZP 85 01 */
    c->pc = 0x9697u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9697u: /* LDA IMM A9 08 */
    c->pc = 0x9699u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9699u: /* JSR ABS 20 CF 96 */
    push(c, 0x96u); push(c, 0x9Bu); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0x969Cu: /* BCS REL B0 24 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x969Eu ^ 0x96C2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96C2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x969Eu; } return 1;
case 0x969Eu: /* LDA IMM A9 08 */
    c->pc = 0x96A0u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96A0u: /* JSR ABS 20 59 F1 */
    push(c, 0x96u); push(c, 0xA2u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x96A3u: /* BCS REL B0 1D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x96A5u ^ 0x96C2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96C2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96A5u; } return 1;
case 0x96A5u: /* LDA ABX BD 10 01 */
    c->pc = 0x96A8u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96A8u: /* AND IMM 29 01 */
    c->pc = 0x96AAu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96AAu: /* TAX IMP AA */
    c->pc = 0x96ABu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96ABu: /* LDA ABY B9 70 04 */
    c->pc = 0x96AEu;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96AEu: /* ADC ABX 7D CB 96 */
    c->pc = 0x96B1u;
    ea = (uint16_t)(0x96CBu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x96CBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96B1u: /* STA ABY 99 70 04 */
    c->pc = 0x96B4u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96B4u: /* LDA ABY B9 50 04 */
    c->pc = 0x96B7u;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96B7u: /* ADC ABX 7D CD 96 */
    c->pc = 0x96BAu;
    ea = (uint16_t)(0x96CDu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x96CDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96BAu: /* STA ABY 99 50 04 */
    c->pc = 0x96BDu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96BDu: /* LDX ZP A6 2B */
    c->pc = 0x96BFu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x96BFu: /* INC ABX FE 10 01 */
    c->pc = 0x96C2u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x96C2u: /* LDA IMM A9 5D */
    c->pc = 0x96C4u;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96C4u: /* STA ABX 9D E0 04 */
    c->pc = 0x96C7u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96C7u: /* DEC ABX DE E0 04 */
    c->pc = 0x96CAu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x96CAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x96CFu: /* STA ZP 85 00 */
    c->pc = 0x96D1u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96D1u: /* LDY IMM A0 0F */
    c->pc = 0x96D3u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x96D3u: /* JSR ABS 20 14 F0 */
    push(c, 0x96u); push(c, 0xD5u); c->pc = 0xF014u; c->cpu_cycles += 6u; return 1;
case 0x96D6u: /* BCS REL B0 09 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x96D8u ^ 0x96E1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96E1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96D8u; } return 1;
case 0x96D8u: /* DEC ZP C6 01 */
    c->pc = 0x96DAu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x96DAu: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x96DCu ^ 0x96E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96DCu; } return 1;
case 0x96DCu: /* DEY IMP 88 */
    c->pc = 0x96DDu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x96DDu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x96DFu ^ 0x96D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96DFu; } return 1;
case 0x96DFu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x96E1u ^ 0x96E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96E1u; } return 1;
case 0x96E1u: /* CLC IMP 18 */
    c->pc = 0x96E2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x96E2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x96E3u: /* SEC IMP 38 */
    c->pc = 0x96E4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x96E4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x96E5u: /* LDA IMM A9 0B */
    c->pc = 0x96E7u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96E7u: /* STA ZP 85 01 */
    c->pc = 0x96E9u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96E9u: /* LDA IMM A9 08 */
    c->pc = 0x96EBu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96EBu: /* STA ZP 85 02 */
    c->pc = 0x96EDu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96EDu: /* JSR ABS 20 2C F0 */
    push(c, 0x96u); push(c, 0xEFu); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0x96F0u: /* LDA ABX BD E0 04 */
    c->pc = 0x96F3u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96F3u: /* BNE REL D0 1E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x96F5u ^ 0x9713u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9713u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96F5u; } return 1;
case 0x96F5u: /* LDA ZP A5 00 */
    c->pc = 0x96F7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96F7u: /* BEQ REL F0 72 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x96F9u ^ 0x976Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x976Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x96F9u; } return 1;
case 0x96F9u: /* INC ABX FE E0 04 */
    c->pc = 0x96FCu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x96FCu: /* LDA IMM A9 76 */
    c->pc = 0x96FEu;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96FEu: /* STA ABX 9D 60 06 */
    c->pc = 0x9701u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9701u: /* LDA IMM A9 03 */
    c->pc = 0x9703u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9703u: /* STA ABX 9D 40 06 */
    c->pc = 0x9706u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9706u: /* LDA ABX BD 20 04 */
    c->pc = 0x9709u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9709u: /* ORA IMM 09 04 */
    c->pc = 0x970Bu;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x970Bu: /* STA ABX 9D 20 04 */
    c->pc = 0x970Eu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x970Eu: /* JSR ABS 20 EE EF */
    push(c, 0x97u); push(c, 0x10u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x9711u: /* BNE REL D0 58 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9713u ^ 0x976Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x976Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9713u; } return 1;
case 0x9713u: /* CMP IMM C9 03 */
    c->pc = 0x9715u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9715u: /* BEQ REL F0 3B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9717u ^ 0x9752u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9752u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9717u; } return 1;
case 0x9717u: /* LDA ZP A5 00 */
    c->pc = 0x9719u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9719u: /* BEQ REL F0 50 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x971Bu ^ 0x976Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x976Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x971Bu; } return 1;
case 0x971Bu: /* LDA ABX BD E0 04 */
    c->pc = 0x971Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x971Eu: /* CMP IMM C9 02 */
    c->pc = 0x9720u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9720u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9722u ^ 0x9731u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9731u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9722u; } return 1;
case 0x9722u: /* LDA IMM A9 00 */
    c->pc = 0x9724u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9724u: /* STA ABX 9D 60 06 */
    c->pc = 0x9727u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9727u: /* LDA IMM A9 02 */
    c->pc = 0x9729u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9729u: /* STA ABX 9D 40 06 */
    c->pc = 0x972Cu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x972Cu: /* INC ABX FE E0 04 */
    c->pc = 0x972Fu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x972Fu: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9731u ^ 0x976Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x976Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9731u; } return 1;
case 0x9731u: /* LDA IMM A9 C0 */
    c->pc = 0x9733u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9733u: /* STA ABX 9D 60 06 */
    c->pc = 0x9736u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9736u: /* LDA IMM A9 FF */
    c->pc = 0x9738u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9738u: /* STA ABX 9D 40 06 */
    c->pc = 0x973Bu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x973Bu: /* LDA IMM A9 00 */
    c->pc = 0x973Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x973Du: /* STA ABX 9D 00 06 */
    c->pc = 0x9740u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9740u: /* LDA IMM A9 A3 */
    c->pc = 0x9742u;
    v = 0xA3u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9742u: /* STA ABX 9D 20 06 */
    c->pc = 0x9745u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9745u: /* INC ABX FE E0 04 */
    c->pc = 0x9748u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9748u: /* LDA ABX BD 20 04 */
    c->pc = 0x974Bu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x974Bu: /* AND IMM 29 FB */
    c->pc = 0x974Du;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x974Du: /* STA ABX 9D 20 04 */
    c->pc = 0x9750u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9750u: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9752u ^ 0x976Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x976Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9752u; } return 1;
case 0x9752u: /* LDA IMM A9 0C */
    c->pc = 0x9754u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9754u: /* LDA ZP A5 00 */
    c->pc = 0x9756u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9756u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9758u ^ 0x976Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x976Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9758u; } return 1;
case 0x9758u: /* LDA IMM A9 00 */
    c->pc = 0x975Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x975Au: /* STA ABX 9D E0 04 */
    c->pc = 0x975Du;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x975Du: /* STA ABX 9D 20 06 */
    c->pc = 0x9760u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9760u: /* STA ABX 9D 00 06 */
    c->pc = 0x9763u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9763u: /* LDA ABX BD 20 04 */
    c->pc = 0x9766u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9766u: /* ORA IMM 09 04 */
    c->pc = 0x9768u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9768u: /* STA ABX 9D 20 04 */
    c->pc = 0x976Bu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x976Bu: /* JSR ABS 20 BA EE */
    push(c, 0x97u); push(c, 0x6Du); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x976Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x976Fu: /* LDA IMM A9 07 */
    c->pc = 0x9771u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9771u: /* STA ZP 85 00 */
    c->pc = 0x9773u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9773u: /* JMP ABS 4C 52 96 */
    c->pc = 0x9652u; c->cpu_cycles += 3u; return 1;
case 0x9776u: /* LDA ABX BD E0 04 */
    c->pc = 0x9779u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9779u: /* BNE REL D0 48 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x977Bu ^ 0x97C3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97C3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x977Bu; } return 1;
case 0x977Bu: /* LDA IMM A9 0C */
    c->pc = 0x977Du;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x977Du: /* STA ZP 85 02 */
    c->pc = 0x977Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x977Fu: /* LDA ABX BD A0 06 */
    c->pc = 0x9782u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9782u: /* CMP IMM C9 02 */
    c->pc = 0x9784u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9784u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9786u ^ 0x978Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x978Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9786u; } return 1;
case 0x9786u: /* LDA IMM A9 00 */
    c->pc = 0x9788u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9788u: /* STA ABX 9D A0 06 */
    c->pc = 0x978Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x978Bu: /* LDA ABX BD C0 06 */
    c->pc = 0x978Eu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x978Eu: /* CMP IMM C9 14 */
    c->pc = 0x9790u;
    v = 0x14u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9790u: /* BEQ REL F0 41 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9792u ^ 0x97D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9792u; } return 1;
case 0x9792u: /* LDA IMM A9 0B */
    c->pc = 0x9794u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9794u: /* JSR ABS 20 59 F1 */
    push(c, 0x97u); push(c, 0x96u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x9797u: /* LDA ABY B9 30 04 */
    c->pc = 0x979Au;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x979Au: /* ORA IMM 09 04 */
    c->pc = 0x979Cu;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x979Cu: /* EOR IMM 49 40 */
    c->pc = 0x979Eu;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x979Eu: /* STA ABY 99 30 04 */
    c->pc = 0x97A1u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97A1u: /* CLC IMP 18 */
    c->pc = 0x97A2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x97A2u: /* LDA ABX BD A0 04 */
    c->pc = 0x97A5u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97A5u: /* ADC IMM 69 08 */
    c->pc = 0x97A7u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97A7u: /* STA ABX 9D A0 04 */
    c->pc = 0x97AAu;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97AAu: /* LDA IMM A9 01 */
    c->pc = 0x97ACu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97ACu: /* STA ABX 9D 00 06 */
    c->pc = 0x97AFu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97AFu: /* LDA IMM A9 47 */
    c->pc = 0x97B1u;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97B1u: /* STA ABX 9D 20 06 */
    c->pc = 0x97B4u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97B4u: /* LDA IMM A9 03 */
    c->pc = 0x97B6u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97B6u: /* STA ABX 9D E0 06 */
    c->pc = 0x97B9u;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97B9u: /* LDA IMM A9 03 */
    c->pc = 0x97BBu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97BBu: /* STA ABX 9D A0 06 */
    c->pc = 0x97BEu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97BEu: /* INC ABX FE E0 04 */
    c->pc = 0x97C1u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x97C1u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x97C3u ^ 0x97D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97C3u; } return 1;
case 0x97C3u: /* LDA IMM A9 04 */
    c->pc = 0x97C5u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97C5u: /* STA ZP 85 02 */
    c->pc = 0x97C7u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97C7u: /* LDA ABX BD A0 06 */
    c->pc = 0x97CAu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97CAu: /* CMP IMM C9 05 */
    c->pc = 0x97CCu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x97CCu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x97CEu ^ 0x97D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97CEu; } return 1;
case 0x97CEu: /* LDA IMM A9 03 */
    c->pc = 0x97D0u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97D0u: /* STA ABX 9D A0 06 */
    c->pc = 0x97D3u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97D3u: /* LDA ABX BD 20 04 */
    c->pc = 0x97D6u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97D6u: /* AND IMM 29 40 */
    c->pc = 0x97D8u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97D8u: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x97DAu ^ 0x97EAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97EAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x97DAu; } return 1;
case 0x97DAu: /* CLC IMP 18 */
    c->pc = 0x97DBu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x97DBu: /* LDA ABX BD 60 04 */
    c->pc = 0x97DEu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97DEu: /* ADC IMM 69 0C */
    c->pc = 0x97E0u;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97E0u: /* STA ZP 85 08 */
    c->pc = 0x97E2u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97E2u: /* LDA ABX BD 40 04 */
    c->pc = 0x97E5u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97E5u: /* ADC IMM 69 00 */
    c->pc = 0x97E7u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97E7u: /* JMP ABS 4C F7 97 */
    c->pc = 0x97F7u; c->cpu_cycles += 3u; return 1;
case 0x97EAu: /* SEC IMP 38 */
    c->pc = 0x97EBu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x97EBu: /* LDA ABX BD 60 04 */
    c->pc = 0x97EEu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97EEu: /* SBC IMM E9 0C */
    c->pc = 0x97F0u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97F0u: /* STA ZP 85 08 */
    c->pc = 0x97F2u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97F2u: /* LDA ABX BD 40 04 */
    c->pc = 0x97F5u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97F5u: /* SBC IMM E9 00 */
    c->pc = 0x97F7u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97F7u: /* STA ZP 85 09 */
    c->pc = 0x97F9u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97F9u: /* LDA ABX BD A0 04 */
    c->pc = 0x97FCu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97FCu: /* STA ZP 85 0A */
    c->pc = 0x97FEu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97FEu: /* LDA IMM A9 00 */
    c->pc = 0x9800u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9800u: /* STA ZP 85 0B */
    c->pc = 0x9802u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9802u: /* JSR ABS 20 C3 CB */
    push(c, 0x98u); push(c, 0x04u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0x9805u: /* LDX ZP A6 2B */
    c->pc = 0x9807u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9807u: /* LDA ZP A5 00 */
    c->pc = 0x9809u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9809u: /* AND IMM 29 01 */
    c->pc = 0x980Bu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x980Bu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x980Du ^ 0x981Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x981Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x980Du; } return 1;
case 0x980Du: /* CLC IMP 18 */
    c->pc = 0x980Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x980Eu: /* LDA ZP A5 0A */
    c->pc = 0x9810u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9810u: /* ADC ZP 65 02 */
    c->pc = 0x9812u;
    ea = 0x02u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9812u: /* STA ZP 85 0A */
    c->pc = 0x9814u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9814u: /* JSR ABS 20 C3 CB */
    push(c, 0x98u); push(c, 0x16u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0x9817u: /* LDX ZP A6 2B */
    c->pc = 0x9819u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9819u: /* LDA ZP A5 00 */
    c->pc = 0x981Bu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x981Bu: /* AND IMM 29 01 */
    c->pc = 0x981Du;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x981Du: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x981Fu ^ 0x9827u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9827u; }
    else { c->cpu_cycles += 2u; c->pc = 0x981Fu; } return 1;
case 0x981Fu: /* LDA ABX BD 20 04 */
    c->pc = 0x9822u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9822u: /* EOR IMM 49 40 */
    c->pc = 0x9824u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9824u: /* STA ABX 9D 20 04 */
    c->pc = 0x9827u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9827u: /* JSR ABS 20 BA EE */
    push(c, 0x98u); push(c, 0x29u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x982Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x982Bu: /* JSR ABS 20 BA EE */
    push(c, 0x98u); push(c, 0x2Du); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x982Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x982Fu: /* LDA ABX BD A0 06 */
    c->pc = 0x9832u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9832u: /* CMP IMM C9 09 */
    c->pc = 0x9834u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9834u: /* BCS REL B0 18 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9836u ^ 0x984Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x984Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9836u; } return 1;
case 0x9836u: /* LDA IMM A9 01 */
    c->pc = 0x9838u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9838u: /* STA ZP 85 01 */
    c->pc = 0x983Au;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x983Au: /* LDA IMM A9 0D */
    c->pc = 0x983Cu;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x983Cu: /* JSR ABS 20 CF 96 */
    push(c, 0x98u); push(c, 0x3Eu); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0x983Fu: /* BCS REL B0 35 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9841u ^ 0x9876u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9876u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9841u; } return 1;
case 0x9841u: /* LDA IMM A9 09 */
    c->pc = 0x9843u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9843u: /* STA ABX 9D A0 06 */
    c->pc = 0x9846u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9846u: /* LDA IMM A9 00 */
    c->pc = 0x9848u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9848u: /* STA ABX 9D 80 06 */
    c->pc = 0x984Bu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x984Bu: /* JSR ABS 20 82 98 */
    push(c, 0x98u); push(c, 0x4Du); c->pc = 0x9882u; c->cpu_cycles += 6u; return 1;
case 0x984Eu: /* CMP IMM C9 0A */
    c->pc = 0x9850u;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9850u: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9852u ^ 0x9882u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9882u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9852u; } return 1;
case 0x9852u: /* LDA ABX BD 80 06 */
    c->pc = 0x9855u;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9855u: /* BNE REL D0 2B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9857u ^ 0x9882u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9882u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9857u; } return 1;
case 0x9857u: /* LDA IMM A9 02 */
    c->pc = 0x9859u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9859u: /* STA ZP 85 01 */
    c->pc = 0x985Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x985Bu: /* LDA IMM A9 0D */
    c->pc = 0x985Du;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x985Du: /* JSR ABS 20 59 F1 */
    push(c, 0x98u); push(c, 0x5Fu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x9860u: /* BCS REL B0 14 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9862u ^ 0x9876u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9876u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9862u; } return 1;
case 0x9862u: /* LDX ZP A6 01 */
    c->pc = 0x9864u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9864u: /* LDA ABX BD 89 98 */
    c->pc = 0x9867u;
    ea = (uint16_t)(0x9889u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9889u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9867u: /* STA ABY 99 30 06 */
    c->pc = 0x986Au;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x986Au: /* LDA ABX BD 8C 98 */
    c->pc = 0x986Du;
    ea = (uint16_t)(0x988Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x988Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x986Du: /* STA ABY 99 10 06 */
    c->pc = 0x9870u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9870u: /* LDX ZP A6 2B */
    c->pc = 0x9872u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9872u: /* DEC ZP C6 01 */
    c->pc = 0x9874u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9874u: /* BPL REL 10 E5 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9876u ^ 0x985Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x985Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9876u; } return 1;
case 0x9876u: /* LDA ABX BD A0 06 */
    c->pc = 0x9879u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9879u: /* CMP IMM C9 08 */
    c->pc = 0x987Bu;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x987Bu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x987Du ^ 0x9882u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9882u; }
    else { c->cpu_cycles += 2u; c->pc = 0x987Du; } return 1;
case 0x987Du: /* LDA IMM A9 00 */
    c->pc = 0x987Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x987Fu: /* STA ABX 9D A0 06 */
    c->pc = 0x9882u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9882u: /* JSR ABS 20 EE EF */
    push(c, 0x98u); push(c, 0x84u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x9885u: /* JSR ABS 20 B3 EF */
    push(c, 0x98u); push(c, 0x87u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0x9888u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x988Fu: /* LDA IMM A9 00 */
    c->pc = 0x9891u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9891u: /* STA ABX 9D 80 06 */
    c->pc = 0x9894u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9894u: /* LDA IMM A9 03 */
    c->pc = 0x9896u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9896u: /* STA ZP 85 01 */
    c->pc = 0x9898u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9898u: /* LDA IMM A9 04 */
    c->pc = 0x989Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x989Au: /* STA ZP 85 02 */
    c->pc = 0x989Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x989Cu: /* JSR ABS 20 CF F0 */
    push(c, 0x98u); push(c, 0x9Eu); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0x989Fu: /* LDA ABX BD 10 01 */
    c->pc = 0x98A2u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x98A2u: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98A4u ^ 0x98BDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98BDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98A4u; } return 1;
case 0x98A4u: /* LDA ZP A5 00 */
    c->pc = 0x98A6u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98A6u: /* BEQ REL F0 37 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x98A8u ^ 0x98DFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98DFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98A8u; } return 1;
case 0x98A8u: /* LDA IMM A9 3E */
    c->pc = 0x98AAu;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98AAu: /* STA ABX 9D E0 04 */
    c->pc = 0x98ADu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98ADu: /* INC ABX FE A0 06 */
    c->pc = 0x98B0u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x98B0u: /* LDA IMM A9 00 */
    c->pc = 0x98B2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98B2u: /* STA ABX 9D 20 06 */
    c->pc = 0x98B5u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98B5u: /* STA ABX 9D 00 06 */
    c->pc = 0x98B8u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98B8u: /* INC ABX FE 10 01 */
    c->pc = 0x98BBu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x98BBu: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98BDu ^ 0x98DFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98DFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98BDu; } return 1;
case 0x98BDu: /* DEC ABX DE E0 04 */
    c->pc = 0x98C0u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x98C0u: /* BNE REL D0 1D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98C2u ^ 0x98DFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98DFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98C2u; } return 1;
case 0x98C2u: /* DEC ABX DE A0 06 */
    c->pc = 0x98C5u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x98C5u: /* DEC ABX DE 10 01 */
    c->pc = 0x98C8u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x98C8u: /* JSR ABS 20 EE EF */
    push(c, 0x98u); push(c, 0xCAu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x98CBu: /* LDA IMM A9 A2 */
    c->pc = 0x98CDu;
    v = 0xA2u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98CDu: /* STA ABX 9D 20 06 */
    c->pc = 0x98D0u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98D0u: /* LDA IMM A9 01 */
    c->pc = 0x98D2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98D2u: /* STA ABX 9D 00 06 */
    c->pc = 0x98D5u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98D5u: /* LDA IMM A9 E6 */
    c->pc = 0x98D7u;
    v = 0xE6u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98D7u: /* STA ABX 9D 20 06 */
    c->pc = 0x98DAu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98DAu: /* LDA IMM A9 04 */
    c->pc = 0x98DCu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98DCu: /* STA ABX 9D 40 06 */
    c->pc = 0x98DFu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98DFu: /* JSR ABS 20 BA EE */
    push(c, 0x98u); push(c, 0xE1u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x98E2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x98E3u: /* LDA ABX BD 20 06 */
    c->pc = 0x98E6u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x98E6u: /* BNE REL D0 68 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98E8u ^ 0x9950u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9950u; }
    else { c->cpu_cycles += 2u; c->pc = 0x98E8u; } return 1;
case 0x98E8u: /* LDA ABX BD E0 04 */
    c->pc = 0x98EBu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x98EBu: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x98EDu ^ 0x98F9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98F9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x98EDu; } return 1;
case 0x98EDu: /* LDY IMM A0 02 */
    c->pc = 0x98EFu;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x98EFu: /* CMP ABX DD C0 06 */
    c->pc = 0x98F2u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x98F2u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x98F4u ^ 0x98F6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98F6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x98F4u; } return 1;
case 0x98F4u: /* LDY IMM A0 05 */
    c->pc = 0x98F6u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x98F6u: /* JSR ABS 20 8D 99 */
    push(c, 0x98u); push(c, 0xF8u); c->pc = 0x998Du; c->cpu_cycles += 6u; return 1;
case 0x98F9u: /* LDA ABX BD C0 06 */
    c->pc = 0x98FCu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x98FCu: /* STA ABX 9D E0 04 */
    c->pc = 0x98FFu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98FFu: /* LDA ABX BD 40 04 */
    c->pc = 0x9902u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9902u: /* STA ABX 9D 60 06 */
    c->pc = 0x9905u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9905u: /* JSR ABS 20 AF EF */
    push(c, 0x99u); push(c, 0x07u); c->pc = 0xEFAFu; c->cpu_cycles += 6u; return 1;
case 0x9908u: /* LDA ABX BD C0 06 */
    c->pc = 0x990Bu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x990Bu: /* BNE REL D0 42 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x990Du ^ 0x994Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x994Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x990Du; } return 1;
case 0x990Du: /* LDA IMM A9 A0 */
    c->pc = 0x990Fu;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x990Fu: /* STA ABX 9D 20 04 */
    c->pc = 0x9912u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9912u: /* LDA IMM A9 0F */
    c->pc = 0x9914u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9914u: /* STA ABX 9D 00 04 */
    c->pc = 0x9917u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9917u: /* LDX IMM A2 01 */
    c->pc = 0x9919u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9919u: /* STX ZP 86 01 */
    c->pc = 0x991Bu;
    ea = 0x01u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x991Bu: /* LDA ABX BD FF 99 */
    c->pc = 0x991Eu;
    ea = (uint16_t)(0x99FFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x99FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x991Eu: /* JSR ABS 20 10 F0 */
    push(c, 0x99u); push(c, 0x20u); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0x9921u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9923u ^ 0x992Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x992Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9923u; } return 1;
case 0x9923u: /* LDA IMM A9 00 */
    c->pc = 0x9925u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9925u: /* STA ABY 99 30 04 */
    c->pc = 0x9928u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9928u: /* LDA IMM A9 FF */
    c->pc = 0x992Au;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x992Au: /* STA ABY 99 20 01 */
    c->pc = 0x992Du;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x992Du: /* LDX ZP A6 01 */
    c->pc = 0x992Fu;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x992Fu: /* DEX IMP CA */
    c->pc = 0x9930u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9930u: /* BPL REL 10 E7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9932u ^ 0x9919u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9919u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9932u; } return 1;
case 0x9932u: /* LDX ZP A6 2B */
    c->pc = 0x9934u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9934u: /* LDY ABX BC 10 01 */
    c->pc = 0x9937u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9937u: /* LDA IMM A9 00 */
    c->pc = 0x9939u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9939u: /* STA ABY 99 3F 01 */
    c->pc = 0x993Cu;
    ea = (uint16_t)(0x013Fu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x993Cu: /* STA ABY 99 41 01 */
    c->pc = 0x993Fu;
    ea = (uint16_t)(0x0141u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x993Fu: /* STA ABY 99 3E 01 */
    c->pc = 0x9942u;
    ea = (uint16_t)(0x013Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9942u: /* STA ABY 99 42 01 */
    c->pc = 0x9945u;
    ea = (uint16_t)(0x0142u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9945u: /* LDA IMM A9 0E */
    c->pc = 0x9947u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9947u: /* STA ABX 9D 20 06 */
    c->pc = 0x994Au;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x994Au: /* LDA IMM A9 06 */
    c->pc = 0x994Cu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x994Cu: /* STA ABX 9D 00 06 */
    c->pc = 0x994Fu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x994Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9950u: /* DEC ABX DE 00 06 */
    c->pc = 0x9953u;
    ea = (uint16_t)(0x0600u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9953u: /* PHP IMP 08 */
    c->pc = 0x9954u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x9954u: /* LDA ABX BD 20 06 */
    c->pc = 0x9957u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9957u: /* CMP IMM C9 05 */
    c->pc = 0x9959u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9959u: /* BCC REL 90 0D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x995Bu ^ 0x9968u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9968u; }
    else { c->cpu_cycles += 2u; c->pc = 0x995Bu; } return 1;
case 0x995Bu: /* LDY IMM A0 02 */
    c->pc = 0x995Du;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x995Du: /* PLP IMP 28 */
    c->pc = 0x995Eu;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x995Eu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9960u ^ 0x9964u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9964u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9960u; } return 1;
case 0x9960u: /* JSR ABS 20 8D 99 */
    push(c, 0x99u); push(c, 0x62u); c->pc = 0x998Du; c->cpu_cycles += 6u; return 1;
case 0x9963u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9964u: /* LDY IMM A0 05 */
    c->pc = 0x9966u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9966u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9968u ^ 0x9972u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9972u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9968u; } return 1;
case 0x9968u: /* PLP IMP 28 */
    c->pc = 0x9969u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x9969u: /* BNE REL D0 21 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x996Bu ^ 0x998Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x998Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x996Bu; } return 1;
case 0x996Bu: /* LDY ABX BC 20 06 */
    c->pc = 0x996Eu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x996Eu: /* LDA ABY B9 00 9A */
    c->pc = 0x9971u;
    ea = (uint16_t)(0x9A00u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9A00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9971u: /* TAY IMP A8 */
    c->pc = 0x9972u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9972u: /* LDA IMM A9 09 */
    c->pc = 0x9974u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9974u: /* STA ABX 9D 00 06 */
    c->pc = 0x9977u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9977u: /* JSR ABS 20 8D 99 */
    push(c, 0x99u); push(c, 0x79u); c->pc = 0x998Du; c->cpu_cycles += 6u; return 1;
case 0x997Au: /* LDA ABX BD 20 06 */
    c->pc = 0x997Du;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x997Du: /* CMP IMM C9 06 */
    c->pc = 0x997Fu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x997Fu: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9981u ^ 0x9984u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9984u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9981u; } return 1;
case 0x9981u: /* JSR ABS 20 A5 99 */
    push(c, 0x99u); push(c, 0x83u); c->pc = 0x99A5u; c->cpu_cycles += 6u; return 1;
case 0x9984u: /* DEC ABX DE 20 06 */
    c->pc = 0x9987u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9987u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9989u ^ 0x998Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x998Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9989u; } return 1;
case 0x9989u: /* LSR ABX 5E 20 04 */
    c->pc = 0x998Cu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x998Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x998Du: /* LDX IMM A2 02 */
    c->pc = 0x998Fu;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x998Fu: /* LDA ABY B9 F9 99 */
    c->pc = 0x9992u;
    ea = (uint16_t)(0x99F9u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x99F9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9992u: /* STA ABX 9D 5F 03 */
    c->pc = 0x9995u;
    ea = (uint16_t)(0x035Fu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9995u: /* STA ABX 9D 7F 03 */
    c->pc = 0x9998u;
    ea = (uint16_t)(0x037Fu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9998u: /* STA ABX 9D 8F 03 */
    c->pc = 0x999Bu;
    ea = (uint16_t)(0x038Fu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x999Bu: /* STA ABX 9D 9F 03 */
    c->pc = 0x999Eu;
    ea = (uint16_t)(0x039Fu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x999Eu: /* DEY IMP 88 */
    c->pc = 0x999Fu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x999Fu: /* DEX IMP CA */
    c->pc = 0x99A0u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x99A0u: /* BPL REL 10 ED */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x99A2u ^ 0x998Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x998Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x99A2u; } return 1;
case 0x99A2u: /* LDX ZP A6 2B */
    c->pc = 0x99A4u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99A4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x99A5u: /* LDA IMM A9 04 */
    c->pc = 0x99A7u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99A7u: /* STA ZP 85 01 */
    c->pc = 0x99A9u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99A9u: /* LDA ABX BD 20 06 */
    c->pc = 0x99ACu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x99ACu: /* ASL IMP 0A */
    c->pc = 0x99ADu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99ADu: /* ASL IMP 0A */
    c->pc = 0x99AEu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99AEu: /* ADC ABX 7D 20 06 */
    c->pc = 0x99B1u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x99B1u: /* STA ZP 85 02 */
    c->pc = 0x99B3u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99B3u: /* LDA ABX BD 60 06 */
    c->pc = 0x99B6u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x99B6u: /* STA ZP 85 03 */
    c->pc = 0x99B8u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99B8u: /* LDA IMM A9 06 */
    c->pc = 0x99BAu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99BAu: /* JSR ABS 20 59 F1 */
    push(c, 0x99u); push(c, 0xBCu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x99BDu: /* BCS REL B0 32 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x99BFu ^ 0x99F1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99F1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99BFu; } return 1;
case 0x99BFu: /* LDX ZP A6 02 */
    c->pc = 0x99C1u;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99C1u: /* LDA ABX BD 25 9A */
    c->pc = 0x99C4u;
    ea = (uint16_t)(0x9A25u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9A25u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x99C4u: /* STA ABY 99 B0 04 */
    c->pc = 0x99C7u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99C7u: /* LDA ZP A5 03 */
    c->pc = 0x99C9u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99C9u: /* STA ABY 99 50 04 */
    c->pc = 0x99CCu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99CCu: /* CMP IMM C9 09 */
    c->pc = 0x99CEu;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x99CEu: /* PHP IMP 08 */
    c->pc = 0x99CFu;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x99CFu: /* LDA ABX BD 0C 9A */
    c->pc = 0x99D2u;
    ea = (uint16_t)(0x9A0Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9A0Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x99D2u: /* PLP IMP 28 */
    c->pc = 0x99D3u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x99D3u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x99D5u ^ 0x99D8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99D8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99D5u; } return 1;
case 0x99D5u: /* SEC IMP 38 */
    c->pc = 0x99D6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x99D6u: /* SBC IMM E9 20 */
    c->pc = 0x99D8u;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x99D8u: /* STA ABY 99 70 04 */
    c->pc = 0x99DBu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99DBu: /* SEC IMP 38 */
    c->pc = 0x99DCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x99DCu: /* SBC ZP E5 1F */
    c->pc = 0x99DEu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x99DEu: /* LDA ZP A5 03 */
    c->pc = 0x99E0u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99E0u: /* SBC ZP E5 20 */
    c->pc = 0x99E2u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x99E2u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x99E4u ^ 0x99E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99E4u; } return 1;
case 0x99E4u: /* LDA IMM A9 00 */
    c->pc = 0x99E6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99E6u: /* STA ABY 99 30 04 */
    c->pc = 0x99E9u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99E9u: /* LDX ZP A6 2B */
    c->pc = 0x99EBu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99EBu: /* INC ZP E6 02 */
    c->pc = 0x99EDu;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x99EDu: /* DEC ZP C6 01 */
    c->pc = 0x99EFu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x99EFu: /* BPL REL 10 C7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x99F1u ^ 0x99B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99F1u; } return 1;
case 0x99F1u: /* LDX ZP A6 2B */
    c->pc = 0x99F3u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99F3u: /* LDA IMM A9 2B */
    c->pc = 0x99F5u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99F5u: /* JSR ABS 20 51 C0 */
    push(c, 0x99u); push(c, 0xF7u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x99F8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A43u: /* LDA ABX BD E0 04 */
    c->pc = 0x9A46u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A46u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A48u ^ 0x9A52u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A52u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A48u; } return 1;
case 0x9A48u: /* LDA IMM A9 01 */
    c->pc = 0x9A4Au;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A4Au: /* STA ABX 9D A0 06 */
    c->pc = 0x9A4Du;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A4Du: /* LDA IMM A9 70 */
    c->pc = 0x9A4Fu;
    v = 0x70u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A4Fu: /* STA ABX 9D E0 04 */
    c->pc = 0x9A52u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A52u: /* LDA ABX BD A0 06 */
    c->pc = 0x9A55u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A55u: /* CMP IMM C9 04 */
    c->pc = 0x9A57u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A57u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9A59u ^ 0x9A5Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A5Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A59u; } return 1;
case 0x9A59u: /* LDA IMM A9 00 */
    c->pc = 0x9A5Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A5Bu: /* STA ABX 9D 80 06 */
    c->pc = 0x9A5Eu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A5Eu: /* DEC ABX DE E0 04 */
    c->pc = 0x9A61u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9A61u: /* JSR ABS 20 AF EF */
    push(c, 0x9Au); push(c, 0x63u); c->pc = 0xEFAFu; c->cpu_cycles += 6u; return 1;
case 0x9A64u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A65u: /* LDY IMM A0 02 */
    c->pc = 0x9A67u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9A67u: /* JSR ABS 20 8D 99 */
    push(c, 0x9Au); push(c, 0x69u); c->pc = 0x998Du; c->cpu_cycles += 6u; return 1;
case 0x9A6Au: /* LDA IMM A9 FF */
    c->pc = 0x9A6Cu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A6Cu: /* STA ABX 9D 20 01 */
    c->pc = 0x9A6Fu;
    ea = (uint16_t)(0x0120u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A6Fu: /* LSR ABX 5E 20 04 */
    c->pc = 0x9A72u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9A72u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A73u: /* LDA IMM A9 14 */
    c->pc = 0x9A75u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A75u: /* STA ABX 9D 50 01 */
    c->pc = 0x9A78u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A78u: /* SEC IMP 38 */
    c->pc = 0x9A79u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A79u: /* LDA ABX BD 40 04 */
    c->pc = 0x9A7Cu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A7Cu: /* SBC IMM E9 04 */
    c->pc = 0x9A7Eu;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A7Eu: /* LDY ZP A4 2A */
    c->pc = 0x9A80u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9A80u: /* CPY IMM C0 07 */
    c->pc = 0x9A82u;
    v = 0x07u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A82u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9A84u ^ 0x9A8Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A8Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A84u; } return 1;
case 0x9A84u: /* SEC IMP 38 */
    c->pc = 0x9A85u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A85u: /* LDA ABX BD 40 04 */
    c->pc = 0x9A88u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A88u: /* SBC IMM E9 1B */
    c->pc = 0x9A8Au;
    v = 0x1Bu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A8Au: /* STA ZP 85 00 */
    c->pc = 0x9A8Cu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A8Cu: /* TAY IMP A8 */
    c->pc = 0x9A8Du;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9A8Du: /* LDA ABY B9 25 9B */
    c->pc = 0x9A90u;
    ea = (uint16_t)(0x9B25u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B25u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A90u: /* STA ZP 85 01 */
    c->pc = 0x9A92u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A92u: /* CLC IMP 18 */
    c->pc = 0x9A93u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A93u: /* ADC ABX 7D E0 04 */
    c->pc = 0x9A96u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A96u: /* TAY IMP A8 */
    c->pc = 0x9A97u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9A97u: /* LDA ZP A5 00 */
    c->pc = 0x9A99u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A99u: /* CMP IMM C9 03 */
    c->pc = 0x9A9Bu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A9Bu: /* BCS REL B0 0B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A9Du ^ 0x9AA8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AA8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A9Du; } return 1;
case 0x9A9Du: /* LDA ABY B9 43 9B */
    c->pc = 0x9AA0u;
    ea = (uint16_t)(0x9B43u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B43u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AA0u: /* STA ZP 85 02 */
    c->pc = 0x9AA2u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AA2u: /* LDA ABY B9 44 9B */
    c->pc = 0x9AA5u;
    ea = (uint16_t)(0x9B44u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B44u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AA5u: /* JMP ABS 4C B0 9A */
    c->pc = 0x9AB0u; c->cpu_cycles += 3u; return 1;
case 0x9AA8u: /* LDA ABY B9 BB 9B */
    c->pc = 0x9AABu;
    ea = (uint16_t)(0x9BBBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9BBBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AABu: /* STA ZP 85 02 */
    c->pc = 0x9AADu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AADu: /* LDA ABY B9 BC 9B */
    c->pc = 0x9AB0u;
    ea = (uint16_t)(0x9BBCu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9BBCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AB0u: /* AND IMM 29 01 */
    c->pc = 0x9AB2u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AB2u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9AB4u ^ 0x9ABDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9ABDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9AB4u; } return 1;
case 0x9AB4u: /* LDA ABX BD A0 04 */
    c->pc = 0x9AB7u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AB7u: /* CMP ZP C5 02 */
    c->pc = 0x9AB9u;
    ea = 0x02u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x9AB9u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9ABBu ^ 0x9AC4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AC4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9ABBu; } return 1;
case 0x9ABBu: /* BNE REL D0 2A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9ABDu ^ 0x9AE7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AE7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9ABDu; } return 1;
case 0x9ABDu: /* LDA ABX BD 60 04 */
    c->pc = 0x9AC0u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AC0u: /* CMP ZP C5 02 */
    c->pc = 0x9AC2u;
    ea = 0x02u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x9AC2u: /* BNE REL D0 23 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9AC4u ^ 0x9AE7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AE7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9AC4u; } return 1;
case 0x9AC4u: /* LDA IMM A9 00 */
    c->pc = 0x9AC6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AC6u: /* STA ABX 9D 80 04 */
    c->pc = 0x9AC9u;
    ea = (uint16_t)(0x0480u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9AC9u: /* STA ABX 9D C0 04 */
    c->pc = 0x9ACCu;
    ea = (uint16_t)(0x04C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9ACCu: /* INY IMP C8 */
    c->pc = 0x9ACDu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9ACDu: /* INY IMP C8 */
    c->pc = 0x9ACEu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9ACEu: /* INC ABX FE E0 04 */
    c->pc = 0x9AD1u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9AD1u: /* INC ABX FE E0 04 */
    c->pc = 0x9AD4u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9AD4u: /* LDA ABX BD E0 04 */
    c->pc = 0x9AD7u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AD7u: /* LDX ZP A6 00 */
    c->pc = 0x9AD9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9AD9u: /* CMP ABX DD 3C 9B */
    c->pc = 0x9ADCu;
    ea = (uint16_t)(0x9B3Cu + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x9B3Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9ADCu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9ADEu ^ 0x9AE7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AE7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9ADEu; } return 1;
case 0x9ADEu: /* LDX ZP A6 2B */
    c->pc = 0x9AE0u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9AE0u: /* LDA IMM A9 00 */
    c->pc = 0x9AE2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AE2u: /* STA ABX 9D E0 04 */
    c->pc = 0x9AE5u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9AE5u: /* LDY ZP A4 01 */
    c->pc = 0x9AE7u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9AE7u: /* LDX ZP A6 00 */
    c->pc = 0x9AE9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9AE9u: /* CPX IMM E0 03 */
    c->pc = 0x9AEBu;
    v = 0x03u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9AEBu: /* BCS REL B0 06 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9AEDu ^ 0x9AF3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AF3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9AEDu; } return 1;
case 0x9AEDu: /* LDA ABY B9 44 9B */
    c->pc = 0x9AF0u;
    ea = (uint16_t)(0x9B44u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B44u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AF0u: /* JMP ABS 4C F6 9A */
    c->pc = 0x9AF6u; c->cpu_cycles += 3u; return 1;
case 0x9AF3u: /* LDA ABY B9 BC 9B */
    c->pc = 0x9AF6u;
    ea = (uint16_t)(0x9BBCu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9BBCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AF6u: /* LDX ZP A6 2B */
    c->pc = 0x9AF8u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9AF8u: /* TAY IMP A8 */
    c->pc = 0x9AF9u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9AF9u: /* LDA ABY B9 2C 9B */
    c->pc = 0x9AFCu;
    ea = (uint16_t)(0x9B2Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B2Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AFCu: /* STA ABX 9D 60 06 */
    c->pc = 0x9AFFu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9AFFu: /* LDA ABY B9 30 9B */
    c->pc = 0x9B02u;
    ea = (uint16_t)(0x9B30u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B30u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B02u: /* STA ABX 9D 40 06 */
    c->pc = 0x9B05u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B05u: /* LDA ABY B9 34 9B */
    c->pc = 0x9B08u;
    ea = (uint16_t)(0x9B34u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B34u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B08u: /* STA ABX 9D 20 06 */
    c->pc = 0x9B0Bu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B0Bu: /* LDA ABY B9 38 9B */
    c->pc = 0x9B0Eu;
    ea = (uint16_t)(0x9B38u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B38u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B0Eu: /* STA ABX 9D 20 04 */
    c->pc = 0x9B11u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B11u: /* JSR ABS 20 BA EE */
    push(c, 0x9Bu); push(c, 0x13u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9B14u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9B16u ^ 0x9B1Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B1Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B16u; } return 1;
case 0x9B16u: /* LDA IMM A9 00 */
    c->pc = 0x9B18u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B18u: /* STA ABX 9D 50 01 */
    c->pc = 0x9B1Bu;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B1Bu: /* SEC IMP 38 */
    c->pc = 0x9B1Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9B1Cu: /* LDA ABX BD A0 04 */
    c->pc = 0x9B1Fu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B1Fu: /* SBC IMM E9 04 */
    c->pc = 0x9B21u;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B21u: /* STA ABX 9D 60 01 */
    c->pc = 0x9B24u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B24u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9C5Bu: /* LDA IMM A9 18 */
    c->pc = 0x9C5Du;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C5Du: /* STA ABX 9D 50 01 */
    c->pc = 0x9C60u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C60u: /* LDA ABX BD 20 04 */
    c->pc = 0x9C63u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C63u: /* AND IMM 29 04 */
    c->pc = 0x9C65u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C65u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9C67u ^ 0x9C74u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9C74u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9C67u; } return 1;
case 0x9C67u: /* LDA ABX BD E0 04 */
    c->pc = 0x9C6Au;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C6Au: /* CMP IMM C9 06 */
    c->pc = 0x9C6Cu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C6Cu: /* BCS REL B0 06 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9C6Eu ^ 0x9C74u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9C74u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9C6Eu; } return 1;
case 0x9C6Eu: /* JSR ABS 20 B3 EF */
    push(c, 0x9Cu); push(c, 0x70u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0x9C71u: /* JMP ABS 4C 7F 9C */
    c->pc = 0x9C7Fu; c->cpu_cycles += 3u; return 1;
case 0x9C74u: /* LDA ABX BD 20 04 */
    c->pc = 0x9C77u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C77u: /* ORA IMM 09 04 */
    c->pc = 0x9C79u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C79u: /* STA ABX 9D 20 04 */
    c->pc = 0x9C7Cu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C7Cu: /* JSR ABS 20 BA EE */
    push(c, 0x9Cu); push(c, 0x7Eu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9C7Fu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9C81u ^ 0x9C86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9C86u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9C81u; } return 1;
case 0x9C81u: /* LDA IMM A9 00 */
    c->pc = 0x9C83u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C83u: /* STA ABX 9D 50 01 */
    c->pc = 0x9C86u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C86u: /* SEC IMP 38 */
    c->pc = 0x9C87u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9C87u: /* LDA ABX BD A0 04 */
    c->pc = 0x9C8Au;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C8Au: /* SBC IMM E9 08 */
    c->pc = 0x9C8Cu;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C8Cu: /* STA ABX 9D 60 01 */
    c->pc = 0x9C8Fu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C8Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9C90u: /* SEC IMP 38 */
    c->pc = 0x9C91u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9C91u: /* LDA ABX BD 40 04 */
    c->pc = 0x9C94u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C94u: /* SBC IMM E9 03 */
    c->pc = 0x9C96u;
    v = 0x03u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C96u: /* TAY IMP A8 */
    c->pc = 0x9C97u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9C97u: /* LDA ABY B9 DE 9C */
    c->pc = 0x9C9Au;
    ea = (uint16_t)(0x9CDEu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CDEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C9Au: /* STA ZP 85 02 */
    c->pc = 0x9C9Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C9Cu: /* LDA ABY B9 EE 9C */
    c->pc = 0x9C9Fu;
    ea = (uint16_t)(0x9CEEu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CEEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C9Fu: /* STA ZP 85 01 */
    c->pc = 0x9CA1u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9CA1u: /* LDA IMM A9 15 */
    c->pc = 0x9CA3u;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CA3u: /* JSR ABS 20 59 F1 */
    push(c, 0x9Cu); push(c, 0xA5u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x9CA6u: /* LDX ZP A6 01 */
    c->pc = 0x9CA8u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9CA8u: /* LDA ABX BD FE 9C */
    c->pc = 0x9CABu;
    ea = (uint16_t)(0x9CFEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CFEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CABu: /* STA ABY 99 30 04 */
    c->pc = 0x9CAEu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9CAEu: /* AND IMM 29 40 */
    c->pc = 0x9CB0u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CB0u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9CB2u ^ 0x9CB6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9CB6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9CB2u; } return 1;
case 0x9CB2u: /* LDA IMM A9 FC */
    c->pc = 0x9CB4u;
    v = 0xFCu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CB4u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9CB6u ^ 0x9CB8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9CB8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9CB6u; } return 1;
case 0x9CB6u: /* LDA IMM A9 04 */
    c->pc = 0x9CB8u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CB8u: /* STA ABY 99 70 04 */
    c->pc = 0x9CBBu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9CBBu: /* LDA ABX BD 32 9D */
    c->pc = 0x9CBEu;
    ea = (uint16_t)(0x9D32u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D32u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CBEu: /* STA ABY 99 B0 04 */
    c->pc = 0x9CC1u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9CC1u: /* LDA ABX BD 66 9D */
    c->pc = 0x9CC4u;
    ea = (uint16_t)(0x9D66u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D66u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CC4u: /* STA ABY 99 20 01 */
    c->pc = 0x9CC7u;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9CC7u: /* LDA ABX BD 9A 9D */
    c->pc = 0x9CCAu;
    ea = (uint16_t)(0x9D9Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D9Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CCAu: /* STA ABY 99 F0 04 */
    c->pc = 0x9CCDu;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9CCDu: /* LDX ZP A6 2B */
    c->pc = 0x9CCFu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9CCFu: /* INC ZP E6 01 */
    c->pc = 0x9CD1u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9CD1u: /* DEC ZP C6 02 */
    c->pc = 0x9CD3u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9CD3u: /* BNE REL D0 CC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9CD5u ^ 0x9CA1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9CA1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9CD5u; } return 1;
case 0x9CD5u: /* LSR ABX 5E 20 04 */
    c->pc = 0x9CD8u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9CD8u: /* LDA IMM A9 00 */
    c->pc = 0x9CDAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CDAu: /* STA ABX 9D F0 00 */
    c->pc = 0x9CDDu;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9CDDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9DCEu: /* LDA ABX BD E0 04 */
    c->pc = 0x9DD1u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DD1u: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9DD3u ^ 0x9DE6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9DE6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DD3u; } return 1;
case 0x9DD3u: /* DEC ABX DE E0 04 */
    c->pc = 0x9DD6u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9DD6u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9DD8u ^ 0x9DD9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9DD9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DD8u; } return 1;
case 0x9DD8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9DD9u: /* LDA ABX BD 20 04 */
    c->pc = 0x9DDCu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DDCu: /* AND IMM 29 DF */
    c->pc = 0x9DDEu;
    v = 0xDFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DDEu: /* STA ABX 9D 20 04 */
    c->pc = 0x9DE1u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9DE1u: /* LDA IMM A9 27 */
    c->pc = 0x9DE3u;
    v = 0x27u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DE3u: /* JSR ABS 20 51 C0 */
    push(c, 0x9Du); push(c, 0xE5u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9DE6u: /* LDA ABX BD 20 04 */
    c->pc = 0x9DE9u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DE9u: /* AND IMM 29 20 */
    c->pc = 0x9DEBu;
    v = 0x20u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DEBu: /* BNE REL D0 5E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9DEDu ^ 0x9E4Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E4Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DEDu; } return 1;
case 0x9DEDu: /* LDA ABX BD 20 04 */
    c->pc = 0x9DF0u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DF0u: /* AND IMM 29 40 */
    c->pc = 0x9DF2u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DF2u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9DF4u ^ 0x9DFEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9DFEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DF4u; } return 1;
case 0x9DF4u: /* LDA ABX BD 60 04 */
    c->pc = 0x9DF7u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DF7u: /* CMP ABX DD 10 01 */
    c->pc = 0x9DFAu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DFAu: /* BCS REL B0 1A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9DFCu ^ 0x9E16u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E16u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DFCu; } return 1;
case 0x9DFCu: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9DFEu ^ 0x9E06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E06u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DFEu; } return 1;
case 0x9DFEu: /* LDA ABX BD 60 04 */
    c->pc = 0x9E01u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E01u: /* CMP ABX DD 10 01 */
    c->pc = 0x9E04u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E04u: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9E06u ^ 0x9E16u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E16u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E06u; } return 1;
case 0x9E06u: /* LDA ABX BD 10 01 */
    c->pc = 0x9E09u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E09u: /* STA ABX 9D 60 04 */
    c->pc = 0x9E0Cu;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9E0Cu: /* LDA ABX BD 20 04 */
    c->pc = 0x9E0Fu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E0Fu: /* ORA IMM 09 20 */
    c->pc = 0x9E11u;
    v = 0x20u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E11u: /* STA ABX 9D 20 04 */
    c->pc = 0x9E14u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9E14u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9E16u ^ 0x9E4Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E4Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E16u; } return 1;
case 0x9E16u: /* LDA ABX BD 40 04 */
    c->pc = 0x9E19u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E19u: /* STA ZP 85 09 */
    c->pc = 0x9E1Bu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E1Bu: /* LDA ABX BD 60 04 */
    c->pc = 0x9E1Eu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E1Eu: /* STA ZP 85 08 */
    c->pc = 0x9E20u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E20u: /* LDA ABX BD A0 04 */
    c->pc = 0x9E23u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E23u: /* AND IMM 29 F0 */
    c->pc = 0x9E25u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E25u: /* STA ZP 85 0A */
    c->pc = 0x9E27u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E27u: /* JSR ABS 20 EF C8 */
    push(c, 0x9Eu); push(c, 0x29u); c->pc = 0xC8EFu; c->cpu_cycles += 6u; return 1;
case 0x9E2Au: /* LDY IMM A0 74 */
    c->pc = 0x9E2Cu;
    v = 0x74u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9E2Cu: /* LDA ABX BD BC 03 */
    c->pc = 0x9E2Fu;
    ea = (uint16_t)(0x03BCu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03BCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E2Fu: /* AND IMM 29 01 */
    c->pc = 0x9E31u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E31u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9E33u ^ 0x9E35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E35u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E33u; } return 1;
case 0x9E33u: /* LDY IMM A0 76 */
    c->pc = 0x9E35u;
    v = 0x76u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9E35u: /* TYA IMP 98 */
    c->pc = 0x9E36u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E36u: /* STA ABX 9D C2 03 */
    c->pc = 0x9E39u;
    ea = (uint16_t)(0x03C2u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9E39u: /* INC ZP E6 51 */
    c->pc = 0x9E3Bu;
    ea = 0x51u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9E3Bu: /* LDX ZP A6 2B */
    c->pc = 0x9E3Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9E3Du: /* JSR ABS 20 BA EE */
    push(c, 0x9Eu); push(c, 0x3Fu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9E40u: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9E42u ^ 0x9E4Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E4Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E42u; } return 1;
case 0x9E42u: /* LDA ABX BD 20 04 */
    c->pc = 0x9E45u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E45u: /* ASL IMP 0A */
    c->pc = 0x9E46u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E46u: /* ORA IMM 09 20 */
    c->pc = 0x9E48u;
    v = 0x20u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E48u: /* STA ABX 9D 20 04 */
    c->pc = 0x9E4Bu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9E4Bu: /* LDA ZP A5 4B */
    c->pc = 0x9E4Du;
    ea = 0x4Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E4Du: /* BNE REL D0 31 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9E4Fu ^ 0x9E80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E80u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E4Fu; } return 1;
case 0x9E4Fu: /* SEC IMP 38 */
    c->pc = 0x9E50u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9E50u: /* LDA ABX BD A0 04 */
    c->pc = 0x9E53u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E53u: /* SBC ABS ED A0 04 */
    c->pc = 0x9E56u;
    ea = 0x04A0u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x9E56u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9E58u ^ 0x9E5Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E5Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E58u; } return 1;
case 0x9E58u: /* EOR IMM 49 FF */
    c->pc = 0x9E5Au;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E5Au: /* ADC IMM 69 01 */
    c->pc = 0x9E5Cu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9E5Cu: /* CMP IMM C9 10 */
    c->pc = 0x9E5Eu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9E5Eu: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9E60u ^ 0x9E80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E80u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E60u; } return 1;
case 0x9E60u: /* LDA ABX BD 20 04 */
    c->pc = 0x9E63u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E63u: /* AND IMM 29 40 */
    c->pc = 0x9E65u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E65u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9E67u ^ 0x9E71u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E71u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E67u; } return 1;
case 0x9E67u: /* LDA ABX BD 60 04 */
    c->pc = 0x9E6Au;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E6Au: /* CMP ABS CD 60 04 */
    c->pc = 0x9E6Du;
    ea = 0x0460u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u; return 1;
case 0x9E6Du: /* BCS REL B0 11 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9E6Fu ^ 0x9E80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E80u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E6Fu; } return 1;
case 0x9E6Fu: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9E71u ^ 0x9E79u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E79u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E71u; } return 1;
case 0x9E71u: /* LDA ABX BD 60 04 */
    c->pc = 0x9E74u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E74u: /* CMP ABS CD 60 04 */
    c->pc = 0x9E77u;
    ea = 0x0460u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u; return 1;
case 0x9E77u: /* BCC REL 90 07 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9E79u ^ 0x9E80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E80u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E79u; } return 1;
case 0x9E79u: /* LDA IMM A9 00 */
    c->pc = 0x9E7Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E7Bu: /* STA ZP 85 2C */
    c->pc = 0x9E7Du;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E7Du: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0x9E80u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9E81u: /* LDA ABX BD E0 04 */
    c->pc = 0x9E84u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E84u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9E86u ^ 0x9E9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E86u; } return 1;
case 0x9E86u: /* LDA ZP A5 4A */
    c->pc = 0x9E88u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E88u: /* EOR IMM 49 01 */
    c->pc = 0x9E8Au;
    v = 0x01u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E8Au: /* STA ZP 85 4A */
    c->pc = 0x9E8Cu;
    ea = 0x4Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E8Cu: /* AND IMM 29 01 */
    c->pc = 0x9E8Eu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E8Eu: /* TAY IMP A8 */
    c->pc = 0x9E8Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9E8Fu: /* LDA ABY B9 20 9F */
    c->pc = 0x9E92u;
    ea = (uint16_t)(0x9F20u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9F20u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9E92u: /* STA ABX 9D E0 04 */
    c->pc = 0x9E95u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9E95u: /* LDA IMM A9 8B */
    c->pc = 0x9E97u;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E97u: /* STA ABX 9D 20 04 */
    c->pc = 0x9E9Au;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9E9Au: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9E9Cu ^ 0x9EAFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EAFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E9Cu; } return 1;
case 0x9E9Cu: /* CMP IMM C9 01 */
    c->pc = 0x9E9Eu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9E9Eu: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9EA0u ^ 0x9EB3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EB3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EA0u; } return 1;
case 0x9EA0u: /* CMP IMM C9 FF */
    c->pc = 0x9EA2u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9EA2u: /* BEQ REL F0 4B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9EA4u ^ 0x9EEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EA4u; } return 1;
case 0x9EA4u: /* DEC ABX DE E0 04 */
    c->pc = 0x9EA7u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9EA7u: /* LDA IMM A9 00 */
    c->pc = 0x9EA9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EA9u: /* STA ABX 9D A0 06 */
    c->pc = 0x9EACu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EACu: /* STA ABX 9D 80 06 */
    c->pc = 0x9EAFu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EAFu: /* JSR ABS 20 B3 EF */
    push(c, 0x9Eu); push(c, 0xB1u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0x9EB2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9EB3u: /* LDA ABX BD 20 04 */
    c->pc = 0x9EB6u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9EB6u: /* AND IMM 29 F7 */
    c->pc = 0x9EB8u;
    v = 0xF7u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EB8u: /* STA ABX 9D 20 04 */
    c->pc = 0x9EBBu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EBBu: /* LDA ABX BD A0 06 */
    c->pc = 0x9EBEu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9EBEu: /* CMP IMM C9 08 */
    c->pc = 0x9EC0u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9EC0u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9EC2u ^ 0x9ED2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9ED2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EC2u; } return 1;
case 0x9EC2u: /* LDA IMM A9 05 */
    c->pc = 0x9EC4u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EC4u: /* STA ABX 9D A0 06 */
    c->pc = 0x9EC7u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EC7u: /* LDA IMM A9 00 */
    c->pc = 0x9EC9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EC9u: /* STA ZP 85 09 */
    c->pc = 0x9ECBu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9ECBu: /* LDA IMM A9 83 */
    c->pc = 0x9ECDu;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9ECDu: /* STA ZP 85 08 */
    c->pc = 0x9ECFu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9ECFu: /* JSR ABS 20 97 F1 */
    push(c, 0x9Eu); push(c, 0xD1u); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0x9ED2u: /* JSR ABS 20 BA EE */
    push(c, 0x9Eu); push(c, 0xD4u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9ED5u: /* LDA ZP A5 01 */
    c->pc = 0x9ED7u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9ED7u: /* BEQ REL F0 15 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9ED9u ^ 0x9EEEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EEEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9ED9u; } return 1;
case 0x9ED9u: /* LDA IMM A9 00 */
    c->pc = 0x9EDBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EDBu: /* STA ABX 9D 00 06 */
    c->pc = 0x9EDEu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EDEu: /* STA ABX 9D 20 06 */
    c->pc = 0x9EE1u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EE1u: /* STA ABX 9D 60 06 */
    c->pc = 0x9EE4u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EE4u: /* LDA IMM A9 02 */
    c->pc = 0x9EE6u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EE6u: /* STA ABX 9D 40 06 */
    c->pc = 0x9EE9u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EE9u: /* LDA IMM A9 FF */
    c->pc = 0x9EEBu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EEBu: /* STA ABX 9D E0 04 */
    c->pc = 0x9EEEu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EEEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9EEFu: /* LDA ABX BD A0 06 */
    c->pc = 0x9EF2u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9EF2u: /* CMP IMM C9 08 */
    c->pc = 0x9EF4u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9EF4u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9EF6u ^ 0x9EFBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EFBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EF6u; } return 1;
case 0x9EF6u: /* LDA IMM A9 05 */
    c->pc = 0x9EF8u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EF8u: /* STA ABX 9D A0 06 */
    c->pc = 0x9EFBu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9EFBu: /* LDA IMM A9 04 */
    c->pc = 0x9EFDu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EFDu: /* STA ZP 85 01 */
    c->pc = 0x9EFFu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9EFFu: /* LDA IMM A9 08 */
    c->pc = 0x9F01u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F01u: /* STA ZP 85 02 */
    c->pc = 0x9F03u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F03u: /* JSR ABS 20 2C F0 */
    push(c, 0x9Fu); push(c, 0x05u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0x9F06u: /* LDA ZP A5 00 */
    c->pc = 0x9F08u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F08u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9F0Au ^ 0x9F1Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F1Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F0Au; } return 1;
case 0x9F0Au: /* LDA IMM A9 00 */
    c->pc = 0x9F0Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F0Cu: /* STA ABX 9D 40 06 */
    c->pc = 0x9F0Fu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F0Fu: /* STA ABX 9D 60 06 */
    c->pc = 0x9F12u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F12u: /* LDA IMM A9 8B */
    c->pc = 0x9F14u;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F14u: /* STA ABX 9D 20 04 */
    c->pc = 0x9F17u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F17u: /* LDA IMM A9 3E */
    c->pc = 0x9F19u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F19u: /* STA ABX 9D E0 04 */
    c->pc = 0x9F1Cu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F1Cu: /* JSR ABS 20 BA EE */
    push(c, 0x9Fu); push(c, 0x1Eu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9F1Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9F22u: /* LDA ABX BD 40 06 */
    c->pc = 0x9F25u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F25u: /* STA ZP 85 04 */
    c->pc = 0x9F27u;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F27u: /* LDA IMM A9 0C */
    c->pc = 0x9F29u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F29u: /* STA ZP 85 01 */
    c->pc = 0x9F2Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F2Bu: /* LDA IMM A9 10 */
    c->pc = 0x9F2Du;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F2Du: /* STA ZP 85 02 */
    c->pc = 0x9F2Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F2Fu: /* JSR ABS 20 CF F0 */
    push(c, 0x9Fu); push(c, 0x31u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0x9F32u: /* LDA ABX BD 10 01 */
    c->pc = 0x9F35u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F35u: /* BNE REL D0 1F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F37u ^ 0x9F56u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F56u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F37u; } return 1;
case 0x9F37u: /* LDA ABX BD E0 04 */
    c->pc = 0x9F3Au;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F3Au: /* BNE REL D0 79 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F3Cu ^ 0x9FB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F3Cu; } return 1;
case 0x9F3Cu: /* LDA IMM A9 C0 */
    c->pc = 0x9F3Eu;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F3Eu: /* STA ABX 9D 20 06 */
    c->pc = 0x9F41u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F41u: /* STA ABX 9D 60 06 */
    c->pc = 0x9F44u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F44u: /* LDA IMM A9 04 */
    c->pc = 0x9F46u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F46u: /* STA ABX 9D 40 06 */
    c->pc = 0x9F49u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F49u: /* STA ZP 85 04 */
    c->pc = 0x9F4Bu;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F4Bu: /* JSR ABS 20 EE EF */
    push(c, 0x9Fu); push(c, 0x4Du); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x9F4Eu: /* INC ABX FE 10 01 */
    c->pc = 0x9F51u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9F51u: /* LDA IMM A9 01 */
    c->pc = 0x9F53u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F53u: /* STA ABX 9D A0 06 */
    c->pc = 0x9F56u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F56u: /* LDA ABX BD 10 01 */
    c->pc = 0x9F59u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F59u: /* CMP IMM C9 01 */
    c->pc = 0x9F5Bu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9F5Bu: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F5Du ^ 0x9F79u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F79u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F5Du; } return 1;
case 0x9F5Du: /* LDA ZP A5 04 */
    c->pc = 0x9F5Fu;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F5Fu: /* BPL REL 10 54 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9F61u ^ 0x9FB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F61u; } return 1;
case 0x9F61u: /* LDA ZP A5 00 */
    c->pc = 0x9F63u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F63u: /* BEQ REL F0 50 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9F65u ^ 0x9FB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F65u; } return 1;
case 0x9F65u: /* LDA IMM A9 00 */
    c->pc = 0x9F67u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F67u: /* STA ABX 9D 20 06 */
    c->pc = 0x9F6Au;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F6Au: /* INC ABX FE 10 01 */
    c->pc = 0x9F6Du;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9F6Du: /* LDA IMM A9 3E */
    c->pc = 0x9F6Fu;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F6Fu: /* STA ABX 9D E0 04 */
    c->pc = 0x9F72u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F72u: /* LDA IMM A9 03 */
    c->pc = 0x9F74u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F74u: /* STA ABX 9D A0 06 */
    c->pc = 0x9F77u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F77u: /* BNE REL D0 3C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F79u ^ 0x9FB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F79u; } return 1;
case 0x9F79u: /* LDA ABX BD E0 04 */
    c->pc = 0x9F7Cu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F7Cu: /* BNE REL D0 37 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F7Eu ^ 0x9FB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F7Eu; } return 1;
case 0x9F7Eu: /* JSR ABS 20 EE EF */
    push(c, 0x9Fu); push(c, 0x80u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0x9F81u: /* LDA IMM A9 18 */
    c->pc = 0x9F83u;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F83u: /* JSR ABS 20 59 F1 */
    push(c, 0x9Fu); push(c, 0x85u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0x9F86u: /* BCS REL B0 19 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9F88u ^ 0x9FA1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FA1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F88u; } return 1;
case 0x9F88u: /* LDA ZP A5 2B */
    c->pc = 0x9F8Au;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F8Au: /* PHA IMP 48 */
    c->pc = 0x9F8Bu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F8Bu: /* TYA IMP 98 */
    c->pc = 0x9F8Cu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F8Cu: /* CLC IMP 18 */
    c->pc = 0x9F8Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9F8Du: /* ADC IMM 69 10 */
    c->pc = 0x9F8Fu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9F8Fu: /* TAX IMP AA */
    c->pc = 0x9F90u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F90u: /* STX ZP 86 2B */
    c->pc = 0x9F92u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9F92u: /* LDA IMM A9 02 */
    c->pc = 0x9F94u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F94u: /* STA ZP 85 09 */
    c->pc = 0x9F96u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F96u: /* LDA IMM A9 0C */
    c->pc = 0x9F98u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F98u: /* STA ZP 85 08 */
    c->pc = 0x9F9Au;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F9Au: /* JSR ABS 20 97 F1 */
    push(c, 0x9Fu); push(c, 0x9Cu); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0x9F9Du: /* PLA IMP 68 */
    c->pc = 0x9F9Eu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F9Eu: /* STA ZP 85 2B */
    c->pc = 0x9FA0u;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FA0u: /* TAX IMP AA */
    c->pc = 0x9FA1u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FA1u: /* LDA IMM A9 3E */
    c->pc = 0x9FA3u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FA3u: /* STA ABX 9D E0 04 */
    c->pc = 0x9FA6u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FA6u: /* INC ABX FE 10 01 */
    c->pc = 0x9FA9u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9FA9u: /* LDA ABX BD 10 01 */
    c->pc = 0x9FACu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FACu: /* CMP IMM C9 05 */
    c->pc = 0x9FAEu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9FAEu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FB0u ^ 0x9FB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FB0u; } return 1;
case 0x9FB0u: /* LDA IMM A9 00 */
    c->pc = 0x9FB2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FB2u: /* STA ABX 9D 10 01 */
    c->pc = 0x9FB5u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FB5u: /* DEC ABX DE E0 04 */
    c->pc = 0x9FB8u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9FB8u: /* LDY ABX BC 10 01 */
    c->pc = 0x9FBBu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FBBu: /* LDA ABX BD A0 06 */
    c->pc = 0x9FBEu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FBEu: /* CMP ABY D9 CC 9F */
    c->pc = 0x9FC1u;
    ea = (uint16_t)(0x9FCCu + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x9FCCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FC1u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FC3u ^ 0x9FC8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FC8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FC3u; } return 1;
case 0x9FC3u: /* LDA IMM A9 00 */
    c->pc = 0x9FC5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FC5u: /* STA ABX 9D 80 06 */
    c->pc = 0x9FC8u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FC8u: /* JSR ABS 20 BA EE */
    push(c, 0x9Fu); push(c, 0xCAu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0x9FCBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9FD1u: /* LDY IMM A0 02 */
    c->pc = 0x9FD3u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9FD3u: /* LDA ABX BD C0 06 */
    c->pc = 0x9FD6u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FD6u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FD8u ^ 0x9FDBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FDBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FD8u; } return 1;
case 0x9FD8u: /* JMP ABS 4C 6B A0 */
    c->pc = 0xA06Bu; c->cpu_cycles += 3u; return 1;
case 0x9FDBu: /* CMP ABX DD 60 06 */
    c->pc = 0x9FDEu;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FDEu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9FE0u ^ 0x9FE2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FE2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FE0u; } return 1;
case 0x9FE0u: /* LDY IMM A0 05 */
    c->pc = 0x9FE2u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9FE2u: /* STA ABX 9D 60 06 */
    c->pc = 0x9FE5u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FE5u: /* LDX IMM A2 0F */
    c->pc = 0x9FE7u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FE7u: /* LDA ABY B9 08 A1 */
    c->pc = 0x9FEAu;
    ea = (uint16_t)(0xA108u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA108u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FEAu: /* STA ABX 9D 56 03 */
    c->pc = 0x9FEDu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FEDu: /* DEY IMP 88 */
    c->pc = 0x9FEEu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9FEEu: /* DEX IMP CA */
    c->pc = 0x9FEFu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FEFu: /* CPX IMM E0 0C */
    c->pc = 0x9FF1u;
    v = 0x0Cu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9FF1u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FF3u ^ 0x9FE7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FE7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FF3u; } return 1;
case 0x9FF3u: /* LDX ZP A6 2B */
    c->pc = 0x9FF5u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9FF5u: /* LDA ABX BD 20 06 */
    c->pc = 0x9FF8u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FF8u: /* BNE REL D0 31 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FFAu ^ 0xA02Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA02Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FFAu; } return 1;
case 0x9FFAu: /* LDA IMM A9 01 */
    c->pc = 0x9FFCu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FFCu: /* STA ABX 9D A0 06 */
    c->pc = 0x9FFFu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FFFu: /* LDA IMM A9 00 */
    c->pc = 0xA001u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA001u: /* STA ABX 9D 80 06 */
    c->pc = 0xA004u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA004u: /* LDA ABX BD E0 04 */
    c->pc = 0xA007u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA007u: /* BNE REL D0 1F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA009u ^ 0xA028u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA028u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA009u; } return 1;
case 0xA009u: /* LDA IMM A9 1B */
    c->pc = 0xA00Bu;
    v = 0x1Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA00Bu: /* JSR ABS 20 59 F1 */
    push(c, 0xA0u); push(c, 0x0Du); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA00Eu: /* BCS REL B0 09 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA010u ^ 0xA019u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA019u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA010u; } return 1;
case 0xA010u: /* CLC IMP 18 */
    c->pc = 0xA011u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA011u: /* LDA ABY B9 B0 04 */
    c->pc = 0xA014u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA014u: /* ADC IMM 69 0C */
    c->pc = 0xA016u;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA016u: /* STA ABY 99 B0 04 */
    c->pc = 0xA019u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA019u: /* LDA IMM A9 02 */
    c->pc = 0xA01Bu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA01Bu: /* STA ABX 9D E0 04 */
    c->pc = 0xA01Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA01Eu: /* DEC ABX DE 00 06 */
    c->pc = 0xA021u;
    ea = (uint16_t)(0x0600u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA021u: /* BNE REL D0 2D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA023u ^ 0xA050u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA050u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA023u; } return 1;
case 0xA023u: /* INC ABX FE 20 06 */
    c->pc = 0xA026u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA026u: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA028u ^ 0xA050u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA050u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA028u; } return 1;
case 0xA028u: /* DEC ABX DE E0 04 */
    c->pc = 0xA02Bu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA02Bu: /* LDA ABX BD A0 06 */
    c->pc = 0xA02Eu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA02Eu: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA030u ^ 0xA050u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA050u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA030u; } return 1;
case 0xA030u: /* LDA IMM A9 00 */
    c->pc = 0xA032u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA032u: /* STA ABX 9D 20 06 */
    c->pc = 0xA035u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA035u: /* LDA IMM A9 03 */
    c->pc = 0xA037u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA037u: /* STA ABX 9D 00 06 */
    c->pc = 0xA03Au;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA03Au: /* LDA ZP A5 4A */
    c->pc = 0xA03Cu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA03Cu: /* AND IMM 29 03 */
    c->pc = 0xA03Eu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA03Eu: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA040u ^ 0xA050u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA050u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA040u; } return 1;
case 0xA040u: /* ASL ABX 1E 00 06 */
    c->pc = 0xA043u;
    ea = (uint16_t)(0x0600u + c->x); v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA043u: /* AND IMM 29 01 */
    c->pc = 0xA045u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA045u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA047u ^ 0xA050u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA050u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA047u; } return 1;
case 0xA047u: /* CLC IMP 18 */
    c->pc = 0xA048u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA048u: /* LDA ABX BD 00 06 */
    c->pc = 0xA04Bu;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA04Bu: /* ADC IMM 69 03 */
    c->pc = 0xA04Du;
    v = 0x03u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA04Du: /* STA ABX 9D 00 06 */
    c->pc = 0xA050u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA050u: /* JSR ABS 20 B3 EF */
    push(c, 0xA0u); push(c, 0x52u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA053u: /* BCC REL 90 15 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA055u ^ 0xA06Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA06Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA055u; } return 1;
case 0xA055u: /* LDA IMM A9 80 */
    c->pc = 0xA057u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA057u: /* STA ABX 9D 20 04 */
    c->pc = 0xA05Au;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA05Au: /* LDA IMM A9 19 */
    c->pc = 0xA05Cu;
    v = 0x19u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA05Cu: /* STA ABX 9D 00 04 */
    c->pc = 0xA05Fu;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA05Fu: /* LDA IMM A9 00 */
    c->pc = 0xA061u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA061u: /* STA ABX 9D E0 04 */
    c->pc = 0xA064u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA064u: /* STA ABX 9D 20 06 */
    c->pc = 0xA067u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA067u: /* STA ABX 9D 00 01 */
    c->pc = 0xA06Au;
    ea = (uint16_t)(0x0100u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA06Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA06Bu: /* LDA IMM A9 00 */
    c->pc = 0xA06Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA06Du: /* STA ABX 9D A0 06 */
    c->pc = 0xA070u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA070u: /* STA ABX 9D 80 06 */
    c->pc = 0xA073u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA073u: /* LDA ABX BD 20 06 */
    c->pc = 0xA076u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA076u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA078u ^ 0xA07Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA07Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA078u; } return 1;
case 0xA078u: /* JMP ABS 4C 04 A1 */
    c->pc = 0xA104u; c->cpu_cycles += 3u; return 1;
case 0xA07Bu: /* LDA ABX BD E0 04 */
    c->pc = 0xA07Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA07Eu: /* AND IMM 29 03 */
    c->pc = 0xA080u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA080u: /* STA ZP 85 00 */
    c->pc = 0xA082u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA082u: /* ASL IMP 0A */
    c->pc = 0xA083u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA083u: /* ASL IMP 0A */
    c->pc = 0xA084u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA084u: /* ADC ZP 65 00 */
    c->pc = 0xA086u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA086u: /* STA ZP 85 01 */
    c->pc = 0xA088u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA088u: /* LDA IMM A9 2B */
    c->pc = 0xA08Au;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA08Au: /* JSR ABS 20 51 C0 */
    push(c, 0xA0u); push(c, 0x8Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA08Du: /* LDA IMM A9 05 */
    c->pc = 0xA08Fu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA08Fu: /* STA ZP 85 02 */
    c->pc = 0xA091u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA091u: /* LDA IMM A9 06 */
    c->pc = 0xA093u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA093u: /* JSR ABS 20 59 F1 */
    push(c, 0xA0u); push(c, 0x95u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA096u: /* BCS REL B0 1C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA098u ^ 0xA0B4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0B4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA098u; } return 1;
case 0xA098u: /* LDX ZP A6 01 */
    c->pc = 0xA09Au;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA09Au: /* CLC IMP 18 */
    c->pc = 0xA09Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA09Bu: /* LDA ABY B9 70 04 */
    c->pc = 0xA09Eu;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA09Eu: /* ADC ABY 79 0E A1 */
    c->pc = 0xA0A1u;
    ea = (uint16_t)(0xA10Eu + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xA10Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA0A1u: /* STA ABY 99 70 04 */
    c->pc = 0xA0A4u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0A4u: /* CLC IMP 18 */
    c->pc = 0xA0A5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA0A5u: /* LDA ABY B9 B0 04 */
    c->pc = 0xA0A8u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA0A8u: /* ADC ABY 79 22 A1 */
    c->pc = 0xA0ABu;
    ea = (uint16_t)(0xA122u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xA122u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA0ABu: /* STA ABY 99 B0 04 */
    c->pc = 0xA0AEu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0AEu: /* INC ZP E6 01 */
    c->pc = 0xA0B0u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA0B0u: /* DEC ZP C6 02 */
    c->pc = 0xA0B2u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA0B2u: /* BNE REL D0 DD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0B4u ^ 0xA091u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA091u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0B4u; } return 1;
case 0xA0B4u: /* LDX ZP A6 2B */
    c->pc = 0xA0B6u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA0B6u: /* INC ABX FE E0 04 */
    c->pc = 0xA0B9u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA0B9u: /* LDA ABX BD E0 04 */
    c->pc = 0xA0BCu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA0BCu: /* CMP IMM C9 08 */
    c->pc = 0xA0BEu;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0BEu: /* BNE REL D0 3F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0C0u ^ 0xA0FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0C0u; } return 1;
case 0xA0C0u: /* LDA IMM A9 1A */
    c->pc = 0xA0C2u;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0C2u: /* JSR ABS 20 10 F0 */
    push(c, 0xA0u); push(c, 0xC4u); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xA0C5u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA0C7u ^ 0xA0D1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0D1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0C7u; } return 1;
case 0xA0C7u: /* LDA IMM A9 00 */
    c->pc = 0xA0C9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0C9u: /* STA ABY 99 30 04 */
    c->pc = 0xA0CCu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0CCu: /* LDA IMM A9 FF */
    c->pc = 0xA0CEu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0CEu: /* STA ABY 99 00 01 */
    c->pc = 0xA0D1u;
    ea = (uint16_t)(0x0100u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0D1u: /* LDA IMM A9 1C */
    c->pc = 0xA0D3u;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0D3u: /* JSR ABS 20 10 F0 */
    push(c, 0xA0u); push(c, 0xD5u); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xA0D6u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA0D8u ^ 0xA0DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0D8u; } return 1;
case 0xA0D8u: /* LDA IMM A9 FF */
    c->pc = 0xA0DAu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0DAu: /* STA ABY 99 F0 04 */
    c->pc = 0xA0DDu;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0DDu: /* LDA IMM A9 2E */
    c->pc = 0xA0DFu;
    v = 0x2Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0DFu: /* JSR ABS 20 10 F0 */
    push(c, 0xA0u); push(c, 0xE1u); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xA0E2u: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA0E4u ^ 0xA0F9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0F9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0E4u; } return 1;
case 0xA0E4u: /* LDA IMM A9 00 */
    c->pc = 0xA0E6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0E6u: /* STA ABY 99 30 04 */
    c->pc = 0xA0E9u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0E9u: /* LDA IMM A9 FF */
    c->pc = 0xA0EBu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0EBu: /* STA ABY 99 30 01 */
    c->pc = 0xA0EEu;
    ea = (uint16_t)(0x0130u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0EEu: /* LDA ABY B9 20 01 */
    c->pc = 0xA0F1u;
    ea = (uint16_t)(0x0120u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0120u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA0F1u: /* TAY IMP A8 */
    c->pc = 0xA0F2u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA0F2u: /* LDA IMM A9 00 */
    c->pc = 0xA0F4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0F4u: /* STA ABY 99 40 01 */
    c->pc = 0xA0F7u;
    ea = (uint16_t)(0x0140u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0F7u: /* BEQ REL F0 E4 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA0F9u ^ 0xA0DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0F9u; } return 1;
case 0xA0F9u: /* STA ABX 9D F0 00 */
    c->pc = 0xA0FCu;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA0FCu: /* ASL ABX 1E 20 04 */
    c->pc = 0xA0FFu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA0FFu: /* LDA IMM A9 08 */
    c->pc = 0xA101u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA101u: /* STA ABX 9D 20 06 */
    c->pc = 0xA104u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA104u: /* DEC ABX DE 20 06 */
    c->pc = 0xA107u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA107u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA136u: /* LDA ABX BD E0 04 */
    c->pc = 0xA139u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA139u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA13Bu ^ 0xA145u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA145u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA13Bu; } return 1;
case 0xA13Bu: /* LDA IMM A9 6E */
    c->pc = 0xA13Du;
    v = 0x6Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA13Du: /* STA ABX 9D E0 04 */
    c->pc = 0xA140u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA140u: /* LDA IMM A9 01 */
    c->pc = 0xA142u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA142u: /* STA ABX 9D A0 06 */
    c->pc = 0xA145u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA145u: /* LDA ABX BD A0 06 */
    c->pc = 0xA148u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA148u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA14Au ^ 0xA14Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA14Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA14Au; } return 1;
case 0xA14Au: /* STA ABX 9D 80 06 */
    c->pc = 0xA14Du;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA14Du: /* DEC ABX DE E0 04 */
    c->pc = 0xA150u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA150u: /* JSR ABS 20 B3 EF */
    push(c, 0xA1u); push(c, 0x52u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA153u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA154u: /* CLC IMP 18 */
    c->pc = 0xA155u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA155u: /* LDA ABX BD 60 06 */
    c->pc = 0xA158u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA158u: /* ADC IMM 69 40 */
    c->pc = 0xA15Au;
    v = 0x40u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA15Au: /* STA ABX 9D 60 06 */
    c->pc = 0xA15Du;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA15Du: /* LDA ABX BD 40 06 */
    c->pc = 0xA160u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA160u: /* ADC IMM 69 00 */
    c->pc = 0xA162u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA162u: /* STA ABX 9D 40 06 */
    c->pc = 0xA165u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA165u: /* JSR ABS 20 BA EE */
    push(c, 0xA1u); push(c, 0x67u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA168u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA169u: /* SEC IMP 38 */
    c->pc = 0xA16Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA16Au: /* LDA ABX BD 40 04 */
    c->pc = 0xA16Du;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA16Du: /* SBC IMM E9 06 */
    c->pc = 0xA16Fu;
    v = 0x06u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA16Fu: /* TAY IMP A8 */
    c->pc = 0xA170u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA170u: /* LDA ABY B9 69 A2 */
    c->pc = 0xA173u;
    ea = (uint16_t)(0xA269u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA269u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA173u: /* CMP ABX DD A0 04 */
    c->pc = 0xA176u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA176u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA178u ^ 0xA18Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA18Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA178u; } return 1;
case 0xA178u: /* LDA ABX BD 20 04 */
    c->pc = 0xA17Bu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA17Bu: /* AND IMM 29 DF */
    c->pc = 0xA17Du;
    v = 0xDFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA17Du: /* STA ABX 9D 20 04 */
    c->pc = 0xA180u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA180u: /* LDA IMM A9 00 */
    c->pc = 0xA182u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA182u: /* STA ABX 9D A0 06 */
    c->pc = 0xA185u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA185u: /* STA ABX 9D 80 06 */
    c->pc = 0xA188u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA188u: /* JSR ABS 20 BA EE */
    push(c, 0xA1u); push(c, 0x8Au); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA18Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA18Cu: /* LDA IMM A9 00 */
    c->pc = 0xA18Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA18Eu: /* STA ABX 9D 40 06 */
    c->pc = 0xA191u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA191u: /* JSR ABS 20 B3 EF */
    push(c, 0xA1u); push(c, 0x93u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA194u: /* LDA ABX BD A0 06 */
    c->pc = 0xA197u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA197u: /* PHA IMP 48 */
    c->pc = 0xA198u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA198u: /* TAY IMP A8 */
    c->pc = 0xA199u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA199u: /* CLC IMP 18 */
    c->pc = 0xA19Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA19Au: /* LDA ABX BD A0 04 */
    c->pc = 0xA19Du;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA19Du: /* ADC ABY 79 6C A2 */
    c->pc = 0xA1A0u;
    ea = (uint16_t)(0xA26Cu + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xA26Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA1A0u: /* AND IMM 29 E0 */
    c->pc = 0xA1A2u;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1A2u: /* STA ZP 85 0A */
    c->pc = 0xA1A4u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1A4u: /* CLC IMP 18 */
    c->pc = 0xA1A5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1A5u: /* LDA ABX BD 60 04 */
    c->pc = 0xA1A8u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA1A8u: /* ADC ABY 79 70 A2 */
    c->pc = 0xA1ABu;
    ea = (uint16_t)(0xA270u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xA270u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA1ABu: /* AND IMM 29 E0 */
    c->pc = 0xA1ADu;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1ADu: /* STA ZP 85 08 */
    c->pc = 0xA1AFu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1AFu: /* LDA ABX BD 40 04 */
    c->pc = 0xA1B2u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA1B2u: /* STA ZP 85 09 */
    c->pc = 0xA1B4u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1B4u: /* JSR ABS 20 EF C8 */
    push(c, 0xA1u); push(c, 0xB6u); c->pc = 0xC8EFu; c->cpu_cycles += 6u; return 1;
case 0xA1B7u: /* JSR ABS 20 1B C9 */
    push(c, 0xA1u); push(c, 0xB9u); c->pc = 0xC91Bu; c->cpu_cycles += 6u; return 1;
case 0xA1BAu: /* LDY ZP A4 1B */
    c->pc = 0xA1BCu;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA1BCu: /* LDA ABS AD B6 03 */
    c->pc = 0xA1BFu;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1BFu: /* STA ABY 99 00 03 */
    c->pc = 0xA1C2u;
    ea = (uint16_t)(0x0300u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA1C2u: /* LDA ABS AD BC 03 */
    c->pc = 0xA1C5u;
    ea = 0x03BCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1C5u: /* STA ABY 99 04 03 */
    c->pc = 0xA1C8u;
    ea = (uint16_t)(0x0304u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA1C8u: /* LDA ABS AD C2 03 */
    c->pc = 0xA1CBu;
    ea = 0x03C2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1CBu: /* STA ABY 99 08 03 */
    c->pc = 0xA1CEu;
    ea = (uint16_t)(0x0308u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA1CEu: /* LDA ABS AD C8 03 */
    c->pc = 0xA1D1u;
    ea = 0x03C8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1D1u: /* STA ABY 99 0C 03 */
    c->pc = 0xA1D4u;
    ea = (uint16_t)(0x030Cu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA1D4u: /* LDA IMM A9 FF */
    c->pc = 0xA1D6u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1D6u: /* STA ABY 99 50 03 */
    c->pc = 0xA1D9u;
    ea = (uint16_t)(0x0350u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA1D9u: /* TYA IMP 98 */
    c->pc = 0xA1DAu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1DAu: /* ASL IMP 0A */
    c->pc = 0xA1DBu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1DBu: /* ASL IMP 0A */
    c->pc = 0xA1DCu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1DCu: /* ASL IMP 0A */
    c->pc = 0xA1DDu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1DDu: /* ASL IMP 0A */
    c->pc = 0xA1DEu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1DEu: /* TAY IMP A8 */
    c->pc = 0xA1DFu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA1DFu: /* PLA IMP 68 */
    c->pc = 0xA1E0u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1E0u: /* STA ZP 85 00 */
    c->pc = 0xA1E2u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1E2u: /* LDX ZP A6 2B */
    c->pc = 0xA1E4u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA1E4u: /* LDA ABX BD E0 04 */
    c->pc = 0xA1E7u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA1E7u: /* CMP IMM C9 FF */
    c->pc = 0xA1E9u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1E9u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1EBu ^ 0xA1F2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1F2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1EBu; } return 1;
case 0xA1EBu: /* CLC IMP 18 */
    c->pc = 0xA1ECu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1ECu: /* LDA ZP A5 00 */
    c->pc = 0xA1EEu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1EEu: /* ADC IMM 69 04 */
    c->pc = 0xA1F0u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1F0u: /* STA ZP 85 00 */
    c->pc = 0xA1F2u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1F2u: /* LDA ZP A5 00 */
    c->pc = 0xA1F4u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1F4u: /* ASL IMP 0A */
    c->pc = 0xA1F5u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1F5u: /* ASL IMP 0A */
    c->pc = 0xA1F6u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1F6u: /* ASL IMP 0A */
    c->pc = 0xA1F7u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1F7u: /* ASL IMP 0A */
    c->pc = 0xA1F8u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1F8u: /* TAX IMP AA */
    c->pc = 0xA1F9u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA1F9u: /* LDA IMM A9 10 */
    c->pc = 0xA1FBu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1FBu: /* STA ZP 85 00 */
    c->pc = 0xA1FDu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1FDu: /* LDA ABX BD 74 A2 */
    c->pc = 0xA200u;
    ea = (uint16_t)(0xA274u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA274u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA200u: /* STA ABY 99 10 03 */
    c->pc = 0xA203u;
    ea = (uint16_t)(0x0310u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA203u: /* INX IMP E8 */
    c->pc = 0xA204u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA204u: /* INY IMP C8 */
    c->pc = 0xA205u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA205u: /* DEC ZP C6 00 */
    c->pc = 0xA207u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA207u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA209u ^ 0xA1FDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1FDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA209u; } return 1;
case 0xA209u: /* INC ZP E6 1B */
    c->pc = 0xA20Bu;
    ea = 0x1Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA20Bu: /* LDX ZP A6 2B */
    c->pc = 0xA20Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA20Du: /* LDA ABX BD A0 06 */
    c->pc = 0xA210u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA210u: /* CMP IMM C9 03 */
    c->pc = 0xA212u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA212u: /* BNE REL D0 54 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA214u ^ 0xA268u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA268u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA214u; } return 1;
case 0xA214u: /* LDA ABX BD E0 04 */
    c->pc = 0xA217u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA217u: /* BNE REL D0 4F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA219u ^ 0xA268u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA268u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA219u; } return 1;
case 0xA219u: /* LDA IMM A9 19 */
    c->pc = 0xA21Bu;
    v = 0x19u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA21Bu: /* JSR ABS 20 59 F1 */
    push(c, 0xA2u); push(c, 0x1Du); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA21Eu: /* LDA IMM A9 08 */
    c->pc = 0xA220u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA220u: /* STA ABY 99 F0 04 */
    c->pc = 0xA223u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA223u: /* LDA IMM A9 03 */
    c->pc = 0xA225u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA225u: /* STA ABY 99 10 06 */
    c->pc = 0xA228u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA228u: /* LDA IMM A9 14 */
    c->pc = 0xA22Au;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA22Au: /* STA ABX 9D C0 04 */
    c->pc = 0xA22Du;
    ea = (uint16_t)(0x04C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA22Du: /* LDA ZP A5 4A */
    c->pc = 0xA22Fu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA22Fu: /* AND IMM 29 03 */
    c->pc = 0xA231u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA231u: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA233u ^ 0xA249u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA249u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA233u; } return 1;
case 0xA233u: /* PHA IMP 48 */
    c->pc = 0xA234u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA234u: /* LDA ABY B9 10 06 */
    c->pc = 0xA237u;
    ea = (uint16_t)(0x0610u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0610u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA237u: /* ASL IMP 0A */
    c->pc = 0xA238u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA238u: /* STA ABY 99 10 06 */
    c->pc = 0xA23Bu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA23Bu: /* PLA IMP 68 */
    c->pc = 0xA23Cu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA23Cu: /* AND IMM 29 01 */
    c->pc = 0xA23Eu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA23Eu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA240u ^ 0xA249u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA249u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA240u; } return 1;
case 0xA240u: /* CLC IMP 18 */
    c->pc = 0xA241u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA241u: /* LDA ABY B9 10 06 */
    c->pc = 0xA244u;
    ea = (uint16_t)(0x0610u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0610u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA244u: /* ADC IMM 69 03 */
    c->pc = 0xA246u;
    v = 0x03u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA246u: /* STA ABY 99 10 06 */
    c->pc = 0xA249u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA249u: /* LDA IMM A9 1A */
    c->pc = 0xA24Bu;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA24Bu: /* JSR ABS 20 59 F1 */
    push(c, 0xA2u); push(c, 0x4Du); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA24Eu: /* CLC IMP 18 */
    c->pc = 0xA24Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA24Fu: /* LDA ABY B9 70 04 */
    c->pc = 0xA252u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA252u: /* ADC IMM 69 2F */
    c->pc = 0xA254u;
    v = 0x2Fu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA254u: /* STA ABY 99 70 04 */
    c->pc = 0xA257u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA257u: /* SEC IMP 38 */
    c->pc = 0xA258u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA258u: /* LDA ABY B9 B0 04 */
    c->pc = 0xA25Bu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA25Bu: /* SBC IMM E9 0C */
    c->pc = 0xA25Du;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA25Du: /* STA ABY 99 B0 04 */
    c->pc = 0xA260u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA260u: /* INC ABX FE E0 04 */
    c->pc = 0xA263u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA263u: /* LDA IMM A9 A0 */
    c->pc = 0xA265u;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA265u: /* STA ABX 9D 20 04 */
    c->pc = 0xA268u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA268u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA2F4u: /* JSR ABS 20 EE EF */
    push(c, 0xA2u); push(c, 0xF6u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xA2F7u: /* LDA ABX BD 20 04 */
    c->pc = 0xA2FAu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA2FAu: /* AND IMM 29 20 */
    c->pc = 0xA2FCu;
    v = 0x20u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2FCu: /* BEQ REL F0 1F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA2FEu ^ 0xA31Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA31Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA2FEu; } return 1;
case 0xA2FEu: /* LDA ZP A5 00 */
    c->pc = 0xA300u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA300u: /* CMP IMM C9 50 */
    c->pc = 0xA302u;
    v = 0x50u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA302u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA304u ^ 0xA308u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA308u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA304u; } return 1;
case 0xA304u: /* JSR ABS 20 B3 EF */
    push(c, 0xA3u); push(c, 0x06u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA307u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA308u: /* LDA IMM A9 00 */
    c->pc = 0xA30Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA30Au: /* STA ABX 9D A0 06 */
    c->pc = 0xA30Du;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA30Du: /* STA ABX 9D 80 06 */
    c->pc = 0xA310u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA310u: /* LDA ABX BD 20 04 */
    c->pc = 0xA313u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA313u: /* AND IMM 29 DF */
    c->pc = 0xA315u;
    v = 0xDFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA315u: /* STA ABX 9D 20 04 */
    c->pc = 0xA318u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA318u: /* LDA IMM A9 04 */
    c->pc = 0xA31Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA31Au: /* STA ABX 9D 40 06 */
    c->pc = 0xA31Du;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA31Du: /* LDA ABX BD A0 06 */
    c->pc = 0xA320u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA320u: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA322u ^ 0xA344u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA344u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA322u; } return 1;
case 0xA322u: /* LDA IMM A9 00 */
    c->pc = 0xA324u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA324u: /* STA ABX 9D 80 06 */
    c->pc = 0xA327u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA327u: /* LDA IMM A9 07 */
    c->pc = 0xA329u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA329u: /* STA ZP 85 01 */
    c->pc = 0xA32Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA32Bu: /* LDA IMM A9 01 */
    c->pc = 0xA32Du;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA32Du: /* STA ZP 85 02 */
    c->pc = 0xA32Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA32Fu: /* JSR ABS 20 2C F0 */
    push(c, 0xA3u); push(c, 0x31u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xA332u: /* LDA ZP A5 00 */
    c->pc = 0xA334u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA334u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA336u ^ 0xA339u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA339u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA336u; } return 1;
case 0xA336u: /* JMP ABS 4C E9 A3 */
    c->pc = 0xA3E9u; c->cpu_cycles += 3u; return 1;
case 0xA339u: /* LDA IMM A9 00 */
    c->pc = 0xA33Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA33Bu: /* STA ABX 9D 40 06 */
    c->pc = 0xA33Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA33Eu: /* INC ABX FE A0 06 */
    c->pc = 0xA341u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA341u: /* JMP ABS 4C E9 A3 */
    c->pc = 0xA3E9u; c->cpu_cycles += 3u; return 1;
case 0xA344u: /* LDA ABX BD A0 06 */
    c->pc = 0xA347u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA347u: /* CMP IMM C9 02 */
    c->pc = 0xA349u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA349u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA34Bu ^ 0xA357u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA357u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA34Bu; } return 1;
case 0xA34Bu: /* CLC IMP 18 */
    c->pc = 0xA34Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA34Cu: /* LDA ABX BD A0 04 */
    c->pc = 0xA34Fu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA34Fu: /* ADC IMM 69 05 */
    c->pc = 0xA351u;
    v = 0x05u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA351u: /* STA ABX 9D A0 04 */
    c->pc = 0xA354u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA354u: /* INC ABX FE A0 06 */
    c->pc = 0xA357u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA357u: /* LDA ABX BD A0 06 */
    c->pc = 0xA35Au;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA35Au: /* CMP IMM C9 08 */
    c->pc = 0xA35Cu;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA35Cu: /* BCS REL B0 40 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA35Eu ^ 0xA39Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA39Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA35Eu; } return 1;
case 0xA35Eu: /* LDA ZP A5 00 */
    c->pc = 0xA360u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA360u: /* CMP IMM C9 20 */
    c->pc = 0xA362u;
    v = 0x20u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA362u: /* BCC REL 90 18 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA364u ^ 0xA37Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA37Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA364u; } return 1;
case 0xA364u: /* INC ABX FE E0 04 */
    c->pc = 0xA367u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA367u: /* LDA ABX BD E0 04 */
    c->pc = 0xA36Au;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA36Au: /* CMP IMM C9 7D */
    c->pc = 0xA36Cu;
    v = 0x7Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA36Cu: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA36Eu ^ 0xA37Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA37Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA36Eu; } return 1;
case 0xA36Eu: /* LDA ABX BD A0 06 */
    c->pc = 0xA371u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA371u: /* CMP IMM C9 07 */
    c->pc = 0xA373u;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA373u: /* BNE REL D0 74 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA375u ^ 0xA3E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA375u; } return 1;
case 0xA375u: /* LDA IMM A9 03 */
    c->pc = 0xA377u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA377u: /* STA ABX 9D A0 06 */
    c->pc = 0xA37Au;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA37Au: /* BNE REL D0 6D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA37Cu ^ 0xA3E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA37Cu; } return 1;
case 0xA37Cu: /* SEC IMP 38 */
    c->pc = 0xA37Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA37Du: /* LDA ABX BD A0 04 */
    c->pc = 0xA380u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA380u: /* SBC IMM E9 20 */
    c->pc = 0xA382u;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA382u: /* STA ABX 9D A0 04 */
    c->pc = 0xA385u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA385u: /* LDA ABX BD 20 04 */
    c->pc = 0xA388u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA388u: /* ORA IMM 09 04 */
    c->pc = 0xA38Au;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA38Au: /* STA ABX 9D 20 04 */
    c->pc = 0xA38Du;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA38Du: /* LDA IMM A9 02 */
    c->pc = 0xA38Fu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA38Fu: /* STA ABX 9D E0 04 */
    c->pc = 0xA392u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA392u: /* LDA IMM A9 08 */
    c->pc = 0xA394u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA394u: /* STA ABX 9D A0 06 */
    c->pc = 0xA397u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA397u: /* LDA IMM A9 00 */
    c->pc = 0xA399u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA399u: /* STA ABX 9D 80 06 */
    c->pc = 0xA39Cu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA39Cu: /* BNE REL D0 4B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA39Eu ^ 0xA3E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA39Eu; } return 1;
case 0xA39Eu: /* LDA IMM A9 08 */
    c->pc = 0xA3A0u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3A0u: /* STA ZP 85 01 */
    c->pc = 0xA3A2u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3A2u: /* LDA IMM A9 10 */
    c->pc = 0xA3A4u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3A4u: /* STA ZP 85 02 */
    c->pc = 0xA3A6u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3A6u: /* JSR ABS 20 2C F0 */
    push(c, 0xA3u); push(c, 0xA8u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xA3A9u: /* LDA IMM A9 00 */
    c->pc = 0xA3ABu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3ABu: /* STA ABX 9D 80 06 */
    c->pc = 0xA3AEu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3AEu: /* LDA ABX BD A0 06 */
    c->pc = 0xA3B1u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3B1u: /* CMP IMM C9 09 */
    c->pc = 0xA3B3u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA3B3u: /* BEQ REL F0 1E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3B5u ^ 0xA3D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3B5u; } return 1;
case 0xA3B5u: /* DEC ABX DE E0 04 */
    c->pc = 0xA3B8u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA3B8u: /* BNE REL D0 2F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA3BAu ^ 0xA3E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3BAu; } return 1;
case 0xA3BAu: /* LDA IMM A9 03 */
    c->pc = 0xA3BCu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3BCu: /* STA ABX 9D 40 06 */
    c->pc = 0xA3BFu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3BFu: /* LDA IMM A9 76 */
    c->pc = 0xA3C1u;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3C1u: /* STA ABX 9D 60 06 */
    c->pc = 0xA3C4u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3C4u: /* LDA IMM A9 01 */
    c->pc = 0xA3C6u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3C6u: /* STA ABX 9D 00 06 */
    c->pc = 0xA3C9u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3C9u: /* LDA IMM A9 7B */
    c->pc = 0xA3CBu;
    v = 0x7Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3CBu: /* STA ABX 9D 20 06 */
    c->pc = 0xA3CEu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3CEu: /* INC ABX FE A0 06 */
    c->pc = 0xA3D1u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA3D1u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA3D3u ^ 0xA3E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3D3u; } return 1;
case 0xA3D3u: /* LDA ZP A5 00 */
    c->pc = 0xA3D5u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3D5u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3D7u ^ 0xA3E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3D7u; } return 1;
case 0xA3D7u: /* LDA IMM A9 08 */
    c->pc = 0xA3D9u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3D9u: /* STA ABX 9D A0 06 */
    c->pc = 0xA3DCu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3DCu: /* LDA IMM A9 32 */
    c->pc = 0xA3DEu;
    v = 0x32u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3DEu: /* STA ABX 9D E0 04 */
    c->pc = 0xA3E1u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3E1u: /* LDA IMM A9 00 */
    c->pc = 0xA3E3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3E3u: /* STA ABX 9D 20 06 */
    c->pc = 0xA3E6u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3E6u: /* STA ABX 9D 00 06 */
    c->pc = 0xA3E9u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3E9u: /* JSR ABS 20 BA EE */
    push(c, 0xA3u); push(c, 0xEBu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA3ECu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA3EDu: /* LDA ABX BD 20 06 */
    c->pc = 0xA3F0u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3F0u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA3F2u ^ 0xA3FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3F2u; } return 1;
case 0xA3F2u: /* LDA IMM A9 1E */
    c->pc = 0xA3F4u;
    v = 0x1Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3F4u: /* JSR ABS 20 B5 95 */
    push(c, 0xA3u); push(c, 0xF6u); c->pc = 0x95B5u; c->cpu_cycles += 6u; return 1;
case 0xA3F7u: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA3F9u ^ 0xA3FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3F9u; } return 1;
case 0xA3F9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA3FAu: /* LDA ABS AD 60 04 */
    c->pc = 0xA3FDu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA3FDu: /* STA ABX 9D 60 04 */
    c->pc = 0xA400u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA400u: /* LDA ABS AD 40 04 */
    c->pc = 0xA403u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA403u: /* STA ABX 9D 40 04 */
    c->pc = 0xA406u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA406u: /* LDA ABX BD E0 04 */
    c->pc = 0xA409u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA409u: /* BNE REL D0 37 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA40Bu ^ 0xA442u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA442u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA40Bu; } return 1;
case 0xA40Bu: /* LDA IMM A9 01 */
    c->pc = 0xA40Du;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA40Du: /* STA ZP 85 01 */
    c->pc = 0xA40Fu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA40Fu: /* LDA IMM A9 1F */
    c->pc = 0xA411u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA411u: /* JSR ABS 20 CF 96 */
    push(c, 0xA4u); push(c, 0x13u); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xA414u: /* BCS REL B0 27 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA416u ^ 0xA43Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA43Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA416u; } return 1;
case 0xA416u: /* LDA IMM A9 1F */
    c->pc = 0xA418u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA418u: /* JSR ABS 20 59 F1 */
    push(c, 0xA4u); push(c, 0x1Au); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA41Bu: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA41Du ^ 0xA43Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA43Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA41Du; } return 1;
case 0xA41Du: /* CLC IMP 18 */
    c->pc = 0xA41Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA41Eu: /* LDA ABY B9 70 04 */
    c->pc = 0xA421u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA421u: /* ADC IMM 69 78 */
    c->pc = 0xA423u;
    v = 0x78u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA423u: /* STA ABY 99 70 04 */
    c->pc = 0xA426u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA426u: /* LDA ABY B9 50 04 */
    c->pc = 0xA429u;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA429u: /* ADC IMM 69 00 */
    c->pc = 0xA42Bu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA42Bu: /* STA ABY 99 50 04 */
    c->pc = 0xA42Eu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA42Eu: /* SEC IMP 38 */
    c->pc = 0xA42Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA42Fu: /* LDA ABS AD A0 04 */
    c->pc = 0xA432u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA432u: /* SBC IMM E9 2C */
    c->pc = 0xA434u;
    v = 0x2Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA434u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA436u ^ 0xA438u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA438u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA436u; } return 1;
case 0xA436u: /* LDA IMM A9 08 */
    c->pc = 0xA438u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA438u: /* STA ABY 99 B0 04 */
    c->pc = 0xA43Bu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA43Bu: /* LDX ZP A6 2B */
    c->pc = 0xA43Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA43Du: /* LDA IMM A9 1F */
    c->pc = 0xA43Fu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA43Fu: /* STA ABX 9D E0 04 */
    c->pc = 0xA442u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA442u: /* DEC ABX DE E0 04 */
    c->pc = 0xA445u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA445u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA446u: /* LDA IMM A9 08 */
    c->pc = 0xA448u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA448u: /* STA ZP 85 01 */
    c->pc = 0xA44Au;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA44Au: /* LDA IMM A9 14 */
    c->pc = 0xA44Cu;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA44Cu: /* STA ZP 85 02 */
    c->pc = 0xA44Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA44Eu: /* JSR ABS 20 2C F0 */
    push(c, 0xA4u); push(c, 0x50u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xA451u: /* LDA ZP A5 00 */
    c->pc = 0xA453u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA453u: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA455u ^ 0xA470u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA470u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA455u; } return 1;
case 0xA455u: /* LDA ABX BD E0 04 */
    c->pc = 0xA458u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA458u: /* CMP IMM C9 13 */
    c->pc = 0xA45Au;
    v = 0x13u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA45Au: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA45Cu ^ 0xA46Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA46Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA45Cu; } return 1;
case 0xA45Cu: /* LDA IMM A9 04 */
    c->pc = 0xA45Eu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA45Eu: /* STA ABX 9D 40 06 */
    c->pc = 0xA461u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA461u: /* LDA IMM A9 78 */
    c->pc = 0xA463u;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA463u: /* STA ABX 9D 60 06 */
    c->pc = 0xA466u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA466u: /* LDA IMM A9 00 */
    c->pc = 0xA468u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA468u: /* STA ABX 9D E0 04 */
    c->pc = 0xA46Bu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA46Bu: /* INC ABX FE E0 04 */
    c->pc = 0xA46Eu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA46Eu: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA470u ^ 0xA47Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA47Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA470u; } return 1;
case 0xA470u: /* LDA IMM A9 02 */
    c->pc = 0xA472u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA472u: /* STA ABX 9D A0 06 */
    c->pc = 0xA475u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA475u: /* LDA IMM A9 03 */
    c->pc = 0xA477u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA477u: /* STA ABX 9D 80 06 */
    c->pc = 0xA47Au;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA47Au: /* JSR ABS 20 BA EE */
    push(c, 0xA4u); push(c, 0x7Cu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA47Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA47Eu: /* LDA IMM A9 1E */
    c->pc = 0xA480u;
    v = 0x1Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA480u: /* STA ZP 85 00 */
    c->pc = 0xA482u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA482u: /* JMP ABS 4C 52 96 */
    c->pc = 0x9652u; c->cpu_cycles += 3u; return 1;
case 0xA485u: /* LDA ABX BD E0 04 */
    c->pc = 0xA488u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA488u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA48Au ^ 0xA49Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA49Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA48Au; } return 1;
case 0xA48Au: /* LDA IMM A9 03 */
    c->pc = 0xA48Cu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA48Cu: /* STA ZP 85 01 */
    c->pc = 0xA48Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA48Eu: /* LDA IMM A9 22 */
    c->pc = 0xA490u;
    v = 0x22u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA490u: /* JSR ABS 20 CF 96 */
    push(c, 0xA4u); push(c, 0x92u); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xA493u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA495u ^ 0xA49Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA49Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA495u; } return 1;
case 0xA495u: /* LDA IMM A9 22 */
    c->pc = 0xA497u;
    v = 0x22u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA497u: /* JSR ABS 20 59 F1 */
    push(c, 0xA4u); push(c, 0x99u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA49Au: /* LDA IMM A9 DA */
    c->pc = 0xA49Cu;
    v = 0xDAu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA49Cu: /* STA ABX 9D E0 04 */
    c->pc = 0xA49Fu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA49Fu: /* DEC ABX DE E0 04 */
    c->pc = 0xA4A2u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA4A2u: /* JSR ABS 20 B3 EF */
    push(c, 0xA4u); push(c, 0xA4u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA4A5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA4A6u: /* LDA ABX BD E0 04 */
    c->pc = 0xA4A9u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA4A9u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA4ABu ^ 0xA4BBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4BBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4ABu; } return 1;
case 0xA4ABu: /* LDA IMM A9 00 */
    c->pc = 0xA4ADu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4ADu: /* STA ZP 85 09 */
    c->pc = 0xA4AFu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4AFu: /* LDA IMM A9 42 */
    c->pc = 0xA4B1u;
    v = 0x42u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4B1u: /* STA ZP 85 08 */
    c->pc = 0xA4B3u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4B3u: /* JSR ABS 20 97 F1 */
    push(c, 0xA4u); push(c, 0xB5u); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0xA4B6u: /* LDA IMM A9 10 */
    c->pc = 0xA4B8u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4B8u: /* STA ABX 9D E0 04 */
    c->pc = 0xA4BBu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA4BBu: /* DEC ABX DE E0 04 */
    c->pc = 0xA4BEu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA4BEu: /* JSR ABS 20 BA EE */
    push(c, 0xA4u); push(c, 0xC0u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA4C1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA4C2u: /* LDA ABX BD 20 06 */
    c->pc = 0xA4C5u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA4C5u: /* BNE REL D0 25 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA4C7u ^ 0xA4ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4C7u; } return 1;
case 0xA4C7u: /* LDA IMM A9 6E */
    c->pc = 0xA4C9u;
    v = 0x6Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4C9u: /* STA ABX 9D E0 04 */
    c->pc = 0xA4CCu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA4CCu: /* INC ABX FE 20 06 */
    c->pc = 0xA4CFu;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA4CFu: /* LDA IMM A9 00 */
    c->pc = 0xA4D1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4D1u: /* STA ABX 9D 20 04 */
    c->pc = 0xA4D4u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA4D4u: /* LDA IMM A9 01 */
    c->pc = 0xA4D6u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4D6u: /* STA ZP 85 01 */
    c->pc = 0xA4D8u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4D8u: /* LDA IMM A9 23 */
    c->pc = 0xA4DAu;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4DAu: /* JSR ABS 20 CF 96 */
    push(c, 0xA4u); push(c, 0xDCu); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xA4DDu: /* LDA IMM A9 83 */
    c->pc = 0xA4DFu;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4DFu: /* STA ABX 9D 20 04 */
    c->pc = 0xA4E2u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA4E2u: /* BCS REL B0 5D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA4E4u ^ 0xA541u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA541u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4E4u; } return 1;
case 0xA4E4u: /* LDA IMM A9 26 */
    c->pc = 0xA4E6u;
    v = 0x26u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4E6u: /* JSR ABS 20 59 F1 */
    push(c, 0xA4u); push(c, 0xE8u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA4E9u: /* JMP ABS 4C 41 A5 */
    c->pc = 0xA541u; c->cpu_cycles += 3u; return 1;
case 0xA4ECu: /* LDA ABX BD E0 04 */
    c->pc = 0xA4EFu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA4EFu: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA4F1u ^ 0xA4FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4F1u; } return 1;
case 0xA4F1u: /* LDA ABX BD A0 06 */
    c->pc = 0xA4F4u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA4F4u: /* CMP IMM C9 02 */
    c->pc = 0xA4F6u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA4F6u: /* BNE REL D0 49 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA4F8u ^ 0xA541u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA541u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4F8u; } return 1;
case 0xA4F8u: /* LDA IMM A9 00 */
    c->pc = 0xA4FAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4FAu: /* STA ABX 9D A0 06 */
    c->pc = 0xA4FDu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA4FDu: /* BEQ REL F0 42 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA4FFu ^ 0xA541u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA541u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4FFu; } return 1;
case 0xA4FFu: /* LDA ABX BD A0 06 */
    c->pc = 0xA502u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA502u: /* CMP IMM C9 04 */
    c->pc = 0xA504u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA504u: /* BNE REL D0 3E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA506u ^ 0xA544u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA544u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA506u; } return 1;
case 0xA506u: /* LDA ABX BD 80 06 */
    c->pc = 0xA509u;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA509u: /* BNE REL D0 39 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA50Bu ^ 0xA544u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA544u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA50Bu; } return 1;
case 0xA50Bu: /* JSR ABS 20 EE EF */
    push(c, 0xA5u); push(c, 0x0Du); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xA50Eu: /* LDA IMM A9 24 */
    c->pc = 0xA510u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA510u: /* JSR ABS 20 59 F1 */
    push(c, 0xA5u); push(c, 0x12u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA513u: /* BCS REL B0 21 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA515u ^ 0xA536u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA536u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA515u; } return 1;
case 0xA515u: /* SEC IMP 38 */
    c->pc = 0xA516u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA516u: /* LDA ZP A5 4A */
    c->pc = 0xA518u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA518u: /* AND IMM 29 1F */
    c->pc = 0xA51Au;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA51Au: /* STA ZP 85 4A */
    c->pc = 0xA51Cu;
    ea = 0x4Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA51Cu: /* SEC IMP 38 */
    c->pc = 0xA51Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA51Du: /* LDA ZP A5 00 */
    c->pc = 0xA51Fu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA51Fu: /* SBC ZP E5 4A */
    c->pc = 0xA521u;
    ea = 0x4Au;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA521u: /* STA ZP 85 00 */
    c->pc = 0xA523u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA523u: /* LDA IMM A9 00 */
    c->pc = 0xA525u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA525u: /* ASL ZP 06 00 */
    c->pc = 0xA527u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA527u: /* ROL IMP 2A */
    c->pc = 0xA528u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA528u: /* ASL ZP 06 00 */
    c->pc = 0xA52Au;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA52Au: /* ROL IMP 2A */
    c->pc = 0xA52Bu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA52Bu: /* ASL ZP 06 00 */
    c->pc = 0xA52Du;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA52Du: /* ROL IMP 2A */
    c->pc = 0xA52Eu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA52Eu: /* STA ABY 99 10 06 */
    c->pc = 0xA531u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA531u: /* LDA ZP A5 00 */
    c->pc = 0xA533u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA533u: /* STA ABY 99 30 06 */
    c->pc = 0xA536u;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA536u: /* LDA ZP A5 4A */
    c->pc = 0xA538u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA538u: /* AND IMM 29 03 */
    c->pc = 0xA53Au;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA53Au: /* TAY IMP A8 */
    c->pc = 0xA53Bu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA53Bu: /* LDA ABY B9 56 A5 */
    c->pc = 0xA53Eu;
    ea = (uint16_t)(0xA556u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA556u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA53Eu: /* STA ABX 9D E0 04 */
    c->pc = 0xA541u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA541u: /* DEC ABX DE E0 04 */
    c->pc = 0xA544u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA544u: /* JSR ABS 20 B3 EF */
    push(c, 0xA5u); push(c, 0x46u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA547u: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA549u ^ 0xA555u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA555u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA549u; } return 1;
case 0xA549u: /* LDA IMM A9 23 */
    c->pc = 0xA54Bu;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA54Bu: /* JSR ABS 20 10 F0 */
    push(c, 0xA5u); push(c, 0x4Du); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xA54Eu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA550u ^ 0xA555u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA555u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA550u; } return 1;
case 0xA550u: /* LDA IMM A9 28 */
    c->pc = 0xA552u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA552u: /* JSR ABS 20 59 F1 */
    push(c, 0xA5u); push(c, 0x54u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA555u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA55Au: /* LDA ABS AD 57 03 */
    c->pc = 0xA55Du;
    ea = 0x0357u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA55Du: /* CMP IMM C9 0F */
    c->pc = 0xA55Fu;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA55Fu: /* BEQ REL F0 37 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA561u ^ 0xA598u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA598u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA561u; } return 1;
case 0xA561u: /* LDA IMM A9 23 */
    c->pc = 0xA563u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA563u: /* JSR ABS 20 10 F0 */
    push(c, 0xA5u); push(c, 0x65u); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xA566u: /* BCC REL 90 30 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA568u ^ 0xA598u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA598u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA568u; } return 1;
case 0xA568u: /* LDA IMM A9 26 */
    c->pc = 0xA56Au;
    v = 0x26u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA56Au: /* JSR ABS 20 10 F0 */
    push(c, 0xA5u); push(c, 0x6Cu); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xA56Du: /* BCC REL 90 29 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA56Fu ^ 0xA598u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA598u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA56Fu; } return 1;
case 0xA56Fu: /* LDA ABX BD E0 04 */
    c->pc = 0xA572u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA572u: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA574u ^ 0xA5A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA574u; } return 1;
case 0xA574u: /* LDA ABX BD 20 06 */
    c->pc = 0xA577u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA577u: /* ASL IMP 0A */
    c->pc = 0xA578u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA578u: /* ASL IMP 0A */
    c->pc = 0xA579u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA579u: /* STA ZP 85 00 */
    c->pc = 0xA57Bu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA57Bu: /* ASL IMP 0A */
    c->pc = 0xA57Cu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA57Cu: /* CLC IMP 18 */
    c->pc = 0xA57Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA57Du: /* ADC ZP 65 00 */
    c->pc = 0xA57Fu;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA57Fu: /* TAX IMP AA */
    c->pc = 0xA580u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA580u: /* LDY IMM A0 00 */
    c->pc = 0xA582u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA582u: /* LDA ABX BD D6 A5 */
    c->pc = 0xA585u;
    ea = (uint16_t)(0xA5D6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA5D6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA585u: /* STA ABY 99 56 03 */
    c->pc = 0xA588u;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA588u: /* INX IMP E8 */
    c->pc = 0xA589u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA589u: /* INY IMP C8 */
    c->pc = 0xA58Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA58Au: /* CPY IMM C0 0C */
    c->pc = 0xA58Cu;
    v = 0x0Cu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xA58Cu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA58Eu ^ 0xA582u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA582u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA58Eu; } return 1;
case 0xA58Eu: /* LDX ZP A6 2B */
    c->pc = 0xA590u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA590u: /* INC ABX FE 20 06 */
    c->pc = 0xA593u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA593u: /* LDA ABX BD 20 06 */
    c->pc = 0xA596u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA596u: /* CMP IMM C9 04 */
    c->pc = 0xA598u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA598u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA59Au ^ 0xA5A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA59Au; } return 1;
case 0xA59Au: /* LSR ABX 5E 20 04 */
    c->pc = 0xA59Du;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA59Du: /* LDA IMM A9 FF */
    c->pc = 0xA59Fu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA59Fu: /* STA ABX 9D F0 00 */
    c->pc = 0xA5A2u;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA5A2u: /* LDA IMM A9 08 */
    c->pc = 0xA5A4u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5A4u: /* STA ABX 9D E0 04 */
    c->pc = 0xA5A7u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA5A7u: /* DEC ABX DE E0 04 */
    c->pc = 0xA5AAu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA5AAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA5ABu: /* LDA ABX BD E0 04 */
    c->pc = 0xA5AEu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5AEu: /* BNE REL D0 F7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5B0u ^ 0xA5A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5B0u; } return 1;
case 0xA5B0u: /* CLC IMP 18 */
    c->pc = 0xA5B1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5B1u: /* LDA ABX BD 20 06 */
    c->pc = 0xA5B4u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5B4u: /* ADC IMM 69 03 */
    c->pc = 0xA5B6u;
    v = 0x03u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5B6u: /* BNE REL D0 BF */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5B8u ^ 0xA577u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA577u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5B8u; } return 1;
case 0xA5B8u: /* LDA ABX BD E0 04 */
    c->pc = 0xA5BBu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5BBu: /* BNE REL D0 EA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5BDu ^ 0xA5A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5BDu; } return 1;
case 0xA5BDu: /* LDA ABX BD 20 06 */
    c->pc = 0xA5C0u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5C0u: /* EOR IMM 49 03 */
    c->pc = 0xA5C2u;
    v = 0x03u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5C2u: /* JMP ABS 4C 77 A5 */
    c->pc = 0xA577u; c->cpu_cycles += 3u; return 1;
case 0xA5C5u: /* LDA ABX BD E0 04 */
    c->pc = 0xA5C8u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5C8u: /* BNE REL D0 DD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5CAu ^ 0xA5A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5CAu; } return 1;
case 0xA5CAu: /* SEC IMP 38 */
    c->pc = 0xA5CBu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5CBu: /* LDA ABX BD 20 06 */
    c->pc = 0xA5CEu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5CEu: /* EOR IMM 49 03 */
    c->pc = 0xA5D0u;
    v = 0x03u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5D0u: /* CLC IMP 18 */
    c->pc = 0xA5D1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5D1u: /* ADC IMM 69 03 */
    c->pc = 0xA5D3u;
    v = 0x03u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5D3u: /* JMP ABS 4C 77 A5 */
    c->pc = 0xA577u; c->cpu_cycles += 3u; return 1;
case 0xA62Au: /* LDA ABX BD 10 01 */
    c->pc = 0xA62Du;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA62Du: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA62Fu ^ 0xA657u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA657u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA62Fu; } return 1;
case 0xA62Fu: /* INC ABX FE E0 04 */
    c->pc = 0xA632u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA632u: /* LDA ABX BD E0 04 */
    c->pc = 0xA635u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA635u: /* CMP IMM C9 3E */
    c->pc = 0xA637u;
    v = 0x3Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA637u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA639u ^ 0xA653u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA653u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA639u; } return 1;
case 0xA639u: /* LDA IMM A9 2A */
    c->pc = 0xA63Bu;
    v = 0x2Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA63Bu: /* JSR ABS 20 59 F1 */
    push(c, 0xA6u); push(c, 0x3Du); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA63Eu: /* BCS REL B0 13 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA640u ^ 0xA653u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA653u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA640u; } return 1;
case 0xA640u: /* LDA IMM A9 08 */
    c->pc = 0xA642u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA642u: /* STA ABY 99 B0 04 */
    c->pc = 0xA645u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA645u: /* LDA ZP A5 2B */
    c->pc = 0xA647u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA647u: /* STA ABY 99 20 01 */
    c->pc = 0xA64Au;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA64Au: /* TYA IMP 98 */
    c->pc = 0xA64Bu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA64Bu: /* STA ABX 9D 10 01 */
    c->pc = 0xA64Eu;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA64Eu: /* LDA IMM A9 00 */
    c->pc = 0xA650u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA650u: /* STA ABX 9D E0 04 */
    c->pc = 0xA653u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA653u: /* JSR ABS 20 B3 EF */
    push(c, 0xA6u); push(c, 0x55u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA656u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA657u: /* LDY ABX BC 10 01 */
    c->pc = 0xA65Au;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA65Au: /* CPY IMM C0 FF */
    c->pc = 0xA65Cu;
    v = 0xFFu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xA65Cu: /* BEQ REL F0 45 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA65Eu ^ 0xA6A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA65Eu; } return 1;
case 0xA65Eu: /* LDA ABX BD E0 04 */
    c->pc = 0xA661u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA661u: /* CMP IMM C9 04 */
    c->pc = 0xA663u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA663u: /* BCS REL B0 24 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA665u ^ 0xA689u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA689u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA665u; } return 1;
case 0xA665u: /* SEC IMP 38 */
    c->pc = 0xA666u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA666u: /* LDA ABX BD A0 04 */
    c->pc = 0xA669u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA669u: /* SBC ABY F9 B0 04 */
    c->pc = 0xA66Cu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA66Cu: /* CMP IMM C9 20 */
    c->pc = 0xA66Eu;
    v = 0x20u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA66Eu: /* BCS REL B0 E3 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA670u ^ 0xA653u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA653u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA670u; } return 1;
case 0xA670u: /* LDA IMM A9 D4 */
    c->pc = 0xA672u;
    v = 0xD4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA672u: /* STA ABY 99 70 06 */
    c->pc = 0xA675u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA675u: /* LDA IMM A9 02 */
    c->pc = 0xA677u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA677u: /* STA ABY 99 50 06 */
    c->pc = 0xA67Au;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA67Au: /* INC ABX FE E0 04 */
    c->pc = 0xA67Du;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA67Du: /* LDA ABX BD E0 04 */
    c->pc = 0xA680u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA680u: /* CMP IMM C9 04 */
    c->pc = 0xA682u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA682u: /* BNE REL D0 CF */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA684u ^ 0xA653u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA653u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA684u; } return 1;
case 0xA684u: /* LDA IMM A9 87 */
    c->pc = 0xA686u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA686u: /* STA ABX 9D 20 04 */
    c->pc = 0xA689u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA689u: /* SEC IMP 38 */
    c->pc = 0xA68Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA68Au: /* LDA ABX BD A0 04 */
    c->pc = 0xA68Du;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA68Du: /* SBC IMM E9 20 */
    c->pc = 0xA68Fu;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA68Fu: /* STA ABY 99 B0 04 */
    c->pc = 0xA692u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA692u: /* LDA ABX BD 60 04 */
    c->pc = 0xA695u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA695u: /* STA ABY 99 70 04 */
    c->pc = 0xA698u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA698u: /* LDA ABX BD 40 04 */
    c->pc = 0xA69Bu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA69Bu: /* STA ABY 99 50 04 */
    c->pc = 0xA69Eu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA69Eu: /* LDA IMM A9 00 */
    c->pc = 0xA6A0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6A0u: /* STA ABY 99 50 06 */
    c->pc = 0xA6A3u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6A3u: /* LDA IMM A9 0F */
    c->pc = 0xA6A5u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6A5u: /* STA ZP 85 01 */
    c->pc = 0xA6A7u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6A7u: /* LDA IMM A9 0E */
    c->pc = 0xA6A9u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6A9u: /* STA ZP 85 02 */
    c->pc = 0xA6ABu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6ABu: /* JSR ABS 20 CF F0 */
    push(c, 0xA6u); push(c, 0xADu); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xA6AEu: /* LDA ABX BD E0 04 */
    c->pc = 0xA6B1u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA6B1u: /* CMP IMM C9 04 */
    c->pc = 0xA6B3u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6B3u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA6B5u ^ 0xA6C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6B5u; } return 1;
case 0xA6B5u: /* LDA ZP A5 00 */
    c->pc = 0xA6B7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6B7u: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6B9u ^ 0xA6C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6B9u; } return 1;
case 0xA6B9u: /* JSR ABS 20 EE EF */
    push(c, 0xA6u); push(c, 0xBBu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xA6BCu: /* LDA IMM A9 47 */
    c->pc = 0xA6BEu;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6BEu: /* STA ABX 9D 20 06 */
    c->pc = 0xA6C1u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6C1u: /* LDA IMM A9 01 */
    c->pc = 0xA6C3u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6C3u: /* STA ABX 9D 00 06 */
    c->pc = 0xA6C6u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6C6u: /* INC ABX FE E0 04 */
    c->pc = 0xA6C9u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA6C9u: /* LDA ZP A5 03 */
    c->pc = 0xA6CBu;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6CBu: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6CDu ^ 0xA6D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6CDu; } return 1;
case 0xA6CDu: /* LDA ABX BD 20 04 */
    c->pc = 0xA6D0u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA6D0u: /* EOR IMM 49 40 */
    c->pc = 0xA6D2u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6D2u: /* STA ABX 9D 20 04 */
    c->pc = 0xA6D5u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6D5u: /* JSR ABS 20 BA EE */
    push(c, 0xA6u); push(c, 0xD7u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA6D8u: /* BCC REL 90 16 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA6DAu ^ 0xA6F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6DAu; } return 1;
case 0xA6DAu: /* LDY ABX BC 10 01 */
    c->pc = 0xA6DDu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA6DDu: /* CPY IMM C0 FF */
    c->pc = 0xA6DFu;
    v = 0xFFu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6DFu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6E1u ^ 0xA6F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6E1u; } return 1;
case 0xA6E1u: /* LDA IMM A9 FF */
    c->pc = 0xA6E3u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6E3u: /* STA ABY 99 20 01 */
    c->pc = 0xA6E6u;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6E6u: /* LDA IMM A9 D4 */
    c->pc = 0xA6E8u;
    v = 0xD4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6E8u: /* STA ABY 99 70 06 */
    c->pc = 0xA6EBu;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6EBu: /* LDA IMM A9 02 */
    c->pc = 0xA6EDu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6EDu: /* STA ABY 99 50 06 */
    c->pc = 0xA6F0u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6F0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA6F1u: /* JSR ABS 20 BA EE */
    push(c, 0xA6u); push(c, 0xF3u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA6F4u: /* BCC REL 90 16 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA6F6u ^ 0xA70Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA70Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6F6u; } return 1;
case 0xA6F6u: /* LDY ABX BC 10 01 */
    c->pc = 0xA6F9u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA6F9u: /* CPY IMM C0 FF */
    c->pc = 0xA6FBu;
    v = 0xFFu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6FBu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6FDu ^ 0xA70Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA70Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6FDu; } return 1;
case 0xA6FDu: /* LDA IMM A9 00 */
    c->pc = 0xA6FFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6FFu: /* STA ABY 99 00 06 */
    c->pc = 0xA702u;
    ea = (uint16_t)(0x0600u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA702u: /* LDA IMM A9 A3 */
    c->pc = 0xA704u;
    v = 0xA3u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA704u: /* STA ABY 99 20 06 */
    c->pc = 0xA707u;
    ea = (uint16_t)(0x0620u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA707u: /* LDA IMM A9 FF */
    c->pc = 0xA709u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA709u: /* STA ABY 99 10 01 */
    c->pc = 0xA70Cu;
    ea = (uint16_t)(0x0110u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA70Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA70Du: /* LDA ABX BD E0 04 */
    c->pc = 0xA710u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA710u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA712u ^ 0xA727u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA727u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA712u; } return 1;
case 0xA712u: /* LDA IMM A9 02 */
    c->pc = 0xA714u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA714u: /* STA ZP 85 01 */
    c->pc = 0xA716u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA716u: /* LDA IMM A9 2C */
    c->pc = 0xA718u;
    v = 0x2Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA718u: /* JSR ABS 20 CF 96 */
    push(c, 0xA7u); push(c, 0x1Au); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xA71Bu: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA71Du ^ 0xA722u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA722u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA71Du; } return 1;
case 0xA71Du: /* LDA IMM A9 2C */
    c->pc = 0xA71Fu;
    v = 0x2Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA71Fu: /* JSR ABS 20 59 F1 */
    push(c, 0xA7u); push(c, 0x21u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA722u: /* LDA IMM A9 7D */
    c->pc = 0xA724u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA724u: /* STA ABX 9D E0 04 */
    c->pc = 0xA727u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA727u: /* DEC ABX DE E0 04 */
    c->pc = 0xA72Au;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA72Au: /* JSR ABS 20 B3 EF */
    push(c, 0xA7u); push(c, 0x2Cu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA72Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA72Eu: /* LDA ABX BD 10 01 */
    c->pc = 0xA731u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA731u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA733u ^ 0xA736u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA736u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA733u; } return 1;
case 0xA733u: /* INC ABX FE 10 01 */
    c->pc = 0xA736u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA736u: /* LDA ABX BD 10 01 */
    c->pc = 0xA739u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA739u: /* CMP IMM C9 02 */
    c->pc = 0xA73Bu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA73Bu: /* BCS REL B0 3C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA73Du ^ 0xA779u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA779u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA73Du; } return 1;
case 0xA73Du: /* LDA IMM A9 00 */
    c->pc = 0xA73Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA73Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xA742u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA742u: /* STA ABX 9D 80 06 */
    c->pc = 0xA745u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA745u: /* LDA IMM A9 08 */
    c->pc = 0xA747u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA747u: /* STA ZP 85 01 */
    c->pc = 0xA749u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA749u: /* LDA IMM A9 14 */
    c->pc = 0xA74Bu;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA74Bu: /* STA ZP 85 02 */
    c->pc = 0xA74Du;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA74Du: /* LDA ABX BD 40 06 */
    c->pc = 0xA750u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA750u: /* PHP IMP 08 */
    c->pc = 0xA751u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xA751u: /* JSR ABS 20 CF F0 */
    push(c, 0xA7u); push(c, 0x53u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xA754u: /* PLP IMP 28 */
    c->pc = 0xA755u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA755u: /* BPL REL 10 78 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA757u ^ 0xA7CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA757u; } return 1;
case 0xA757u: /* LDA ZP A5 00 */
    c->pc = 0xA759u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA759u: /* BEQ REL F0 74 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA75Bu ^ 0xA7CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA75Bu; } return 1;
case 0xA75Bu: /* LDA IMM A9 39 */
    c->pc = 0xA75Du;
    v = 0x39u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA75Du: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0x5Fu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA760u: /* LDA IMM A9 00 */
    c->pc = 0xA762u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA762u: /* STA ABX 9D 40 06 */
    c->pc = 0xA765u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA765u: /* STA ABX 9D 60 06 */
    c->pc = 0xA768u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA768u: /* STA ABX 9D 00 06 */
    c->pc = 0xA76Bu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA76Bu: /* STA ABX 9D 20 06 */
    c->pc = 0xA76Eu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA76Eu: /* LDA ABX BD 20 04 */
    c->pc = 0xA771u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA771u: /* AND IMM 29 FB */
    c->pc = 0xA773u;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA773u: /* STA ABX 9D 20 04 */
    c->pc = 0xA776u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA776u: /* INC ABX FE 10 01 */
    c->pc = 0xA779u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA779u: /* LDA ABX BD 10 01 */
    c->pc = 0xA77Cu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA77Cu: /* CMP IMM C9 02 */
    c->pc = 0xA77Eu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA77Eu: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA780u ^ 0xA794u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA794u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA780u; } return 1;
case 0xA780u: /* LDA ABX BD A0 06 */
    c->pc = 0xA783u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA783u: /* CMP IMM C9 09 */
    c->pc = 0xA785u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA785u: /* BNE REL D0 48 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA787u ^ 0xA7CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA787u; } return 1;
case 0xA787u: /* LDA IMM A9 E5 */
    c->pc = 0xA789u;
    v = 0xE5u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA789u: /* STA ABX 9D 60 06 */
    c->pc = 0xA78Cu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA78Cu: /* LDA IMM A9 47 */
    c->pc = 0xA78Eu;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA78Eu: /* STA ABX 9D E0 04 */
    c->pc = 0xA791u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA791u: /* INC ABX FE 10 01 */
    c->pc = 0xA794u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA794u: /* LDA ABX BD A0 06 */
    c->pc = 0xA797u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA797u: /* CMP IMM C9 0B */
    c->pc = 0xA799u;
    v = 0x0Bu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA799u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA79Bu ^ 0xA7A0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7A0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA79Bu; } return 1;
case 0xA79Bu: /* LDA IMM A9 09 */
    c->pc = 0xA79Du;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA79Du: /* STA ABX 9D A0 06 */
    c->pc = 0xA7A0u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7A0u: /* DEC ABX DE E0 04 */
    c->pc = 0xA7A3u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA7A3u: /* BNE REL D0 2A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA7A5u ^ 0xA7CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7A5u; } return 1;
case 0xA7A5u: /* LDA IMM A9 87 */
    c->pc = 0xA7A7u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7A7u: /* STA ABX 9D 20 04 */
    c->pc = 0xA7AAu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7AAu: /* JSR ABS 20 EE EF */
    push(c, 0xA7u); push(c, 0xACu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xA7ADu: /* LDA IMM A9 00 */
    c->pc = 0xA7AFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7AFu: /* ASL ZP 06 00 */
    c->pc = 0xA7B1u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA7B1u: /* ROL IMP 2A */
    c->pc = 0xA7B2u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7B2u: /* ASL ZP 06 00 */
    c->pc = 0xA7B4u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA7B4u: /* ROL IMP 2A */
    c->pc = 0xA7B5u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7B5u: /* ASL ZP 06 00 */
    c->pc = 0xA7B7u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA7B7u: /* ROL IMP 2A */
    c->pc = 0xA7B8u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7B8u: /* STA ABX 9D 00 06 */
    c->pc = 0xA7BBu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7BBu: /* LDA ZP A5 00 */
    c->pc = 0xA7BDu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7BDu: /* STA ABX 9D 20 06 */
    c->pc = 0xA7C0u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7C0u: /* LDA IMM A9 03 */
    c->pc = 0xA7C2u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7C2u: /* STA ABX 9D 40 06 */
    c->pc = 0xA7C5u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7C5u: /* LDA IMM A9 76 */
    c->pc = 0xA7C7u;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7C7u: /* STA ABX 9D 60 06 */
    c->pc = 0xA7CAu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7CAu: /* LDA IMM A9 01 */
    c->pc = 0xA7CCu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7CCu: /* STA ABX 9D 10 01 */
    c->pc = 0xA7CFu;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7CFu: /* JSR ABS 20 BA EE */
    push(c, 0xA7u); push(c, 0xD1u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA7D2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA7D3u: /* LDA IMM A9 08 */
    c->pc = 0xA7D5u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7D5u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA7D7u ^ 0xA7D9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7D9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7D7u; } return 1;
case 0xA7D7u: /* LDA IMM A9 01 */
    c->pc = 0xA7D9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7D9u: /* STA ABX 9D E0 04 */
    c->pc = 0xA7DCu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7DCu: /* LDA ABX BD 60 04 */
    c->pc = 0xA7DFu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7DFu: /* AND ABX 3D 00 06 */
    c->pc = 0xA7E2u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7E2u: /* STA ABX 9D 40 06 */
    c->pc = 0xA7E5u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7E5u: /* LDA ABX BD A0 04 */
    c->pc = 0xA7E8u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7E8u: /* AND ABX 3D 20 06 */
    c->pc = 0xA7EBu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7EBu: /* STA ABX 9D 60 06 */
    c->pc = 0xA7EEu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7EEu: /* JSR ABS 20 AF EF */
    push(c, 0xA7u); push(c, 0xF0u); c->pc = 0xEFAFu; c->cpu_cycles += 6u; return 1;
case 0xA7F1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA7F2u: /* LDA ABX BD 10 01 */
    c->pc = 0xA7F5u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7F5u: /* BNE REL D0 1F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA7F7u ^ 0xA816u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA816u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7F7u; } return 1;
case 0xA7F7u: /* JSR ABS 20 EE EF */
    push(c, 0xA7u); push(c, 0xF9u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xA7FAu: /* LDA ZP A5 00 */
    c->pc = 0xA7FCu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7FCu: /* CMP IMM C9 28 */
    c->pc = 0xA7FEu;
    v = 0x28u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA7FEu: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA800u ^ 0xA812u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA812u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA800u; } return 1;
case 0xA800u: /* LDA IMM A9 87 */
    c->pc = 0xA802u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA802u: /* STA ABX 9D 20 04 */
    c->pc = 0xA805u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA805u: /* LDA IMM A9 FF */
    c->pc = 0xA807u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA807u: /* STA ABX 9D 40 06 */
    c->pc = 0xA80Au;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA80Au: /* LDA IMM A9 C0 */
    c->pc = 0xA80Cu;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA80Cu: /* STA ABX 9D 60 06 */
    c->pc = 0xA80Fu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA80Fu: /* INC ABX FE 10 01 */
    c->pc = 0xA812u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA812u: /* JSR ABS 20 B3 EF */
    push(c, 0xA8u); push(c, 0x14u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA815u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA816u: /* LDA IMM A9 08 */
    c->pc = 0xA818u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA818u: /* STA ZP 85 01 */
    c->pc = 0xA81Au;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA81Au: /* STA ZP 85 02 */
    c->pc = 0xA81Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA81Cu: /* JSR ABS 20 2C F0 */
    push(c, 0xA8u); push(c, 0x1Eu); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xA81Fu: /* LDA ABX BD 10 01 */
    c->pc = 0xA822u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA822u: /* CMP IMM C9 02 */
    c->pc = 0xA824u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA824u: /* BCS REL B0 26 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA826u ^ 0xA84Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA84Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA826u; } return 1;
case 0xA826u: /* LDA ZP A5 00 */
    c->pc = 0xA828u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA828u: /* BEQ REL F0 49 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA82Au ^ 0xA873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA873u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA82Au; } return 1;
case 0xA82Au: /* LDA IMM A9 21 */
    c->pc = 0xA82Cu;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA82Cu: /* JSR ABS 20 51 C0 */
    push(c, 0xA8u); push(c, 0x2Eu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA82Fu: /* LDA IMM A9 2B */
    c->pc = 0xA831u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA831u: /* STA ABX 9D E0 04 */
    c->pc = 0xA834u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA834u: /* INC ABX FE 10 01 */
    c->pc = 0xA837u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA837u: /* LDA IMM A9 52 */
    c->pc = 0xA839u;
    v = 0x52u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA839u: /* JSR ABS 20 59 F1 */
    push(c, 0xA8u); push(c, 0x3Bu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA83Cu: /* SEC IMP 38 */
    c->pc = 0xA83Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA83Du: /* LDA ABY B9 B0 04 */
    c->pc = 0xA840u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA840u: /* SBC IMM E9 28 */
    c->pc = 0xA842u;
    v = 0x28u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA842u: /* STA ABY 99 B0 04 */
    c->pc = 0xA845u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA845u: /* LDA IMM A9 2B */
    c->pc = 0xA847u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA847u: /* STA ABY 99 F0 04 */
    c->pc = 0xA84Au;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA84Au: /* BNE REL D0 27 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA84Cu ^ 0xA873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA873u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA84Cu; } return 1;
case 0xA84Cu: /* LDA ABX BD E0 04 */
    c->pc = 0xA84Fu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA84Fu: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA851u ^ 0xA867u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA867u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA851u; } return 1;
case 0xA851u: /* DEC ABX DE E0 04 */
    c->pc = 0xA854u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA854u: /* BNE REL D0 1D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA856u ^ 0xA873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA873u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA856u; } return 1;
case 0xA856u: /* LDA IMM A9 00 */
    c->pc = 0xA858u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA858u: /* STA ABX 9D 40 06 */
    c->pc = 0xA85Bu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA85Bu: /* LDA IMM A9 62 */
    c->pc = 0xA85Du;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA85Du: /* STA ABX 9D 60 06 */
    c->pc = 0xA860u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA860u: /* LDA IMM A9 83 */
    c->pc = 0xA862u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA862u: /* STA ABX 9D 20 04 */
    c->pc = 0xA865u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA865u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA867u ^ 0xA873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA873u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA867u; } return 1;
case 0xA867u: /* LDA ZP A5 00 */
    c->pc = 0xA869u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA869u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA86Bu ^ 0xA873u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA873u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA86Bu; } return 1;
case 0xA86Bu: /* LDA IMM A9 00 */
    c->pc = 0xA86Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA86Du: /* STA ABX 9D 60 06 */
    c->pc = 0xA870u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA870u: /* STA ABX 9D 10 01 */
    c->pc = 0xA873u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA873u: /* JSR ABS 20 BA EE */
    push(c, 0xA8u); push(c, 0x75u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA876u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA877u: /* LDA IMM A9 07 */
    c->pc = 0xA879u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA879u: /* STA ZP 85 01 */
    c->pc = 0xA87Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA87Bu: /* LDA IMM A9 08 */
    c->pc = 0xA87Du;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA87Du: /* STA ZP 85 02 */
    c->pc = 0xA87Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA87Fu: /* JSR ABS 20 CF F0 */
    push(c, 0xA8u); push(c, 0x81u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xA882u: /* LDA ABX BD A0 06 */
    c->pc = 0xA885u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA885u: /* CMP IMM C9 0F */
    c->pc = 0xA887u;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA887u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA889u ^ 0xA88Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA88Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA889u; } return 1;
case 0xA889u: /* LDA IMM A9 0E */
    c->pc = 0xA88Bu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA88Bu: /* STA ABX 9D A0 06 */
    c->pc = 0xA88Eu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA88Eu: /* LDA ABX BD E0 04 */
    c->pc = 0xA891u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA891u: /* BEQ REL F0 2E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA893u ^ 0xA8C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA893u; } return 1;
case 0xA893u: /* DEC ABX DE E0 04 */
    c->pc = 0xA896u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA896u: /* BNE REL D0 29 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA898u ^ 0xA8C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA898u; } return 1;
case 0xA898u: /* LDA IMM A9 02 */
    c->pc = 0xA89Au;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA89Au: /* STA ZP 85 01 */
    c->pc = 0xA89Cu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA89Cu: /* LDA IMM A9 33 */
    c->pc = 0xA89Eu;
    v = 0x33u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA89Eu: /* JSR ABS 20 59 F1 */
    push(c, 0xA8u); push(c, 0xA0u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA8A1u: /* BCS REL B0 1C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA8A3u ^ 0xA8BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8A3u; } return 1;
case 0xA8A3u: /* LDA IMM A9 E0 */
    c->pc = 0xA8A5u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8A5u: /* STA ABY 99 B0 04 */
    c->pc = 0xA8A8u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8A8u: /* LDA IMM A9 A8 */
    c->pc = 0xA8AAu;
    v = 0xA8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8AAu: /* STA ABY 99 30 04 */
    c->pc = 0xA8ADu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8ADu: /* LDX ZP A6 01 */
    c->pc = 0xA8AFu;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA8AFu: /* LDA ABX BD C0 A9 */
    c->pc = 0xA8B2u;
    ea = (uint16_t)(0xA9C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8B2u: /* STA ABY 99 F0 04 */
    c->pc = 0xA8B5u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8B5u: /* LDX ZP A6 2B */
    c->pc = 0xA8B7u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA8B7u: /* TXA IMP 8A */
    c->pc = 0xA8B8u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8B8u: /* STA ABY 99 20 01 */
    c->pc = 0xA8BBu;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8BBu: /* DEC ZP C6 01 */
    c->pc = 0xA8BDu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA8BDu: /* BPL REL 10 DD */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA8BFu ^ 0xA89Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA89Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8BFu; } return 1;
case 0xA8BFu: /* LDX ZP A6 2B */
    c->pc = 0xA8C1u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA8C1u: /* LDA ABX BD 10 01 */
    c->pc = 0xA8C4u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8C4u: /* CMP IMM C9 04 */
    c->pc = 0xA8C6u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA8C6u: /* BNE REL D0 1E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA8C8u ^ 0xA8E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8C8u; } return 1;
case 0xA8C8u: /* SEC IMP 38 */
    c->pc = 0xA8C9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA8C9u: /* LDA ABX BD A0 04 */
    c->pc = 0xA8CCu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8CCu: /* SBC IMM E9 20 */
    c->pc = 0xA8CEu;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA8CEu: /* STA ABX 9D A0 04 */
    c->pc = 0xA8D1u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8D1u: /* LDA IMM A9 87 */
    c->pc = 0xA8D3u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8D3u: /* STA ABX 9D 20 04 */
    c->pc = 0xA8D6u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8D6u: /* LDA IMM A9 41 */
    c->pc = 0xA8D8u;
    v = 0x41u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8D8u: /* STA ABX 9D 20 06 */
    c->pc = 0xA8DBu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8DBu: /* LDA IMM A9 00 */
    c->pc = 0xA8DDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8DDu: /* STA ABX 9D 80 06 */
    c->pc = 0xA8E0u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8E0u: /* STA ABX 9D A0 06 */
    c->pc = 0xA8E3u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8E3u: /* STA ABX 9D 10 01 */
    c->pc = 0xA8E6u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8E6u: /* JSR ABS 20 BA EE */
    push(c, 0xA8u); push(c, 0xE8u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA8E9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8EAu: /* LDA ABX BD 10 01 */
    c->pc = 0xA8EDu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8EDu: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA8EFu ^ 0xA8FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8EFu; } return 1;
case 0xA8EFu: /* LDA IMM A9 32 */
    c->pc = 0xA8F1u;
    v = 0x32u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8F1u: /* JSR ABS 20 59 F1 */
    push(c, 0xA8u); push(c, 0xF3u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA8F4u: /* TXA IMP 8A */
    c->pc = 0xA8F5u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8F5u: /* STA ABY 99 F0 04 */
    c->pc = 0xA8F8u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8F8u: /* INC ABX FE 10 01 */
    c->pc = 0xA8FBu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA8FBu: /* LDA ABX BD 20 04 */
    c->pc = 0xA8FEu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8FEu: /* AND IMM 29 08 */
    c->pc = 0xA900u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA900u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA902u ^ 0xA905u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA905u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA902u; } return 1;
case 0xA902u: /* JMP ABS 4C 77 A8 */
    c->pc = 0xA877u; c->cpu_cycles += 3u; return 1;
case 0xA905u: /* LDA IMM A9 07 */
    c->pc = 0xA907u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA907u: /* STA ZP 85 01 */
    c->pc = 0xA909u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA909u: /* LDA IMM A9 28 */
    c->pc = 0xA90Bu;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA90Bu: /* STA ZP 85 02 */
    c->pc = 0xA90Du;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA90Du: /* SEC IMP 38 */
    c->pc = 0xA90Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA90Eu: /* LDA ABX BD 60 04 */
    c->pc = 0xA911u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA911u: /* SBC IMM E9 07 */
    c->pc = 0xA913u;
    v = 0x07u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA913u: /* STA ZP 85 08 */
    c->pc = 0xA915u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA915u: /* LDA ABX BD 40 04 */
    c->pc = 0xA918u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA918u: /* SBC IMM E9 00 */
    c->pc = 0xA91Au;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA91Au: /* STA ZP 85 09 */
    c->pc = 0xA91Cu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA91Cu: /* CLC IMP 18 */
    c->pc = 0xA91Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA91Du: /* LDA IMM A9 00 */
    c->pc = 0xA91Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA91Fu: /* STA ZP 85 0B */
    c->pc = 0xA921u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA921u: /* LDA ABX BD A0 04 */
    c->pc = 0xA924u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA924u: /* ADC IMM 69 20 */
    c->pc = 0xA926u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA926u: /* STA ZP 85 0A */
    c->pc = 0xA928u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA928u: /* JSR ABS 20 C3 CB */
    push(c, 0xA9u); push(c, 0x2Au); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xA92Bu: /* LDX ZP A6 2B */
    c->pc = 0xA92Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA92Du: /* LDY ZP A4 00 */
    c->pc = 0xA92Fu;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA92Fu: /* BEQ REL F0 15 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA931u ^ 0xA946u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA946u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA931u; } return 1;
case 0xA931u: /* LDA ZP A5 08 */
    c->pc = 0xA933u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA933u: /* AND IMM 29 0F */
    c->pc = 0xA935u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA935u: /* EOR IMM 49 0F */
    c->pc = 0xA937u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA937u: /* SEC IMP 38 */
    c->pc = 0xA938u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA938u: /* ADC ABX 7D 60 04 */
    c->pc = 0xA93Bu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA93Bu: /* STA ABX 9D 60 04 */
    c->pc = 0xA93Eu;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA93Eu: /* LDA ABX BD 40 04 */
    c->pc = 0xA941u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA941u: /* ADC IMM 69 00 */
    c->pc = 0xA943u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA943u: /* STA ABX 9D 40 04 */
    c->pc = 0xA946u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA946u: /* JSR ABS 20 2C F0 */
    push(c, 0xA9u); push(c, 0x48u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xA949u: /* LDA ABX BD A0 06 */
    c->pc = 0xA94Cu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA94Cu: /* CMP IMM C9 0C */
    c->pc = 0xA94Eu;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA94Eu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA950u ^ 0xA955u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA955u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA950u; } return 1;
case 0xA950u: /* LDA IMM A9 00 */
    c->pc = 0xA952u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA952u: /* STA ABX 9D A0 06 */
    c->pc = 0xA955u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA955u: /* JSR ABS 20 BA EE */
    push(c, 0xA9u); push(c, 0x57u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xA958u: /* BCS REL B0 5C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA95Au ^ 0xA9B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA95Au; } return 1;
case 0xA95Au: /* LDA ABX BD 00 01 */
    c->pc = 0xA95Du;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA95Du: /* BEQ REL F0 57 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA95Fu ^ 0xA9B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA95Fu; } return 1;
case 0xA95Fu: /* LDA IMM A9 0D */
    c->pc = 0xA961u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA961u: /* STA ABX 9D A0 06 */
    c->pc = 0xA964u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA964u: /* LDA IMM A9 00 */
    c->pc = 0xA966u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA966u: /* STA ABX 9D 80 06 */
    c->pc = 0xA969u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA969u: /* STA ABX 9D 20 06 */
    c->pc = 0xA96Cu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA96Cu: /* STA ABX 9D 00 06 */
    c->pc = 0xA96Fu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA96Fu: /* LDA IMM A9 7E */
    c->pc = 0xA971u;
    v = 0x7Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA971u: /* STA ABX 9D E0 04 */
    c->pc = 0xA974u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA974u: /* JSR ABS 20 EE EF */
    push(c, 0xA9u); push(c, 0x76u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xA977u: /* LDA IMM A9 02 */
    c->pc = 0xA979u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA979u: /* STA ZP 85 01 */
    c->pc = 0xA97Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA97Bu: /* LDA IMM A9 33 */
    c->pc = 0xA97Du;
    v = 0x33u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA97Du: /* JSR ABS 20 59 F1 */
    push(c, 0xA9u); push(c, 0x7Fu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xA980u: /* BCS REL B0 2D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA982u ^ 0xA9AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA982u; } return 1;
case 0xA982u: /* LDX ZP A6 01 */
    c->pc = 0xA984u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA984u: /* CLC IMP 18 */
    c->pc = 0xA985u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA985u: /* LDA ABY B9 B0 04 */
    c->pc = 0xA988u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA988u: /* ADC ABX 7D B7 A9 */
    c->pc = 0xA98Bu;
    ea = (uint16_t)(0xA9B7u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xA9B7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA98Bu: /* STA ABY 99 B0 04 */
    c->pc = 0xA98Eu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA98Eu: /* LDA ABX BD BA A9 */
    c->pc = 0xA991u;
    ea = (uint16_t)(0xA9BAu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9BAu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA991u: /* STA ABY 99 10 06 */
    c->pc = 0xA994u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA994u: /* LDA ABX BD BD A9 */
    c->pc = 0xA997u;
    ea = (uint16_t)(0xA9BDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9BDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA997u: /* STA ABY 99 30 06 */
    c->pc = 0xA99Au;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA99Au: /* LDA IMM A9 04 */
    c->pc = 0xA99Cu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA99Cu: /* STA ABY 99 50 06 */
    c->pc = 0xA99Fu;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA99Fu: /* LDA IMM A9 00 */
    c->pc = 0xA9A1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9A1u: /* STA ABY 99 70 06 */
    c->pc = 0xA9A4u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9A4u: /* LDA IMM A9 FF */
    c->pc = 0xA9A6u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9A6u: /* STA ABY 99 20 01 */
    c->pc = 0xA9A9u;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9A9u: /* LDX ZP A6 2B */
    c->pc = 0xA9ABu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA9ABu: /* DEC ZP C6 01 */
    c->pc = 0xA9ADu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA9ADu: /* BPL REL 10 CC */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA9AFu ^ 0xA97Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA97Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9AFu; } return 1;
case 0xA9AFu: /* LDX ZP A6 2B */
    c->pc = 0xA9B1u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA9B1u: /* LDA IMM A9 8F */
    c->pc = 0xA9B3u;
    v = 0x8Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9B3u: /* STA ABX 9D 20 04 */
    c->pc = 0xA9B6u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9B6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA9C3u: /* LDY ABX BC E0 04 */
    c->pc = 0xA9C6u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9C6u: /* LDA ABY B9 20 04 */
    c->pc = 0xA9C9u;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9C9u: /* BPL REL 10 04 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA9CBu ^ 0xA9CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9CBu; } return 1;
case 0xA9CBu: /* AND IMM 29 08 */
    c->pc = 0xA9CDu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9CDu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA9CFu ^ 0xA9D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9CFu; } return 1;
case 0xA9CFu: /* LSR ABX 5E 20 04 */
    c->pc = 0xA9D2u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA9D2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA9D3u: /* LDA ABY B9 60 04 */
    c->pc = 0xA9D6u;
    ea = (uint16_t)(0x0460u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9D6u: /* STA ABX 9D 60 04 */
    c->pc = 0xA9D9u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9D9u: /* LDA ABY B9 40 04 */
    c->pc = 0xA9DCu;
    ea = (uint16_t)(0x0440u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9DCu: /* STA ABX 9D 40 04 */
    c->pc = 0xA9DFu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9DFu: /* CLC IMP 18 */
    c->pc = 0xA9E0u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA9E0u: /* LDA ABY B9 A0 04 */
    c->pc = 0xA9E3u;
    ea = (uint16_t)(0x04A0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9E3u: /* ADC IMM 69 08 */
    c->pc = 0xA9E5u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA9E5u: /* STA ABX 9D A0 04 */
    c->pc = 0xA9E8u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9E8u: /* JSR ABS 20 B3 EF */
    push(c, 0xA9u); push(c, 0xEAu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xA9EBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA9ECu: /* LDY ABX BC 10 01 */
    c->pc = 0xA9EFu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9EFu: /* BPL REL 10 30 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA9F1u ^ 0xAA21u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA21u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9F1u; } return 1;
case 0xA9F1u: /* LDA IMM A9 07 */
    c->pc = 0xA9F3u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9F3u: /* STA ZP 85 01 */
    c->pc = 0xA9F5u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F5u: /* LDA IMM A9 08 */
    c->pc = 0xA9F7u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9F7u: /* STA ZP 85 02 */
    c->pc = 0xA9F9u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F9u: /* JSR ABS 20 CF F0 */
    push(c, 0xA9u); push(c, 0xFBu); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xA9FCu: /* LDA ZP A5 00 */
    c->pc = 0xA9FEu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9FEu: /* BEQ REL F0 4A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAA00u ^ 0xAA4Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA4Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA00u; } return 1;
case 0xAA00u: /* LDA ABX BD E0 04 */
    c->pc = 0xAA03u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA03u: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAA05u ^ 0xAA0Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA0Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA05u; } return 1;
case 0xAA05u: /* LDA IMM A9 00 */
    c->pc = 0xAA07u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA07u: /* STA ZP 85 4E */
    c->pc = 0xAA09u;
    ea = 0x4Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA09u: /* JMP ABS 4C DA EE */
    c->pc = 0xEEDAu; c->cpu_cycles += 3u; return 1;
case 0xAA0Cu: /* LDA IMM A9 00 */
    c->pc = 0xAA0Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA0Eu: /* STA ABX 9D 20 06 */
    c->pc = 0xAA11u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA11u: /* STA ABX 9D 00 06 */
    c->pc = 0xAA14u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA14u: /* STA ABX 9D 60 06 */
    c->pc = 0xAA17u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA17u: /* LDA IMM A9 02 */
    c->pc = 0xAA19u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA19u: /* STA ABX 9D 40 06 */
    c->pc = 0xAA1Cu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA1Cu: /* INC ABX FE E0 04 */
    c->pc = 0xAA1Fu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAA1Fu: /* BNE REL D0 29 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA21u ^ 0xAA4Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA4Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA21u; } return 1;
case 0xAA21u: /* LDA ABX BD E0 04 */
    c->pc = 0xAA24u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA24u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAA26u ^ 0xAA35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA35u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA26u; } return 1;
case 0xAA26u: /* DEC ABX DE E0 04 */
    c->pc = 0xAA29u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAA29u: /* BNE REL D0 1F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA2Bu ^ 0xAA4Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA4Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA2Bu; } return 1;
case 0xAA2Bu: /* LDA IMM A9 8B */
    c->pc = 0xAA2Du;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA2Du: /* STA ABX 9D 20 04 */
    c->pc = 0xAA30u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA30u: /* LDA IMM A9 04 */
    c->pc = 0xAA32u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA32u: /* STA ABX 9D 40 06 */
    c->pc = 0xAA35u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA35u: /* LDA ABX BD A0 04 */
    c->pc = 0xAA38u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA38u: /* CMP ABY D9 A0 04 */
    c->pc = 0xAA3Bu;
    ea = (uint16_t)(0x04A0u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA3Bu: /* BCS REL B0 0D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAA3Du ^ 0xAA4Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA4Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA3Du; } return 1;
case 0xAA3Du: /* CLC IMP 18 */
    c->pc = 0xAA3Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAA3Eu: /* LDA ABY B9 10 01 */
    c->pc = 0xAA41u;
    ea = (uint16_t)(0x0110u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA41u: /* ADC IMM 69 01 */
    c->pc = 0xAA43u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA43u: /* STA ABY 99 10 01 */
    c->pc = 0xAA46u;
    ea = (uint16_t)(0x0110u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA46u: /* LSR ABX 5E 20 04 */
    c->pc = 0xAA49u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAA49u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAA4Au: /* JSR ABS 20 BA EE */
    push(c, 0xAAu); push(c, 0x4Cu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAA4Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAA4Eu: /* LDA ZP A5 2A */
    c->pc = 0xAA50u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA50u: /* CMP IMM C9 0A */
    c->pc = 0xAA52u;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA52u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA54u ^ 0xAA57u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA57u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA54u; } return 1;
case 0xAA54u: /* JMP ABS 4C 44 AB */
    c->pc = 0xAB44u; c->cpu_cycles += 3u; return 1;
case 0xAA57u: /* LDY IMM A0 08 */
    c->pc = 0xAA59u;
    v = 0x08u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA59u: /* LDA ABX BD A0 06 */
    c->pc = 0xAA5Cu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA5Cu: /* CMP IMM C9 03 */
    c->pc = 0xAA5Eu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA5Eu: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xAA60u ^ 0xAA62u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA62u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA60u; } return 1;
case 0xAA60u: /* LDY IMM A0 10 */
    c->pc = 0xAA62u;
    v = 0x10u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA62u: /* STY ZP 84 02 */
    c->pc = 0xAA64u;
    ea = 0x02u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xAA64u: /* LDA IMM A9 07 */
    c->pc = 0xAA66u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA66u: /* STA ZP 85 01 */
    c->pc = 0xAA68u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA68u: /* JSR ABS 20 CF F0 */
    push(c, 0xAAu); push(c, 0x6Au); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xAA6Bu: /* LDA ABX BD 10 01 */
    c->pc = 0xAA6Eu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA6Eu: /* BNE REL D0 31 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA70u ^ 0xAAA1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAAA1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA70u; } return 1;
case 0xAA70u: /* JSR ABS 20 EE EF */
    push(c, 0xAAu); push(c, 0x72u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xAA73u: /* LDA ZP A5 00 */
    c->pc = 0xAA75u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA75u: /* CMP IMM C9 40 */
    c->pc = 0xAA77u;
    v = 0x40u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA77u: /* BCS REL B0 1D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAA79u ^ 0xAA96u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA96u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA79u; } return 1;
case 0xAA79u: /* LDA ABX BD E0 04 */
    c->pc = 0xAA7Cu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA7Cu: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA7Eu ^ 0xAA93u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA93u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA7Eu; } return 1;
case 0xAA7Eu: /* INC ABX FE A0 06 */
    c->pc = 0xAA81u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAA81u: /* INC ABX FE 10 01 */
    c->pc = 0xAA84u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAA84u: /* LDA ABX BD 20 04 */
    c->pc = 0xAA87u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA87u: /* AND IMM 29 F7 */
    c->pc = 0xAA89u;
    v = 0xF7u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA89u: /* STA ABX 9D 20 04 */
    c->pc = 0xAA8Cu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA8Cu: /* LDA IMM A9 3E */
    c->pc = 0xAA8Eu;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA8Eu: /* STA ABX 9D E0 04 */
    c->pc = 0xAA91u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA91u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA93u ^ 0xAA9Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA9Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA93u; } return 1;
case 0xAA93u: /* DEC ABX DE E0 04 */
    c->pc = 0xAA96u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAA96u: /* LDA IMM A9 00 */
    c->pc = 0xAA98u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA98u: /* STA ABX 9D 80 06 */
    c->pc = 0xAA9Bu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA9Bu: /* STA ABX 9D A0 06 */
    c->pc = 0xAA9Eu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA9Eu: /* JMP ABS 4C 30 AB */
    c->pc = 0xAB30u; c->cpu_cycles += 3u; return 1;
case 0xAAA1u: /* CMP IMM C9 02 */
    c->pc = 0xAAA3u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAAA3u: /* BCS REL B0 5C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAAA5u ^ 0xAB01u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB01u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAAA5u; } return 1;
case 0xAAA5u: /* LDA ABX BD A0 06 */
    c->pc = 0xAAA8u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAAA8u: /* CMP IMM C9 02 */
    c->pc = 0xAAAAu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAAAAu: /* BNE REL D0 3E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAAACu ^ 0xAAEAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAAEAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAAACu; } return 1;
case 0xAAACu: /* LDA IMM A9 25 */
    c->pc = 0xAAAEu;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAAAEu: /* JSR ABS 20 51 C0 */
    push(c, 0xAAu); push(c, 0xB0u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xAAB1u: /* LDA IMM A9 02 */
    c->pc = 0xAAB3u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAAB3u: /* STA ZP 85 01 */
    c->pc = 0xAAB5u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAAB5u: /* LDA IMM A9 35 */
    c->pc = 0xAAB7u;
    v = 0x35u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAAB7u: /* JSR ABS 20 59 F1 */
    push(c, 0xAAu); push(c, 0xB9u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xAABAu: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAABCu ^ 0xAADCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAADCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAABCu; } return 1;
case 0xAABCu: /* LDX ZP A6 01 */
    c->pc = 0xAABEu;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAABEu: /* LDA ABX BD 38 AB */
    c->pc = 0xAAC1u;
    ea = (uint16_t)(0xAB38u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB38u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAAC1u: /* STA ABY 99 70 06 */
    c->pc = 0xAAC4u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAC4u: /* LDA ABX BD 3B AB */
    c->pc = 0xAAC7u;
    ea = (uint16_t)(0xAB3Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB3Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAAC7u: /* STA ABY 99 50 06 */
    c->pc = 0xAACAu;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAACAu: /* LDA ABX BD 3E AB */
    c->pc = 0xAACDu;
    ea = (uint16_t)(0xAB3Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB3Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAACDu: /* STA ABY 99 30 06 */
    c->pc = 0xAAD0u;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAD0u: /* LDA ABX BD 41 AB */
    c->pc = 0xAAD3u;
    ea = (uint16_t)(0xAB41u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB41u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAAD3u: /* STA ABY 99 10 06 */
    c->pc = 0xAAD6u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAD6u: /* LDX ZP A6 2B */
    c->pc = 0xAAD8u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAAD8u: /* DEC ZP C6 01 */
    c->pc = 0xAADAu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xAADAu: /* BPL REL 10 D9 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xAADCu ^ 0xAAB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAAB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAADCu; } return 1;
case 0xAADCu: /* LDA IMM A9 03 */
    c->pc = 0xAADEu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAADEu: /* STA ABX 9D A0 06 */
    c->pc = 0xAAE1u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAE1u: /* SEC IMP 38 */
    c->pc = 0xAAE2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAAE2u: /* LDA ABX BD A0 04 */
    c->pc = 0xAAE5u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAAE5u: /* SBC IMM E9 08 */
    c->pc = 0xAAE7u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAAE7u: /* STA ABX 9D A0 04 */
    c->pc = 0xAAEAu;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAEAu: /* DEC ABX DE E0 04 */
    c->pc = 0xAAEDu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAAEDu: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAAEFu ^ 0xAB24u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB24u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAAEFu; } return 1;
case 0xAAEFu: /* JSR ABS 20 EE EF */
    push(c, 0xAAu); push(c, 0xF1u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xAAF2u: /* LDA IMM A9 02 */
    c->pc = 0xAAF4u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAAF4u: /* STA ABX 9D 00 06 */
    c->pc = 0xAAF7u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAF7u: /* LDA IMM A9 14 */
    c->pc = 0xAAF9u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAAF9u: /* STA ABX 9D E0 04 */
    c->pc = 0xAAFCu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAAFCu: /* INC ABX FE 10 01 */
    c->pc = 0xAAFFu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAAFFu: /* BNE REL D0 23 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAB01u ^ 0xAB24u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB24u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB01u; } return 1;
case 0xAB01u: /* DEC ABX DE E0 04 */
    c->pc = 0xAB04u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAB04u: /* BNE REL D0 1E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAB06u ^ 0xAB24u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB24u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB06u; } return 1;
case 0xAB06u: /* LDA IMM A9 00 */
    c->pc = 0xAB08u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB08u: /* STA ABX 9D 00 06 */
    c->pc = 0xAB0Bu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB0Bu: /* STA ABX 9D A0 06 */
    c->pc = 0xAB0Eu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB0Eu: /* STA ABX 9D 10 01 */
    c->pc = 0xAB11u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB11u: /* LDA ZP A5 4A */
    c->pc = 0xAB13u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB13u: /* AND IMM 29 03 */
    c->pc = 0xAB15u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB15u: /* TAY IMP A8 */
    c->pc = 0xAB16u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAB16u: /* LDA ABY B9 34 AB */
    c->pc = 0xAB19u;
    ea = (uint16_t)(0xAB34u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB34u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAB19u: /* STA ABX 9D E0 04 */
    c->pc = 0xAB1Cu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB1Cu: /* LDA ABX BD 20 04 */
    c->pc = 0xAB1Fu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAB1Fu: /* ORA IMM 09 08 */
    c->pc = 0xAB21u;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB21u: /* STA ABX 9D 20 04 */
    c->pc = 0xAB24u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB24u: /* LDA ABX BD A0 06 */
    c->pc = 0xAB27u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAB27u: /* CMP IMM C9 05 */
    c->pc = 0xAB29u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAB29u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAB2Bu ^ 0xAB30u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB30u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB2Bu; } return 1;
case 0xAB2Bu: /* LDA IMM A9 03 */
    c->pc = 0xAB2Du;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB2Du: /* STA ABX 9D A0 06 */
    c->pc = 0xAB30u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB30u: /* JSR ABS 20 BA EE */
    push(c, 0xABu); push(c, 0x32u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAB33u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAB44u: /* LDA ABX BD E0 04 */
    c->pc = 0xAB47u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAB47u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAB49u ^ 0xAB58u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB58u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB49u; } return 1;
case 0xAB49u: /* LDA ABX BD A0 04 */
    c->pc = 0xAB4Cu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAB4Cu: /* CMP IMM C9 80 */
    c->pc = 0xAB4Eu;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAB4Eu: /* BCC REL 90 29 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xAB50u ^ 0xAB79u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB79u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB50u; } return 1;
case 0xAB50u: /* INC ABX FE E0 04 */
    c->pc = 0xAB53u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAB53u: /* LDA IMM A9 03 */
    c->pc = 0xAB55u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB55u: /* STA ABX 9D 40 06 */
    c->pc = 0xAB58u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB58u: /* LDA IMM A9 08 */
    c->pc = 0xAB5Au;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB5Au: /* STA ZP 85 01 */
    c->pc = 0xAB5Cu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB5Cu: /* LDA IMM A9 10 */
    c->pc = 0xAB5Eu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB5Eu: /* STA ZP 85 02 */
    c->pc = 0xAB60u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB60u: /* JSR ABS 20 2C F0 */
    push(c, 0xABu); push(c, 0x62u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xAB63u: /* LDA ZP A5 00 */
    c->pc = 0xAB65u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB65u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAB67u ^ 0xAB79u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB79u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB67u; } return 1;
case 0xAB67u: /* LDA IMM A9 FF */
    c->pc = 0xAB69u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB69u: /* STA ABX 9D 40 06 */
    c->pc = 0xAB6Cu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB6Cu: /* LDA IMM A9 01 */
    c->pc = 0xAB6Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB6Eu: /* STA ABX 9D 00 06 */
    c->pc = 0xAB71u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB71u: /* LDA IMM A9 00 */
    c->pc = 0xAB73u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB73u: /* STA ABX 9D 60 06 */
    c->pc = 0xAB76u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB76u: /* STA ABX 9D 20 06 */
    c->pc = 0xAB79u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB79u: /* LDA ABX BD A0 06 */
    c->pc = 0xAB7Cu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAB7Cu: /* CMP IMM C9 05 */
    c->pc = 0xAB7Eu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAB7Eu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAB80u ^ 0xAB85u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAB85u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB80u; } return 1;
case 0xAB80u: /* LDA IMM A9 03 */
    c->pc = 0xAB82u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB82u: /* STA ABX 9D A0 06 */
    c->pc = 0xAB85u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAB85u: /* JSR ABS 20 BA EE */
    push(c, 0xABu); push(c, 0x87u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAB88u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAB89u: /* SEC IMP 38 */
    c->pc = 0xAB8Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAB8Au: /* LDA ZP A5 2D */
    c->pc = 0xAB8Cu;
    ea = 0x2Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB8Cu: /* SBC ZP E5 2E */
    c->pc = 0xAB8Eu;
    ea = 0x2Eu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xAB8Eu: /* BCS REL B0 10 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAB90u ^ 0xABA0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xABA0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAB90u; } return 1;
case 0xAB90u: /* LDA IMM A9 01 */
    c->pc = 0xAB92u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB92u: /* STA ZP 85 40 */
    c->pc = 0xAB94u;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB94u: /* LDA IMM A9 00 */
    c->pc = 0xAB96u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB96u: /* STA ZP 85 AF */
    c->pc = 0xAB98u;
    ea = 0xAFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB98u: /* LDA IMM A9 A3 */
    c->pc = 0xAB9Au;
    v = 0xA3u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB9Au: /* STA ZP 85 4F */
    c->pc = 0xAB9Cu;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAB9Cu: /* LDA IMM A9 00 */
    c->pc = 0xAB9Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAB9Eu: /* STA ZP 85 50 */
    c->pc = 0xABA0u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xABA0u: /* JSR ABS 20 B3 EF */
    push(c, 0xABu); push(c, 0xA2u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xABA3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xABA4u: /* LDA ABX BD 20 06 */
    c->pc = 0xABA7u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xABA7u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xABA9u ^ 0xABB1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xABB1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xABA9u; } return 1;
case 0xABA9u: /* LDA IMM A9 37 */
    c->pc = 0xABABu;
    v = 0x37u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABABu: /* JSR ABS 20 B5 95 */
    push(c, 0xABu); push(c, 0xADu); c->pc = 0x95B5u; c->cpu_cycles += 6u; return 1;
case 0xABAEu: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xABB0u ^ 0xABB1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xABB1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xABB0u; } return 1;
case 0xABB0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xABB1u: /* LDA ABS AD 60 04 */
    c->pc = 0xABB4u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xABB4u: /* STA ABX 9D 60 04 */
    c->pc = 0xABB7u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xABB7u: /* LDA ABS AD 40 04 */
    c->pc = 0xABBAu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xABBAu: /* STA ABX 9D 40 04 */
    c->pc = 0xABBDu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xABBDu: /* LDA ABX BD E0 04 */
    c->pc = 0xABC0u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xABC0u: /* BNE REL D0 42 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xABC2u ^ 0xAC04u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC04u; }
    else { c->cpu_cycles += 2u; c->pc = 0xABC2u; } return 1;
case 0xABC2u: /* LDA IMM A9 BB */
    c->pc = 0xABC4u;
    v = 0xBBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABC4u: /* STA ABX 9D E0 04 */
    c->pc = 0xABC7u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xABC7u: /* LDA IMM A9 01 */
    c->pc = 0xABC9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABC9u: /* STA ZP 85 01 */
    c->pc = 0xABCBu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xABCBu: /* LDA IMM A9 38 */
    c->pc = 0xABCDu;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABCDu: /* JSR ABS 20 CF 96 */
    push(c, 0xABu); push(c, 0xCFu); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xABD0u: /* BCS REL B0 32 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xABD2u ^ 0xAC04u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC04u; }
    else { c->cpu_cycles += 2u; c->pc = 0xABD2u; } return 1;
case 0xABD2u: /* LDA IMM A9 02 */
    c->pc = 0xABD4u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABD4u: /* STA ZP 85 01 */
    c->pc = 0xABD6u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xABD6u: /* LDA IMM A9 3C */
    c->pc = 0xABD8u;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABD8u: /* JSR ABS 20 CF 96 */
    push(c, 0xABu); push(c, 0xDAu); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xABDBu: /* BCS REL B0 27 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xABDDu ^ 0xAC04u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC04u; }
    else { c->cpu_cycles += 2u; c->pc = 0xABDDu; } return 1;
case 0xABDDu: /* LDA IMM A9 38 */
    c->pc = 0xABDFu;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABDFu: /* JSR ABS 20 59 F1 */
    push(c, 0xABu); push(c, 0xE1u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xABE2u: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xABE4u ^ 0xAC04u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC04u; }
    else { c->cpu_cycles += 2u; c->pc = 0xABE4u; } return 1;
case 0xABE4u: /* LDX IMM A2 00 */
    c->pc = 0xABE6u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xABE6u: /* LDA ABS AD 20 04 */
    c->pc = 0xABE9u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xABE9u: /* AND IMM 29 40 */
    c->pc = 0xABEBu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xABEBu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xABEDu ^ 0xABEEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xABEEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xABEDu; } return 1;
case 0xABEDu: /* INX IMP E8 */
    c->pc = 0xABEEu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xABEEu: /* LDA ABX BD 0C AC */
    c->pc = 0xABF1u;
    ea = (uint16_t)(0xAC0Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAC0Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xABF1u: /* STA ABY 99 30 04 */
    c->pc = 0xABF4u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xABF4u: /* CLC IMP 18 */
    c->pc = 0xABF5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xABF5u: /* LDA ZP A5 1F */
    c->pc = 0xABF7u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xABF7u: /* ADC ABX 7D 0A AC */
    c->pc = 0xABFAu;
    ea = (uint16_t)(0xAC0Au + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xAC0Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xABFAu: /* STA ABY 99 70 04 */
    c->pc = 0xABFDu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xABFDu: /* LDA ZP A5 20 */
    c->pc = 0xABFFu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xABFFu: /* ADC IMM 69 00 */
    c->pc = 0xAC01u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAC01u: /* STA ABY 99 50 04 */
    c->pc = 0xAC04u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC04u: /* LDX ZP A6 2B */
    c->pc = 0xAC06u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAC06u: /* DEC ABX DE E0 04 */
    c->pc = 0xAC09u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAC09u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAC0Eu: /* LSR ABX 5E 20 04 */
    c->pc = 0xAC11u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAC11u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAC12u: /* LDA ABX BD 10 01 */
    c->pc = 0xAC15u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC15u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAC17u ^ 0xAC27u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC27u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC17u; } return 1;
case 0xAC17u: /* LDA IMM A9 3A */
    c->pc = 0xAC19u;
    v = 0x3Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC19u: /* JSR ABS 20 59 F1 */
    push(c, 0xACu); push(c, 0x1Bu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xAC1Cu: /* BCS REL B0 F0 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAC1Eu ^ 0xAC0Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC0Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC1Eu; } return 1;
case 0xAC1Eu: /* TXA IMP 8A */
    c->pc = 0xAC1Fu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC1Fu: /* STA ABY 99 20 01 */
    c->pc = 0xAC22u;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC22u: /* INY IMP C8 */
    c->pc = 0xAC23u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAC23u: /* TYA IMP 98 */
    c->pc = 0xAC24u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC24u: /* STA ABX 9D 10 01 */
    c->pc = 0xAC27u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC27u: /* LDA ABX BD E0 04 */
    c->pc = 0xAC2Au;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC2Au: /* BNE REL D0 48 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAC2Cu ^ 0xAC74u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC74u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC2Cu; } return 1;
case 0xAC2Cu: /* LDA ABX BD 20 04 */
    c->pc = 0xAC2Fu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC2Fu: /* PHA IMP 48 */
    c->pc = 0xAC30u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAC30u: /* JSR ABS 20 EE EF */
    push(c, 0xACu); push(c, 0x32u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xAC33u: /* PLA IMP 68 */
    c->pc = 0xAC34u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xAC34u: /* STA ABX 9D 20 04 */
    c->pc = 0xAC37u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC37u: /* LDY ABX BC 10 01 */
    c->pc = 0xAC3Au;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC3Au: /* DEY IMP 88 */
    c->pc = 0xAC3Bu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAC3Bu: /* CLC IMP 18 */
    c->pc = 0xAC3Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAC3Cu: /* LDA ABX BD A0 04 */
    c->pc = 0xAC3Fu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC3Fu: /* ADC IMM 69 10 */
    c->pc = 0xAC41u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAC41u: /* STA ABY 99 B0 04 */
    c->pc = 0xAC44u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC44u: /* LDA ABX BD 60 04 */
    c->pc = 0xAC47u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC47u: /* STA ABY 99 70 04 */
    c->pc = 0xAC4Au;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC4Au: /* LDA ABX BD 40 04 */
    c->pc = 0xAC4Du;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC4Du: /* STA ABY 99 50 04 */
    c->pc = 0xAC50u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC50u: /* LDA ZP A5 00 */
    c->pc = 0xAC52u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAC52u: /* CMP IMM C9 30 */
    c->pc = 0xAC54u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAC54u: /* BCC REL 90 0E */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xAC56u ^ 0xAC64u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC64u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC56u; } return 1;
case 0xAC56u: /* LDA ABX BD A0 06 */
    c->pc = 0xAC59u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC59u: /* CMP IMM C9 02 */
    c->pc = 0xAC5Bu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAC5Bu: /* BNE REL D0 23 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAC5Du ^ 0xAC80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC80u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC5Du; } return 1;
case 0xAC5Du: /* LDA IMM A9 00 */
    c->pc = 0xAC5Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC5Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xAC62u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC62u: /* BEQ REL F0 1C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAC64u ^ 0xAC80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC80u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC64u; } return 1;
case 0xAC64u: /* LDA IMM A9 87 */
    c->pc = 0xAC66u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC66u: /* STA ABY 99 30 04 */
    c->pc = 0xAC69u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC69u: /* INC ABX FE E0 04 */
    c->pc = 0xAC6Cu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAC6Cu: /* LDA IMM A9 02 */
    c->pc = 0xAC6Eu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC6Eu: /* STA ABX 9D A0 06 */
    c->pc = 0xAC71u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC71u: /* STA ABX 9D 80 06 */
    c->pc = 0xAC74u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC74u: /* LDA ABX BD A0 06 */
    c->pc = 0xAC77u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC77u: /* CMP IMM C9 03 */
    c->pc = 0xAC79u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAC79u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAC7Bu ^ 0xAC80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC80u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC7Bu; } return 1;
case 0xAC7Bu: /* LDA IMM A9 00 */
    c->pc = 0xAC7Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC7Du: /* STA ABX 9D 80 06 */
    c->pc = 0xAC80u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC80u: /* JSR ABS 20 BA EE */
    push(c, 0xACu); push(c, 0x82u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAC83u: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xAC85u ^ 0xAC8Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAC8Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC85u; } return 1;
case 0xAC85u: /* LDY ABX BC 10 01 */
    c->pc = 0xAC88u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC88u: /* DEY IMP 88 */
    c->pc = 0xAC89u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAC89u: /* LDA IMM A9 00 */
    c->pc = 0xAC8Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC8Bu: /* STA ABY 99 30 04 */
    c->pc = 0xAC8Eu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAC8Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAC8Fu: /* LDA IMM A9 37 */
    c->pc = 0xAC91u;
    v = 0x37u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC91u: /* STA ZP 85 00 */
    c->pc = 0xAC93u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAC93u: /* JMP ABS 4C 52 96 */
    c->pc = 0x9652u; c->cpu_cycles += 3u; return 1;
case 0xAC96u: /* LDA ABX BD 20 04 */
    c->pc = 0xAC99u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAC99u: /* AND IMM 29 04 */
    c->pc = 0xAC9Bu;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAC9Bu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAC9Du ^ 0xACA1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xACA1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAC9Du; } return 1;
case 0xAC9Du: /* JSR ABS 20 B3 EF */
    push(c, 0xACu); push(c, 0x9Fu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xACA0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xACA1u: /* LDA IMM A9 07 */
    c->pc = 0xACA3u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xACA3u: /* STA ZP 85 01 */
    c->pc = 0xACA5u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xACA5u: /* STA ZP 85 02 */
    c->pc = 0xACA7u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xACA7u: /* JSR ABS 20 2C F0 */
    push(c, 0xACu); push(c, 0xA9u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xACAAu: /* LDA ZP A5 00 */
    c->pc = 0xACACu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xACACu: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xACAEu ^ 0xACB6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xACB6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xACAEu; } return 1;
case 0xACAEu: /* JSR ABS 20 BA EE */
    push(c, 0xACu); push(c, 0xB0u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xACB1u: /* LDA ZP A5 01 */
    c->pc = 0xACB3u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xACB3u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xACB5u ^ 0xACB6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xACB6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xACB5u; } return 1;
case 0xACB5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xACB6u: /* LDA IMM A9 3B */
    c->pc = 0xACB8u;
    v = 0x3Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xACB8u: /* JSR ABS 20 59 F1 */
    push(c, 0xACu); push(c, 0xBAu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xACBBu: /* LDA IMM A9 3B */
    c->pc = 0xACBDu;
    v = 0x3Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xACBDu: /* JSR ABS 20 59 F1 */
    push(c, 0xACu); push(c, 0xBFu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xACC0u: /* LDA IMM A9 C4 */
    c->pc = 0xACC2u;
    v = 0xC4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xACC2u: /* STA ABY 99 30 04 */
    c->pc = 0xACC5u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACC5u: /* LDA IMM A9 07 */
    c->pc = 0xACC7u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xACC7u: /* STA ZP 85 01 */
    c->pc = 0xACC9u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xACC9u: /* LDA IMM A9 3C */
    c->pc = 0xACCBu;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xACCBu: /* JSR ABS 20 59 F1 */
    push(c, 0xACu); push(c, 0xCDu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xACCEu: /* BCS REL B0 2C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xACD0u ^ 0xACFCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xACFCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xACD0u; } return 1;
case 0xACD0u: /* LDX ZP A6 01 */
    c->pc = 0xACD2u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xACD2u: /* LDA ABX BD 00 AD */
    c->pc = 0xACD5u;
    ea = (uint16_t)(0xAD00u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAD00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xACD5u: /* STA ABY 99 30 04 */
    c->pc = 0xACD8u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACD8u: /* LDA ABX BD 08 AD */
    c->pc = 0xACDBu;
    ea = (uint16_t)(0xAD08u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAD08u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xACDBu: /* STA ABY 99 70 06 */
    c->pc = 0xACDEu;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACDEu: /* LDA ABX BD 10 AD */
    c->pc = 0xACE1u;
    ea = (uint16_t)(0xAD10u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAD10u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xACE1u: /* STA ABY 99 50 06 */
    c->pc = 0xACE4u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACE4u: /* LDA ABX BD 18 AD */
    c->pc = 0xACE7u;
    ea = (uint16_t)(0xAD18u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAD18u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xACE7u: /* STA ABY 99 30 06 */
    c->pc = 0xACEAu;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACEAu: /* LDA ABX BD 20 AD */
    c->pc = 0xACEDu;
    ea = (uint16_t)(0xAD20u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAD20u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xACEDu: /* STA ABY 99 10 06 */
    c->pc = 0xACF0u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACF0u: /* LDA ABX BD 28 AD */
    c->pc = 0xACF3u;
    ea = (uint16_t)(0xAD28u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAD28u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xACF3u: /* STA ABY 99 F0 04 */
    c->pc = 0xACF6u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xACF6u: /* LDX ZP A6 2B */
    c->pc = 0xACF8u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xACF8u: /* DEC ZP C6 01 */
    c->pc = 0xACFAu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xACFAu: /* BPL REL 10 CD */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xACFCu ^ 0xACC9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xACC9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xACFCu; } return 1;
case 0xACFCu: /* LSR ABX 5E 20 04 */
    c->pc = 0xACFFu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xACFFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAD30u: /* LDA ABX BD 10 01 */
    c->pc = 0xAD33u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD33u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAD35u ^ 0xAD48u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAD48u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAD35u; } return 1;
case 0xAD35u: /* DEC ABX DE E0 04 */
    c->pc = 0xAD38u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAD38u: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAD3Au ^ 0xAD48u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAD48u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAD3Au; } return 1;
case 0xAD3Au: /* LDA IMM A9 47 */
    c->pc = 0xAD3Cu;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAD3Cu: /* STA ZP 85 08 */
    c->pc = 0xAD3Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAD3Eu: /* LDA IMM A9 01 */
    c->pc = 0xAD40u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAD40u: /* STA ZP 85 09 */
    c->pc = 0xAD42u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAD42u: /* JSR ABS 20 97 F1 */
    push(c, 0xADu); push(c, 0x44u); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0xAD45u: /* INC ABX FE 10 01 */
    c->pc = 0xAD48u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAD48u: /* JSR ABS 20 BA EE */
    push(c, 0xADu); push(c, 0x4Au); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAD4Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAD4Cu: /* LDY ABX BC 10 01 */
    c->pc = 0xAD4Fu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD4Fu: /* LDA ABY B9 20 04 */
    c->pc = 0xAD52u;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD52u: /* BPL REL 10 4B */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xAD54u ^ 0xAD9Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAD9Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAD54u; } return 1;
case 0xAD54u: /* LDA ABY B9 00 04 */
    c->pc = 0xAD57u;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD57u: /* CMP IMM C9 3E */
    c->pc = 0xAD59u;
    v = 0x3Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAD59u: /* BNE REL D0 44 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAD5Bu ^ 0xAD9Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAD9Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAD5Bu; } return 1;
case 0xAD5Bu: /* SEC IMP 38 */
    c->pc = 0xAD5Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAD5Cu: /* LDA ABY B9 A0 04 */
    c->pc = 0xAD5Fu;
    ea = (uint16_t)(0x04A0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD5Fu: /* SBC IMM E9 14 */
    c->pc = 0xAD61u;
    v = 0x14u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAD61u: /* STA ABX 9D A0 04 */
    c->pc = 0xAD64u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD64u: /* LDA ABY B9 60 04 */
    c->pc = 0xAD67u;
    ea = (uint16_t)(0x0460u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD67u: /* STA ABX 9D 60 04 */
    c->pc = 0xAD6Au;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD6Au: /* LDA ABY B9 40 04 */
    c->pc = 0xAD6Du;
    ea = (uint16_t)(0x0440u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD6Du: /* STA ABX 9D 40 04 */
    c->pc = 0xAD70u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD70u: /* JSR ABS 20 EE EF */
    push(c, 0xADu); push(c, 0x72u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xAD73u: /* INC ABX FE E0 04 */
    c->pc = 0xAD76u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAD76u: /* LDA ABX BD E0 04 */
    c->pc = 0xAD79u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD79u: /* CMP IMM C9 9D */
    c->pc = 0xAD7Bu;
    v = 0x9Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAD7Bu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAD7Du ^ 0xAD8Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAD8Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAD7Du; } return 1;
case 0xAD7Du: /* LDA IMM A9 3F */
    c->pc = 0xAD7Fu;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAD7Fu: /* JSR ABS 20 59 F1 */
    push(c, 0xADu); push(c, 0x81u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xAD82u: /* LDA IMM A9 03 */
    c->pc = 0xAD84u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAD84u: /* STA ABX 9D A0 06 */
    c->pc = 0xAD87u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD87u: /* LDA IMM A9 00 */
    c->pc = 0xAD89u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAD89u: /* STA ABX 9D 80 06 */
    c->pc = 0xAD8Cu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD8Cu: /* STA ABX 9D E0 04 */
    c->pc = 0xAD8Fu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD8Fu: /* LDA ABX BD A0 06 */
    c->pc = 0xAD92u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAD92u: /* CMP IMM C9 02 */
    c->pc = 0xAD94u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAD94u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAD96u ^ 0xAD9Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAD9Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAD96u; } return 1;
case 0xAD96u: /* LDA IMM A9 00 */
    c->pc = 0xAD98u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAD98u: /* STA ABX 9D A0 06 */
    c->pc = 0xAD9Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAD9Bu: /* JSR ABS 20 BA EE */
    push(c, 0xADu); push(c, 0x9Du); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAD9Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAD9Fu: /* LSR ABX 5E 20 04 */
    c->pc = 0xADA2u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xADA2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xADA3u: /* LDA IMM A9 18 */
    c->pc = 0xADA5u;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xADA5u: /* STA ABX 9D 50 01 */
    c->pc = 0xADA8u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADA8u: /* LDA ABX BD 20 06 */
    c->pc = 0xADABu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADABu: /* ORA ABX 1D 60 06 */
    c->pc = 0xADAEu;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADAEu: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xADB0u ^ 0xADC4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xADC4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xADB0u; } return 1;
case 0xADB0u: /* LDA IMM A9 3D */
    c->pc = 0xADB2u;
    v = 0x3Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xADB2u: /* JSR ABS 20 59 F1 */
    push(c, 0xADu); push(c, 0xB4u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xADB5u: /* BCS REL B0 0D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xADB7u ^ 0xADC4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xADC4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xADB7u; } return 1;
case 0xADB7u: /* TXA IMP 8A */
    c->pc = 0xADB8u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xADB8u: /* STA ABY 99 20 01 */
    c->pc = 0xADBBu;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADBBu: /* SEC IMP 38 */
    c->pc = 0xADBCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xADBCu: /* LDA ABX BD A0 04 */
    c->pc = 0xADBFu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADBFu: /* SBC IMM E9 14 */
    c->pc = 0xADC1u;
    v = 0x14u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xADC1u: /* STA ABY 99 B0 04 */
    c->pc = 0xADC4u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADC4u: /* LDA ABX BD E0 04 */
    c->pc = 0xADC7u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADC7u: /* BNE REL D0 29 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xADC9u ^ 0xADF2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xADF2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xADC9u; } return 1;
case 0xADC9u: /* LDA ABX BD 10 01 */
    c->pc = 0xADCCu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADCCu: /* AND IMM 29 0F */
    c->pc = 0xADCEu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xADCEu: /* TAY IMP A8 */
    c->pc = 0xADCFu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xADCFu: /* CLC IMP 18 */
    c->pc = 0xADD0u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xADD0u: /* ADC IMM 69 01 */
    c->pc = 0xADD2u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xADD2u: /* STA ABX 9D 10 01 */
    c->pc = 0xADD5u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADD5u: /* LDA ABY B9 09 AE */
    c->pc = 0xADD8u;
    ea = (uint16_t)(0xAE09u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE09u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADD8u: /* STA ABX 9D 60 06 */
    c->pc = 0xADDBu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADDBu: /* LDA ABY B9 19 AE */
    c->pc = 0xADDEu;
    ea = (uint16_t)(0xAE19u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE19u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADDEu: /* STA ABX 9D 40 06 */
    c->pc = 0xADE1u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADE1u: /* LDA ABY B9 29 AE */
    c->pc = 0xADE4u;
    ea = (uint16_t)(0xAE29u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE29u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADE4u: /* STA ABX 9D 20 06 */
    c->pc = 0xADE7u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADE7u: /* LDA ABY B9 39 AE */
    c->pc = 0xADEAu;
    ea = (uint16_t)(0xAE39u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xADEAu: /* STA ABX 9D 20 04 */
    c->pc = 0xADEDu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADEDu: /* LDA IMM A9 2A */
    c->pc = 0xADEFu;
    v = 0x2Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xADEFu: /* STA ABX 9D E0 04 */
    c->pc = 0xADF2u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADF2u: /* DEC ABX DE E0 04 */
    c->pc = 0xADF5u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xADF5u: /* JSR ABS 20 BA EE */
    push(c, 0xADu); push(c, 0xF7u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xADF8u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xADFAu ^ 0xADFFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xADFFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xADFAu; } return 1;
case 0xADFAu: /* LDA IMM A9 00 */
    c->pc = 0xADFCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xADFCu: /* STA ABX 9D 50 01 */
    c->pc = 0xADFFu;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xADFFu: /* SEC IMP 38 */
    c->pc = 0xAE00u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAE00u: /* LDA ABX BD A0 04 */
    c->pc = 0xAE03u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE03u: /* SBC IMM E9 08 */
    c->pc = 0xAE05u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAE05u: /* STA ABX 9D 60 01 */
    c->pc = 0xAE08u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAE08u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAE49u: /* JSR ABS 20 EE EF */
    push(c, 0xAEu); push(c, 0x4Bu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xAE4Cu: /* SEC IMP 38 */
    c->pc = 0xAE4Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAE4Du: /* LDA ABX BD 00 04 */
    c->pc = 0xAE50u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE50u: /* SBC IMM E9 40 */
    c->pc = 0xAE52u;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAE52u: /* TAY IMP A8 */
    c->pc = 0xAE53u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAE53u: /* LDA ABY B9 79 AF */
    c->pc = 0xAE56u;
    ea = (uint16_t)(0xAF79u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF79u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE56u: /* STA ZP 85 01 */
    c->pc = 0xAE58u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAE58u: /* LDA ABX BD 20 04 */
    c->pc = 0xAE5Bu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE5Bu: /* AND IMM 29 20 */
    c->pc = 0xAE5Du;
    v = 0x20u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE5Du: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAE5Fu ^ 0xAE7Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAE7Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xAE5Fu; } return 1;
case 0xAE5Fu: /* LDY ZP A4 01 */
    c->pc = 0xAE61u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xAE61u: /* LDA IMM A9 15 */
    c->pc = 0xAE63u;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE63u: /* CMP ABY D9 58 03 */
    c->pc = 0xAE66u;
    ea = (uint16_t)(0x0358u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0358u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE66u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAE68u ^ 0xAE6Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAE6Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAE68u; } return 1;
case 0xAE68u: /* LDA IMM A9 04 */
    c->pc = 0xAE6Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE6Au: /* STA ABX 9D 20 06 */
    c->pc = 0xAE6Du;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAE6Du: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAE6Fu ^ 0xAE75u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAE75u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAE6Fu; } return 1;
case 0xAE6Fu: /* LDA ZP A5 00 */
    c->pc = 0xAE71u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAE71u: /* CMP IMM C9 60 */
    c->pc = 0xAE73u;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAE73u: /* BCS REL B0 26 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAE75u ^ 0xAE9Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAE9Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAE75u; } return 1;
case 0xAE75u: /* LDA IMM A9 82 */
    c->pc = 0xAE77u;
    v = 0x82u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE77u: /* STA ABX 9D 20 04 */
    c->pc = 0xAE7Au;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAE7Au: /* LDA ABX BD 20 06 */
    c->pc = 0xAE7Du;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE7Du: /* CMP IMM C9 04 */
    c->pc = 0xAE7Fu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAE7Fu: /* BCS REL B0 1D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAE81u ^ 0xAE9Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAE9Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAE81u; } return 1;
case 0xAE81u: /* LDA ABX BD E0 04 */
    c->pc = 0xAE84u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE84u: /* AND IMM 29 03 */
    c->pc = 0xAE86u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE86u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAE88u ^ 0xAE9Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAE9Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAE88u; } return 1;
case 0xAE88u: /* STA ABX 9D E0 04 */
    c->pc = 0xAE8Bu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAE8Bu: /* LDA ABX BD 20 06 */
    c->pc = 0xAE8Eu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAE8Eu: /* INC ABX FE 20 06 */
    c->pc = 0xAE91u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAE91u: /* ASL IMP 0A */
    c->pc = 0xAE92u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE92u: /* ASL IMP 0A */
    c->pc = 0xAE93u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAE93u: /* TAY IMP A8 */
    c->pc = 0xAE94u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAE94u: /* LDX ZP A6 01 */
    c->pc = 0xAE96u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAE96u: /* JSR ABS 20 4C AF */
    push(c, 0xAEu); push(c, 0x98u); c->pc = 0xAF4Cu; c->cpu_cycles += 6u; return 1;
case 0xAE99u: /* LDX ZP A6 2B */
    c->pc = 0xAE9Bu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAE9Bu: /* JMP ABS 4C 45 AF */
    c->pc = 0xAF45u; c->cpu_cycles += 3u; return 1;
case 0xAE9Eu: /* LDA ZP A5 00 */
    c->pc = 0xAEA0u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAEA0u: /* CMP IMM C9 28 */
    c->pc = 0xAEA2u;
    v = 0x28u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAEA2u: /* BCS REL B0 4B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAEA4u ^ 0xAEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAEA4u; } return 1;
case 0xAEA4u: /* LDA ABX BD E0 04 */
    c->pc = 0xAEA7u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEA7u: /* AND IMM 29 3F */
    c->pc = 0xAEA9u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEA9u: /* BNE REL D0 44 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAEABu ^ 0xAEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAEABu; } return 1;
case 0xAEABu: /* LDA IMM A9 03 */
    c->pc = 0xAEADu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEADu: /* STA ZP 85 01 */
    c->pc = 0xAEAFu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAEAFu: /* LDA IMM A9 45 */
    c->pc = 0xAEB1u;
    v = 0x45u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEB1u: /* JSR ABS 20 CF 96 */
    push(c, 0xAEu); push(c, 0xB3u); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xAEB4u: /* BCS REL B0 39 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAEB6u ^ 0xAEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAEB6u; } return 1;
case 0xAEB6u: /* LDA IMM A9 45 */
    c->pc = 0xAEB8u;
    v = 0x45u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEB8u: /* JSR ABS 20 59 F1 */
    push(c, 0xAEu); push(c, 0xBAu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xAEBBu: /* BCS REL B0 32 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAEBDu ^ 0xAEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAEBDu; } return 1;
case 0xAEBDu: /* LDA ABX BD 00 06 */
    c->pc = 0xAEC0u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEC0u: /* AND IMM 29 01 */
    c->pc = 0xAEC2u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEC2u: /* TAX IMP AA */
    c->pc = 0xAEC3u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xAEC3u: /* LDA ABX BD 7B AF */
    c->pc = 0xAEC6u;
    ea = (uint16_t)(0xAF7Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF7Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEC6u: /* STA ABY 99 30 04 */
    c->pc = 0xAEC9u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAEC9u: /* CLC IMP 18 */
    c->pc = 0xAECAu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAECAu: /* LDA ABY B9 B0 04 */
    c->pc = 0xAECDu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAECDu: /* ADC IMM 69 03 */
    c->pc = 0xAECFu;
    v = 0x03u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAECFu: /* STA ABY 99 B0 04 */
    c->pc = 0xAED2u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAED2u: /* CLC IMP 18 */
    c->pc = 0xAED3u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAED3u: /* LDA ABY B9 70 04 */
    c->pc = 0xAED6u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAED6u: /* ADC ABX 7D 7D AF */
    c->pc = 0xAED9u;
    ea = (uint16_t)(0xAF7Du + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xAF7Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAED9u: /* STA ABY 99 70 04 */
    c->pc = 0xAEDCu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAEDCu: /* LDA ABY B9 50 04 */
    c->pc = 0xAEDFu;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEDFu: /* ADC ABX 7D 7F AF */
    c->pc = 0xAEE2u;
    ea = (uint16_t)(0xAF7Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xAF7Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEE2u: /* STA ABY 99 50 04 */
    c->pc = 0xAEE5u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAEE5u: /* LDA IMM A9 3F */
    c->pc = 0xAEE7u;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEE7u: /* STA ABY 99 F0 04 */
    c->pc = 0xAEEAu;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAEEAu: /* LDX ZP A6 2B */
    c->pc = 0xAEECu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAEECu: /* INC ABX FE 00 06 */
    c->pc = 0xAEEFu;
    ea = (uint16_t)(0x0600u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAEEFu: /* LDA ABX BD 60 06 */
    c->pc = 0xAEF2u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEF2u: /* ORA ABX 1D 40 06 */
    c->pc = 0xAEF5u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAEF5u: /* BNE REL D0 3D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAEF7u ^ 0xAF34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAF34u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAEF7u; } return 1;
case 0xAEF7u: /* LDA IMM A9 01 */
    c->pc = 0xAEF9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEF9u: /* STA ZP 85 01 */
    c->pc = 0xAEFBu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAEFBu: /* LDA IMM A9 44 */
    c->pc = 0xAEFDu;
    v = 0x44u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAEFDu: /* JSR ABS 20 59 F1 */
    push(c, 0xAEu); push(c, 0xFFu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xAF00u: /* BCS REL B0 28 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAF02u ^ 0xAF2Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAF2Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xAF02u; } return 1;
case 0xAF02u: /* LDA ABY B9 B0 04 */
    c->pc = 0xAF05u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF05u: /* SBC IMM E9 24 */
    c->pc = 0xAF07u;
    v = 0x24u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAF07u: /* STA ABY 99 B0 04 */
    c->pc = 0xAF0Au;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF0Au: /* LDX ZP A6 01 */
    c->pc = 0xAF0Cu;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAF0Cu: /* CLC IMP 18 */
    c->pc = 0xAF0Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAF0Du: /* LDA ABY B9 70 04 */
    c->pc = 0xAF10u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF10u: /* ADC ABX 7D 7D AF */
    c->pc = 0xAF13u;
    ea = (uint16_t)(0xAF7Du + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xAF7Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF13u: /* STA ABY 99 70 04 */
    c->pc = 0xAF16u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF16u: /* LDA ABY B9 50 04 */
    c->pc = 0xAF19u;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF19u: /* ADC ABX 7D 7F AF */
    c->pc = 0xAF1Cu;
    ea = (uint16_t)(0xAF7Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xAF7Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF1Cu: /* STA ABY 99 50 04 */
    c->pc = 0xAF1Fu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF1Fu: /* LDA IMM A9 78 */
    c->pc = 0xAF21u;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAF21u: /* STA ABY 99 F0 04 */
    c->pc = 0xAF24u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF24u: /* LDX ZP A6 2B */
    c->pc = 0xAF26u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xAF26u: /* DEC ZP C6 01 */
    c->pc = 0xAF28u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xAF28u: /* BPL REL 10 D1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xAF2Au ^ 0xAEFBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAEFBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAF2Au; } return 1;
case 0xAF2Au: /* LDA IMM A9 48 */
    c->pc = 0xAF2Cu;
    v = 0x48u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAF2Cu: /* STA ABX 9D 60 06 */
    c->pc = 0xAF2Fu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF2Fu: /* LDA IMM A9 01 */
    c->pc = 0xAF31u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAF31u: /* STA ABX 9D 40 06 */
    c->pc = 0xAF34u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF34u: /* SEC IMP 38 */
    c->pc = 0xAF35u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAF35u: /* LDA ABX BD 60 06 */
    c->pc = 0xAF38u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF38u: /* SBC IMM E9 01 */
    c->pc = 0xAF3Au;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAF3Au: /* STA ABX 9D 60 06 */
    c->pc = 0xAF3Du;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF3Du: /* LDA ABX BD 40 06 */
    c->pc = 0xAF40u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF40u: /* SBC IMM E9 00 */
    c->pc = 0xAF42u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAF42u: /* STA ABX 9D 40 06 */
    c->pc = 0xAF45u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF45u: /* INC ABX FE E0 04 */
    c->pc = 0xAF48u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAF48u: /* JSR ABS 20 B3 EF */
    push(c, 0xAFu); push(c, 0x4Au); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xAF4Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAF4Cu: /* LDA IMM A9 03 */
    c->pc = 0xAF4Eu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAF4Eu: /* STA ZP 85 02 */
    c->pc = 0xAF50u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAF50u: /* LDA ABY B9 69 AF */
    c->pc = 0xAF53u;
    ea = (uint16_t)(0xAF69u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF69u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF53u: /* STA ABX 9D 56 03 */
    c->pc = 0xAF56u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF56u: /* STA ABX 9D 76 03 */
    c->pc = 0xAF59u;
    ea = (uint16_t)(0x0376u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF59u: /* STA ABX 9D 86 03 */
    c->pc = 0xAF5Cu;
    ea = (uint16_t)(0x0386u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF5Cu: /* STA ABX 9D 96 03 */
    c->pc = 0xAF5Fu;
    ea = (uint16_t)(0x0396u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF5Fu: /* STA ABX 9D A6 03 */
    c->pc = 0xAF62u;
    ea = (uint16_t)(0x03A6u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF62u: /* INY IMP C8 */
    c->pc = 0xAF63u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAF63u: /* INX IMP E8 */
    c->pc = 0xAF64u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xAF64u: /* DEC ZP C6 02 */
    c->pc = 0xAF66u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xAF66u: /* BPL REL 10 E8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xAF68u ^ 0xAF50u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAF50u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAF68u; } return 1;
case 0xAF68u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAF81u: /* LSR ABX 5E 20 04 */
    c->pc = 0xAF84u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAF84u: /* LDA IMM A9 FF */
    c->pc = 0xAF86u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAF86u: /* STA ABX 9D 20 01 */
    c->pc = 0xAF89u;
    ea = (uint16_t)(0x0120u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF89u: /* LDY ABX BC 10 01 */
    c->pc = 0xAF8Cu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF8Cu: /* LDA IMM A9 00 */
    c->pc = 0xAF8Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAF8Eu: /* STA ABY 99 40 01 */
    c->pc = 0xAF91u;
    ea = (uint16_t)(0x0140u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAF91u: /* SEC IMP 38 */
    c->pc = 0xAF92u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAF92u: /* LDA ABX BD 00 04 */
    c->pc = 0xAF95u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF95u: /* SBC IMM E9 42 */
    c->pc = 0xAF97u;
    v = 0x42u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAF97u: /* TAY IMP A8 */
    c->pc = 0xAF98u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAF98u: /* LDX ABY BE 79 AF */
    c->pc = 0xAF9Bu;
    ea = (uint16_t)(0xAF79u + c->y);
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u + ((((0xAF79u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAF9Bu: /* LDY IMM A0 00 */
    c->pc = 0xAF9Du;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAF9Du: /* JSR ABS 20 4C AF */
    push(c, 0xAFu); push(c, 0x9Fu); c->pc = 0xAF4Cu; c->cpu_cycles += 6u; return 1;
case 0xAFA0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAFA1u: /* LDA ABX BD E0 04 */
    c->pc = 0xAFA4u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAFA4u: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFA6u ^ 0xAFD9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAFD9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFA6u; } return 1;
case 0xAFA6u: /* LDA ABX BD 10 01 */
    c->pc = 0xAFA9u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAFA9u: /* CMP IMM C9 01 */
    c->pc = 0xAFABu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAFABu: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xAFADu ^ 0xAFBFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAFBFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFADu; } return 1;
case 0xAFADu: /* LDA IMM A9 3E */
    c->pc = 0xAFAFu;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFAFu: /* STA ABX 9D E0 04 */
    c->pc = 0xAFB2u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFB2u: /* LDA IMM A9 00 */
    c->pc = 0xAFB4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFB4u: /* STA ABX 9D 40 06 */
    c->pc = 0xAFB7u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFB7u: /* STA ABX 9D 60 06 */
    c->pc = 0xAFBAu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFBAu: /* INC ABX FE 10 01 */
    c->pc = 0xAFBDu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAFBDu: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFBFu ^ 0xAFD9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAFD9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFBFu; } return 1;
case 0xAFBFu: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFC1u ^ 0xAFD5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAFD5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFC1u; } return 1;
case 0xAFC1u: /* LDA IMM A9 C0 */
    c->pc = 0xAFC3u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFC3u: /* STA ABX 9D 60 06 */
    c->pc = 0xAFC6u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFC6u: /* LDA IMM A9 FE */
    c->pc = 0xAFC8u;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFC8u: /* STA ABX 9D 40 06 */
    c->pc = 0xAFCBu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFCBu: /* LDA IMM A9 0B */
    c->pc = 0xAFCDu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFCDu: /* STA ABX 9D E0 04 */
    c->pc = 0xAFD0u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFD0u: /* INC ABX FE 10 01 */
    c->pc = 0xAFD3u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAFD3u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFD5u ^ 0xAFD9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAFD9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFD5u; } return 1;
case 0xAFD5u: /* LSR ABX 5E 20 04 */
    c->pc = 0xAFD8u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAFD8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAFD9u: /* DEC ABX DE E0 04 */
    c->pc = 0xAFDCu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xAFDCu: /* JSR ABS 20 BA EE */
    push(c, 0xAFu); push(c, 0xDEu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xAFDFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAFE0u: /* LDA ABX BD 10 01 */
    c->pc = 0xAFE3u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAFE3u: /* CMP IMM C9 02 */
    c->pc = 0xAFE5u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xAFE5u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFE7u ^ 0xAFEAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAFEAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFE7u; } return 1;
case 0xAFE7u: /* JMP ABS 4C A6 A4 */
    c->pc = 0xA4A6u; c->cpu_cycles += 3u; return 1;
case 0xAFEAu: /* LDA ABX BD E0 04 */
    c->pc = 0xAFEDu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAFEDu: /* BNE REL D0 25 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFEFu ^ 0xB014u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB014u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFEFu; } return 1;
case 0xAFEFu: /* LDA ABX BD 10 01 */
    c->pc = 0xAFF2u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAFF2u: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAFF4u ^ 0xB010u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB010u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAFF4u; } return 1;
case 0xAFF4u: /* LDA IMM A9 1A */
    c->pc = 0xAFF6u;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFF6u: /* STA ABX 9D E0 04 */
    c->pc = 0xAFF9u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFF9u: /* LDA IMM A9 00 */
    c->pc = 0xAFFBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAFFBu: /* STA ABX 9D 00 06 */
    c->pc = 0xAFFEu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAFFEu: /* STA ABX 9D 20 06 */
    c->pc = 0xB001u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB001u: /* LDA IMM A9 03 */
    c->pc = 0xB003u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB003u: /* STA ABX 9D 40 06 */
    c->pc = 0xB006u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB006u: /* LDA IMM A9 33 */
    c->pc = 0xB008u;
    v = 0x33u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB008u: /* STA ABX 9D 60 06 */
    c->pc = 0xB00Bu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB00Bu: /* INC ABX FE 10 01 */
    c->pc = 0xB00Eu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB00Eu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB010u ^ 0xB014u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB014u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB010u; } return 1;
case 0xB010u: /* INC ABX FE 10 01 */
    c->pc = 0xB013u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB013u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB014u: /* DEC ABX DE E0 04 */
    c->pc = 0xB017u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB017u: /* JSR ABS 20 BA EE */
    push(c, 0xB0u); push(c, 0x19u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB01Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB01Bu: /* LDA ABX BD 10 01 */
    c->pc = 0xB01Eu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB01Eu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB020u ^ 0xB023u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB023u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB020u; } return 1;
case 0xB020u: /* JMP ABS 4C CB B0 */
    c->pc = 0xB0CBu; c->cpu_cycles += 3u; return 1;
case 0xB023u: /* LDY IMM A0 00 */
    c->pc = 0xB025u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB025u: /* STY ZP 84 0B */
    c->pc = 0xB027u;
    ea = 0x0Bu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB027u: /* LDA ABX BD 20 04 */
    c->pc = 0xB02Au;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB02Au: /* AND IMM 29 40 */
    c->pc = 0xB02Cu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB02Cu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB02Eu ^ 0xB02Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB02Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB02Eu; } return 1;
case 0xB02Eu: /* INY IMP C8 */
    c->pc = 0xB02Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB02Fu: /* CLC IMP 18 */
    c->pc = 0xB030u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB030u: /* LDA ABX BD 60 04 */
    c->pc = 0xB033u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB033u: /* ADC ABY 79 F6 B0 */
    c->pc = 0xB036u;
    ea = (uint16_t)(0xB0F6u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB0F6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB036u: /* STA ZP 85 08 */
    c->pc = 0xB038u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB038u: /* LDA ABX BD 40 04 */
    c->pc = 0xB03Bu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB03Bu: /* ADC ABY 79 F8 B0 */
    c->pc = 0xB03Eu;
    ea = (uint16_t)(0xB0F8u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB0F8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB03Eu: /* STA ZP 85 09 */
    c->pc = 0xB040u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB040u: /* CLC IMP 18 */
    c->pc = 0xB041u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB041u: /* LDA ABX BD A0 04 */
    c->pc = 0xB044u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB044u: /* ADC IMM 69 09 */
    c->pc = 0xB046u;
    v = 0x09u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB046u: /* STA ZP 85 0A */
    c->pc = 0xB048u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB048u: /* JSR ABS 20 C3 CB */
    push(c, 0xB0u); push(c, 0x4Au); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xB04Bu: /* LDX ZP A6 2B */
    c->pc = 0xB04Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB04Du: /* LDA ZP A5 00 */
    c->pc = 0xB04Fu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB04Fu: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB051u ^ 0xB05Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB05Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB051u; } return 1;
case 0xB051u: /* LDA ABX BD A0 04 */
    c->pc = 0xB054u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB054u: /* STA ZP 85 0A */
    c->pc = 0xB056u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB056u: /* JSR ABS 20 C3 CB */
    push(c, 0xB0u); push(c, 0x58u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xB059u: /* LDX ZP A6 2B */
    c->pc = 0xB05Bu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB05Bu: /* LDA ZP A5 00 */
    c->pc = 0xB05Du;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB05Du: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB05Fu ^ 0xB067u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB067u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB05Fu; } return 1;
case 0xB05Fu: /* LDA ABX BD 20 04 */
    c->pc = 0xB062u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB062u: /* EOR IMM 49 40 */
    c->pc = 0xB064u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB064u: /* STA ABX 9D 20 04 */
    c->pc = 0xB067u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB067u: /* LDA IMM A9 00 */
    c->pc = 0xB069u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB069u: /* STA ABX 9D 00 06 */
    c->pc = 0xB06Cu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB06Cu: /* LDA IMM A9 41 */
    c->pc = 0xB06Eu;
    v = 0x41u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB06Eu: /* STA ABX 9D 20 06 */
    c->pc = 0xB071u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB071u: /* SEC IMP 38 */
    c->pc = 0xB072u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB072u: /* LDA ABS AD A0 04 */
    c->pc = 0xB075u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB075u: /* SBC ABX FD A0 04 */
    c->pc = 0xB078u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB078u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB07Au ^ 0xB07Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB07Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB07Au; } return 1;
case 0xB07Au: /* EOR IMM 49 FF */
    c->pc = 0xB07Cu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB07Cu: /* ADC IMM 69 01 */
    c->pc = 0xB07Eu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB07Eu: /* CMP IMM C9 05 */
    c->pc = 0xB080u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB080u: /* BCS REL B0 3B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB082u ^ 0xB0BDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB0BDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB082u; } return 1;
case 0xB082u: /* LDA IMM A9 00 */
    c->pc = 0xB084u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB084u: /* STA ABX 9D 20 06 */
    c->pc = 0xB087u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB087u: /* LDA IMM A9 02 */
    c->pc = 0xB089u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB089u: /* STA ABX 9D 00 06 */
    c->pc = 0xB08Cu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB08Cu: /* LDA ABX BD 20 04 */
    c->pc = 0xB08Fu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB08Fu: /* PHA IMP 48 */
    c->pc = 0xB090u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB090u: /* JSR ABS 20 EE EF */
    push(c, 0xB0u); push(c, 0x92u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xB093u: /* PLA IMP 68 */
    c->pc = 0xB094u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB094u: /* STA ABX 9D 20 04 */
    c->pc = 0xB097u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB097u: /* LDA ZP A5 00 */
    c->pc = 0xB099u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB099u: /* CMP IMM C9 11 */
    c->pc = 0xB09Bu;
    v = 0x11u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB09Bu: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB09Du ^ 0xB0BDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB0BDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB09Du; } return 1;
case 0xB09Du: /* LDA IMM A9 01 */
    c->pc = 0xB09Fu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB09Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xB0A2u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0A2u: /* SEC IMP 38 */
    c->pc = 0xB0A3u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB0A3u: /* LDA ABX BD A0 04 */
    c->pc = 0xB0A6u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB0A6u: /* SBC IMM E9 08 */
    c->pc = 0xB0A8u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB0A8u: /* STA ABX 9D A0 04 */
    c->pc = 0xB0ABu;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0ABu: /* LDA IMM A9 70 */
    c->pc = 0xB0ADu;
    v = 0x70u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0ADu: /* STA ABX 9D E0 04 */
    c->pc = 0xB0B0u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0B0u: /* LDA ABX BD 20 04 */
    c->pc = 0xB0B3u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB0B3u: /* AND IMM 29 F7 */
    c->pc = 0xB0B5u;
    v = 0xF7u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0B5u: /* STA ABX 9D 20 04 */
    c->pc = 0xB0B8u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0B8u: /* INC ABX FE 10 01 */
    c->pc = 0xB0BBu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB0BBu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB0BDu ^ 0xB0CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB0CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB0BDu; } return 1;
case 0xB0BDu: /* LDA IMM A9 00 */
    c->pc = 0xB0BFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0BFu: /* STA ABX 9D A0 06 */
    c->pc = 0xB0C2u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0C2u: /* LDA IMM A9 07 */
    c->pc = 0xB0C4u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0C4u: /* STA ABX 9D E0 06 */
    c->pc = 0xB0C7u;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0C7u: /* JSR ABS 20 BA EE */
    push(c, 0xB0u); push(c, 0xC9u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB0CAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB0CBu: /* LDA ABX BD A0 06 */
    c->pc = 0xB0CEu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB0CEu: /* CMP IMM C9 05 */
    c->pc = 0xB0D0u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB0D0u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB0D2u ^ 0xB0D7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB0D7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB0D2u; } return 1;
case 0xB0D2u: /* LDA IMM A9 01 */
    c->pc = 0xB0D4u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0D4u: /* STA ABX 9D A0 06 */
    c->pc = 0xB0D7u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0D7u: /* LDA IMM A9 09 */
    c->pc = 0xB0D9u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0D9u: /* STA ABX 9D E0 06 */
    c->pc = 0xB0DCu;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0DCu: /* DEC ABX DE E0 04 */
    c->pc = 0xB0DFu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB0DFu: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB0E1u ^ 0xB0F2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB0F2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB0E1u; } return 1;
case 0xB0E1u: /* DEC ABX DE 10 01 */
    c->pc = 0xB0E4u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB0E4u: /* LDA IMM A9 00 */
    c->pc = 0xB0E6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB0E6u: /* STA ABX 9D A0 06 */
    c->pc = 0xB0E9u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0E9u: /* CLC IMP 18 */
    c->pc = 0xB0EAu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB0EAu: /* LDA ABX BD A0 04 */
    c->pc = 0xB0EDu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB0EDu: /* ADC IMM 69 08 */
    c->pc = 0xB0EFu;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB0EFu: /* STA ABX 9D A0 04 */
    c->pc = 0xB0F2u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB0F2u: /* JSR ABS 20 B3 EF */
    push(c, 0xB0u); push(c, 0xF4u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB0F5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB0FAu: /* LDA ABX BD 20 06 */
    c->pc = 0xB0FDu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB0FDu: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB0FFu ^ 0xB107u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB107u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB0FFu; } return 1;
case 0xB0FFu: /* LDA IMM A9 47 */
    c->pc = 0xB101u;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB101u: /* JSR ABS 20 B5 95 */
    push(c, 0xB1u); push(c, 0x03u); c->pc = 0x95B5u; c->cpu_cycles += 6u; return 1;
case 0xB104u: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB106u ^ 0xB107u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB107u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB106u; } return 1;
case 0xB106u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB107u: /* LDA ABS AD 60 04 */
    c->pc = 0xB10Au;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB10Au: /* STA ABX 9D 60 04 */
    c->pc = 0xB10Du;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB10Du: /* LDA ABS AD 40 04 */
    c->pc = 0xB110u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB110u: /* STA ABX 9D 40 04 */
    c->pc = 0xB113u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB113u: /* LDA ABX BD E0 04 */
    c->pc = 0xB116u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB116u: /* BNE REL D0 5A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB118u ^ 0xB172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB172u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB118u; } return 1;
case 0xB118u: /* LDA IMM A9 3E */
    c->pc = 0xB11Au;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB11Au: /* STA ABX 9D E0 04 */
    c->pc = 0xB11Du;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB11Du: /* LDA IMM A9 06 */
    c->pc = 0xB11Fu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB11Fu: /* STA ZP 85 01 */
    c->pc = 0xB121u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB121u: /* LDA IMM A9 48 */
    c->pc = 0xB123u;
    v = 0x48u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB123u: /* JSR ABS 20 CF 96 */
    push(c, 0xB1u); push(c, 0x25u); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xB126u: /* LDA IMM A9 49 */
    c->pc = 0xB128u;
    v = 0x49u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB128u: /* JSR ABS 20 CF 96 */
    push(c, 0xB1u); push(c, 0x2Au); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xB12Bu: /* BCS REL B0 45 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB12Du ^ 0xB172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB172u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB12Du; } return 1;
case 0xB12Du: /* LDA ABX BD 00 06 */
    c->pc = 0xB130u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB130u: /* ASL IMP 0A */
    c->pc = 0xB131u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB131u: /* STA ZP 85 01 */
    c->pc = 0xB133u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB133u: /* LDA IMM A9 02 */
    c->pc = 0xB135u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB135u: /* STA ZP 85 02 */
    c->pc = 0xB137u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB137u: /* LDY ZP A4 01 */
    c->pc = 0xB139u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB139u: /* LDA ABY B9 78 B1 */
    c->pc = 0xB13Cu;
    ea = (uint16_t)(0xB178u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB178u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB13Cu: /* JSR ABS 20 59 F1 */
    push(c, 0xB1u); push(c, 0x3Eu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB13Fu: /* BCS REL B0 31 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB141u ^ 0xB172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB172u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB141u; } return 1;
case 0xB141u: /* LDX ZP A6 01 */
    c->pc = 0xB143u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB143u: /* CLC IMP 18 */
    c->pc = 0xB144u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB144u: /* LDA ABY B9 70 04 */
    c->pc = 0xB147u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB147u: /* ADC ABX 7D 7E B1 */
    c->pc = 0xB14Au;
    ea = (uint16_t)(0xB17Eu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB17Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB14Au: /* STA ABY 99 70 04 */
    c->pc = 0xB14Du;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB14Du: /* LDA ABY B9 50 04 */
    c->pc = 0xB150u;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB150u: /* ADC IMM 69 00 */
    c->pc = 0xB152u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB152u: /* STA ABY 99 50 04 */
    c->pc = 0xB155u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB155u: /* LDA ABX BD 84 B1 */
    c->pc = 0xB158u;
    ea = (uint16_t)(0xB184u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB184u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB158u: /* STA ABY 99 B0 04 */
    c->pc = 0xB15Bu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB15Bu: /* LDX ZP A6 2B */
    c->pc = 0xB15Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB15Du: /* INC ZP E6 01 */
    c->pc = 0xB15Fu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB15Fu: /* DEC ZP C6 02 */
    c->pc = 0xB161u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB161u: /* BNE REL D0 D4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB163u ^ 0xB137u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB137u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB163u; } return 1;
case 0xB163u: /* INC ABX FE 00 06 */
    c->pc = 0xB166u;
    ea = (uint16_t)(0x0600u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB166u: /* LDA ABX BD 00 06 */
    c->pc = 0xB169u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB169u: /* CMP IMM C9 03 */
    c->pc = 0xB16Bu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB16Bu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB16Du ^ 0xB172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB172u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB16Du; } return 1;
case 0xB16Du: /* LDA IMM A9 00 */
    c->pc = 0xB16Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB16Fu: /* STA ABX 9D 00 06 */
    c->pc = 0xB172u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB172u: /* LDX ZP A6 2B */
    c->pc = 0xB174u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB174u: /* DEC ABX DE E0 04 */
    c->pc = 0xB177u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB177u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB18Au: /* LDA IMM A9 00 */
    c->pc = 0xB18Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB18Cu: /* STA ZP 85 01 */
    c->pc = 0xB18Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB18Eu: /* SEC IMP 38 */
    c->pc = 0xB18Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB18Fu: /* LDA ABX BD A0 04 */
    c->pc = 0xB192u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB192u: /* SBC IMM E9 0C */
    c->pc = 0xB194u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB194u: /* JMP ABS 4C A1 B1 */
    c->pc = 0xB1A1u; c->cpu_cycles += 3u; return 1;
case 0xB197u: /* LDA IMM A9 04 */
    c->pc = 0xB199u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB199u: /* STA ZP 85 01 */
    c->pc = 0xB19Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB19Bu: /* CLC IMP 18 */
    c->pc = 0xB19Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB19Cu: /* LDA ABX BD A0 04 */
    c->pc = 0xB19Fu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB19Fu: /* ADC IMM 69 0C */
    c->pc = 0xB1A1u;
    v = 0x0Cu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB1A1u: /* STA ZP 85 0A */
    c->pc = 0xB1A3u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1A3u: /* LDA IMM A9 00 */
    c->pc = 0xB1A5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB1A5u: /* STA ZP 85 0B */
    c->pc = 0xB1A7u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1A7u: /* LDA ABX BD 60 04 */
    c->pc = 0xB1AAu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1AAu: /* STA ZP 85 08 */
    c->pc = 0xB1ACu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1ACu: /* LDA ABX BD 40 04 */
    c->pc = 0xB1AFu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1AFu: /* STA ZP 85 09 */
    c->pc = 0xB1B1u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1B1u: /* JSR ABS 20 C3 CB */
    push(c, 0xB1u); push(c, 0xB3u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xB1B4u: /* LDX ZP A6 2B */
    c->pc = 0xB1B6u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB1B6u: /* LDA ABX BD 10 01 */
    c->pc = 0xB1B9u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1B9u: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB1BBu ^ 0xB1D7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1D7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1BBu; } return 1;
case 0xB1BBu: /* LDA ZP A5 00 */
    c->pc = 0xB1BDu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1BDu: /* BNE REL D0 40 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB1BFu ^ 0xB1FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1BFu; } return 1;
case 0xB1BFu: /* LDY ZP A4 01 */
    c->pc = 0xB1C1u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB1C1u: /* LDA ABY B9 03 B2 */
    c->pc = 0xB1C4u;
    ea = (uint16_t)(0xB203u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB203u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1C4u: /* STA ABX 9D 60 06 */
    c->pc = 0xB1C7u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1C7u: /* LDA ABY B9 05 B2 */
    c->pc = 0xB1CAu;
    ea = (uint16_t)(0xB205u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB205u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1CAu: /* STA ABX 9D 40 06 */
    c->pc = 0xB1CDu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1CDu: /* INC ABX FE 10 01 */
    c->pc = 0xB1D0u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB1D0u: /* LDA IMM A9 4B */
    c->pc = 0xB1D2u;
    v = 0x4Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB1D2u: /* STA ABX 9D E0 04 */
    c->pc = 0xB1D5u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1D5u: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB1D7u ^ 0xB1FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1D7u; } return 1;
case 0xB1D7u: /* LDY ZP A4 01 */
    c->pc = 0xB1D9u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB1D9u: /* LDA ABX BD E0 04 */
    c->pc = 0xB1DCu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1DCu: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB1DEu ^ 0xB1E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1DEu; } return 1;
case 0xB1DEu: /* DEC ABX DE E0 04 */
    c->pc = 0xB1E1u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB1E1u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB1E3u ^ 0xB1EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1E3u; } return 1;
case 0xB1E3u: /* LDA ABY B9 04 B2 */
    c->pc = 0xB1E6u;
    ea = (uint16_t)(0xB204u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB204u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1E6u: /* STA ABX 9D 60 06 */
    c->pc = 0xB1E9u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1E9u: /* LDA ABY B9 06 B2 */
    c->pc = 0xB1ECu;
    ea = (uint16_t)(0xB206u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB206u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1ECu: /* STA ABX 9D 40 06 */
    c->pc = 0xB1EFu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1EFu: /* LDA ZP A5 00 */
    c->pc = 0xB1F1u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1F1u: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB1F3u ^ 0xB1FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1F3u; } return 1;
case 0xB1F3u: /* LDA ABY B9 03 B2 */
    c->pc = 0xB1F6u;
    ea = (uint16_t)(0xB203u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB203u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1F6u: /* STA ABX 9D 60 06 */
    c->pc = 0xB1F9u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1F9u: /* LDA ABY B9 05 B2 */
    c->pc = 0xB1FCu;
    ea = (uint16_t)(0xB205u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB205u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1FCu: /* STA ABX 9D 40 06 */
    c->pc = 0xB1FFu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1FFu: /* JSR ABS 20 BA EE */
    push(c, 0xB2u); push(c, 0x01u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB202u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB20Bu: /* LDA IMM A9 47 */
    c->pc = 0xB20Du;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB20Du: /* STA ZP 85 00 */
    c->pc = 0xB20Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB20Fu: /* JMP ABS 4C 52 96 */
    c->pc = 0x9652u; c->cpu_cycles += 3u; return 1;
case 0xB212u: /* LDA ABX BD 10 01 */
    c->pc = 0xB215u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB215u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB217u ^ 0xB241u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB241u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB217u; } return 1;
case 0xB217u: /* LDA ABX BD A0 06 */
    c->pc = 0xB21Au;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB21Au: /* CMP IMM C9 05 */
    c->pc = 0xB21Cu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB21Cu: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB21Eu ^ 0xB23Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB23Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB21Eu; } return 1;
case 0xB21Eu: /* LDA IMM A9 00 */
    c->pc = 0xB220u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB220u: /* STA ABX 9D 80 06 */
    c->pc = 0xB223u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB223u: /* LDA ABX BD E0 04 */
    c->pc = 0xB226u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB226u: /* BNE REL D0 43 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB228u ^ 0xB26Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB26Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB228u; } return 1;
case 0xB228u: /* LDA IMM A9 00 */
    c->pc = 0xB22Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB22Au: /* STA ZP 85 01 */
    c->pc = 0xB22Cu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB22Cu: /* JSR ABS 20 72 B2 */
    push(c, 0xB2u); push(c, 0x2Eu); c->pc = 0xB272u; c->cpu_cycles += 6u; return 1;
case 0xB22Fu: /* DEC ABX DE 20 06 */
    c->pc = 0xB232u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB232u: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB234u ^ 0xB23Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB23Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB234u; } return 1;
case 0xB234u: /* LDA IMM A9 1F */
    c->pc = 0xB236u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB236u: /* STA ABX 9D E0 04 */
    c->pc = 0xB239u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB239u: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB23Bu ^ 0xB26Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB26Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB23Bu; } return 1;
case 0xB23Bu: /* DEC ABX DE 10 01 */
    c->pc = 0xB23Eu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB23Eu: /* JMP ABS 4C 6E B2 */
    c->pc = 0xB26Eu; c->cpu_cycles += 3u; return 1;
case 0xB241u: /* LDA ABX BD A0 06 */
    c->pc = 0xB244u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB244u: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB246u ^ 0xB26Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB26Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB246u; } return 1;
case 0xB246u: /* LDA IMM A9 00 */
    c->pc = 0xB248u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB248u: /* STA ABX 9D 80 06 */
    c->pc = 0xB24Bu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB24Bu: /* LDA ABX BD E0 04 */
    c->pc = 0xB24Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB24Eu: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB250u ^ 0xB26Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB26Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB250u; } return 1;
case 0xB250u: /* LDA IMM A9 0A */
    c->pc = 0xB252u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB252u: /* STA ZP 85 01 */
    c->pc = 0xB254u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB254u: /* JSR ABS 20 72 B2 */
    push(c, 0xB2u); push(c, 0x56u); c->pc = 0xB272u; c->cpu_cycles += 6u; return 1;
case 0xB257u: /* INC ABX FE 20 06 */
    c->pc = 0xB25Au;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB25Au: /* LDA ABX BD 20 06 */
    c->pc = 0xB25Du;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB25Du: /* CMP IMM C9 06 */
    c->pc = 0xB25Fu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB25Fu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB261u ^ 0xB266u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB266u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB261u; } return 1;
case 0xB261u: /* INC ABX FE 10 01 */
    c->pc = 0xB264u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB264u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB266u ^ 0xB26Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB26Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB266u; } return 1;
case 0xB266u: /* LDA IMM A9 1F */
    c->pc = 0xB268u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB268u: /* STA ABX 9D E0 04 */
    c->pc = 0xB26Bu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB26Bu: /* DEC ABX DE E0 04 */
    c->pc = 0xB26Eu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB26Eu: /* JSR ABS 20 B3 EF */
    push(c, 0xB2u); push(c, 0x70u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB271u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB272u: /* LDX ZP A6 01 */
    c->pc = 0xB274u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB274u: /* LDA ZP A5 4A */
    c->pc = 0xB276u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB276u: /* AND ABX 3D DC B2 */
    c->pc = 0xB279u;
    ea = (uint16_t)(0xB2DCu + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2DCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB279u: /* CLC IMP 18 */
    c->pc = 0xB27Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB27Au: /* ADC ABX 7D DD B2 */
    c->pc = 0xB27Du;
    ea = (uint16_t)(0xB2DDu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB2DDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB27Du: /* STA ZP 85 0B */
    c->pc = 0xB27Fu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB27Fu: /* LDA ABX BD DE B2 */
    c->pc = 0xB282u;
    ea = (uint16_t)(0xB2DEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2DEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB282u: /* STA ZP 85 0D */
    c->pc = 0xB284u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB284u: /* LDA IMM A9 00 */
    c->pc = 0xB286u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB286u: /* STA ZP 85 0A */
    c->pc = 0xB288u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB288u: /* STA ZP 85 0C */
    c->pc = 0xB28Au;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB28Au: /* JSR ABS 20 74 C8 */
    push(c, 0xB2u); push(c, 0x8Cu); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xB28Du: /* LDX ZP A6 2B */
    c->pc = 0xB28Fu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB28Fu: /* LDA IMM A9 25 */
    c->pc = 0xB291u;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB291u: /* JSR ABS 20 51 C0 */
    push(c, 0xB2u); push(c, 0x93u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB294u: /* LDA IMM A9 4D */
    c->pc = 0xB296u;
    v = 0x4Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB296u: /* JSR ABS 20 59 F1 */
    push(c, 0xB2u); push(c, 0x98u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB299u: /* BCS REL B0 3E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB29Bu ^ 0xB2D9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2D9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB29Bu; } return 1;
case 0xB29Bu: /* LDX ZP A6 01 */
    c->pc = 0xB29Du;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB29Du: /* LDA ABX BD DF B2 */
    c->pc = 0xB2A0u;
    ea = (uint16_t)(0xB2DFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2DFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2A0u: /* STA ABY 99 70 06 */
    c->pc = 0xB2A3u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2A3u: /* LDA ABX BD E0 B2 */
    c->pc = 0xB2A6u;
    ea = (uint16_t)(0xB2E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2A6u: /* STA ABY 99 50 06 */
    c->pc = 0xB2A9u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2A9u: /* LDA ZP A5 0E */
    c->pc = 0xB2ABu;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB2ABu: /* STA ABY 99 30 06 */
    c->pc = 0xB2AEu;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2AEu: /* LDA ZP A5 0F */
    c->pc = 0xB2B0u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB2B0u: /* STA ABY 99 10 06 */
    c->pc = 0xB2B3u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2B3u: /* SEC IMP 38 */
    c->pc = 0xB2B4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB2B4u: /* LDA ABY B9 B0 04 */
    c->pc = 0xB2B7u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2B7u: /* SBC ABX FD E1 B2 */
    c->pc = 0xB2BAu;
    ea = (uint16_t)(0xB2E1u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0xB2E1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2BAu: /* STA ABY 99 B0 04 */
    c->pc = 0xB2BDu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2BDu: /* LDA ABY B9 30 04 */
    c->pc = 0xB2C0u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2C0u: /* AND IMM 29 40 */
    c->pc = 0xB2C2u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB2C2u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB2C4u ^ 0xB2C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2C4u; } return 1;
case 0xB2C4u: /* INX IMP E8 */
    c->pc = 0xB2C5u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2C5u: /* INX IMP E8 */
    c->pc = 0xB2C6u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2C6u: /* CLC IMP 18 */
    c->pc = 0xB2C7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB2C7u: /* LDA ABY B9 70 04 */
    c->pc = 0xB2CAu;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2CAu: /* ADC ABX 7D E2 B2 */
    c->pc = 0xB2CDu;
    ea = (uint16_t)(0xB2E2u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB2E2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2CDu: /* STA ABY 99 70 04 */
    c->pc = 0xB2D0u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2D0u: /* LDA ABY B9 50 04 */
    c->pc = 0xB2D3u;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2D3u: /* ADC ABX 7D E3 B2 */
    c->pc = 0xB2D6u;
    ea = (uint16_t)(0xB2E3u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB2E3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2D6u: /* STA ABY 99 50 04 */
    c->pc = 0xB2D9u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2D9u: /* LDX ZP A6 2B */
    c->pc = 0xB2DBu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB2DBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB2F0u: /* LDA ABX BD 10 01 */
    c->pc = 0xB2F3u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2F3u: /* BNE REL D0 44 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB2F5u ^ 0xB339u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB339u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2F5u; } return 1;
case 0xB2F5u: /* LDA ABX BD E0 04 */
    c->pc = 0xB2F8u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2F8u: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB2FAu ^ 0xB322u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB322u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2FAu; } return 1;
case 0xB2FAu: /* LDA ABX BD A0 06 */
    c->pc = 0xB2FDu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2FDu: /* CMP IMM C9 02 */
    c->pc = 0xB2FFu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB2FFu: /* BNE REL D0 2C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB301u ^ 0xB32Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB32Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB301u; } return 1;
case 0xB301u: /* LDA IMM A9 87 */
    c->pc = 0xB303u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB303u: /* STA ABX 9D 20 04 */
    c->pc = 0xB306u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB306u: /* JSR ABS 20 EE EF */
    push(c, 0xB3u); push(c, 0x08u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xB309u: /* LDA IMM A9 78 */
    c->pc = 0xB30Bu;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB30Bu: /* STA ABX 9D 60 06 */
    c->pc = 0xB30Eu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB30Eu: /* LDA IMM A9 04 */
    c->pc = 0xB310u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB310u: /* STA ABX 9D 40 06 */
    c->pc = 0xB313u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB313u: /* LDA IMM A9 C9 */
    c->pc = 0xB315u;
    v = 0xC9u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB315u: /* STA ABX 9D 20 06 */
    c->pc = 0xB318u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB318u: /* LDA IMM A9 01 */
    c->pc = 0xB31Au;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB31Au: /* STA ABX 9D 00 06 */
    c->pc = 0xB31Du;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB31Du: /* INC ABX FE 10 01 */
    c->pc = 0xB320u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB320u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB322u ^ 0xB32Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB32Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB322u; } return 1;
case 0xB322u: /* LDA ABX BD A0 06 */
    c->pc = 0xB325u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB325u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB327u ^ 0xB32Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB32Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xB327u; } return 1;
case 0xB327u: /* STA ABX 9D 80 06 */
    c->pc = 0xB32Au;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB32Au: /* DEC ABX DE E0 04 */
    c->pc = 0xB32Du;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB32Du: /* JSR ABS 20 B3 EF */
    push(c, 0xB3u); push(c, 0x2Fu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB330u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB332u ^ 0xB335u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB335u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB332u; } return 1;
case 0xB332u: /* JMP ABS 4C FB B3 */
    c->pc = 0xB3FBu; c->cpu_cycles += 3u; return 1;
case 0xB335u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB336u: /* JMP ABS 4C F2 B3 */
    c->pc = 0xB3F2u; c->cpu_cycles += 3u; return 1;
case 0xB339u: /* CMP IMM C9 01 */
    c->pc = 0xB33Bu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB33Bu: /* BNE REL D0 5D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB33Du ^ 0xB39Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB39Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xB33Du; } return 1;
case 0xB33Du: /* LDA IMM A9 02 */
    c->pc = 0xB33Fu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB33Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xB342u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB342u: /* LDA ABX BD 40 06 */
    c->pc = 0xB345u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB345u: /* PHP IMP 08 */
    c->pc = 0xB346u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xB346u: /* LDA IMM A9 0F */
    c->pc = 0xB348u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB348u: /* STA ZP 85 01 */
    c->pc = 0xB34Au;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB34Au: /* LDA IMM A9 1C */
    c->pc = 0xB34Cu;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB34Cu: /* STA ZP 85 02 */
    c->pc = 0xB34Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB34Eu: /* JSR ABS 20 CF F0 */
    push(c, 0xB3u); push(c, 0x50u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xB351u: /* PLP IMP 28 */
    c->pc = 0xB352u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xB352u: /* BPL REL 10 E2 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB354u ^ 0xB336u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB336u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB354u; } return 1;
case 0xB354u: /* LDA ZP A5 00 */
    c->pc = 0xB356u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB356u: /* BEQ REL F0 DE */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB358u ^ 0xB336u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB336u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB358u; } return 1;
case 0xB358u: /* LDA IMM A9 21 */
    c->pc = 0xB35Au;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB35Au: /* JSR ABS 20 51 C0 */
    push(c, 0xB3u); push(c, 0x5Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB35Du: /* LDA IMM A9 03 */
    c->pc = 0xB35Fu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB35Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xB362u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB362u: /* LDA IMM A9 00 */
    c->pc = 0xB364u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB364u: /* STA ABX 9D 00 06 */
    c->pc = 0xB367u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB367u: /* STA ABX 9D 20 06 */
    c->pc = 0xB36Au;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB36Au: /* STA ABX 9D 60 06 */
    c->pc = 0xB36Du;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB36Du: /* STA ABX 9D 40 06 */
    c->pc = 0xB370u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB370u: /* STA ABX 9D 80 06 */
    c->pc = 0xB373u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB373u: /* LDA ABX BD 20 04 */
    c->pc = 0xB376u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB376u: /* AND IMM 29 FB */
    c->pc = 0xB378u;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB378u: /* STA ABX 9D 20 04 */
    c->pc = 0xB37Bu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB37Bu: /* LDA IMM A9 3E */
    c->pc = 0xB37Du;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB37Du: /* STA ABX 9D E0 04 */
    c->pc = 0xB380u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB380u: /* DEC ABX DE 10 01 */
    c->pc = 0xB383u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB383u: /* SEC IMP 38 */
    c->pc = 0xB384u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB384u: /* LDA ABS AD A0 04 */
    c->pc = 0xB387u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB387u: /* SBC ABX FD A0 04 */
    c->pc = 0xB38Au;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB38Au: /* CMP IMM C9 10 */
    c->pc = 0xB38Cu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB38Cu: /* BNE REL D0 61 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB38Eu ^ 0xB3EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB38Eu; } return 1;
case 0xB38Eu: /* LDA IMM A9 12 */
    c->pc = 0xB390u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB390u: /* STA ABX 9D E0 04 */
    c->pc = 0xB393u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB393u: /* LDA IMM A9 02 */
    c->pc = 0xB395u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB395u: /* STA ABX 9D 10 01 */
    c->pc = 0xB398u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB398u: /* BNE REL D0 55 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB39Au ^ 0xB3EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB39Au; } return 1;
case 0xB39Au: /* LDA ABX BD A0 06 */
    c->pc = 0xB39Du;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB39Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB39Fu ^ 0xB3A4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3A4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB39Fu; } return 1;
case 0xB39Fu: /* LDA IMM A9 00 */
    c->pc = 0xB3A1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3A1u: /* STA ABX 9D 80 06 */
    c->pc = 0xB3A4u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3A4u: /* LDA ABX BD E0 04 */
    c->pc = 0xB3A7u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3A7u: /* BNE REL D0 46 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB3A9u ^ 0xB3EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB3A9u; } return 1;
case 0xB3A9u: /* LDA IMM A9 25 */
    c->pc = 0xB3ABu;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3ABu: /* JSR ABS 20 51 C0 */
    push(c, 0xB3u); push(c, 0xADu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB3AEu: /* JSR ABS 20 EE EF */
    push(c, 0xB3u); push(c, 0xB0u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xB3B1u: /* LDA IMM A9 35 */
    c->pc = 0xB3B3u;
    v = 0x35u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3B3u: /* JSR ABS 20 59 F1 */
    push(c, 0xB3u); push(c, 0xB5u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB3B6u: /* BCS REL B0 1C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB3B8u ^ 0xB3D4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3D4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB3B8u; } return 1;
case 0xB3B8u: /* LDA ABX BD 10 01 */
    c->pc = 0xB3BBu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3BBu: /* TAX IMP AA */
    c->pc = 0xB3BCu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB3BCu: /* LDA ABX BD 0B B4 */
    c->pc = 0xB3BFu;
    ea = (uint16_t)(0xB40Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB40Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3BFu: /* STA ABY 99 70 06 */
    c->pc = 0xB3C2u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3C2u: /* LDA ABX BD 10 B4 */
    c->pc = 0xB3C5u;
    ea = (uint16_t)(0xB410u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB410u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3C5u: /* STA ABY 99 50 06 */
    c->pc = 0xB3C8u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3C8u: /* LDA ABX BD 15 B4 */
    c->pc = 0xB3CBu;
    ea = (uint16_t)(0xB415u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB415u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3CBu: /* STA ABY 99 30 06 */
    c->pc = 0xB3CEu;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3CEu: /* LDA ABX BD 1A B4 */
    c->pc = 0xB3D1u;
    ea = (uint16_t)(0xB41Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB41Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3D1u: /* STA ABY 99 10 06 */
    c->pc = 0xB3D4u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3D4u: /* TXA IMP 8A */
    c->pc = 0xB3D5u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3D5u: /* LDX ZP A6 2B */
    c->pc = 0xB3D7u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB3D7u: /* CMP IMM C9 06 */
    c->pc = 0xB3D9u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB3D9u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB3DBu ^ 0xB3E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB3DBu; } return 1;
case 0xB3DBu: /* LDA IMM A9 00 */
    c->pc = 0xB3DDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3DDu: /* STA ABX 9D 10 01 */
    c->pc = 0xB3E0u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3E0u: /* LDA IMM A9 3F */
    c->pc = 0xB3E2u;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3E2u: /* STA ABX 9D E0 04 */
    c->pc = 0xB3E5u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3E5u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB3E7u ^ 0xB3EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB3E7u; } return 1;
case 0xB3E7u: /* LDA IMM A9 12 */
    c->pc = 0xB3E9u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB3E9u: /* STA ABX 9D E0 04 */
    c->pc = 0xB3ECu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB3ECu: /* INC ABX FE 10 01 */
    c->pc = 0xB3EFu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB3EFu: /* DEC ABX DE E0 04 */
    c->pc = 0xB3F2u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB3F2u: /* JSR ABS 20 BA EE */
    push(c, 0xB3u); push(c, 0xF4u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB3F5u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB3F7u ^ 0xB3FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB3F7u; } return 1;
case 0xB3F7u: /* JMP ABS 4C FB B3 */
    c->pc = 0xB3FBu; c->cpu_cycles += 3u; return 1;
case 0xB3FAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB3FBu: /* LDA ABX BD C0 06 */
    c->pc = 0xB3FEu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB3FEu: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB400u ^ 0xB3FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB400u; } return 1;
case 0xB400u: /* LDA IMM A9 4F */
    c->pc = 0xB402u;
    v = 0x4Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB402u: /* JSR ABS 20 59 F1 */
    push(c, 0xB4u); push(c, 0x04u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB405u: /* BCS REL B0 F3 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB407u ^ 0xB3FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB3FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB407u; } return 1;
case 0xB407u: /* LDA IMM A9 7E */
    c->pc = 0xB409u;
    v = 0x7Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB409u: /* STA ABY 99 F0 04 */
    c->pc = 0xB40Cu;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB40Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB421u: /* JSR ABS 20 EE EF */
    push(c, 0xB4u); push(c, 0x23u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xB424u: /* LDA IMM A9 00 */
    c->pc = 0xB426u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB426u: /* STA ABX 9D 80 06 */
    c->pc = 0xB429u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB429u: /* LDA IMM A9 0B */
    c->pc = 0xB42Bu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB42Bu: /* STA ZP 85 01 */
    c->pc = 0xB42Du;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB42Du: /* LDA IMM A9 0C */
    c->pc = 0xB42Fu;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB42Fu: /* STA ZP 85 02 */
    c->pc = 0xB431u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB431u: /* JSR ABS 20 CF F0 */
    push(c, 0xB4u); push(c, 0x33u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xB434u: /* LDA ABX BD A0 06 */
    c->pc = 0xB437u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB437u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB439u ^ 0xB453u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB453u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB439u; } return 1;
case 0xB439u: /* LDA IMM A9 00 */
    c->pc = 0xB43Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB43Bu: /* STA ABX 9D A0 06 */
    c->pc = 0xB43Eu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB43Eu: /* LDA ABX BD E0 04 */
    c->pc = 0xB441u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB441u: /* BNE REL D0 4C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB443u ^ 0xB48Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB48Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB443u; } return 1;
case 0xB443u: /* INC ABX FE A0 06 */
    c->pc = 0xB446u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB446u: /* LDA IMM A9 1F */
    c->pc = 0xB448u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB448u: /* STA ABX 9D E0 04 */
    c->pc = 0xB44Bu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB44Bu: /* LDA ABX BD 20 04 */
    c->pc = 0xB44Eu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB44Eu: /* AND IMM 29 F7 */
    c->pc = 0xB450u;
    v = 0xF7u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB450u: /* STA ABX 9D 20 04 */
    c->pc = 0xB453u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB453u: /* LDA ABX BD E0 04 */
    c->pc = 0xB456u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB456u: /* BNE REL D0 37 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB458u ^ 0xB48Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB48Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB458u; } return 1;
case 0xB458u: /* LDA IMM A9 25 */
    c->pc = 0xB45Au;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB45Au: /* JSR ABS 20 51 C0 */
    push(c, 0xB4u); push(c, 0x5Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB45Du: /* LDA IMM A9 35 */
    c->pc = 0xB45Fu;
    v = 0x35u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB45Fu: /* JSR ABS 20 59 F1 */
    push(c, 0xB4u); push(c, 0x61u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB462u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB464u ^ 0xB469u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB469u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB464u; } return 1;
case 0xB464u: /* LDA IMM A9 02 */
    c->pc = 0xB466u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB466u: /* STA ABY 99 10 06 */
    c->pc = 0xB469u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB469u: /* INC ABX FE 10 01 */
    c->pc = 0xB46Cu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB46Cu: /* LDA ABX BD 10 01 */
    c->pc = 0xB46Fu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB46Fu: /* CMP IMM C9 03 */
    c->pc = 0xB471u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB471u: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB473u ^ 0xB48Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB48Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xB473u; } return 1;
case 0xB473u: /* LDA IMM A9 00 */
    c->pc = 0xB475u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB475u: /* STA ABX 9D 10 01 */
    c->pc = 0xB478u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB478u: /* STA ABX 9D A0 06 */
    c->pc = 0xB47Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB47Bu: /* LDA IMM A9 7E */
    c->pc = 0xB47Du;
    v = 0x7Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB47Du: /* STA ABX 9D E0 04 */
    c->pc = 0xB480u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB480u: /* LDA ABX BD 20 04 */
    c->pc = 0xB483u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB483u: /* ORA IMM 09 08 */
    c->pc = 0xB485u;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB485u: /* STA ABX 9D 20 04 */
    c->pc = 0xB488u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB488u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB48Au ^ 0xB48Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB48Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB48Au; } return 1;
case 0xB48Au: /* LDA IMM A9 1F */
    c->pc = 0xB48Cu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB48Cu: /* STA ABX 9D E0 04 */
    c->pc = 0xB48Fu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB48Fu: /* DEC ABX DE E0 04 */
    c->pc = 0xB492u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB492u: /* JSR ABS 20 BA EE */
    push(c, 0xB4u); push(c, 0x94u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB495u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB496u: /* LDA ABX BD E0 04 */
    c->pc = 0xB499u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB499u: /* BNE REL D0 2E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB49Bu ^ 0xB4C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB4C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB49Bu; } return 1;
case 0xB49Bu: /* LDA IMM A9 20 */
    c->pc = 0xB49Du;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB49Du: /* STA ABX 9D E0 04 */
    c->pc = 0xB4A0u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB4A0u: /* LDA IMM A9 03 */
    c->pc = 0xB4A2u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4A2u: /* STA ZP 85 01 */
    c->pc = 0xB4A4u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB4A4u: /* LDA IMM A9 51 */
    c->pc = 0xB4A6u;
    v = 0x51u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4A6u: /* JSR ABS 20 CF 96 */
    push(c, 0xB4u); push(c, 0xA8u); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xB4A9u: /* BCS REL B0 1E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB4ABu ^ 0xB4C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB4C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB4ABu; } return 1;
case 0xB4ABu: /* JSR ABS 20 EE EF */
    push(c, 0xB4u); push(c, 0xADu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xB4AEu: /* LDA ZP A5 00 */
    c->pc = 0xB4B0u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB4B0u: /* CMP IMM C9 48 */
    c->pc = 0xB4B2u;
    v = 0x48u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB4B2u: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB4B4u ^ 0xB4C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB4C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB4B4u; } return 1;
case 0xB4B4u: /* LDA IMM A9 51 */
    c->pc = 0xB4B6u;
    v = 0x51u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4B6u: /* JSR ABS 20 59 F1 */
    push(c, 0xB4u); push(c, 0xB8u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB4B9u: /* BCS REL B0 0E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB4BBu ^ 0xB4C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB4C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB4BBu; } return 1;
case 0xB4BBu: /* SEC IMP 38 */
    c->pc = 0xB4BCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB4BCu: /* LDA ABY B9 B0 04 */
    c->pc = 0xB4BFu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB4BFu: /* SBC IMM E9 0C */
    c->pc = 0xB4C1u;
    v = 0x0Cu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB4C1u: /* STA ABY 99 B0 04 */
    c->pc = 0xB4C4u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB4C4u: /* LDA IMM A9 1F */
    c->pc = 0xB4C6u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4C6u: /* STA ABY 99 F0 04 */
    c->pc = 0xB4C9u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB4C9u: /* DEC ABX DE E0 04 */
    c->pc = 0xB4CCu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB4CCu: /* JSR ABS 20 B3 EF */
    push(c, 0xB4u); push(c, 0xCEu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB4CFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB4D0u: /* LDA ABX BD 10 01 */
    c->pc = 0xB4D3u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB4D3u: /* BNE REL D0 3B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB4D5u ^ 0xB510u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB510u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB4D5u; } return 1;
case 0xB4D5u: /* DEC ABX DE E0 04 */
    c->pc = 0xB4D8u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB4D8u: /* BNE REL D0 5A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB4DAu ^ 0xB534u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB534u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB4DAu; } return 1;
case 0xB4DAu: /* LDA IMM A9 87 */
    c->pc = 0xB4DCu;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4DCu: /* STA ABX 9D 20 04 */
    c->pc = 0xB4DFu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB4DFu: /* JSR ABS 20 EE EF */
    push(c, 0xB4u); push(c, 0xE1u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xB4E2u: /* LDA ZP A5 4A */
    c->pc = 0xB4E4u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB4E4u: /* AND IMM 29 1F */
    c->pc = 0xB4E6u;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4E6u: /* STA ZP 85 01 */
    c->pc = 0xB4E8u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB4E8u: /* SEC IMP 38 */
    c->pc = 0xB4E9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB4E9u: /* LDA ZP A5 00 */
    c->pc = 0xB4EBu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB4EBu: /* SBC ZP E5 01 */
    c->pc = 0xB4EDu;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xB4EDu: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB4EFu ^ 0xB4F1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB4F1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB4EFu; } return 1;
case 0xB4EFu: /* LDA IMM A9 00 */
    c->pc = 0xB4F1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4F1u: /* STA ZP 85 00 */
    c->pc = 0xB4F3u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB4F3u: /* LDA IMM A9 00 */
    c->pc = 0xB4F5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4F5u: /* ASL ZP 06 00 */
    c->pc = 0xB4F7u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB4F7u: /* ROL IMP 2A */
    c->pc = 0xB4F8u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4F8u: /* ASL ZP 06 00 */
    c->pc = 0xB4FAu;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB4FAu: /* ROL IMP 2A */
    c->pc = 0xB4FBu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4FBu: /* ASL ZP 06 00 */
    c->pc = 0xB4FDu;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB4FDu: /* ROL IMP 2A */
    c->pc = 0xB4FEu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB4FEu: /* STA ABX 9D 00 06 */
    c->pc = 0xB501u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB501u: /* LDA ZP A5 00 */
    c->pc = 0xB503u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB503u: /* STA ABX 9D 20 06 */
    c->pc = 0xB506u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB506u: /* LDA IMM A9 04 */
    c->pc = 0xB508u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB508u: /* STA ABX 9D 40 06 */
    c->pc = 0xB50Bu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB50Bu: /* INC ABX FE 10 01 */
    c->pc = 0xB50Eu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB50Eu: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB510u ^ 0xB534u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB534u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB510u; } return 1;
case 0xB510u: /* CMP IMM C9 02 */
    c->pc = 0xB512u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB512u: /* BCS REL B0 30 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB514u ^ 0xB544u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB544u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB514u; } return 1;
case 0xB514u: /* LDA ABX BD 40 06 */
    c->pc = 0xB517u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB517u: /* PHP IMP 08 */
    c->pc = 0xB518u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xB518u: /* LDA IMM A9 05 */
    c->pc = 0xB51Au;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB51Au: /* STA ZP 85 01 */
    c->pc = 0xB51Cu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB51Cu: /* LDA IMM A9 08 */
    c->pc = 0xB51Eu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB51Eu: /* STA ZP 85 02 */
    c->pc = 0xB520u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB520u: /* JSR ABS 20 CF F0 */
    push(c, 0xB5u); push(c, 0x22u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xB523u: /* PLP IMP 28 */
    c->pc = 0xB524u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xB524u: /* BPL REL 10 0E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB526u ^ 0xB534u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB534u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB526u; } return 1;
case 0xB526u: /* LDA ZP A5 00 */
    c->pc = 0xB528u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB528u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB52Au ^ 0xB534u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB534u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB52Au; } return 1;
case 0xB52Au: /* LDA IMM A9 5D */
    c->pc = 0xB52Cu;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB52Cu: /* STA ABX 9D E0 04 */
    c->pc = 0xB52Fu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB52Fu: /* INC ABX FE 10 01 */
    c->pc = 0xB532u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB532u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB534u ^ 0xB544u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB544u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB534u; } return 1;
case 0xB534u: /* LDA ABX BD A0 06 */
    c->pc = 0xB537u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB537u: /* CMP IMM C9 0A */
    c->pc = 0xB539u;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB539u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB53Bu ^ 0xB540u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB540u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB53Bu; } return 1;
case 0xB53Bu: /* LDA IMM A9 06 */
    c->pc = 0xB53Du;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB53Du: /* STA ABX 9D A0 06 */
    c->pc = 0xB540u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB540u: /* JSR ABS 20 BA EE */
    push(c, 0xB5u); push(c, 0x42u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB543u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB544u: /* LDA ABX BD E0 04 */
    c->pc = 0xB547u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB547u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB549u ^ 0xB558u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB558u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB549u; } return 1;
case 0xB549u: /* DEC ABX DE E0 04 */
    c->pc = 0xB54Cu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB54Cu: /* LDA ABX BD A0 06 */
    c->pc = 0xB54Fu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB54Fu: /* CMP IMM C9 0A */
    c->pc = 0xB551u;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB551u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB553u ^ 0xB558u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB558u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB553u; } return 1;
case 0xB553u: /* LDA IMM A9 06 */
    c->pc = 0xB555u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB555u: /* STA ABX 9D A0 06 */
    c->pc = 0xB558u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB558u: /* JSR ABS 20 B3 EF */
    push(c, 0xB5u); push(c, 0x5Au); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB55Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB55Cu: /* DEC ABX DE E0 04 */
    c->pc = 0xB55Fu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB55Fu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB561u ^ 0xB565u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB565u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB561u; } return 1;
case 0xB561u: /* JSR ABS 20 B3 EF */
    push(c, 0xB5u); push(c, 0x63u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB564u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB565u: /* LSR ABX 5E 20 04 */
    c->pc = 0xB568u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB568u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB569u: /* LDA IMM A9 7D */
    c->pc = 0xB56Bu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB56Bu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB56Du ^ 0xB573u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB573u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB56Du; } return 1;
case 0xB56Du: /* LDA IMM A9 BB */
    c->pc = 0xB56Fu;
    v = 0xBBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB56Fu: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB571u ^ 0xB573u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB573u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB571u; } return 1;
case 0xB571u: /* LDA IMM A9 FA */
    c->pc = 0xB573u;
    v = 0xFAu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB573u: /* STA ZP 85 00 */
    c->pc = 0xB575u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB575u: /* LDA ABX BD 10 01 */
    c->pc = 0xB578u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB578u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB57Au ^ 0xB584u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB584u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB57Au; } return 1;
case 0xB57Au: /* LDA ZP A5 00 */
    c->pc = 0xB57Cu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB57Cu: /* STA ABX 9D 60 01 */
    c->pc = 0xB57Fu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB57Fu: /* INC ABX FE 10 01 */
    c->pc = 0xB582u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB582u: /* BNE REL D0 5A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB584u ^ 0xB5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB584u; } return 1;
case 0xB584u: /* CMP IMM C9 01 */
    c->pc = 0xB586u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB586u: /* BNE REL D0 21 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB588u ^ 0xB5A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB5A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB588u; } return 1;
case 0xB588u: /* LDA ABX BD 60 01 */
    c->pc = 0xB58Bu;
    ea = (uint16_t)(0x0160u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0160u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB58Bu: /* BNE REL D0 51 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB58Du ^ 0xB5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB58Du; } return 1;
case 0xB58Du: /* LDA IMM A9 90 */
    c->pc = 0xB58Fu;
    v = 0x90u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB58Fu: /* STA ABX 9D 20 04 */
    c->pc = 0xB592u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB592u: /* LDA IMM A9 3C */
    c->pc = 0xB594u;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB594u: /* JSR ABS 20 51 C0 */
    push(c, 0xB5u); push(c, 0x96u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB597u: /* LDA IMM A9 7D */
    c->pc = 0xB599u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB599u: /* STA ABX 9D 60 01 */
    c->pc = 0xB59Cu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB59Cu: /* INC ABX FE 10 01 */
    c->pc = 0xB59Fu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB59Fu: /* LDA IMM A9 00 */
    c->pc = 0xB5A1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB5A1u: /* STA ABX 9D 80 06 */
    c->pc = 0xB5A4u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5A4u: /* STA ABX 9D A0 06 */
    c->pc = 0xB5A7u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5A7u: /* BEQ REL F0 35 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB5A9u ^ 0xB5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB5A9u; } return 1;
case 0xB5A9u: /* LDA ABX BD A0 06 */
    c->pc = 0xB5ACu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5ACu: /* CMP IMM C9 05 */
    c->pc = 0xB5AEu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB5AEu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB5B0u ^ 0xB5B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB5B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB5B0u; } return 1;
case 0xB5B0u: /* LDA IMM A9 00 */
    c->pc = 0xB5B2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB5B2u: /* STA ABX 9D 80 06 */
    c->pc = 0xB5B5u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5B5u: /* LDA IMM A9 01 */
    c->pc = 0xB5B7u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB5B7u: /* STA ABX 9D E0 04 */
    c->pc = 0xB5BAu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5BAu: /* LDA ABX BD 60 04 */
    c->pc = 0xB5BDu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5BDu: /* AND ABX 3D 00 06 */
    c->pc = 0xB5C0u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5C0u: /* STA ABX 9D 40 06 */
    c->pc = 0xB5C3u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5C3u: /* LDA ABX BD A0 04 */
    c->pc = 0xB5C6u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5C6u: /* AND ABX 3D 20 06 */
    c->pc = 0xB5C9u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5C9u: /* STA ABX 9D 60 06 */
    c->pc = 0xB5CCu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5CCu: /* LDA ABX BD 60 01 */
    c->pc = 0xB5CFu;
    ea = (uint16_t)(0x0160u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0160u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5CFu: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB5D1u ^ 0xB5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB5D1u; } return 1;
case 0xB5D1u: /* LDA IMM A9 A0 */
    c->pc = 0xB5D3u;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB5D3u: /* STA ABX 9D 20 04 */
    c->pc = 0xB5D6u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5D6u: /* LDA IMM A9 7D */
    c->pc = 0xB5D8u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB5D8u: /* STA ABX 9D 60 01 */
    c->pc = 0xB5DBu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5DBu: /* DEC ABX DE 10 01 */
    c->pc = 0xB5DEu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB5DEu: /* DEC ABX DE 60 01 */
    c->pc = 0xB5E1u;
    ea = (uint16_t)(0x0160u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB5E1u: /* JSR ABS 20 B3 EF */
    push(c, 0xB5u); push(c, 0xE3u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB5E4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB5E5u: /* LDA ZP A5 2A */
    c->pc = 0xB5E7u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB5E7u: /* CMP IMM C9 0C */
    c->pc = 0xB5E9u;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB5E9u: /* BEQ REL F0 33 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB5EBu ^ 0xB61Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB61Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB5EBu; } return 1;
case 0xB5EBu: /* LSR ABX 5E 20 04 */
    c->pc = 0xB5EEu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB5EEu: /* LDA IMM A9 FF */
    c->pc = 0xB5F0u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB5F0u: /* STA ABX 9D F0 00 */
    c->pc = 0xB5F3u;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB5F3u: /* LDA ZP A5 2A */
    c->pc = 0xB5F5u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB5F5u: /* CMP IMM C9 0A */
    c->pc = 0xB5F7u;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB5F7u: /* BEQ REL F0 19 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB5F9u ^ 0xB612u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB612u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB5F9u; } return 1;
case 0xB5F9u: /* SEC IMP 38 */
    c->pc = 0xB5FAu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB5FAu: /* LDA ABX BD 40 04 */
    c->pc = 0xB5FDu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB5FDu: /* SBC IMM E9 0A */
    c->pc = 0xB5FFu;
    v = 0x0Au;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB5FFu: /* ASL IMP 0A */
    c->pc = 0xB600u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB600u: /* ASL IMP 0A */
    c->pc = 0xB601u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB601u: /* ASL IMP 0A */
    c->pc = 0xB602u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB602u: /* TAY IMP A8 */
    c->pc = 0xB603u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB603u: /* LDX IMM A2 00 */
    c->pc = 0xB605u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB605u: /* LDA ABY B9 29 B6 */
    c->pc = 0xB608u;
    ea = (uint16_t)(0xB629u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB629u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB608u: /* STA ABX 9D 5E 03 */
    c->pc = 0xB60Bu;
    ea = (uint16_t)(0x035Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB60Bu: /* INY IMP C8 */
    c->pc = 0xB60Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB60Cu: /* INX IMP E8 */
    c->pc = 0xB60Du;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB60Du: /* CPX IMM E0 08 */
    c->pc = 0xB60Fu;
    v = 0x08u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xB60Fu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB611u ^ 0xB605u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB605u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB611u; } return 1;
case 0xB611u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB612u: /* LDA IMM A9 0F */
    c->pc = 0xB614u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB614u: /* STA ABS 8D 63 03 */
    c->pc = 0xB617u;
    ea = 0x0363u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB617u: /* STA ABS 8D 64 03 */
    c->pc = 0xB61Au;
    ea = 0x0364u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB61Au: /* STA ABS 8D 65 03 */
    c->pc = 0xB61Du;
    ea = 0x0365u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB61Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB61Eu: /* LDA ZP A5 AA */
    c->pc = 0xB620u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB620u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB622u ^ 0xB626u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB626u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB622u; } return 1;
case 0xB622u: /* JSR ABS 20 B3 EF */
    push(c, 0xB6u); push(c, 0x24u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB625u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB626u: /* JMP ABS 4C 7A B9 */
    c->pc = 0xB97Au; c->cpu_cycles += 3u; return 1;
case 0xB641u: /* LDA ABX BD 10 01 */
    c->pc = 0xB644u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB644u: /* BNE REL D0 5B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB646u ^ 0xB6A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB6A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB646u; } return 1;
case 0xB646u: /* LDA IMM A9 03 */
    c->pc = 0xB648u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB648u: /* STA ZP 85 01 */
    c->pc = 0xB64Au;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB64Au: /* LDA IMM A9 04 */
    c->pc = 0xB64Cu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB64Cu: /* STA ZP 85 02 */
    c->pc = 0xB64Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB64Eu: /* JSR ABS 20 CF F0 */
    push(c, 0xB6u); push(c, 0x50u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xB651u: /* LDA ZP A5 03 */
    c->pc = 0xB653u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB653u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB655u ^ 0xB659u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB659u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB655u; } return 1;
case 0xB655u: /* LSR ABX 5E 20 04 */
    c->pc = 0xB658u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB658u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB659u: /* LDA ZP A5 00 */
    c->pc = 0xB65Bu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB65Bu: /* BEQ REL F0 78 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB65Du ^ 0xB6D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB6D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB65Du; } return 1;
case 0xB65Du: /* LDA IMM A9 04 */
    c->pc = 0xB65Fu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB65Fu: /* STA ZP 85 01 */
    c->pc = 0xB661u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB661u: /* LDA IMM A9 58 */
    c->pc = 0xB663u;
    v = 0x58u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB663u: /* JSR ABS 20 59 F1 */
    push(c, 0xB6u); push(c, 0x65u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB666u: /* BCS REL B0 1E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB668u ^ 0xB686u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB686u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB668u; } return 1;
case 0xB668u: /* LDX ZP A6 01 */
    c->pc = 0xB66Au;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB66Au: /* LDA ABX BD D9 B6 */
    c->pc = 0xB66Du;
    ea = (uint16_t)(0xB6D9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB6D9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB66Du: /* STA ABY 99 70 06 */
    c->pc = 0xB670u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB670u: /* LDA ABX BD DE B6 */
    c->pc = 0xB673u;
    ea = (uint16_t)(0xB6DEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB6DEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB673u: /* STA ABY 99 50 06 */
    c->pc = 0xB676u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB676u: /* LDA IMM A9 01 */
    c->pc = 0xB678u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB678u: /* STA ABY 99 20 01 */
    c->pc = 0xB67Bu;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB67Bu: /* LDA IMM A9 1F */
    c->pc = 0xB67Du;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB67Du: /* STA ABY 99 F0 04 */
    c->pc = 0xB680u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB680u: /* LDX ZP A6 2B */
    c->pc = 0xB682u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB682u: /* DEC ZP C6 01 */
    c->pc = 0xB684u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB684u: /* BNE REL D0 DB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB686u ^ 0xB661u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB661u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB686u; } return 1;
case 0xB686u: /* LDA IMM A9 81 */
    c->pc = 0xB688u;
    v = 0x81u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB688u: /* STA ABX 9D 20 04 */
    c->pc = 0xB68Bu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB68Bu: /* LDA IMM A9 00 */
    c->pc = 0xB68Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB68Du: /* STA ABX 9D 60 06 */
    c->pc = 0xB690u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB690u: /* STA ABX 9D 40 06 */
    c->pc = 0xB693u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB693u: /* STA ABX 9D 20 06 */
    c->pc = 0xB696u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB696u: /* STA ABX 9D 00 06 */
    c->pc = 0xB699u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB699u: /* LDA IMM A9 1F */
    c->pc = 0xB69Bu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB69Bu: /* STA ABX 9D E0 04 */
    c->pc = 0xB69Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB69Eu: /* INC ABX FE 10 01 */
    c->pc = 0xB6A1u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6A1u: /* LDA ABX BD 10 01 */
    c->pc = 0xB6A4u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB6A4u: /* CMP IMM C9 01 */
    c->pc = 0xB6A6u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB6A6u: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB6A8u ^ 0xB6CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB6CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB6A8u; } return 1;
case 0xB6A8u: /* DEC ABX DE E0 04 */
    c->pc = 0xB6ABu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6ABu: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB6ADu ^ 0xB6D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB6D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB6ADu; } return 1;
case 0xB6ADu: /* CLC IMP 18 */
    c->pc = 0xB6AEu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB6AEu: /* LDA ABX BD 60 06 */
    c->pc = 0xB6B1u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB6B1u: /* EOR IMM 49 FF */
    c->pc = 0xB6B3u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6B3u: /* ADC IMM 69 01 */
    c->pc = 0xB6B5u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB6B5u: /* STA ABX 9D 60 06 */
    c->pc = 0xB6B8u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB6B8u: /* LDA ABX BD 40 06 */
    c->pc = 0xB6BBu;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB6BBu: /* EOR IMM 49 FF */
    c->pc = 0xB6BDu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6BDu: /* ADC IMM 69 00 */
    c->pc = 0xB6BFu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB6BFu: /* STA ABX 9D 40 06 */
    c->pc = 0xB6C2u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB6C2u: /* INC ABX FE 10 01 */
    c->pc = 0xB6C5u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6C5u: /* LDA IMM A9 1F */
    c->pc = 0xB6C7u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6C7u: /* STA ABX 9D E0 04 */
    c->pc = 0xB6CAu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB6CAu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB6CCu ^ 0xB6D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB6D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB6CCu; } return 1;
case 0xB6CCu: /* DEC ABX DE E0 04 */
    c->pc = 0xB6CFu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6CFu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB6D1u ^ 0xB6D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB6D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB6D1u; } return 1;
case 0xB6D1u: /* LSR ABX 5E 20 04 */
    c->pc = 0xB6D4u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6D4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB6D5u: /* JSR ABS 20 BA EE */
    push(c, 0xB6u); push(c, 0xD7u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB6D8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB6E3u: /* LDA ABX BD 10 01 */
    c->pc = 0xB6E6u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB6E6u: /* BNE REL D0 1D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB6E8u ^ 0xB705u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB705u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB6E8u; } return 1;
case 0xB6E8u: /* DEC ABX DE E0 04 */
    c->pc = 0xB6EBu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6EBu: /* BNE REL D0 2F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB6EDu ^ 0xB71Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB71Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB6EDu; } return 1;
case 0xB6EDu: /* INC ABX FE 10 01 */
    c->pc = 0xB6F0u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB6F0u: /* LDA IMM A9 1F */
    c->pc = 0xB6F2u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6F2u: /* STA ABX 9D E0 04 */
    c->pc = 0xB6F5u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB6F5u: /* LDA IMM A9 00 */
    c->pc = 0xB6F7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6F7u: /* STA ABX 9D 00 06 */
    c->pc = 0xB6FAu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB6FAu: /* STA ABX 9D 20 06 */
    c->pc = 0xB6FDu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB6FDu: /* STA ABX 9D 40 06 */
    c->pc = 0xB700u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB700u: /* STA ABX 9D 60 06 */
    c->pc = 0xB703u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB703u: /* BEQ REL F0 17 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB705u ^ 0xB71Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB71Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB705u; } return 1;
case 0xB705u: /* CMP IMM C9 01 */
    c->pc = 0xB707u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB707u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB709u ^ 0xB71Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB71Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB709u; } return 1;
case 0xB709u: /* DEC ABX DE E0 04 */
    c->pc = 0xB70Cu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB70Cu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB70Eu ^ 0xB71Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB71Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB70Eu; } return 1;
case 0xB70Eu: /* INC ABX FE 10 01 */
    c->pc = 0xB711u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB711u: /* LDA IMM A9 00 */
    c->pc = 0xB713u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB713u: /* STA ZP 85 08 */
    c->pc = 0xB715u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB715u: /* LDA IMM A9 04 */
    c->pc = 0xB717u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB717u: /* STA ZP 85 09 */
    c->pc = 0xB719u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB719u: /* JSR ABS 20 97 F1 */
    push(c, 0xB7u); push(c, 0x1Bu); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0xB71Cu: /* JSR ABS 20 BA EE */
    push(c, 0xB7u); push(c, 0x1Eu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB71Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB720u: /* LDA ABX BD 40 06 */
    c->pc = 0xB723u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB723u: /* PHP IMP 08 */
    c->pc = 0xB724u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xB724u: /* LDA IMM A9 07 */
    c->pc = 0xB726u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB726u: /* STA ZP 85 00 */
    c->pc = 0xB728u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB728u: /* LDA IMM A9 08 */
    c->pc = 0xB72Au;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB72Au: /* STA ZP 85 02 */
    c->pc = 0xB72Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB72Cu: /* JSR ABS 20 CF F0 */
    push(c, 0xB7u); push(c, 0x2Eu); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xB72Fu: /* PLP IMP 28 */
    c->pc = 0xB730u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xB730u: /* BPL REL 10 0E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB732u ^ 0xB740u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB740u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB732u; } return 1;
case 0xB732u: /* LDA ZP A5 00 */
    c->pc = 0xB734u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB734u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB736u ^ 0xB740u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB740u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB736u; } return 1;
case 0xB736u: /* LDA IMM A9 03 */
    c->pc = 0xB738u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB738u: /* STA ABX 9D 40 06 */
    c->pc = 0xB73Bu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB73Bu: /* LDA IMM A9 76 */
    c->pc = 0xB73Du;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB73Du: /* STA ABX 9D 60 06 */
    c->pc = 0xB740u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB740u: /* LDA ZP A5 03 */
    c->pc = 0xB742u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB742u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB744u ^ 0xB747u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB747u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB744u; } return 1;
case 0xB744u: /* LSR ABX 5E 20 04 */
    c->pc = 0xB747u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB747u: /* JSR ABS 20 BA EE */
    push(c, 0xB7u); push(c, 0x49u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB74Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB74Bu: /* LDA ABX BD E0 04 */
    c->pc = 0xB74Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB74Eu: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB750u ^ 0xB763u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB763u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB750u; } return 1;
case 0xB750u: /* DEC ABX DE E0 04 */
    c->pc = 0xB753u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB753u: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB755u ^ 0xB763u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB763u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB755u; } return 1;
case 0xB755u: /* LDA IMM A9 00 */
    c->pc = 0xB757u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB757u: /* STA ABX 9D 00 06 */
    c->pc = 0xB75Au;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB75Au: /* STA ABX 9D 20 06 */
    c->pc = 0xB75Du;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB75Du: /* STA ABX 9D 60 06 */
    c->pc = 0xB760u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB760u: /* STA ABX 9D 40 06 */
    c->pc = 0xB763u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB763u: /* JSR ABS 20 BA EE */
    push(c, 0xB7u); push(c, 0x65u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB766u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB767u: /* LDA ABX BD E0 04 */
    c->pc = 0xB76Au;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB76Au: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB76Cu ^ 0xB7A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB76Cu; } return 1;
case 0xB76Cu: /* LDA IMM A9 00 */
    c->pc = 0xB76Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB76Eu: /* STA ABX 9D A0 06 */
    c->pc = 0xB771u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB771u: /* STA ABX 9D 80 06 */
    c->pc = 0xB774u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB774u: /* LDA IMM A9 07 */
    c->pc = 0xB776u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB776u: /* STA ZP 85 01 */
    c->pc = 0xB778u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB778u: /* LDA IMM A9 08 */
    c->pc = 0xB77Au;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB77Au: /* STA ZP 85 02 */
    c->pc = 0xB77Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB77Cu: /* JSR ABS 20 2C F0 */
    push(c, 0xB7u); push(c, 0x7Eu); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xB77Fu: /* LDA ZP A5 00 */
    c->pc = 0xB781u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB781u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB783u ^ 0xB786u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB786u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB783u; } return 1;
case 0xB783u: /* JMP ABS 4C 08 B8 */
    c->pc = 0xB808u; c->cpu_cycles += 3u; return 1;
case 0xB786u: /* LDA IMM A9 00 */
    c->pc = 0xB788u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB788u: /* STA ABX 9D 20 06 */
    c->pc = 0xB78Bu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB78Bu: /* STA ABX 9D 00 06 */
    c->pc = 0xB78Eu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB78Eu: /* STA ABX 9D 60 06 */
    c->pc = 0xB791u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB791u: /* STA ABX 9D 40 06 */
    c->pc = 0xB794u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB794u: /* INC ABX FE A0 06 */
    c->pc = 0xB797u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB797u: /* LDA IMM A9 2E */
    c->pc = 0xB799u;
    v = 0x2Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB799u: /* JSR ABS 20 51 C0 */
    push(c, 0xB7u); push(c, 0x9Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB79Cu: /* LDA IMM A9 1F */
    c->pc = 0xB79Eu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB79Eu: /* STA ABX 9D 10 01 */
    c->pc = 0xB7A1u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB7A1u: /* INC ABX FE E0 04 */
    c->pc = 0xB7A4u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB7A4u: /* BNE REL D0 62 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7A6u ^ 0xB808u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB808u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7A6u; } return 1;
case 0xB7A6u: /* CMP IMM C9 01 */
    c->pc = 0xB7A8u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB7A8u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7AAu ^ 0xB7B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7AAu; } return 1;
case 0xB7AAu: /* DEC ABX DE 10 01 */
    c->pc = 0xB7ADu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB7ADu: /* BNE REL D0 59 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7AFu ^ 0xB808u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB808u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7AFu; } return 1;
case 0xB7AFu: /* INC ABX FE E0 04 */
    c->pc = 0xB7B2u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB7B2u: /* LDA IMM A9 38 */
    c->pc = 0xB7B4u;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7B4u: /* STA ABX 9D 10 01 */
    c->pc = 0xB7B7u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB7B7u: /* LDA ABX BD 10 01 */
    c->pc = 0xB7BAu;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7BAu: /* AND IMM 29 07 */
    c->pc = 0xB7BCu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7BCu: /* BNE REL D0 3F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7BEu ^ 0xB7FDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7FDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7BEu; } return 1;
case 0xB7BEu: /* LDA IMM A9 2B */
    c->pc = 0xB7C0u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7C0u: /* JSR ABS 20 51 C0 */
    push(c, 0xB7u); push(c, 0xC2u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB7C3u: /* LDA ABX BD 10 01 */
    c->pc = 0xB7C6u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7C6u: /* LSR IMP 4A */
    c->pc = 0xB7C7u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7C7u: /* AND IMM 29 0C */
    c->pc = 0xB7C9u;
    v = 0x0Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7C9u: /* STA ZP 85 02 */
    c->pc = 0xB7CBu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7CBu: /* LDX IMM A2 04 */
    c->pc = 0xB7CDu;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB7CDu: /* STA ZP 85 01 */
    c->pc = 0xB7CFu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7CFu: /* LDA IMM A9 5F */
    c->pc = 0xB7D1u;
    v = 0x5Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7D1u: /* JSR ABS 20 59 F1 */
    push(c, 0xB7u); push(c, 0xD3u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB7D4u: /* BCS REL B0 27 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB7D6u ^ 0xB7FDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7FDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7D6u; } return 1;
case 0xB7D6u: /* LDX ZP A6 02 */
    c->pc = 0xB7D8u;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB7D8u: /* CLC IMP 18 */
    c->pc = 0xB7D9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB7D9u: /* LDA ABY B9 B0 04 */
    c->pc = 0xB7DCu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7DCu: /* ADC ABX 7D 1F E1 */
    c->pc = 0xB7DFu;
    ea = (uint16_t)(0xE11Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE11Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7DFu: /* STA ABY 99 B0 04 */
    c->pc = 0xB7E2u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB7E2u: /* CLC IMP 18 */
    c->pc = 0xB7E3u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB7E3u: /* LDA ABY B9 70 04 */
    c->pc = 0xB7E6u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7E6u: /* ADC ABX 7D 2F E1 */
    c->pc = 0xB7E9u;
    ea = (uint16_t)(0xE12Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE12Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7E9u: /* STA ABY 99 70 04 */
    c->pc = 0xB7ECu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB7ECu: /* LDA ABY B9 50 04 */
    c->pc = 0xB7EFu;
    ea = (uint16_t)(0x0450u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0450u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7EFu: /* ADC ABX 7D 3F E1 */
    c->pc = 0xB7F2u;
    ea = (uint16_t)(0xE13Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE13Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB7F2u: /* STA ABY 99 50 04 */
    c->pc = 0xB7F5u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB7F5u: /* LDX ZP A6 2B */
    c->pc = 0xB7F7u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB7F7u: /* INC ZP E6 02 */
    c->pc = 0xB7F9u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB7F9u: /* DEC ZP C6 01 */
    c->pc = 0xB7FBu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB7FBu: /* BNE REL D0 D2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7FDu ^ 0xB7CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7FDu; } return 1;
case 0xB7FDu: /* LDX ZP A6 2B */
    c->pc = 0xB7FFu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB7FFu: /* DEC ABX DE 10 01 */
    c->pc = 0xB802u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB802u: /* BPL REL 10 04 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB804u ^ 0xB808u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB808u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB804u; } return 1;
case 0xB804u: /* LSR ABX 5E 20 04 */
    c->pc = 0xB807u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB807u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB808u: /* LDA ABX BD A0 06 */
    c->pc = 0xB80Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB80Bu: /* CMP IMM C9 04 */
    c->pc = 0xB80Du;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB80Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB80Fu ^ 0xB814u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB814u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB80Fu; } return 1;
case 0xB80Fu: /* LDA IMM A9 02 */
    c->pc = 0xB811u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB811u: /* STA ABX 9D A0 06 */
    c->pc = 0xB814u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB814u: /* JSR ABS 20 BA EE */
    push(c, 0xB8u); push(c, 0x16u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB817u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB818u: /* LDA ABX BD E0 04 */
    c->pc = 0xB81Bu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB81Bu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB81Du ^ 0xB826u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB826u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB81Du; } return 1;
case 0xB81Du: /* LDA IMM A9 00 */
    c->pc = 0xB81Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB81Fu: /* STA ABX 9D 80 06 */
    c->pc = 0xB822u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB822u: /* JSR ABS 20 BA EE */
    push(c, 0xB8u); push(c, 0x24u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB825u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB826u: /* LDA ABX BD A0 06 */
    c->pc = 0xB829u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB829u: /* ORA ABX 1D 80 06 */
    c->pc = 0xB82Cu;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB82Cu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB82Eu ^ 0xB840u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB840u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB82Eu; } return 1;
case 0xB82Eu: /* LDA ABX BD 20 04 */
    c->pc = 0xB831u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB831u: /* EOR IMM 49 40 */
    c->pc = 0xB833u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB833u: /* STA ABX 9D 20 04 */
    c->pc = 0xB836u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB836u: /* LDA IMM A9 FE */
    c->pc = 0xB838u;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB838u: /* STA ABX 9D 40 06 */
    c->pc = 0xB83Bu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB83Bu: /* LDA IMM A9 00 */
    c->pc = 0xB83Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB83Du: /* STA ABX 9D 60 06 */
    c->pc = 0xB840u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB840u: /* CLC IMP 18 */
    c->pc = 0xB841u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB841u: /* LDA ABX BD 60 06 */
    c->pc = 0xB844u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB844u: /* ADC IMM 69 20 */
    c->pc = 0xB846u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB846u: /* STA ABX 9D 60 06 */
    c->pc = 0xB849u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB849u: /* LDA ABX BD 40 06 */
    c->pc = 0xB84Cu;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB84Cu: /* ADC IMM 69 00 */
    c->pc = 0xB84Eu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB84Eu: /* STA ABX 9D 40 06 */
    c->pc = 0xB851u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB851u: /* JSR ABS 20 BA EE */
    push(c, 0xB8u); push(c, 0x53u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB854u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB855u: /* LDA ZP A5 2A */
    c->pc = 0xB857u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB857u: /* CMP IMM C9 08 */
    c->pc = 0xB859u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB859u: /* BEQ REL F0 15 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB85Bu ^ 0xB870u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB870u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB85Bu; } return 1;
case 0xB85Bu: /* LDA IMM A9 58 */
    c->pc = 0xB85Du;
    v = 0x58u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB85Du: /* STA ABX 9D 50 01 */
    c->pc = 0xB860u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB860u: /* SEC IMP 38 */
    c->pc = 0xB861u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB861u: /* LDA ABX BD A0 04 */
    c->pc = 0xB864u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB864u: /* SBC IMM E9 18 */
    c->pc = 0xB866u;
    v = 0x18u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB866u: /* STA ABX 9D 60 01 */
    c->pc = 0xB869u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB869u: /* LDA ZP A5 AA */
    c->pc = 0xB86Bu;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB86Bu: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB86Du ^ 0xB88Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB88Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB86Du; } return 1;
case 0xB86Du: /* JMP ABS 4C 7A B9 */
    c->pc = 0xB97Au; c->cpu_cycles += 3u; return 1;
case 0xB870u: /* LDA IMM A9 10 */
    c->pc = 0xB872u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB872u: /* STA ABX 9D 50 01 */
    c->pc = 0xB875u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB875u: /* SEC IMP 38 */
    c->pc = 0xB876u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB876u: /* LDA ABX BD A0 04 */
    c->pc = 0xB879u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB879u: /* SBC IMM E9 08 */
    c->pc = 0xB87Bu;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB87Bu: /* STA ABX 9D 60 01 */
    c->pc = 0xB87Eu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB87Eu: /* LDA ZP A5 AA */
    c->pc = 0xB880u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB880u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB882u ^ 0xB88Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB88Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB882u; } return 1;
case 0xB882u: /* JSR ABS 20 BA EE */
    push(c, 0xB8u); push(c, 0x84u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB885u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB887u ^ 0xB88Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB88Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB887u; } return 1;
case 0xB887u: /* LDA IMM A9 00 */
    c->pc = 0xB889u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB889u: /* STA ABX 9D 50 01 */
    c->pc = 0xB88Cu;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB88Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB88Du: /* JSR ABS 20 B3 EF */
    push(c, 0xB8u); push(c, 0x8Fu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xB890u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB891u: /* LDA ABX BD E0 04 */
    c->pc = 0xB894u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB894u: /* BPL REL 10 01 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB896u ^ 0xB897u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB897u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB896u; } return 1;
case 0xB896u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB897u: /* BNE REL D0 57 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB899u ^ 0xB8F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB899u; } return 1;
case 0xB899u: /* LDA ZP A5 15 */
    c->pc = 0xB89Bu;
    ea = 0x15u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB89Bu: /* STA ZP 85 14 */
    c->pc = 0xB89Du;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB89Du: /* INC ZP E6 38 */
    c->pc = 0xB89Fu;
    ea = 0x38u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB89Fu: /* LDA IMM A9 07 */
    c->pc = 0xB8A1u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8A1u: /* STA ABX 9D C0 06 */
    c->pc = 0xB8A4u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB8A4u: /* LDA IMM A9 08 */
    c->pc = 0xB8A6u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8A6u: /* STA ZP 85 B3 */
    c->pc = 0xB8A8u;
    ea = 0xB3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8A8u: /* LDA IMM A9 01 */
    c->pc = 0xB8AAu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8AAu: /* STA ZP 85 B1 */
    c->pc = 0xB8ACu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8ACu: /* LDA IMM A9 17 */
    c->pc = 0xB8AEu;
    v = 0x17u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8AEu: /* STA ABS 8D B6 03 */
    c->pc = 0xB8B1u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8B1u: /* LDA IMM A9 E0 */
    c->pc = 0xB8B3u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8B3u: /* STA ABS 8D B7 03 */
    c->pc = 0xB8B6u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8B6u: /* LDA IMM A9 00 */
    c->pc = 0xB8B8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8B8u: /* STA ABS 8D E1 04 */
    c->pc = 0xB8BBu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8BBu: /* STA ABS 8D C1 06 */
    c->pc = 0xB8BEu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8BEu: /* STA ABS 8D A9 05 */
    c->pc = 0xB8C1u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8C1u: /* STA ZP 85 B2 */
    c->pc = 0xB8C3u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8C3u: /* LDA IMM A9 B8 */
    c->pc = 0xB8C5u;
    v = 0xB8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8C5u: /* STA ABS 8D A7 05 */
    c->pc = 0xB8C8u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8C8u: /* LDA IMM A9 0F */
    c->pc = 0xB8CAu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8CAu: /* LDX IMM A2 0F */
    c->pc = 0xB8CCu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB8CCu: /* STA ABX 9D 56 03 */
    c->pc = 0xB8CFu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB8CFu: /* DEX IMP CA */
    c->pc = 0xB8D0u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB8D0u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB8D2u ^ 0xB8CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8D2u; } return 1;
case 0xB8D2u: /* LDX ZP A6 2B */
    c->pc = 0xB8D4u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB8D4u: /* INC ABX FE E0 04 */
    c->pc = 0xB8D7u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB8D7u: /* LDA IMM A9 18 */
    c->pc = 0xB8D9u;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8D9u: /* STA ABX 9D 10 01 */
    c->pc = 0xB8DCu;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB8DCu: /* LDA IMM A9 63 */
    c->pc = 0xB8DEu;
    v = 0x63u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8DEu: /* STA ZP 85 00 */
    c->pc = 0xB8E0u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8E0u: /* LDY IMM A0 0F */
    c->pc = 0xB8E2u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB8E2u: /* JSR ABS 20 14 F0 */
    push(c, 0xB8u); push(c, 0xE4u); c->pc = 0xF014u; c->cpu_cycles += 6u; return 1;
case 0xB8E5u: /* BCS REL B0 08 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB8E7u ^ 0xB8EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8E7u; } return 1;
case 0xB8E7u: /* LDA IMM A9 01 */
    c->pc = 0xB8E9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8E9u: /* STA ABY 99 10 06 */
    c->pc = 0xB8ECu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB8ECu: /* DEY IMP 88 */
    c->pc = 0xB8EDu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB8EDu: /* BPL REL 10 F3 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB8EFu ^ 0xB8E2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8E2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8EFu; } return 1;
case 0xB8EFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB8F0u: /* LDA IMM A9 01 */
    c->pc = 0xB8F2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8F2u: /* STA ZP 85 40 */
    c->pc = 0xB8F4u;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8F4u: /* LDA IMM A9 00 */
    c->pc = 0xB8F6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8F6u: /* STA ZP 85 AF */
    c->pc = 0xB8F8u;
    ea = 0xAFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8F8u: /* LDA IMM A9 00 */
    c->pc = 0xB8FAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8FAu: /* STA ZP 85 4F */
    c->pc = 0xB8FCu;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8FCu: /* LDA IMM A9 01 */
    c->pc = 0xB8FEu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8FEu: /* STA ZP 85 50 */
    c->pc = 0xB900u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB900u: /* LDA ABX BD E0 04 */
    c->pc = 0xB903u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB903u: /* CMP IMM C9 01 */
    c->pc = 0xB905u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB905u: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB907u ^ 0xB927u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB927u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB907u; } return 1;
case 0xB907u: /* DEC ABX DE 10 01 */
    c->pc = 0xB90Au;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB90Au: /* BNE REL D0 42 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB90Cu ^ 0xB94Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB94Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB90Cu; } return 1;
case 0xB90Cu: /* LDA IMM A9 40 */
    c->pc = 0xB90Eu;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB90Eu: /* STA ABX 9D 10 01 */
    c->pc = 0xB911u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB911u: /* LDA IMM A9 63 */
    c->pc = 0xB913u;
    v = 0x63u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB913u: /* JSR ABS 20 59 F1 */
    push(c, 0xB9u); push(c, 0x15u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB916u: /* LDA IMM A9 01 */
    c->pc = 0xB918u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB918u: /* STA ABY 99 10 06 */
    c->pc = 0xB91Bu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB91Bu: /* STA ABY 99 F0 04 */
    c->pc = 0xB91Eu;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB91Eu: /* DEC ABX DE C0 06 */
    c->pc = 0xB921u;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB921u: /* BNE REL D0 2B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB923u ^ 0xB94Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB94Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB923u; } return 1;
case 0xB923u: /* INC ABX FE E0 04 */
    c->pc = 0xB926u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB926u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB927u: /* DEC ABX DE 10 01 */
    c->pc = 0xB92Au;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB92Au: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB92Cu ^ 0xB94Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB94Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB92Cu; } return 1;
case 0xB92Cu: /* LDY ABX BC C0 06 */
    c->pc = 0xB92Fu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB92Fu: /* LDA ABY B9 71 B9 */
    c->pc = 0xB932u;
    ea = (uint16_t)(0xB971u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB971u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB932u: /* STA ABX 9D 10 01 */
    c->pc = 0xB935u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB935u: /* BMI REL 30 18 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xB937u ^ 0xB94Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB94Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB937u; } return 1;
case 0xB937u: /* LDA ABY B9 76 B9 */
    c->pc = 0xB93Au;
    ea = (uint16_t)(0xB976u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB976u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB93Au: /* STA ZP 85 02 */
    c->pc = 0xB93Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB93Cu: /* LDA IMM A9 63 */
    c->pc = 0xB93Eu;
    v = 0x63u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB93Eu: /* JSR ABS 20 59 F1 */
    push(c, 0xB9u); push(c, 0x40u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xB941u: /* LDA ZP A5 02 */
    c->pc = 0xB943u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB943u: /* STA ABY 99 B0 04 */
    c->pc = 0xB946u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB946u: /* LDA IMM A9 01 */
    c->pc = 0xB948u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB948u: /* STA ABY 99 10 06 */
    c->pc = 0xB94Bu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB94Bu: /* INC ABX FE C0 06 */
    c->pc = 0xB94Eu;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB94Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB94Fu: /* LDA IMM A9 63 */
    c->pc = 0xB951u;
    v = 0x63u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB951u: /* STA ZP 85 00 */
    c->pc = 0xB953u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB953u: /* LDY IMM A0 0F */
    c->pc = 0xB955u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB955u: /* JSR ABS 20 14 F0 */
    push(c, 0xB9u); push(c, 0x57u); c->pc = 0xF014u; c->cpu_cycles += 6u; return 1;
case 0xB958u: /* BCS REL B0 08 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB95Au ^ 0xB962u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB962u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB95Au; } return 1;
case 0xB95Au: /* LDA IMM A9 00 */
    c->pc = 0xB95Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB95Cu: /* STA ABY 99 10 06 */
    c->pc = 0xB95Fu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB95Fu: /* DEY IMP 88 */
    c->pc = 0xB960u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB960u: /* BPL REL 10 F3 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB962u ^ 0xB955u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB955u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB962u; } return 1;
case 0xB962u: /* LDX ZP A6 2B */
    c->pc = 0xB964u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB964u: /* LDA IMM A9 FF */
    c->pc = 0xB966u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB966u: /* STA ABX 9D E0 04 */
    c->pc = 0xB969u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB969u: /* INC ZP E6 B1 */
    c->pc = 0xB96Bu;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB96Bu: /* LDA IMM A9 0B */
    c->pc = 0xB96Du;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB96Du: /* JSR ABS 20 51 C0 */
    push(c, 0xB9u); push(c, 0x6Fu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB970u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB97Au: /* LDA ABS AD 41 06 */
    c->pc = 0xB97Du;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB97Du: /* STA ABX 9D 40 06 */
    c->pc = 0xB980u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB980u: /* LDA ABS AD 61 06 */
    c->pc = 0xB983u;
    ea = 0x0661u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB983u: /* STA ABX 9D 60 06 */
    c->pc = 0xB986u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB986u: /* LDA ABS AD 01 06 */
    c->pc = 0xB989u;
    ea = 0x0601u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB989u: /* STA ABX 9D 00 06 */
    c->pc = 0xB98Cu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB98Cu: /* LDA ABS AD 21 06 */
    c->pc = 0xB98Fu;
    ea = 0x0621u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB98Fu: /* STA ABX 9D 20 06 */
    c->pc = 0xB992u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB992u: /* LDA ABS AD A7 05 */
    c->pc = 0xB995u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB995u: /* STA ABX 9D 20 04 */
    c->pc = 0xB998u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB998u: /* JSR ABS 20 BA EE */
    push(c, 0xB9u); push(c, 0x9Au); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB99Bu: /* LDA ZP A5 B3 */
    c->pc = 0xB99Du;
    ea = 0xB3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB99Du: /* CMP IMM C9 08 */
    c->pc = 0xB99Fu;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB99Fu: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB9A1u ^ 0xB9B1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9B1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9A1u; } return 1;
case 0xB9A1u: /* LDA ABX BD 00 04 */
    c->pc = 0xB9A4u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9A4u: /* CMP IMM C9 69 */
    c->pc = 0xB9A6u;
    v = 0x69u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB9A6u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB9A8u ^ 0xB9B1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9B1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9A8u; } return 1;
case 0xB9A8u: /* LDA ABX BD 20 04 */
    c->pc = 0xB9ABu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9ABu: /* ORA IMM 09 23 */
    c->pc = 0xB9ADu;
    v = 0x23u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9ADu: /* STA ABX 9D 20 04 */
    c->pc = 0xB9B0u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9B0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB9B1u: /* LDA IMM A9 8B */
    c->pc = 0xB9B3u;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9B3u: /* STA ABX 9D 20 04 */
    c->pc = 0xB9B6u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9B6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB9B7u: /* LDA IMM A9 00 */
    c->pc = 0xB9B9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9B9u: /* STA ABX 9D A0 06 */
    c->pc = 0xB9BCu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9BCu: /* LDA ABS AD A7 05 */
    c->pc = 0xB9BFu;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB9BFu: /* AND IMM 29 40 */
    c->pc = 0xB9C1u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9C1u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB9C3u ^ 0xB9C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9C3u; } return 1;
case 0xB9C3u: /* INC ABX FE A0 06 */
    c->pc = 0xB9C6u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB9C6u: /* LDA IMM A9 00 */
    c->pc = 0xB9C8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9C8u: /* STA ABX 9D 80 06 */
    c->pc = 0xB9CBu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9CBu: /* JMP ABS 4C 7A B9 */
    c->pc = 0xB97Au; c->cpu_cycles += 3u; return 1;
case 0xB9CEu: /* LDA ZP A5 2A */
    c->pc = 0xB9D0u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB9D0u: /* CMP IMM C9 08 */
    c->pc = 0xB9D2u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB9D2u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB9D4u ^ 0xB9D7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9D7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9D4u; } return 1;
case 0xB9D4u: /* JMP ABS 4C 7A B9 */
    c->pc = 0xB97Au; c->cpu_cycles += 3u; return 1;
case 0xB9D7u: /* JSR ABS 20 BA EE */
    push(c, 0xB9u); push(c, 0xD9u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xB9DAu: /* LDA ABX BD A0 04 */
    c->pc = 0xB9DDu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9DDu: /* CMP IMM C9 80 */
    c->pc = 0xB9DFu;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB9DFu: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB9E1u ^ 0xB9F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9E1u; } return 1;
case 0xB9E1u: /* LDA IMM A9 00 */
    c->pc = 0xB9E3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9E3u: /* STA ABX 9D 40 06 */
    c->pc = 0xB9E6u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9E6u: /* LDA ABX BD A0 06 */
    c->pc = 0xB9E9u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9E9u: /* ORA ABX 1D 80 06 */
    c->pc = 0xB9ECu;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9ECu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB9EEu ^ 0xB9F4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9F4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9EEu; } return 1;
case 0xB9EEu: /* INC ABS EE E1 04 */
    c->pc = 0xB9F1u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB9F1u: /* LSR ABX 5E 20 04 */
    c->pc = 0xB9F4u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB9F4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB9F5u: /* LDA IMM A9 00 */
    c->pc = 0xB9F7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9F7u: /* STA ABX 9D A0 06 */
    c->pc = 0xB9FAu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9FAu: /* STA ABX 9D 80 06 */
    c->pc = 0xB9FDu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9FDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB9FEu: /* LDA ABX BD E0 04 */
    c->pc = 0xBA01u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA01u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA03u ^ 0xBA16u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA16u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA03u; } return 1;
case 0xBA03u: /* LDA IMM A9 80 */
    c->pc = 0xBA05u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA05u: /* STA ABX 9D 60 06 */
    c->pc = 0xBA08u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA08u: /* LDA IMM A9 FF */
    c->pc = 0xBA0Au;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA0Au: /* STA ABX 9D 40 06 */
    c->pc = 0xBA0Du;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA0Du: /* LDA ABX BD A0 04 */
    c->pc = 0xBA10u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA10u: /* CMP IMM C9 7F */
    c->pc = 0xBA12u;
    v = 0x7Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA12u: /* BCC REL 90 1B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBA14u ^ 0xBA2Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA2Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA14u; } return 1;
case 0xBA14u: /* BCS REL B0 11 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBA16u ^ 0xBA27u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA27u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA16u; } return 1;
case 0xBA16u: /* LDA IMM A9 80 */
    c->pc = 0xBA18u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA18u: /* STA ABX 9D 60 06 */
    c->pc = 0xBA1Bu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA1Bu: /* LDA IMM A9 00 */
    c->pc = 0xBA1Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA1Du: /* STA ABX 9D 40 06 */
    c->pc = 0xBA20u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA20u: /* LDA ABX BD A0 04 */
    c->pc = 0xBA23u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA23u: /* CMP IMM C9 68 */
    c->pc = 0xBA25u;
    v = 0x68u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA25u: /* BCS REL B0 08 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBA27u ^ 0xBA2Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA2Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA27u; } return 1;
case 0xBA27u: /* LDA IMM A9 00 */
    c->pc = 0xBA29u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA29u: /* STA ABX 9D 40 06 */
    c->pc = 0xBA2Cu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA2Cu: /* STA ABX 9D 60 06 */
    c->pc = 0xBA2Fu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA2Fu: /* JMP ABS 4C 86 B9 */
    c->pc = 0xB986u; c->cpu_cycles += 3u; return 1;
case 0xBA32u: /* LDA ABX BD A0 06 */
    c->pc = 0xBA35u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA35u: /* BNE REL D0 2F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA37u ^ 0xBA66u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA66u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA37u; } return 1;
case 0xBA37u: /* STA ABX 9D 80 06 */
    c->pc = 0xBA3Au;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA3Au: /* DEC ABX DE 10 01 */
    c->pc = 0xBA3Du;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBA3Du: /* BNE REL D0 23 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA3Fu ^ 0xBA62u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA62u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA3Fu; } return 1;
case 0xBA3Fu: /* LDA ABX BD 20 04 */
    c->pc = 0xBA42u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA42u: /* AND IMM 29 40 */
    c->pc = 0xBA44u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA44u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA46u ^ 0xBA4Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA4Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA46u; } return 1;
case 0xBA46u: /* LSR ABX 5E 20 04 */
    c->pc = 0xBA49u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBA49u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBA4Au: /* CLC IMP 18 */
    c->pc = 0xBA4Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBA4Bu: /* LDA ABX BD 60 04 */
    c->pc = 0xBA4Eu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA4Eu: /* ADC IMM 69 08 */
    c->pc = 0xBA50u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA50u: /* STA ABX 9D 60 04 */
    c->pc = 0xBA53u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA53u: /* INC ABX FE A0 06 */
    c->pc = 0xBA56u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBA56u: /* LDA IMM A9 01 */
    c->pc = 0xBA58u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA58u: /* STA ABX 9D 60 01 */
    c->pc = 0xBA5Bu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA5Bu: /* LDA IMM A9 0F */
    c->pc = 0xBA5Du;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA5Du: /* STA ABX 9D 10 01 */
    c->pc = 0xBA60u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA60u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA62u ^ 0xBA66u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA66u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA62u; } return 1;
case 0xBA62u: /* JSR ABS 20 BA EE */
    push(c, 0xBAu); push(c, 0x64u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xBA65u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBA66u: /* LDA ABX BD 60 01 */
    c->pc = 0xBA69u;
    ea = (uint16_t)(0x0160u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0160u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA69u: /* BNE REL D0 25 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA6Bu ^ 0xBA90u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA90u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA6Bu; } return 1;
case 0xBA6Bu: /* DEC ABX DE 10 01 */
    c->pc = 0xBA6Eu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBA6Eu: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBA70u ^ 0xBA86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA86u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA70u; } return 1;
case 0xBA70u: /* LDA ABX BD 60 04 */
    c->pc = 0xBA73u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA73u: /* CMP IMM C9 30 */
    c->pc = 0xBA75u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA75u: /* BCC REL 90 0F */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBA77u ^ 0xBA86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA86u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA77u; } return 1;
case 0xBA77u: /* CMP IMM C9 D0 */
    c->pc = 0xBA79u;
    v = 0xD0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA79u: /* BCS REL B0 0B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBA7Bu ^ 0xBA86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA86u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA7Bu; } return 1;
case 0xBA7Bu: /* LDA ABX BD A0 04 */
    c->pc = 0xBA7Eu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA7Eu: /* CMP IMM C9 30 */
    c->pc = 0xBA80u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA80u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBA82u ^ 0xBA86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA86u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA82u; } return 1;
case 0xBA82u: /* CMP IMM C9 C0 */
    c->pc = 0xBA84u;
    v = 0xC0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA84u: /* BCC REL 90 42 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBA86u ^ 0xBAC8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBAC8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA86u; } return 1;
case 0xBA86u: /* LDA IMM A9 01 */
    c->pc = 0xBA88u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA88u: /* STA ABX 9D 60 01 */
    c->pc = 0xBA8Bu;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA8Bu: /* LDA IMM A9 3E */
    c->pc = 0xBA8Du;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA8Du: /* STA ABX 9D 10 01 */
    c->pc = 0xBA90u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA90u: /* LDA IMM A9 00 */
    c->pc = 0xBA92u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA92u: /* STA ABX 9D 00 06 */
    c->pc = 0xBA95u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA95u: /* STA ABX 9D 20 06 */
    c->pc = 0xBA98u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA98u: /* STA ABX 9D 60 06 */
    c->pc = 0xBA9Bu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA9Bu: /* STA ABX 9D 40 06 */
    c->pc = 0xBA9Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA9Eu: /* DEC ABX DE 10 01 */
    c->pc = 0xBAA1u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBAA1u: /* BNE REL D0 25 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBAA3u ^ 0xBAC8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBAC8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBAA3u; } return 1;
case 0xBAA3u: /* LDA IMM A9 83 */
    c->pc = 0xBAA5u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAA5u: /* STA ABX 9D 20 04 */
    c->pc = 0xBAA8u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBAA8u: /* LDA IMM A9 01 */
    c->pc = 0xBAAAu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAAAu: /* STA ABX 9D E0 06 */
    c->pc = 0xBAADu;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBAADu: /* LDA IMM A9 00 */
    c->pc = 0xBAAFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAAFu: /* STA ABX 9D 60 01 */
    c->pc = 0xBAB2u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBAB2u: /* LDY ABX BC E0 04 */
    c->pc = 0xBAB5u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBAB5u: /* LDA ABY B9 E3 BA */
    c->pc = 0xBAB8u;
    ea = (uint16_t)(0xBAE3u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBAE3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBAB8u: /* STA ABX 9D 10 01 */
    c->pc = 0xBABBu;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBABBu: /* LDA ABY B9 E7 BA */
    c->pc = 0xBABEu;
    ea = (uint16_t)(0xBAE7u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBAE7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBABEu: /* STA ZP 85 08 */
    c->pc = 0xBAC0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAC0u: /* LDA ABY B9 EB BA */
    c->pc = 0xBAC3u;
    ea = (uint16_t)(0xBAEBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBAEBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBAC3u: /* STA ZP 85 09 */
    c->pc = 0xBAC5u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAC5u: /* JSR ABS 20 97 F1 */
    push(c, 0xBAu); push(c, 0xC7u); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0xBAC8u: /* LDA ABX BD A0 06 */
    c->pc = 0xBACBu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBACBu: /* CMP IMM C9 06 */
    c->pc = 0xBACDu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBACDu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBACFu ^ 0xBAD4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBAD4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBACFu; } return 1;
case 0xBACFu: /* LDA IMM A9 04 */
    c->pc = 0xBAD1u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAD1u: /* STA ABX 9D A0 06 */
    c->pc = 0xBAD4u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBAD4u: /* JSR ABS 20 BA EE */
    push(c, 0xBAu); push(c, 0xD6u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xBAD7u: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBAD9u ^ 0xBAE2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBAE2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBAD9u; } return 1;
case 0xBAD9u: /* SEC IMP 38 */
    c->pc = 0xBADAu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBADAu: /* LDA ABS AD C1 06 */
    c->pc = 0xBADDu;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBADDu: /* SBC IMM E9 02 */
    c->pc = 0xBADFu;
    v = 0x02u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBADFu: /* STA ABS 8D C1 06 */
    c->pc = 0xBAE2u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBAE2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBAEFu: /* LDA ZP A5 B1 */
    c->pc = 0xBAF1u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAF1u: /* CMP IMM C9 04 */
    c->pc = 0xBAF3u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBAF3u: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBAF5u ^ 0xBB0Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB0Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xBAF5u; } return 1;
case 0xBAF5u: /* CLC IMP 18 */
    c->pc = 0xBAF6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBAF6u: /* LDA ABX BD 60 06 */
    c->pc = 0xBAF9u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBAF9u: /* ADC IMM 69 40 */
    c->pc = 0xBAFBu;
    v = 0x40u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBAFBu: /* STA ABX 9D 60 06 */
    c->pc = 0xBAFEu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBAFEu: /* LDA ABX BD 40 06 */
    c->pc = 0xBB01u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB01u: /* ADC IMM 69 00 */
    c->pc = 0xBB03u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB03u: /* STA ABX 9D 40 06 */
    c->pc = 0xBB06u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB06u: /* JSR ABS 20 BA EE */
    push(c, 0xBBu); push(c, 0x08u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xBB09u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBB0Au: /* LDA IMM A9 07 */
    c->pc = 0xBB0Cu;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB0Cu: /* STA ZP 85 01 */
    c->pc = 0xBB0Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB0Eu: /* LDA IMM A9 08 */
    c->pc = 0xBB10u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB10u: /* STA ZP 85 02 */
    c->pc = 0xBB12u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB12u: /* JSR ABS 20 2C F0 */
    push(c, 0xBBu); push(c, 0x14u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xBB15u: /* LDA ZP A5 00 */
    c->pc = 0xBB17u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB17u: /* BEQ REL F0 ED */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBB19u ^ 0xBB06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB06u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB19u; } return 1;
case 0xBB19u: /* LDA IMM A9 04 */
    c->pc = 0xBB1Bu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB1Bu: /* STA ABX 9D 40 06 */
    c->pc = 0xBB1Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB1Eu: /* LDA IMM A9 78 */
    c->pc = 0xBB20u;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB20u: /* STA ABX 9D 60 06 */
    c->pc = 0xBB23u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB23u: /* BNE REL D0 E1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB25u ^ 0xBB06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB06u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB25u; } return 1;
case 0xBB25u: /* SEC IMP 38 */
    c->pc = 0xBB26u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBB26u: /* LDA ABX BD 20 06 */
    c->pc = 0xBB29u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB29u: /* SBC IMM E9 01 */
    c->pc = 0xBB2Bu;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB2Bu: /* STA ABX 9D 20 06 */
    c->pc = 0xBB2Eu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB2Eu: /* TAY IMP A8 */
    c->pc = 0xBB2Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBB2Fu: /* LDA ABX BD 00 06 */
    c->pc = 0xBB32u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB32u: /* SBC IMM E9 00 */
    c->pc = 0xBB34u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB34u: /* STA ABX 9D 00 06 */
    c->pc = 0xBB37u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB37u: /* BNE REL D0 3D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB39u ^ 0xBB76u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB76u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB39u; } return 1;
case 0xBB39u: /* CPY IMM C0 00 */
    c->pc = 0xBB3Bu;
    v = 0x00u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB3Bu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBB3Du ^ 0xBB4Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB4Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB3Du; } return 1;
case 0xBB3Du: /* CPY IMM C0 3E */
    c->pc = 0xBB3Fu;
    v = 0x3Eu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB3Fu: /* BCS REL B0 35 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBB41u ^ 0xBB76u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB76u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB41u; } return 1;
case 0xBB41u: /* LDA ABX BD A0 06 */
    c->pc = 0xBB44u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB44u: /* CMP IMM C9 06 */
    c->pc = 0xBB46u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB46u: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB48u ^ 0xBB82u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB82u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB48u; } return 1;
case 0xBB48u: /* LDA IMM A9 04 */
    c->pc = 0xBB4Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB4Au: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB4Cu ^ 0xBB7Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB7Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB4Cu; } return 1;
case 0xBB4Cu: /* LDA IMM A9 77 */
    c->pc = 0xBB4Eu;
    v = 0x77u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB4Eu: /* STA ABX 9D 20 06 */
    c->pc = 0xBB51u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB51u: /* LDA IMM A9 01 */
    c->pc = 0xBB53u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB53u: /* STA ABX 9D 00 06 */
    c->pc = 0xBB56u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB56u: /* LDA IMM A9 6E */
    c->pc = 0xBB58u;
    v = 0x6Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB58u: /* LDX IMM A2 01 */
    c->pc = 0xBB5Au;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB5Au: /* JSR ABS 20 59 F1 */
    push(c, 0xBBu); push(c, 0x5Cu); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xBB5Du: /* BCS REL B0 17 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBB5Fu ^ 0xBB76u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB76u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB5Fu; } return 1;
case 0xBB5Fu: /* TXA IMP 8A */
    c->pc = 0xBB60u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB60u: /* PHA IMP 48 */
    c->pc = 0xBB61u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB61u: /* TYA IMP 98 */
    c->pc = 0xBB62u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB62u: /* ADC IMM 69 10 */
    c->pc = 0xBB64u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB64u: /* TAX IMP AA */
    c->pc = 0xBB65u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB65u: /* STX ZP 86 2B */
    c->pc = 0xBB67u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBB67u: /* LDA IMM A9 08 */
    c->pc = 0xBB69u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB69u: /* STA ZP 85 09 */
    c->pc = 0xBB6Bu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB6Bu: /* LDA IMM A9 00 */
    c->pc = 0xBB6Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB6Du: /* STA ZP 85 08 */
    c->pc = 0xBB6Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB6Fu: /* JSR ABS 20 97 F1 */
    push(c, 0xBBu); push(c, 0x71u); c->pc = 0xF197u; c->cpu_cycles += 6u; return 1;
case 0xBB72u: /* PLA IMP 68 */
    c->pc = 0xBB73u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB73u: /* TAX IMP AA */
    c->pc = 0xBB74u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB74u: /* STX ZP 86 2B */
    c->pc = 0xBB76u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBB76u: /* LDA ABX BD A0 06 */
    c->pc = 0xBB79u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB79u: /* CMP IMM C9 04 */
    c->pc = 0xBB7Bu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB7Bu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB7Du ^ 0xBB82u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB82u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB7Du; } return 1;
case 0xBB7Du: /* LDA IMM A9 00 */
    c->pc = 0xBB7Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB7Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xBB82u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB82u: /* JSR ABS 20 B3 EF */
    push(c, 0xBBu); push(c, 0x84u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xBB85u: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBB87u ^ 0xBB97u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB97u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB87u; } return 1;
case 0xBB87u: /* SEC IMP 38 */
    c->pc = 0xBB88u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBB88u: /* LDA ABS AD C1 06 */
    c->pc = 0xBB8Bu;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB8Bu: /* SBC IMM E9 06 */
    c->pc = 0xBB8Du;
    v = 0x06u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB8Du: /* STA ABS 8D C1 06 */
    c->pc = 0xBB90u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB90u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBB92u ^ 0xBB97u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB97u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB92u; } return 1;
case 0xBB92u: /* LDA IMM A9 00 */
    c->pc = 0xBB94u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB94u: /* STA ABS 8D C1 06 */
    c->pc = 0xBB97u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB97u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBB98u: /* LDA IMM A9 00 */
    c->pc = 0xBB9Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB9Au: /* STA ABX 9D 80 06 */
    c->pc = 0xBB9Du;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB9Du: /* LDY ABX BC A0 06 */
    c->pc = 0xBBA0u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBA0u: /* CLC IMP 18 */
    c->pc = 0xBBA1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBBA1u: /* LDA ABX BD 60 04 */
    c->pc = 0xBBA4u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBA4u: /* ADC ABY 79 AB BB */
    c->pc = 0xBBA7u;
    ea = (uint16_t)(0xBBABu + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xBBABu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBA7u: /* STA ABX 9D 60 04 */
    c->pc = 0xBBAAu;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBBAAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBBADu: /* JSR ABS 20 EE EF */
    push(c, 0xBBu); push(c, 0xAFu); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xBBB0u: /* LDA ABX BD E0 04 */
    c->pc = 0xBBB3u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBB3u: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBBB5u ^ 0xBBD7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBD7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBB5u; } return 1;
case 0xBBB5u: /* LDA ZP A5 00 */
    c->pc = 0xBBB7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBB7u: /* CMP IMM C9 38 */
    c->pc = 0xBBB9u;
    v = 0x38u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBBB9u: /* BCS REL B0 18 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBBBBu ^ 0xBBD3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBD3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBBBu; } return 1;
case 0xBBBBu: /* LDA ZP A5 4A */
    c->pc = 0xBBBDu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBBDu: /* STA ZP 85 01 */
    c->pc = 0xBBBFu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBBFu: /* LDA IMM A9 03 */
    c->pc = 0xBBC1u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBC1u: /* STA ZP 85 02 */
    c->pc = 0xBBC3u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBC3u: /* JSR ABS 20 4E C8 */
    push(c, 0xBBu); push(c, 0xC5u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0xBBC6u: /* LDY ZP A4 04 */
    c->pc = 0xBBC8u;
    ea = 0x04u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xBBC8u: /* LDX ZP A6 2B */
    c->pc = 0xBBCAu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBBCAu: /* LDA ABY B9 2D BC */
    c->pc = 0xBBCDu;
    ea = (uint16_t)(0xBC2Du + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBC2Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBCDu: /* STA ABX 9D 10 01 */
    c->pc = 0xBBD0u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBBD0u: /* INC ABX FE E0 04 */
    c->pc = 0xBBD3u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBBD3u: /* JSR ABS 20 B3 EF */
    push(c, 0xBBu); push(c, 0xD5u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xBBD6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBBD7u: /* CMP IMM C9 02 */
    c->pc = 0xBBD9u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBBD9u: /* BCS REL B0 22 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBBDBu ^ 0xBBFDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBFDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBDBu; } return 1;
case 0xBBDBu: /* LDA ZP A5 00 */
    c->pc = 0xBBDDu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBDDu: /* CMP IMM C9 38 */
    c->pc = 0xBBDFu;
    v = 0x38u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBBDFu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBBE1u ^ 0xBBE6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBE6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBE1u; } return 1;
case 0xBBE1u: /* DEC ABX DE E0 04 */
    c->pc = 0xBBE4u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBBE4u: /* BEQ REL F0 ED */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBBE6u ^ 0xBBD3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBD3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBE6u; } return 1;
case 0xBBE6u: /* DEC ABX DE 10 01 */
    c->pc = 0xBBE9u;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBBE9u: /* BNE REL D0 E8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBBEBu ^ 0xBBD3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBD3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBEBu; } return 1;
case 0xBBEBu: /* LDA IMM A9 02 */
    c->pc = 0xBBEDu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBEDu: /* STA ABX 9D 40 06 */
    c->pc = 0xBBF0u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBBF0u: /* LDA IMM A9 00 */
    c->pc = 0xBBF2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBF2u: /* STA ABX 9D 60 06 */
    c->pc = 0xBBF5u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBBF5u: /* LDA IMM A9 83 */
    c->pc = 0xBBF7u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBF7u: /* STA ABX 9D 20 04 */
    c->pc = 0xBBFAu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBBFAu: /* INC ABX FE E0 04 */
    c->pc = 0xBBFDu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBBFDu: /* LDA ABX BD 40 06 */
    c->pc = 0xBC00u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC00u: /* BPL REL 10 13 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBC02u ^ 0xBC15u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC15u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC02u; } return 1;
case 0xBC02u: /* LDA ABX BD A0 04 */
    c->pc = 0xBC05u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC05u: /* CMP IMM C9 E0 */
    c->pc = 0xBC07u;
    v = 0xE0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC07u: /* BCC REL 90 20 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xBC09u ^ 0xBC29u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC29u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC09u; } return 1;
case 0xBC09u: /* LDA IMM A9 00 */
    c->pc = 0xBC0Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC0Bu: /* STA ABX 9D E0 04 */
    c->pc = 0xBC0Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC0Eu: /* LDA IMM A9 A0 */
    c->pc = 0xBC10u;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC10u: /* STA ABX 9D 20 04 */
    c->pc = 0xBC13u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC13u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC15u ^ 0xBC29u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC29u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC15u; } return 1;
case 0xBC15u: /* LDA ABX BD A0 04 */
    c->pc = 0xBC18u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC18u: /* CMP IMM C9 80 */
    c->pc = 0xBC1Au;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC1Au: /* BCS REL B0 0D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBC1Cu ^ 0xBC29u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC29u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC1Cu; } return 1;
case 0xBC1Cu: /* LDA IMM A9 FF */
    c->pc = 0xBC1Eu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC1Eu: /* STA ABX 9D 60 06 */
    c->pc = 0xBC21u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC21u: /* STA ABX 9D 40 06 */
    c->pc = 0xBC24u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC24u: /* LDA IMM A9 87 */
    c->pc = 0xBC26u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC26u: /* STA ABX 9D 20 04 */
    c->pc = 0xBC29u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC29u: /* JSR ABS 20 BA EE */
    push(c, 0xBCu); push(c, 0x2Bu); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xBC2Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBC30u: /* LDA ABX BD E0 04 */
    c->pc = 0xBC33u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC33u: /* CMP IMM C9 3E */
    c->pc = 0xBC35u;
    v = 0x3Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC35u: /* BNE REL D0 2F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC37u ^ 0xBC66u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC66u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC37u; } return 1;
case 0xBC37u: /* LDA ABX BD A0 06 */
    c->pc = 0xBC3Au;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC3Au: /* CMP IMM C9 05 */
    c->pc = 0xBC3Cu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC3Cu: /* BNE REL D0 37 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC3Eu ^ 0xBC75u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC75u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC3Eu; } return 1;
case 0xBC3Eu: /* LDA ABX BD 80 06 */
    c->pc = 0xBC41u;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC41u: /* BNE REL D0 32 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC43u ^ 0xBC75u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC75u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC43u; } return 1;
case 0xBC43u: /* LDA IMM A9 74 */
    c->pc = 0xBC45u;
    v = 0x74u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC45u: /* JSR ABS 20 59 F1 */
    push(c, 0xBCu); push(c, 0x47u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xBC48u: /* BCS REL B0 17 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBC4Au ^ 0xBC61u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC61u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC4Au; } return 1;
case 0xBC4Au: /* LDA ABX BD 00 04 */
    c->pc = 0xBC4Du;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC4Du: /* STA ABY 99 F0 04 */
    c->pc = 0xBC50u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC50u: /* CLC IMP 18 */
    c->pc = 0xBC51u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBC51u: /* LDA ABY B9 B0 04 */
    c->pc = 0xBC54u;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC54u: /* ADC IMM 69 04 */
    c->pc = 0xBC56u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC56u: /* STA ABY 99 B0 04 */
    c->pc = 0xBC59u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC59u: /* LDA IMM A9 FF */
    c->pc = 0xBC5Bu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC5Bu: /* STA ABY 99 50 06 */
    c->pc = 0xBC5Eu;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC5Eu: /* STA ABY 99 70 06 */
    c->pc = 0xBC61u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC61u: /* LDA IMM A9 00 */
    c->pc = 0xBC63u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC63u: /* STA ABX 9D E0 04 */
    c->pc = 0xBC66u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC66u: /* INC ABX FE E0 04 */
    c->pc = 0xBC69u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBC69u: /* LDA ABX BD A0 06 */
    c->pc = 0xBC6Cu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC6Cu: /* CMP IMM C9 02 */
    c->pc = 0xBC6Eu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC6Eu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC70u ^ 0xBC75u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC75u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC70u; } return 1;
case 0xBC70u: /* LDA IMM A9 00 */
    c->pc = 0xBC72u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC72u: /* STA ABX 9D A0 06 */
    c->pc = 0xBC75u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC75u: /* JSR ABS 20 B3 EF */
    push(c, 0xBCu); push(c, 0x77u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xBC78u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBC79u: /* LDA ABX BD A0 06 */
    c->pc = 0xBC7Cu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC7Cu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBC7Eu ^ 0xBC82u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC82u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC7Eu; } return 1;
case 0xBC7Eu: /* JSR ABS 20 B3 EF */
    push(c, 0xBCu); push(c, 0x80u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xBC81u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBC82u: /* LDA IMM A9 00 */
    c->pc = 0xBC84u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC84u: /* STA ABX 9D 80 06 */
    c->pc = 0xBC87u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC87u: /* LDA IMM A9 03 */
    c->pc = 0xBC89u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC89u: /* STA ZP 85 01 */
    c->pc = 0xBC8Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC8Bu: /* LDA IMM A9 04 */
    c->pc = 0xBC8Du;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC8Du: /* STA ZP 85 02 */
    c->pc = 0xBC8Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC8Fu: /* JSR ABS 20 2C F0 */
    push(c, 0xBCu); push(c, 0x91u); c->pc = 0xF02Cu; c->cpu_cycles += 6u; return 1;
case 0xBC92u: /* LDA ZP A5 00 */
    c->pc = 0xBC94u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC94u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBC96u ^ 0xBCA3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCA3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC96u; } return 1;
case 0xBC96u: /* LDY ABX BC E0 04 */
    c->pc = 0xBC99u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC99u: /* LDA ABY B9 35 BC */
    c->pc = 0xBC9Cu;
    ea = (uint16_t)(0xBC35u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBC35u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC9Cu: /* JSR ABS 20 51 C0 */
    push(c, 0xBCu); push(c, 0x9Eu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xBC9Fu: /* INC ABX FE A0 06 */
    c->pc = 0xBCA2u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBCA2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBCA3u: /* JSR ABS 20 BA EE */
    push(c, 0xBCu); push(c, 0xA5u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xBCA6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBCA9u: /* LDA IMM A9 07 */
    c->pc = 0xBCABu;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCABu: /* STA ZP 85 01 */
    c->pc = 0xBCADu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCADu: /* LDY IMM A0 08 */
    c->pc = 0xBCAFu;
    v = 0x08u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBCAFu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBCB1u ^ 0xBCB7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCB7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCB1u; } return 1;
case 0xBCB1u: /* LDA IMM A9 03 */
    c->pc = 0xBCB3u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCB3u: /* STA ZP 85 01 */
    c->pc = 0xBCB5u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCB5u: /* LDY IMM A0 04 */
    c->pc = 0xBCB7u;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBCB7u: /* LDA ABX BD 20 04 */
    c->pc = 0xBCBAu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBCBAu: /* CMP IMM C9 81 */
    c->pc = 0xBCBCu;
    v = 0x81u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBCBCu: /* BEQ REL F0 34 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBCBEu ^ 0xBCF2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCF2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCBEu; } return 1;
case 0xBCBEu: /* LDA ZP A5 01 */
    c->pc = 0xBCC0u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCC0u: /* PHA IMP 48 */
    c->pc = 0xBCC1u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCC1u: /* TYA IMP 98 */
    c->pc = 0xBCC2u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCC2u: /* PHA IMP 48 */
    c->pc = 0xBCC3u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCC3u: /* JSR ABS 20 BA EE */
    push(c, 0xBCu); push(c, 0xC5u); c->pc = 0xEEBAu; c->cpu_cycles += 6u; return 1;
case 0xBCC6u: /* PLA IMP 68 */
    c->pc = 0xBCC7u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBCC7u: /* STA ZP 85 02 */
    c->pc = 0xBCC9u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCC9u: /* PLA IMP 68 */
    c->pc = 0xBCCAu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBCCAu: /* STA ZP 85 01 */
    c->pc = 0xBCCCu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCCCu: /* LDA ABX BD 20 04 */
    c->pc = 0xBCCFu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBCCFu: /* BPL REL 10 20 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBCD1u ^ 0xBCF1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCF1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCD1u; } return 1;
case 0xBCD1u: /* LDA ABX BD 40 06 */
    c->pc = 0xBCD4u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBCD4u: /* PHP IMP 08 */
    c->pc = 0xBCD5u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xBCD5u: /* JSR ABS 20 CF F0 */
    push(c, 0xBCu); push(c, 0xD7u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xBCD8u: /* PLP IMP 28 */
    c->pc = 0xBCD9u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xBCD9u: /* BPL REL 10 16 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBCDBu ^ 0xBCF1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCF1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCDBu; } return 1;
case 0xBCDBu: /* LDA ZP A5 00 */
    c->pc = 0xBCDDu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCDDu: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBCDFu ^ 0xBCF1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCF1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCDFu; } return 1;
case 0xBCDFu: /* LDA IMM A9 FA */
    c->pc = 0xBCE1u;
    v = 0xFAu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCE1u: /* STA ABX 9D 10 01 */
    c->pc = 0xBCE4u;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBCE4u: /* LDA IMM A9 00 */
    c->pc = 0xBCE6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCE6u: /* STA ABX 9D 40 06 */
    c->pc = 0xBCE9u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBCE9u: /* STA ABX 9D 60 06 */
    c->pc = 0xBCECu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBCECu: /* LDA IMM A9 81 */
    c->pc = 0xBCEEu;
    v = 0x81u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCEEu: /* STA ABX 9D 20 04 */
    c->pc = 0xBCF1u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBCF1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBCF2u: /* LDA ABX BD E0 04 */
    c->pc = 0xBCF5u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBCF5u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBCF7u ^ 0xBD04u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD04u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCF7u; } return 1;
case 0xBCF7u: /* DEC ABX DE 10 01 */
    c->pc = 0xBCFAu;
    ea = (uint16_t)(0x0110u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBCFAu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBCFCu ^ 0xBD00u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD00u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBCFCu; } return 1;
case 0xBCFCu: /* LSR ABX 5E 20 04 */
    c->pc = 0xBCFFu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xBCFFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBD00u: /* JSR ABS 20 B3 EF */
    push(c, 0xBDu); push(c, 0x02u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xBD03u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBD04u: /* JSR ABS 20 AF EF */
    push(c, 0xBDu); push(c, 0x06u); c->pc = 0xEFAFu; c->cpu_cycles += 6u; return 1;
case 0xBD07u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBD08u: /* LDY IMM A0 25 */
    c->pc = 0xBD0Au;
    v = 0x25u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBD0Au: /* LDA ZP A5 1C */
    c->pc = 0xBD0Cu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD0Cu: /* AND IMM 29 08 */
    c->pc = 0xBD0Eu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD0Eu: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBD10u ^ 0xBD12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD12u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD10u; } return 1;
case 0xBD10u: /* LDY IMM A0 0F */
    c->pc = 0xBD12u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBD12u: /* STY ABS 8C 71 03 */
    c->pc = 0xBD15u;
    ea = 0x0371u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xBD15u: /* JSR ABS 20 B3 EF */
    push(c, 0xBDu); push(c, 0x17u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xBD18u: /* LDA ZP A5 01 */
    c->pc = 0xBD1Au;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD1Au: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBD1Cu ^ 0xBD23u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD23u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD1Cu; } return 1;
case 0xBD1Cu: /* TXA IMP 8A */
    c->pc = 0xBD1Du;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD1Du: /* AND IMM 29 0F */
    c->pc = 0xBD1Fu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD1Fu: /* STA ZP 85 BA */
    c->pc = 0xBD21u;
    ea = 0xBAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD21u: /* INC ZP E6 BA */
    c->pc = 0xBD23u;
    ea = 0xBAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBD23u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
    }
    return 0;
}
