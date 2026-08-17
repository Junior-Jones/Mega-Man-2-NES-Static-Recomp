/* Generated from the accepted v0.06 identity ledger. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_0c(MM2DirectCore *c, uint16_t pc) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    switch (pc) {
case 0x8000u: /* JMP ABS 4C 35 82 */
    c->pc = 0x8235u; c->cpu_cycles += 3u; return 1;
case 0x8003u: /* CMP IMM C9 FC */
    c->pc = 0x8005u;
    v = 0xFCu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8005u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8007u ^ 0x800Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x800Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8007u; } return 1;
case 0x8007u: /* JMP ABS 4C 29 81 */
    c->pc = 0x8129u; c->cpu_cycles += 3u; return 1;
case 0x800Au: /* CMP IMM C9 FD */
    c->pc = 0x800Cu;
    v = 0xFDu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x800Cu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x800Eu ^ 0x8011u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8011u; }
    else { c->cpu_cycles += 2u; c->pc = 0x800Eu; } return 1;
case 0x800Eu: /* JMP ABS 4C 2D 81 */
    c->pc = 0x812Du; c->cpu_cycles += 3u; return 1;
case 0x8011u: /* CMP IMM C9 FE */
    c->pc = 0x8013u;
    v = 0xFEu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8013u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8015u ^ 0x8020u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8020u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8015u; } return 1;
case 0x8015u: /* LDA IMM A9 01 */
    c->pc = 0x8017u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8017u: /* STA ZP 85 E4 */
    c->pc = 0x8019u;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8019u: /* LDA IMM A9 00 */
    c->pc = 0x801Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x801Bu: /* STA ZP 85 EC */
    c->pc = 0x801Du;
    ea = 0xECu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x801Du: /* JMP ABS 4C 3A 81 */
    c->pc = 0x813Au; c->cpu_cycles += 3u; return 1;
case 0x8020u: /* CMP IMM C9 FF */
    c->pc = 0x8022u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8022u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8024u ^ 0x802Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x802Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8024u; } return 1;
case 0x8024u: /* LDA IMM A9 01 */
    c->pc = 0x8026u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8026u: /* STA ZP 85 E4 */
    c->pc = 0x8028u;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8028u: /* LDA IMM A9 00 */
    c->pc = 0x802Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x802Au: /* STA ZP 85 EC */
    c->pc = 0x802Cu;
    ea = 0xECu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x802Cu: /* JMP ABS 4C 8C 81 */
    c->pc = 0x818Cu; c->cpu_cycles += 3u; return 1;
case 0x802Fu: /* ASL IMP 0A */
    c->pc = 0x8030u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8030u: /* TAX IMP AA */
    c->pc = 0x8031u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8031u: /* LDA ABX BD 50 8A */
    c->pc = 0x8034u;
    ea = (uint16_t)(0x8A50u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A50u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8034u: /* STA ZP 85 E2 */
    c->pc = 0x8036u;
    ea = 0xE2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8036u: /* LDA ABX BD 51 8A */
    c->pc = 0x8039u;
    ea = (uint16_t)(0x8A51u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8A51u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8039u: /* STA ZP 85 E3 */
    c->pc = 0x803Bu;
    ea = 0xE3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x803Bu: /* LDY IMM A0 00 */
    c->pc = 0x803Du;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x803Du: /* LDA IZY B1 E2 */
    c->pc = 0x803Fu;
    ea = (uint16_t)(read16_zp(c, 0xE2u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xE2u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x803Fu: /* TAX IMP AA */
    c->pc = 0x8040u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8040u: /* AND IMM 29 0F */
    c->pc = 0x8042u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8042u: /* BEQ REL F0 77 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8044u ^ 0x80BBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80BBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8044u; } return 1;
case 0x8044u: /* LDA ZP A5 E0 */
    c->pc = 0x8046u;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8046u: /* AND IMM 29 0F */
    c->pc = 0x8048u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8048u: /* STA ZP 85 E5 */
    c->pc = 0x804Au;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x804Au: /* CPX ZP E4 E5 */
    c->pc = 0x804Cu;
    ea = 0xE5u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x804Cu: /* BCS REL B0 01 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x804Eu ^ 0x804Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x804Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x804Eu; } return 1;
case 0x804Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x804Fu: /* STX ZP 86 E5 */
    c->pc = 0x8051u;
    ea = 0xE5u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8051u: /* LDA ZP A5 E0 */
    c->pc = 0x8053u;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8053u: /* AND IMM 29 F0 */
    c->pc = 0x8055u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8055u: /* ORA ZP 05 E5 */
    c->pc = 0x8057u;
    ea = 0xE5u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8057u: /* STA ZP 85 E0 */
    c->pc = 0x8059u;
    ea = 0xE0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8059u: /* LDA IMM A9 01 */
    c->pc = 0x805Bu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x805Bu: /* STA ZP 85 E4 */
    c->pc = 0x805Du;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x805Du: /* LDA IMM A9 00 */
    c->pc = 0x805Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x805Fu: /* STA ZP 85 EC */
    c->pc = 0x8061u;
    ea = 0xECu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8061u: /* LDA IMM A9 00 */
    c->pc = 0x8063u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8063u: /* STA ZP 85 E7 */
    c->pc = 0x8065u;
    ea = 0xE7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8065u: /* STA ZP 85 E8 */
    c->pc = 0x8067u;
    ea = 0xE8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8067u: /* LDA IMM A9 04 */
    c->pc = 0x8069u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8069u: /* STA ZP 85 E5 */
    c->pc = 0x806Bu;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x806Bu: /* LDA IMM A9 01 */
    c->pc = 0x806Du;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x806Du: /* CLC IMP 18 */
    c->pc = 0x806Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x806Eu: /* ADC ZP 65 E2 */
    c->pc = 0x8070u;
    ea = 0xE2u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8070u: /* STA ZP 85 E2 */
    c->pc = 0x8072u;
    ea = 0xE2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8072u: /* LDA IMM A9 00 */
    c->pc = 0x8074u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8074u: /* ADC ZP 65 E3 */
    c->pc = 0x8076u;
    ea = 0xE3u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8076u: /* STA ZP 85 E3 */
    c->pc = 0x8078u;
    ea = 0xE3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8078u: /* LDX ZP A6 EC */
    c->pc = 0x807Au;
    ea = 0xECu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x807Au: /* LDY IMM A0 00 */
    c->pc = 0x807Cu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x807Cu: /* LDA IZY B1 E2 */
    c->pc = 0x807Eu;
    ea = (uint16_t)(read16_zp(c, 0xE2u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xE2u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x807Eu: /* STA ABX 9D 00 05 */
    c->pc = 0x8081u;
    ea = (uint16_t)(0x0500u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8081u: /* INX IMP E8 */
    c->pc = 0x8082u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8082u: /* INY IMP C8 */
    c->pc = 0x8083u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8083u: /* CPY IMM C0 02 */
    c->pc = 0x8085u;
    v = 0x02u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8085u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8087u ^ 0x807Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x807Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8087u; } return 1;
case 0x8087u: /* LDY IMM A0 0E */
    c->pc = 0x8089u;
    v = 0x0Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8089u: /* LDA IMM A9 00 */
    c->pc = 0x808Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x808Bu: /* STA ABX 9D 00 05 */
    c->pc = 0x808Eu;
    ea = (uint16_t)(0x0500u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x808Eu: /* INX IMP E8 */
    c->pc = 0x808Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x808Fu: /* DEY IMP 88 */
    c->pc = 0x8090u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8090u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8092u ^ 0x808Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x808Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8092u; } return 1;
case 0x8092u: /* LDA ZP A5 E1 */
    c->pc = 0x8094u;
    ea = 0xE1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8094u: /* LSR IMP 4A */
    c->pc = 0x8095u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8095u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8097u ^ 0x809Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x809Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8097u; } return 1;
case 0x8097u: /* JSR ABS 20 B2 81 */
    push(c, 0x80u); push(c, 0x99u); c->pc = 0x81B2u; c->cpu_cycles += 6u; return 1;
case 0x809Au: /* JSR ABS 20 07 82 */
    push(c, 0x80u); push(c, 0x9Cu); c->pc = 0x8207u; c->cpu_cycles += 6u; return 1;
case 0x809Du: /* DEC ZP C6 E5 */
    c->pc = 0x809Fu;
    ea = 0xE5u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x809Fu: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x80A1u ^ 0x80A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80A1u; } return 1;
case 0x80A1u: /* LDA IMM A9 02 */
    c->pc = 0x80A3u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80A3u: /* JMP ABS 4C 6D 80 */
    c->pc = 0x806Du; c->cpu_cycles += 3u; return 1;
case 0x80A6u: /* LDY IMM A0 02 */
    c->pc = 0x80A8u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x80A8u: /* LDA IZY B1 E2 */
    c->pc = 0x80AAu;
    ea = (uint16_t)(read16_zp(c, 0xE2u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xE2u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80AAu: /* STA ABS 8D 7C 05 */
    c->pc = 0x80ADu;
    ea = 0x057Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80ADu: /* INY IMP C8 */
    c->pc = 0x80AEu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x80AEu: /* LDA IZY B1 E2 */
    c->pc = 0x80B0u;
    ea = (uint16_t)(read16_zp(c, 0xE2u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xE2u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80B0u: /* STA ABS 8D 7D 05 */
    c->pc = 0x80B3u;
    ea = 0x057Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80B3u: /* JSR ABS 20 19 82 */
    push(c, 0x80u); push(c, 0xB5u); c->pc = 0x8219u; c->cpu_cycles += 6u; return 1;
case 0x80B6u: /* LDA IMM A9 00 */
    c->pc = 0x80B8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B8u: /* STA ZP 85 E4 */
    c->pc = 0x80BAu;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80BAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x80BBu: /* LDA ZP A5 E0 */
    c->pc = 0x80BDu;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80BDu: /* AND IMM 29 F0 */
    c->pc = 0x80BFu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80BFu: /* STA ZP 85 E5 */
    c->pc = 0x80C1u;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80C1u: /* CPX ZP E4 E5 */
    c->pc = 0x80C3u;
    ea = 0xE5u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x80C3u: /* BCS REL B0 01 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x80C5u ^ 0x80C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80C5u; } return 1;
case 0x80C5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x80C6u: /* STX ZP 86 E5 */
    c->pc = 0x80C8u;
    ea = 0xE5u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x80C8u: /* LDA ZP A5 E0 */
    c->pc = 0x80CAu;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80CAu: /* AND IMM 29 0F */
    c->pc = 0x80CCu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80CCu: /* ORA ZP 05 E5 */
    c->pc = 0x80CEu;
    ea = 0xE5u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80CEu: /* STA ZP 85 E0 */
    c->pc = 0x80D0u;
    ea = 0xE0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80D0u: /* LDA IMM A9 01 */
    c->pc = 0x80D2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80D2u: /* STA ZP 85 E4 */
    c->pc = 0x80D4u;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80D4u: /* LDA IMM A9 00 */
    c->pc = 0x80D6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80D6u: /* STA ZP 85 EC */
    c->pc = 0x80D8u;
    ea = 0xECu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80D8u: /* LDX IMM A2 00 */
    c->pc = 0x80DAu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x80DAu: /* LDA IMM A9 02 */
    c->pc = 0x80DCu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80DCu: /* CLC IMP 18 */
    c->pc = 0x80DDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x80DDu: /* ADC ZP 65 E2 */
    c->pc = 0x80DFu;
    ea = 0xE2u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x80DFu: /* STA ZP 85 F0 */
    c->pc = 0x80E1u;
    ea = 0xF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E1u: /* TXA IMP 8A */
    c->pc = 0x80E2u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80E2u: /* ADC ZP 65 E3 */
    c->pc = 0x80E4u;
    ea = 0xE3u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x80E4u: /* STA ZP 85 F1 */
    c->pc = 0x80E6u;
    ea = 0xF1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E6u: /* STX ZP 86 F2 */
    c->pc = 0x80E8u;
    ea = 0xF2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x80E8u: /* STX ZP 86 F3 */
    c->pc = 0x80EAu;
    ea = 0xF3u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x80EAu: /* LDY IMM A0 01 */
    c->pc = 0x80ECu;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x80ECu: /* LDA IZY B1 E2 */
    c->pc = 0x80EEu;
    ea = (uint16_t)(read16_zp(c, 0xE2u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xE2u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80EEu: /* AND IMM 29 0F */
    c->pc = 0x80F0u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80F0u: /* TAX IMP AA */
    c->pc = 0x80F1u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x80F1u: /* ORA ZP 05 E1 */
    c->pc = 0x80F3u;
    ea = 0xE1u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80F3u: /* PHA IMP 48 */
    c->pc = 0x80F4u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80F4u: /* STX ZP 86 E1 */
    c->pc = 0x80F6u;
    ea = 0xE1u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x80F6u: /* LDA IMM A9 04 */
    c->pc = 0x80F8u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80F8u: /* STA ZP 85 E5 */
    c->pc = 0x80FAu;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80FAu: /* LDA IMM A9 02 */
    c->pc = 0x80FCu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80FCu: /* STA ZP 85 E6 */
    c->pc = 0x80FEu;
    ea = 0xE6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80FEu: /* PLA IMP 68 */
    c->pc = 0x80FFu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80FFu: /* LSR IMP 4A */
    c->pc = 0x8100u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8100u: /* PHA IMP 48 */
    c->pc = 0x8101u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8101u: /* BCC REL 90 0B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8103u ^ 0x810Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x810Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8103u; } return 1;
case 0x8103u: /* JSR ABS 20 B2 81 */
    push(c, 0x81u); push(c, 0x05u); c->pc = 0x81B2u; c->cpu_cycles += 6u; return 1;
case 0x8106u: /* LDA ZP A5 E1 */
    c->pc = 0x8108u;
    ea = 0xE1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8108u: /* LSR IMP 4A */
    c->pc = 0x8109u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8109u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x810Bu ^ 0x810Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x810Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x810Bu; } return 1;
case 0x810Bu: /* JSR ABS 20 6C 81 */
    push(c, 0x81u); push(c, 0x0Du); c->pc = 0x816Cu; c->cpu_cycles += 6u; return 1;
case 0x810Eu: /* JSR ABS 20 07 82 */
    push(c, 0x81u); push(c, 0x10u); c->pc = 0x8207u; c->cpu_cycles += 6u; return 1;
case 0x8111u: /* LDA IMM A9 04 */
    c->pc = 0x8113u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8113u: /* CLC IMP 18 */
    c->pc = 0x8114u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8114u: /* ADC ZP 65 E6 */
    c->pc = 0x8116u;
    ea = 0xE6u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8116u: /* STA ZP 85 E6 */
    c->pc = 0x8118u;
    ea = 0xE6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8118u: /* DEC ZP C6 E5 */
    c->pc = 0x811Au;
    ea = 0xE5u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x811Au: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x811Cu ^ 0x80FEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80FEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x811Cu; } return 1;
case 0x811Cu: /* JSR ABS 20 19 82 */
    push(c, 0x81u); push(c, 0x1Eu); c->pc = 0x8219u; c->cpu_cycles += 6u; return 1;
case 0x811Fu: /* LDA ZP A5 E1 */
    c->pc = 0x8121u;
    ea = 0xE1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8121u: /* STA ZP 85 EF */
    c->pc = 0x8123u;
    ea = 0xEFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8123u: /* PLA IMP 68 */
    c->pc = 0x8124u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8124u: /* LDA IMM A9 00 */
    c->pc = 0x8126u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8126u: /* STA ZP 85 E4 */
    c->pc = 0x8128u;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8128u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8129u: /* INY IMP C8 */
    c->pc = 0x812Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x812Au: /* STY ZP 84 E7 */
    c->pc = 0x812Cu;
    ea = 0xE7u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x812Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x812Du: /* STY ZP 84 E8 */
    c->pc = 0x812Fu;
    ea = 0xE8u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x812Fu: /* LDA IMM A9 01 */
    c->pc = 0x8131u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8131u: /* STA ZP 85 E9 */
    c->pc = 0x8133u;
    ea = 0xE9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8133u: /* LDA ZP A5 EA */
    c->pc = 0x8135u;
    ea = 0xEAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8135u: /* AND IMM 29 01 */
    c->pc = 0x8137u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8137u: /* STA ZP 85 EA */
    c->pc = 0x8139u;
    ea = 0xEAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8139u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x813Au: /* LDA ZP A5 E0 */
    c->pc = 0x813Cu;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x813Cu: /* AND IMM 29 0F */
    c->pc = 0x813Eu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x813Eu: /* STA ZP 85 E0 */
    c->pc = 0x8140u;
    ea = 0xE0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8140u: /* LDA IMM A9 04 */
    c->pc = 0x8142u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8142u: /* STA ZP 85 E5 */
    c->pc = 0x8144u;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8144u: /* LDA IMM A9 02 */
    c->pc = 0x8146u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8146u: /* STA ZP 85 E6 */
    c->pc = 0x8148u;
    ea = 0xE6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8148u: /* LDA ZP A5 E1 */
    c->pc = 0x814Au;
    ea = 0xE1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x814Au: /* LSR IMP 4A */
    c->pc = 0x814Bu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x814Bu: /* BCC REL 90 06 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x814Du ^ 0x8153u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8153u; }
    else { c->cpu_cycles += 2u; c->pc = 0x814Du; } return 1;
case 0x814Du: /* JSR ABS 20 B2 81 */
    push(c, 0x81u); push(c, 0x4Fu); c->pc = 0x81B2u; c->cpu_cycles += 6u; return 1;
case 0x8150u: /* JSR ABS 20 6C 81 */
    push(c, 0x81u); push(c, 0x52u); c->pc = 0x816Cu; c->cpu_cycles += 6u; return 1;
case 0x8153u: /* JSR ABS 20 07 82 */
    push(c, 0x81u); push(c, 0x55u); c->pc = 0x8207u; c->cpu_cycles += 6u; return 1;
case 0x8156u: /* LDA IMM A9 04 */
    c->pc = 0x8158u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8158u: /* CLC IMP 18 */
    c->pc = 0x8159u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8159u: /* ADC ZP 65 E6 */
    c->pc = 0x815Bu;
    ea = 0xE6u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x815Bu: /* STA ZP 85 E6 */
    c->pc = 0x815Du;
    ea = 0xE6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x815Du: /* DEC ZP C6 E5 */
    c->pc = 0x815Fu;
    ea = 0xE5u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x815Fu: /* BNE REL D0 E7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8161u ^ 0x8148u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8148u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8161u; } return 1;
case 0x8161u: /* LDA IMM A9 00 */
    c->pc = 0x8163u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8163u: /* STA ZP 85 E1 */
    c->pc = 0x8165u;
    ea = 0xE1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8165u: /* STA ZP 85 EF */
    c->pc = 0x8167u;
    ea = 0xEFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8167u: /* LDA IMM A9 00 */
    c->pc = 0x8169u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8169u: /* STA ZP 85 E4 */
    c->pc = 0x816Bu;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x816Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x816Cu: /* LDA ZP A5 EC */
    c->pc = 0x816Eu;
    ea = 0xECu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x816Eu: /* CLC IMP 18 */
    c->pc = 0x816Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x816Fu: /* ADC IMM 69 0A */
    c->pc = 0x8171u;
    v = 0x0Au;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8171u: /* TAX IMP AA */
    c->pc = 0x8172u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8172u: /* LDA ABX BD 00 05 */
    c->pc = 0x8175u;
    ea = (uint16_t)(0x0500u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0500u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8175u: /* ORA ABX 1D 01 05 */
    c->pc = 0x8178u;
    ea = (uint16_t)(0x0501u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0501u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8178u: /* BNE REL D0 4A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x817Au ^ 0x81C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x817Au; } return 1;
case 0x817Au: /* LDY ZP A4 E5 */
    c->pc = 0x817Cu;
    ea = 0xE5u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x817Cu: /* LDX ZP A6 E6 */
    c->pc = 0x817Eu;
    ea = 0xE6u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x817Eu: /* JSR ABS 20 22 82 */
    push(c, 0x81u); push(c, 0x80u); c->pc = 0x8222u; c->cpu_cycles += 6u; return 1;
case 0x8181u: /* LDX ZP A6 EC */
    c->pc = 0x8183u;
    ea = 0xECu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8183u: /* LDA ABX BD 00 05 */
    c->pc = 0x8186u;
    ea = (uint16_t)(0x0500u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0500u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8186u: /* ORA ABX 1D 01 05 */
    c->pc = 0x8189u;
    ea = (uint16_t)(0x0501u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0501u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8189u: /* BNE REL D0 39 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x818Bu ^ 0x81C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x818Bu; } return 1;
case 0x818Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x818Cu: /* LDA ZP A5 E0 */
    c->pc = 0x818Eu;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x818Eu: /* AND IMM 29 F0 */
    c->pc = 0x8190u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8190u: /* STA ZP 85 E0 */
    c->pc = 0x8192u;
    ea = 0xE0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8192u: /* LDA IMM A9 00 */
    c->pc = 0x8194u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8194u: /* STA ZP 85 E7 */
    c->pc = 0x8196u;
    ea = 0xE7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8196u: /* STA ZP 85 E8 */
    c->pc = 0x8198u;
    ea = 0xE8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8198u: /* LDA IMM A9 04 */
    c->pc = 0x819Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x819Au: /* STA ZP 85 E5 */
    c->pc = 0x819Cu;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x819Cu: /* LDA IMM A9 00 */
    c->pc = 0x819Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x819Eu: /* LDX ZP A6 EC */
    c->pc = 0x81A0u;
    ea = 0xECu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x81A0u: /* STA ABX 9D 00 05 */
    c->pc = 0x81A3u;
    ea = (uint16_t)(0x0500u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81A3u: /* STA ABX 9D 01 05 */
    c->pc = 0x81A6u;
    ea = (uint16_t)(0x0501u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81A6u: /* JSR ABS 20 11 82 */
    push(c, 0x81u); push(c, 0xA8u); c->pc = 0x8211u; c->cpu_cycles += 6u; return 1;
case 0x81A9u: /* DEC ZP C6 E5 */
    c->pc = 0x81ABu;
    ea = 0xE5u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x81ABu: /* BNE REL D0 EF */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81ADu ^ 0x819Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x819Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81ADu; } return 1;
case 0x81ADu: /* LDA IMM A9 00 */
    c->pc = 0x81AFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81AFu: /* STA ZP 85 E4 */
    c->pc = 0x81B1u;
    ea = 0xE4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81B1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x81B2u: /* LDY IMM A0 0F */
    c->pc = 0x81B4u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x81B4u: /* LDA IMM A9 10 */
    c->pc = 0x81B6u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81B6u: /* CLC IMP 18 */
    c->pc = 0x81B7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x81B7u: /* ADC ZP 65 EC */
    c->pc = 0x81B9u;
    ea = 0xECu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x81B9u: /* TAX IMP AA */
    c->pc = 0x81BAu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81BAu: /* LDA IMM A9 00 */
    c->pc = 0x81BCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81BCu: /* STA ABX 9D 00 05 */
    c->pc = 0x81BFu;
    ea = (uint16_t)(0x0500u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81BFu: /* INX IMP E8 */
    c->pc = 0x81C0u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81C0u: /* DEY IMP 88 */
    c->pc = 0x81C1u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x81C1u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81C3u ^ 0x81BCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81BCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81C3u; } return 1;
case 0x81C3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x81C4u: /* LDA ZP A5 E5 */
    c->pc = 0x81C6u;
    ea = 0xE5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81C6u: /* PHA IMP 48 */
    c->pc = 0x81C7u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81C7u: /* LDA ZP A5 E6 */
    c->pc = 0x81C9u;
    ea = 0xE6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81C9u: /* PHA IMP 48 */
    c->pc = 0x81CAu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81CAu: /* LDA ABS AD 7C 05 */
    c->pc = 0x81CDu;
    ea = 0x057Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81CDu: /* STA ZP 85 E5 */
    c->pc = 0x81CFu;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81CFu: /* LDA ABS AD 7D 05 */
    c->pc = 0x81D2u;
    ea = 0x057Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81D2u: /* STA ZP 85 E6 */
    c->pc = 0x81D4u;
    ea = 0xE6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81D4u: /* LDA ZP A5 EC */
    c->pc = 0x81D6u;
    ea = 0xECu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81D6u: /* CLC IMP 18 */
    c->pc = 0x81D7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x81D7u: /* ADC IMM 69 06 */
    c->pc = 0x81D9u;
    v = 0x06u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x81D9u: /* TAX IMP AA */
    c->pc = 0x81DAu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81DAu: /* LDA ABX BD 00 05 */
    c->pc = 0x81DDu;
    ea = (uint16_t)(0x0500u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0500u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x81DDu: /* AND IMM 29 1F */
    c->pc = 0x81DFu;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81DFu: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x81E1u ^ 0x81EAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81EAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81E1u; } return 1;
case 0x81E1u: /* TAY IMP A8 */
    c->pc = 0x81E2u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x81E2u: /* LDA IMM A9 00 */
    c->pc = 0x81E4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81E4u: /* CLC IMP 18 */
    c->pc = 0x81E5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x81E5u: /* ADC IMM 69 04 */
    c->pc = 0x81E7u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x81E7u: /* DEY IMP 88 */
    c->pc = 0x81E8u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x81E8u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81EAu ^ 0x81E4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81E4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x81EAu; } return 1;
case 0x81EAu: /* TAY IMP A8 */
    c->pc = 0x81EBu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x81EBu: /* TXA IMP 8A */
    c->pc = 0x81ECu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81ECu: /* CLC IMP 18 */
    c->pc = 0x81EDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x81EDu: /* ADC IMM 69 0E */
    c->pc = 0x81EFu;
    v = 0x0Eu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x81EFu: /* TAX IMP AA */
    c->pc = 0x81F0u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81F0u: /* LDA IMM A9 04 */
    c->pc = 0x81F2u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81F2u: /* PHA IMP 48 */
    c->pc = 0x81F3u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81F3u: /* LDA IZY B1 E5 */
    c->pc = 0x81F5u;
    ea = (uint16_t)(read16_zp(c, 0xE5u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xE5u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x81F5u: /* STA ABX 9D 00 05 */
    c->pc = 0x81F8u;
    ea = (uint16_t)(0x0500u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81F8u: /* INY IMP C8 */
    c->pc = 0x81F9u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x81F9u: /* INX IMP E8 */
    c->pc = 0x81FAu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81FAu: /* PLA IMP 68 */
    c->pc = 0x81FBu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81FBu: /* SEC IMP 38 */
    c->pc = 0x81FCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x81FCu: /* SBC IMM E9 01 */
    c->pc = 0x81FEu;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x81FEu: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8200u ^ 0x81F2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81F2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8200u; } return 1;
case 0x8200u: /* PLA IMP 68 */
    c->pc = 0x8201u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8201u: /* STA ZP 85 E6 */
    c->pc = 0x8203u;
    ea = 0xE6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8203u: /* PLA IMP 68 */
    c->pc = 0x8204u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8204u: /* STA ZP 85 E5 */
    c->pc = 0x8206u;
    ea = 0xE5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8206u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8207u: /* LSR ZP 46 E1 */
    c->pc = 0x8209u;
    ea = 0xE1u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8209u: /* BCC REL 90 06 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x820Bu ^ 0x8211u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8211u; }
    else { c->cpu_cycles += 2u; c->pc = 0x820Bu; } return 1;
case 0x820Bu: /* LDA ZP A5 E1 */
    c->pc = 0x820Du;
    ea = 0xE1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x820Du: /* ORA IMM 09 80 */
    c->pc = 0x820Fu;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x820Fu: /* STA ZP 85 E1 */
    c->pc = 0x8211u;
    ea = 0xE1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8211u: /* LDA IMM A9 1F */
    c->pc = 0x8213u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8213u: /* CLC IMP 18 */
    c->pc = 0x8214u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8214u: /* ADC ZP 65 EC */
    c->pc = 0x8216u;
    ea = 0xECu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8216u: /* STA ZP 85 EC */
    c->pc = 0x8218u;
    ea = 0xECu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8218u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8219u: /* LSR ZP 46 E1 */
    c->pc = 0x821Bu;
    ea = 0xE1u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x821Bu: /* LSR ZP 46 E1 */
    c->pc = 0x821Du;
    ea = 0xE1u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x821Du: /* LSR ZP 46 E1 */
    c->pc = 0x821Fu;
    ea = 0xE1u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x821Fu: /* LSR ZP 46 E1 */
    c->pc = 0x8221u;
    ea = 0xE1u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8221u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8222u: /* CPY IMM C0 01 */
    c->pc = 0x8224u;
    v = 0x01u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8224u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8226u ^ 0x822Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x822Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8226u; } return 1;
case 0x8226u: /* LDA IMM A9 00 */
    c->pc = 0x8228u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8228u: /* STA ABX 9D 00 40 */
    c->pc = 0x822Bu;
    ea = (uint16_t)(0x4000u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x822Bu: /* STA ABX 9D 01 40 */
    c->pc = 0x822Eu;
    ea = (uint16_t)(0x4001u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x822Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x822Fu: /* LDA IMM A9 07 */
    c->pc = 0x8231u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8231u: /* STA ABS 8D 15 40 */
    c->pc = 0x8234u;
    ea = 0x4015u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8234u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8235u: /* INC ZP E6 EA */
    c->pc = 0x8237u;
    ea = 0xEAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8237u: /* LDA ZP A5 E4 */
    c->pc = 0x8239u;
    ea = 0xE4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8239u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x823Bu ^ 0x823Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x823Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x823Bu; } return 1;
case 0x823Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x823Cu: /* LDX IMM A2 00 */
    c->pc = 0x823Eu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x823Eu: /* LDY IMM A0 05 */
    c->pc = 0x8240u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8240u: /* STX ZP 86 EC */
    c->pc = 0x8242u;
    ea = 0xECu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8242u: /* STY ZP 84 ED */
    c->pc = 0x8244u;
    ea = 0xEDu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8244u: /* LDA IMM A9 00 */
    c->pc = 0x8246u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8246u: /* STA ZP 85 EB */
    c->pc = 0x8248u;
    ea = 0xEBu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8248u: /* LDA IMM A9 04 */
    c->pc = 0x824Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x824Au: /* STA ZP 85 EE */
    c->pc = 0x824Cu;
    ea = 0xEEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x824Cu: /* LDA IMM A9 01 */
    c->pc = 0x824Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x824Eu: /* LDY IMM A0 18 */
    c->pc = 0x8250u;
    v = 0x18u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8250u: /* CLC IMP 18 */
    c->pc = 0x8251u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8251u: /* ADC IZY 71 EC */
    c->pc = 0x8253u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8253u: /* STA IZY 91 EC */
    c->pc = 0x8255u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8255u: /* LDA IMM A9 01 */
    c->pc = 0x8257u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8257u: /* LDY IMM A0 1D */
    c->pc = 0x8259u;
    v = 0x1Du;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8259u: /* CLC IMP 18 */
    c->pc = 0x825Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x825Au: /* ADC IZY 71 EC */
    c->pc = 0x825Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x825Cu: /* STA IZY 91 EC */
    c->pc = 0x825Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x825Eu: /* LDA ZP A5 EF */
    c->pc = 0x8260u;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8260u: /* LSR IMP 4A */
    c->pc = 0x8261u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8261u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8263u ^ 0x8266u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8266u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8263u; } return 1;
case 0x8263u: /* JSR ABS 20 6D 85 */
    push(c, 0x82u); push(c, 0x65u); c->pc = 0x856Du; c->cpu_cycles += 6u; return 1;
case 0x8266u: /* LDA ZP A5 41 */
    c->pc = 0x8268u;
    ea = 0x41u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8268u: /* LSR IMP 4A */
    c->pc = 0x8269u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8269u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x826Bu ^ 0x826Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x826Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x826Bu; } return 1;
case 0x826Bu: /* JMP ABS 4C 86 82 */
    c->pc = 0x8286u; c->cpu_cycles += 3u; return 1;
case 0x826Eu: /* LDY IMM A0 00 */
    c->pc = 0x8270u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8270u: /* LDA IZY B1 EC */
    c->pc = 0x8272u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8272u: /* INY IMP C8 */
    c->pc = 0x8273u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8273u: /* ORA IZY 11 EC */
    c->pc = 0x8275u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8275u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8277u ^ 0x8286u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8286u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8277u; } return 1;
case 0x8277u: /* LDA IMM A9 01 */
    c->pc = 0x8279u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8279u: /* LDY IMM A0 0E */
    c->pc = 0x827Bu;
    v = 0x0Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x827Bu: /* CLC IMP 18 */
    c->pc = 0x827Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x827Cu: /* ADC IZY 71 EC */
    c->pc = 0x827Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x827Eu: /* STA IZY 91 EC */
    c->pc = 0x8280u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8280u: /* JSR ABS 20 B4 86 */
    push(c, 0x82u); push(c, 0x82u); c->pc = 0x86B4u; c->cpu_cycles += 6u; return 1;
case 0x8283u: /* JMP ABS 4C 94 82 */
    c->pc = 0x8294u; c->cpu_cycles += 3u; return 1;
case 0x8286u: /* LDA ZP A5 EF */
    c->pc = 0x8288u;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8288u: /* LSR IMP 4A */
    c->pc = 0x8289u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8289u: /* BCS REL B0 09 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x828Bu ^ 0x8294u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8294u; }
    else { c->cpu_cycles += 2u; c->pc = 0x828Bu; } return 1;
case 0x828Bu: /* LDX ZP A6 EB */
    c->pc = 0x828Du;
    ea = 0xEBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x828Du: /* INX IMP E8 */
    c->pc = 0x828Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x828Eu: /* INX IMP E8 */
    c->pc = 0x828Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x828Fu: /* LDY ZP A4 EE */
    c->pc = 0x8291u;
    ea = 0xEEu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8291u: /* JSR ABS 20 22 82 */
    push(c, 0x82u); push(c, 0x93u); c->pc = 0x8222u; c->cpu_cycles += 6u; return 1;
case 0x8294u: /* LSR ZP 46 EF */
    c->pc = 0x8296u;
    ea = 0xEFu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8296u: /* BCC REL 90 06 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8298u ^ 0x829Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x829Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8298u; } return 1;
case 0x8298u: /* LDA ZP A5 EF */
    c->pc = 0x829Au;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x829Au: /* ORA IMM 09 80 */
    c->pc = 0x829Cu;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x829Cu: /* STA ZP 85 EF */
    c->pc = 0x829Eu;
    ea = 0xEFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x829Eu: /* DEC ZP C6 EE */
    c->pc = 0x82A0u;
    ea = 0xEEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82A0u: /* BEQ REL F0 17 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82A2u ^ 0x82B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82A2u; } return 1;
case 0x82A2u: /* LDA IMM A9 04 */
    c->pc = 0x82A4u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82A4u: /* CLC IMP 18 */
    c->pc = 0x82A5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x82A5u: /* ADC ZP 65 EB */
    c->pc = 0x82A7u;
    ea = 0xEBu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x82A7u: /* STA ZP 85 EB */
    c->pc = 0x82A9u;
    ea = 0xEBu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82A9u: /* LDA IMM A9 1F */
    c->pc = 0x82ABu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82ABu: /* CLC IMP 18 */
    c->pc = 0x82ACu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x82ACu: /* ADC ZP 65 EC */
    c->pc = 0x82AEu;
    ea = 0xECu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x82AEu: /* STA ZP 85 EC */
    c->pc = 0x82B0u;
    ea = 0xECu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82B0u: /* LDA IMM A9 00 */
    c->pc = 0x82B2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82B2u: /* ADC ZP 65 ED */
    c->pc = 0x82B4u;
    ea = 0xEDu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x82B4u: /* STA ZP 85 ED */
    c->pc = 0x82B6u;
    ea = 0xEDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82B6u: /* JMP ABS 4C 4C 82 */
    c->pc = 0x824Cu; c->cpu_cycles += 3u; return 1;
case 0x82B9u: /* LDA ZP A5 E8 */
    c->pc = 0x82BBu;
    ea = 0xE8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82BBu: /* AND IMM 29 7F */
    c->pc = 0x82BDu;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82BDu: /* BEQ REL F0 1E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82BFu ^ 0x82DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x82BFu; } return 1;
case 0x82BFu: /* CMP ZP C5 EA */
    c->pc = 0x82C1u;
    ea = 0xEAu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x82C1u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x82C3u ^ 0x82DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x82C3u; } return 1;
case 0x82C3u: /* LDA ZP A5 EA */
    c->pc = 0x82C5u;
    ea = 0xEAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82C5u: /* AND IMM 29 01 */
    c->pc = 0x82C7u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82C7u: /* STA ZP 85 EA */
    c->pc = 0x82C9u;
    ea = 0xEAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82C9u: /* INC ZP E6 E9 */
    c->pc = 0x82CBu;
    ea = 0xE9u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82CBu: /* LDA IMM A9 10 */
    c->pc = 0x82CDu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82CDu: /* CMP ZP C5 E9 */
    c->pc = 0x82CFu;
    ea = 0xE9u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x82CFu: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x82D1u ^ 0x82DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x82D1u; } return 1;
case 0x82D1u: /* LDA ZP A5 E8 */
    c->pc = 0x82D3u;
    ea = 0xE8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82D3u: /* BMI REL 30 04 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x82D5u ^ 0x82D9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82D9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82D5u; } return 1;
case 0x82D5u: /* LDA IMM A9 00 */
    c->pc = 0x82D7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82D7u: /* STA ZP 85 E8 */
    c->pc = 0x82D9u;
    ea = 0xE8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82D9u: /* LDA IMM A9 0F */
    c->pc = 0x82DBu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82DBu: /* STA ZP 85 E9 */
    c->pc = 0x82DDu;
    ea = 0xE9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82DDu: /* LDA ZP A5 F2 */
    c->pc = 0x82DFu;
    ea = 0xF2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82DFu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82E1u ^ 0x82E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82E1u; } return 1;
case 0x82E1u: /* DEC ZP C6 F2 */
    c->pc = 0x82E3u;
    ea = 0xF2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82E3u: /* LSR ZP 46 EF */
    c->pc = 0x82E5u;
    ea = 0xEFu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82E5u: /* LSR ZP 46 EF */
    c->pc = 0x82E7u;
    ea = 0xEFu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82E7u: /* LSR ZP 46 EF */
    c->pc = 0x82E9u;
    ea = 0xEFu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82E9u: /* LSR ZP 46 EF */
    c->pc = 0x82EBu;
    ea = 0xEFu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82EBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x82ECu: /* LDY IMM A0 0C */
    c->pc = 0x82EEu;
    v = 0x0Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x82EEu: /* LDA IZY B1 EC */
    c->pc = 0x82F0u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82F0u: /* LDY IMM A0 02 */
    c->pc = 0x82F2u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x82F2u: /* CPY ZP C4 EE */
    c->pc = 0x82F4u;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x82F4u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82F6u ^ 0x82F8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82F8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82F6u; } return 1;
case 0x82F6u: /* AND IMM 29 0F */
    c->pc = 0x82F8u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82F8u: /* STA ZP 85 F4 */
    c->pc = 0x82FAu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82FAu: /* LDA ZP A5 E8 */
    c->pc = 0x82FCu;
    ea = 0xE8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82FCu: /* AND IMM 29 7F */
    c->pc = 0x82FEu;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82FEu: /* BEQ REL F0 2B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8300u ^ 0x832Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x832Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8300u; } return 1;
case 0x8300u: /* LDA ZP A5 E9 */
    c->pc = 0x8302u;
    ea = 0xE9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8302u: /* LDY IMM A0 02 */
    c->pc = 0x8304u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8304u: /* CPY ZP C4 EE */
    c->pc = 0x8306u;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x8306u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8308u ^ 0x8310u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8310u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8308u; } return 1;
case 0x8308u: /* LDX IMM A2 0C */
    c->pc = 0x830Au;
    v = 0x0Cu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x830Au: /* CLC IMP 18 */
    c->pc = 0x830Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x830Bu: /* ADC ZP 65 E9 */
    c->pc = 0x830Du;
    ea = 0xE9u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x830Du: /* DEX IMP CA */
    c->pc = 0x830Eu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x830Eu: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8310u ^ 0x830Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x830Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8310u; } return 1;
case 0x8310u: /* TAY IMP A8 */
    c->pc = 0x8311u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8311u: /* LDA ZP A5 E8 */
    c->pc = 0x8313u;
    ea = 0xE8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8313u: /* BMI REL 30 0F */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8315u ^ 0x8324u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8324u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8315u; } return 1;
case 0x8315u: /* LDX IMM A2 FF */
    c->pc = 0x8317u;
    v = 0xFFu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8317u: /* INX IMP E8 */
    c->pc = 0x8318u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8318u: /* CPX ZP E4 F4 */
    c->pc = 0x831Au;
    ea = 0xF4u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x831Au: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x831Cu ^ 0x832Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x832Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x831Cu; } return 1;
case 0x831Cu: /* DEY IMP 88 */
    c->pc = 0x831Du;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x831Du: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x831Fu ^ 0x8317u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8317u; }
    else { c->cpu_cycles += 2u; c->pc = 0x831Fu; } return 1;
case 0x831Fu: /* STX ZP 86 F4 */
    c->pc = 0x8321u;
    ea = 0xF4u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8321u: /* JMP ABS 4C 2B 83 */
    c->pc = 0x832Bu; c->cpu_cycles += 3u; return 1;
case 0x8324u: /* DEC ZP C6 F4 */
    c->pc = 0x8326u;
    ea = 0xF4u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8326u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8328u ^ 0x832Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x832Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8328u; } return 1;
case 0x8328u: /* DEY IMP 88 */
    c->pc = 0x8329u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8329u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x832Bu ^ 0x8324u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8324u; }
    else { c->cpu_cycles += 2u; c->pc = 0x832Bu; } return 1;
case 0x832Bu: /* LDA IMM A9 02 */
    c->pc = 0x832Du;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x832Du: /* CMP ZP C5 EE */
    c->pc = 0x832Fu;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x832Fu: /* BEQ REL F0 4B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8331u ^ 0x837Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x837Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8331u; } return 1;
case 0x8331u: /* LDY IMM A0 0D */
    c->pc = 0x8333u;
    v = 0x0Du;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8333u: /* LDA IZY B1 EC */
    c->pc = 0x8335u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8335u: /* TAX IMP AA */
    c->pc = 0x8336u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8336u: /* AND IMM 29 7F */
    c->pc = 0x8338u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8338u: /* BEQ REL F0 42 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x833Au ^ 0x837Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x837Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x833Au; } return 1;
case 0x833Au: /* INY IMP C8 */
    c->pc = 0x833Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x833Bu: /* CMP IZY D1 EC */
    c->pc = 0x833Du;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x833Du: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x833Fu ^ 0x8347u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8347u; }
    else { c->cpu_cycles += 2u; c->pc = 0x833Fu; } return 1;
case 0x833Fu: /* INY IMP C8 */
    c->pc = 0x8340u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8340u: /* LDA IZY B1 EC */
    c->pc = 0x8342u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8342u: /* AND IMM 29 0F */
    c->pc = 0x8344u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8344u: /* JMP ABS 4C 6C 83 */
    c->pc = 0x836Cu; c->cpu_cycles += 3u; return 1;
case 0x8347u: /* LDA IMM A9 00 */
    c->pc = 0x8349u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8349u: /* STA IZY 91 EC */
    c->pc = 0x834Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x834Bu: /* INY IMP C8 */
    c->pc = 0x834Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x834Cu: /* LDA IZY B1 EC */
    c->pc = 0x834Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x834Eu: /* LSR IMP 4A */
    c->pc = 0x834Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x834Fu: /* LSR IMP 4A */
    c->pc = 0x8350u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8350u: /* LSR IMP 4A */
    c->pc = 0x8351u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8351u: /* LSR IMP 4A */
    c->pc = 0x8352u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8352u: /* STA ZP 85 F5 */
    c->pc = 0x8354u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8354u: /* TXA IMP 8A */
    c->pc = 0x8355u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8355u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8357u ^ 0x835Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x835Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8357u; } return 1;
case 0x8357u: /* LDA IMM A9 00 */
    c->pc = 0x8359u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8359u: /* SEC IMP 38 */
    c->pc = 0x835Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x835Au: /* SBC ZP E5 F5 */
    c->pc = 0x835Cu;
    ea = 0xF5u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x835Cu: /* STA ZP 85 F5 */
    c->pc = 0x835Eu;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x835Eu: /* LDA IZY B1 EC */
    c->pc = 0x8360u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8360u: /* AND IMM 29 0F */
    c->pc = 0x8362u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8362u: /* CLC IMP 18 */
    c->pc = 0x8363u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8363u: /* ADC ZP 65 F5 */
    c->pc = 0x8365u;
    ea = 0xF5u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8365u: /* BPL REL 10 05 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8367u ^ 0x836Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x836Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8367u; } return 1;
case 0x8367u: /* LDA IMM A9 00 */
    c->pc = 0x8369u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8369u: /* JMP ABS 4C 72 83 */
    c->pc = 0x8372u; c->cpu_cycles += 3u; return 1;
case 0x836Cu: /* CMP ZP C5 F4 */
    c->pc = 0x836Eu;
    ea = 0xF4u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x836Eu: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8370u ^ 0x8372u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8372u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8370u; } return 1;
case 0x8370u: /* LDA ZP A5 F4 */
    c->pc = 0x8372u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8372u: /* STA ZP 85 F4 */
    c->pc = 0x8374u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8374u: /* LDA IZY B1 EC */
    c->pc = 0x8376u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8376u: /* AND IMM 29 F0 */
    c->pc = 0x8378u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8378u: /* ORA ZP 05 F4 */
    c->pc = 0x837Au;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x837Au: /* STA IZY 91 EC */
    c->pc = 0x837Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x837Cu: /* LDA ZP A5 EF */
    c->pc = 0x837Eu;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x837Eu: /* LSR IMP 4A */
    c->pc = 0x837Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x837Fu: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8381u ^ 0x8388u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8388u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8381u; } return 1;
case 0x8381u: /* LDA IMM A9 0C */
    c->pc = 0x8383u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8383u: /* STA ZP 85 F5 */
    c->pc = 0x8385u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8385u: /* JMP ABS 4C 8F 83 */
    c->pc = 0x838Fu; c->cpu_cycles += 3u; return 1;
case 0x8388u: /* LDA IMM A9 09 */
    c->pc = 0x838Au;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x838Au: /* STA ZP 85 F5 */
    c->pc = 0x838Cu;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x838Cu: /* JMP ABS 4C FE 83 */
    c->pc = 0x83FEu; c->cpu_cycles += 3u; return 1;
case 0x838Fu: /* LDY IMM A0 16 */
    c->pc = 0x8391u;
    v = 0x16u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8391u: /* LDA IZY B1 EC */
    c->pc = 0x8393u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8393u: /* AND IMM 29 7F */
    c->pc = 0x8395u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8395u: /* BEQ REL F0 3E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8397u ^ 0x83D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8397u; } return 1;
case 0x8397u: /* LDY IMM A0 1D */
    c->pc = 0x8399u;
    v = 0x1Du;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8399u: /* CMP IZY D1 EC */
    c->pc = 0x839Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x839Bu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x839Du ^ 0x83A0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83A0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x839Du; } return 1;
case 0x839Du: /* JMP ABS 4C CB 83 */
    c->pc = 0x83CBu; c->cpu_cycles += 3u; return 1;
case 0x83A0u: /* LDA IMM A9 00 */
    c->pc = 0x83A2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83A2u: /* STA IZY 91 EC */
    c->pc = 0x83A4u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x83A4u: /* LDY IMM A0 17 */
    c->pc = 0x83A6u;
    v = 0x17u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83A6u: /* LDA IZY B1 EC */
    c->pc = 0x83A8u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83A8u: /* LDY IMM A0 1E */
    c->pc = 0x83AAu;
    v = 0x1Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83AAu: /* CLC IMP 18 */
    c->pc = 0x83ABu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x83ABu: /* ADC IZY 71 EC */
    c->pc = 0x83ADu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83ADu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x83AFu ^ 0x83B1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83B1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83AFu; } return 1;
case 0x83AFu: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x83B1u ^ 0x83B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83B1u; } return 1;
case 0x83B1u: /* LDA IMM A9 01 */
    c->pc = 0x83B3u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83B3u: /* STA IZY 91 EC */
    c->pc = 0x83B5u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x83B5u: /* JMP ABS 4C C2 83 */
    c->pc = 0x83C2u; c->cpu_cycles += 3u; return 1;
case 0x83B8u: /* STA IZY 91 EC */
    c->pc = 0x83BAu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x83BAu: /* CMP IMM C9 10 */
    c->pc = 0x83BCu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x83BCu: /* BCC REL 90 0D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x83BEu ^ 0x83CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x83BEu; } return 1;
case 0x83BEu: /* LDA IMM A9 0F */
    c->pc = 0x83C0u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83C0u: /* STA IZY 91 EC */
    c->pc = 0x83C2u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x83C2u: /* LDA IMM A9 00 */
    c->pc = 0x83C4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83C4u: /* LDY IMM A0 17 */
    c->pc = 0x83C6u;
    v = 0x17u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83C6u: /* SEC IMP 38 */
    c->pc = 0x83C7u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x83C7u: /* SBC IZY F1 EC */
    c->pc = 0x83C9u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83C9u: /* STA IZY 91 EC */
    c->pc = 0x83CBu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x83CBu: /* LDY IMM A0 1E */
    c->pc = 0x83CDu;
    v = 0x1Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83CDu: /* LDA IZY B1 EC */
    c->pc = 0x83CFu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83CFu: /* CMP ZP C5 F4 */
    c->pc = 0x83D1u;
    ea = 0xF4u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x83D1u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x83D3u ^ 0x83D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83D3u; } return 1;
case 0x83D3u: /* STA ZP 85 F4 */
    c->pc = 0x83D5u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83D5u: /* LDY IMM A0 02 */
    c->pc = 0x83D7u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83D7u: /* CPY ZP C4 EE */
    c->pc = 0x83D9u;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x83D9u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x83DBu ^ 0x83E8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83E8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83DBu; } return 1;
case 0x83DBu: /* LDA ZP A5 F5 */
    c->pc = 0x83DDu;
    ea = 0xF5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83DDu: /* AND IMM 29 7F */
    c->pc = 0x83DFu;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83DFu: /* TAY IMP A8 */
    c->pc = 0x83E0u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83E0u: /* LDA IZY B1 EC */
    c->pc = 0x83E2u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83E2u: /* AND IMM 29 F0 */
    c->pc = 0x83E4u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83E4u: /* ORA ZP 05 F4 */
    c->pc = 0x83E6u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83E6u: /* STA ZP 85 F4 */
    c->pc = 0x83E8u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83E8u: /* LDX ZP A6 EB */
    c->pc = 0x83EAu;
    ea = 0xEBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x83EAu: /* LDA ZP A5 F4 */
    c->pc = 0x83ECu;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83ECu: /* STA ABX 9D 00 40 */
    c->pc = 0x83EFu;
    ea = (uint16_t)(0x4000u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x83EFu: /* LDA ZP A5 F5 */
    c->pc = 0x83F1u;
    ea = 0xF5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83F1u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x83F3u ^ 0x83FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x83F3u; } return 1;
case 0x83F3u: /* LDA IMM A9 90 */
    c->pc = 0x83F5u;
    v = 0x90u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83F5u: /* STA ZP 85 F5 */
    c->pc = 0x83F7u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83F7u: /* JMP ABS 4C FE 83 */
    c->pc = 0x83FEu; c->cpu_cycles += 3u; return 1;
case 0x83FAu: /* LDA IMM A9 09 */
    c->pc = 0x83FCu;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83FCu: /* STA ZP 85 F5 */
    c->pc = 0x83FEu;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83FEu: /* LDA ZP A5 F5 */
    c->pc = 0x8400u;
    ea = 0xF5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8400u: /* AND IMM 29 7F */
    c->pc = 0x8402u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8402u: /* TAY IMP A8 */
    c->pc = 0x8403u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8403u: /* LDX IMM A2 00 */
    c->pc = 0x8405u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8405u: /* LDA IZY B1 EC */
    c->pc = 0x8407u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8407u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8409u ^ 0x8418u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8418u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8409u; } return 1;
case 0x8409u: /* BPL REL 10 01 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x840Bu ^ 0x840Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x840Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x840Bu; } return 1;
case 0x840Bu: /* DEX IMP CA */
    c->pc = 0x840Cu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x840Cu: /* INY IMP C8 */
    c->pc = 0x840Du;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x840Du: /* CLC IMP 18 */
    c->pc = 0x840Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x840Eu: /* ADC IZY 71 EC */
    c->pc = 0x8410u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8410u: /* STA IZY 91 EC */
    c->pc = 0x8412u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8412u: /* TXA IMP 8A */
    c->pc = 0x8413u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8413u: /* INY IMP C8 */
    c->pc = 0x8414u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8414u: /* ADC IZY 71 EC */
    c->pc = 0x8416u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8416u: /* STA IZY 91 EC */
    c->pc = 0x8418u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8418u: /* LDA ZP A5 F5 */
    c->pc = 0x841Au;
    ea = 0xF5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x841Au: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x841Cu ^ 0x8422u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8422u; }
    else { c->cpu_cycles += 2u; c->pc = 0x841Cu; } return 1;
case 0x841Cu: /* LDA ZP A5 EF */
    c->pc = 0x841Eu;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x841Eu: /* LSR IMP 4A */
    c->pc = 0x841Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x841Fu: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8421u ^ 0x8422u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8422u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8421u; } return 1;
case 0x8421u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8422u: /* LDY IMM A0 14 */
    c->pc = 0x8424u;
    v = 0x14u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8424u: /* LDA IZY B1 EC */
    c->pc = 0x8426u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8426u: /* AND IMM 29 7F */
    c->pc = 0x8428u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8428u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x842Au ^ 0x842Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x842Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x842Au; } return 1;
case 0x842Au: /* JMP ABS 4C A9 84 */
    c->pc = 0x84A9u; c->cpu_cycles += 3u; return 1;
case 0x842Du: /* LDY IMM A0 18 */
    c->pc = 0x842Fu;
    v = 0x18u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x842Fu: /* CMP IZY D1 EC */
    c->pc = 0x8431u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8431u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8433u ^ 0x8436u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8436u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8433u; } return 1;
case 0x8433u: /* JMP ABS 4C A9 84 */
    c->pc = 0x84A9u; c->cpu_cycles += 3u; return 1;
case 0x8436u: /* LDA IMM A9 00 */
    c->pc = 0x8438u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8438u: /* STA IZY 91 EC */
    c->pc = 0x843Au;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x843Au: /* TAX IMP AA */
    c->pc = 0x843Bu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x843Bu: /* LDY IMM A0 15 */
    c->pc = 0x843Du;
    v = 0x15u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x843Du: /* LDA IZY B1 EC */
    c->pc = 0x843Fu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x843Fu: /* ROL IMP 2A */
    c->pc = 0x8440u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8440u: /* ROL IMP 2A */
    c->pc = 0x8441u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8441u: /* ROL IMP 2A */
    c->pc = 0x8442u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8442u: /* ROL IMP 2A */
    c->pc = 0x8443u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8443u: /* AND IMM 29 07 */
    c->pc = 0x8445u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8445u: /* STA ZP 85 F4 */
    c->pc = 0x8447u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8447u: /* LDY IMM A0 19 */
    c->pc = 0x8449u;
    v = 0x19u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8449u: /* LDA IZY B1 EC */
    c->pc = 0x844Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x844Bu: /* ASL IMP 0A */
    c->pc = 0x844Cu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x844Cu: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x844Eu ^ 0x8456u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8456u; }
    else { c->cpu_cycles += 2u; c->pc = 0x844Eu; } return 1;
case 0x844Eu: /* LDA IMM A9 00 */
    c->pc = 0x8450u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8450u: /* SEC IMP 38 */
    c->pc = 0x8451u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8451u: /* SBC ZP E5 F4 */
    c->pc = 0x8453u;
    ea = 0xF4u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8453u: /* STA ZP 85 F4 */
    c->pc = 0x8455u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8455u: /* DEX IMP CA */
    c->pc = 0x8456u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8456u: /* LDA ZP A5 F4 */
    c->pc = 0x8458u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8458u: /* CLC IMP 18 */
    c->pc = 0x8459u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8459u: /* LDY IMM A0 1A */
    c->pc = 0x845Bu;
    v = 0x1Au;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x845Bu: /* ADC IZY 71 EC */
    c->pc = 0x845Du;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x845Du: /* STA IZY 91 EC */
    c->pc = 0x845Fu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x845Fu: /* INY IMP C8 */
    c->pc = 0x8460u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8460u: /* TXA IMP 8A */
    c->pc = 0x8461u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8461u: /* ADC IZY 71 EC */
    c->pc = 0x8463u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8463u: /* STA IZY 91 EC */
    c->pc = 0x8465u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8465u: /* LDY IMM A0 15 */
    c->pc = 0x8467u;
    v = 0x15u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8467u: /* LDA IZY B1 EC */
    c->pc = 0x8469u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8469u: /* AND IMM 29 1F */
    c->pc = 0x846Bu;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x846Bu: /* STA ZP 85 F4 */
    c->pc = 0x846Du;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x846Du: /* LDY IMM A0 19 */
    c->pc = 0x846Fu;
    v = 0x19u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x846Fu: /* LDA IZY B1 EC */
    c->pc = 0x8471u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8471u: /* CLC IMP 18 */
    c->pc = 0x8472u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8472u: /* ADC IMM 69 01 */
    c->pc = 0x8474u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8474u: /* STA IZY 91 EC */
    c->pc = 0x8476u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8476u: /* AND IMM 29 7F */
    c->pc = 0x8478u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8478u: /* CMP ZP C5 F4 */
    c->pc = 0x847Au;
    ea = 0xF4u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x847Au: /* BNE REL D0 2D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x847Cu ^ 0x84A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x847Cu; } return 1;
case 0x847Cu: /* LDA IZY B1 EC */
    c->pc = 0x847Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x847Eu: /* AND IMM 29 80 */
    c->pc = 0x8480u;
    v = 0x80u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8480u: /* STA IZY 91 EC */
    c->pc = 0x8482u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8482u: /* LDY IMM A0 14 */
    c->pc = 0x8484u;
    v = 0x14u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8484u: /* LDA IZY B1 EC */
    c->pc = 0x8486u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8486u: /* ASL IMP 0A */
    c->pc = 0x8487u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8487u: /* BCS REL B0 1A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8489u ^ 0x84A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8489u; } return 1;
case 0x8489u: /* LDA IZY B1 EC */
    c->pc = 0x848Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x848Bu: /* ORA IMM 09 80 */
    c->pc = 0x848Du;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x848Du: /* STA IZY 91 EC */
    c->pc = 0x848Fu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x848Fu: /* LDY IMM A0 19 */
    c->pc = 0x8491u;
    v = 0x19u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8491u: /* LDA IZY B1 EC */
    c->pc = 0x8493u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8493u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8495u ^ 0x849Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x849Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8495u; } return 1;
case 0x8495u: /* AND IMM 29 7F */
    c->pc = 0x8497u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8497u: /* STA IZY 91 EC */
    c->pc = 0x8499u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8499u: /* JMP ABS 4C A9 84 */
    c->pc = 0x84A9u; c->cpu_cycles += 3u; return 1;
case 0x849Cu: /* ORA IMM 09 80 */
    c->pc = 0x849Eu;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x849Eu: /* STA IZY 91 EC */
    c->pc = 0x84A0u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x84A0u: /* JMP ABS 4C A9 84 */
    c->pc = 0x84A9u; c->cpu_cycles += 3u; return 1;
case 0x84A3u: /* LDA IZY B1 EC */
    c->pc = 0x84A5u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84A5u: /* AND IMM 29 7F */
    c->pc = 0x84A7u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84A7u: /* STA IZY 91 EC */
    c->pc = 0x84A9u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x84A9u: /* LDA ZP A5 F5 */
    c->pc = 0x84ABu;
    ea = 0xF5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84ABu: /* AND IMM 29 7F */
    c->pc = 0x84ADu;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84ADu: /* STA ZP 85 F5 */
    c->pc = 0x84AFu;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84AFu: /* INC ZP E6 F5 */
    c->pc = 0x84B1u;
    ea = 0xF5u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x84B1u: /* LDY IMM A0 1A */
    c->pc = 0x84B3u;
    v = 0x1Au;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x84B3u: /* LDA IZY B1 EC */
    c->pc = 0x84B5u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84B5u: /* LDY ZP A4 F5 */
    c->pc = 0x84B7u;
    ea = 0xF5u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x84B7u: /* CLC IMP 18 */
    c->pc = 0x84B8u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x84B8u: /* ADC IZY 71 EC */
    c->pc = 0x84BAu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84BAu: /* TAX IMP AA */
    c->pc = 0x84BBu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x84BBu: /* LDY IMM A0 1B */
    c->pc = 0x84BDu;
    v = 0x1Bu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x84BDu: /* LDA IZY B1 EC */
    c->pc = 0x84BFu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84BFu: /* INC ZP E6 F5 */
    c->pc = 0x84C1u;
    ea = 0xF5u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x84C1u: /* LDY ZP A4 F5 */
    c->pc = 0x84C3u;
    ea = 0xF5u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x84C3u: /* ADC IZY 71 EC */
    c->pc = 0x84C5u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84C5u: /* TAY IMP A8 */
    c->pc = 0x84C6u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x84C6u: /* LDA IMM A9 01 */
    c->pc = 0x84C8u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84C8u: /* CMP ZP C5 EE */
    c->pc = 0x84CAu;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x84CAu: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x84CCu ^ 0x84E5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84E5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x84CCu; } return 1;
case 0x84CCu: /* LDA IMM A9 0F */
    c->pc = 0x84CEu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84CEu: /* STA ABS 8D 15 40 */
    c->pc = 0x84D1u;
    ea = 0x4015u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84D1u: /* TXA IMP 8A */
    c->pc = 0x84D2u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84D2u: /* AND IMM 29 0F */
    c->pc = 0x84D4u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84D4u: /* TAX IMP AA */
    c->pc = 0x84D5u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x84D5u: /* INC ZP E6 F5 */
    c->pc = 0x84D7u;
    ea = 0xF5u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x84D7u: /* LDY ZP A4 F5 */
    c->pc = 0x84D9u;
    ea = 0xF5u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x84D9u: /* LDA IZY B1 EC */
    c->pc = 0x84DBu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84DBu: /* AND IMM 29 80 */
    c->pc = 0x84DDu;
    v = 0x80u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84DDu: /* STA ZP 85 F4 */
    c->pc = 0x84DFu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84DFu: /* TXA IMP 8A */
    c->pc = 0x84E0u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84E0u: /* ORA ZP 05 F4 */
    c->pc = 0x84E2u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84E2u: /* TAX IMP AA */
    c->pc = 0x84E3u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x84E3u: /* LDY IMM A0 00 */
    c->pc = 0x84E5u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x84E5u: /* TXA IMP 8A */
    c->pc = 0x84E6u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84E6u: /* LDX ZP A6 EB */
    c->pc = 0x84E8u;
    ea = 0xEBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x84E8u: /* INX IMP E8 */
    c->pc = 0x84E9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x84E9u: /* INX IMP E8 */
    c->pc = 0x84EAu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x84EAu: /* STA ABX 9D 00 40 */
    c->pc = 0x84EDu;
    ea = (uint16_t)(0x4000u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x84EDu: /* TYA IMP 98 */
    c->pc = 0x84EEu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84EEu: /* LDY IMM A0 1C */
    c->pc = 0x84F0u;
    v = 0x1Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x84F0u: /* CMP IZY D1 EC */
    c->pc = 0x84F2u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84F2u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x84F4u ^ 0x84F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x84F4u; } return 1;
case 0x84F4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84F5u: /* STA IZY 91 EC */
    c->pc = 0x84F7u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x84F7u: /* ORA IMM 09 08 */
    c->pc = 0x84F9u;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84F9u: /* STA ABX 9D 01 40 */
    c->pc = 0x84FCu;
    ea = (uint16_t)(0x4001u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x84FCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84FDu: /* LDY IMM A0 01 */
    c->pc = 0x84FFu;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x84FFu: /* CPY ZP C4 EE */
    c->pc = 0x8501u;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x8501u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8503u ^ 0x8509u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8509u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8503u; } return 1;
case 0x8503u: /* LDA IMM A9 07 */
    c->pc = 0x8505u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8505u: /* STA ABS 8D 15 40 */
    c->pc = 0x8508u;
    ea = 0x4015u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8508u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8509u: /* LDA IMM A9 00 */
    c->pc = 0x850Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x850Bu: /* LDX ZP A6 EB */
    c->pc = 0x850Du;
    ea = 0xEBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x850Du: /* INX IMP E8 */
    c->pc = 0x850Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x850Eu: /* INX IMP E8 */
    c->pc = 0x850Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x850Fu: /* STA ABX 9D 00 40 */
    c->pc = 0x8512u;
    ea = (uint16_t)(0x4000u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8512u: /* STA ABX 9D 01 40 */
    c->pc = 0x8515u;
    ea = (uint16_t)(0x4001u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8515u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8516u: /* LDY IMM A0 14 */
    c->pc = 0x8518u;
    v = 0x14u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8518u: /* LDA IZY B1 EC */
    c->pc = 0x851Au;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x851Au: /* AND IMM 29 7F */
    c->pc = 0x851Cu;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x851Cu: /* STA IZY 91 EC */
    c->pc = 0x851Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x851Eu: /* LDY IMM A0 16 */
    c->pc = 0x8520u;
    v = 0x16u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8520u: /* LDA IZY B1 EC */
    c->pc = 0x8522u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8522u: /* ASL IMP 0A */
    c->pc = 0x8523u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8523u: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8525u ^ 0x8535u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8535u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8525u; } return 1;
case 0x8525u: /* LDY ZP A4 F4 */
    c->pc = 0x8527u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8527u: /* LDA IZY B1 EC */
    c->pc = 0x8529u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8529u: /* LDX IMM A2 02 */
    c->pc = 0x852Bu;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x852Bu: /* CPX ZP E4 EE */
    c->pc = 0x852Du;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x852Du: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x852Fu ^ 0x8531u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8531u; }
    else { c->cpu_cycles += 2u; c->pc = 0x852Fu; } return 1;
case 0x852Fu: /* AND IMM 29 0F */
    c->pc = 0x8531u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8531u: /* LDY IMM A0 1E */
    c->pc = 0x8533u;
    v = 0x1Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8533u: /* STA IZY 91 EC */
    c->pc = 0x8535u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8535u: /* LDX IMM A2 06 */
    c->pc = 0x8537u;
    v = 0x06u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8537u: /* LDA IMM A9 00 */
    c->pc = 0x8539u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8539u: /* LDY IMM A0 18 */
    c->pc = 0x853Bu;
    v = 0x18u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x853Bu: /* STA IZY 91 EC */
    c->pc = 0x853Du;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x853Du: /* INY IMP C8 */
    c->pc = 0x853Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x853Eu: /* DEX IMP CA */
    c->pc = 0x853Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x853Fu: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8541u ^ 0x853Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x853Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8541u; } return 1;
case 0x8541u: /* LDA IMM A9 FF */
    c->pc = 0x8543u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8543u: /* LDY IMM A0 1C */
    c->pc = 0x8545u;
    v = 0x1Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8545u: /* STA IZY 91 EC */
    c->pc = 0x8547u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8547u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8548u: /* LDY IMM A0 1C */
    c->pc = 0x854Au;
    v = 0x1Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x854Au: /* LDA IZY B1 EC */
    c->pc = 0x854Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x854Cu: /* PHA IMP 48 */
    c->pc = 0x854Du;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x854Du: /* JSR ABS 20 16 85 */
    push(c, 0x85u); push(c, 0x4Fu); c->pc = 0x8516u; c->cpu_cycles += 6u; return 1;
case 0x8550u: /* PLA IMP 68 */
    c->pc = 0x8551u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8551u: /* LDY IMM A0 1C */
    c->pc = 0x8553u;
    v = 0x1Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8553u: /* STA IZY 91 EC */
    c->pc = 0x8555u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8555u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8556u: /* TXA IMP 8A */
    c->pc = 0x8557u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8557u: /* ASL IMP 0A */
    c->pc = 0x8558u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8558u: /* TAY IMP A8 */
    c->pc = 0x8559u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8559u: /* INY IMP C8 */
    c->pc = 0x855Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x855Au: /* PLA IMP 68 */
    c->pc = 0x855Bu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x855Bu: /* STA ZP 85 F4 */
    c->pc = 0x855Du;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x855Du: /* PLA IMP 68 */
    c->pc = 0x855Eu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x855Eu: /* STA ZP 85 F5 */
    c->pc = 0x8560u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8560u: /* LDA IZY B1 F4 */
    c->pc = 0x8562u;
    ea = (uint16_t)(read16_zp(c, 0xF4u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xF4u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8562u: /* TAX IMP AA */
    c->pc = 0x8563u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8563u: /* INY IMP C8 */
    c->pc = 0x8564u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8564u: /* LDA IZY B1 F4 */
    c->pc = 0x8566u;
    ea = (uint16_t)(read16_zp(c, 0xF4u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xF4u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8566u: /* STA ZP 85 F5 */
    c->pc = 0x8568u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8568u: /* STX ZP 86 F4 */
    c->pc = 0x856Au;
    ea = 0xF4u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x856Au: /* JMP IND 6C F4 00 */
    c->pc = read16_jmp_bug(c, 0x00F4u); c->cpu_cycles += 5u; return 1;
case 0x856Du: /* LDA ZP A5 F2 */
    c->pc = 0x856Fu;
    ea = 0xF2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x856Fu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8571u ^ 0x8574u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8574u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8571u; } return 1;
case 0x8571u: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x8574u: /* LDY IMM A0 11 */
    c->pc = 0x8576u;
    v = 0x11u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8576u: /* LDA IZY B1 EC */
    c->pc = 0x8578u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8578u: /* INY IMP C8 */
    c->pc = 0x8579u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8579u: /* ORA IZY 11 EC */
    c->pc = 0x857Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x857Bu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x857Du ^ 0x857Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x857Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x857Du; } return 1;
case 0x857Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x857Eu: /* INY IMP C8 */
    c->pc = 0x857Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x857Fu: /* LDA IZY B1 EC */
    c->pc = 0x8581u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8581u: /* LDY IMM A0 02 */
    c->pc = 0x8583u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8583u: /* CPY ZP C4 EE */
    c->pc = 0x8585u;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x8585u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8587u ^ 0x8589u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8589u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8587u; } return 1;
case 0x8587u: /* AND IMM 29 0F */
    c->pc = 0x8589u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8589u: /* STA ZP 85 F4 */
    c->pc = 0x858Bu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x858Bu: /* LDA IMM A9 93 */
    c->pc = 0x858Du;
    v = 0x93u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x858Du: /* STA ZP 85 F5 */
    c->pc = 0x858Fu;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x858Fu: /* JMP ABS 4C 8F 83 */
    c->pc = 0x838Fu; c->cpu_cycles += 3u; return 1;
case 0x8592u: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0x94u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x8595u: /* ASL IMP 0A */
    c->pc = 0x8596u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8596u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8598u ^ 0x859Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x859Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8598u; } return 1;
case 0x8598u: /* JMP ABS 4C C2 85 */
    c->pc = 0x85C2u; c->cpu_cycles += 3u; return 1;
case 0x859Bu: /* TXA IMP 8A */
    c->pc = 0x859Cu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x859Cu: /* AND IMM 29 0F */
    c->pc = 0x859Eu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x859Eu: /* CMP IMM C9 0F */
    c->pc = 0x85A0u;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x85A0u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85A2u ^ 0x85A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85A2u; } return 1;
case 0x85A2u: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0xA4u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x85A5u: /* JMP ABS 4C 48 85 */
    c->pc = 0x8548u; c->cpu_cycles += 3u; return 1;
case 0x85A8u: /* AND IMM 29 07 */
    c->pc = 0x85AAu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85AAu: /* STA ZP 85 F4 */
    c->pc = 0x85ACu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85ACu: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0xAEu); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x85AFu: /* LDY IMM A0 11 */
    c->pc = 0x85B1u;
    v = 0x11u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x85B1u: /* STA IZY 91 EC */
    c->pc = 0x85B3u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x85B3u: /* INY IMP C8 */
    c->pc = 0x85B4u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x85B4u: /* LDA ZP A5 F4 */
    c->pc = 0x85B6u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85B6u: /* STA IZY 91 EC */
    c->pc = 0x85B8u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x85B8u: /* LDA IMM A9 13 */
    c->pc = 0x85BAu;
    v = 0x13u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85BAu: /* STA ZP 85 F4 */
    c->pc = 0x85BCu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85BCu: /* JSR ABS 20 16 85 */
    push(c, 0x85u); push(c, 0xBEu); c->pc = 0x8516u; c->cpu_cycles += 6u; return 1;
case 0x85BFu: /* JMP ABS 4C FD 84 */
    c->pc = 0x84FDu; c->cpu_cycles += 3u; return 1;
case 0x85C2u: /* JSR ABS 20 56 85 */
    push(c, 0x85u); push(c, 0xC4u); c->pc = 0x8556u; c->cpu_cycles += 6u; return 1;
case 0x85D3u: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0xD5u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x85D6u: /* STA ZP 85 F2 */
    c->pc = 0x85D8u;
    ea = 0xF2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85D8u: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x85DBu: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0xDDu); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x85DEu: /* LDY IMM A0 10 */
    c->pc = 0x85E0u;
    v = 0x10u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x85E0u: /* STA IZY 91 EC */
    c->pc = 0x85E2u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x85E2u: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x85E5u: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0xE7u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x85E8u: /* STA ZP 85 F4 */
    c->pc = 0x85EAu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85EAu: /* LDY IMM A0 13 */
    c->pc = 0x85ECu;
    v = 0x13u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x85ECu: /* LDA IZY B1 EC */
    c->pc = 0x85EEu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x85EEu: /* AND IMM 29 3F */
    c->pc = 0x85F0u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85F0u: /* ORA ZP 05 F4 */
    c->pc = 0x85F2u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85F2u: /* JMP ABS 4C 08 86 */
    c->pc = 0x8608u; c->cpu_cycles += 3u; return 1;
case 0x85F5u: /* JSR ABS 20 A0 86 */
    push(c, 0x85u); push(c, 0xF7u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x85F8u: /* LDY IMM A0 02 */
    c->pc = 0x85FAu;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x85FAu: /* CPY ZP C4 EE */
    c->pc = 0x85FCu;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x85FCu: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x85FEu ^ 0x8608u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8608u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85FEu; } return 1;
case 0x85FEu: /* STA ZP 85 F4 */
    c->pc = 0x8600u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8600u: /* LDY IMM A0 13 */
    c->pc = 0x8602u;
    v = 0x13u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8602u: /* LDA IZY B1 EC */
    c->pc = 0x8604u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8604u: /* AND IMM 29 C0 */
    c->pc = 0x8606u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8606u: /* ORA ZP 05 F4 */
    c->pc = 0x8608u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8608u: /* LDY IMM A0 13 */
    c->pc = 0x860Au;
    v = 0x13u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x860Au: /* STA IZY 91 EC */
    c->pc = 0x860Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x860Cu: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x860Fu: /* JSR ABS 20 A0 86 */
    push(c, 0x86u); push(c, 0x11u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x8612u: /* TXA IMP 8A */
    c->pc = 0x8613u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8613u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8615u ^ 0x861Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x861Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8615u; } return 1;
case 0x8615u: /* CPX ZP E4 F3 */
    c->pc = 0x8617u;
    ea = 0xF3u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x8617u: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8619u ^ 0x862Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x862Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8619u; } return 1;
case 0x8619u: /* INC ZP E6 F3 */
    c->pc = 0x861Bu;
    ea = 0xF3u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x861Bu: /* JSR ABS 20 A0 86 */
    push(c, 0x86u); push(c, 0x1Du); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x861Eu: /* STA ZP 85 F4 */
    c->pc = 0x8620u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8620u: /* JSR ABS 20 A0 86 */
    push(c, 0x86u); push(c, 0x22u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x8623u: /* STA ZP 85 F1 */
    c->pc = 0x8625u;
    ea = 0xF1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8625u: /* LDA ZP A5 F4 */
    c->pc = 0x8627u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8627u: /* STA ZP 85 F0 */
    c->pc = 0x8629u;
    ea = 0xF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8629u: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x862Cu: /* LDA IMM A9 00 */
    c->pc = 0x862Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x862Eu: /* STA ZP 85 F3 */
    c->pc = 0x8630u;
    ea = 0xF3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8630u: /* LDA IMM A9 02 */
    c->pc = 0x8632u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8632u: /* CLC IMP 18 */
    c->pc = 0x8633u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8633u: /* ADC ZP 65 F0 */
    c->pc = 0x8635u;
    ea = 0xF0u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8635u: /* STA ZP 85 F0 */
    c->pc = 0x8637u;
    ea = 0xF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8637u: /* LDA IMM A9 00 */
    c->pc = 0x8639u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8639u: /* ADC ZP 65 F1 */
    c->pc = 0x863Bu;
    ea = 0xF1u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x863Bu: /* STA ZP 85 F1 */
    c->pc = 0x863Du;
    ea = 0xF1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x863Du: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x8640u: /* LDA IMM A9 14 */
    c->pc = 0x8642u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8642u: /* STA ZP 85 F4 */
    c->pc = 0x8644u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8644u: /* JSR ABS 20 A0 86 */
    push(c, 0x86u); push(c, 0x46u); c->pc = 0x86A0u; c->cpu_cycles += 6u; return 1;
case 0x8647u: /* LDY ZP A4 F4 */
    c->pc = 0x8649u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8649u: /* STA IZY 91 EC */
    c->pc = 0x864Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x864Bu: /* INC ZP E6 F4 */
    c->pc = 0x864Du;
    ea = 0xF4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x864Du: /* LDY ZP A4 F4 */
    c->pc = 0x864Fu;
    ea = 0xF4u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x864Fu: /* CPY IMM C0 18 */
    c->pc = 0x8651u;
    v = 0x18u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8651u: /* BNE REL D0 F1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8653u ^ 0x8644u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8644u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8653u; } return 1;
case 0x8653u: /* JMP ABS 4C 92 85 */
    c->pc = 0x8592u; c->cpu_cycles += 3u; return 1;
case 0x8656u: /* LDA ZP A5 F0 */
    c->pc = 0x8658u;
    ea = 0xF0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8658u: /* SEC IMP 38 */
    c->pc = 0x8659u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8659u: /* SBC IMM E9 01 */
    c->pc = 0x865Bu;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x865Bu: /* STA ZP 85 F0 */
    c->pc = 0x865Du;
    ea = 0xF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x865Du: /* LDA ZP A5 F1 */
    c->pc = 0x865Fu;
    ea = 0xF1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x865Fu: /* SBC IMM E9 00 */
    c->pc = 0x8661u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8661u: /* STA ZP 85 F1 */
    c->pc = 0x8663u;
    ea = 0xF1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8663u: /* LDA ZP A5 E0 */
    c->pc = 0x8665u;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8665u: /* AND IMM 29 0F */
    c->pc = 0x8667u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8667u: /* STA ZP 85 E0 */
    c->pc = 0x8669u;
    ea = 0xE0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8669u: /* LDA IMM A9 00 */
    c->pc = 0x866Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x866Bu: /* STA ZP 85 E1 */
    c->pc = 0x866Du;
    ea = 0xE1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x866Du: /* LDA ZP A5 EF */
    c->pc = 0x866Fu;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x866Fu: /* AND IMM 29 FE */
    c->pc = 0x8671u;
    v = 0xFEu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8671u: /* STA ZP 85 EF */
    c->pc = 0x8673u;
    ea = 0xEFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8673u: /* LDY IMM A0 0A */
    c->pc = 0x8675u;
    v = 0x0Au;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8675u: /* LDA IZY B1 EC */
    c->pc = 0x8677u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8677u: /* INY IMP C8 */
    c->pc = 0x8678u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8678u: /* ORA IZY 11 EC */
    c->pc = 0x867Au;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x867Au: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x867Cu ^ 0x868Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x868Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x867Cu; } return 1;
case 0x867Cu: /* LDX ZP A6 EB */
    c->pc = 0x867Eu;
    ea = 0xEBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x867Eu: /* INX IMP E8 */
    c->pc = 0x867Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x867Fu: /* INX IMP E8 */
    c->pc = 0x8680u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8680u: /* LDY ZP A4 EE */
    c->pc = 0x8682u;
    ea = 0xEEu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8682u: /* JSR ABS 20 22 82 */
    push(c, 0x86u); push(c, 0x84u); c->pc = 0x8222u; c->cpu_cycles += 6u; return 1;
case 0x8685u: /* LDY IMM A0 00 */
    c->pc = 0x8687u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8687u: /* LDA IZY B1 EC */
    c->pc = 0x8689u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8689u: /* INY IMP C8 */
    c->pc = 0x868Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x868Au: /* ORA IZY 11 EC */
    c->pc = 0x868Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x868Cu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x868Eu ^ 0x868Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x868Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x868Eu; } return 1;
case 0x868Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x868Fu: /* LDY IMM A0 06 */
    c->pc = 0x8691u;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8691u: /* LDA IZY B1 EC */
    c->pc = 0x8693u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8693u: /* AND IMM 29 1F */
    c->pc = 0x8695u;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8695u: /* TAX IMP AA */
    c->pc = 0x8696u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8696u: /* JSR ABS 20 E1 88 */
    push(c, 0x86u); push(c, 0x98u); c->pc = 0x88E1u; c->cpu_cycles += 6u; return 1;
case 0x8699u: /* LDA IMM A9 0C */
    c->pc = 0x869Bu;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x869Bu: /* STA ZP 85 F4 */
    c->pc = 0x869Du;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x869Du: /* JMP ABS 4C 16 85 */
    c->pc = 0x8516u; c->cpu_cycles += 3u; return 1;
case 0x86A0u: /* LDY IMM A0 00 */
    c->pc = 0x86A2u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86A2u: /* LDA IZY B1 F0 */
    c->pc = 0x86A4u;
    ea = (uint16_t)(read16_zp(c, 0xF0u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xF0u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86A4u: /* TAX IMP AA */
    c->pc = 0x86A5u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86A5u: /* LDA IMM A9 01 */
    c->pc = 0x86A7u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86A7u: /* CLC IMP 18 */
    c->pc = 0x86A8u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x86A8u: /* ADC ZP 65 F0 */
    c->pc = 0x86AAu;
    ea = 0xF0u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x86AAu: /* STA ZP 85 F0 */
    c->pc = 0x86ACu;
    ea = 0xF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86ACu: /* LDA IMM A9 00 */
    c->pc = 0x86AEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86AEu: /* ADC ZP 65 F1 */
    c->pc = 0x86B0u;
    ea = 0xF1u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x86B0u: /* STA ZP 85 F1 */
    c->pc = 0x86B2u;
    ea = 0xF1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86B2u: /* TXA IMP 8A */
    c->pc = 0x86B3u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86B3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x86B4u: /* LDA ZP A5 E7 */
    c->pc = 0x86B6u;
    ea = 0xE7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86B6u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86B8u ^ 0x86C3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86C3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86B8u; } return 1;
case 0x86B8u: /* PHA IMP 48 */
    c->pc = 0x86B9u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86B9u: /* JSR ABS 20 C3 86 */
    push(c, 0x86u); push(c, 0xBBu); c->pc = 0x86C3u; c->cpu_cycles += 6u; return 1;
case 0x86BCu: /* PLA IMP 68 */
    c->pc = 0x86BDu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86BDu: /* SEC IMP 38 */
    c->pc = 0x86BEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x86BEu: /* SBC IMM E9 01 */
    c->pc = 0x86C0u;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x86C0u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86C2u ^ 0x86B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86C2u; } return 1;
case 0x86C2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x86C3u: /* LDY IMM A0 05 */
    c->pc = 0x86C5u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86C5u: /* LDA IZY B1 EC */
    c->pc = 0x86C7u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86C7u: /* ASL IMP 0A */
    c->pc = 0x86C8u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86C8u: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x86CAu ^ 0x86D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86CAu; } return 1;
case 0x86CAu: /* LDA ZP A5 EA */
    c->pc = 0x86CCu;
    ea = 0xEAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86CCu: /* AND IMM 29 01 */
    c->pc = 0x86CEu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86CEu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86D0u ^ 0x86D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86D0u; } return 1;
case 0x86D0u: /* JSR ABS 20 D3 86 */
    push(c, 0x86u); push(c, 0xD2u); c->pc = 0x86D3u; c->cpu_cycles += 6u; return 1;
case 0x86D3u: /* LDY IMM A0 02 */
    c->pc = 0x86D5u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86D5u: /* LDA IZY B1 EC */
    c->pc = 0x86D7u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86D7u: /* INY IMP C8 */
    c->pc = 0x86D8u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86D8u: /* ORA IZY 11 EC */
    c->pc = 0x86DAu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86DAu: /* BEQ REL F0 22 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86DCu ^ 0x86FEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86FEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86DCu; } return 1;
case 0x86DCu: /* LDX IMM A2 FF */
    c->pc = 0x86DEu;
    v = 0xFFu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86DEu: /* DEY IMP 88 */
    c->pc = 0x86DFu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86DFu: /* LDA IZY B1 EC */
    c->pc = 0x86E1u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86E1u: /* SEC IMP 38 */
    c->pc = 0x86E2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x86E2u: /* SBC IMM E9 04 */
    c->pc = 0x86E4u;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x86E4u: /* STA IZY 91 EC */
    c->pc = 0x86E6u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x86E6u: /* TXA IMP 8A */
    c->pc = 0x86E7u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86E7u: /* INY IMP C8 */
    c->pc = 0x86E8u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86E8u: /* ADC IZY 71 EC */
    c->pc = 0x86EAu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86EAu: /* STA IZY 91 EC */
    c->pc = 0x86ECu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x86ECu: /* DEY IMP 88 */
    c->pc = 0x86EDu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86EDu: /* ORA IZY 11 EC */
    c->pc = 0x86EFu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86EFu: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x86F1u ^ 0x86FEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86FEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86F1u; } return 1;
case 0x86F1u: /* LDY IMM A0 0A */
    c->pc = 0x86F3u;
    v = 0x0Au;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86F3u: /* LDA IZY B1 EC */
    c->pc = 0x86F5u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86F5u: /* INY IMP C8 */
    c->pc = 0x86F6u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86F6u: /* ORA IZY 11 EC */
    c->pc = 0x86F8u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86F8u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86FAu ^ 0x86FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86FAu; } return 1;
case 0x86FAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x86FBu: /* JMP ABS 4C EC 82 */
    c->pc = 0x82ECu; c->cpu_cycles += 3u; return 1;
case 0x86FEu: /* LDY IMM A0 05 */
    c->pc = 0x8700u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8700u: /* LDA IZY B1 EC */
    c->pc = 0x8702u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8702u: /* AND IMM 29 7F */
    c->pc = 0x8704u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8704u: /* STA IZY 91 EC */
    c->pc = 0x8706u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8706u: /* JSR ABS 20 35 89 */
    push(c, 0x87u); push(c, 0x08u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8709u: /* AND IMM 29 F0 */
    c->pc = 0x870Bu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x870Bu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x870Du ^ 0x8710u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8710u; }
    else { c->cpu_cycles += 2u; c->pc = 0x870Du; } return 1;
case 0x870Du: /* JMP ABS 4C C0 87 */
    c->pc = 0x87C0u; c->cpu_cycles += 3u; return 1;
case 0x8710u: /* CMP IMM C9 20 */
    c->pc = 0x8712u;
    v = 0x20u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8712u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8714u ^ 0x871Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x871Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8714u; } return 1;
case 0x8714u: /* TXA IMP 8A */
    c->pc = 0x8715u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8715u: /* AND IMM 29 07 */
    c->pc = 0x8717u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8717u: /* PHA IMP 48 */
    c->pc = 0x8718u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8718u: /* JSR ABS 20 06 87 */
    push(c, 0x87u); push(c, 0x1Au); c->pc = 0x8706u; c->cpu_cycles += 6u; return 1;
case 0x871Bu: /* PLA IMP 68 */
    c->pc = 0x871Cu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x871Cu: /* JMP ABS 4C A2 87 */
    c->pc = 0x87A2u; c->cpu_cycles += 3u; return 1;
case 0x871Fu: /* CMP IMM C9 30 */
    c->pc = 0x8721u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8721u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8723u ^ 0x8726u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8726u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8723u; } return 1;
case 0x8723u: /* JMP ABS 4C B5 87 */
    c->pc = 0x87B5u; c->cpu_cycles += 3u; return 1;
case 0x8726u: /* TXA IMP 8A */
    c->pc = 0x8727u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8727u: /* ROL IMP 2A */
    c->pc = 0x8728u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8728u: /* ROL IMP 2A */
    c->pc = 0x8729u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8729u: /* ROL IMP 2A */
    c->pc = 0x872Au;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x872Au: /* ROL IMP 2A */
    c->pc = 0x872Bu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x872Bu: /* AND IMM 29 07 */
    c->pc = 0x872Du;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x872Du: /* TAY IMP A8 */
    c->pc = 0x872Eu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x872Eu: /* LDA ABY B9 75 89 */
    c->pc = 0x8731u;
    ea = (uint16_t)(0x8975u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8975u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8731u: /* JSR ABS 20 54 89 */
    push(c, 0x87u); push(c, 0x33u); c->pc = 0x8954u; c->cpu_cycles += 6u; return 1;
case 0x8734u: /* LDY IMM A0 06 */
    c->pc = 0x8736u;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8736u: /* LDA IZY B1 EC */
    c->pc = 0x8738u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8738u: /* AND IMM 29 E0 */
    c->pc = 0x873Au;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x873Au: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x873Cu ^ 0x8752u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8752u; }
    else { c->cpu_cycles += 2u; c->pc = 0x873Cu; } return 1;
case 0x873Cu: /* SEC IMP 38 */
    c->pc = 0x873Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x873Du: /* SBC IMM E9 20 */
    c->pc = 0x873Fu;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x873Fu: /* STA ZP 85 F4 */
    c->pc = 0x8741u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8741u: /* LDA IZY B1 EC */
    c->pc = 0x8743u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8743u: /* AND IMM 29 1F */
    c->pc = 0x8745u;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8745u: /* ORA ZP 05 F4 */
    c->pc = 0x8747u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8747u: /* STA IZY 91 EC */
    c->pc = 0x8749u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8749u: /* LDA ZP A5 EF */
    c->pc = 0x874Bu;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x874Bu: /* LSR IMP 4A */
    c->pc = 0x874Cu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x874Cu: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x874Eu ^ 0x874Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x874Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x874Eu; } return 1;
case 0x874Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x874Fu: /* JMP ABS 4C 48 85 */
    c->pc = 0x8548u; c->cpu_cycles += 3u; return 1;
case 0x8752u: /* TXA IMP 8A */
    c->pc = 0x8753u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8753u: /* AND IMM 29 1F */
    c->pc = 0x8755u;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8755u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8757u ^ 0x875Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x875Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8757u; } return 1;
case 0x8757u: /* TAX IMP AA */
    c->pc = 0x8758u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8758u: /* JMP ABS 4C 7D 87 */
    c->pc = 0x877Du; c->cpu_cycles += 3u; return 1;
case 0x875Bu: /* LDY IMM A0 01 */
    c->pc = 0x875Du;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x875Du: /* CPY ZP C4 EE */
    c->pc = 0x875Fu;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x875Fu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8761u ^ 0x8766u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8766u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8761u; } return 1;
case 0x8761u: /* LDX IMM A2 00 */
    c->pc = 0x8763u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8763u: /* JMP ABS 4C 7D 87 */
    c->pc = 0x877Du; c->cpu_cycles += 3u; return 1;
case 0x8766u: /* ASL IMP 0A */
    c->pc = 0x8767u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8767u: /* LDY IMM A0 07 */
    c->pc = 0x8769u;
    v = 0x07u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8769u: /* CLC IMP 18 */
    c->pc = 0x876Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x876Au: /* ADC IZY 71 EC */
    c->pc = 0x876Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x876Cu: /* STA ZP 85 F4 */
    c->pc = 0x876Eu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x876Eu: /* LDA IMM A9 00 */
    c->pc = 0x8770u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8770u: /* INY IMP C8 */
    c->pc = 0x8771u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8771u: /* ADC IZY 71 EC */
    c->pc = 0x8773u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8773u: /* STA ZP 85 F5 */
    c->pc = 0x8775u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8775u: /* LDY IMM A0 01 */
    c->pc = 0x8777u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8777u: /* LDA IZY B1 F4 */
    c->pc = 0x8779u;
    ea = (uint16_t)(read16_zp(c, 0xF4u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xF4u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8779u: /* TAX IMP AA */
    c->pc = 0x877Au;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x877Au: /* DEY IMP 88 */
    c->pc = 0x877Bu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x877Bu: /* LDA IZY B1 F4 */
    c->pc = 0x877Du;
    ea = (uint16_t)(read16_zp(c, 0xF4u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xF4u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x877Du: /* LDY IMM A0 0A */
    c->pc = 0x877Fu;
    v = 0x0Au;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x877Fu: /* STA IZY 91 EC */
    c->pc = 0x8781u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8781u: /* INY IMP C8 */
    c->pc = 0x8782u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8782u: /* TXA IMP 8A */
    c->pc = 0x8783u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8783u: /* STA IZY 91 EC */
    c->pc = 0x8785u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8785u: /* LDY IMM A0 0D */
    c->pc = 0x8787u;
    v = 0x0Du;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8787u: /* LDA IZY B1 EC */
    c->pc = 0x8789u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8789u: /* STA ZP 85 F4 */
    c->pc = 0x878Bu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x878Bu: /* AND IMM 29 7F */
    c->pc = 0x878Du;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x878Du: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x878Fu ^ 0x8792u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8792u; }
    else { c->cpu_cycles += 2u; c->pc = 0x878Fu; } return 1;
case 0x878Fu: /* JSR ABS 20 A9 88 */
    push(c, 0x87u); push(c, 0x91u); c->pc = 0x88A9u; c->cpu_cycles += 6u; return 1;
case 0x8792u: /* LDA ZP A5 EF */
    c->pc = 0x8794u;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8794u: /* LSR IMP 4A */
    c->pc = 0x8795u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8795u: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8797u ^ 0x8798u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8798u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8797u; } return 1;
case 0x8797u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8798u: /* LDA IMM A9 0C */
    c->pc = 0x879Au;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x879Au: /* STA ZP 85 F4 */
    c->pc = 0x879Cu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x879Cu: /* JSR ABS 20 16 85 */
    push(c, 0x87u); push(c, 0x9Eu); c->pc = 0x8516u; c->cpu_cycles += 6u; return 1;
case 0x879Fu: /* JMP ABS 4C FD 84 */
    c->pc = 0x84FDu; c->cpu_cycles += 3u; return 1;
case 0x87A2u: /* ROR IMP 6A */
    c->pc = 0x87A3u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87A3u: /* ROR IMP 6A */
    c->pc = 0x87A4u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87A4u: /* ROR IMP 6A */
    c->pc = 0x87A5u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87A5u: /* ROR IMP 6A */
    c->pc = 0x87A6u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87A6u: /* AND IMM 29 E0 */
    c->pc = 0x87A8u;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87A8u: /* STA ZP 85 F4 */
    c->pc = 0x87AAu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87AAu: /* LDY IMM A0 06 */
    c->pc = 0x87ACu;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x87ACu: /* LDA IZY B1 EC */
    c->pc = 0x87AEu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87AEu: /* AND IMM 29 1F */
    c->pc = 0x87B0u;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87B0u: /* ORA ZP 05 F4 */
    c->pc = 0x87B2u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87B2u: /* STA IZY 91 EC */
    c->pc = 0x87B4u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x87B4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x87B5u: /* LDA IMM A9 80 */
    c->pc = 0x87B7u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87B7u: /* LDY IMM A0 05 */
    c->pc = 0x87B9u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x87B9u: /* ORA IZY 11 EC */
    c->pc = 0x87BBu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87BBu: /* STA IZY 91 EC */
    c->pc = 0x87BDu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x87BDu: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x87C0u: /* JSR ABS 20 56 85 */
    push(c, 0x87u); push(c, 0xC2u); c->pc = 0x8556u; c->cpu_cycles += 6u; return 1;
case 0x87D7u: /* JSR ABS 20 35 89 */
    push(c, 0x87u); push(c, 0xD9u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x87DAu: /* LDY IMM A0 04 */
    c->pc = 0x87DCu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x87DCu: /* STA IZY 91 EC */
    c->pc = 0x87DEu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x87DEu: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x87E1u: /* JSR ABS 20 35 89 */
    push(c, 0x87u); push(c, 0xE3u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x87E4u: /* LDY IMM A0 09 */
    c->pc = 0x87E6u;
    v = 0x09u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x87E6u: /* STA IZY 91 EC */
    c->pc = 0x87E8u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x87E8u: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x87EBu: /* JSR ABS 20 35 89 */
    push(c, 0x87u); push(c, 0xEDu); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x87EEu: /* STA ZP 85 F4 */
    c->pc = 0x87F0u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87F0u: /* LDY IMM A0 0C */
    c->pc = 0x87F2u;
    v = 0x0Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x87F2u: /* LDA IZY B1 EC */
    c->pc = 0x87F4u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87F4u: /* AND IMM 29 3F */
    c->pc = 0x87F6u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87F6u: /* ORA ZP 05 F4 */
    c->pc = 0x87F8u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87F8u: /* JMP ABS 4C 0E 88 */
    c->pc = 0x880Eu; c->cpu_cycles += 3u; return 1;
case 0x87FBu: /* JSR ABS 20 35 89 */
    push(c, 0x87u); push(c, 0xFDu); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x87FEu: /* LDY IMM A0 02 */
    c->pc = 0x8800u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8800u: /* CPY ZP C4 EE */
    c->pc = 0x8802u;
    ea = 0xEEu;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x8802u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8804u ^ 0x880Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x880Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8804u; } return 1;
case 0x8804u: /* STA ZP 85 F4 */
    c->pc = 0x8806u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8806u: /* LDY IMM A0 0C */
    c->pc = 0x8808u;
    v = 0x0Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8808u: /* LDA IZY B1 EC */
    c->pc = 0x880Au;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x880Au: /* AND IMM 29 C0 */
    c->pc = 0x880Cu;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x880Cu: /* ORA ZP 05 F4 */
    c->pc = 0x880Eu;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x880Eu: /* LDY IMM A0 0C */
    c->pc = 0x8810u;
    v = 0x0Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8810u: /* STA IZY 91 EC */
    c->pc = 0x8812u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8812u: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x8815u: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x17u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8818u: /* TXA IMP 8A */
    c->pc = 0x8819u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8819u: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x881Bu ^ 0x8831u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8831u; }
    else { c->cpu_cycles += 2u; c->pc = 0x881Bu; } return 1;
case 0x881Bu: /* LDY IMM A0 05 */
    c->pc = 0x881Du;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x881Du: /* LDA IZY B1 EC */
    c->pc = 0x881Fu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x881Fu: /* AND IMM 29 7F */
    c->pc = 0x8821u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8821u: /* STA ZP 85 F4 */
    c->pc = 0x8823u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8823u: /* CPX ZP E4 F4 */
    c->pc = 0x8825u;
    ea = 0xF4u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x8825u: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8827u ^ 0x8844u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8844u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8827u; } return 1;
case 0x8827u: /* INC ZP E6 F4 */
    c->pc = 0x8829u;
    ea = 0xF4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8829u: /* LDA IZY B1 EC */
    c->pc = 0x882Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x882Bu: /* AND IMM 29 80 */
    c->pc = 0x882Du;
    v = 0x80u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x882Du: /* ORA ZP 05 F4 */
    c->pc = 0x882Fu;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x882Fu: /* STA IZY 91 EC */
    c->pc = 0x8831u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8831u: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x33u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8834u: /* PHA IMP 48 */
    c->pc = 0x8835u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8835u: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x37u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8838u: /* PLA IMP 68 */
    c->pc = 0x8839u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8839u: /* LDY IMM A0 00 */
    c->pc = 0x883Bu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x883Bu: /* STA IZY 91 EC */
    c->pc = 0x883Du;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x883Du: /* INY IMP C8 */
    c->pc = 0x883Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x883Eu: /* TXA IMP 8A */
    c->pc = 0x883Fu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x883Fu: /* STA IZY 91 EC */
    c->pc = 0x8841u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8841u: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x8844u: /* LDA IZY B1 EC */
    c->pc = 0x8846u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8846u: /* AND IMM 29 80 */
    c->pc = 0x8848u;
    v = 0x80u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8848u: /* STA IZY 91 EC */
    c->pc = 0x884Au;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x884Au: /* LDY IMM A0 00 */
    c->pc = 0x884Cu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x884Cu: /* LDA IMM A9 02 */
    c->pc = 0x884Eu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x884Eu: /* CLC IMP 18 */
    c->pc = 0x884Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x884Fu: /* ADC IZY 71 EC */
    c->pc = 0x8851u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8851u: /* STA IZY 91 EC */
    c->pc = 0x8853u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8853u: /* INY IMP C8 */
    c->pc = 0x8854u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8854u: /* LDA IMM A9 00 */
    c->pc = 0x8856u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8856u: /* ADC IZY 71 EC */
    c->pc = 0x8858u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8858u: /* STA IZY 91 EC */
    c->pc = 0x885Au;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x885Au: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x885Du: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x5Fu); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8860u: /* LDX IMM A2 85 */
    c->pc = 0x8862u;
    v = 0x85u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8862u: /* LDY IMM A0 89 */
    c->pc = 0x8864u;
    v = 0x89u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8864u: /* STX ZP 86 F4 */
    c->pc = 0x8866u;
    ea = 0xF4u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8866u: /* STY ZP 84 F5 */
    c->pc = 0x8868u;
    ea = 0xF5u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8868u: /* ASL IMP 0A */
    c->pc = 0x8869u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8869u: /* LDY IMM A0 07 */
    c->pc = 0x886Bu;
    v = 0x07u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x886Bu: /* CLC IMP 18 */
    c->pc = 0x886Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x886Cu: /* ADC ZP 65 F4 */
    c->pc = 0x886Eu;
    ea = 0xF4u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x886Eu: /* STA IZY 91 EC */
    c->pc = 0x8870u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8870u: /* LDA IMM A9 00 */
    c->pc = 0x8872u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8872u: /* ADC ZP 65 F5 */
    c->pc = 0x8874u;
    ea = 0xF5u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8874u: /* INY IMP C8 */
    c->pc = 0x8875u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8875u: /* STA IZY 91 EC */
    c->pc = 0x8877u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8877u: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x887Au: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x7Cu); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x887Du: /* ROL IMP 2A */
    c->pc = 0x887Eu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x887Eu: /* ROL IMP 2A */
    c->pc = 0x887Fu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x887Fu: /* ROL IMP 2A */
    c->pc = 0x8880u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8880u: /* ROL IMP 2A */
    c->pc = 0x8881u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8881u: /* AND IMM 29 07 */
    c->pc = 0x8883u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8883u: /* TAY IMP A8 */
    c->pc = 0x8884u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8884u: /* LDA ABY B9 7D 89 */
    c->pc = 0x8887u;
    ea = (uint16_t)(0x897Du + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x897Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8887u: /* JSR ABS 20 54 89 */
    push(c, 0x88u); push(c, 0x89u); c->pc = 0x8954u; c->cpu_cycles += 6u; return 1;
case 0x888Au: /* JMP ABS 4C 34 87 */
    c->pc = 0x8734u; c->cpu_cycles += 3u; return 1;
case 0x888Du: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x8Fu); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8890u: /* LDY IMM A0 0D */
    c->pc = 0x8892u;
    v = 0x0Du;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8892u: /* STA IZY 91 EC */
    c->pc = 0x8894u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8894u: /* PHA IMP 48 */
    c->pc = 0x8895u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8895u: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0x97u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x8898u: /* LDY IMM A0 0F */
    c->pc = 0x889Au;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x889Au: /* STA IZY 91 EC */
    c->pc = 0x889Cu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x889Cu: /* PLA IMP 68 */
    c->pc = 0x889Du;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x889Du: /* STA ZP 85 F4 */
    c->pc = 0x889Fu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x889Fu: /* AND IMM 29 7F */
    c->pc = 0x88A1u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88A1u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x88A3u ^ 0x88A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88A3u; } return 1;
case 0x88A3u: /* JSR ABS 20 A9 88 */
    push(c, 0x88u); push(c, 0xA5u); c->pc = 0x88A9u; c->cpu_cycles += 6u; return 1;
case 0x88A6u: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x88A9u: /* LDA IMM A9 00 */
    c->pc = 0x88ABu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88ABu: /* LDY IMM A0 0E */
    c->pc = 0x88ADu;
    v = 0x0Eu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x88ADu: /* STA IZY 91 EC */
    c->pc = 0x88AFu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x88AFu: /* LDA ZP A5 F4 */
    c->pc = 0x88B1u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88B1u: /* BPL REL 10 05 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x88B3u ^ 0x88B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88B3u; } return 1;
case 0x88B3u: /* LDA IMM A9 0F */
    c->pc = 0x88B5u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88B5u: /* JMP ABS 4C BA 88 */
    c->pc = 0x88BAu; c->cpu_cycles += 3u; return 1;
case 0x88B8u: /* LDA IMM A9 00 */
    c->pc = 0x88BAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88BAu: /* STA ZP 85 F4 */
    c->pc = 0x88BCu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88BCu: /* LDY IMM A0 0F */
    c->pc = 0x88BEu;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x88BEu: /* LDA IZY B1 EC */
    c->pc = 0x88C0u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x88C0u: /* AND IMM 29 F0 */
    c->pc = 0x88C2u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88C2u: /* ORA ZP 05 F4 */
    c->pc = 0x88C4u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88C4u: /* STA IZY 91 EC */
    c->pc = 0x88C6u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x88C6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88C7u: /* JSR ABS 20 35 89 */
    push(c, 0x88u); push(c, 0xC9u); c->pc = 0x8935u; c->cpu_cycles += 6u; return 1;
case 0x88CAu: /* STA ZP 85 F4 */
    c->pc = 0x88CCu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88CCu: /* LDY IMM A0 06 */
    c->pc = 0x88CEu;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x88CEu: /* LDA IZY B1 EC */
    c->pc = 0x88D0u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x88D0u: /* AND IMM 29 E0 */
    c->pc = 0x88D2u;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88D2u: /* ORA ZP 05 F4 */
    c->pc = 0x88D4u;
    ea = 0xF4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88D4u: /* STA IZY 91 EC */
    c->pc = 0x88D6u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x88D6u: /* LDA ZP A5 EF */
    c->pc = 0x88D8u;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88D8u: /* LSR IMP 4A */
    c->pc = 0x88D9u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88D9u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x88DBu ^ 0x88DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x88DBu; } return 1;
case 0x88DBu: /* JSR ABS 20 E1 88 */
    push(c, 0x88u); push(c, 0xDDu); c->pc = 0x88E1u; c->cpu_cycles += 6u; return 1;
case 0x88DEu: /* JMP ABS 4C 06 87 */
    c->pc = 0x8706u; c->cpu_cycles += 3u; return 1;
case 0x88E1u: /* TXA IMP 8A */
    c->pc = 0x88E2u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88E2u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x88E4u ^ 0x88ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0x88E4u; } return 1;
case 0x88E4u: /* LDA IMM A9 00 */
    c->pc = 0x88E6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88E6u: /* CLC IMP 18 */
    c->pc = 0x88E7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x88E7u: /* ADC IMM 69 04 */
    c->pc = 0x88E9u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x88E9u: /* DEX IMP CA */
    c->pc = 0x88EAu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x88EAu: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x88ECu ^ 0x88E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88ECu; } return 1;
case 0x88ECu: /* CLC IMP 18 */
    c->pc = 0x88EDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x88EDu: /* ADC ABS 6D 7C 05 */
    c->pc = 0x88F0u;
    ea = 0x057Cu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x88F0u: /* STA ZP 85 F4 */
    c->pc = 0x88F2u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88F2u: /* LDA IMM A9 00 */
    c->pc = 0x88F4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88F4u: /* ADC ABS 6D 7D 05 */
    c->pc = 0x88F7u;
    ea = 0x057Du;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x88F7u: /* STA ZP 85 F5 */
    c->pc = 0x88F9u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88F9u: /* LDX IMM A2 00 */
    c->pc = 0x88FBu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x88FBu: /* LDY IMM A0 14 */
    c->pc = 0x88FDu;
    v = 0x14u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x88FDu: /* LDA IZX A1 F4 */
    c->pc = 0x88FFu;
    ea = read16_zp(c, (uint8_t)(0xF4u + c->x));
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x88FFu: /* STA IZY 91 EC */
    c->pc = 0x8901u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8901u: /* INY IMP C8 */
    c->pc = 0x8902u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8902u: /* CPY IMM C0 18 */
    c->pc = 0x8904u;
    v = 0x18u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8904u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8906u ^ 0x8907u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8907u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8906u; } return 1;
case 0x8906u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8907u: /* LDA IMM A9 01 */
    c->pc = 0x8909u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8909u: /* CLC IMP 18 */
    c->pc = 0x890Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x890Au: /* ADC ZP 65 F4 */
    c->pc = 0x890Cu;
    ea = 0xF4u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x890Cu: /* STA ZP 85 F4 */
    c->pc = 0x890Eu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x890Eu: /* LDA IMM A9 00 */
    c->pc = 0x8910u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8910u: /* ADC ZP 65 F5 */
    c->pc = 0x8912u;
    ea = 0xF5u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8912u: /* STA ZP 85 F5 */
    c->pc = 0x8914u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8914u: /* JMP ABS 4C FD 88 */
    c->pc = 0x88FDu; c->cpu_cycles += 3u; return 1;
case 0x8917u: /* LDY IMM A0 00 */
    c->pc = 0x8919u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8919u: /* LDA IMM A9 00 */
    c->pc = 0x891Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x891Bu: /* STA IZY 91 EC */
    c->pc = 0x891Du;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x891Du: /* INY IMP C8 */
    c->pc = 0x891Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x891Eu: /* STA IZY 91 EC */
    c->pc = 0x8920u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8920u: /* LDA ZP A5 E0 */
    c->pc = 0x8922u;
    ea = 0xE0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8922u: /* AND IMM 29 F0 */
    c->pc = 0x8924u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8924u: /* STA ZP 85 E0 */
    c->pc = 0x8926u;
    ea = 0xE0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8926u: /* LDA ZP A5 EF */
    c->pc = 0x8928u;
    ea = 0xEFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8928u: /* LSR IMP 4A */
    c->pc = 0x8929u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8929u: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x892Bu ^ 0x892Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x892Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x892Bu; } return 1;
case 0x892Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x892Cu: /* LDX ZP A6 EB */
    c->pc = 0x892Eu;
    ea = 0xEBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x892Eu: /* INX IMP E8 */
    c->pc = 0x892Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x892Fu: /* INX IMP E8 */
    c->pc = 0x8930u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8930u: /* LDY ZP A4 EE */
    c->pc = 0x8932u;
    ea = 0xEEu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8932u: /* JMP ABS 4C 22 82 */
    c->pc = 0x8222u; c->cpu_cycles += 3u; return 1;
case 0x8935u: /* LDY IMM A0 00 */
    c->pc = 0x8937u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8937u: /* LDA IZY B1 EC */
    c->pc = 0x8939u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8939u: /* STA ZP 85 F4 */
    c->pc = 0x893Bu;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x893Bu: /* INY IMP C8 */
    c->pc = 0x893Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x893Cu: /* LDA IZY B1 EC */
    c->pc = 0x893Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x893Eu: /* STA ZP 85 F5 */
    c->pc = 0x8940u;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8940u: /* DEY IMP 88 */
    c->pc = 0x8941u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8941u: /* LDA IZY B1 F4 */
    c->pc = 0x8943u;
    ea = (uint16_t)(read16_zp(c, 0xF4u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xF4u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8943u: /* TAX IMP AA */
    c->pc = 0x8944u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8944u: /* LDA IMM A9 01 */
    c->pc = 0x8946u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8946u: /* CLC IMP 18 */
    c->pc = 0x8947u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8947u: /* ADC ZP 65 F4 */
    c->pc = 0x8949u;
    ea = 0xF4u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8949u: /* STA IZY 91 EC */
    c->pc = 0x894Bu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x894Bu: /* LDA IMM A9 00 */
    c->pc = 0x894Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x894Du: /* ADC ZP 65 F5 */
    c->pc = 0x894Fu;
    ea = 0xF5u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x894Fu: /* INY IMP C8 */
    c->pc = 0x8950u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8950u: /* STA IZY 91 EC */
    c->pc = 0x8952u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8952u: /* TXA IMP 8A */
    c->pc = 0x8953u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8953u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8954u: /* STA ZP 85 F4 */
    c->pc = 0x8956u;
    ea = 0xF4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8956u: /* LDA IMM A9 00 */
    c->pc = 0x8958u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8958u: /* STA ZP 85 F5 */
    c->pc = 0x895Au;
    ea = 0xF5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x895Au: /* LDY IMM A0 04 */
    c->pc = 0x895Cu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x895Cu: /* LDA IZY B1 EC */
    c->pc = 0x895Eu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xECu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x895Eu: /* TAY IMP A8 */
    c->pc = 0x895Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x895Fu: /* LDA IMM A9 00 */
    c->pc = 0x8961u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8961u: /* CLC IMP 18 */
    c->pc = 0x8962u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8962u: /* ADC ZP 65 F4 */
    c->pc = 0x8964u;
    ea = 0xF4u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8964u: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8966u ^ 0x8968u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8968u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8966u; } return 1;
case 0x8966u: /* INC ZP E6 F5 */
    c->pc = 0x8968u;
    ea = 0xF5u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8968u: /* DEY IMP 88 */
    c->pc = 0x8969u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8969u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x896Bu ^ 0x8961u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8961u; }
    else { c->cpu_cycles += 2u; c->pc = 0x896Bu; } return 1;
case 0x896Bu: /* LDY IMM A0 02 */
    c->pc = 0x896Du;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x896Du: /* STA IZY 91 EC */
    c->pc = 0x896Fu;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x896Fu: /* INY IMP C8 */
    c->pc = 0x8970u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8970u: /* LDA ZP A5 F5 */
    c->pc = 0x8972u;
    ea = 0xF5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8972u: /* STA IZY 91 EC */
    c->pc = 0x8974u;
    ea = (uint16_t)(read16_zp(c, 0xECu) + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 6u; return 1;
case 0x8974u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
    }
    return 0;
}
