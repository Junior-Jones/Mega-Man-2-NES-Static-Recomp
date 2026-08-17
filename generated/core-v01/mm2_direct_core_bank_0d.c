/* Generated from the accepted v0.06 identity ledger. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_0d(MM2DirectCore *c, uint16_t pc) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    switch (pc) {
case 0x8000u: /* JMP ABS 4C 15 80 */
    c->pc = 0x8015u; c->cpu_cycles += 3u; return 1;
case 0x8003u: /* JMP ABS 4C EC 90 */
    c->pc = 0x90ECu; c->cpu_cycles += 3u; return 1;
case 0x8006u: /* JMP ABS 4C 78 96 */
    c->pc = 0x9678u; c->cpu_cycles += 3u; return 1;
case 0x8009u: /* JMP ABS 4C E7 9E */
    c->pc = 0x9EE7u; c->cpu_cycles += 3u; return 1;
case 0x800Cu: /* JMP ABS 4C 01 B1 */
    c->pc = 0xB101u; c->cpu_cycles += 3u; return 1;
case 0x800Fu: /* JMP ABS 4C F1 B6 */
    c->pc = 0xB6F1u; c->cpu_cycles += 3u; return 1;
case 0x8012u: /* JMP ABS 4C E0 BA */
    c->pc = 0xBAE0u; c->cpu_cycles += 3u; return 1;
case 0x8015u: /* LDA IMM A9 10 */
    c->pc = 0x8017u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8017u: /* STA ZP 85 F7 */
    c->pc = 0x8019u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8019u: /* STA ABS 8D 00 20 */
    c->pc = 0x801Cu;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x801Cu: /* LDA IMM A9 06 */
    c->pc = 0x801Eu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x801Eu: /* STA ZP 85 F8 */
    c->pc = 0x8020u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8020u: /* STA ABS 8D 01 20 */
    c->pc = 0x8023u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8023u: /* JSR ABS 20 7E 84 */
    push(c, 0x80u); push(c, 0x25u); c->pc = 0x847Eu; c->cpu_cycles += 6u; return 1;
case 0x8026u: /* JSR ABS 20 3C 84 */
    push(c, 0x80u); push(c, 0x28u); c->pc = 0x843Cu; c->cpu_cycles += 6u; return 1;
case 0x8029u: /* LDX IMM A2 00 */
    c->pc = 0x802Bu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x802Bu: /* LDA ZP A5 9A */
    c->pc = 0x802Du;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x802Du: /* STA ZP 85 01 */
    c->pc = 0x802Fu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x802Fu: /* STX ZP 86 00 */
    c->pc = 0x8031u;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8031u: /* LSR ZP 46 01 */
    c->pc = 0x8033u;
    ea = 0x01u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8033u: /* BCC REL 90 2C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8035u ^ 0x8061u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8061u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8035u; } return 1;
case 0x8035u: /* LDA ABX BD 31 85 */
    c->pc = 0x8038u;
    ea = (uint16_t)(0x8531u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8531u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8038u: /* STA ZP 85 09 */
    c->pc = 0x803Au;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x803Au: /* LDA ABX BD 39 85 */
    c->pc = 0x803Du;
    ea = (uint16_t)(0x8539u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8539u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x803Du: /* STA ZP 85 08 */
    c->pc = 0x803Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x803Fu: /* LDX IMM A2 04 */
    c->pc = 0x8041u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8041u: /* LDA IMM A9 00 */
    c->pc = 0x8043u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8043u: /* LDA ZP A5 09 */
    c->pc = 0x8045u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8045u: /* STA ABS 8D 06 20 */
    c->pc = 0x8048u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8048u: /* LDA ZP A5 08 */
    c->pc = 0x804Au;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x804Au: /* STA ABS 8D 06 20 */
    c->pc = 0x804Du;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x804Du: /* LDY IMM A0 04 */
    c->pc = 0x804Fu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x804Fu: /* LDA IMM A9 00 */
    c->pc = 0x8051u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8051u: /* STA ABS 8D 07 20 */
    c->pc = 0x8054u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8054u: /* DEY IMP 88 */
    c->pc = 0x8055u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8055u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8057u ^ 0x8051u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8051u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8057u; } return 1;
case 0x8057u: /* CLC IMP 18 */
    c->pc = 0x8058u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8058u: /* LDA ZP A5 08 */
    c->pc = 0x805Au;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x805Au: /* ADC IMM 69 20 */
    c->pc = 0x805Cu;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x805Cu: /* STA ZP 85 08 */
    c->pc = 0x805Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x805Eu: /* DEX IMP CA */
    c->pc = 0x805Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x805Fu: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8061u ^ 0x8043u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8043u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8061u; } return 1;
case 0x8061u: /* LDX ZP A6 00 */
    c->pc = 0x8063u;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8063u: /* INX IMP E8 */
    c->pc = 0x8064u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8064u: /* CPX IMM E0 08 */
    c->pc = 0x8066u;
    v = 0x08u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8066u: /* BNE REL D0 C7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8068u ^ 0x802Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x802Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8068u; } return 1;
case 0x8068u: /* LDX IMM A2 1F */
    c->pc = 0x806Au;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x806Au: /* JSR ABS 20 9E 82 */
    push(c, 0x80u); push(c, 0x6Cu); c->pc = 0x829Eu; c->cpu_cycles += 6u; return 1;
case 0x806Du: /* JSR ABS 20 73 84 */
    push(c, 0x80u); push(c, 0x6Fu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x8070u: /* LDX IMM A2 00 */
    c->pc = 0x8072u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8072u: /* LDA ZP A5 9A */
    c->pc = 0x8074u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8074u: /* STA ZP 85 02 */
    c->pc = 0x8076u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8076u: /* LDY IMM A0 00 */
    c->pc = 0x8078u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8078u: /* STX ZP 86 01 */
    c->pc = 0x807Au;
    ea = 0x01u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x807Au: /* LSR ZP 46 02 */
    c->pc = 0x807Cu;
    ea = 0x02u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x807Cu: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x807Eu ^ 0x8093u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8093u; }
    else { c->cpu_cycles += 2u; c->pc = 0x807Eu; } return 1;
case 0x807Eu: /* LDA ABX BD 05 86 */
    c->pc = 0x8081u;
    ea = (uint16_t)(0x8605u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8605u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8081u: /* STA ZP 85 00 */
    c->pc = 0x8083u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8083u: /* LDA ABX BD FD 85 */
    c->pc = 0x8086u;
    ea = (uint16_t)(0x85FDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x85FDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8086u: /* TAX IMP AA */
    c->pc = 0x8087u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8087u: /* LDA ABX BD 41 85 */
    c->pc = 0x808Au;
    ea = (uint16_t)(0x8541u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8541u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x808Au: /* STA ABY 99 00 02 */
    c->pc = 0x808Du;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x808Du: /* INY IMP C8 */
    c->pc = 0x808Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x808Eu: /* INX IMP E8 */
    c->pc = 0x808Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x808Fu: /* DEC ZP C6 00 */
    c->pc = 0x8091u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8091u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8093u ^ 0x8087u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8087u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8093u; } return 1;
case 0x8093u: /* LDX ZP A6 01 */
    c->pc = 0x8095u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8095u: /* INX IMP E8 */
    c->pc = 0x8096u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8096u: /* CPX IMM E0 08 */
    c->pc = 0x8098u;
    v = 0x08u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8098u: /* BNE REL D0 DE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x809Au ^ 0x8078u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8078u; }
    else { c->cpu_cycles += 2u; c->pc = 0x809Au; } return 1;
case 0x809Au: /* JSR ABS 20 1D A5 */
    push(c, 0x80u); push(c, 0x9Cu); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0x809Du: /* LDA IMM A9 0C */
    c->pc = 0x809Fu;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x809Fu: /* JSR ABS 20 51 C0 */
    push(c, 0x80u); push(c, 0xA1u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x80A2u: /* LDA IMM A9 00 */
    c->pc = 0x80A4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80A4u: /* STA ZP 85 2A */
    c->pc = 0x80A6u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80A6u: /* STA ZP 85 FD */
    c->pc = 0x80A8u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80A8u: /* JSR ABS 20 AB C0 */
    push(c, 0x80u); push(c, 0xAAu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x80ABu: /* LDA ZP A5 27 */
    c->pc = 0x80ADu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80ADu: /* AND IMM 29 08 */
    c->pc = 0x80AFu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80AFu: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x80B1u ^ 0x80C8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80B1u; } return 1;
case 0x80B1u: /* LDA ZP A5 27 */
    c->pc = 0x80B3u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80B3u: /* AND IMM 29 F0 */
    c->pc = 0x80B5u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B5u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x80B7u ^ 0x80BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x80B7u; } return 1;
case 0x80B7u: /* LDA IMM A9 2F */
    c->pc = 0x80B9u;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B9u: /* JSR ABS 20 51 C0 */
    push(c, 0x80u); push(c, 0xBBu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x80BCu: /* JSR ABS 20 AB 82 */
    push(c, 0x80u); push(c, 0xBEu); c->pc = 0x82ABu; c->cpu_cycles += 6u; return 1;
case 0x80BFu: /* JSR ABS 20 12 83 */
    push(c, 0x80u); push(c, 0xC1u); c->pc = 0x8312u; c->cpu_cycles += 6u; return 1;
case 0x80C2u: /* JSR ABS 20 AB C0 */
    push(c, 0x80u); push(c, 0xC4u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x80C5u: /* JMP ABS 4C AB 80 */
    c->pc = 0x80ABu; c->cpu_cycles += 3u; return 1;
case 0x80C8u: /* LDX ZP A6 2A */
    c->pc = 0x80CAu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x80CAu: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x80CCu ^ 0x80D9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80D9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80CCu; } return 1;
case 0x80CCu: /* LDA ZP A5 9A */
    c->pc = 0x80CEu;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80CEu: /* CMP IMM C9 FF */
    c->pc = 0x80D0u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x80D0u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x80D2u ^ 0x80BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x80D2u; } return 1;
case 0x80D2u: /* LDA IMM A9 08 */
    c->pc = 0x80D4u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80D4u: /* STA ZP 85 2A */
    c->pc = 0x80D6u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80D6u: /* JMP ABS 4C 9A 82 */
    c->pc = 0x829Au; c->cpu_cycles += 3u; return 1;
case 0x80D9u: /* LDY ABX BC 5F 86 */
    c->pc = 0x80DCu;
    ea = (uint16_t)(0x865Fu + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x865Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80DCu: /* LDA ZP A5 9A */
    c->pc = 0x80DEu;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80DEu: /* AND ABY 39 D1 86 */
    c->pc = 0x80E1u;
    ea = (uint16_t)(0x86D1u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x86D1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80E1u: /* BNE REL D0 DC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x80E3u ^ 0x80BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x80E3u; } return 1;
case 0x80E3u: /* STY ZP 84 2A */
    c->pc = 0x80E5u;
    ea = 0x2Au;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x80E5u: /* LDA IMM A9 3A */
    c->pc = 0x80E7u;
    v = 0x3Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80E7u: /* JSR ABS 20 51 C0 */
    push(c, 0x80u); push(c, 0xE9u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x80EAu: /* LDA ZP A5 2A */
    c->pc = 0x80ECu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80ECu: /* ASL IMP 0A */
    c->pc = 0x80EDu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80EDu: /* STA ZP 85 00 */
    c->pc = 0x80EFu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80EFu: /* ASL IMP 0A */
    c->pc = 0x80F0u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80F0u: /* ADC ZP 65 00 */
    c->pc = 0x80F2u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x80F2u: /* TAX IMP AA */
    c->pc = 0x80F3u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x80F3u: /* LDY IMM A0 00 */
    c->pc = 0x80F5u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x80F5u: /* LDA ABX BD 71 86 */
    c->pc = 0x80F8u;
    ea = (uint16_t)(0x8671u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8671u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80F8u: /* STA ABY 99 60 04 */
    c->pc = 0x80FBu;
    ea = (uint16_t)(0x0460u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x80FBu: /* LDA ABX BD A1 86 */
    c->pc = 0x80FEu;
    ea = (uint16_t)(0x86A1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x86A1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80FEu: /* STA ABY 99 40 04 */
    c->pc = 0x8101u;
    ea = (uint16_t)(0x0440u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8101u: /* LDA IMM A9 00 */
    c->pc = 0x8103u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8103u: /* STA ABY 99 80 04 */
    c->pc = 0x8106u;
    ea = (uint16_t)(0x0480u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8106u: /* INX IMP E8 */
    c->pc = 0x8107u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8107u: /* INY IMP C8 */
    c->pc = 0x8108u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8108u: /* CPY IMM C0 06 */
    c->pc = 0x810Au;
    v = 0x06u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x810Au: /* BNE REL D0 E9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x810Cu ^ 0x80F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x810Cu; } return 1;
case 0x810Cu: /* LDA IMM A9 0A */
    c->pc = 0x810Eu;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x810Eu: /* STA ABS 8D A0 04 */
    c->pc = 0x8111u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8111u: /* LDA IMM A9 00 */
    c->pc = 0x8113u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8113u: /* STA ABS 8D C0 04 */
    c->pc = 0x8116u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8116u: /* STA ABS 8D 80 06 */
    c->pc = 0x8119u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8119u: /* LDA IMM A9 30 */
    c->pc = 0x811Bu;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x811Bu: /* STA ZP 85 FD */
    c->pc = 0x811Du;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x811Du: /* LDX IMM A2 3F */
    c->pc = 0x811Fu;
    v = 0x3Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x811Fu: /* LDA ZP A5 FD */
    c->pc = 0x8121u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8121u: /* AND IMM 29 04 */
    c->pc = 0x8123u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8123u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8125u ^ 0x8127u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8127u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8125u; } return 1;
case 0x8125u: /* LDX IMM A2 1F */
    c->pc = 0x8127u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8127u: /* JSR ABS 20 9E 82 */
    push(c, 0x81u); push(c, 0x29u); c->pc = 0x829Eu; c->cpu_cycles += 6u; return 1;
case 0x812Au: /* LDX ABS AE 80 06 */
    c->pc = 0x812Du;
    ea = 0x0680u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x812Du: /* CLC IMP 18 */
    c->pc = 0x812Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x812Eu: /* LDA ABX BD 80 04 */
    c->pc = 0x8131u;
    ea = (uint16_t)(0x0480u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0480u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8131u: /* STA ZP 85 08 */
    c->pc = 0x8133u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8133u: /* ADC IMM 69 20 */
    c->pc = 0x8135u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8135u: /* STA ABX 9D 80 04 */
    c->pc = 0x8138u;
    ea = (uint16_t)(0x0480u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8138u: /* PHP IMP 08 */
    c->pc = 0x8139u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x8139u: /* LDA ABX BD 60 04 */
    c->pc = 0x813Cu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x813Cu: /* STA ZP 85 09 */
    c->pc = 0x813Eu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x813Eu: /* ADC IMM 69 00 */
    c->pc = 0x8140u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8140u: /* STA ABX 9D 60 04 */
    c->pc = 0x8143u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8143u: /* PLP IMP 28 */
    c->pc = 0x8144u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x8144u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8146u ^ 0x8149u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8149u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8146u; } return 1;
case 0x8146u: /* INC ABS EE 80 06 */
    c->pc = 0x8149u;
    ea = 0x0680u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8149u: /* LDA ABX BD 40 04 */
    c->pc = 0x814Cu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x814Cu: /* JSR ABS 20 0C C7 */
    push(c, 0x81u); push(c, 0x4Eu); c->pc = 0xC70Cu; c->cpu_cycles += 6u; return 1;
case 0x814Fu: /* CLC IMP 18 */
    c->pc = 0x8150u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8150u: /* LDA ABS AD C0 04 */
    c->pc = 0x8153u;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8153u: /* STA ABS 8D B7 03 */
    c->pc = 0x8156u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8156u: /* ADC IMM 69 20 */
    c->pc = 0x8158u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8158u: /* STA ABS 8D C0 04 */
    c->pc = 0x815Bu;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x815Bu: /* LDA ABS AD A0 04 */
    c->pc = 0x815Eu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x815Eu: /* STA ABS 8D B6 03 */
    c->pc = 0x8161u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8161u: /* ADC IMM 69 00 */
    c->pc = 0x8163u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8163u: /* STA ABS 8D A0 04 */
    c->pc = 0x8166u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8166u: /* DEC ZP C6 FD */
    c->pc = 0x8168u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8168u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x816Au ^ 0x8170u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8170u; }
    else { c->cpu_cycles += 2u; c->pc = 0x816Au; } return 1;
case 0x816Au: /* JSR ABS 20 AB C0 */
    push(c, 0x81u); push(c, 0x6Cu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x816Du: /* JMP ABS 4C 1D 81 */
    c->pc = 0x811Du; c->cpu_cycles += 3u; return 1;
case 0x8170u: /* LDX IMM A2 1F */
    c->pc = 0x8172u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8172u: /* JSR ABS 20 9E 82 */
    push(c, 0x81u); push(c, 0x74u); c->pc = 0x829Eu; c->cpu_cycles += 6u; return 1;
case 0x8175u: /* LDA IMM A9 2C */
    c->pc = 0x8177u;
    v = 0x2Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8177u: /* STA ABS 8D 58 03 */
    c->pc = 0x817Au;
    ea = 0x0358u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x817Au: /* LDA IMM A9 11 */
    c->pc = 0x817Cu;
    v = 0x11u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x817Cu: /* STA ABS 8D 59 03 */
    c->pc = 0x817Fu;
    ea = 0x0359u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x817Fu: /* LDY IMM A0 07 */
    c->pc = 0x8181u;
    v = 0x07u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8181u: /* LDA ABY B9 D9 84 */
    c->pc = 0x8184u;
    ea = (uint16_t)(0x84D9u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84D9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8184u: /* STA ABY 99 66 03 */
    c->pc = 0x8187u;
    ea = (uint16_t)(0x0366u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8187u: /* DEY IMP 88 */
    c->pc = 0x8188u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8188u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x818Au ^ 0x8181u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8181u; }
    else { c->cpu_cycles += 2u; c->pc = 0x818Au; } return 1;
case 0x818Au: /* LDA ZP A5 2A */
    c->pc = 0x818Cu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x818Cu: /* ASL IMP 0A */
    c->pc = 0x818Du;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x818Du: /* ASL IMP 0A */
    c->pc = 0x818Eu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x818Eu: /* ASL IMP 0A */
    c->pc = 0x818Fu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x818Fu: /* TAX IMP AA */
    c->pc = 0x8190u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8190u: /* LDY IMM A0 00 */
    c->pc = 0x8192u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8192u: /* LDA ABX BD E1 84 */
    c->pc = 0x8195u;
    ea = (uint16_t)(0x84E1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84E1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8195u: /* STA ABY 99 6E 03 */
    c->pc = 0x8198u;
    ea = (uint16_t)(0x036Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8198u: /* INX IMP E8 */
    c->pc = 0x8199u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8199u: /* INY IMP C8 */
    c->pc = 0x819Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x819Au: /* CPY IMM C0 08 */
    c->pc = 0x819Cu;
    v = 0x08u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x819Cu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x819Eu ^ 0x8192u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8192u; }
    else { c->cpu_cycles += 2u; c->pc = 0x819Eu; } return 1;
case 0x819Eu: /* LDA IMM A9 01 */
    c->pc = 0x81A0u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81A0u: /* STA ZP 85 20 */
    c->pc = 0x81A2u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81A2u: /* JSR ABS 20 23 C7 */
    push(c, 0x81u); push(c, 0xA4u); c->pc = 0xC723u; c->cpu_cycles += 6u; return 1;
case 0x81A5u: /* LDA IMM A9 18 */
    c->pc = 0x81A7u;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81A7u: /* STA ZP 85 FD */
    c->pc = 0x81A9u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81A9u: /* LDA IMM A9 0A */
    c->pc = 0x81ABu;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81ABu: /* JSR ABS 20 51 C0 */
    push(c, 0x81u); push(c, 0xADu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x81AEu: /* JSR ABS 20 73 84 */
    push(c, 0x81u); push(c, 0xB0u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x81B1u: /* JSR ABS 20 AB C0 */
    push(c, 0x81u); push(c, 0xB3u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x81B4u: /* DEC ZP C6 FD */
    c->pc = 0x81B6u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x81B6u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81B8u ^ 0x81AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81B8u; } return 1;
case 0x81B8u: /* JSR ABS 20 65 84 */
    push(c, 0x81u); push(c, 0xBAu); c->pc = 0x8465u; c->cpu_cycles += 6u; return 1;
case 0x81BBu: /* LDA IMM A9 80 */
    c->pc = 0x81BDu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81BDu: /* STA ABS 8D 60 04 */
    c->pc = 0x81C0u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81C0u: /* LDA IMM A9 20 */
    c->pc = 0x81C2u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81C2u: /* STA ABS 8D A0 04 */
    c->pc = 0x81C5u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81C5u: /* LDA IMM A9 00 */
    c->pc = 0x81C7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81C7u: /* STA ABS 8D 80 06 */
    c->pc = 0x81CAu;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81CAu: /* STA ABS 8D A0 06 */
    c->pc = 0x81CDu;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81CDu: /* LDA IMM A9 00 */
    c->pc = 0x81CFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81CFu: /* STA ABS 8D 80 06 */
    c->pc = 0x81D2u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81D2u: /* CLC IMP 18 */
    c->pc = 0x81D3u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x81D3u: /* LDA ABS AD A0 04 */
    c->pc = 0x81D6u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81D6u: /* ADC IMM 69 08 */
    c->pc = 0x81D8u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x81D8u: /* STA ABS 8D A0 04 */
    c->pc = 0x81DBu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81DBu: /* CMP IMM C9 78 */
    c->pc = 0x81DDu;
    v = 0x78u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x81DDu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x81DFu ^ 0x81EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81DFu; } return 1;
case 0x81DFu: /* JSR ABS 20 73 84 */
    push(c, 0x81u); push(c, 0xE1u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x81E2u: /* JSR ABS 20 D5 83 */
    push(c, 0x81u); push(c, 0xE4u); c->pc = 0x83D5u; c->cpu_cycles += 6u; return 1;
case 0x81E5u: /* JSR ABS 20 58 83 */
    push(c, 0x81u); push(c, 0xE7u); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0x81E8u: /* JSR ABS 20 AB C0 */
    push(c, 0x81u); push(c, 0xEAu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x81EBu: /* JMP ABS 4C CD 81 */
    c->pc = 0x81CDu; c->cpu_cycles += 3u; return 1;
case 0x81EEu: /* INC ABS EE A0 06 */
    c->pc = 0x81F1u;
    ea = 0x06A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x81F1u: /* LDA ZP A5 23 */
    c->pc = 0x81F3u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81F3u: /* AND IMM 29 01 */
    c->pc = 0x81F5u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81F5u: /* STA ABS 8D 20 04 */
    c->pc = 0x81F8u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81F8u: /* LDA IMM A9 00 */
    c->pc = 0x81FAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81FAu: /* STA ZP 85 FD */
    c->pc = 0x81FCu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81FCu: /* LDA IMM A9 08 */
    c->pc = 0x81FEu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81FEu: /* STA ZP 85 FE */
    c->pc = 0x8200u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8200u: /* LDA IMM A9 00 */
    c->pc = 0x8202u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8202u: /* STA ABS 8D 80 06 */
    c->pc = 0x8205u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8205u: /* DEC ZP C6 FE */
    c->pc = 0x8207u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8207u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8209u ^ 0x8223u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8223u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8209u; } return 1;
case 0x8209u: /* LDA IMM A9 08 */
    c->pc = 0x820Bu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x820Bu: /* STA ZP 85 FE */
    c->pc = 0x820Du;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x820Du: /* LDX ZP A6 FD */
    c->pc = 0x820Fu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x820Fu: /* LDA ABX BD 21 85 */
    c->pc = 0x8212u;
    ea = (uint16_t)(0x8521u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8521u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8212u: /* STA ABS 8D 68 03 */
    c->pc = 0x8215u;
    ea = 0x0368u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8215u: /* LDA ABX BD 22 85 */
    c->pc = 0x8218u;
    ea = (uint16_t)(0x8522u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8522u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8218u: /* STA ABS 8D 69 03 */
    c->pc = 0x821Bu;
    ea = 0x0369u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x821Bu: /* INX IMP E8 */
    c->pc = 0x821Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x821Cu: /* INX IMP E8 */
    c->pc = 0x821Du;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x821Du: /* CPX IMM E0 10 */
    c->pc = 0x821Fu;
    v = 0x10u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x821Fu: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8221u ^ 0x8232u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8232u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8221u; } return 1;
case 0x8221u: /* STX ZP 86 FD */
    c->pc = 0x8223u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8223u: /* JSR ABS 20 73 84 */
    push(c, 0x82u); push(c, 0x25u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x8226u: /* JSR ABS 20 D5 83 */
    push(c, 0x82u); push(c, 0x28u); c->pc = 0x83D5u; c->cpu_cycles += 6u; return 1;
case 0x8229u: /* JSR ABS 20 58 83 */
    push(c, 0x82u); push(c, 0x2Bu); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0x822Cu: /* JSR ABS 20 AB C0 */
    push(c, 0x82u); push(c, 0x2Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x822Fu: /* JMP ABS 4C 00 82 */
    c->pc = 0x8200u; c->cpu_cycles += 3u; return 1;
case 0x8232u: /* LDA IMM A9 50 */
    c->pc = 0x8234u;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8234u: /* STA ZP 85 FD */
    c->pc = 0x8236u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8236u: /* JSR ABS 20 73 84 */
    push(c, 0x82u); push(c, 0x38u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x8239u: /* JSR ABS 20 D5 83 */
    push(c, 0x82u); push(c, 0x3Bu); c->pc = 0x83D5u; c->cpu_cycles += 6u; return 1;
case 0x823Cu: /* JSR ABS 20 58 83 */
    push(c, 0x82u); push(c, 0x3Eu); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0x823Fu: /* JSR ABS 20 AB C0 */
    push(c, 0x82u); push(c, 0x41u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x8242u: /* DEC ZP C6 FD */
    c->pc = 0x8244u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8244u: /* BNE REL D0 F0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8246u ^ 0x8236u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8236u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8246u; } return 1;
case 0x8246u: /* LDA IMM A9 28 */
    c->pc = 0x8248u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8248u: /* STA ZP 85 FD */
    c->pc = 0x824Au;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x824Au: /* LDA IMM A9 26 */
    c->pc = 0x824Cu;
    v = 0x26u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x824Cu: /* STA ABS 8D B6 03 */
    c->pc = 0x824Fu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x824Fu: /* LDA IMM A9 0A */
    c->pc = 0x8251u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8251u: /* STA ABS 8D B7 03 */
    c->pc = 0x8254u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8254u: /* LDA ZP A5 2A */
    c->pc = 0x8256u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8256u: /* ASL IMP 0A */
    c->pc = 0x8257u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8257u: /* STA ZP 85 FE */
    c->pc = 0x8259u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8259u: /* ASL IMP 0A */
    c->pc = 0x825Au;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x825Au: /* ASL IMP 0A */
    c->pc = 0x825Bu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x825Bu: /* ADC ZP 65 FE */
    c->pc = 0x825Du;
    ea = 0xFEu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x825Du: /* STA ZP 85 FE */
    c->pc = 0x825Fu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x825Fu: /* LDA ZP A5 FD */
    c->pc = 0x8261u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8261u: /* AND IMM 29 03 */
    c->pc = 0x8263u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8263u: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8265u ^ 0x8276u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8276u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8265u; } return 1;
case 0x8265u: /* LDX ZP A6 FE */
    c->pc = 0x8267u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8267u: /* LDA ABX BD D9 86 */
    c->pc = 0x826Au;
    ea = (uint16_t)(0x86D9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x86D9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x826Au: /* STA ABS 8D B8 03 */
    c->pc = 0x826Du;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x826Du: /* LDA IMM A9 01 */
    c->pc = 0x826Fu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x826Fu: /* STA ZP 85 47 */
    c->pc = 0x8271u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8271u: /* INC ZP E6 FE */
    c->pc = 0x8273u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8273u: /* INC ABS EE B7 03 */
    c->pc = 0x8276u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8276u: /* JSR ABS 20 73 84 */
    push(c, 0x82u); push(c, 0x78u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x8279u: /* JSR ABS 20 D5 83 */
    push(c, 0x82u); push(c, 0x7Bu); c->pc = 0x83D5u; c->cpu_cycles += 6u; return 1;
case 0x827Cu: /* JSR ABS 20 58 83 */
    push(c, 0x82u); push(c, 0x7Eu); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0x827Fu: /* JSR ABS 20 AB C0 */
    push(c, 0x82u); push(c, 0x81u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x8282u: /* DEC ZP C6 FD */
    c->pc = 0x8284u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8284u: /* BNE REL D0 D9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8286u ^ 0x825Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x825Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8286u; } return 1;
case 0x8286u: /* LDA IMM A9 BB */
    c->pc = 0x8288u;
    v = 0xBBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8288u: /* STA ZP 85 FD */
    c->pc = 0x828Au;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x828Au: /* JSR ABS 20 73 84 */
    push(c, 0x82u); push(c, 0x8Cu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x828Du: /* JSR ABS 20 D5 83 */
    push(c, 0x82u); push(c, 0x8Fu); c->pc = 0x83D5u; c->cpu_cycles += 6u; return 1;
case 0x8290u: /* JSR ABS 20 58 83 */
    push(c, 0x82u); push(c, 0x92u); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0x8293u: /* JSR ABS 20 AB C0 */
    push(c, 0x82u); push(c, 0x95u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x8296u: /* DEC ZP C6 FD */
    c->pc = 0x8298u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8298u: /* BNE REL D0 F0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x829Au ^ 0x828Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x828Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x829Au; } return 1;
case 0x829Au: /* JSR ABS 20 2D A5 */
    push(c, 0x82u); push(c, 0x9Cu); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0x829Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x829Eu: /* LDY IMM A0 1F */
    c->pc = 0x82A0u;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x82A0u: /* LDA ABX BD 99 84 */
    c->pc = 0x82A3u;
    ea = (uint16_t)(0x8499u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8499u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82A3u: /* STA ABY 99 56 03 */
    c->pc = 0x82A6u;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x82A6u: /* DEX IMP CA */
    c->pc = 0x82A7u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x82A7u: /* DEY IMP 88 */
    c->pc = 0x82A8u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x82A8u: /* BPL REL 10 F6 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x82AAu ^ 0x82A0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82A0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82AAu; } return 1;
case 0x82AAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x82ABu: /* LDA ZP A5 27 */
    c->pc = 0x82ADu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82ADu: /* LSR IMP 4A */
    c->pc = 0x82AEu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82AEu: /* LSR IMP 4A */
    c->pc = 0x82AFu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82AFu: /* LSR IMP 4A */
    c->pc = 0x82B0u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82B0u: /* LSR IMP 4A */
    c->pc = 0x82B1u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82B1u: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82B3u ^ 0x82C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82B3u; } return 1;
case 0x82B3u: /* CMP IMM C9 09 */
    c->pc = 0x82B5u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x82B5u: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x82B7u ^ 0x82C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82B7u; } return 1;
case 0x82B7u: /* STA ZP 85 00 */
    c->pc = 0x82B9u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82B9u: /* DEC ZP C6 00 */
    c->pc = 0x82BBu;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x82BBu: /* LDA ZP A5 2A */
    c->pc = 0x82BDu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82BDu: /* ASL IMP 0A */
    c->pc = 0x82BEu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82BEu: /* ASL IMP 0A */
    c->pc = 0x82BFu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82BFu: /* ASL IMP 0A */
    c->pc = 0x82C0u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82C0u: /* CLC IMP 18 */
    c->pc = 0x82C1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x82C1u: /* ADC ZP 65 00 */
    c->pc = 0x82C3u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x82C3u: /* TAX IMP AA */
    c->pc = 0x82C4u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x82C4u: /* LDA ABX BD CA 82 */
    c->pc = 0x82C7u;
    ea = (uint16_t)(0x82CAu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x82CAu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82C7u: /* STA ZP 85 2A */
    c->pc = 0x82C9u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82C9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8312u: /* LDA ZP A5 1C */
    c->pc = 0x8314u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8314u: /* AND IMM 29 08 */
    c->pc = 0x8316u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8316u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8318u ^ 0x834Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x834Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8318u; } return 1;
case 0x8318u: /* LDY ZP A4 2A */
    c->pc = 0x831Au;
    ea = 0x2Au;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x831Au: /* LDA ABY B9 1D 86 */
    c->pc = 0x831Du;
    ea = (uint16_t)(0x861Du + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x861Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x831Du: /* STA ZP 85 09 */
    c->pc = 0x831Fu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x831Fu: /* LDA ABY B9 26 86 */
    c->pc = 0x8322u;
    ea = (uint16_t)(0x8626u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8626u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8322u: /* STA ZP 85 08 */
    c->pc = 0x8324u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8324u: /* LDX IMM A2 00 */
    c->pc = 0x8326u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8326u: /* CLC IMP 18 */
    c->pc = 0x8327u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8327u: /* LDA ABX BD 0D 86 */
    c->pc = 0x832Au;
    ea = (uint16_t)(0x860Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x860Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x832Au: /* ADC ZP 65 09 */
    c->pc = 0x832Cu;
    ea = 0x09u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x832Cu: /* STA ABX 9D E0 02 */
    c->pc = 0x832Fu;
    ea = (uint16_t)(0x02E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x832Fu: /* INX IMP E8 */
    c->pc = 0x8330u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8330u: /* LDA ABX BD 0D 86 */
    c->pc = 0x8333u;
    ea = (uint16_t)(0x860Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x860Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8333u: /* STA ABX 9D E0 02 */
    c->pc = 0x8336u;
    ea = (uint16_t)(0x02E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8336u: /* INX IMP E8 */
    c->pc = 0x8337u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8337u: /* LDA ABX BD 0D 86 */
    c->pc = 0x833Au;
    ea = (uint16_t)(0x860Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x860Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x833Au: /* STA ABX 9D E0 02 */
    c->pc = 0x833Du;
    ea = (uint16_t)(0x02E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x833Du: /* INX IMP E8 */
    c->pc = 0x833Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x833Eu: /* CLC IMP 18 */
    c->pc = 0x833Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x833Fu: /* LDA ABX BD 0D 86 */
    c->pc = 0x8342u;
    ea = (uint16_t)(0x860Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x860Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8342u: /* ADC ZP 65 08 */
    c->pc = 0x8344u;
    ea = 0x08u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8344u: /* STA ABX 9D E0 02 */
    c->pc = 0x8347u;
    ea = (uint16_t)(0x02E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8347u: /* INX IMP E8 */
    c->pc = 0x8348u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8348u: /* CPX IMM E0 10 */
    c->pc = 0x834Au;
    v = 0x10u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x834Au: /* BNE REL D0 DA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x834Cu ^ 0x8326u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8326u; }
    else { c->cpu_cycles += 2u; c->pc = 0x834Cu; } return 1;
case 0x834Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x834Du: /* LDA IMM A9 F8 */
    c->pc = 0x834Fu;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x834Fu: /* LDX IMM A2 0F */
    c->pc = 0x8351u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8351u: /* STA ABX 9D E0 02 */
    c->pc = 0x8354u;
    ea = (uint16_t)(0x02E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8354u: /* DEX IMP CA */
    c->pc = 0x8355u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8355u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8357u ^ 0x8351u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8351u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8357u; } return 1;
case 0x8357u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8358u: /* LDY IMM A0 50 */
    c->pc = 0x835Au;
    v = 0x50u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x835Au: /* LDX IMM A2 00 */
    c->pc = 0x835Cu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x835Cu: /* LDA IMM A9 30 */
    c->pc = 0x835Eu;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x835Eu: /* STA ZP 85 00 */
    c->pc = 0x8360u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8360u: /* LDA IMM A9 02 */
    c->pc = 0x8362u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8362u: /* STA ZP 85 03 */
    c->pc = 0x8364u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8364u: /* STY ZP 84 04 */
    c->pc = 0x8366u;
    ea = 0x04u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8366u: /* STX ZP 86 05 */
    c->pc = 0x8368u;
    ea = 0x05u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8368u: /* LDA ABS AD 20 04 */
    c->pc = 0x836Bu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x836Bu: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x836Du ^ 0x8379u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8379u; }
    else { c->cpu_cycles += 2u; c->pc = 0x836Du; } return 1;
case 0x836Du: /* LDA IMM A9 80 */
    c->pc = 0x836Fu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x836Fu: /* STA ZP 85 00 */
    c->pc = 0x8371u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8371u: /* LDA ZP A5 1C */
    c->pc = 0x8373u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8373u: /* AND IMM 29 04 */
    c->pc = 0x8375u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8375u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8377u ^ 0x8379u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8379u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8377u; } return 1;
case 0x8377u: /* INC ZP E6 00 */
    c->pc = 0x8379u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8379u: /* LDX ZP A6 03 */
    c->pc = 0x837Bu;
    ea = 0x03u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x837Bu: /* LDA ABX BD A3 83 */
    c->pc = 0x837Eu;
    ea = (uint16_t)(0x83A3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x83A3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x837Eu: /* STA ZP 85 01 */
    c->pc = 0x8380u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8380u: /* CLC IMP 18 */
    c->pc = 0x8381u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8381u: /* LDA ABX BD 81 04 */
    c->pc = 0x8384u;
    ea = (uint16_t)(0x0481u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0481u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8384u: /* ADC ABX 7D A6 83 */
    c->pc = 0x8387u;
    ea = (uint16_t)(0x83A6u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x83A6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8387u: /* STA ABX 9D 81 04 */
    c->pc = 0x838Au;
    ea = (uint16_t)(0x0481u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x838Au: /* LDA ABX BD 61 04 */
    c->pc = 0x838Du;
    ea = (uint16_t)(0x0461u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0461u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x838Du: /* ADC ABX 7D A9 83 */
    c->pc = 0x8390u;
    ea = (uint16_t)(0x83A9u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x83A9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8390u: /* STA ABX 9D 61 04 */
    c->pc = 0x8393u;
    ea = (uint16_t)(0x0461u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8393u: /* STA ZP 85 02 */
    c->pc = 0x8395u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8395u: /* LDX ZP A6 05 */
    c->pc = 0x8397u;
    ea = 0x05u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8397u: /* LDY ZP A4 04 */
    c->pc = 0x8399u;
    ea = 0x04u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8399u: /* JSR ABS 20 AC 83 */
    push(c, 0x83u); push(c, 0x9Bu); c->pc = 0x83ACu; c->cpu_cycles += 6u; return 1;
case 0x839Cu: /* INC ZP E6 00 */
    c->pc = 0x839Eu;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x839Eu: /* DEC ZP C6 03 */
    c->pc = 0x83A0u;
    ea = 0x03u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83A0u: /* BPL REL 10 C2 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x83A2u ^ 0x8364u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8364u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83A2u; } return 1;
case 0x83A2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x83ACu: /* LDA ABX BD 29 87 */
    c->pc = 0x83AFu;
    ea = (uint16_t)(0x8729u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8729u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83AFu: /* STA ABY 99 00 02 */
    c->pc = 0x83B2u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x83B2u: /* INY IMP C8 */
    c->pc = 0x83B3u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83B3u: /* LDA ZP A5 00 */
    c->pc = 0x83B5u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x83B5u: /* STA ABY 99 00 02 */
    c->pc = 0x83B8u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x83B8u: /* INY IMP C8 */
    c->pc = 0x83B9u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83B9u: /* LDA ABS AD 20 04 */
    c->pc = 0x83BCu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83BCu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x83BEu ^ 0x83C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83BEu; } return 1;
case 0x83BEu: /* LDA IMM A9 40 */
    c->pc = 0x83C0u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83C0u: /* STA ABY 99 00 02 */
    c->pc = 0x83C3u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x83C3u: /* INY IMP C8 */
    c->pc = 0x83C4u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83C4u: /* CLC IMP 18 */
    c->pc = 0x83C5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x83C5u: /* LDA ABX BD 2A 87 */
    c->pc = 0x83C8u;
    ea = (uint16_t)(0x872Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x872Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83C8u: /* ADC ZP 65 02 */
    c->pc = 0x83CAu;
    ea = 0x02u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x83CAu: /* STA ABY 99 00 02 */
    c->pc = 0x83CDu;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x83CDu: /* INY IMP C8 */
    c->pc = 0x83CEu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x83CEu: /* INX IMP E8 */
    c->pc = 0x83CFu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x83CFu: /* INX IMP E8 */
    c->pc = 0x83D0u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x83D0u: /* DEC ZP C6 01 */
    c->pc = 0x83D2u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x83D2u: /* BNE REL D0 D8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x83D4u ^ 0x83ACu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83ACu; }
    else { c->cpu_cycles += 2u; c->pc = 0x83D4u; } return 1;
case 0x83D4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x83D5u: /* LDX ZP A6 2A */
    c->pc = 0x83D7u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x83D7u: /* INC ABS EE 80 06 */
    c->pc = 0x83DAu;
    ea = 0x0680u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x83DAu: /* LDA ABS AD 80 06 */
    c->pc = 0x83DDu;
    ea = 0x0680u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83DDu: /* CMP ABX DD 91 87 */
    c->pc = 0x83E0u;
    ea = (uint16_t)(0x8791u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x8791u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83E0u: /* BCC REL 90 13 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x83E2u ^ 0x83F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83E2u; } return 1;
case 0x83E2u: /* LDA IMM A9 00 */
    c->pc = 0x83E4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x83E4u: /* STA ABS 8D 80 06 */
    c->pc = 0x83E7u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83E7u: /* INC ABS EE A0 06 */
    c->pc = 0x83EAu;
    ea = 0x06A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x83EAu: /* LDA ABX BD 89 87 */
    c->pc = 0x83EDu;
    ea = (uint16_t)(0x8789u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8789u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83EDu: /* CMP ABS CD A0 06 */
    c->pc = 0x83F0u;
    ea = 0x06A0u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u; return 1;
case 0x83F0u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x83F2u ^ 0x83F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x83F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x83F2u; } return 1;
case 0x83F2u: /* STA ABS 8D A0 06 */
    c->pc = 0x83F5u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x83F5u: /* LDA ABX BD 81 87 */
    c->pc = 0x83F8u;
    ea = (uint16_t)(0x8781u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8781u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x83F8u: /* CLC IMP 18 */
    c->pc = 0x83F9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x83F9u: /* ADC ABS 6D A0 06 */
    c->pc = 0x83FCu;
    ea = 0x06A0u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x83FCu: /* TAX IMP AA */
    c->pc = 0x83FDu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x83FDu: /* LDY ABX BC 99 87 */
    c->pc = 0x8400u;
    ea = (uint16_t)(0x8799u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x8799u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8400u: /* LDA ABY B9 ED 87 */
    c->pc = 0x8403u;
    ea = (uint16_t)(0x87EDu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x87EDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8403u: /* STA ZP 85 08 */
    c->pc = 0x8405u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8405u: /* LDA ABY B9 16 88 */
    c->pc = 0x8408u;
    ea = (uint16_t)(0x8816u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8816u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8408u: /* STA ZP 85 09 */
    c->pc = 0x840Au;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x840Au: /* LDY IMM A0 00 */
    c->pc = 0x840Cu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x840Cu: /* LDA IZY B1 08 */
    c->pc = 0x840Eu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x840Eu: /* STA ZP 85 00 */
    c->pc = 0x8410u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8410u: /* INY IMP C8 */
    c->pc = 0x8411u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8411u: /* LDX IMM A2 00 */
    c->pc = 0x8413u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8413u: /* CLC IMP 18 */
    c->pc = 0x8414u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8414u: /* LDA ABS AD A0 04 */
    c->pc = 0x8417u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8417u: /* ADC IZY 71 08 */
    c->pc = 0x8419u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8419u: /* STA ABX 9D 00 02 */
    c->pc = 0x841Cu;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x841Cu: /* INY IMP C8 */
    c->pc = 0x841Du;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x841Du: /* INX IMP E8 */
    c->pc = 0x841Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x841Eu: /* LDA IZY B1 08 */
    c->pc = 0x8420u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8420u: /* STA ABX 9D 00 02 */
    c->pc = 0x8423u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8423u: /* INY IMP C8 */
    c->pc = 0x8424u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8424u: /* INX IMP E8 */
    c->pc = 0x8425u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8425u: /* LDA IZY B1 08 */
    c->pc = 0x8427u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8427u: /* STA ABX 9D 00 02 */
    c->pc = 0x842Au;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x842Au: /* INY IMP C8 */
    c->pc = 0x842Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x842Bu: /* INX IMP E8 */
    c->pc = 0x842Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x842Cu: /* CLC IMP 18 */
    c->pc = 0x842Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x842Du: /* LDA ABS AD 60 04 */
    c->pc = 0x8430u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8430u: /* ADC IZY 71 08 */
    c->pc = 0x8432u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8432u: /* STA ABX 9D 00 02 */
    c->pc = 0x8435u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8435u: /* INX IMP E8 */
    c->pc = 0x8436u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8436u: /* INY IMP C8 */
    c->pc = 0x8437u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8437u: /* DEC ZP C6 00 */
    c->pc = 0x8439u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8439u: /* BNE REL D0 D8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x843Bu ^ 0x8413u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8413u; }
    else { c->cpu_cycles += 2u; c->pc = 0x843Bu; } return 1;
case 0x843Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x843Cu: /* LDA IMM A9 00 */
    c->pc = 0x843Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x843Eu: /* JSR ABS 20 44 C6 */
    push(c, 0x84u); push(c, 0x40u); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0x8441u: /* LDA IMM A9 20 */
    c->pc = 0x8443u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8443u: /* STA ABS 8D 06 20 */
    c->pc = 0x8446u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8446u: /* LDY IMM A0 00 */
    c->pc = 0x8448u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8448u: /* STY ABS 8C 06 20 */
    c->pc = 0x844Bu;
    ea = 0x2006u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x844Bu: /* LDA IMM A9 AE */
    c->pc = 0x844Du;
    v = 0xAEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x844Du: /* STA ZP 85 09 */
    c->pc = 0x844Fu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x844Fu: /* LDA IMM A9 0B */
    c->pc = 0x8451u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8451u: /* JSR ABS 20 28 C6 */
    push(c, 0x84u); push(c, 0x53u); c->pc = 0xC628u; c->cpu_cycles += 6u; return 1;
case 0x8454u: /* LDY IMM A0 1F */
    c->pc = 0x8456u;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8456u: /* LDA ABY B9 3F 86 */
    c->pc = 0x8459u;
    ea = (uint16_t)(0x863Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x863Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8459u: /* LDX IMM A2 20 */
    c->pc = 0x845Bu;
    v = 0x20u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x845Bu: /* STA ABS 8D 07 20 */
    c->pc = 0x845Eu;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x845Eu: /* DEX IMP CA */
    c->pc = 0x845Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x845Fu: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8461u ^ 0x845Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x845Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8461u; } return 1;
case 0x8461u: /* DEY IMP 88 */
    c->pc = 0x8462u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8462u: /* BPL REL 10 F2 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8464u ^ 0x8456u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8456u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8464u; } return 1;
case 0x8464u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8465u: /* LDX IMM A2 02 */
    c->pc = 0x8467u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8467u: /* LDA IMM A9 00 */
    c->pc = 0x8469u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8469u: /* STA ABX 9D 61 04 */
    c->pc = 0x846Cu;
    ea = (uint16_t)(0x0461u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x846Cu: /* STA ABX 9D 81 04 */
    c->pc = 0x846Fu;
    ea = (uint16_t)(0x0481u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x846Fu: /* DEX IMP CA */
    c->pc = 0x8470u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8470u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8472u ^ 0x8469u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8469u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8472u; } return 1;
case 0x8472u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8473u: /* LDX IMM A2 00 */
    c->pc = 0x8475u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8475u: /* LDA IMM A9 F8 */
    c->pc = 0x8477u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8477u: /* STA ABX 9D 00 02 */
    c->pc = 0x847Au;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x847Au: /* INX IMP E8 */
    c->pc = 0x847Bu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x847Bu: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x847Du ^ 0x8477u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8477u; }
    else { c->cpu_cycles += 2u; c->pc = 0x847Du; } return 1;
case 0x847Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x847Eu: /* LDA IMM A9 00 */
    c->pc = 0x8480u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8480u: /* STA ZP 85 1F */
    c->pc = 0x8482u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8482u: /* STA ZP 85 20 */
    c->pc = 0x8484u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8484u: /* STA ZP 85 22 */
    c->pc = 0x8486u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8486u: /* STA ZP 85 21 */
    c->pc = 0x8488u;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8488u: /* STA ZP 85 B5 */
    c->pc = 0x848Au;
    ea = 0xB5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x848Au: /* STA ZP 85 B6 */
    c->pc = 0x848Cu;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x848Cu: /* STA ZP 85 B7 */
    c->pc = 0x848Eu;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x848Eu: /* STA ZP 85 B8 */
    c->pc = 0x8490u;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8490u: /* STA ZP 85 B9 */
    c->pc = 0x8492u;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8492u: /* STA ABS 8D 54 03 */
    c->pc = 0x8495u;
    ea = 0x0354u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8495u: /* STA ABS 8D 55 03 */
    c->pc = 0x8498u;
    ea = 0x0355u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8498u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x90ECu: /* JSR ABS 20 6C CC */
    push(c, 0x90u); push(c, 0xEEu); c->pc = 0xCC6Cu; c->cpu_cycles += 6u; return 1;
case 0x90EFu: /* LDA IMM A9 00 */
    c->pc = 0x90F1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90F1u: /* JSR ABS 20 EF D2 */
    push(c, 0x90u); push(c, 0xF3u); c->pc = 0xD2EFu; c->cpu_cycles += 6u; return 1;
case 0x90F4u: /* LDA ZP A5 B5 */
    c->pc = 0x90F6u;
    ea = 0xB5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90F6u: /* PHA IMP 48 */
    c->pc = 0x90F7u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90F7u: /* LDA ZP A5 B6 */
    c->pc = 0x90F9u;
    ea = 0xB6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90F9u: /* PHA IMP 48 */
    c->pc = 0x90FAu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90FAu: /* LDA ZP A5 B7 */
    c->pc = 0x90FCu;
    ea = 0xB7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90FCu: /* PHA IMP 48 */
    c->pc = 0x90FDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90FDu: /* LDA ZP A5 B8 */
    c->pc = 0x90FFu;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90FFu: /* PHA IMP 48 */
    c->pc = 0x9100u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9100u: /* LDA ZP A5 B9 */
    c->pc = 0x9102u;
    ea = 0xB9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9102u: /* PHA IMP 48 */
    c->pc = 0x9103u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9103u: /* LDA ZP A5 20 */
    c->pc = 0x9105u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9105u: /* PHA IMP 48 */
    c->pc = 0x9106u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9106u: /* LDA ZP A5 1F */
    c->pc = 0x9108u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9108u: /* PHA IMP 48 */
    c->pc = 0x9109u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9109u: /* LDX IMM A2 11 */
    c->pc = 0x910Bu;
    v = 0x11u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x910Bu: /* LDA ABX BD 54 03 */
    c->pc = 0x910Eu;
    ea = (uint16_t)(0x0354u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0354u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x910Eu: /* STA ABX 9D 00 07 */
    c->pc = 0x9111u;
    ea = (uint16_t)(0x0700u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9111u: /* DEX IMP CA */
    c->pc = 0x9112u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9112u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9114u ^ 0x910Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x910Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9114u; } return 1;
case 0x9114u: /* LDA IMM A9 00 */
    c->pc = 0x9116u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9116u: /* STA ZP 85 B8 */
    c->pc = 0x9118u;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9118u: /* STA ZP 85 B7 */
    c->pc = 0x911Au;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x911Au: /* STA ZP 85 B5 */
    c->pc = 0x911Cu;
    ea = 0xB5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x911Cu: /* STA ZP 85 B6 */
    c->pc = 0x911Eu;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x911Eu: /* LDA ZP A5 2A */
    c->pc = 0x9120u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9120u: /* CMP IMM C9 04 */
    c->pc = 0x9122u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9122u: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9124u ^ 0x913Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x913Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9124u; } return 1;
case 0x9124u: /* LDA ZP A5 38 */
    c->pc = 0x9126u;
    ea = 0x38u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9126u: /* CMP IMM C9 03 */
    c->pc = 0x9128u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9128u: /* BCC REL 90 13 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x912Au ^ 0x913Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x913Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x912Au; } return 1;
case 0x912Au: /* CMP IMM C9 0F */
    c->pc = 0x912Cu;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x912Cu: /* BCS REL B0 0F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x912Eu ^ 0x913Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x913Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x912Eu; } return 1;
case 0x912Eu: /* CMP IMM C9 07 */
    c->pc = 0x9130u;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9130u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9132u ^ 0x913Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x913Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9132u; } return 1;
case 0x9132u: /* LDX IMM A2 0F */
    c->pc = 0x9134u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9134u: /* TXA IMP 8A */
    c->pc = 0x9135u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9135u: /* STA ABX 9D 56 03 */
    c->pc = 0x9138u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9138u: /* DEX IMP CA */
    c->pc = 0x9139u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9139u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x913Bu ^ 0x9135u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9135u; }
    else { c->cpu_cycles += 2u; c->pc = 0x913Bu; } return 1;
case 0x913Bu: /* INC ZP E6 20 */
    c->pc = 0x913Du;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x913Du: /* LDA ZP A5 B1 */
    c->pc = 0x913Fu;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x913Fu: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9141u ^ 0x9155u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9155u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9141u; } return 1;
case 0x9141u: /* LDA ZP A5 B3 */
    c->pc = 0x9143u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9143u: /* CMP IMM C9 08 */
    c->pc = 0x9145u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9145u: /* BCC REL 90 0E */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9147u ^ 0x9155u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9155u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9147u; } return 1;
case 0x9147u: /* LDX IMM A2 00 */
    c->pc = 0x9149u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9149u: /* STX ZP 86 1F */
    c->pc = 0x914Bu;
    ea = 0x1Fu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x914Bu: /* CMP IMM C9 0A */
    c->pc = 0x914Du;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x914Du: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x914Fu ^ 0x9155u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9155u; }
    else { c->cpu_cycles += 2u; c->pc = 0x914Fu; } return 1;
case 0x914Fu: /* CMP IMM C9 0B */
    c->pc = 0x9151u;
    v = 0x0Bu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9151u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9153u ^ 0x9155u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9155u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9153u; } return 1;
case 0x9153u: /* INC ZP E6 20 */
    c->pc = 0x9155u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9155u: /* LDA IMM A9 0A */
    c->pc = 0x9157u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9157u: /* CMP ZP C5 2A */
    c->pc = 0x9159u;
    ea = 0x2Au;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x9159u: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x915Bu ^ 0x9172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9172u; }
    else { c->cpu_cycles += 2u; c->pc = 0x915Bu; } return 1;
case 0x915Bu: /* LDA ZP A5 B1 */
    c->pc = 0x915Du;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x915Du: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x915Fu ^ 0x9172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9172u; }
    else { c->cpu_cycles += 2u; c->pc = 0x915Fu; } return 1;
case 0x915Fu: /* LDA IMM A9 0F */
    c->pc = 0x9161u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9161u: /* LDX IMM A2 02 */
    c->pc = 0x9163u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9163u: /* STA ABX 9D 5B 03 */
    c->pc = 0x9166u;
    ea = (uint16_t)(0x035Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9166u: /* STA ABX 9D 7B 03 */
    c->pc = 0x9169u;
    ea = (uint16_t)(0x037Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9169u: /* STA ABX 9D 8B 03 */
    c->pc = 0x916Cu;
    ea = (uint16_t)(0x038Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x916Cu: /* STA ABX 9D 9B 03 */
    c->pc = 0x916Fu;
    ea = (uint16_t)(0x039Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x916Fu: /* DEX IMP CA */
    c->pc = 0x9170u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9170u: /* BPL REL 10 F1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9172u ^ 0x9163u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9163u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9172u; } return 1;
case 0x9172u: /* CLC IMP 18 */
    c->pc = 0x9173u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9173u: /* LDA ZP A5 1F */
    c->pc = 0x9175u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9175u: /* ADC IMM 69 80 */
    c->pc = 0x9177u;
    v = 0x80u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9177u: /* AND IMM 29 E0 */
    c->pc = 0x9179u;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9179u: /* ORA IMM 09 04 */
    c->pc = 0x917Bu;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x917Bu: /* STA ZP 85 52 */
    c->pc = 0x917Du;
    ea = 0x52u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x917Du: /* LDA ZP A5 20 */
    c->pc = 0x917Fu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x917Fu: /* ADC IMM 69 00 */
    c->pc = 0x9181u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9181u: /* STA ZP 85 53 */
    c->pc = 0x9183u;
    ea = 0x53u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9183u: /* LDX IMM A2 00 */
    c->pc = 0x9185u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9185u: /* STX ZP 86 FD */
    c->pc = 0x9187u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9187u: /* CLC IMP 18 */
    c->pc = 0x9188u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9188u: /* LDA ZP A5 52 */
    c->pc = 0x918Au;
    ea = 0x52u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x918Au: /* ADC ABX 7D 7F 95 */
    c->pc = 0x918Du;
    ea = (uint16_t)(0x957Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x957Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x918Du: /* STA ZP 85 08 */
    c->pc = 0x918Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x918Fu: /* LDA ZP A5 53 */
    c->pc = 0x9191u;
    ea = 0x53u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9191u: /* ADC IMM 69 00 */
    c->pc = 0x9193u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9193u: /* STA ZP 85 09 */
    c->pc = 0x9195u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9195u: /* LDA IMM A9 00 */
    c->pc = 0x9197u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9197u: /* STA ZP 85 1B */
    c->pc = 0x9199u;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9199u: /* JSR ABS 20 B1 C8 */
    push(c, 0x91u); push(c, 0x9Bu); c->pc = 0xC8B1u; c->cpu_cycles += 6u; return 1;
case 0x919Cu: /* LDX ZP A6 FD */
    c->pc = 0x919Eu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x919Eu: /* LDA ABX BD 70 95 */
    c->pc = 0x91A1u;
    ea = (uint16_t)(0x9570u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9570u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91A1u: /* ASL IMP 0A */
    c->pc = 0x91A2u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A2u: /* ASL IMP 0A */
    c->pc = 0x91A3u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A3u: /* ASL IMP 0A */
    c->pc = 0x91A4u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A4u: /* ASL IMP 0A */
    c->pc = 0x91A5u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A5u: /* TAX IMP AA */
    c->pc = 0x91A6u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91A6u: /* LDY IMM A0 00 */
    c->pc = 0x91A8u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x91A8u: /* LDA ABX BD 8E 95 */
    c->pc = 0x91ABu;
    ea = (uint16_t)(0x958Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x958Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91ABu: /* STA ABY 99 10 03 */
    c->pc = 0x91AEu;
    ea = (uint16_t)(0x0310u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x91AEu: /* INX IMP E8 */
    c->pc = 0x91AFu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91AFu: /* INY IMP C8 */
    c->pc = 0x91B0u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x91B0u: /* CPY IMM C0 10 */
    c->pc = 0x91B2u;
    v = 0x10u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x91B2u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x91B4u ^ 0x91A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91B4u; } return 1;
case 0x91B4u: /* LDX ZP A6 2A */
    c->pc = 0x91B6u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x91B6u: /* LDA ABX BD 1E 96 */
    c->pc = 0x91B9u;
    ea = (uint16_t)(0x961Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x961Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x91B9u: /* STA ABS 8D 50 03 */
    c->pc = 0x91BCu;
    ea = 0x0350u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91BCu: /* LDA IMM A9 01 */
    c->pc = 0x91BEu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91BEu: /* STA ZP 85 1B */
    c->pc = 0x91C0u;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91C0u: /* LDY IMM A0 99 */
    c->pc = 0x91C2u;
    v = 0x99u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x91C2u: /* LDX IMM A2 00 */
    c->pc = 0x91C4u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91C4u: /* JSR ABS 20 60 C7 */
    push(c, 0x91u); push(c, 0xC6u); c->pc = 0xC760u; c->cpu_cycles += 6u; return 1;
case 0x91C7u: /* JSR ABS 20 AB C0 */
    push(c, 0x91u); push(c, 0xC9u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x91CAu: /* LDX ZP A6 FD */
    c->pc = 0x91CCu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x91CCu: /* INX IMP E8 */
    c->pc = 0x91CDu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91CDu: /* CPX IMM E0 0F */
    c->pc = 0x91CFu;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x91CFu: /* BNE REL D0 B4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x91D1u ^ 0x9185u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9185u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91D1u; } return 1;
case 0x91D1u: /* STX ZP 86 FD */
    c->pc = 0x91D3u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x91D3u: /* LDY IMM A0 99 */
    c->pc = 0x91D5u;
    v = 0x99u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x91D5u: /* LDX IMM A2 00 */
    c->pc = 0x91D7u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91D7u: /* JSR ABS 20 60 C7 */
    push(c, 0x91u); push(c, 0xD9u); c->pc = 0xC760u; c->cpu_cycles += 6u; return 1;
case 0x91DAu: /* LDA IMM A9 00 */
    c->pc = 0x91DCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91DCu: /* STA ZP 85 FE */
    c->pc = 0x91DEu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91DEu: /* STA ZP 85 FF */
    c->pc = 0x91E0u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91E0u: /* LDX ZP A6 A9 */
    c->pc = 0x91E2u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x91E2u: /* INX IMP E8 */
    c->pc = 0x91E3u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91E3u: /* CPX IMM E0 07 */
    c->pc = 0x91E5u;
    v = 0x07u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x91E5u: /* BCC REL 90 06 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x91E7u ^ 0x91EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x91E7u; } return 1;
case 0x91E7u: /* TXA IMP 8A */
    c->pc = 0x91E8u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91E8u: /* SBC IMM E9 06 */
    c->pc = 0x91EAu;
    v = 0x06u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x91EAu: /* TAX IMP AA */
    c->pc = 0x91EBu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x91EBu: /* INC ZP E6 FE */
    c->pc = 0x91EDu;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x91EDu: /* STX ZP 86 FD */
    c->pc = 0x91EFu;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x91EFu: /* LDA ZP A5 9A */
    c->pc = 0x91F1u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F1u: /* ASL IMP 0A */
    c->pc = 0x91F2u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91F2u: /* ORA IMM 09 41 */
    c->pc = 0x91F4u;
    v = 0x41u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91F4u: /* STA ZP 85 07 */
    c->pc = 0x91F6u;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F6u: /* LDA ZP A5 FE */
    c->pc = 0x91F8u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F8u: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x91FAu ^ 0x920Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x920Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x91FAu; } return 1;
case 0x91FAu: /* LDA ZP A5 9A */
    c->pc = 0x91FCu;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91FCu: /* STA ZP 85 07 */
    c->pc = 0x91FEu;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91FEu: /* LDA ZP A5 9B */
    c->pc = 0x9200u;
    ea = 0x9Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9200u: /* ASL ZP 06 07 */
    c->pc = 0x9202u;
    ea = 0x07u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9202u: /* ROL IMP 2A */
    c->pc = 0x9203u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9203u: /* ASL ZP 06 07 */
    c->pc = 0x9205u;
    ea = 0x07u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9205u: /* ROL IMP 2A */
    c->pc = 0x9206u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9206u: /* ASL ZP 06 07 */
    c->pc = 0x9208u;
    ea = 0x07u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9208u: /* ROL IMP 2A */
    c->pc = 0x9209u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9209u: /* STA ZP 85 07 */
    c->pc = 0x920Bu;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x920Bu: /* LDA ZP A5 27 */
    c->pc = 0x920Du;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x920Du: /* AND IMM 29 08 */
    c->pc = 0x920Fu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x920Fu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9211u ^ 0x9214u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9214u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9211u; } return 1;
case 0x9211u: /* JMP ABS 4C 81 92 */
    c->pc = 0x9281u; c->cpu_cycles += 3u; return 1;
case 0x9214u: /* LDA ZP A5 27 */
    c->pc = 0x9216u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9216u: /* AND IMM 29 30 */
    c->pc = 0x9218u;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9218u: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x921Au ^ 0x9236u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9236u; }
    else { c->cpu_cycles += 2u; c->pc = 0x921Au; } return 1;
case 0x921Au: /* LDA ZP A5 23 */
    c->pc = 0x921Cu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x921Cu: /* AND IMM 29 30 */
    c->pc = 0x921Eu;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x921Eu: /* BEQ REL F0 54 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9220u ^ 0x9274u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9274u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9220u; } return 1;
case 0x9220u: /* STA ZP 85 00 */
    c->pc = 0x9222u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9222u: /* LDA ZP A5 25 */
    c->pc = 0x9224u;
    ea = 0x25u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9224u: /* AND IMM 29 30 */
    c->pc = 0x9226u;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9226u: /* CMP ZP C5 00 */
    c->pc = 0x9228u;
    ea = 0x00u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0x9228u: /* BNE REL D0 4A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x922Au ^ 0x9274u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9274u; }
    else { c->cpu_cycles += 2u; c->pc = 0x922Au; } return 1;
case 0x922Au: /* INC ZP E6 FF */
    c->pc = 0x922Cu;
    ea = 0xFFu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x922Cu: /* LDA ZP A5 FF */
    c->pc = 0x922Eu;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x922Eu: /* CMP IMM C9 18 */
    c->pc = 0x9230u;
    v = 0x18u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9230u: /* BCC REL 90 46 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9232u ^ 0x9278u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9278u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9232u; } return 1;
case 0x9232u: /* LDA IMM A9 08 */
    c->pc = 0x9234u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9234u: /* STA ZP 85 FF */
    c->pc = 0x9236u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9236u: /* LDX IMM A2 07 */
    c->pc = 0x9238u;
    v = 0x07u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9238u: /* LDA ZP A5 FE */
    c->pc = 0x923Au;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x923Au: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x923Cu ^ 0x923Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x923Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x923Cu; } return 1;
case 0x923Cu: /* DEX IMP CA */
    c->pc = 0x923Du;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x923Du: /* LDA IMM A9 2F */
    c->pc = 0x923Fu;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x923Fu: /* JSR ABS 20 51 C0 */
    push(c, 0x92u); push(c, 0x41u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9242u: /* LDA ZP A5 23 */
    c->pc = 0x9244u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9244u: /* AND IMM 29 30 */
    c->pc = 0x9246u;
    v = 0x30u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9246u: /* AND IMM 29 10 */
    c->pc = 0x9248u;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9248u: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x924Au ^ 0x9261u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9261u; }
    else { c->cpu_cycles += 2u; c->pc = 0x924Au; } return 1;
case 0x924Au: /* INC ZP E6 FD */
    c->pc = 0x924Cu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x924Cu: /* CPX ZP E4 FD */
    c->pc = 0x924Eu;
    ea = 0xFDu;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x924Eu: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9250u ^ 0x9254u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9254u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9250u; } return 1;
case 0x9250u: /* LDA IMM A9 00 */
    c->pc = 0x9252u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9252u: /* STA ZP 85 FD */
    c->pc = 0x9254u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9254u: /* LDY ZP A4 FD */
    c->pc = 0x9256u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9256u: /* BEQ REL F0 20 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9258u ^ 0x9278u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9278u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9258u; } return 1;
case 0x9258u: /* LDA ABY B9 70 96 */
    c->pc = 0x925Bu;
    ea = (uint16_t)(0x9670u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9670u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x925Bu: /* AND ZP 25 07 */
    c->pc = 0x925Du;
    ea = 0x07u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x925Du: /* BEQ REL F0 EB */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x925Fu ^ 0x924Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x924Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x925Fu; } return 1;
case 0x925Fu: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9261u ^ 0x9278u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9278u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9261u; } return 1;
case 0x9261u: /* DEC ZP C6 FD */
    c->pc = 0x9263u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9263u: /* BPL REL 10 02 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9265u ^ 0x9267u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9267u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9265u; } return 1;
case 0x9265u: /* STX ZP 86 FD */
    c->pc = 0x9267u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9267u: /* LDY ZP A4 FD */
    c->pc = 0x9269u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9269u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x926Bu ^ 0x9278u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9278u; }
    else { c->cpu_cycles += 2u; c->pc = 0x926Bu; } return 1;
case 0x926Bu: /* LDA ABY B9 70 96 */
    c->pc = 0x926Eu;
    ea = (uint16_t)(0x9670u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9670u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x926Eu: /* AND ZP 25 07 */
    c->pc = 0x9270u;
    ea = 0x07u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9270u: /* BEQ REL F0 EF */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9272u ^ 0x9261u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9261u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9272u; } return 1;
case 0x9272u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9274u ^ 0x9278u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9278u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9274u; } return 1;
case 0x9274u: /* LDA IMM A9 00 */
    c->pc = 0x9276u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9276u: /* STA ZP 85 FF */
    c->pc = 0x9278u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9278u: /* JSR ABS 20 96 93 */
    push(c, 0x92u); push(c, 0x7Au); c->pc = 0x9396u; c->cpu_cycles += 6u; return 1;
case 0x927Bu: /* JSR ABS 20 AB C0 */
    push(c, 0x92u); push(c, 0x7Du); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x927Eu: /* JMP ABS 4C EF 91 */
    c->pc = 0x91EFu; c->cpu_cycles += 3u; return 1;
case 0x9281u: /* LDA ZP A5 FD */
    c->pc = 0x9283u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9283u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9285u ^ 0x928Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x928Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9285u; } return 1;
case 0x9285u: /* LDA ZP A5 FE */
    c->pc = 0x9287u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9287u: /* EOR IMM 49 01 */
    c->pc = 0x9289u;
    v = 0x01u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9289u: /* STA ZP 85 FE */
    c->pc = 0x928Bu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x928Bu: /* JMP ABS 4C 74 92 */
    c->pc = 0x9274u; c->cpu_cycles += 3u; return 1;
case 0x928Eu: /* CMP IMM C9 07 */
    c->pc = 0x9290u;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9290u: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9292u ^ 0x92B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9292u; } return 1;
case 0x9292u: /* LDA ZP A5 A7 */
    c->pc = 0x9294u;
    ea = 0xA7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9294u: /* BEQ REL F0 DE */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9296u ^ 0x9274u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9274u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9296u; } return 1;
case 0x9296u: /* DEC ZP C6 A7 */
    c->pc = 0x9298u;
    ea = 0xA7u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9298u: /* LDA ABS AD C0 06 */
    c->pc = 0x929Bu;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x929Bu: /* CMP IMM C9 1C */
    c->pc = 0x929Du;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x929Du: /* BEQ REL F0 D5 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x929Fu ^ 0x9274u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9274u; }
    else { c->cpu_cycles += 2u; c->pc = 0x929Fu; } return 1;
case 0x929Fu: /* LDA ZP A5 1C */
    c->pc = 0x92A1u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92A1u: /* AND IMM 29 03 */
    c->pc = 0x92A3u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92A3u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92A5u ^ 0x92ADu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92ADu; }
    else { c->cpu_cycles += 2u; c->pc = 0x92A5u; } return 1;
case 0x92A5u: /* INC ABS EE C0 06 */
    c->pc = 0x92A8u;
    ea = 0x06C0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x92A8u: /* LDA IMM A9 28 */
    c->pc = 0x92AAu;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92AAu: /* JSR ABS 20 51 C0 */
    push(c, 0x92u); push(c, 0xACu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x92ADu: /* JSR ABS 20 96 93 */
    push(c, 0x92u); push(c, 0xAFu); c->pc = 0x9396u; c->cpu_cycles += 6u; return 1;
case 0x92B0u: /* JSR ABS 20 AB C0 */
    push(c, 0x92u); push(c, 0xB2u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x92B3u: /* JMP ABS 4C 98 92 */
    c->pc = 0x9298u; c->cpu_cycles += 3u; return 1;
case 0x92B6u: /* LDA ZP A5 FD */
    c->pc = 0x92B8u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92B8u: /* BEQ REL F0 BA */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x92BAu ^ 0x9274u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9274u; }
    else { c->cpu_cycles += 2u; c->pc = 0x92BAu; } return 1;
case 0x92BAu: /* CMP IMM C9 07 */
    c->pc = 0x92BCu;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x92BCu: /* BEQ REL F0 B6 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x92BEu ^ 0x9274u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9274u; }
    else { c->cpu_cycles += 2u; c->pc = 0x92BEu; } return 1;
case 0x92BEu: /* TAX IMP AA */
    c->pc = 0x92BFu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x92BFu: /* DEX IMP CA */
    c->pc = 0x92C0u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x92C0u: /* LDA ZP A5 FE */
    c->pc = 0x92C2u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92C2u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x92C4u ^ 0x92C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x92C4u; } return 1;
case 0x92C4u: /* CLC IMP 18 */
    c->pc = 0x92C5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x92C5u: /* TXA IMP 8A */
    c->pc = 0x92C6u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92C6u: /* ADC IMM 69 06 */
    c->pc = 0x92C8u;
    v = 0x06u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x92C8u: /* TAX IMP AA */
    c->pc = 0x92C9u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x92C9u: /* STX ZP 86 A9 */
    c->pc = 0x92CBu;
    ea = 0xA9u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x92CBu: /* JSR ABS 20 6C CC */
    push(c, 0x92u); push(c, 0xCDu); c->pc = 0xCC6Cu; c->cpu_cycles += 6u; return 1;
case 0x92CEu: /* LDA ZP A5 1A */
    c->pc = 0x92D0u;
    ea = 0x1Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D0u: /* PHA IMP 48 */
    c->pc = 0x92D1u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D1u: /* LDX IMM A2 00 */
    c->pc = 0x92D3u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x92D3u: /* STX ZP 86 FD */
    c->pc = 0x92D5u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x92D5u: /* CLC IMP 18 */
    c->pc = 0x92D6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x92D6u: /* LDA ZP A5 52 */
    c->pc = 0x92D8u;
    ea = 0x52u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D8u: /* ADC ABX 7D 7F 95 */
    c->pc = 0x92DBu;
    ea = (uint16_t)(0x957Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x957Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92DBu: /* STA ZP 85 08 */
    c->pc = 0x92DDu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92DDu: /* LDA ZP A5 53 */
    c->pc = 0x92DFu;
    ea = 0x53u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92DFu: /* ADC IMM 69 00 */
    c->pc = 0x92E1u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x92E1u: /* STA ZP 85 09 */
    c->pc = 0x92E3u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92E3u: /* LDA ZP A5 08 */
    c->pc = 0x92E5u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92E5u: /* LSR ZP 46 09 */
    c->pc = 0x92E7u;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92E7u: /* ROR IMP 6A */
    c->pc = 0x92E8u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92E8u: /* LSR ZP 46 09 */
    c->pc = 0x92EAu;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92EAu: /* ROR IMP 6A */
    c->pc = 0x92EBu;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92EBu: /* STA ZP 85 08 */
    c->pc = 0x92EDu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92EDu: /* AND IMM 29 3F */
    c->pc = 0x92EFu;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92EFu: /* STA ZP 85 1A */
    c->pc = 0x92F1u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92F1u: /* CLC IMP 18 */
    c->pc = 0x92F2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x92F2u: /* LDA ZP A5 09 */
    c->pc = 0x92F4u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92F4u: /* ADC IMM 69 85 */
    c->pc = 0x92F6u;
    v = 0x85u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x92F6u: /* STA ZP 85 09 */
    c->pc = 0x92F8u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92F8u: /* LDA IMM A9 00 */
    c->pc = 0x92FAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92FAu: /* STA ZP 85 1B */
    c->pc = 0x92FCu;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92FCu: /* JSR ABS 20 0B CA */
    push(c, 0x92u); push(c, 0xFEu); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0x92FFu: /* LDA ZP A5 FD */
    c->pc = 0x9301u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9301u: /* CMP IMM C9 08 */
    c->pc = 0x9303u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9303u: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9305u ^ 0x9317u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9317u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9305u; } return 1;
case 0x9305u: /* LDX ZP A6 A9 */
    c->pc = 0x9307u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9307u: /* LDA ABX BD 64 96 */
    c->pc = 0x930Au;
    ea = (uint16_t)(0x9664u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9664u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x930Au: /* TAY IMP A8 */
    c->pc = 0x930Bu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x930Bu: /* CPX IMM E0 09 */
    c->pc = 0x930Du;
    v = 0x09u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x930Du: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x930Fu ^ 0x9313u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9313u; }
    else { c->cpu_cycles += 2u; c->pc = 0x930Fu; } return 1;
case 0x930Fu: /* LDX IMM A2 00 */
    c->pc = 0x9311u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9311u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9313u ^ 0x931Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x931Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9313u; } return 1;
case 0x9313u: /* LDX IMM A2 05 */
    c->pc = 0x9315u;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9315u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9317u ^ 0x931Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x931Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9317u; } return 1;
case 0x9317u: /* LDY IMM A0 90 */
    c->pc = 0x9319u;
    v = 0x90u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9319u: /* LDX IMM A2 00 */
    c->pc = 0x931Bu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x931Bu: /* JSR ABS 20 60 C7 */
    push(c, 0x93u); push(c, 0x1Du); c->pc = 0xC760u; c->cpu_cycles += 6u; return 1;
case 0x931Eu: /* JSR ABS 20 AB C0 */
    push(c, 0x93u); push(c, 0x20u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9321u: /* LDX ZP A6 FD */
    c->pc = 0x9323u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9323u: /* INX IMP E8 */
    c->pc = 0x9324u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9324u: /* CPX IMM E0 0F */
    c->pc = 0x9326u;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9326u: /* BNE REL D0 AB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9328u ^ 0x92D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9328u; } return 1;
case 0x9328u: /* STX ZP 86 FD */
    c->pc = 0x932Au;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x932Au: /* LDY IMM A0 90 */
    c->pc = 0x932Cu;
    v = 0x90u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x932Cu: /* LDX IMM A2 00 */
    c->pc = 0x932Eu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x932Eu: /* JSR ABS 20 60 C7 */
    push(c, 0x93u); push(c, 0x30u); c->pc = 0xC760u; c->cpu_cycles += 6u; return 1;
case 0x9331u: /* JSR ABS 20 ED D2 */
    push(c, 0x93u); push(c, 0x33u); c->pc = 0xD2EDu; c->cpu_cycles += 6u; return 1;
case 0x9334u: /* JSR ABS 20 AB C0 */
    push(c, 0x93u); push(c, 0x36u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9337u: /* PLA IMP 68 */
    c->pc = 0x9338u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9338u: /* STA ZP 85 1A */
    c->pc = 0x933Au;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x933Au: /* LDA ZP A5 2A */
    c->pc = 0x933Cu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x933Cu: /* CMP IMM C9 0A */
    c->pc = 0x933Eu;
    v = 0x0Au;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x933Eu: /* BNE REL D0 18 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9340u ^ 0x9358u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9358u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9340u; } return 1;
case 0x9340u: /* LDA ZP A5 B1 */
    c->pc = 0x9342u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9342u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9344u ^ 0x9358u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9358u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9344u; } return 1;
case 0x9344u: /* LDX IMM A2 02 */
    c->pc = 0x9346u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9346u: /* LDA ABX BD 93 93 */
    c->pc = 0x9349u;
    ea = (uint16_t)(0x9393u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9393u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9349u: /* STA ABX 9D 5B 03 */
    c->pc = 0x934Cu;
    ea = (uint16_t)(0x035Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x934Cu: /* STA ABX 9D 7B 03 */
    c->pc = 0x934Fu;
    ea = (uint16_t)(0x037Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x934Fu: /* STA ABX 9D 8B 03 */
    c->pc = 0x9352u;
    ea = (uint16_t)(0x038Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9352u: /* STA ABX 9D 9B 03 */
    c->pc = 0x9355u;
    ea = (uint16_t)(0x039Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9355u: /* DEX IMP CA */
    c->pc = 0x9356u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9356u: /* BPL REL 10 EE */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9358u ^ 0x9346u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9346u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9358u; } return 1;
case 0x9358u: /* LDX IMM A2 11 */
    c->pc = 0x935Au;
    v = 0x11u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x935Au: /* LDA ABX BD 00 07 */
    c->pc = 0x935Du;
    ea = (uint16_t)(0x0700u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x935Du: /* STA ABX 9D 54 03 */
    c->pc = 0x9360u;
    ea = (uint16_t)(0x0354u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9360u: /* DEX IMP CA */
    c->pc = 0x9361u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9361u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9363u ^ 0x935Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x935Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9363u; } return 1;
case 0x9363u: /* PLA IMP 68 */
    c->pc = 0x9364u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9364u: /* STA ZP 85 1F */
    c->pc = 0x9366u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9366u: /* PLA IMP 68 */
    c->pc = 0x9367u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9367u: /* STA ZP 85 20 */
    c->pc = 0x9369u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9369u: /* PLA IMP 68 */
    c->pc = 0x936Au;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x936Au: /* STA ZP 85 B9 */
    c->pc = 0x936Cu;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x936Cu: /* PLA IMP 68 */
    c->pc = 0x936Du;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x936Du: /* STA ZP 85 B8 */
    c->pc = 0x936Fu;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x936Fu: /* PLA IMP 68 */
    c->pc = 0x9370u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9370u: /* STA ZP 85 B7 */
    c->pc = 0x9372u;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9372u: /* PLA IMP 68 */
    c->pc = 0x9373u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9373u: /* STA ZP 85 B6 */
    c->pc = 0x9375u;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9375u: /* PLA IMP 68 */
    c->pc = 0x9376u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9376u: /* STA ZP 85 B5 */
    c->pc = 0x9378u;
    ea = 0xB5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9378u: /* LDA IMM A9 00 */
    c->pc = 0x937Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x937Au: /* STA ZP 85 AC */
    c->pc = 0x937Cu;
    ea = 0xACu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x937Cu: /* STA ZP 85 2C */
    c->pc = 0x937Eu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x937Eu: /* STA ABS 8D 80 06 */
    c->pc = 0x9381u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9381u: /* STA ABS 8D A0 06 */
    c->pc = 0x9384u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9384u: /* LDA IMM A9 1A */
    c->pc = 0x9386u;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9386u: /* STA ABS 8D 00 04 */
    c->pc = 0x9389u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9389u: /* LDA IMM A9 03 */
    c->pc = 0x938Bu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x938Bu: /* STA ZP 85 AA */
    c->pc = 0x938Du;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x938Du: /* LDA IMM A9 30 */
    c->pc = 0x938Fu;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x938Fu: /* JSR ABS 20 51 C0 */
    push(c, 0x93u); push(c, 0x91u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9392u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9396u: /* JSR ABS 20 6C CC */
    push(c, 0x93u); push(c, 0x98u); c->pc = 0xCC6Cu; c->cpu_cycles += 6u; return 1;
case 0x9399u: /* LDA ZP A5 52 */
    c->pc = 0x939Bu;
    ea = 0x52u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x939Bu: /* AND IMM 29 E0 */
    c->pc = 0x939Du;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x939Du: /* SEC IMP 38 */
    c->pc = 0x939Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x939Eu: /* SBC ZP E5 1F */
    c->pc = 0x93A0u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x93A0u: /* STA ZP 85 08 */
    c->pc = 0x93A2u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93A2u: /* LDY IMM A0 00 */
    c->pc = 0x93A4u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x93A4u: /* LDA ABY B9 2C 96 */
    c->pc = 0x93A7u;
    ea = (uint16_t)(0x962Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x962Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x93A7u: /* STA ABY 99 00 02 */
    c->pc = 0x93AAu;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x93AAu: /* INY IMP C8 */
    c->pc = 0x93ABu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x93ABu: /* CPY IMM C0 14 */
    c->pc = 0x93ADu;
    v = 0x14u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x93ADu: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x93AFu ^ 0x93A4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93A4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93AFu; } return 1;
case 0x93AFu: /* LDA ZP A5 9A */
    c->pc = 0x93B1u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93B1u: /* ASL IMP 0A */
    c->pc = 0x93B2u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93B2u: /* ORA IMM 09 01 */
    c->pc = 0x93B4u;
    v = 0x01u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93B4u: /* STA ZP 85 07 */
    c->pc = 0x93B6u;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93B6u: /* LDA IMM A9 05 */
    c->pc = 0x93B8u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93B8u: /* STA ZP 85 01 */
    c->pc = 0x93BAu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93BAu: /* LDX IMM A2 00 */
    c->pc = 0x93BCu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x93BCu: /* LDA ZP A5 FE */
    c->pc = 0x93BEu;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93BEu: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x93C0u ^ 0x93D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93C0u; } return 1;
case 0x93C0u: /* LDX IMM A2 06 */
    c->pc = 0x93C2u;
    v = 0x06u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x93C2u: /* LDA ZP A5 9A */
    c->pc = 0x93C4u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93C4u: /* STA ZP 85 07 */
    c->pc = 0x93C6u;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93C6u: /* LDA ZP A5 9B */
    c->pc = 0x93C8u;
    ea = 0x9Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93C8u: /* ASL ZP 06 07 */
    c->pc = 0x93CAu;
    ea = 0x07u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x93CAu: /* ROL IMP 2A */
    c->pc = 0x93CBu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93CBu: /* ASL ZP 06 07 */
    c->pc = 0x93CDu;
    ea = 0x07u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x93CDu: /* ROL IMP 2A */
    c->pc = 0x93CEu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93CEu: /* ASL ZP 06 07 */
    c->pc = 0x93D0u;
    ea = 0x07u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x93D0u: /* ROL IMP 2A */
    c->pc = 0x93D1u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93D1u: /* STA ZP 85 07 */
    c->pc = 0x93D3u;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93D3u: /* LDA ZP A5 07 */
    c->pc = 0x93D5u;
    ea = 0x07u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93D5u: /* STA ZP 85 02 */
    c->pc = 0x93D7u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93D7u: /* LDA IMM A9 44 */
    c->pc = 0x93D9u;
    v = 0x44u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93D9u: /* STA ZP 85 00 */
    c->pc = 0x93DBu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93DBu: /* STA ABY 99 00 02 */
    c->pc = 0x93DEu;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x93DEu: /* LSR ZP 46 02 */
    c->pc = 0x93E0u;
    ea = 0x02u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x93E0u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x93E2u ^ 0x93E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93E2u; } return 1;
case 0x93E2u: /* LDA IMM A9 F8 */
    c->pc = 0x93E4u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93E4u: /* STA ABY 99 00 02 */
    c->pc = 0x93E7u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x93E7u: /* LDA ABX BD 40 96 */
    c->pc = 0x93EAu;
    ea = (uint16_t)(0x9640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x93EAu: /* STA ABY 99 01 02 */
    c->pc = 0x93EDu;
    ea = (uint16_t)(0x0201u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x93EDu: /* LDA IMM A9 01 */
    c->pc = 0x93EFu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93EFu: /* STA ABY 99 02 02 */
    c->pc = 0x93F2u;
    ea = (uint16_t)(0x0202u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x93F2u: /* LDA IMM A9 0C */
    c->pc = 0x93F4u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93F4u: /* STA ABY 99 03 02 */
    c->pc = 0x93F7u;
    ea = (uint16_t)(0x0203u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x93F7u: /* CLC IMP 18 */
    c->pc = 0x93F8u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x93F8u: /* LDA ZP A5 00 */
    c->pc = 0x93FAu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93FAu: /* ADC IMM 69 10 */
    c->pc = 0x93FCu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x93FCu: /* STA ZP 85 00 */
    c->pc = 0x93FEu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93FEu: /* INY IMP C8 */
    c->pc = 0x93FFu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x93FFu: /* INY IMP C8 */
    c->pc = 0x9400u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9400u: /* INY IMP C8 */
    c->pc = 0x9401u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9401u: /* INY IMP C8 */
    c->pc = 0x9402u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9402u: /* INX IMP E8 */
    c->pc = 0x9403u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9403u: /* DEC ZP C6 01 */
    c->pc = 0x9405u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9405u: /* BPL REL 10 D4 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9407u ^ 0x93DBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93DBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9407u; } return 1;
case 0x9407u: /* LDA ZP A5 FE */
    c->pc = 0x9409u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9409u: /* BNE REL D0 6A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x940Bu ^ 0x9475u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9475u; }
    else { c->cpu_cycles += 2u; c->pc = 0x940Bu; } return 1;
case 0x940Bu: /* LDX IMM A2 00 */
    c->pc = 0x940Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x940Du: /* LDA ABX BD 4C 96 */
    c->pc = 0x9410u;
    ea = (uint16_t)(0x964Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x964Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9410u: /* STA ABY 99 00 02 */
    c->pc = 0x9413u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9413u: /* INY IMP C8 */
    c->pc = 0x9414u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9414u: /* INX IMP E8 */
    c->pc = 0x9415u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9415u: /* CPX IMM E0 04 */
    c->pc = 0x9417u;
    v = 0x04u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9417u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9419u ^ 0x940Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x940Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9419u; } return 1;
case 0x9419u: /* STY ZP 84 00 */
    c->pc = 0x941Bu;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x941Bu: /* LDA IMM A9 44 */
    c->pc = 0x941Du;
    v = 0x44u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x941Du: /* STA ZP 85 02 */
    c->pc = 0x941Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x941Fu: /* LDA ABS AD C0 06 */
    c->pc = 0x9422u;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9422u: /* JSR ABS 20 2B 95 */
    push(c, 0x94u); push(c, 0x24u); c->pc = 0x952Bu; c->cpu_cycles += 6u; return 1;
case 0x9425u: /* LDA ZP A5 07 */
    c->pc = 0x9427u;
    ea = 0x07u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9427u: /* LSR IMP 4A */
    c->pc = 0x9428u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9428u: /* STA ZP 85 04 */
    c->pc = 0x942Au;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x942Au: /* LDX IMM A2 00 */
    c->pc = 0x942Cu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x942Cu: /* LDA IMM A9 54 */
    c->pc = 0x942Eu;
    v = 0x54u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x942Eu: /* STX ZP 86 03 */
    c->pc = 0x9430u;
    ea = 0x03u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9430u: /* STA ZP 85 02 */
    c->pc = 0x9432u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9432u: /* LSR ZP 46 04 */
    c->pc = 0x9434u;
    ea = 0x04u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9434u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9436u ^ 0x9439u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9439u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9436u; } return 1;
case 0x9436u: /* JSR ABS 20 29 95 */
    push(c, 0x94u); push(c, 0x38u); c->pc = 0x9529u; c->cpu_cycles += 6u; return 1;
case 0x9439u: /* CLC IMP 18 */
    c->pc = 0x943Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x943Au: /* LDA ZP A5 02 */
    c->pc = 0x943Cu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x943Cu: /* ADC IMM 69 10 */
    c->pc = 0x943Eu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x943Eu: /* LDX ZP A6 03 */
    c->pc = 0x9440u;
    ea = 0x03u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9440u: /* INX IMP E8 */
    c->pc = 0x9441u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9441u: /* CPX IMM E0 05 */
    c->pc = 0x9443u;
    v = 0x05u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9443u: /* BNE REL D0 E9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9445u ^ 0x942Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x942Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9445u; } return 1;
case 0x9445u: /* LDY ZP A4 00 */
    c->pc = 0x9447u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9447u: /* LDA ZP A5 A7 */
    c->pc = 0x9449u;
    ea = 0xA7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9449u: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x944Bu ^ 0x9472u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9472u; }
    else { c->cpu_cycles += 2u; c->pc = 0x944Bu; } return 1;
case 0x944Bu: /* STA ZP 85 02 */
    c->pc = 0x944Du;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x944Du: /* LDA IMM A9 1C */
    c->pc = 0x944Fu;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x944Fu: /* STA ZP 85 01 */
    c->pc = 0x9451u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9451u: /* LDA IMM A9 A4 */
    c->pc = 0x9453u;
    v = 0xA4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9453u: /* STA ABY 99 00 02 */
    c->pc = 0x9456u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9456u: /* LDA IMM A9 13 */
    c->pc = 0x9458u;
    v = 0x13u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9458u: /* STA ABY 99 01 02 */
    c->pc = 0x945Bu;
    ea = (uint16_t)(0x0201u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x945Bu: /* LDA IMM A9 00 */
    c->pc = 0x945Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x945Du: /* STA ABY 99 02 02 */
    c->pc = 0x9460u;
    ea = (uint16_t)(0x0202u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9460u: /* LDA ZP A5 01 */
    c->pc = 0x9462u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9462u: /* STA ABY 99 03 02 */
    c->pc = 0x9465u;
    ea = (uint16_t)(0x0203u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9465u: /* INY IMP C8 */
    c->pc = 0x9466u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9466u: /* INY IMP C8 */
    c->pc = 0x9467u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9467u: /* INY IMP C8 */
    c->pc = 0x9468u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9468u: /* INY IMP C8 */
    c->pc = 0x9469u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9469u: /* CLC IMP 18 */
    c->pc = 0x946Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x946Au: /* LDA ZP A5 01 */
    c->pc = 0x946Cu;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x946Cu: /* ADC IMM 69 10 */
    c->pc = 0x946Eu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x946Eu: /* DEC ZP C6 02 */
    c->pc = 0x9470u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9470u: /* BNE REL D0 DD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9472u ^ 0x944Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x944Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9472u; } return 1;
case 0x9472u: /* JMP ABS 4C DD 94 */
    c->pc = 0x94DDu; c->cpu_cycles += 3u; return 1;
case 0x9475u: /* LDX IMM A2 04 */
    c->pc = 0x9477u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9477u: /* LDA ABX BD 4C 96 */
    c->pc = 0x947Au;
    ea = (uint16_t)(0x964Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x964Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x947Au: /* STA ABY 99 00 02 */
    c->pc = 0x947Du;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x947Du: /* INY IMP C8 */
    c->pc = 0x947Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x947Eu: /* INX IMP E8 */
    c->pc = 0x947Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x947Fu: /* CPX IMM E0 18 */
    c->pc = 0x9481u;
    v = 0x18u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9481u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9483u ^ 0x9477u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9477u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9483u; } return 1;
case 0x9483u: /* STY ZP 84 00 */
    c->pc = 0x9485u;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9485u: /* LDA ZP A5 07 */
    c->pc = 0x9487u;
    ea = 0x07u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9487u: /* STA ZP 85 04 */
    c->pc = 0x9489u;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9489u: /* LDX IMM A2 05 */
    c->pc = 0x948Bu;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x948Bu: /* LDA IMM A9 44 */
    c->pc = 0x948Du;
    v = 0x44u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x948Du: /* STX ZP 86 03 */
    c->pc = 0x948Fu;
    ea = 0x03u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x948Fu: /* STA ZP 85 02 */
    c->pc = 0x9491u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9491u: /* LSR ZP 46 04 */
    c->pc = 0x9493u;
    ea = 0x04u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9493u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9495u ^ 0x9498u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9498u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9495u; } return 1;
case 0x9495u: /* JSR ABS 20 29 95 */
    push(c, 0x94u); push(c, 0x97u); c->pc = 0x9529u; c->cpu_cycles += 6u; return 1;
case 0x9498u: /* CLC IMP 18 */
    c->pc = 0x9499u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9499u: /* LDA ZP A5 02 */
    c->pc = 0x949Bu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x949Bu: /* ADC IMM 69 10 */
    c->pc = 0x949Du;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x949Du: /* LDX ZP A6 03 */
    c->pc = 0x949Fu;
    ea = 0x03u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x949Fu: /* INX IMP E8 */
    c->pc = 0x94A0u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x94A0u: /* CPX IMM E0 0B */
    c->pc = 0x94A2u;
    v = 0x0Bu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x94A2u: /* BNE REL D0 E9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x94A4u ^ 0x948Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x948Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x94A4u; } return 1;
case 0x94A4u: /* LDA ZP A5 A8 */
    c->pc = 0x94A6u;
    ea = 0xA8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94A6u: /* STA ZP 85 01 */
    c->pc = 0x94A8u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94A8u: /* DEC ZP C6 01 */
    c->pc = 0x94AAu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x94AAu: /* LDA IMM A9 0A */
    c->pc = 0x94ACu;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94ACu: /* STA ZP 85 02 */
    c->pc = 0x94AEu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94AEu: /* JSR ABS 20 4E C8 */
    push(c, 0x94u); push(c, 0xB0u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x94B1u: /* LDY ZP A4 00 */
    c->pc = 0x94B3u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x94B3u: /* LDA IMM A9 A5 */
    c->pc = 0x94B5u;
    v = 0xA5u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94B5u: /* STA ABY 99 00 02 */
    c->pc = 0x94B8u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94B8u: /* STA ABY 99 04 02 */
    c->pc = 0x94BBu;
    ea = (uint16_t)(0x0204u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94BBu: /* CLC IMP 18 */
    c->pc = 0x94BCu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x94BCu: /* LDA ZP A5 03 */
    c->pc = 0x94BEu;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94BEu: /* ADC IMM 69 14 */
    c->pc = 0x94C0u;
    v = 0x14u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x94C0u: /* STA ABY 99 01 02 */
    c->pc = 0x94C3u;
    ea = (uint16_t)(0x0201u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94C3u: /* CLC IMP 18 */
    c->pc = 0x94C4u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x94C4u: /* LDA ZP A5 04 */
    c->pc = 0x94C6u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94C6u: /* ADC IMM 69 14 */
    c->pc = 0x94C8u;
    v = 0x14u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x94C8u: /* STA ABY 99 05 02 */
    c->pc = 0x94CBu;
    ea = (uint16_t)(0x0205u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94CBu: /* LDA IMM A9 01 */
    c->pc = 0x94CDu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94CDu: /* STA ABY 99 02 02 */
    c->pc = 0x94D0u;
    ea = (uint16_t)(0x0202u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94D0u: /* STA ABY 99 06 02 */
    c->pc = 0x94D3u;
    ea = (uint16_t)(0x0206u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94D3u: /* LDA IMM A9 38 */
    c->pc = 0x94D5u;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94D5u: /* STA ABY 99 03 02 */
    c->pc = 0x94D8u;
    ea = (uint16_t)(0x0203u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94D8u: /* LDA IMM A9 40 */
    c->pc = 0x94DAu;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94DAu: /* STA ABY 99 07 02 */
    c->pc = 0x94DDu;
    ea = (uint16_t)(0x0207u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94DDu: /* LDY IMM A0 00 */
    c->pc = 0x94DFu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x94DFu: /* LDA ZP A5 1C */
    c->pc = 0x94E1u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94E1u: /* AND IMM 29 08 */
    c->pc = 0x94E3u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94E3u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x94E5u ^ 0x94E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x94E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94E5u; } return 1;
case 0x94E5u: /* LDY IMM A0 20 */
    c->pc = 0x94E7u;
    v = 0x20u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x94E7u: /* STY ZP 84 00 */
    c->pc = 0x94E9u;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x94E9u: /* LDX ZP A6 FD */
    c->pc = 0x94EBu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x94EBu: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x94EDu ^ 0x94F9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x94F9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94EDu; } return 1;
case 0x94EDu: /* LDA ZP A5 00 */
    c->pc = 0x94EFu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94EFu: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x94F1u ^ 0x9507u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9507u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94F1u; } return 1;
case 0x94F1u: /* LDA IMM A9 F8 */
    c->pc = 0x94F3u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94F3u: /* STA ABS 8D 00 02 */
    c->pc = 0x94F6u;
    ea = 0x0200u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94F6u: /* JMP ABS 4C 07 95 */
    c->pc = 0x9507u; c->cpu_cycles += 3u; return 1;
case 0x94F9u: /* DEX IMP CA */
    c->pc = 0x94FAu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x94FAu: /* TXA IMP 8A */
    c->pc = 0x94FBu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94FBu: /* ASL IMP 0A */
    c->pc = 0x94FCu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94FCu: /* ASL IMP 0A */
    c->pc = 0x94FDu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94FDu: /* TAY IMP A8 */
    c->pc = 0x94FEu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x94FEu: /* LDA ZP A5 00 */
    c->pc = 0x9500u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9500u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9502u ^ 0x9507u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9507u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9502u; } return 1;
case 0x9502u: /* LDA IMM A9 F8 */
    c->pc = 0x9504u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9504u: /* STA ABY 99 14 02 */
    c->pc = 0x9507u;
    ea = (uint16_t)(0x0214u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9507u: /* LDX IMM A2 00 */
    c->pc = 0x9509u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9509u: /* CLC IMP 18 */
    c->pc = 0x950Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x950Au: /* LDA ABX BD 03 02 */
    c->pc = 0x950Du;
    ea = (uint16_t)(0x0203u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0203u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x950Du: /* ADC ZP 65 08 */
    c->pc = 0x950Fu;
    ea = 0x08u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x950Fu: /* STA ABX 9D 03 02 */
    c->pc = 0x9512u;
    ea = (uint16_t)(0x0203u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9512u: /* INX IMP E8 */
    c->pc = 0x9513u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9513u: /* INX IMP E8 */
    c->pc = 0x9514u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9514u: /* INX IMP E8 */
    c->pc = 0x9515u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9515u: /* INX IMP E8 */
    c->pc = 0x9516u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9516u: /* BNE REL D0 F1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9518u ^ 0x9509u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9509u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9518u; } return 1;
case 0x9518u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9529u: /* LDA ZPX B5 9C */
    c->pc = 0x952Bu;
    ea = (uint8_t)(0x9Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x952Bu: /* STA ZP 85 01 */
    c->pc = 0x952Du;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x952Du: /* LDX IMM A2 06 */
    c->pc = 0x952Fu;
    v = 0x06u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x952Fu: /* LDA ZP A5 02 */
    c->pc = 0x9531u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9531u: /* STA ABY 99 00 02 */
    c->pc = 0x9534u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9534u: /* SEC IMP 38 */
    c->pc = 0x9535u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9535u: /* LDA ZP A5 01 */
    c->pc = 0x9537u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9537u: /* SBC IMM E9 04 */
    c->pc = 0x9539u;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9539u: /* BCS REL B0 0E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x953Bu ^ 0x9549u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9549u; }
    else { c->cpu_cycles += 2u; c->pc = 0x953Bu; } return 1;
case 0x953Bu: /* LDY ZP A4 01 */
    c->pc = 0x953Du;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x953Du: /* LDA IMM A9 00 */
    c->pc = 0x953Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x953Fu: /* STA ZP 85 01 */
    c->pc = 0x9541u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9541u: /* LDA ABY B9 6C 95 */
    c->pc = 0x9544u;
    ea = (uint16_t)(0x956Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x956Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9544u: /* LDY ZP A4 00 */
    c->pc = 0x9546u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9546u: /* JMP ABS 4C 4D 95 */
    c->pc = 0x954Du; c->cpu_cycles += 3u; return 1;
case 0x9549u: /* STA ZP 85 01 */
    c->pc = 0x954Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x954Bu: /* LDA IMM A9 90 */
    c->pc = 0x954Du;
    v = 0x90u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x954Du: /* STA ABY 99 01 02 */
    c->pc = 0x9550u;
    ea = (uint16_t)(0x0201u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9550u: /* LDA IMM A9 01 */
    c->pc = 0x9552u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9552u: /* STA ABY 99 02 02 */
    c->pc = 0x9555u;
    ea = (uint16_t)(0x0202u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9555u: /* LDA ABX BD 65 95 */
    c->pc = 0x9558u;
    ea = (uint16_t)(0x9565u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9565u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9558u: /* STA ABY 99 03 02 */
    c->pc = 0x955Bu;
    ea = (uint16_t)(0x0203u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x955Bu: /* INY IMP C8 */
    c->pc = 0x955Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x955Cu: /* INY IMP C8 */
    c->pc = 0x955Du;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x955Du: /* INY IMP C8 */
    c->pc = 0x955Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x955Eu: /* INY IMP C8 */
    c->pc = 0x955Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x955Fu: /* STY ZP 84 00 */
    c->pc = 0x9561u;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9561u: /* DEX IMP CA */
    c->pc = 0x9562u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9562u: /* BPL REL 10 CB */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9564u ^ 0x952Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x952Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9564u; } return 1;
case 0x9564u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9678u: /* LDA IMM A9 10 */
    c->pc = 0x967Au;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x967Au: /* STA ZP 85 F7 */
    c->pc = 0x967Cu;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x967Cu: /* STA ABS 8D 00 20 */
    c->pc = 0x967Fu;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x967Fu: /* LDA IMM A9 06 */
    c->pc = 0x9681u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9681u: /* STA ZP 85 F8 */
    c->pc = 0x9683u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9683u: /* STA ABS 8D 01 20 */
    c->pc = 0x9686u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9686u: /* LDA IMM A9 0F */
    c->pc = 0x9688u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9688u: /* JSR ABS 20 5D C0 */
    push(c, 0x96u); push(c, 0x8Au); c->pc = 0xC05Du; c->cpu_cycles += 6u; return 1;
case 0x968Bu: /* JSR ABS 20 7E 84 */
    push(c, 0x96u); push(c, 0x8Du); c->pc = 0x847Eu; c->cpu_cycles += 6u; return 1;
case 0x968Eu: /* LDA IMM A9 01 */
    c->pc = 0x9690u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9690u: /* JSR ABS 20 44 C6 */
    push(c, 0x96u); push(c, 0x92u); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0x9693u: /* LDA IMM A9 20 */
    c->pc = 0x9695u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9695u: /* STA ABS 8D 06 20 */
    c->pc = 0x9698u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9698u: /* LDY IMM A0 00 */
    c->pc = 0x969Au;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x969Au: /* STY ABS 8C 06 20 */
    c->pc = 0x969Du;
    ea = 0x2006u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x969Du: /* LDA ABY B9 83 9B */
    c->pc = 0x96A0u;
    ea = (uint16_t)(0x9B83u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B83u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96A0u: /* LDX IMM A2 40 */
    c->pc = 0x96A2u;
    v = 0x40u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96A2u: /* STA ABS 8D 07 20 */
    c->pc = 0x96A5u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96A5u: /* DEX IMP CA */
    c->pc = 0x96A6u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96A6u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x96A8u ^ 0x96A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96A8u; } return 1;
case 0x96A8u: /* INY IMP C8 */
    c->pc = 0x96A9u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x96A9u: /* CPY IMM C0 10 */
    c->pc = 0x96ABu;
    v = 0x10u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x96ABu: /* BNE REL D0 F0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x96ADu ^ 0x969Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x969Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x96ADu; } return 1;
case 0x96ADu: /* LDA IMM A9 28 */
    c->pc = 0x96AFu;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96AFu: /* STA ABS 8D 06 20 */
    c->pc = 0x96B2u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96B2u: /* LDY IMM A0 00 */
    c->pc = 0x96B4u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x96B4u: /* STY ABS 8C 06 20 */
    c->pc = 0x96B7u;
    ea = 0x2006u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x96B7u: /* LDA IMM A9 AC */
    c->pc = 0x96B9u;
    v = 0xACu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96B9u: /* STA ZP 85 09 */
    c->pc = 0x96BBu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96BBu: /* LDA IMM A9 03 */
    c->pc = 0x96BDu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96BDu: /* JSR ABS 20 28 C6 */
    push(c, 0x96u); push(c, 0xBFu); c->pc = 0xC628u; c->cpu_cycles += 6u; return 1;
case 0x96C0u: /* LDX IMM A2 1F */
    c->pc = 0x96C2u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96C2u: /* LDA ABX BD 93 9B */
    c->pc = 0x96C5u;
    ea = (uint16_t)(0x9B93u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B93u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96C5u: /* STA ABX 9D 56 03 */
    c->pc = 0x96C8u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96C8u: /* DEX IMP CA */
    c->pc = 0x96C9u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96C9u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x96CBu ^ 0x96C2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96C2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96CBu; } return 1;
case 0x96CBu: /* JSR ABS 20 73 84 */
    push(c, 0x96u); push(c, 0xCDu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x96CEu: /* LDA ZP A5 2A */
    c->pc = 0x96D0u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96D0u: /* CMP IMM C9 09 */
    c->pc = 0x96D2u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x96D2u: /* BCC REL 90 06 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x96D4u ^ 0x96DAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96DAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x96D4u; } return 1;
case 0x96D4u: /* JSR ABS 20 27 9B */
    push(c, 0x96u); push(c, 0xD6u); c->pc = 0x9B27u; c->cpu_cycles += 6u; return 1;
case 0x96D7u: /* JMP ABS 4C 45 99 */
    c->pc = 0x9945u; c->cpu_cycles += 3u; return 1;
case 0x96DAu: /* LDA IMM A9 12 */
    c->pc = 0x96DCu;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96DCu: /* JSR ABS 20 51 C0 */
    push(c, 0x96u); push(c, 0xDEu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x96DFu: /* JSR ABS 20 1D A5 */
    push(c, 0x96u); push(c, 0xE1u); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0x96E2u: /* LDA IMM A9 FF */
    c->pc = 0x96E4u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96E4u: /* STA ABS 8D 40 04 */
    c->pc = 0x96E7u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96E7u: /* STA ABS 8D 41 04 */
    c->pc = 0x96EAu;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96EAu: /* LDA IMM A9 D0 */
    c->pc = 0x96ECu;
    v = 0xD0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96ECu: /* STA ABS 8D 60 04 */
    c->pc = 0x96EFu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96EFu: /* STA ABS 8D 61 04 */
    c->pc = 0x96F2u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96F2u: /* LDA IMM A9 68 */
    c->pc = 0x96F4u;
    v = 0x68u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96F4u: /* STA ABS 8D A0 04 */
    c->pc = 0x96F7u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96F7u: /* LDA IMM A9 80 */
    c->pc = 0x96F9u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96F9u: /* STA ABS 8D A1 04 */
    c->pc = 0x96FCu;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96FCu: /* LDA IMM A9 00 */
    c->pc = 0x96FEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96FEu: /* STA ABS 8D 00 04 */
    c->pc = 0x9701u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9701u: /* STA ABS 8D 81 06 */
    c->pc = 0x9704u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9704u: /* STA ABS 8D 80 04 */
    c->pc = 0x9707u;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9707u: /* STA ABS 8D 81 04 */
    c->pc = 0x970Au;
    ea = 0x0481u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x970Au: /* STA ABS 8D C0 04 */
    c->pc = 0x970Du;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x970Du: /* STA ABS 8D C1 04 */
    c->pc = 0x9710u;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9710u: /* LDA IMM A9 01 */
    c->pc = 0x9712u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9712u: /* STA ABS 8D 01 04 */
    c->pc = 0x9715u;
    ea = 0x0401u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9715u: /* CLC IMP 18 */
    c->pc = 0x9716u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9716u: /* LDA ABS AD 80 04 */
    c->pc = 0x9719u;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9719u: /* ADC IMM 69 40 */
    c->pc = 0x971Bu;
    v = 0x40u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x971Bu: /* STA ABS 8D 80 04 */
    c->pc = 0x971Eu;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x971Eu: /* LDA ABS AD 60 04 */
    c->pc = 0x9721u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9721u: /* ADC IMM 69 01 */
    c->pc = 0x9723u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9723u: /* STA ABS 8D 60 04 */
    c->pc = 0x9726u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9726u: /* STA ABS 8D 61 04 */
    c->pc = 0x9729u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9729u: /* LDA ABS AD 40 04 */
    c->pc = 0x972Cu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x972Cu: /* ADC IMM 69 00 */
    c->pc = 0x972Eu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x972Eu: /* STA ABS 8D 40 04 */
    c->pc = 0x9731u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9731u: /* STA ABS 8D 41 04 */
    c->pc = 0x9734u;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9734u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9736u ^ 0x973Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x973Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9736u; } return 1;
case 0x9736u: /* LDA ABS AD 60 04 */
    c->pc = 0x9739u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9739u: /* CMP IMM C9 68 */
    c->pc = 0x973Bu;
    v = 0x68u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x973Bu: /* BCS REL B0 18 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x973Du ^ 0x9755u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9755u; }
    else { c->cpu_cycles += 2u; c->pc = 0x973Du; } return 1;
case 0x973Du: /* JSR ABS 20 C6 99 */
    push(c, 0x97u); push(c, 0x3Fu); c->pc = 0x99C6u; c->cpu_cycles += 6u; return 1;
case 0x9740u: /* JSR ABS 20 73 84 */
    push(c, 0x97u); push(c, 0x42u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9743u: /* LDX IMM A2 00 */
    c->pc = 0x9745u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9745u: /* STX ZP 86 00 */
    c->pc = 0x9747u;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9747u: /* JSR ABS 20 C8 9A */
    push(c, 0x97u); push(c, 0x49u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x974Au: /* LDX IMM A2 01 */
    c->pc = 0x974Cu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x974Cu: /* JSR ABS 20 C8 9A */
    push(c, 0x97u); push(c, 0x4Eu); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x974Fu: /* JSR ABS 20 AB C0 */
    push(c, 0x97u); push(c, 0x51u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9752u: /* JMP ABS 4C 15 97 */
    c->pc = 0x9715u; c->cpu_cycles += 3u; return 1;
case 0x9755u: /* JSR ABS 20 73 84 */
    push(c, 0x97u); push(c, 0x57u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9758u: /* LDX IMM A2 00 */
    c->pc = 0x975Au;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x975Au: /* STX ZP 86 00 */
    c->pc = 0x975Cu;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x975Cu: /* JSR ABS 20 C8 9A */
    push(c, 0x97u); push(c, 0x5Eu); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x975Fu: /* LDX IMM A2 01 */
    c->pc = 0x9761u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9761u: /* JSR ABS 20 C8 9A */
    push(c, 0x97u); push(c, 0x63u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x9764u: /* LDA IMM A9 3E */
    c->pc = 0x9766u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9766u: /* STA ZP 85 FD */
    c->pc = 0x9768u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9768u: /* JSR ABS 20 C6 99 */
    push(c, 0x97u); push(c, 0x6Au); c->pc = 0x99C6u; c->cpu_cycles += 6u; return 1;
case 0x976Bu: /* LDX IMM A2 00 */
    c->pc = 0x976Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x976Du: /* STX ZP 86 00 */
    c->pc = 0x976Fu;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x976Fu: /* JSR ABS 20 C8 9A */
    push(c, 0x97u); push(c, 0x71u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x9772u: /* LDX IMM A2 01 */
    c->pc = 0x9774u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9774u: /* JSR ABS 20 C8 9A */
    push(c, 0x97u); push(c, 0x76u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x9777u: /* JSR ABS 20 AB C0 */
    push(c, 0x97u); push(c, 0x79u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x977Au: /* DEC ZP C6 FD */
    c->pc = 0x977Cu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x977Cu: /* BNE REL D0 EA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x977Eu ^ 0x9768u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9768u; }
    else { c->cpu_cycles += 2u; c->pc = 0x977Eu; } return 1;
case 0x977Eu: /* LDA IMM A9 04 */
    c->pc = 0x9780u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9780u: /* STA ABS 8D 02 04 */
    c->pc = 0x9783u;
    ea = 0x0402u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9783u: /* LDA IMM A9 6C */
    c->pc = 0x9785u;
    v = 0x6Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9785u: /* STA ABS 8D 62 04 */
    c->pc = 0x9788u;
    ea = 0x0462u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9788u: /* LDA IMM A9 70 */
    c->pc = 0x978Au;
    v = 0x70u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x978Au: /* STA ABS 8D A2 04 */
    c->pc = 0x978Du;
    ea = 0x04A2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x978Du: /* LDA IMM A9 00 */
    c->pc = 0x978Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x978Fu: /* STA ABS 8D 42 04 */
    c->pc = 0x9792u;
    ea = 0x0442u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9792u: /* LDA IMM A9 50 */
    c->pc = 0x9794u;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9794u: /* STA ZP 85 FD */
    c->pc = 0x9796u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9796u: /* SEC IMP 38 */
    c->pc = 0x9797u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9797u: /* LDA ABS AD C0 04 */
    c->pc = 0x979Au;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x979Au: /* SBC IMM E9 80 */
    c->pc = 0x979Cu;
    v = 0x80u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x979Cu: /* STA ABS 8D C0 04 */
    c->pc = 0x979Fu;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x979Fu: /* LDA ABS AD A0 04 */
    c->pc = 0x97A2u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97A2u: /* SBC IMM E9 00 */
    c->pc = 0x97A4u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97A4u: /* STA ABS 8D A0 04 */
    c->pc = 0x97A7u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97A7u: /* JSR ABS 20 C6 99 */
    push(c, 0x97u); push(c, 0xA9u); c->pc = 0x99C6u; c->cpu_cycles += 6u; return 1;
case 0x97AAu: /* JSR ABS 20 E5 99 */
    push(c, 0x97u); push(c, 0xACu); c->pc = 0x99E5u; c->cpu_cycles += 6u; return 1;
case 0x97ADu: /* JSR ABS 20 AB C0 */
    push(c, 0x97u); push(c, 0xAFu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x97B0u: /* DEC ZP C6 FD */
    c->pc = 0x97B2u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x97B2u: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x97B4u ^ 0x9796u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9796u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97B4u; } return 1;
case 0x97B4u: /* LDA IMM A9 FA */
    c->pc = 0x97B6u;
    v = 0xFAu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97B6u: /* STA ZP 85 FD */
    c->pc = 0x97B8u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97B8u: /* INC ABS EE 82 06 */
    c->pc = 0x97BBu;
    ea = 0x0682u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x97BBu: /* LDA ABS AD 82 06 */
    c->pc = 0x97BEu;
    ea = 0x0682u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97BEu: /* CMP IMM C9 08 */
    c->pc = 0x97C0u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x97C0u: /* BCC REL 90 14 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x97C2u ^ 0x97D6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97D6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97C2u; } return 1;
case 0x97C2u: /* LDA IMM A9 00 */
    c->pc = 0x97C4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97C4u: /* STA ABS 8D 82 06 */
    c->pc = 0x97C7u;
    ea = 0x0682u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97C7u: /* INC ABS EE 02 04 */
    c->pc = 0x97CAu;
    ea = 0x0402u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x97CAu: /* LDA ABS AD 02 04 */
    c->pc = 0x97CDu;
    ea = 0x0402u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97CDu: /* CMP IMM C9 06 */
    c->pc = 0x97CFu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x97CFu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x97D1u ^ 0x97D6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97D6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97D1u; } return 1;
case 0x97D1u: /* LDA IMM A9 04 */
    c->pc = 0x97D3u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97D3u: /* STA ABS 8D 02 04 */
    c->pc = 0x97D6u;
    ea = 0x0402u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97D6u: /* JSR ABS 20 C6 99 */
    push(c, 0x97u); push(c, 0xD8u); c->pc = 0x99C6u; c->cpu_cycles += 6u; return 1;
case 0x97D9u: /* JSR ABS 20 E5 99 */
    push(c, 0x97u); push(c, 0xDBu); c->pc = 0x99E5u; c->cpu_cycles += 6u; return 1;
case 0x97DCu: /* JSR ABS 20 AB C0 */
    push(c, 0x97u); push(c, 0xDEu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x97DFu: /* DEC ZP C6 FD */
    c->pc = 0x97E1u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x97E1u: /* BNE REL D0 D5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x97E3u ^ 0x97B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97E3u; } return 1;
case 0x97E3u: /* LDA IMM A9 50 */
    c->pc = 0x97E5u;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97E5u: /* STA ZP 85 FD */
    c->pc = 0x97E7u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97E7u: /* CLC IMP 18 */
    c->pc = 0x97E8u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x97E8u: /* LDA ABS AD C0 04 */
    c->pc = 0x97EBu;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97EBu: /* ADC IMM 69 80 */
    c->pc = 0x97EDu;
    v = 0x80u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97EDu: /* STA ABS 8D C0 04 */
    c->pc = 0x97F0u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97F0u: /* LDA ABS AD A0 04 */
    c->pc = 0x97F3u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97F3u: /* ADC IMM 69 00 */
    c->pc = 0x97F5u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97F5u: /* STA ABS 8D A0 04 */
    c->pc = 0x97F8u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97F8u: /* JSR ABS 20 C6 99 */
    push(c, 0x97u); push(c, 0xFAu); c->pc = 0x99C6u; c->cpu_cycles += 6u; return 1;
case 0x97FBu: /* JSR ABS 20 E5 99 */
    push(c, 0x97u); push(c, 0xFDu); c->pc = 0x99E5u; c->cpu_cycles += 6u; return 1;
case 0x97FEu: /* JSR ABS 20 AB C0 */
    push(c, 0x98u); push(c, 0x00u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9801u: /* DEC ZP C6 FD */
    c->pc = 0x9803u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9803u: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9805u ^ 0x97E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9805u; } return 1;
case 0x9805u: /* LDA IMM A9 FD */
    c->pc = 0x9807u;
    v = 0xFDu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9807u: /* JSR ABS 20 51 C0 */
    push(c, 0x98u); push(c, 0x09u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x980Au: /* LDA IMM A9 06 */
    c->pc = 0x980Cu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x980Cu: /* STA ABS 8D 00 04 */
    c->pc = 0x980Fu;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x980Fu: /* LDA IMM A9 01 */
    c->pc = 0x9811u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9811u: /* STA ABS 8D A0 06 */
    c->pc = 0x9814u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9814u: /* LDA IMM A9 00 */
    c->pc = 0x9816u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9816u: /* STA ZP 85 FD */
    c->pc = 0x9818u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9818u: /* STA ABS 8D 20 06 */
    c->pc = 0x981Bu;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x981Bu: /* LDA IMM A9 04 */
    c->pc = 0x981Du;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x981Du: /* STA ABS 8D 00 06 */
    c->pc = 0x9820u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9820u: /* LDA ABS AD A0 06 */
    c->pc = 0x9823u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9823u: /* BNE REL D0 36 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9825u ^ 0x985Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x985Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9825u; } return 1;
case 0x9825u: /* LDX IMM A2 00 */
    c->pc = 0x9827u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9827u: /* LDA ABS AD 60 04 */
    c->pc = 0x982Au;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x982Au: /* CMP IMM C9 68 */
    c->pc = 0x982Cu;
    v = 0x68u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x982Cu: /* BCS REL B0 01 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x982Eu ^ 0x982Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x982Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x982Eu; } return 1;
case 0x982Eu: /* INX IMP E8 */
    c->pc = 0x982Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x982Fu: /* CLC IMP 18 */
    c->pc = 0x9830u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9830u: /* LDA ABS AD 20 06 */
    c->pc = 0x9833u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9833u: /* ADC ABX 7D 88 9D */
    c->pc = 0x9836u;
    ea = (uint16_t)(0x9D88u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9D88u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9836u: /* STA ABS 8D 20 06 */
    c->pc = 0x9839u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9839u: /* LDA ABS AD 00 06 */
    c->pc = 0x983Cu;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x983Cu: /* ADC ABX 7D 8A 9D */
    c->pc = 0x983Fu;
    ea = (uint16_t)(0x9D8Au + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9D8Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x983Fu: /* STA ABS 8D 00 06 */
    c->pc = 0x9842u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9842u: /* SEC IMP 38 */
    c->pc = 0x9843u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9843u: /* LDA ABS AD 80 04 */
    c->pc = 0x9846u;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9846u: /* SBC ABS ED 20 06 */
    c->pc = 0x9849u;
    ea = 0x0620u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x9849u: /* STA ABS 8D 80 04 */
    c->pc = 0x984Cu;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x984Cu: /* LDA ABS AD 60 04 */
    c->pc = 0x984Fu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x984Fu: /* SBC ABS ED 00 06 */
    c->pc = 0x9852u;
    ea = 0x0600u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x9852u: /* STA ABS 8D 60 04 */
    c->pc = 0x9855u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9855u: /* CMP IMM C9 18 */
    c->pc = 0x9857u;
    v = 0x18u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9857u: /* BCS REL B0 66 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9859u ^ 0x98BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9859u; } return 1;
case 0x9859u: /* BCC REL 90 43 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x985Bu ^ 0x989Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x989Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x985Bu; } return 1;
case 0x985Bu: /* LDX IMM A2 00 */
    c->pc = 0x985Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x985Du: /* LDA ABS AD 60 04 */
    c->pc = 0x9860u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9860u: /* CMP IMM C9 68 */
    c->pc = 0x9862u;
    v = 0x68u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9862u: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9864u ^ 0x9865u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9865u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9864u; } return 1;
case 0x9864u: /* INX IMP E8 */
    c->pc = 0x9865u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9865u: /* CLC IMP 18 */
    c->pc = 0x9866u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9866u: /* LDA ABS AD 20 06 */
    c->pc = 0x9869u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9869u: /* ADC ABX 7D 88 9D */
    c->pc = 0x986Cu;
    ea = (uint16_t)(0x9D88u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9D88u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x986Cu: /* STA ABS 8D 20 06 */
    c->pc = 0x986Fu;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x986Fu: /* LDA ABS AD 00 06 */
    c->pc = 0x9872u;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9872u: /* ADC ABX 7D 8A 9D */
    c->pc = 0x9875u;
    ea = (uint16_t)(0x9D8Au + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x9D8Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9875u: /* STA ABS 8D 00 06 */
    c->pc = 0x9878u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9878u: /* CLC IMP 18 */
    c->pc = 0x9879u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9879u: /* LDA ABS AD 80 04 */
    c->pc = 0x987Cu;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x987Cu: /* ADC ABS 6D 20 06 */
    c->pc = 0x987Fu;
    ea = 0x0620u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x987Fu: /* STA ABS 8D 80 04 */
    c->pc = 0x9882u;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9882u: /* LDA ABS AD 60 04 */
    c->pc = 0x9885u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9885u: /* ADC ABS 6D 00 06 */
    c->pc = 0x9888u;
    ea = 0x0600u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x9888u: /* STA ABS 8D 60 04 */
    c->pc = 0x988Bu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x988Bu: /* CMP IMM C9 68 */
    c->pc = 0x988Du;
    v = 0x68u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x988Du: /* BCC REL 90 30 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x988Fu ^ 0x98BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x988Fu; } return 1;
case 0x988Fu: /* LDX ZP A6 FD */
    c->pc = 0x9891u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9891u: /* LDA ABX BD 83 9D */
    c->pc = 0x9894u;
    ea = (uint16_t)(0x9D83u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D83u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9894u: /* STA ABS 8D 00 04 */
    c->pc = 0x9897u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9897u: /* LDA ABS AD 60 04 */
    c->pc = 0x989Au;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x989Au: /* CMP IMM C9 B8 */
    c->pc = 0x989Cu;
    v = 0xB8u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x989Cu: /* BCC REL 90 21 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x989Eu ^ 0x98BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x989Eu; } return 1;
case 0x989Eu: /* LDA IMM A9 00 */
    c->pc = 0x98A0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98A0u: /* STA ABS 8D 00 06 */
    c->pc = 0x98A3u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98A3u: /* STA ABS 8D 20 06 */
    c->pc = 0x98A6u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98A6u: /* LDA ABS AD A0 06 */
    c->pc = 0x98A9u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98A9u: /* PHP IMP 08 */
    c->pc = 0x98AAu;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x98AAu: /* EOR IMM 49 01 */
    c->pc = 0x98ACu;
    v = 0x01u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98ACu: /* STA ABS 8D A0 06 */
    c->pc = 0x98AFu;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98AFu: /* PLP IMP 28 */
    c->pc = 0x98B0u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x98B0u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x98B2u ^ 0x98BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98B2u; } return 1;
case 0x98B2u: /* INC ZP E6 FD */
    c->pc = 0x98B4u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x98B4u: /* LDA ZP A5 FD */
    c->pc = 0x98B6u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98B6u: /* CMP IMM C9 03 */
    c->pc = 0x98B8u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x98B8u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98BAu ^ 0x98BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98BAu; } return 1;
case 0x98BAu: /* LDA IMM A9 11 */
    c->pc = 0x98BCu;
    v = 0x11u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98BCu: /* JSR ABS 20 51 C0 */
    push(c, 0x98u); push(c, 0xBEu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x98BFu: /* JSR ABS 20 73 84 */
    push(c, 0x98u); push(c, 0xC1u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x98C2u: /* LDX IMM A2 00 */
    c->pc = 0x98C4u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x98C4u: /* STX ZP 86 00 */
    c->pc = 0x98C6u;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x98C6u: /* JSR ABS 20 C8 9A */
    push(c, 0x98u); push(c, 0xC8u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x98C9u: /* LDA ABS AD 00 04 */
    c->pc = 0x98CCu;
    ea = 0x0400u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98CCu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98CEu ^ 0x98DCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98DCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98CEu; } return 1;
case 0x98CEu: /* LDA ABS AD 60 04 */
    c->pc = 0x98D1u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98D1u: /* STA ABS 8D 61 04 */
    c->pc = 0x98D4u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98D4u: /* JSR ABS 20 C6 99 */
    push(c, 0x98u); push(c, 0xD6u); c->pc = 0x99C6u; c->cpu_cycles += 6u; return 1;
case 0x98D7u: /* LDX IMM A2 01 */
    c->pc = 0x98D9u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x98D9u: /* JSR ABS 20 C8 9A */
    push(c, 0x98u); push(c, 0xDBu); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x98DCu: /* JSR ABS 20 F9 99 */
    push(c, 0x98u); push(c, 0xDEu); c->pc = 0x99F9u; c->cpu_cycles += 6u; return 1;
case 0x98DFu: /* JSR ABS 20 1D 9A */
    push(c, 0x98u); push(c, 0xE1u); c->pc = 0x9A1Du; c->cpu_cycles += 6u; return 1;
case 0x98E2u: /* JSR ABS 20 AB C0 */
    push(c, 0x98u); push(c, 0xE4u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x98E5u: /* LDA ZP A5 FD */
    c->pc = 0x98E7u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98E7u: /* CMP IMM C9 05 */
    c->pc = 0x98E9u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x98E9u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x98EBu ^ 0x98EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98EBu; } return 1;
case 0x98EBu: /* JMP ABS 4C 20 98 */
    c->pc = 0x9820u; c->cpu_cycles += 3u; return 1;
case 0x98EEu: /* LDA IMM A9 0A */
    c->pc = 0x98F0u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98F0u: /* STA ABS 8D 00 04 */
    c->pc = 0x98F3u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98F3u: /* CLC IMP 18 */
    c->pc = 0x98F4u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x98F4u: /* LDA ABS AD 20 06 */
    c->pc = 0x98F7u;
    ea = 0x0620u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98F7u: /* ADC IMM 69 18 */
    c->pc = 0x98F9u;
    v = 0x18u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x98F9u: /* STA ABS 8D 20 06 */
    c->pc = 0x98FCu;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98FCu: /* LDA ABS AD 00 06 */
    c->pc = 0x98FFu;
    ea = 0x0600u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98FFu: /* ADC IMM 69 00 */
    c->pc = 0x9901u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9901u: /* STA ABS 8D 00 06 */
    c->pc = 0x9904u;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9904u: /* SEC IMP 38 */
    c->pc = 0x9905u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9905u: /* LDA ABS AD 80 04 */
    c->pc = 0x9908u;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9908u: /* SBC ABS ED 20 06 */
    c->pc = 0x990Bu;
    ea = 0x0620u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x990Bu: /* STA ABS 8D 80 04 */
    c->pc = 0x990Eu;
    ea = 0x0480u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x990Eu: /* LDA ABS AD 60 04 */
    c->pc = 0x9911u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9911u: /* SBC ABS ED 00 06 */
    c->pc = 0x9914u;
    ea = 0x0600u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x9914u: /* STA ABS 8D 60 04 */
    c->pc = 0x9917u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9917u: /* CMP IMM C9 68 */
    c->pc = 0x9919u;
    v = 0x68u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9919u: /* BCC REL 90 16 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x991Bu ^ 0x9931u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9931u; }
    else { c->cpu_cycles += 2u; c->pc = 0x991Bu; } return 1;
case 0x991Bu: /* JSR ABS 20 73 84 */
    push(c, 0x99u); push(c, 0x1Du); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x991Eu: /* LDX IMM A2 00 */
    c->pc = 0x9920u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9920u: /* STX ZP 86 00 */
    c->pc = 0x9922u;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9922u: /* JSR ABS 20 C8 9A */
    push(c, 0x99u); push(c, 0x24u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x9925u: /* JSR ABS 20 F9 99 */
    push(c, 0x99u); push(c, 0x27u); c->pc = 0x99F9u; c->cpu_cycles += 6u; return 1;
case 0x9928u: /* JSR ABS 20 1D 9A */
    push(c, 0x99u); push(c, 0x2Au); c->pc = 0x9A1Du; c->cpu_cycles += 6u; return 1;
case 0x992Bu: /* JSR ABS 20 AB C0 */
    push(c, 0x99u); push(c, 0x2Du); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x992Eu: /* JMP ABS 4C F3 98 */
    c->pc = 0x98F3u; c->cpu_cycles += 3u; return 1;
case 0x9931u: /* JSR ABS 20 73 84 */
    push(c, 0x99u); push(c, 0x33u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9934u: /* JSR ABS 20 1D 9A */
    push(c, 0x99u); push(c, 0x36u); c->pc = 0x9A1Du; c->cpu_cycles += 6u; return 1;
case 0x9937u: /* LDA IMM A9 3E */
    c->pc = 0x9939u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9939u: /* STA ZP 85 FD */
    c->pc = 0x993Bu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x993Bu: /* JSR ABS 20 AB C0 */
    push(c, 0x99u); push(c, 0x3Du); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x993Eu: /* DEC ZP C6 FD */
    c->pc = 0x9940u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9940u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9942u ^ 0x993Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x993Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9942u; } return 1;
case 0x9942u: /* JSR ABS 20 73 84 */
    push(c, 0x99u); push(c, 0x44u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9945u: /* LDX IMM A2 1F */
    c->pc = 0x9947u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9947u: /* LDA ABX BD B3 9B */
    c->pc = 0x994Au;
    ea = (uint16_t)(0x9BB3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9BB3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x994Au: /* STA ABX 9D 56 03 */
    c->pc = 0x994Du;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x994Du: /* DEX IMP CA */
    c->pc = 0x994Eu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x994Eu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9950u ^ 0x9947u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9947u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9950u; } return 1;
case 0x9950u: /* LDA IMM A9 37 */
    c->pc = 0x9952u;
    v = 0x37u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9952u: /* STA ZP 85 FD */
    c->pc = 0x9954u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9954u: /* LDX IMM A2 0F */
    c->pc = 0x9956u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9956u: /* LDA ZP A5 FD */
    c->pc = 0x9958u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9958u: /* AND IMM 29 08 */
    c->pc = 0x995Au;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x995Au: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x995Cu ^ 0x995Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x995Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x995Cu; } return 1;
case 0x995Cu: /* LDX IMM A2 30 */
    c->pc = 0x995Eu;
    v = 0x30u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x995Eu: /* STX ABS 8E 66 03 */
    c->pc = 0x9961u;
    ea = 0x0366u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9961u: /* JSR ABS 20 AB C0 */
    push(c, 0x99u); push(c, 0x63u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9964u: /* DEC ZP C6 FD */
    c->pc = 0x9966u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9966u: /* BPL REL 10 EC */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9968u ^ 0x9954u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9954u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9968u; } return 1;
case 0x9968u: /* LDX ZP A6 2A */
    c->pc = 0x996Au;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x996Au: /* LDA ABX BD A8 9D */
    c->pc = 0x996Du;
    ea = (uint16_t)(0x9DA8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9DA8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x996Du: /* STA ZP 85 FD */
    c->pc = 0x996Fu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x996Fu: /* LDA IMM A9 3E */
    c->pc = 0x9971u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9971u: /* STA ZP 85 FE */
    c->pc = 0x9973u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9973u: /* LDA ZP A5 FD */
    c->pc = 0x9975u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9975u: /* STA ZP 85 00 */
    c->pc = 0x9977u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9977u: /* JSR ABS 20 63 9A */
    push(c, 0x99u); push(c, 0x79u); c->pc = 0x9A63u; c->cpu_cycles += 6u; return 1;
case 0x997Au: /* JSR ABS 20 AB C0 */
    push(c, 0x99u); push(c, 0x7Cu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x997Du: /* DEC ZP C6 FE */
    c->pc = 0x997Fu;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x997Fu: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9981u ^ 0x9973u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9973u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9981u; } return 1;
case 0x9981u: /* LDA ZP A5 1C */
    c->pc = 0x9983u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9983u: /* AND IMM 29 03 */
    c->pc = 0x9985u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9985u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9987u ^ 0x999Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x999Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9987u; } return 1;
case 0x9987u: /* LDA IMM A9 28 */
    c->pc = 0x9989u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9989u: /* JSR ABS 20 51 C0 */
    push(c, 0x99u); push(c, 0x8Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x998Cu: /* CLC IMP 18 */
    c->pc = 0x998Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x998Du: /* LDA ZP A5 FD */
    c->pc = 0x998Fu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x998Fu: /* ADC IMM 69 04 */
    c->pc = 0x9991u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9991u: /* STA ZP 85 FD */
    c->pc = 0x9993u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9993u: /* LDX ZP A6 2A */
    c->pc = 0x9995u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9995u: /* CMP ABX DD A9 9D */
    c->pc = 0x9998u;
    ea = (uint16_t)(0x9DA9u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x9DA9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9998u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x999Au ^ 0x99A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x999Au; } return 1;
case 0x999Au: /* LDA ZP A5 FD */
    c->pc = 0x999Cu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x999Cu: /* STA ZP 85 00 */
    c->pc = 0x999Eu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x999Eu: /* JSR ABS 20 63 9A */
    push(c, 0x99u); push(c, 0xA0u); c->pc = 0x9A63u; c->cpu_cycles += 6u; return 1;
case 0x99A1u: /* JSR ABS 20 AB C0 */
    push(c, 0x99u); push(c, 0xA3u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x99A4u: /* JMP ABS 4C 81 99 */
    c->pc = 0x9981u; c->cpu_cycles += 3u; return 1;
case 0x99A7u: /* LDA IMM A9 7D */
    c->pc = 0x99A9u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99A9u: /* STA ZP 85 FE */
    c->pc = 0x99ABu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99ABu: /* LDA ZP A5 FD */
    c->pc = 0x99ADu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99ADu: /* STA ZP 85 00 */
    c->pc = 0x99AFu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99AFu: /* JSR ABS 20 63 9A */
    push(c, 0x99u); push(c, 0xB1u); c->pc = 0x9A63u; c->cpu_cycles += 6u; return 1;
case 0x99B2u: /* JSR ABS 20 AB C0 */
    push(c, 0x99u); push(c, 0xB4u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x99B5u: /* DEC ZP C6 FE */
    c->pc = 0x99B7u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x99B7u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x99B9u ^ 0x99ABu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99ABu; }
    else { c->cpu_cycles += 2u; c->pc = 0x99B9u; } return 1;
case 0x99B9u: /* JSR ABS 20 2D A5 */
    push(c, 0x99u); push(c, 0xBBu); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0x99BCu: /* LDA IMM A9 00 */
    c->pc = 0x99BEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99BEu: /* STA ZP 85 AE */
    c->pc = 0x99C0u;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99C0u: /* LDA IMM A9 0E */
    c->pc = 0x99C2u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99C2u: /* JSR ABS 20 5D C0 */
    push(c, 0x99u); push(c, 0xC4u); c->pc = 0xC05Du; c->cpu_cycles += 6u; return 1;
case 0x99C5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x99C6u: /* INC ABS EE 81 06 */
    c->pc = 0x99C9u;
    ea = 0x0681u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x99C9u: /* LDA ABS AD 81 06 */
    c->pc = 0x99CCu;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99CCu: /* CMP IMM C9 06 */
    c->pc = 0x99CEu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x99CEu: /* BCC REL 90 14 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x99D0u ^ 0x99E4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99E4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99D0u; } return 1;
case 0x99D0u: /* LDA IMM A9 00 */
    c->pc = 0x99D2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D2u: /* STA ABS 8D 81 06 */
    c->pc = 0x99D5u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99D5u: /* INC ABS EE 01 04 */
    c->pc = 0x99D8u;
    ea = 0x0401u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x99D8u: /* LDA ABS AD 01 04 */
    c->pc = 0x99DBu;
    ea = 0x0401u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99DBu: /* CMP IMM C9 04 */
    c->pc = 0x99DDu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x99DDu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x99DFu ^ 0x99E4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99E4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99DFu; } return 1;
case 0x99DFu: /* LDA IMM A9 01 */
    c->pc = 0x99E1u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99E1u: /* STA ABS 8D 01 04 */
    c->pc = 0x99E4u;
    ea = 0x0401u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99E4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x99E5u: /* JSR ABS 20 73 84 */
    push(c, 0x99u); push(c, 0xE7u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x99E8u: /* LDX IMM A2 00 */
    c->pc = 0x99EAu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x99EAu: /* STX ZP 86 00 */
    c->pc = 0x99ECu;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99ECu: /* STX ZP 86 2B */
    c->pc = 0x99EEu;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99EEu: /* JSR ABS 20 C8 9A */
    push(c, 0x99u); push(c, 0xF0u); c->pc = 0x9AC8u; c->cpu_cycles += 6u; return 1;
case 0x99F1u: /* LDX ZP A6 2B */
    c->pc = 0x99F3u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x99F3u: /* INX IMP E8 */
    c->pc = 0x99F4u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x99F4u: /* CPX IMM E0 03 */
    c->pc = 0x99F6u;
    v = 0x03u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x99F6u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x99F8u ^ 0x99ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0x99F8u; } return 1;
case 0x99F8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x99F9u: /* LDA ZP A5 22 */
    c->pc = 0x99FBu;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99FBu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x99FDu ^ 0x9A01u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A01u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99FDu; } return 1;
case 0x99FDu: /* LDA ZP A5 AE */
    c->pc = 0x99FFu;
    ea = 0xAEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99FFu: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A01u ^ 0x9A1Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A1Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A01u; } return 1;
case 0x9A01u: /* CLC IMP 18 */
    c->pc = 0x9A02u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A02u: /* LDA ZP A5 21 */
    c->pc = 0x9A04u;
    ea = 0x21u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A04u: /* ADC IMM 69 80 */
    c->pc = 0x9A06u;
    v = 0x80u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A06u: /* STA ZP 85 21 */
    c->pc = 0x9A08u;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A08u: /* LDA ZP A5 22 */
    c->pc = 0x9A0Au;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A0Au: /* ADC IMM 69 00 */
    c->pc = 0x9A0Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A0Cu: /* CMP IMM C9 F0 */
    c->pc = 0x9A0Eu;
    v = 0xF0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A0Eu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A10u ^ 0x9A16u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A16u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A10u; } return 1;
case 0x9A10u: /* LDA IMM A9 02 */
    c->pc = 0x9A12u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A12u: /* STA ZP 85 AE */
    c->pc = 0x9A14u;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A14u: /* LDA IMM A9 00 */
    c->pc = 0x9A16u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A16u: /* STA ZP 85 22 */
    c->pc = 0x9A18u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A18u: /* LDA ZP A5 22 */
    c->pc = 0x9A1Au;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A1Au: /* BNE REL D0 00 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A1Cu ^ 0x9A1Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A1Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A1Cu; } return 1;
case 0x9A1Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A1Du: /* LDA ZP A5 AE */
    c->pc = 0x9A1Fu;
    ea = 0xAEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A1Fu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A21u ^ 0x9A2Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A2Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A21u; } return 1;
case 0x9A21u: /* SEC IMP 38 */
    c->pc = 0x9A22u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A22u: /* LDA IMM A9 5F */
    c->pc = 0x9A24u;
    v = 0x5Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A24u: /* SBC ZP E5 22 */
    c->pc = 0x9A26u;
    ea = 0x22u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9A26u: /* STA ZP 85 01 */
    c->pc = 0x9A28u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A28u: /* LDA IMM A9 01 */
    c->pc = 0x9A2Au;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A2Au: /* SBC IMM E9 00 */
    c->pc = 0x9A2Cu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A2Cu: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9A2Eu ^ 0x9A33u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A33u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A2Eu; } return 1;
case 0x9A2Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A2Fu: /* LDA IMM A9 6F */
    c->pc = 0x9A31u;
    v = 0x6Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A31u: /* STA ZP 85 01 */
    c->pc = 0x9A33u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A33u: /* LDA IMM A9 05 */
    c->pc = 0x9A35u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A35u: /* STA ZP 85 02 */
    c->pc = 0x9A37u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A37u: /* LDX IMM A2 00 */
    c->pc = 0x9A39u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A39u: /* CLC IMP 18 */
    c->pc = 0x9A3Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A3Au: /* LDA ABX BD 6F 9D */
    c->pc = 0x9A3Du;
    ea = (uint16_t)(0x9D6Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D6Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A3Du: /* ADC ZP 65 01 */
    c->pc = 0x9A3Fu;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9A3Fu: /* BCS REL B0 19 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A41u ^ 0x9A5Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A5Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A41u; } return 1;
case 0x9A41u: /* CMP IMM C9 F0 */
    c->pc = 0x9A43u;
    v = 0xF0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A43u: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A45u ^ 0x9A5Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A5Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A45u; } return 1;
case 0x9A45u: /* STA ABX 9D EC 02 */
    c->pc = 0x9A48u;
    ea = (uint16_t)(0x02ECu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A48u: /* LDA ABX BD 70 9D */
    c->pc = 0x9A4Bu;
    ea = (uint16_t)(0x9D70u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D70u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A4Bu: /* STA ABX 9D ED 02 */
    c->pc = 0x9A4Eu;
    ea = (uint16_t)(0x02EDu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A4Eu: /* LDA ABX BD 71 9D */
    c->pc = 0x9A51u;
    ea = (uint16_t)(0x9D71u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D71u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A51u: /* STA ABX 9D EE 02 */
    c->pc = 0x9A54u;
    ea = (uint16_t)(0x02EEu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A54u: /* LDA ABX BD 72 9D */
    c->pc = 0x9A57u;
    ea = (uint16_t)(0x9D72u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D72u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A57u: /* STA ABX 9D EF 02 */
    c->pc = 0x9A5Au;
    ea = (uint16_t)(0x02EFu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A5Au: /* INX IMP E8 */
    c->pc = 0x9A5Bu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A5Bu: /* INX IMP E8 */
    c->pc = 0x9A5Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A5Cu: /* INX IMP E8 */
    c->pc = 0x9A5Du;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A5Du: /* INX IMP E8 */
    c->pc = 0x9A5Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A5Eu: /* DEC ZP C6 02 */
    c->pc = 0x9A60u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9A60u: /* BNE REL D0 D7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A62u ^ 0x9A39u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A39u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A62u; } return 1;
case 0x9A62u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A63u: /* JSR ABS 20 73 84 */
    push(c, 0x9Au); push(c, 0x65u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9A66u: /* LDX IMM A2 23 */
    c->pc = 0x9A68u;
    v = 0x23u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A68u: /* LDA ABX BD 8C 9D */
    c->pc = 0x9A6Bu;
    ea = (uint16_t)(0x9D8Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9D8Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A6Bu: /* STA ABX 9D 00 02 */
    c->pc = 0x9A6Eu;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A6Eu: /* DEX IMP CA */
    c->pc = 0x9A6Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A6Fu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9A71u ^ 0x9A68u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A68u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A71u; } return 1;
case 0x9A71u: /* LDA ZP A5 00 */
    c->pc = 0x9A73u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A73u: /* BEQ REL F0 52 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9A75u ^ 0x9AC7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AC7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A75u; } return 1;
case 0x9A75u: /* LDY IMM A0 00 */
    c->pc = 0x9A77u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9A77u: /* LDA ABY B9 B7 9D */
    c->pc = 0x9A7Au;
    ea = (uint16_t)(0x9DB7u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9DB7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9A7Au: /* STA ABY 99 24 02 */
    c->pc = 0x9A7Du;
    ea = (uint16_t)(0x0224u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A7Du: /* INY IMP C8 */
    c->pc = 0x9A7Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9A7Eu: /* INX IMP E8 */
    c->pc = 0x9A7Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A7Fu: /* DEC ZP C6 00 */
    c->pc = 0x9A81u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9A81u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A83u ^ 0x9A77u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A77u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A83u; } return 1;
case 0x9A83u: /* LDA ZP A5 1C */
    c->pc = 0x9A85u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A85u: /* AND IMM 29 08 */
    c->pc = 0x9A87u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A87u: /* BNE REL D0 3E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A89u ^ 0x9AC7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AC7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A89u; } return 1;
case 0x9A89u: /* LDA ZP A5 2A */
    c->pc = 0x9A8Bu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A8Bu: /* CMP IMM C9 0C */
    c->pc = 0x9A8Du;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A8Du: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A8Fu ^ 0x9AA1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AA1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A8Fu; } return 1;
case 0x9A8Fu: /* SEC IMP 38 */
    c->pc = 0x9A90u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A90u: /* LDA ZP A5 2A */
    c->pc = 0x9A92u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A92u: /* SBC IMM E9 07 */
    c->pc = 0x9A94u;
    v = 0x07u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A94u: /* ASL IMP 0A */
    c->pc = 0x9A95u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A95u: /* ASL IMP 0A */
    c->pc = 0x9A96u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A96u: /* TAX IMP AA */
    c->pc = 0x9A97u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9A97u: /* LDA IMM A9 73 */
    c->pc = 0x9A99u;
    v = 0x73u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A99u: /* STA ABX 9D 01 02 */
    c->pc = 0x9A9Cu;
    ea = (uint16_t)(0x0201u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A9Cu: /* LDA IMM A9 03 */
    c->pc = 0x9A9Eu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A9Eu: /* STA ABX 9D 02 02 */
    c->pc = 0x9AA1u;
    ea = (uint16_t)(0x0202u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9AA1u: /* LDA IMM A9 77 */
    c->pc = 0x9AA3u;
    v = 0x77u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AA3u: /* STA ABS 8D 15 02 */
    c->pc = 0x9AA6u;
    ea = 0x0215u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9AA6u: /* STA ABS 8D 19 02 */
    c->pc = 0x9AA9u;
    ea = 0x0219u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9AA9u: /* LDA IMM A9 78 */
    c->pc = 0x9AABu;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AABu: /* STA ABS 8D 1D 02 */
    c->pc = 0x9AAEu;
    ea = 0x021Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9AAEu: /* STA ABS 8D 21 02 */
    c->pc = 0x9AB1u;
    ea = 0x0221u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9AB1u: /* LDA ZP A5 2A */
    c->pc = 0x9AB3u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AB3u: /* CMP IMM C9 0D */
    c->pc = 0x9AB5u;
    v = 0x0Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9AB5u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9AB7u ^ 0x9AC7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AC7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9AB7u; } return 1;
case 0x9AB7u: /* LDA IMM A9 77 */
    c->pc = 0x9AB9u;
    v = 0x77u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AB9u: /* STA ABS 8D F5 02 */
    c->pc = 0x9ABCu;
    ea = 0x02F5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9ABCu: /* STA ABS 8D E9 02 */
    c->pc = 0x9ABFu;
    ea = 0x02E9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9ABFu: /* LDA IMM A9 78 */
    c->pc = 0x9AC1u;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9AC1u: /* STA ABS 8D ED 02 */
    c->pc = 0x9AC4u;
    ea = 0x02EDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9AC4u: /* STA ABS 8D F1 02 */
    c->pc = 0x9AC7u;
    ea = 0x02F1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9AC7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9AC8u: /* LDY ABX BC 00 04 */
    c->pc = 0x9ACBu;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9ACBu: /* LDA ABY B9 D3 9B */
    c->pc = 0x9ACEu;
    ea = (uint16_t)(0x9BD3u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9BD3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9ACEu: /* STA ZP 85 08 */
    c->pc = 0x9AD0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AD0u: /* LDA ABY B9 DE 9B */
    c->pc = 0x9AD3u;
    ea = (uint16_t)(0x9BDEu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9BDEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AD3u: /* STA ZP 85 09 */
    c->pc = 0x9AD5u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AD5u: /* LDA ABX BD 60 04 */
    c->pc = 0x9AD8u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AD8u: /* STA ZP 85 0A */
    c->pc = 0x9ADAu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9ADAu: /* LDA ABX BD 40 04 */
    c->pc = 0x9ADDu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9ADDu: /* STA ZP 85 0B */
    c->pc = 0x9ADFu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9ADFu: /* LDA ABX BD A0 04 */
    c->pc = 0x9AE2u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AE2u: /* STA ZP 85 0C */
    c->pc = 0x9AE4u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AE4u: /* LDY IMM A0 00 */
    c->pc = 0x9AE6u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9AE6u: /* LDA IZY B1 08 */
    c->pc = 0x9AE8u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AE8u: /* INY IMP C8 */
    c->pc = 0x9AE9u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9AE9u: /* STA ZP 85 0D */
    c->pc = 0x9AEBu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9AEBu: /* LDX ZP A6 00 */
    c->pc = 0x9AEDu;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9AEDu: /* CLC IMP 18 */
    c->pc = 0x9AEEu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9AEEu: /* LDA IZY B1 08 */
    c->pc = 0x9AF0u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AF0u: /* ADC ZP 65 0C */
    c->pc = 0x9AF2u;
    ea = 0x0Cu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9AF2u: /* STA ABX 9D 00 02 */
    c->pc = 0x9AF5u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9AF5u: /* INY IMP C8 */
    c->pc = 0x9AF6u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9AF6u: /* LDA IZY B1 08 */
    c->pc = 0x9AF8u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AF8u: /* STA ABX 9D 01 02 */
    c->pc = 0x9AFBu;
    ea = (uint16_t)(0x0201u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9AFBu: /* INY IMP C8 */
    c->pc = 0x9AFCu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9AFCu: /* LDA IZY B1 08 */
    c->pc = 0x9AFEu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9AFEu: /* STA ABX 9D 02 02 */
    c->pc = 0x9B01u;
    ea = (uint16_t)(0x0202u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B01u: /* INY IMP C8 */
    c->pc = 0x9B02u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9B02u: /* CLC IMP 18 */
    c->pc = 0x9B03u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9B03u: /* LDA IZY B1 08 */
    c->pc = 0x9B05u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B05u: /* ADC ZP 65 0A */
    c->pc = 0x9B07u;
    ea = 0x0Au;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x9B07u: /* STA ZP 85 01 */
    c->pc = 0x9B09u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B09u: /* LDA ZP A5 0B */
    c->pc = 0x9B0Bu;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B0Bu: /* ADC IMM 69 00 */
    c->pc = 0x9B0Du;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B0Du: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9B0Fu ^ 0x9B16u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B16u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B0Fu; } return 1;
case 0x9B0Fu: /* LDA IMM A9 F8 */
    c->pc = 0x9B11u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B11u: /* STA ABX 9D 00 02 */
    c->pc = 0x9B14u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B14u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B16u ^ 0x9B1Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B1Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B16u; } return 1;
case 0x9B16u: /* LDA ZP A5 01 */
    c->pc = 0x9B18u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B18u: /* STA ABX 9D 03 02 */
    c->pc = 0x9B1Bu;
    ea = (uint16_t)(0x0203u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B1Bu: /* INX IMP E8 */
    c->pc = 0x9B1Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B1Cu: /* INX IMP E8 */
    c->pc = 0x9B1Du;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B1Du: /* INX IMP E8 */
    c->pc = 0x9B1Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B1Eu: /* INX IMP E8 */
    c->pc = 0x9B1Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B1Fu: /* INY IMP C8 */
    c->pc = 0x9B20u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9B20u: /* DEC ZP C6 0D */
    c->pc = 0x9B22u;
    ea = 0x0Du; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9B22u: /* BNE REL D0 C9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B24u ^ 0x9AEDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9AEDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B24u; } return 1;
case 0x9B24u: /* STX ZP 86 00 */
    c->pc = 0x9B26u;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9B26u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9B27u: /* LDX IMM A2 1F */
    c->pc = 0x9B29u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B29u: /* LDA IMM A9 0F */
    c->pc = 0x9B2Bu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B2Bu: /* STA ABX 9D 56 03 */
    c->pc = 0x9B2Eu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B2Eu: /* DEX IMP CA */
    c->pc = 0x9B2Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B2Fu: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9B31u ^ 0x9B2Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B2Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B31u; } return 1;
case 0x9B31u: /* LDA IMM A9 02 */
    c->pc = 0x9B33u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B33u: /* STA ZP 85 AE */
    c->pc = 0x9B35u;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B35u: /* JSR ABS 20 1D A5 */
    push(c, 0x9Bu); push(c, 0x37u); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0x9B38u: /* JSR ABS 20 1D 9A */
    push(c, 0x9Bu); push(c, 0x3Au); c->pc = 0x9A1Du; c->cpu_cycles += 6u; return 1;
case 0x9B3Bu: /* LDX IMM A2 00 */
    c->pc = 0x9B3Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B3Du: /* STX ZP 86 FD */
    c->pc = 0x9B3Fu;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9B3Fu: /* LDA IMM A9 08 */
    c->pc = 0x9B41u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B41u: /* STA ZP 85 FE */
    c->pc = 0x9B43u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B43u: /* DEC ZP C6 FE */
    c->pc = 0x9B45u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9B45u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B47u ^ 0x9B61u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B61u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B47u; } return 1;
case 0x9B47u: /* LDA IMM A9 08 */
    c->pc = 0x9B49u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B49u: /* STA ZP 85 FE */
    c->pc = 0x9B4Bu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B4Bu: /* LDX ZP A6 FD */
    c->pc = 0x9B4Du;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9B4Du: /* LDY IMM A0 00 */
    c->pc = 0x9B4Fu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9B4Fu: /* LDA ABX BD 87 9E */
    c->pc = 0x9B52u;
    ea = (uint16_t)(0x9E87u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9E87u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B52u: /* STA ABY 99 56 03 */
    c->pc = 0x9B55u;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B55u: /* INX IMP E8 */
    c->pc = 0x9B56u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B56u: /* INY IMP C8 */
    c->pc = 0x9B57u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9B57u: /* CPY IMM C0 20 */
    c->pc = 0x9B59u;
    v = 0x20u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B59u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B5Bu ^ 0x9B4Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B4Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B5Bu; } return 1;
case 0x9B5Bu: /* CPX IMM E0 60 */
    c->pc = 0x9B5Du;
    v = 0x60u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B5Du: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9B5Fu ^ 0x9B67u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B67u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B5Fu; } return 1;
case 0x9B5Fu: /* STX ZP 86 FD */
    c->pc = 0x9B61u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9B61u: /* JSR ABS 20 AB C0 */
    push(c, 0x9Bu); push(c, 0x63u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9B64u: /* JMP ABS 4C 43 9B */
    c->pc = 0x9B43u; c->cpu_cycles += 3u; return 1;
case 0x9B67u: /* LDA IMM A9 11 */
    c->pc = 0x9B69u;
    v = 0x11u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B69u: /* JSR ABS 20 51 C0 */
    push(c, 0x9Bu); push(c, 0x6Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9B6Cu: /* LDA IMM A9 02 */
    c->pc = 0x9B6Eu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B6Eu: /* STA ZP 85 FE */
    c->pc = 0x9B70u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B70u: /* LDA IMM A9 A0 */
    c->pc = 0x9B72u;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B72u: /* STA ZP 85 FD */
    c->pc = 0x9B74u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B74u: /* JSR ABS 20 AB C0 */
    push(c, 0x9Bu); push(c, 0x76u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9B77u: /* DEC ZP C6 FD */
    c->pc = 0x9B79u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9B79u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B7Bu ^ 0x9B74u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B74u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B7Bu; } return 1;
case 0x9B7Bu: /* DEC ZP C6 FE */
    c->pc = 0x9B7Du;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9B7Du: /* BNE REL D0 F1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B7Fu ^ 0x9B70u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B70u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B7Fu; } return 1;
case 0x9B7Fu: /* JSR ABS 20 73 84 */
    push(c, 0x9Bu); push(c, 0x81u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9B82u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9EE7u: /* LDA IMM A9 10 */
    c->pc = 0x9EE9u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EE9u: /* STA ZP 85 F7 */
    c->pc = 0x9EEBu;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9EEBu: /* STA ABS 8D 00 20 */
    c->pc = 0x9EEEu;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EEEu: /* LDA IMM A9 06 */
    c->pc = 0x9EF0u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EF0u: /* STA ZP 85 F8 */
    c->pc = 0x9EF2u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9EF2u: /* STA ABS 8D 01 20 */
    c->pc = 0x9EF5u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EF5u: /* LDA IMM A9 0F */
    c->pc = 0x9EF7u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EF7u: /* JSR ABS 20 5D C0 */
    push(c, 0x9Eu); push(c, 0xF9u); c->pc = 0xC05Du; c->cpu_cycles += 6u; return 1;
case 0x9EFAu: /* JSR ABS 20 7E 84 */
    push(c, 0x9Eu); push(c, 0xFCu); c->pc = 0x847Eu; c->cpu_cycles += 6u; return 1;
case 0x9EFDu: /* LDA IMM A9 00 */
    c->pc = 0x9EFFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EFFu: /* STA ZP 85 BE */
    c->pc = 0x9F01u;
    ea = 0xBEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F01u: /* LDA IMM A9 02 */
    c->pc = 0x9F03u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F03u: /* JSR ABS 20 44 C6 */
    push(c, 0x9Fu); push(c, 0x05u); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0x9F06u: /* LDA IMM A9 20 */
    c->pc = 0x9F08u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F08u: /* STA ABS 8D 06 20 */
    c->pc = 0x9F0Bu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F0Bu: /* LDX IMM A2 00 */
    c->pc = 0x9F0Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F0Du: /* STX ABS 8E 06 20 */
    c->pc = 0x9F10u;
    ea = 0x2006u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9F10u: /* TXA IMP 8A */
    c->pc = 0x9F11u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F11u: /* LDY IMM A0 04 */
    c->pc = 0x9F13u;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9F13u: /* STA ABS 8D 07 20 */
    c->pc = 0x9F16u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F16u: /* INX IMP E8 */
    c->pc = 0x9F17u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F17u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F19u ^ 0x9F13u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F13u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F19u; } return 1;
case 0x9F19u: /* DEY IMP 88 */
    c->pc = 0x9F1Au;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9F1Au: /* BNE REL D0 F7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F1Cu ^ 0x9F13u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F13u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F1Cu; } return 1;
case 0x9F1Cu: /* LDA IMM A9 0F */
    c->pc = 0x9F1Eu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F1Eu: /* LDX IMM A2 1F */
    c->pc = 0x9F20u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F20u: /* STA ABX 9D 56 03 */
    c->pc = 0x9F23u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F23u: /* DEX IMP CA */
    c->pc = 0x9F24u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F24u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9F26u ^ 0x9F20u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F20u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F26u; } return 1;
case 0x9F26u: /* LDA IMM A9 04 */
    c->pc = 0x9F28u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F28u: /* STA ZP 85 00 */
    c->pc = 0x9F2Au;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F2Au: /* LDX IMM A2 00 */
    c->pc = 0x9F2Cu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F2Cu: /* LDY ABX BC 95 AE */
    c->pc = 0x9F2Fu;
    ea = (uint16_t)(0xAE95u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0xAE95u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F2Fu: /* INX IMP E8 */
    c->pc = 0x9F30u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F30u: /* LDA ABX BD 95 AE */
    c->pc = 0x9F33u;
    ea = (uint16_t)(0xAE95u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE95u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F33u: /* STA ABS 8D 06 20 */
    c->pc = 0x9F36u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F36u: /* INX IMP E8 */
    c->pc = 0x9F37u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F37u: /* LDA ABX BD 95 AE */
    c->pc = 0x9F3Au;
    ea = (uint16_t)(0xAE95u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE95u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F3Au: /* STA ABS 8D 06 20 */
    c->pc = 0x9F3Du;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F3Du: /* INX IMP E8 */
    c->pc = 0x9F3Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F3Eu: /* LDA ABX BD 95 AE */
    c->pc = 0x9F41u;
    ea = (uint16_t)(0xAE95u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE95u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F41u: /* STA ABS 8D 07 20 */
    c->pc = 0x9F44u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F44u: /* INX IMP E8 */
    c->pc = 0x9F45u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F45u: /* DEY IMP 88 */
    c->pc = 0x9F46u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9F46u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F48u ^ 0x9F3Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F3Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F48u; } return 1;
case 0x9F48u: /* DEC ZP C6 00 */
    c->pc = 0x9F4Au;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9F4Au: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F4Cu ^ 0x9F2Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F2Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F4Cu; } return 1;
case 0x9F4Cu: /* JSR ABS 20 73 84 */
    push(c, 0x9Fu); push(c, 0x4Eu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9F4Fu: /* JSR ABS 20 1D A5 */
    push(c, 0x9Fu); push(c, 0x51u); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0x9F52u: /* LDA IMM A9 FE */
    c->pc = 0x9F54u;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F54u: /* JSR ABS 20 51 C0 */
    push(c, 0x9Fu); push(c, 0x56u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9F57u: /* LDA IMM A9 FF */
    c->pc = 0x9F59u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F59u: /* JSR ABS 20 51 C0 */
    push(c, 0x9Fu); push(c, 0x5Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9F5Cu: /* LDA IMM A9 1F */
    c->pc = 0x9F5Eu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F5Eu: /* STA ZP 85 FE */
    c->pc = 0x9F60u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F60u: /* LDA IMM A9 0A */
    c->pc = 0x9F62u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F62u: /* STA ZP 85 FF */
    c->pc = 0x9F64u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F64u: /* LDX ZP A6 FE */
    c->pc = 0x9F66u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9F66u: /* LDA ABX BD 54 AE */
    c->pc = 0x9F69u;
    ea = (uint16_t)(0xAE54u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE54u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F69u: /* STA ABS 8D 57 03 */
    c->pc = 0x9F6Cu;
    ea = 0x0357u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F6Cu: /* JSR ABS 20 AB C0 */
    push(c, 0x9Fu); push(c, 0x6Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0x9F6Fu: /* LDA ZP A5 27 */
    c->pc = 0x9F71u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F71u: /* AND IMM 29 08 */
    c->pc = 0x9F73u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F73u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9F75u ^ 0x9F78u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F78u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F75u; } return 1;
case 0x9F75u: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0x9F78u: /* DEC ZP C6 FF */
    c->pc = 0x9F7Au;
    ea = 0xFFu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9F7Au: /* BNE REL D0 E8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F7Cu ^ 0x9F64u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F64u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F7Cu; } return 1;
case 0x9F7Cu: /* DEC ZP C6 FE */
    c->pc = 0x9F7Eu;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9F7Eu: /* BPL REL 10 E0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9F80u ^ 0x9F60u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F60u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F80u; } return 1;
case 0x9F80u: /* LDA IMM A9 00 */
    c->pc = 0x9F82u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F82u: /* STA ZP 85 47 */
    c->pc = 0x9F84u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F84u: /* JSR ABS 20 2D A5 */
    push(c, 0x9Fu); push(c, 0x86u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0x9F87u: /* LDA IMM A9 00 */
    c->pc = 0x9F89u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F89u: /* STA ZP 85 AE */
    c->pc = 0x9F8Bu;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F8Bu: /* LDA IMM A9 07 */
    c->pc = 0x9F8Du;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F8Du: /* STA ZP 85 2A */
    c->pc = 0x9F8Fu;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F8Fu: /* LDA IMM A9 00 */
    c->pc = 0x9F91u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F91u: /* STA ZP 85 08 */
    c->pc = 0x9F93u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F93u: /* LDA IMM A9 8A */
    c->pc = 0x9F95u;
    v = 0x8Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F95u: /* STA ZP 85 09 */
    c->pc = 0x9F97u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F97u: /* LDA IMM A9 00 */
    c->pc = 0x9F99u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F99u: /* STA ZP 85 1A */
    c->pc = 0x9F9Bu;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F9Bu: /* STA ZP 85 1B */
    c->pc = 0x9F9Du;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F9Du: /* JSR ABS 20 0B CA */
    push(c, 0x9Fu); push(c, 0x9Fu); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0x9FA0u: /* INC ZP E6 08 */
    c->pc = 0x9FA2u;
    ea = 0x08u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9FA2u: /* INC ZP E6 1A */
    c->pc = 0x9FA4u;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9FA4u: /* JSR ABS 20 0B CA */
    push(c, 0x9Fu); push(c, 0xA6u); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0x9FA7u: /* JSR ABS 20 3C A5 */
    push(c, 0x9Fu); push(c, 0xA9u); c->pc = 0xA53Cu; c->cpu_cycles += 6u; return 1;
case 0x9FAAu: /* LDA ZP A5 08 */
    c->pc = 0x9FACu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FACu: /* AND IMM 29 3F */
    c->pc = 0x9FAEu;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FAEu: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FB0u ^ 0x9F9Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F9Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FB0u; } return 1;
case 0x9FB0u: /* LDA IMM A9 40 */
    c->pc = 0x9FB2u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FB2u: /* STA ZP 85 08 */
    c->pc = 0x9FB4u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FB4u: /* LDA IMM A9 8A */
    c->pc = 0x9FB6u;
    v = 0x8Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FB6u: /* STA ZP 85 09 */
    c->pc = 0x9FB8u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FB8u: /* LDA IMM A9 00 */
    c->pc = 0x9FBAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FBAu: /* STA ZP 85 1A */
    c->pc = 0x9FBCu;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FBCu: /* STA ZP 85 1B */
    c->pc = 0x9FBEu;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FBEu: /* JSR ABS 20 0B CA */
    push(c, 0x9Fu); push(c, 0xC0u); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0x9FC1u: /* CLC IMP 18 */
    c->pc = 0x9FC2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9FC2u: /* LDA ABS AD 00 03 */
    c->pc = 0x9FC5u;
    ea = 0x0300u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FC5u: /* ADC IMM 69 04 */
    c->pc = 0x9FC7u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9FC7u: /* STA ABS 8D 00 03 */
    c->pc = 0x9FCAu;
    ea = 0x0300u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FCAu: /* CLC IMP 18 */
    c->pc = 0x9FCBu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9FCBu: /* LDA ABS AD 08 03 */
    c->pc = 0x9FCEu;
    ea = 0x0308u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FCEu: /* ADC IMM 69 04 */
    c->pc = 0x9FD0u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9FD0u: /* STA ABS 8D 08 03 */
    c->pc = 0x9FD3u;
    ea = 0x0308u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FD3u: /* JSR ABS 20 3C A5 */
    push(c, 0x9Fu); push(c, 0xD5u); c->pc = 0xA53Cu; c->cpu_cycles += 6u; return 1;
case 0x9FD6u: /* LDA ZP A5 08 */
    c->pc = 0x9FD8u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FD8u: /* AND IMM 29 3F */
    c->pc = 0x9FDAu;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FDAu: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FDCu ^ 0x9FBEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FBEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FDCu; } return 1;
case 0x9FDCu: /* LDX IMM A2 1F */
    c->pc = 0x9FDEu;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FDEu: /* LDA IMM A9 0F */
    c->pc = 0x9FE0u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FE0u: /* STA ABX 9D 56 03 */
    c->pc = 0x9FE3u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FE3u: /* DEX IMP CA */
    c->pc = 0x9FE4u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FE4u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9FE6u ^ 0x9FE0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FE0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FE6u; } return 1;
case 0x9FE6u: /* JSR ABS 20 73 84 */
    push(c, 0x9Fu); push(c, 0xE8u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0x9FE9u: /* JSR ABS 20 1D A5 */
    push(c, 0x9Fu); push(c, 0xEBu); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0x9FECu: /* LDX IMM A2 0F */
    c->pc = 0x9FEEu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FEEu: /* LDA IMM A9 00 */
    c->pc = 0x9FF0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FF0u: /* STA ABX 9D 40 04 */
    c->pc = 0x9FF3u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FF3u: /* STA ABX 9D 00 04 */
    c->pc = 0x9FF6u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9FF6u: /* DEX IMP CA */
    c->pc = 0x9FF7u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FF7u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9FF9u ^ 0x9FF0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FF0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FF9u; } return 1;
case 0x9FF9u: /* LDA IMM A9 80 */
    c->pc = 0x9FFBu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FFBu: /* STA ABS 8D C0 04 */
    c->pc = 0x9FFEu;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FFEu: /* LDA IMM A9 00 */
    c->pc = 0xA000u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA000u: /* STA ABS 8D A0 04 */
    c->pc = 0xA003u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA003u: /* LDA IMM A9 28 */
    c->pc = 0xA005u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA005u: /* STA ABS 8D A1 04 */
    c->pc = 0xA008u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA008u: /* LDA IMM A9 00 */
    c->pc = 0xA00Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA00Au: /* STA ABS 8D C1 04 */
    c->pc = 0xA00Du;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA00Du: /* LDA IMM A9 00 */
    c->pc = 0xA00Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA00Fu: /* STA ABS 8D A2 04 */
    c->pc = 0xA012u;
    ea = 0x04A2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA012u: /* LDA IMM A9 47 */
    c->pc = 0xA014u;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA014u: /* STA ABS 8D A3 04 */
    c->pc = 0xA017u;
    ea = 0x04A3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA017u: /* LDA IMM A9 02 */
    c->pc = 0xA019u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA019u: /* STA ABS 8D 02 04 */
    c->pc = 0xA01Cu;
    ea = 0x0402u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA01Cu: /* STA ABS 8D 03 04 */
    c->pc = 0xA01Fu;
    ea = 0x0403u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA01Fu: /* LDA IMM A9 27 */
    c->pc = 0xA021u;
    v = 0x27u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA021u: /* STA ABS 8D A5 04 */
    c->pc = 0xA024u;
    ea = 0x04A5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA024u: /* LDA IMM A9 6F */
    c->pc = 0xA026u;
    v = 0x6Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA026u: /* STA ABS 8D A6 04 */
    c->pc = 0xA029u;
    ea = 0x04A6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA029u: /* LDA IMM A9 01 */
    c->pc = 0xA02Bu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA02Bu: /* STA ABS 8D 05 04 */
    c->pc = 0xA02Eu;
    ea = 0x0405u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA02Eu: /* STA ABS 8D 06 04 */
    c->pc = 0xA031u;
    ea = 0x0406u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA031u: /* LDA IMM A9 80 */
    c->pc = 0xA033u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA033u: /* STA ABS 8D 60 06 */
    c->pc = 0xA036u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA036u: /* LDA IMM A9 00 */
    c->pc = 0xA038u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA038u: /* STA ABS 8D 40 06 */
    c->pc = 0xA03Bu;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA03Bu: /* LDA IMM A9 00 */
    c->pc = 0xA03Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA03Du: /* STA ZP 85 AE */
    c->pc = 0xA03Fu;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA03Fu: /* LDA IMM A9 00 */
    c->pc = 0xA041u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA041u: /* STA ZP 85 22 */
    c->pc = 0xA043u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA043u: /* LDA IMM A9 00 */
    c->pc = 0xA045u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA045u: /* STA ZP 85 FD */
    c->pc = 0xA047u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA047u: /* LDA IMM A9 08 */
    c->pc = 0xA049u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA049u: /* STA ZP 85 FE */
    c->pc = 0xA04Bu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA04Bu: /* DEC ZP C6 FE */
    c->pc = 0xA04Du;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA04Du: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA04Fu ^ 0xA069u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA069u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA04Fu; } return 1;
case 0xA04Fu: /* LDA IMM A9 08 */
    c->pc = 0xA051u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA051u: /* STA ZP 85 FE */
    c->pc = 0xA053u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA053u: /* LDX ZP A6 FD */
    c->pc = 0xA055u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA055u: /* LDY IMM A0 00 */
    c->pc = 0xA057u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA057u: /* LDA ABX BD 4F AA */
    c->pc = 0xA05Au;
    ea = (uint16_t)(0xAA4Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAA4Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA05Au: /* STA ABY 99 56 03 */
    c->pc = 0xA05Du;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA05Du: /* INX IMP E8 */
    c->pc = 0xA05Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA05Eu: /* INY IMP C8 */
    c->pc = 0xA05Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA05Fu: /* CPY IMM C0 20 */
    c->pc = 0xA061u;
    v = 0x20u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xA061u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA063u ^ 0xA057u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA057u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA063u; } return 1;
case 0xA063u: /* CPX IMM E0 60 */
    c->pc = 0xA065u;
    v = 0x60u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA065u: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA067u ^ 0xA078u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA078u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA067u; } return 1;
case 0xA067u: /* STX ZP 86 FD */
    c->pc = 0xA069u;
    ea = 0xFDu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA069u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA0u); push(c, 0x6Bu); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA06Cu: /* JSR ABS 20 AB C0 */
    push(c, 0xA0u); push(c, 0x6Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA06Fu: /* LDA ZP A5 27 */
    c->pc = 0xA071u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA071u: /* AND IMM 29 08 */
    c->pc = 0xA073u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA073u: /* BEQ REL F0 D6 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA075u ^ 0xA04Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA04Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA075u; } return 1;
case 0xA075u: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0xA078u: /* LDA IMM A9 0E */
    c->pc = 0xA07Au;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA07Au: /* JSR ABS 20 51 C0 */
    push(c, 0xA0u); push(c, 0x7Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA07Du: /* LDA IMM A9 00 */
    c->pc = 0xA07Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA07Fu: /* STA ZP 85 FD */
    c->pc = 0xA081u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA081u: /* STA ZP 85 C8 */
    c->pc = 0xA083u;
    ea = 0xC8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA083u: /* LDA ZP A5 FD */
    c->pc = 0xA085u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA085u: /* CMP IMM C9 36 */
    c->pc = 0xA087u;
    v = 0x36u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA087u: /* BNE REL D0 00 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA089u ^ 0xA089u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA089u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA089u; } return 1;
case 0xA089u: /* JSR ABS 20 53 A5 */
    push(c, 0xA0u); push(c, 0x8Bu); c->pc = 0xA553u; c->cpu_cycles += 6u; return 1;
case 0xA08Cu: /* LDA IMM A9 23 */
    c->pc = 0xA08Eu;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA08Eu: /* STA ABS 8D B6 03 */
    c->pc = 0xA091u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA091u: /* LDA IMM A9 03 */
    c->pc = 0xA093u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA093u: /* STA ABS 8D B7 03 */
    c->pc = 0xA096u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA096u: /* JSR ABS 20 AB C0 */
    push(c, 0xA0u); push(c, 0x98u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA099u: /* LDA ZP A5 27 */
    c->pc = 0xA09Bu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA09Bu: /* AND IMM 29 08 */
    c->pc = 0xA09Du;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA09Du: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA09Fu ^ 0xA0A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA09Fu; } return 1;
case 0xA09Fu: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0xA0A2u: /* JSR ABS 20 53 A5 */
    push(c, 0xA0u); push(c, 0xA4u); c->pc = 0xA553u; c->cpu_cycles += 6u; return 1;
case 0xA0A5u: /* LDA IMM A9 23 */
    c->pc = 0xA0A7u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0A7u: /* STA ABS 8D B6 03 */
    c->pc = 0xA0AAu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0AAu: /* LDA IMM A9 43 */
    c->pc = 0xA0ACu;
    v = 0x43u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0ACu: /* STA ABS 8D B7 03 */
    c->pc = 0xA0AFu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0AFu: /* LDA IMM A9 1F */
    c->pc = 0xA0B1u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0B1u: /* STA ZP 85 FE */
    c->pc = 0xA0B3u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0B3u: /* LDA IMM A9 0A */
    c->pc = 0xA0B5u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0B5u: /* STA ZP 85 FF */
    c->pc = 0xA0B7u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0B7u: /* DEC ZP C6 FF */
    c->pc = 0xA0B9u;
    ea = 0xFFu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA0B9u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0BBu ^ 0xA0CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0BBu; } return 1;
case 0xA0BBu: /* LDA IMM A9 0A */
    c->pc = 0xA0BDu;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0BDu: /* STA ZP 85 FF */
    c->pc = 0xA0BFu;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0BFu: /* LDX ZP A6 FE */
    c->pc = 0xA0C1u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA0C1u: /* LDA ABX BD 54 AE */
    c->pc = 0xA0C4u;
    ea = (uint16_t)(0xAE54u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE54u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA0C4u: /* STA ABS 8D 5B 03 */
    c->pc = 0xA0C7u;
    ea = 0x035Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0C7u: /* DEC ZP C6 FE */
    c->pc = 0xA0C9u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA0C9u: /* BMI REL 30 0C */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xA0CBu ^ 0xA0D7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0D7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0CBu; } return 1;
case 0xA0CBu: /* JSR ABS 20 AB C0 */
    push(c, 0xA0u); push(c, 0xCDu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA0CEu: /* LDA ZP A5 27 */
    c->pc = 0xA0D0u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0D0u: /* AND IMM 29 08 */
    c->pc = 0xA0D2u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0D2u: /* BEQ REL F0 E3 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA0D4u ^ 0xA0B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0D4u; } return 1;
case 0xA0D4u: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0xA0D7u: /* LDA ZP A5 FD */
    c->pc = 0xA0D9u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0D9u: /* CMP IMM C9 0E */
    c->pc = 0xA0DBu;
    v = 0x0Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0DBu: /* BNE REL D0 A6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0DDu ^ 0xA083u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA083u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0DDu; } return 1;
case 0xA0DDu: /* LDA IMM A9 02 */
    c->pc = 0xA0DFu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0DFu: /* STA ZP 85 AE */
    c->pc = 0xA0E1u;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0E1u: /* LDA IMM A9 F0 */
    c->pc = 0xA0E3u;
    v = 0xF0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0E3u: /* STA ZP 85 22 */
    c->pc = 0xA0E5u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0E5u: /* SEC IMP 38 */
    c->pc = 0xA0E6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA0E6u: /* LDA ZP A5 21 */
    c->pc = 0xA0E8u;
    ea = 0x21u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0E8u: /* SBC IMM E9 80 */
    c->pc = 0xA0EAu;
    v = 0x80u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0EAu: /* STA ZP 85 21 */
    c->pc = 0xA0ECu;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0ECu: /* LDA ZP A5 22 */
    c->pc = 0xA0EEu;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0EEu: /* SBC IMM E9 00 */
    c->pc = 0xA0F0u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0F0u: /* STA ZP 85 22 */
    c->pc = 0xA0F2u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0F2u: /* BCC REL 90 19 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA0F4u ^ 0xA10Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA10Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0F4u; } return 1;
case 0xA0F4u: /* CMP IMM C9 40 */
    c->pc = 0xA0F6u;
    v = 0x40u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0F6u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA0F8u ^ 0xA0FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0F8u; } return 1;
case 0xA0F8u: /* JSR ABS 20 7C A5 */
    push(c, 0xA0u); push(c, 0xFAu); c->pc = 0xA57Cu; c->cpu_cycles += 6u; return 1;
case 0xA0FBu: /* JSR ABS 20 1B A6 */
    push(c, 0xA0u); push(c, 0xFDu); c->pc = 0xA61Bu; c->cpu_cycles += 6u; return 1;
case 0xA0FEu: /* JSR ABS 20 F7 A6 */
    push(c, 0xA1u); push(c, 0x00u); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA101u: /* JSR ABS 20 AB C0 */
    push(c, 0xA1u); push(c, 0x03u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA104u: /* LDA ZP A5 27 */
    c->pc = 0xA106u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA106u: /* AND IMM 29 08 */
    c->pc = 0xA108u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA108u: /* BEQ REL F0 DB */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA10Au ^ 0xA0E5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0E5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA10Au; } return 1;
case 0xA10Au: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0xA10Du: /* LDA IMM A9 F0 */
    c->pc = 0xA10Fu;
    v = 0xF0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA10Fu: /* STA ZP 85 22 */
    c->pc = 0xA111u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA111u: /* LDA IMM A9 00 */
    c->pc = 0xA113u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA113u: /* STA ZP 85 21 */
    c->pc = 0xA115u;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA115u: /* STA ZP 85 AE */
    c->pc = 0xA117u;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA117u: /* SEC IMP 38 */
    c->pc = 0xA118u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA118u: /* LDA ZP A5 21 */
    c->pc = 0xA11Au;
    ea = 0x21u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA11Au: /* SBC IMM E9 80 */
    c->pc = 0xA11Cu;
    v = 0x80u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA11Cu: /* STA ZP 85 21 */
    c->pc = 0xA11Eu;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA11Eu: /* LDA ZP A5 22 */
    c->pc = 0xA120u;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA120u: /* SBC IMM E9 00 */
    c->pc = 0xA122u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA122u: /* STA ZP 85 22 */
    c->pc = 0xA124u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA124u: /* CMP IMM C9 C0 */
    c->pc = 0xA126u;
    v = 0xC0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA126u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA128u ^ 0xA13Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA13Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA128u; } return 1;
case 0xA128u: /* JSR ABS 20 1B A6 */
    push(c, 0xA1u); push(c, 0x2Au); c->pc = 0xA61Bu; c->cpu_cycles += 6u; return 1;
case 0xA12Bu: /* JSR ABS 20 F7 A6 */
    push(c, 0xA1u); push(c, 0x2Du); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA12Eu: /* JSR ABS 20 AB C0 */
    push(c, 0xA1u); push(c, 0x30u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA131u: /* LDA ZP A5 27 */
    c->pc = 0xA133u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA133u: /* AND IMM 29 08 */
    c->pc = 0xA135u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA135u: /* BEQ REL F0 E0 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA137u ^ 0xA117u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA117u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA137u; } return 1;
case 0xA137u: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0xA13Au: /* LDX IMM A2 0F */
    c->pc = 0xA13Cu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA13Cu: /* LDA ABX BD AF AA */
    c->pc = 0xA13Fu;
    ea = (uint16_t)(0xAAAFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAAAFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA13Fu: /* STA ABX 9D 56 03 */
    c->pc = 0xA142u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA142u: /* DEX IMP CA */
    c->pc = 0xA143u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA143u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA145u ^ 0xA13Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA13Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA145u; } return 1;
case 0xA145u: /* LDA IMM A9 00 */
    c->pc = 0xA147u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA147u: /* STA ABS 8D 10 04 */
    c->pc = 0xA14Au;
    ea = 0x0410u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA14Au: /* LDA IMM A9 08 */
    c->pc = 0xA14Cu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA14Cu: /* STA ABS 8D 90 06 */
    c->pc = 0xA14Fu;
    ea = 0x0690u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA14Fu: /* LDA IMM A9 FF */
    c->pc = 0xA151u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA151u: /* STA ABS 8D 50 04 */
    c->pc = 0xA154u;
    ea = 0x0450u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA154u: /* LDA IMM A9 B7 */
    c->pc = 0xA156u;
    v = 0xB7u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA156u: /* STA ABS 8D B0 04 */
    c->pc = 0xA159u;
    ea = 0x04B0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA159u: /* SEC IMP 38 */
    c->pc = 0xA15Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA15Au: /* LDA ZP A5 22 */
    c->pc = 0xA15Cu;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA15Cu: /* SBC IMM E9 02 */
    c->pc = 0xA15Eu;
    v = 0x02u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA15Eu: /* STA ZP 85 22 */
    c->pc = 0xA160u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA160u: /* JSR ABS 20 1B A6 */
    push(c, 0xA1u); push(c, 0x62u); c->pc = 0xA61Bu; c->cpu_cycles += 6u; return 1;
case 0xA163u: /* LDA ZP A5 22 */
    c->pc = 0xA165u;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA165u: /* BEQ REL F0 15 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA167u ^ 0xA17Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA17Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA167u; } return 1;
case 0xA167u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA1u); push(c, 0x69u); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA16Au: /* JSR ABS 20 F5 A5 */
    push(c, 0xA1u); push(c, 0x6Cu); c->pc = 0xA5F5u; c->cpu_cycles += 6u; return 1;
case 0xA16Du: /* JSR ABS 20 5F A7 */
    push(c, 0xA1u); push(c, 0x6Fu); c->pc = 0xA75Fu; c->cpu_cycles += 6u; return 1;
case 0xA170u: /* JSR ABS 20 AB C0 */
    push(c, 0xA1u); push(c, 0x72u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA173u: /* LDA ZP A5 27 */
    c->pc = 0xA175u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA175u: /* AND IMM 29 08 */
    c->pc = 0xA177u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA177u: /* BEQ REL F0 E0 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA179u ^ 0xA159u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA159u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA179u; } return 1;
case 0xA179u: /* JMP ABS 4C B0 A7 */
    c->pc = 0xA7B0u; c->cpu_cycles += 3u; return 1;
case 0xA17Cu: /* LDA IMM A9 50 */
    c->pc = 0xA17Eu;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA17Eu: /* STA ZP 85 FD */
    c->pc = 0xA180u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA180u: /* LDA IMM A9 00 */
    c->pc = 0xA182u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA182u: /* STA ABS 8D B7 03 */
    c->pc = 0xA185u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA185u: /* STA ZP 85 FE */
    c->pc = 0xA187u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA187u: /* LDA IMM A9 10 */
    c->pc = 0xA189u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA189u: /* STA ABS 8D B6 03 */
    c->pc = 0xA18Cu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA18Cu: /* LDA IMM A9 B0 */
    c->pc = 0xA18Eu;
    v = 0xB0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA18Eu: /* STA ZP 85 FF */
    c->pc = 0xA190u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA190u: /* JSR ABS 20 F5 A5 */
    push(c, 0xA1u); push(c, 0x92u); c->pc = 0xA5F5u; c->cpu_cycles += 6u; return 1;
case 0xA193u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA1u); push(c, 0x95u); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA196u: /* JSR ABS 20 5F A7 */
    push(c, 0xA1u); push(c, 0x98u); c->pc = 0xA75Fu; c->cpu_cycles += 6u; return 1;
case 0xA199u: /* JSR ABS 20 47 C7 */
    push(c, 0xA1u); push(c, 0x9Bu); c->pc = 0xC747u; c->cpu_cycles += 6u; return 1;
case 0xA19Cu: /* JSR ABS 20 AB C0 */
    push(c, 0xA1u); push(c, 0x9Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA19Fu: /* CLC IMP 18 */
    c->pc = 0xA1A0u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1A0u: /* LDA ABS AD B7 03 */
    c->pc = 0xA1A3u;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1A3u: /* ADC IMM 69 20 */
    c->pc = 0xA1A5u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1A5u: /* STA ABS 8D B7 03 */
    c->pc = 0xA1A8u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1A8u: /* LDA ABS AD B6 03 */
    c->pc = 0xA1ABu;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1ABu: /* ADC IMM 69 00 */
    c->pc = 0xA1ADu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1ADu: /* STA ABS 8D B6 03 */
    c->pc = 0xA1B0u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1B0u: /* CLC IMP 18 */
    c->pc = 0xA1B1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1B1u: /* LDA ZP A5 FE */
    c->pc = 0xA1B3u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1B3u: /* ADC IMM 69 20 */
    c->pc = 0xA1B5u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1B5u: /* STA ZP 85 FE */
    c->pc = 0xA1B7u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1B7u: /* LDA ZP A5 FF */
    c->pc = 0xA1B9u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1B9u: /* ADC IMM 69 00 */
    c->pc = 0xA1BBu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1BBu: /* STA ZP 85 FF */
    c->pc = 0xA1BDu;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1BDu: /* DEC ZP C6 FD */
    c->pc = 0xA1BFu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA1BFu: /* BNE REL D0 CF */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1C1u ^ 0xA190u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA190u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1C1u; } return 1;
case 0xA1C1u: /* LDA IMM A9 20 */
    c->pc = 0xA1C3u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1C3u: /* STA ZP 85 FD */
    c->pc = 0xA1C5u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1C5u: /* JSR ABS 20 F5 A5 */
    push(c, 0xA1u); push(c, 0xC7u); c->pc = 0xA5F5u; c->cpu_cycles += 6u; return 1;
case 0xA1C8u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA1u); push(c, 0xCAu); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA1CBu: /* JSR ABS 20 5F A7 */
    push(c, 0xA1u); push(c, 0xCDu); c->pc = 0xA75Fu; c->cpu_cycles += 6u; return 1;
case 0xA1CEu: /* JSR ABS 20 AB C0 */
    push(c, 0xA1u); push(c, 0xD0u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA1D1u: /* DEC ZP C6 FD */
    c->pc = 0xA1D3u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA1D3u: /* BNE REL D0 F0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1D5u ^ 0xA1C5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1C5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1D5u; } return 1;
case 0xA1D5u: /* LDX IMM A2 0F */
    c->pc = 0xA1D7u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA1D7u: /* LDA ABX BD BF AA */
    c->pc = 0xA1DAu;
    ea = (uint16_t)(0xAABFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAABFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA1DAu: /* STA ABX 9D 56 03 */
    c->pc = 0xA1DDu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA1DDu: /* DEX IMP CA */
    c->pc = 0xA1DEu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA1DEu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA1E0u ^ 0xA1D7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1D7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1E0u; } return 1;
case 0xA1E0u: /* LDA IMM A9 0D */
    c->pc = 0xA1E2u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1E2u: /* JSR ABS 20 51 C0 */
    push(c, 0xA1u); push(c, 0xE4u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA1E5u: /* LDA IMM A9 0B */
    c->pc = 0xA1E7u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1E7u: /* STA ZP 85 C1 */
    c->pc = 0xA1E9u;
    ea = 0xC1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1E9u: /* LDA IMM A9 00 */
    c->pc = 0xA1EBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1EBu: /* STA ZP 85 C0 */
    c->pc = 0xA1EDu;
    ea = 0xC0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1EDu: /* STA ZP 85 CB */
    c->pc = 0xA1EFu;
    ea = 0xCBu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1EFu: /* LDA ZP A5 27 */
    c->pc = 0xA1F1u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1F1u: /* AND IMM 29 08 */
    c->pc = 0xA1F3u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1F3u: /* BNE REL D0 50 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1F5u ^ 0xA245u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA245u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1F5u; } return 1;
case 0xA1F5u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA1u); push(c, 0xF7u); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA1F8u: /* JSR ABS 20 F5 A5 */
    push(c, 0xA1u); push(c, 0xFAu); c->pc = 0xA5F5u; c->cpu_cycles += 6u; return 1;
case 0xA1FBu: /* JSR ABS 20 5F A7 */
    push(c, 0xA1u); push(c, 0xFDu); c->pc = 0xA75Fu; c->cpu_cycles += 6u; return 1;
case 0xA1FEu: /* LDX IMM A2 02 */
    c->pc = 0xA200u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA200u: /* LDA ABX BD C1 A2 */
    c->pc = 0xA203u;
    ea = (uint16_t)(0xA2C1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA2C1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA203u: /* STA ABX 9D 81 02 */
    c->pc = 0xA206u;
    ea = (uint16_t)(0x0281u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA206u: /* DEX IMP CA */
    c->pc = 0xA207u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA207u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA209u ^ 0xA200u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA200u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA209u; } return 1;
case 0xA209u: /* LDX ZP A6 CB */
    c->pc = 0xA20Bu;
    ea = 0xCBu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA20Bu: /* LDY IMM A0 F8 */
    c->pc = 0xA20Du;
    v = 0xF8u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA20Du: /* LDA ZP A5 1C */
    c->pc = 0xA20Fu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA20Fu: /* AND IMM 29 08 */
    c->pc = 0xA211u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA211u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA213u ^ 0xA216u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA216u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA213u; } return 1;
case 0xA213u: /* LDY ABX BC C4 A2 */
    c->pc = 0xA216u;
    ea = (uint16_t)(0xA2C4u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0xA2C4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA216u: /* STY ABS 8C 80 02 */
    c->pc = 0xA219u;
    ea = 0x0280u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xA219u: /* LDA ZP A5 27 */
    c->pc = 0xA21Bu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA21Bu: /* AND IMM 29 34 */
    c->pc = 0xA21Du;
    v = 0x34u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA21Du: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA21Fu ^ 0xA231u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA231u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA21Fu; } return 1;
case 0xA21Fu: /* TXA IMP 8A */
    c->pc = 0xA220u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA220u: /* EOR IMM 49 01 */
    c->pc = 0xA222u;
    v = 0x01u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA222u: /* STA ZP 85 CB */
    c->pc = 0xA224u;
    ea = 0xCBu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA224u: /* LDA IMM A9 2F */
    c->pc = 0xA226u;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA226u: /* JSR ABS 20 51 C0 */
    push(c, 0xA2u); push(c, 0x28u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA229u: /* LDA IMM A9 0B */
    c->pc = 0xA22Bu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA22Bu: /* STA ZP 85 C1 */
    c->pc = 0xA22Du;
    ea = 0xC1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA22Du: /* LDA IMM A9 00 */
    c->pc = 0xA22Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA22Fu: /* STA ZP 85 C0 */
    c->pc = 0xA231u;
    ea = 0xC0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA231u: /* JSR ABS 20 AB C0 */
    push(c, 0xA2u); push(c, 0x33u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA234u: /* SEC IMP 38 */
    c->pc = 0xA235u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA235u: /* LDA ZP A5 C0 */
    c->pc = 0xA237u;
    ea = 0xC0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA237u: /* SBC IMM E9 01 */
    c->pc = 0xA239u;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA239u: /* STA ZP 85 C0 */
    c->pc = 0xA23Bu;
    ea = 0xC0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA23Bu: /* LDA ZP A5 C1 */
    c->pc = 0xA23Du;
    ea = 0xC1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA23Du: /* SBC IMM E9 00 */
    c->pc = 0xA23Fu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA23Fu: /* STA ZP 85 C1 */
    c->pc = 0xA241u;
    ea = 0xC1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA241u: /* BCS REL B0 AC */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA243u ^ 0xA1EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA243u; } return 1;
case 0xA243u: /* INC ZP E6 BE */
    c->pc = 0xA245u;
    ea = 0xBEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA245u: /* LDA IMM A9 FF */
    c->pc = 0xA247u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA247u: /* JSR ABS 20 51 C0 */
    push(c, 0xA2u); push(c, 0x49u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA24Au: /* LDA IMM A9 19 */
    c->pc = 0xA24Cu;
    v = 0x19u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA24Cu: /* STA ZP 85 FD */
    c->pc = 0xA24Eu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA24Eu: /* LDA ZP A5 1C */
    c->pc = 0xA250u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA250u: /* AND IMM 29 01 */
    c->pc = 0xA252u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA252u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA254u ^ 0xA263u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA263u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA254u; } return 1;
case 0xA254u: /* LDA ZP A5 FD */
    c->pc = 0xA256u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA256u: /* CMP IMM C9 04 */
    c->pc = 0xA258u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA258u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA25Au ^ 0xA25Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA25Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA25Au; } return 1;
case 0xA25Au: /* LDA IMM A9 3A */
    c->pc = 0xA25Cu;
    v = 0x3Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA25Cu: /* JSR ABS 20 51 C0 */
    push(c, 0xA2u); push(c, 0x5Eu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA25Fu: /* DEC ZP C6 FD */
    c->pc = 0xA261u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA261u: /* BMI REL 30 14 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xA263u ^ 0xA277u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA277u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA263u; } return 1;
case 0xA263u: /* LDX ZP A6 FD */
    c->pc = 0xA265u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA265u: /* LDA ABX BD 7B AE */
    c->pc = 0xA268u;
    ea = (uint16_t)(0xAE7Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAE7Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA268u: /* STA ABS 8D 10 04 */
    c->pc = 0xA26Bu;
    ea = 0x0410u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA26Bu: /* JSR ABS 20 F7 A6 */
    push(c, 0xA2u); push(c, 0x6Du); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA26Eu: /* JSR ABS 20 5F A7 */
    push(c, 0xA2u); push(c, 0x70u); c->pc = 0xA75Fu; c->cpu_cycles += 6u; return 1;
case 0xA271u: /* JSR ABS 20 AB C0 */
    push(c, 0xA2u); push(c, 0x73u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA274u: /* JMP ABS 4C 4E A2 */
    c->pc = 0xA24Eu; c->cpu_cycles += 3u; return 1;
case 0xA277u: /* LDA IMM A9 0A */
    c->pc = 0xA279u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA279u: /* STA ABS 8D 10 04 */
    c->pc = 0xA27Cu;
    ea = 0x0410u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA27Cu: /* SEC IMP 38 */
    c->pc = 0xA27Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA27Du: /* LDA ABS AD B0 04 */
    c->pc = 0xA280u;
    ea = 0x04B0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA280u: /* SBC IMM E9 08 */
    c->pc = 0xA282u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA282u: /* STA ABS 8D B0 04 */
    c->pc = 0xA285u;
    ea = 0x04B0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA285u: /* LDA ABS AD 50 04 */
    c->pc = 0xA288u;
    ea = 0x0450u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA288u: /* SBC IMM E9 00 */
    c->pc = 0xA28Au;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA28Au: /* STA ABS 8D 50 04 */
    c->pc = 0xA28Du;
    ea = 0x0450u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA28Du: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA28Fu ^ 0xA296u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA296u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA28Fu; } return 1;
case 0xA28Fu: /* LDA ABS AD B0 04 */
    c->pc = 0xA292u;
    ea = 0x04B0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA292u: /* CMP IMM C9 F0 */
    c->pc = 0xA294u;
    v = 0xF0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA294u: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA296u ^ 0xA2A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA296u; } return 1;
case 0xA296u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA2u); push(c, 0x98u); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA299u: /* JSR ABS 20 5F A7 */
    push(c, 0xA2u); push(c, 0x9Bu); c->pc = 0xA75Fu; c->cpu_cycles += 6u; return 1;
case 0xA29Cu: /* JSR ABS 20 AB C0 */
    push(c, 0xA2u); push(c, 0x9Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA29Fu: /* JMP ABS 4C 77 A2 */
    c->pc = 0xA277u; c->cpu_cycles += 3u; return 1;
case 0xA2A2u: /* JSR ABS 20 F7 A6 */
    push(c, 0xA2u); push(c, 0xA4u); c->pc = 0xA6F7u; c->cpu_cycles += 6u; return 1;
case 0xA2A5u: /* LDA IMM A9 3E */
    c->pc = 0xA2A7u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2A7u: /* STA ZP 85 FD */
    c->pc = 0xA2A9u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2A9u: /* JSR ABS 20 AB C0 */
    push(c, 0xA2u); push(c, 0xABu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA2ACu: /* DEC ZP C6 FD */
    c->pc = 0xA2AEu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA2AEu: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA2B0u ^ 0xA2A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA2B0u; } return 1;
case 0xA2B0u: /* JSR ABS 20 2D A5 */
    push(c, 0xA2u); push(c, 0xB2u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xA2B3u: /* LDA IMM A9 00 */
    c->pc = 0xA2B5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2B5u: /* STA ZP 85 AE */
    c->pc = 0xA2B7u;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2B7u: /* LDA IMM A9 0E */
    c->pc = 0xA2B9u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2B9u: /* JSR ABS 20 5D C0 */
    push(c, 0xA2u); push(c, 0xBBu); c->pc = 0xC05Du; c->cpu_cycles += 6u; return 1;
case 0xA2BCu: /* LDA ZP A5 BE */
    c->pc = 0xA2BEu;
    ea = 0xBEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2BEu: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA2C0u ^ 0xA2C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA2C0u; } return 1;
case 0xA2C0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA2C6u: /* LDA IMM A9 03 */
    c->pc = 0xA2C8u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2C8u: /* JSR ABS 20 44 C6 */
    push(c, 0xA2u); push(c, 0xCAu); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0xA2CBu: /* LDA IMM A9 05 */
    c->pc = 0xA2CDu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2CDu: /* STA ZP 85 2A */
    c->pc = 0xA2CFu;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2CFu: /* LDA IMM A9 40 */
    c->pc = 0xA2D1u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2D1u: /* STA ZP 85 08 */
    c->pc = 0xA2D3u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2D3u: /* LDA IMM A9 8D */
    c->pc = 0xA2D5u;
    v = 0x8Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2D5u: /* STA ZP 85 09 */
    c->pc = 0xA2D7u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2D7u: /* JSR ABS 20 7E A8 */
    push(c, 0xA2u); push(c, 0xD9u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xA2DAu: /* LDA IMM A9 80 */
    c->pc = 0xA2DCu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2DCu: /* STA ZP 85 08 */
    c->pc = 0xA2DEu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2DEu: /* LDA IMM A9 8D */
    c->pc = 0xA2E0u;
    v = 0x8Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2E0u: /* STA ZP 85 09 */
    c->pc = 0xA2E2u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2E2u: /* JSR ABS 20 7E A8 */
    push(c, 0xA2u); push(c, 0xE4u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xA2E5u: /* LDX IMM A2 00 */
    c->pc = 0xA2E7u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA2E7u: /* LDA ABX BD 39 AF */
    c->pc = 0xA2EAu;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA2EAu: /* STA ABS 8D 06 20 */
    c->pc = 0xA2EDu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2EDu: /* LDA ABX BD 3A AF */
    c->pc = 0xA2F0u;
    ea = (uint16_t)(0xAF3Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF3Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA2F0u: /* STA ABS 8D 06 20 */
    c->pc = 0xA2F3u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2F3u: /* INX IMP E8 */
    c->pc = 0xA2F4u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA2F4u: /* INX IMP E8 */
    c->pc = 0xA2F5u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA2F5u: /* LDY ABX BC 39 AF */
    c->pc = 0xA2F8u;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA2F8u: /* INX IMP E8 */
    c->pc = 0xA2F9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA2F9u: /* LDA ABX BD 39 AF */
    c->pc = 0xA2FCu;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA2FCu: /* STA ABS 8D 07 20 */
    c->pc = 0xA2FFu;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2FFu: /* INX IMP E8 */
    c->pc = 0xA300u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA300u: /* DEY IMP 88 */
    c->pc = 0xA301u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA301u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA303u ^ 0xA2F9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2F9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA303u; } return 1;
case 0xA303u: /* CPX IMM E0 19 */
    c->pc = 0xA305u;
    v = 0x19u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA305u: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA307u ^ 0xA2E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA307u; } return 1;
case 0xA307u: /* LDA IMM A9 10 */
    c->pc = 0xA309u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA309u: /* JSR ABS 20 51 C0 */
    push(c, 0xA3u); push(c, 0x0Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA30Cu: /* LDA IMM A9 01 */
    c->pc = 0xA30Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA30Eu: /* JSR ABS 20 B2 A9 */
    push(c, 0xA3u); push(c, 0x10u); c->pc = 0xA9B2u; c->cpu_cycles += 6u; return 1;
case 0xA311u: /* LDA IMM A9 00 */
    c->pc = 0xA313u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA313u: /* STA ZP 85 FD */
    c->pc = 0xA315u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA315u: /* STA ZP 85 9A */
    c->pc = 0xA317u;
    ea = 0x9Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA317u: /* STA ZP 85 9B */
    c->pc = 0xA319u;
    ea = 0x9Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA319u: /* LDX IMM A2 03 */
    c->pc = 0xA31Bu;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA31Bu: /* LDA ABX BD C7 AF */
    c->pc = 0xA31Eu;
    ea = (uint16_t)(0xAFC7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAFC7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA31Eu: /* STA ABX 9D 00 02 */
    c->pc = 0xA321u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA321u: /* DEX IMP CA */
    c->pc = 0xA322u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA322u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA324u ^ 0xA31Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA31Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA324u; } return 1;
case 0xA324u: /* LDA ZP A5 1C */
    c->pc = 0xA326u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA326u: /* AND IMM 29 08 */
    c->pc = 0xA328u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA328u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA32Au ^ 0xA335u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA335u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA32Au; } return 1;
case 0xA32Au: /* LDX IMM A2 60 */
    c->pc = 0xA32Cu;
    v = 0x60u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA32Cu: /* LDA ZP A5 FD */
    c->pc = 0xA32Eu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA32Eu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA330u ^ 0xA332u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA332u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA330u; } return 1;
case 0xA330u: /* LDX IMM A2 70 */
    c->pc = 0xA332u;
    v = 0x70u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA332u: /* STX ABS 8E 00 02 */
    c->pc = 0xA335u;
    ea = 0x0200u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xA335u: /* LDA ZP A5 27 */
    c->pc = 0xA337u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA337u: /* AND IMM 29 3C */
    c->pc = 0xA339u;
    v = 0x3Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA339u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA33Bu ^ 0xA34Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA34Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA33Bu; } return 1;
case 0xA33Bu: /* AND IMM 29 08 */
    c->pc = 0xA33Du;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA33Du: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA33Fu ^ 0xA350u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA350u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA33Fu; } return 1;
case 0xA33Fu: /* LDA IMM A9 2F */
    c->pc = 0xA341u;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA341u: /* JSR ABS 20 51 C0 */
    push(c, 0xA3u); push(c, 0x43u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA344u: /* LDA ZP A5 FD */
    c->pc = 0xA346u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA346u: /* EOR IMM 49 01 */
    c->pc = 0xA348u;
    v = 0x01u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA348u: /* STA ZP 85 FD */
    c->pc = 0xA34Au;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA34Au: /* JSR ABS 20 AB C0 */
    push(c, 0xA3u); push(c, 0x4Cu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA34Du: /* JMP ABS 4C 19 A3 */
    c->pc = 0xA319u; c->cpu_cycles += 3u; return 1;
case 0xA350u: /* LDA ZP A5 FD */
    c->pc = 0xA352u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA352u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA354u ^ 0xA357u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA357u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA354u; } return 1;
case 0xA354u: /* JMP ABS 4C 19 A5 */
    c->pc = 0xA519u; c->cpu_cycles += 3u; return 1;
case 0xA357u: /* JSR ABS 20 98 A8 */
    push(c, 0xA3u); push(c, 0x59u); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xA35Au: /* JSR ABS 20 73 84 */
    push(c, 0xA3u); push(c, 0x5Cu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xA35Du: /* JSR ABS 20 CC A9 */
    push(c, 0xA3u); push(c, 0x5Fu); c->pc = 0xA9CCu; c->cpu_cycles += 6u; return 1;
case 0xA360u: /* LDX IMM A2 2F */
    c->pc = 0xA362u;
    v = 0x2Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA362u: /* LDA ABX BD CB AF */
    c->pc = 0xA365u;
    ea = (uint16_t)(0xAFCBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAFCBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA365u: /* STA ABX 9D 00 02 */
    c->pc = 0xA368u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA368u: /* DEX IMP CA */
    c->pc = 0xA369u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA369u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA36Bu ^ 0xA362u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA362u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA36Bu; } return 1;
case 0xA36Bu: /* LDA IMM A9 00 */
    c->pc = 0xA36Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA36Du: /* LDX IMM A2 18 */
    c->pc = 0xA36Fu;
    v = 0x18u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA36Fu: /* STA ABX 9D 20 04 */
    c->pc = 0xA372u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA372u: /* DEX IMP CA */
    c->pc = 0xA373u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA373u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA375u ^ 0xA36Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA36Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA375u; } return 1;
case 0xA375u: /* JSR ABS 20 25 AA */
    push(c, 0xA3u); push(c, 0x77u); c->pc = 0xAA25u; c->cpu_cycles += 6u; return 1;
case 0xA378u: /* JSR ABS 20 D4 A8 */
    push(c, 0xA3u); push(c, 0x7Au); c->pc = 0xA8D4u; c->cpu_cycles += 6u; return 1;
case 0xA37Bu: /* LDA IMM A9 00 */
    c->pc = 0xA37Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA37Du: /* STA ABS 8D A0 06 */
    c->pc = 0xA380u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA380u: /* LDA IMM A9 09 */
    c->pc = 0xA382u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA382u: /* STA ABS 8D 80 06 */
    c->pc = 0xA385u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA385u: /* LDA IMM A9 00 */
    c->pc = 0xA387u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA387u: /* STA ZP 85 FE */
    c->pc = 0xA389u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA389u: /* LDA ZP A5 27 */
    c->pc = 0xA38Bu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA38Bu: /* AND IMM 29 F0 */
    c->pc = 0xA38Du;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA38Du: /* BNE REL D0 18 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA38Fu ^ 0xA3A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA38Fu; } return 1;
case 0xA38Fu: /* LDA ZP A5 23 */
    c->pc = 0xA391u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA391u: /* AND IMM 29 F0 */
    c->pc = 0xA393u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA393u: /* BEQ REL F0 45 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA395u ^ 0xA3DAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3DAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA395u; } return 1;
case 0xA395u: /* LDA ZP A5 25 */
    c->pc = 0xA397u;
    ea = 0x25u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA397u: /* CMP ZP C5 23 */
    c->pc = 0xA399u;
    ea = 0x23u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xA399u: /* BNE REL D0 3F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA39Bu ^ 0xA3DAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3DAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA39Bu; } return 1;
case 0xA39Bu: /* INC ZP E6 FE */
    c->pc = 0xA39Du;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA39Du: /* LDA ZP A5 FE */
    c->pc = 0xA39Fu;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA39Fu: /* CMP IMM C9 18 */
    c->pc = 0xA3A1u;
    v = 0x18u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA3A1u: /* BCC REL 90 3B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA3A3u ^ 0xA3DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3A3u; } return 1;
case 0xA3A3u: /* LDA IMM A9 08 */
    c->pc = 0xA3A5u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3A5u: /* STA ZP 85 FE */
    c->pc = 0xA3A7u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3A7u: /* LDA IMM A9 2F */
    c->pc = 0xA3A9u;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3A9u: /* JSR ABS 20 51 C0 */
    push(c, 0xA3u); push(c, 0xABu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA3ACu: /* LDX ABS AE A0 06 */
    c->pc = 0xA3AFu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xA3AFu: /* LDA ZP A5 23 */
    c->pc = 0xA3B1u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3B1u: /* AND IMM 29 C0 */
    c->pc = 0xA3B3u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3B3u: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3B5u ^ 0xA3C5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3C5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3B5u; } return 1;
case 0xA3B5u: /* AND IMM 29 80 */
    c->pc = 0xA3B7u;
    v = 0x80u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3B7u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3B9u ^ 0xA3BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3B9u; } return 1;
case 0xA3B9u: /* LDA ABX BD 2D B0 */
    c->pc = 0xA3BCu;
    ea = (uint16_t)(0xB02Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB02Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3BCu: /* JMP ABS 4C D4 A3 */
    c->pc = 0xA3D4u; c->cpu_cycles += 3u; return 1;
case 0xA3BFu: /* LDA ABX BD 46 B0 */
    c->pc = 0xA3C2u;
    ea = (uint16_t)(0xB046u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB046u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3C2u: /* JMP ABS 4C D4 A3 */
    c->pc = 0xA3D4u; c->cpu_cycles += 3u; return 1;
case 0xA3C5u: /* LDA ZP A5 23 */
    c->pc = 0xA3C7u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3C7u: /* AND IMM 29 10 */
    c->pc = 0xA3C9u;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3C9u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3CBu ^ 0xA3D1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3D1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3CBu; } return 1;
case 0xA3CBu: /* LDA ABX BD 5F B0 */
    c->pc = 0xA3CEu;
    ea = (uint16_t)(0xB05Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB05Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3CEu: /* JMP ABS 4C D4 A3 */
    c->pc = 0xA3D4u; c->cpu_cycles += 3u; return 1;
case 0xA3D1u: /* LDA ABX BD 78 B0 */
    c->pc = 0xA3D4u;
    ea = (uint16_t)(0xB078u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB078u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3D4u: /* STA ABS 8D A0 06 */
    c->pc = 0xA3D7u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA3D7u: /* JMP ABS 4C DE A3 */
    c->pc = 0xA3DEu; c->cpu_cycles += 3u; return 1;
case 0xA3DAu: /* LDA IMM A9 00 */
    c->pc = 0xA3DCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3DCu: /* STA ZP 85 FE */
    c->pc = 0xA3DEu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3DEu: /* LDA ZP A5 27 */
    c->pc = 0xA3E0u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E0u: /* AND IMM 29 03 */
    c->pc = 0xA3E2u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3E2u: /* BEQ REL F0 28 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3E4u ^ 0xA40Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA40Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3E4u; } return 1;
case 0xA3E4u: /* LDA ZP A5 27 */
    c->pc = 0xA3E6u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E6u: /* LDX ABS AE A0 06 */
    c->pc = 0xA3E9u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xA3E9u: /* AND IMM 29 01 */
    c->pc = 0xA3EBu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3EBu: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3EDu ^ 0xA401u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA401u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3EDu; } return 1;
case 0xA3EDu: /* LDA ABX BD 20 04 */
    c->pc = 0xA3F0u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3F0u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA3F2u ^ 0xA40Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA40Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3F2u; } return 1;
case 0xA3F2u: /* LDA IMM A9 42 */
    c->pc = 0xA3F4u;
    v = 0x42u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3F4u: /* JSR ABS 20 51 C0 */
    push(c, 0xA3u); push(c, 0xF6u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA3F7u: /* INC ABX FE 20 04 */
    c->pc = 0xA3FAu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA3FAu: /* DEC ABS CE 80 06 */
    c->pc = 0xA3FDu;
    ea = 0x0680u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA3FDu: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA3FFu ^ 0xA415u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA415u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3FFu; } return 1;
case 0xA3FFu: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA401u ^ 0xA40Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA40Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA401u; } return 1;
case 0xA401u: /* LDA ABX BD 20 04 */
    c->pc = 0xA404u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA404u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA406u ^ 0xA40Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA40Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA406u; } return 1;
case 0xA406u: /* DEC ABX DE 20 04 */
    c->pc = 0xA409u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA409u: /* INC ABS EE 80 06 */
    c->pc = 0xA40Cu;
    ea = 0x0680u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA40Cu: /* JSR ABS 20 27 A9 */
    push(c, 0xA4u); push(c, 0x0Eu); c->pc = 0xA927u; c->cpu_cycles += 6u; return 1;
case 0xA40Fu: /* JSR ABS 20 AB C0 */
    push(c, 0xA4u); push(c, 0x11u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA412u: /* JMP ABS 4C 89 A3 */
    c->pc = 0xA389u; c->cpu_cycles += 3u; return 1;
case 0xA415u: /* JSR ABS 20 27 A9 */
    push(c, 0xA4u); push(c, 0x17u); c->pc = 0xA927u; c->cpu_cycles += 6u; return 1;
case 0xA418u: /* LDA IMM A9 0F */
    c->pc = 0xA41Au;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA41Au: /* STA ABS 8D 6C 03 */
    c->pc = 0xA41Du;
    ea = 0x036Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA41Du: /* LDX IMM A2 00 */
    c->pc = 0xA41Fu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA41Fu: /* LDA ABX BD 20 04 */
    c->pc = 0xA422u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA422u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA424u ^ 0xA429u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA429u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA424u; } return 1;
case 0xA424u: /* INX IMP E8 */
    c->pc = 0xA425u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA425u: /* CPX IMM E0 04 */
    c->pc = 0xA427u;
    v = 0x04u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA427u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA429u ^ 0xA41Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA41Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA429u; } return 1;
case 0xA429u: /* STX ZP 86 04 */
    c->pc = 0xA42Bu;
    ea = 0x04u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA42Bu: /* TXA IMP 8A */
    c->pc = 0xA42Cu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA42Cu: /* CLC IMP 18 */
    c->pc = 0xA42Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA42Du: /* ADC IMM 69 05 */
    c->pc = 0xA42Fu;
    v = 0x05u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA42Fu: /* TAX IMP AA */
    c->pc = 0xA430u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA430u: /* LDA IMM A9 00 */
    c->pc = 0xA432u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA432u: /* STA ZP 85 01 */
    c->pc = 0xA434u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA434u: /* STA ZP 85 02 */
    c->pc = 0xA436u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA436u: /* STA ZP 85 03 */
    c->pc = 0xA438u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA438u: /* LDA ABX BD 20 04 */
    c->pc = 0xA43Bu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA43Bu: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA43Du ^ 0xA44Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA44Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA43Du; } return 1;
case 0xA43Du: /* LDY ZP A4 01 */
    c->pc = 0xA43Fu;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA43Fu: /* LDA ABY B9 A9 B0 */
    c->pc = 0xA442u;
    ea = (uint16_t)(0xB0A9u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB0A9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA442u: /* PHA IMP 48 */
    c->pc = 0xA443u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA443u: /* LDA ABY B9 BD B0 */
    c->pc = 0xA446u;
    ea = (uint16_t)(0xB0BDu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB0BDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA446u: /* TAY IMP A8 */
    c->pc = 0xA447u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA447u: /* PLA IMP 68 */
    c->pc = 0xA448u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA448u: /* ORA ABY 19 02 00 */
    c->pc = 0xA44Bu;
    ea = (uint16_t)(0x0002u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0002u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA44Bu: /* STA ABY 99 02 00 */
    c->pc = 0xA44Eu;
    ea = (uint16_t)(0x0002u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA44Eu: /* INX IMP E8 */
    c->pc = 0xA44Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA44Fu: /* CPX IMM E0 19 */
    c->pc = 0xA451u;
    v = 0x19u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA451u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA453u ^ 0xA455u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA455u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA453u; } return 1;
case 0xA453u: /* LDX IMM A2 05 */
    c->pc = 0xA455u;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA455u: /* INC ZP E6 01 */
    c->pc = 0xA457u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA457u: /* LDA ZP A5 01 */
    c->pc = 0xA459u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA459u: /* CMP IMM C9 14 */
    c->pc = 0xA45Bu;
    v = 0x14u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA45Bu: /* BNE REL D0 DB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA45Du ^ 0xA438u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA438u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA45Du; } return 1;
case 0xA45Du: /* LDA ZP A5 02 */
    c->pc = 0xA45Fu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA45Fu: /* ORA ZP 05 03 */
    c->pc = 0xA461u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA461u: /* CMP IMM C9 FF */
    c->pc = 0xA463u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA463u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA465u ^ 0xA468u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA468u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA465u; } return 1;
case 0xA465u: /* JMP ABS 4C AD A4 */
    c->pc = 0xA4ADu; c->cpu_cycles += 3u; return 1;
case 0xA468u: /* LDX IMM A2 02 */
    c->pc = 0xA46Au;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA46Au: /* JSR ABS 20 8B A9 */
    push(c, 0xA4u); push(c, 0x6Cu); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xA46Du: /* LDA IMM A9 7D */
    c->pc = 0xA46Fu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA46Fu: /* STA ZP 85 FD */
    c->pc = 0xA471u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA471u: /* JSR ABS 20 AB C0 */
    push(c, 0xA4u); push(c, 0x73u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA474u: /* DEC ZP C6 FD */
    c->pc = 0xA476u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA476u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA478u ^ 0xA471u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA471u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA478u; } return 1;
case 0xA478u: /* LDX IMM A2 03 */
    c->pc = 0xA47Au;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA47Au: /* JSR ABS 20 8B A9 */
    push(c, 0xA4u); push(c, 0x7Cu); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xA47Du: /* JSR ABS 20 98 A8 */
    push(c, 0xA4u); push(c, 0x7Fu); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xA480u: /* JSR ABS 20 73 84 */
    push(c, 0xA4u); push(c, 0x82u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xA483u: /* JSR ABS 20 09 AA */
    push(c, 0xA4u); push(c, 0x85u); c->pc = 0xAA09u; c->cpu_cycles += 6u; return 1;
case 0xA486u: /* JSR ABS 20 D4 A8 */
    push(c, 0xA4u); push(c, 0x88u); c->pc = 0xA8D4u; c->cpu_cycles += 6u; return 1;
case 0xA489u: /* LDA IMM A9 7D */
    c->pc = 0xA48Bu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA48Bu: /* STA ZP 85 FD */
    c->pc = 0xA48Du;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA48Du: /* JSR ABS 20 AB C0 */
    push(c, 0xA4u); push(c, 0x8Fu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA490u: /* DEC ZP C6 FD */
    c->pc = 0xA492u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA492u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA494u ^ 0xA48Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA48Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA494u; } return 1;
case 0xA494u: /* JSR ABS 20 98 A8 */
    push(c, 0xA4u); push(c, 0x96u); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xA497u: /* LDX IMM A2 00 */
    c->pc = 0xA499u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA499u: /* JSR ABS 20 8B A9 */
    push(c, 0xA4u); push(c, 0x9Bu); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xA49Cu: /* JSR ABS 20 AB C0 */
    push(c, 0xA4u); push(c, 0x9Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA49Fu: /* LDX IMM A2 01 */
    c->pc = 0xA4A1u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA4A1u: /* JSR ABS 20 8B A9 */
    push(c, 0xA4u); push(c, 0xA3u); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xA4A4u: /* JSR ABS 20 AB C0 */
    push(c, 0xA4u); push(c, 0xA6u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA4A7u: /* JSR ABS 20 D4 A8 */
    push(c, 0xA4u); push(c, 0xA9u); c->pc = 0xA8D4u; c->cpu_cycles += 6u; return 1;
case 0xA4AAu: /* JMP ABS 4C 11 A3 */
    c->pc = 0xA311u; c->cpu_cycles += 3u; return 1;
case 0xA4ADu: /* LDA ZP A5 02 */
    c->pc = 0xA4AFu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4AFu: /* STA ZP 85 9A */
    c->pc = 0xA4B1u;
    ea = 0x9Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4B1u: /* AND IMM 29 03 */
    c->pc = 0xA4B3u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4B3u: /* STA ZP 85 9B */
    c->pc = 0xA4B5u;
    ea = 0x9Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4B5u: /* LDA ZP A5 9A */
    c->pc = 0xA4B7u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4B7u: /* AND IMM 29 20 */
    c->pc = 0xA4B9u;
    v = 0x20u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4B9u: /* LSR IMP 4A */
    c->pc = 0xA4BAu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4BAu: /* LSR IMP 4A */
    c->pc = 0xA4BBu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4BBu: /* LSR IMP 4A */
    c->pc = 0xA4BCu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4BCu: /* ORA ZP 05 9B */
    c->pc = 0xA4BEu;
    ea = 0x9Bu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4BEu: /* STA ZP 85 9B */
    c->pc = 0xA4C0u;
    ea = 0x9Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4C0u: /* LDA ZP A5 04 */
    c->pc = 0xA4C2u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4C2u: /* STA ZP 85 A7 */
    c->pc = 0xA4C4u;
    ea = 0xA7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4C4u: /* LDA IMM A9 C0 */
    c->pc = 0xA4C6u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4C6u: /* STA ZP 85 FD */
    c->pc = 0xA4C8u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4C8u: /* LDA IMM A9 8D */
    c->pc = 0xA4CAu;
    v = 0x8Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4CAu: /* STA ZP 85 FE */
    c->pc = 0xA4CCu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4CCu: /* JSR ABS 20 EA A9 */
    push(c, 0xA4u); push(c, 0xCEu); c->pc = 0xA9EAu; c->cpu_cycles += 6u; return 1;
case 0xA4CFu: /* LDA IMM A9 3C */
    c->pc = 0xA4D1u;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4D1u: /* STA ZP 85 FD */
    c->pc = 0xA4D3u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4D3u: /* JSR ABS 20 AB C0 */
    push(c, 0xA4u); push(c, 0xD5u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA4D6u: /* DEC ZP C6 FD */
    c->pc = 0xA4D8u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA4D8u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA4DAu ^ 0xA4D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4DAu; } return 1;
case 0xA4DAu: /* JSR ABS 20 98 A8 */
    push(c, 0xA4u); push(c, 0xDCu); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xA4DDu: /* JSR ABS 20 73 84 */
    push(c, 0xA4u); push(c, 0xDFu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xA4E0u: /* JSR ABS 20 CC A9 */
    push(c, 0xA4u); push(c, 0xE2u); c->pc = 0xA9CCu; c->cpu_cycles += 6u; return 1;
case 0xA4E3u: /* LDA ZP A5 9A */
    c->pc = 0xA4E5u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4E5u: /* STA ZP 85 01 */
    c->pc = 0xA4E7u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4E7u: /* LDA ZP A5 9B */
    c->pc = 0xA4E9u;
    ea = 0x9Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4E9u: /* STA ZP 85 02 */
    c->pc = 0xA4EBu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4EBu: /* LDX IMM A2 00 */
    c->pc = 0xA4EDu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA4EDu: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA4EFu ^ 0xA4FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4EFu; } return 1;
case 0xA4EFu: /* LSR ZP 46 02 */
    c->pc = 0xA4F1u;
    ea = 0x02u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA4F1u: /* ROR ZP 66 01 */
    c->pc = 0xA4F3u;
    ea = 0x01u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA4F3u: /* BCS REL B0 06 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA4F5u ^ 0xA4FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4F5u; } return 1;
case 0xA4F5u: /* INX IMP E8 */
    c->pc = 0xA4F6u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA4F6u: /* INX IMP E8 */
    c->pc = 0xA4F7u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA4F7u: /* INX IMP E8 */
    c->pc = 0xA4F8u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA4F8u: /* INX IMP E8 */
    c->pc = 0xA4F9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA4F9u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA4FBu ^ 0xA507u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA507u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA4FBu; } return 1;
case 0xA4FBu: /* LDY IMM A0 04 */
    c->pc = 0xA4FDu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA4FDu: /* LDA ABX BD D1 B0 */
    c->pc = 0xA500u;
    ea = (uint16_t)(0xB0D1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB0D1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA500u: /* STA ABX 9D 00 02 */
    c->pc = 0xA503u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA503u: /* INX IMP E8 */
    c->pc = 0xA504u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA504u: /* DEY IMP 88 */
    c->pc = 0xA505u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA505u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA507u ^ 0xA4FDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4FDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA507u; } return 1;
case 0xA507u: /* CPX IMM E0 30 */
    c->pc = 0xA509u;
    v = 0x30u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA509u: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA50Bu ^ 0xA4EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA4EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA50Bu; } return 1;
case 0xA50Bu: /* JSR ABS 20 D4 A8 */
    push(c, 0xA5u); push(c, 0x0Du); c->pc = 0xA8D4u; c->cpu_cycles += 6u; return 1;
case 0xA50Eu: /* LDA IMM A9 7D */
    c->pc = 0xA510u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA510u: /* STA ZP 85 FD */
    c->pc = 0xA512u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA512u: /* JSR ABS 20 AB C0 */
    push(c, 0xA5u); push(c, 0x14u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA515u: /* DEC ZP C6 FD */
    c->pc = 0xA517u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA517u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA519u ^ 0xA512u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA512u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA519u; } return 1;
case 0xA519u: /* JSR ABS 20 2D A5 */
    push(c, 0xA5u); push(c, 0x1Bu); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xA51Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA51Du: /* LDA ZP A5 F8 */
    c->pc = 0xA51Fu;
    ea = 0xF8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA51Fu: /* ORA IMM 09 18 */
    c->pc = 0xA521u;
    v = 0x18u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA521u: /* STA ZP 85 F8 */
    c->pc = 0xA523u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA523u: /* LDA ZP A5 F7 */
    c->pc = 0xA525u;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA525u: /* ORA IMM 09 80 */
    c->pc = 0xA527u;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA527u: /* STA ZP 85 F7 */
    c->pc = 0xA529u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA529u: /* STA ABS 8D 00 20 */
    c->pc = 0xA52Cu;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA52Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA52Du: /* LDA IMM A9 10 */
    c->pc = 0xA52Fu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA52Fu: /* STA ZP 85 F7 */
    c->pc = 0xA531u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA531u: /* STA ABS 8D 00 20 */
    c->pc = 0xA534u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA534u: /* LDA IMM A9 06 */
    c->pc = 0xA536u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA536u: /* STA ZP 85 F8 */
    c->pc = 0xA538u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA538u: /* STA ABS 8D 01 20 */
    c->pc = 0xA53Bu;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA53Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA53Cu: /* LDA ZP A5 08 */
    c->pc = 0xA53Eu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA53Eu: /* PHA IMP 48 */
    c->pc = 0xA53Fu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA53Fu: /* LDA ZP A5 09 */
    c->pc = 0xA541u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA541u: /* PHA IMP 48 */
    c->pc = 0xA542u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA542u: /* LDA ZP A5 1B */
    c->pc = 0xA544u;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA544u: /* JSR ABS 20 1B D1 */
    push(c, 0xA5u); push(c, 0x46u); c->pc = 0xD11Bu; c->cpu_cycles += 6u; return 1;
case 0xA547u: /* CLC IMP 18 */
    c->pc = 0xA548u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA548u: /* PLA IMP 68 */
    c->pc = 0xA549u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA549u: /* STA ZP 85 09 */
    c->pc = 0xA54Bu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA54Bu: /* PLA IMP 68 */
    c->pc = 0xA54Cu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA54Cu: /* STA ZP 85 08 */
    c->pc = 0xA54Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA54Eu: /* INC ZP E6 08 */
    c->pc = 0xA550u;
    ea = 0x08u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA550u: /* INC ZP E6 1A */
    c->pc = 0xA552u;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA552u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA553u: /* LDY ZP A4 FD */
    c->pc = 0xA555u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA555u: /* LDX IMM A2 00 */
    c->pc = 0xA557u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA557u: /* LDA IMM A9 46 */
    c->pc = 0xA559u;
    v = 0x46u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA559u: /* STA ZP 85 C9 */
    c->pc = 0xA55Bu;
    ea = 0xC9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA55Bu: /* LDA IMM A9 AD */
    c->pc = 0xA55Du;
    v = 0xADu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA55Du: /* CLC IMP 18 */
    c->pc = 0xA55Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA55Eu: /* ADC ZP 65 C8 */
    c->pc = 0xA560u;
    ea = 0xC8u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA560u: /* STA ZP 85 CA */
    c->pc = 0xA562u;
    ea = 0xCAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA562u: /* LDA IZY B1 C9 */
    c->pc = 0xA564u;
    ea = (uint16_t)(read16_zp(c, 0xC9u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xC9u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA564u: /* STA ABX 9D B8 03 */
    c->pc = 0xA567u;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA567u: /* TYA IMP 98 */
    c->pc = 0xA568u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA568u: /* CLC IMP 18 */
    c->pc = 0xA569u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA569u: /* ADC IMM 69 01 */
    c->pc = 0xA56Bu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA56Bu: /* TAY IMP A8 */
    c->pc = 0xA56Cu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA56Cu: /* LDA ZP A5 C8 */
    c->pc = 0xA56Eu;
    ea = 0xC8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA56Eu: /* ADC IMM 69 00 */
    c->pc = 0xA570u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA570u: /* STA ZP 85 C8 */
    c->pc = 0xA572u;
    ea = 0xC8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA572u: /* INX IMP E8 */
    c->pc = 0xA573u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA573u: /* CPX IMM E0 1B */
    c->pc = 0xA575u;
    v = 0x1Bu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA575u: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA577u ^ 0xA557u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA557u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA577u; } return 1;
case 0xA577u: /* STX ZP 86 47 */
    c->pc = 0xA579u;
    ea = 0x47u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA579u: /* STY ZP 84 FD */
    c->pc = 0xA57Bu;
    ea = 0xFDu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA57Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA57Cu: /* STA ZP 85 00 */
    c->pc = 0xA57Eu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA57Eu: /* LDA ZP A5 00 */
    c->pc = 0xA580u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA580u: /* AND IMM 29 01 */
    c->pc = 0xA582u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA582u: /* BEQ REL F0 24 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA584u ^ 0xA5A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA584u; } return 1;
case 0xA584u: /* LDA ZP A5 00 */
    c->pc = 0xA586u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA586u: /* EOR IMM 49 3F */
    c->pc = 0xA588u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA588u: /* TAX IMP AA */
    c->pc = 0xA589u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA589u: /* LDA ABX BD F1 B2 */
    c->pc = 0xA58Cu;
    ea = (uint16_t)(0xB2F1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2F1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA58Cu: /* STA ABS 8D B9 03 */
    c->pc = 0xA58Fu;
    ea = 0x03B9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA58Fu: /* LDA ABX BD F2 B2 */
    c->pc = 0xA592u;
    ea = (uint16_t)(0xB2F2u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2F2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA592u: /* STA ABS 8D B8 03 */
    c->pc = 0xA595u;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA595u: /* LDA IMM A9 23 */
    c->pc = 0xA597u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA597u: /* STA ABS 8D B6 03 */
    c->pc = 0xA59Au;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA59Au: /* LDX ZP A6 00 */
    c->pc = 0xA59Cu;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA59Cu: /* DEX IMP CA */
    c->pc = 0xA59Du;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA59Du: /* TXA IMP 8A */
    c->pc = 0xA59Eu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA59Eu: /* ORA IMM 09 C0 */
    c->pc = 0xA5A0u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5A0u: /* STA ABS 8D B7 03 */
    c->pc = 0xA5A3u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA5A3u: /* LDA IMM A9 02 */
    c->pc = 0xA5A5u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5A5u: /* STA ZP 85 47 */
    c->pc = 0xA5A7u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5A7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA5A8u: /* LDA ZP A5 00 */
    c->pc = 0xA5AAu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5AAu: /* LSR IMP 4A */
    c->pc = 0xA5ABu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5ABu: /* CMP IMM C9 1E */
    c->pc = 0xA5ADu;
    v = 0x1Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5ADu: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA5AFu ^ 0xA5B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5AFu; } return 1;
case 0xA5AFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA5B0u: /* ASL IMP 0A */
    c->pc = 0xA5B1u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5B1u: /* ASL IMP 0A */
    c->pc = 0xA5B2u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5B2u: /* ASL IMP 0A */
    c->pc = 0xA5B3u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5B3u: /* ASL IMP 0A */
    c->pc = 0xA5B4u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5B4u: /* ROL ZP 26 08 */
    c->pc = 0xA5B6u;
    ea = 0x08u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA5B6u: /* ASL IMP 0A */
    c->pc = 0xA5B7u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5B7u: /* ROL ZP 26 08 */
    c->pc = 0xA5B9u;
    ea = 0x08u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA5B9u: /* STA ABS 8D B7 03 */
    c->pc = 0xA5BCu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA5BCu: /* LDA ZP A5 08 */
    c->pc = 0xA5BEu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5BEu: /* AND IMM 29 03 */
    c->pc = 0xA5C0u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5C0u: /* ORA IMM 09 20 */
    c->pc = 0xA5C2u;
    v = 0x20u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5C2u: /* STA ABS 8D B6 03 */
    c->pc = 0xA5C5u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA5C5u: /* LDA ZP A5 00 */
    c->pc = 0xA5C7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5C7u: /* LSR IMP 4A */
    c->pc = 0xA5C8u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5C8u: /* EOR IMM 49 1F */
    c->pc = 0xA5CAu;
    v = 0x1Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5CAu: /* STA ZP 85 09 */
    c->pc = 0xA5CCu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5CCu: /* LDA IMM A9 00 */
    c->pc = 0xA5CEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5CEu: /* LSR ZP 46 09 */
    c->pc = 0xA5D0u;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA5D0u: /* ROR IMP 6A */
    c->pc = 0xA5D1u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5D1u: /* LSR ZP 46 09 */
    c->pc = 0xA5D3u;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA5D3u: /* ROR IMP 6A */
    c->pc = 0xA5D4u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5D4u: /* LSR ZP 46 09 */
    c->pc = 0xA5D6u;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA5D6u: /* ROR IMP 6A */
    c->pc = 0xA5D7u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5D7u: /* STA ZP 85 08 */
    c->pc = 0xA5D9u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5D9u: /* CLC IMP 18 */
    c->pc = 0xA5DAu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5DAu: /* LDA ZP A5 08 */
    c->pc = 0xA5DCu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5DCu: /* ADC IMM 69 F1 */
    c->pc = 0xA5DEu;
    v = 0xF1u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5DEu: /* STA ZP 85 08 */
    c->pc = 0xA5E0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5E0u: /* LDA ZP A5 09 */
    c->pc = 0xA5E2u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5E2u: /* ADC IMM 69 B2 */
    c->pc = 0xA5E4u;
    v = 0xB2u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5E4u: /* STA ZP 85 09 */
    c->pc = 0xA5E6u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5E6u: /* LDY IMM A0 1F */
    c->pc = 0xA5E8u;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA5E8u: /* LDA IZY B1 08 */
    c->pc = 0xA5EAu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5EAu: /* STA ABY 99 B8 03 */
    c->pc = 0xA5EDu;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA5EDu: /* DEY IMP 88 */
    c->pc = 0xA5EEu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA5EEu: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA5F0u ^ 0xA5E8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5E8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5F0u; } return 1;
case 0xA5F0u: /* LDA IMM A9 20 */
    c->pc = 0xA5F2u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5F2u: /* STA ZP 85 47 */
    c->pc = 0xA5F4u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5F4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA5F5u: /* DEC ABS CE 90 06 */
    c->pc = 0xA5F8u;
    ea = 0x0690u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA5F8u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5FAu ^ 0xA60Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA60Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5FAu; } return 1;
case 0xA5FAu: /* LDA IMM A9 05 */
    c->pc = 0xA5FCu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5FCu: /* STA ABS 8D 90 06 */
    c->pc = 0xA5FFu;
    ea = 0x0690u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA5FFu: /* INC ABS EE 10 04 */
    c->pc = 0xA602u;
    ea = 0x0410u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA602u: /* LDA ABS AD 10 04 */
    c->pc = 0xA605u;
    ea = 0x0410u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA605u: /* CMP IMM C9 02 */
    c->pc = 0xA607u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA607u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA609u ^ 0xA60Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA60Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA609u; } return 1;
case 0xA609u: /* LDA IMM A9 00 */
    c->pc = 0xA60Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA60Bu: /* STA ABS 8D 10 04 */
    c->pc = 0xA60Eu;
    ea = 0x0410u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA60Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA61Bu: /* LDX IMM A2 02 */
    c->pc = 0xA61Du;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA61Du: /* STX ZP 86 2B */
    c->pc = 0xA61Fu;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA61Fu: /* LDA ABX BD 00 04 */
    c->pc = 0xA622u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA622u: /* BEQ REL F0 29 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA624u ^ 0xA64Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA64Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA624u; } return 1;
case 0xA624u: /* CLC IMP 18 */
    c->pc = 0xA625u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA625u: /* LDA ABX BD C0 04 */
    c->pc = 0xA628u;
    ea = (uint16_t)(0x04C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA628u: /* ADC ABS 6D 60 06 */
    c->pc = 0xA62Bu;
    ea = 0x0660u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA62Bu: /* STA ABX 9D C0 04 */
    c->pc = 0xA62Eu;
    ea = (uint16_t)(0x04C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA62Eu: /* LDA ABX BD A0 04 */
    c->pc = 0xA631u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA631u: /* ADC ABS 6D 40 06 */
    c->pc = 0xA634u;
    ea = 0x0640u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA634u: /* STA ABX 9D A0 04 */
    c->pc = 0xA637u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA637u: /* LDA ABX BD 40 04 */
    c->pc = 0xA63Au;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA63Au: /* ADC IMM 69 00 */
    c->pc = 0xA63Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA63Cu: /* STA ABX 9D 40 04 */
    c->pc = 0xA63Fu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA63Fu: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA641u ^ 0xA64Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA64Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA641u; } return 1;
case 0xA641u: /* LDA ABX BD A0 04 */
    c->pc = 0xA644u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA644u: /* CMP IMM C9 E8 */
    c->pc = 0xA646u;
    v = 0xE8u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA646u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA648u ^ 0xA64Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA64Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA648u; } return 1;
case 0xA648u: /* LDA IMM A9 00 */
    c->pc = 0xA64Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA64Au: /* STA ABX 9D 00 04 */
    c->pc = 0xA64Du;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA64Du: /* LDX ZP A6 2B */
    c->pc = 0xA64Fu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA64Fu: /* INX IMP E8 */
    c->pc = 0xA650u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA650u: /* CPX IMM E0 0F */
    c->pc = 0xA652u;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA652u: /* BNE REL D0 C9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA654u ^ 0xA61Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA61Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA654u; } return 1;
case 0xA654u: /* LDA ZP A5 AE */
    c->pc = 0xA656u;
    ea = 0xAEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA656u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA658u ^ 0xA65Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA65Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA658u; } return 1;
case 0xA658u: /* LDA ZP A5 22 */
    c->pc = 0xA65Au;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA65Au: /* CMP IMM C9 A8 */
    c->pc = 0xA65Cu;
    v = 0xA8u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA65Cu: /* BCC REL 90 48 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA65Eu ^ 0xA6A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA65Eu; } return 1;
case 0xA65Eu: /* SEC IMP 38 */
    c->pc = 0xA65Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA65Fu: /* LDA ABS AD C0 04 */
    c->pc = 0xA662u;
    ea = 0x04C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA662u: /* SBC ABS ED 60 06 */
    c->pc = 0xA665u;
    ea = 0x0660u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA665u: /* STA ABS 8D C0 04 */
    c->pc = 0xA668u;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA668u: /* LDA ABS AD A0 04 */
    c->pc = 0xA66Bu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA66Bu: /* SBC ABS ED 40 06 */
    c->pc = 0xA66Eu;
    ea = 0x0640u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA66Eu: /* STA ABS 8D A0 04 */
    c->pc = 0xA671u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA671u: /* BCS REL B0 0F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA673u ^ 0xA682u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA682u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA673u; } return 1;
case 0xA673u: /* LDA IMM A9 01 */
    c->pc = 0xA675u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA675u: /* JSR ABS 20 D3 A6 */
    push(c, 0xA6u); push(c, 0x77u); c->pc = 0xA6D3u; c->cpu_cycles += 6u; return 1;
case 0xA678u: /* LDA IMM A9 00 */
    c->pc = 0xA67Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA67Au: /* STA ABS 8D C0 04 */
    c->pc = 0xA67Du;
    ea = 0x04C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA67Du: /* LDA IMM A9 48 */
    c->pc = 0xA67Fu;
    v = 0x48u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA67Fu: /* STA ABS 8D A0 04 */
    c->pc = 0xA682u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA682u: /* SEC IMP 38 */
    c->pc = 0xA683u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA683u: /* LDA ABS AD C1 04 */
    c->pc = 0xA686u;
    ea = 0x04C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA686u: /* SBC ABS ED 60 06 */
    c->pc = 0xA689u;
    ea = 0x0660u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA689u: /* STA ABS 8D C1 04 */
    c->pc = 0xA68Cu;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA68Cu: /* LDA ABS AD A1 04 */
    c->pc = 0xA68Fu;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA68Fu: /* SBC ABS ED 40 06 */
    c->pc = 0xA692u;
    ea = 0x0640u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA692u: /* STA ABS 8D A1 04 */
    c->pc = 0xA695u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA695u: /* BCS REL B0 0F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA697u ^ 0xA6A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA697u; } return 1;
case 0xA697u: /* LDA IMM A9 02 */
    c->pc = 0xA699u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA699u: /* JSR ABS 20 D3 A6 */
    push(c, 0xA6u); push(c, 0x9Bu); c->pc = 0xA6D3u; c->cpu_cycles += 6u; return 1;
case 0xA69Cu: /* LDA IMM A9 00 */
    c->pc = 0xA69Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA69Eu: /* STA ABS 8D C1 04 */
    c->pc = 0xA6A1u;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6A1u: /* LDA IMM A9 48 */
    c->pc = 0xA6A3u;
    v = 0x48u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6A3u: /* STA ABS 8D A1 04 */
    c->pc = 0xA6A6u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6A6u: /* CLC IMP 18 */
    c->pc = 0xA6A7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA6A7u: /* LDA ABS AD 60 06 */
    c->pc = 0xA6AAu;
    ea = 0x0660u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6AAu: /* ADC IMM 69 02 */
    c->pc = 0xA6ACu;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6ACu: /* STA ABS 8D 60 06 */
    c->pc = 0xA6AFu;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6AFu: /* LDA ABS AD 40 06 */
    c->pc = 0xA6B2u;
    ea = 0x0640u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6B2u: /* ADC IMM 69 00 */
    c->pc = 0xA6B4u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6B4u: /* STA ABS 8D 40 06 */
    c->pc = 0xA6B7u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6B7u: /* CMP IMM C9 02 */
    c->pc = 0xA6B9u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6B9u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA6BBu ^ 0xA6C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6BBu; } return 1;
case 0xA6BBu: /* LDA IMM A9 00 */
    c->pc = 0xA6BDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6BDu: /* STA ABS 8D 60 06 */
    c->pc = 0xA6C0u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6C0u: /* CLC IMP 18 */
    c->pc = 0xA6C1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA6C1u: /* LDA ABS AD B0 04 */
    c->pc = 0xA6C4u;
    ea = 0x04B0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6C4u: /* ADC ABS 6D 40 06 */
    c->pc = 0xA6C7u;
    ea = 0x0640u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA6C7u: /* STA ABS 8D B0 04 */
    c->pc = 0xA6CAu;
    ea = 0x04B0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6CAu: /* LDA ABS AD 50 04 */
    c->pc = 0xA6CDu;
    ea = 0x0450u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6CDu: /* ADC IMM 69 00 */
    c->pc = 0xA6CFu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6CFu: /* STA ABS 8D 50 04 */
    c->pc = 0xA6D2u;
    ea = 0x0450u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6D2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA6D3u: /* STA ZP 85 00 */
    c->pc = 0xA6D5u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6D5u: /* LDX IMM A2 02 */
    c->pc = 0xA6D7u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA6D7u: /* LDA ABX BD 00 04 */
    c->pc = 0xA6DAu;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA6DAu: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6DCu ^ 0xA6E2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6E2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6DCu; } return 1;
case 0xA6DCu: /* INX IMP E8 */
    c->pc = 0xA6DDu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA6DDu: /* CPX IMM E0 0F */
    c->pc = 0xA6DFu;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA6DFu: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA6E1u ^ 0xA6D7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6D7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6E1u; } return 1;
case 0xA6E1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA6E2u: /* LDA ZP A5 00 */
    c->pc = 0xA6E4u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6E4u: /* STA ABX 9D 00 04 */
    c->pc = 0xA6E7u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6E7u: /* LDA IMM A9 FF */
    c->pc = 0xA6E9u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6E9u: /* STA ABX 9D 40 04 */
    c->pc = 0xA6ECu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6ECu: /* LDA IMM A9 E0 */
    c->pc = 0xA6EEu;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6EEu: /* STA ABX 9D A0 04 */
    c->pc = 0xA6F1u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6F1u: /* LDA IMM A9 00 */
    c->pc = 0xA6F3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6F3u: /* STA ABX 9D C0 04 */
    c->pc = 0xA6F6u;
    ea = (uint16_t)(0x04C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6F6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA6F7u: /* JSR ABS 20 73 84 */
    push(c, 0xA6u); push(c, 0xF9u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xA6FAu: /* LDA IMM A9 00 */
    c->pc = 0xA6FCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6FCu: /* STA ZP 85 00 */
    c->pc = 0xA6FEu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6FEu: /* LDX IMM A2 02 */
    c->pc = 0xA700u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA700u: /* STX ZP 86 2B */
    c->pc = 0xA702u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA702u: /* LDA ABX BD 00 04 */
    c->pc = 0xA705u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA705u: /* BEQ REL F0 50 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA707u ^ 0xA757u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA757u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA707u; } return 1;
case 0xA707u: /* LDY ABX BC A0 04 */
    c->pc = 0xA70Au;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA70Au: /* STY ZP 84 08 */
    c->pc = 0xA70Cu;
    ea = 0x08u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA70Cu: /* LDY ABX BC 40 04 */
    c->pc = 0xA70Fu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA70Fu: /* STY ZP 84 09 */
    c->pc = 0xA711u;
    ea = 0x09u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA711u: /* LDX IMM A2 00 */
    c->pc = 0xA713u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA713u: /* LDY IMM A0 0C */
    c->pc = 0xA715u;
    v = 0x0Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA715u: /* CMP IMM C9 01 */
    c->pc = 0xA717u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA717u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA719u ^ 0xA71Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA71Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA719u; } return 1;
case 0xA719u: /* LDY IMM A0 04 */
    c->pc = 0xA71Bu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA71Bu: /* LDX IMM A2 30 */
    c->pc = 0xA71Du;
    v = 0x30u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA71Du: /* STY ZP 84 02 */
    c->pc = 0xA71Fu;
    ea = 0x02u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA71Fu: /* LDY ZP A4 00 */
    c->pc = 0xA721u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA721u: /* CLC IMP 18 */
    c->pc = 0xA722u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA722u: /* LDA ZP A5 08 */
    c->pc = 0xA724u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA724u: /* ADC ABX 7D E3 AA */
    c->pc = 0xA727u;
    ea = (uint16_t)(0xAAE3u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xAAE3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA727u: /* STA ABY 99 00 02 */
    c->pc = 0xA72Au;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA72Au: /* LDA ZP A5 09 */
    c->pc = 0xA72Cu;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA72Cu: /* ADC IMM 69 00 */
    c->pc = 0xA72Eu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA72Eu: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA730u ^ 0xA737u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA737u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA730u; } return 1;
case 0xA730u: /* LDA IMM A9 F8 */
    c->pc = 0xA732u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA732u: /* STA ABY 99 00 02 */
    c->pc = 0xA735u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA735u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA737u ^ 0xA74Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA74Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA737u; } return 1;
case 0xA737u: /* LDA ABX BD E4 AA */
    c->pc = 0xA73Au;
    ea = (uint16_t)(0xAAE4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAAE4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA73Au: /* STA ABY 99 01 02 */
    c->pc = 0xA73Du;
    ea = (uint16_t)(0x0201u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA73Du: /* LDA ABX BD E5 AA */
    c->pc = 0xA740u;
    ea = (uint16_t)(0xAAE5u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAAE5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA740u: /* STA ABY 99 02 02 */
    c->pc = 0xA743u;
    ea = (uint16_t)(0x0202u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA743u: /* LDA ABX BD E6 AA */
    c->pc = 0xA746u;
    ea = (uint16_t)(0xAAE6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAAE6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA746u: /* STA ABY 99 03 02 */
    c->pc = 0xA749u;
    ea = (uint16_t)(0x0203u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA749u: /* INY IMP C8 */
    c->pc = 0xA74Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA74Au: /* INY IMP C8 */
    c->pc = 0xA74Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA74Bu: /* INY IMP C8 */
    c->pc = 0xA74Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA74Cu: /* INY IMP C8 */
    c->pc = 0xA74Du;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA74Du: /* INX IMP E8 */
    c->pc = 0xA74Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA74Eu: /* INX IMP E8 */
    c->pc = 0xA74Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA74Fu: /* INX IMP E8 */
    c->pc = 0xA750u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA750u: /* INX IMP E8 */
    c->pc = 0xA751u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA751u: /* DEC ZP C6 02 */
    c->pc = 0xA753u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA753u: /* BNE REL D0 CC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA755u ^ 0xA721u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA721u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA755u; } return 1;
case 0xA755u: /* STY ZP 84 00 */
    c->pc = 0xA757u;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA757u: /* LDX ZP A6 2B */
    c->pc = 0xA759u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA759u: /* INX IMP E8 */
    c->pc = 0xA75Au;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA75Au: /* CPX IMM E0 0F */
    c->pc = 0xA75Cu;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA75Cu: /* BNE REL D0 A2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA75Eu ^ 0xA700u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA700u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA75Eu; } return 1;
case 0xA75Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA75Fu: /* LDX ABS AE 10 04 */
    c->pc = 0xA762u;
    ea = 0x0410u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xA762u: /* LDA ABX BD 23 AB */
    c->pc = 0xA765u;
    ea = (uint16_t)(0xAB23u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB23u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA765u: /* STA ZP 85 08 */
    c->pc = 0xA767u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA767u: /* LDA ABX BD 30 AB */
    c->pc = 0xA76Au;
    ea = (uint16_t)(0xAB30u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAB30u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA76Au: /* STA ZP 85 09 */
    c->pc = 0xA76Cu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA76Cu: /* LDY IMM A0 00 */
    c->pc = 0xA76Eu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA76Eu: /* LDA IZY B1 08 */
    c->pc = 0xA770u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA770u: /* STA ZP 85 01 */
    c->pc = 0xA772u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA772u: /* LDX ZP A6 00 */
    c->pc = 0xA774u;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA774u: /* BEQ REL F0 39 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA776u ^ 0xA7AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA776u; } return 1;
case 0xA776u: /* INY IMP C8 */
    c->pc = 0xA777u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA777u: /* CLC IMP 18 */
    c->pc = 0xA778u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA778u: /* LDA ABS AD B0 04 */
    c->pc = 0xA77Bu;
    ea = 0x04B0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA77Bu: /* ADC IZY 71 08 */
    c->pc = 0xA77Du;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA77Du: /* STA ABX 9D 00 02 */
    c->pc = 0xA780u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA780u: /* LDA ABS AD 50 04 */
    c->pc = 0xA783u;
    ea = 0x0450u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA783u: /* ADC IMM 69 00 */
    c->pc = 0xA785u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA785u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA787u ^ 0xA792u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA792u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA787u; } return 1;
case 0xA787u: /* INY IMP C8 */
    c->pc = 0xA788u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA788u: /* INY IMP C8 */
    c->pc = 0xA789u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA789u: /* INY IMP C8 */
    c->pc = 0xA78Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA78Au: /* INY IMP C8 */
    c->pc = 0xA78Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA78Bu: /* LDA IMM A9 F8 */
    c->pc = 0xA78Du;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA78Du: /* STA ABX 9D 00 02 */
    c->pc = 0xA790u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA790u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA792u ^ 0xA7A5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7A5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA792u; } return 1;
case 0xA792u: /* INY IMP C8 */
    c->pc = 0xA793u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA793u: /* LDA IZY B1 08 */
    c->pc = 0xA795u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA795u: /* STA ABX 9D 01 02 */
    c->pc = 0xA798u;
    ea = (uint16_t)(0x0201u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA798u: /* INY IMP C8 */
    c->pc = 0xA799u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA799u: /* LDA IZY B1 08 */
    c->pc = 0xA79Bu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA79Bu: /* STA ABX 9D 02 02 */
    c->pc = 0xA79Eu;
    ea = (uint16_t)(0x0202u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA79Eu: /* INY IMP C8 */
    c->pc = 0xA79Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA79Fu: /* LDA IZY B1 08 */
    c->pc = 0xA7A1u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7A1u: /* STA ABX 9D 03 02 */
    c->pc = 0xA7A4u;
    ea = (uint16_t)(0x0203u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7A4u: /* INY IMP C8 */
    c->pc = 0xA7A5u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA7A5u: /* INX IMP E8 */
    c->pc = 0xA7A6u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA7A6u: /* INX IMP E8 */
    c->pc = 0xA7A7u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA7A7u: /* INX IMP E8 */
    c->pc = 0xA7A8u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA7A8u: /* INX IMP E8 */
    c->pc = 0xA7A9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA7A9u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA7ABu ^ 0xA7AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7ABu; } return 1;
case 0xA7ABu: /* DEC ZP C6 01 */
    c->pc = 0xA7ADu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA7ADu: /* BNE REL D0 C8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA7AFu ^ 0xA777u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA777u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7AFu; } return 1;
case 0xA7AFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA7B0u: /* JSR ABS 20 2D A5 */
    push(c, 0xA7u); push(c, 0xB2u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xA7B3u: /* LDA IMM A9 50 */
    c->pc = 0xA7B5u;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7B5u: /* STA ZP 85 FD */
    c->pc = 0xA7B7u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7B7u: /* LDA IMM A9 00 */
    c->pc = 0xA7B9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7B9u: /* STA ABS 8D B7 03 */
    c->pc = 0xA7BCu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7BCu: /* STA ZP 85 FE */
    c->pc = 0xA7BEu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7BEu: /* LDA IMM A9 10 */
    c->pc = 0xA7C0u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7C0u: /* STA ABS 8D B6 03 */
    c->pc = 0xA7C3u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7C3u: /* LDA IMM A9 B0 */
    c->pc = 0xA7C5u;
    v = 0xB0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7C5u: /* STA ZP 85 FF */
    c->pc = 0xA7C7u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7C7u: /* JSR ABS 20 47 C7 */
    push(c, 0xA7u); push(c, 0xC9u); c->pc = 0xC747u; c->cpu_cycles += 6u; return 1;
case 0xA7CAu: /* JSR ABS 20 DF D1 */
    push(c, 0xA7u); push(c, 0xCCu); c->pc = 0xD1DFu; c->cpu_cycles += 6u; return 1;
case 0xA7CDu: /* CLC IMP 18 */
    c->pc = 0xA7CEu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA7CEu: /* LDA ABS AD B7 03 */
    c->pc = 0xA7D1u;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7D1u: /* ADC IMM 69 20 */
    c->pc = 0xA7D3u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA7D3u: /* STA ABS 8D B7 03 */
    c->pc = 0xA7D6u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7D6u: /* LDA ABS AD B6 03 */
    c->pc = 0xA7D9u;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7D9u: /* ADC IMM 69 00 */
    c->pc = 0xA7DBu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA7DBu: /* STA ABS 8D B6 03 */
    c->pc = 0xA7DEu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7DEu: /* CLC IMP 18 */
    c->pc = 0xA7DFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA7DFu: /* LDA ZP A5 FE */
    c->pc = 0xA7E1u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7E1u: /* ADC IMM 69 20 */
    c->pc = 0xA7E3u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA7E3u: /* STA ZP 85 FE */
    c->pc = 0xA7E5u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7E5u: /* LDA ZP A5 FF */
    c->pc = 0xA7E7u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7E7u: /* ADC IMM 69 00 */
    c->pc = 0xA7E9u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA7E9u: /* STA ZP 85 FF */
    c->pc = 0xA7EBu;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7EBu: /* DEC ZP C6 FD */
    c->pc = 0xA7EDu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA7EDu: /* BNE REL D0 D8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA7EFu ^ 0xA7C7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7C7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7EFu; } return 1;
case 0xA7EFu: /* LDA IMM A9 D1 */
    c->pc = 0xA7F1u;
    v = 0xD1u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7F1u: /* STA ZP 85 08 */
    c->pc = 0xA7F3u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7F3u: /* LDA IMM A9 B6 */
    c->pc = 0xA7F5u;
    v = 0xB6u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7F5u: /* STA ZP 85 09 */
    c->pc = 0xA7F7u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7F7u: /* LDA IMM A9 20 */
    c->pc = 0xA7F9u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7F9u: /* STA ABS 8D 06 20 */
    c->pc = 0xA7FCu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7FCu: /* LDY IMM A0 00 */
    c->pc = 0xA7FEu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA7FEu: /* STY ABS 8C 06 20 */
    c->pc = 0xA801u;
    ea = 0x2006u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xA801u: /* LDX IMM A2 1E */
    c->pc = 0xA803u;
    v = 0x1Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA803u: /* LDY IMM A0 00 */
    c->pc = 0xA805u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA805u: /* LDA IZY B1 08 */
    c->pc = 0xA807u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA807u: /* STA ABS 8D 07 20 */
    c->pc = 0xA80Au;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA80Au: /* INY IMP C8 */
    c->pc = 0xA80Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA80Bu: /* CPY IMM C0 20 */
    c->pc = 0xA80Du;
    v = 0x20u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xA80Du: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA80Fu ^ 0xA805u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA805u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA80Fu; } return 1;
case 0xA80Fu: /* SEC IMP 38 */
    c->pc = 0xA810u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA810u: /* LDA ZP A5 08 */
    c->pc = 0xA812u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA812u: /* SBC IMM E9 20 */
    c->pc = 0xA814u;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA814u: /* STA ZP 85 08 */
    c->pc = 0xA816u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA816u: /* LDA ZP A5 09 */
    c->pc = 0xA818u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA818u: /* SBC IMM E9 00 */
    c->pc = 0xA81Au;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA81Au: /* STA ZP 85 09 */
    c->pc = 0xA81Cu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA81Cu: /* DEX IMP CA */
    c->pc = 0xA81Du;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA81Du: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA81Fu ^ 0xA803u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA803u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA81Fu; } return 1;
case 0xA81Fu: /* LDY IMM A0 3F */
    c->pc = 0xA821u;
    v = 0x3Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA821u: /* LDA ABY B9 F1 B2 */
    c->pc = 0xA824u;
    ea = (uint16_t)(0xB2F1u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB2F1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA824u: /* STA ABS 8D 07 20 */
    c->pc = 0xA827u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA827u: /* DEY IMP 88 */
    c->pc = 0xA828u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA828u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA82Au ^ 0xA821u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA821u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA82Au; } return 1;
case 0xA82Au: /* LDX IMM A2 1F */
    c->pc = 0xA82Cu;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA82Cu: /* LDA ABX BD 8F AA */
    c->pc = 0xA82Fu;
    ea = (uint16_t)(0xAA8Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAA8Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA82Fu: /* STA ABX 9D 56 03 */
    c->pc = 0xA832u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA832u: /* DEX IMP CA */
    c->pc = 0xA833u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA833u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA835u ^ 0xA82Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA82Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA835u; } return 1;
case 0xA835u: /* LDX IMM A2 0F */
    c->pc = 0xA837u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA837u: /* LDA ABX BD BF AA */
    c->pc = 0xA83Au;
    ea = (uint16_t)(0xAABFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAABFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA83Au: /* STA ABX 9D 56 03 */
    c->pc = 0xA83Du;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA83Du: /* DEX IMP CA */
    c->pc = 0xA83Eu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA83Eu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA840u ^ 0xA837u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA837u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA840u; } return 1;
case 0xA840u: /* LDX IMM A2 1F */
    c->pc = 0xA842u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA842u: /* LDA IMM A9 00 */
    c->pc = 0xA844u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA844u: /* STA ABX 9D 40 04 */
    c->pc = 0xA847u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA847u: /* STA ABX 9D 00 04 */
    c->pc = 0xA84Au;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA84Au: /* DEX IMP CA */
    c->pc = 0xA84Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA84Bu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA84Du ^ 0xA844u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA844u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA84Du; } return 1;
case 0xA84Du: /* LDA IMM A9 77 */
    c->pc = 0xA84Fu;
    v = 0x77u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA84Fu: /* STA ABS 8D B0 04 */
    c->pc = 0xA852u;
    ea = 0x04B0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA852u: /* LDA IMM A9 00 */
    c->pc = 0xA854u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA854u: /* STA ABS 8D 10 04 */
    c->pc = 0xA857u;
    ea = 0x0410u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA857u: /* LDA IMM A9 08 */
    c->pc = 0xA859u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA859u: /* STA ABS 8D 90 06 */
    c->pc = 0xA85Cu;
    ea = 0x0690u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA85Cu: /* LDA IMM A9 01 */
    c->pc = 0xA85Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA85Eu: /* STA ABS 8D 02 04 */
    c->pc = 0xA861u;
    ea = 0x0402u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA861u: /* LDA IMM A9 CC */
    c->pc = 0xA863u;
    v = 0xCCu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA863u: /* STA ABS 8D A2 04 */
    c->pc = 0xA866u;
    ea = 0x04A2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA866u: /* LDA IMM A9 02 */
    c->pc = 0xA868u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA868u: /* STA ABS 8D 03 04 */
    c->pc = 0xA86Bu;
    ea = 0x0403u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA86Bu: /* LDA IMM A9 A4 */
    c->pc = 0xA86Du;
    v = 0xA4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA86Du: /* STA ABS 8D A3 04 */
    c->pc = 0xA870u;
    ea = 0x04A3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA870u: /* JSR ABS 20 1D A5 */
    push(c, 0xA8u); push(c, 0x72u); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0xA873u: /* LDA IMM A9 00 */
    c->pc = 0xA875u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA875u: /* STA ZP 85 27 */
    c->pc = 0xA877u;
    ea = 0x27u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA877u: /* STA ZP 85 22 */
    c->pc = 0xA879u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA879u: /* STA ZP 85 AE */
    c->pc = 0xA87Bu;
    ea = 0xAEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA87Bu: /* JMP ABS 4C E0 A1 */
    c->pc = 0xA1E0u; c->cpu_cycles += 3u; return 1;
case 0xA87Eu: /* LDA IMM A9 00 */
    c->pc = 0xA880u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA880u: /* STA ZP 85 1A */
    c->pc = 0xA882u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA882u: /* STA ZP 85 1B */
    c->pc = 0xA884u;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA884u: /* JSR ABS 20 0B CA */
    push(c, 0xA8u); push(c, 0x86u); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0xA887u: /* INC ZP E6 08 */
    c->pc = 0xA889u;
    ea = 0x08u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA889u: /* INC ZP E6 1A */
    c->pc = 0xA88Bu;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA88Bu: /* JSR ABS 20 0B CA */
    push(c, 0xA8u); push(c, 0x8Du); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0xA88Eu: /* JSR ABS 20 3C A5 */
    push(c, 0xA8u); push(c, 0x90u); c->pc = 0xA53Cu; c->cpu_cycles += 6u; return 1;
case 0xA891u: /* LDA ZP A5 08 */
    c->pc = 0xA893u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA893u: /* AND IMM 29 3F */
    c->pc = 0xA895u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA895u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA897u ^ 0xA884u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA884u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA897u; } return 1;
case 0xA897u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA898u: /* LDA IMM A9 04 */
    c->pc = 0xA89Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA89Au: /* STA ZP 85 FD */
    c->pc = 0xA89Cu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA89Cu: /* LDA ZP A5 1C */
    c->pc = 0xA89Eu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA89Eu: /* AND IMM 29 03 */
    c->pc = 0xA8A0u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8A0u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA8A2u ^ 0xA8A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8A2u; } return 1;
case 0xA8A2u: /* JSR ABS 20 B0 A8 */
    push(c, 0xA8u); push(c, 0xA4u); c->pc = 0xA8B0u; c->cpu_cycles += 6u; return 1;
case 0xA8A5u: /* DEC ZP C6 FD */
    c->pc = 0xA8A7u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA8A7u: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xA8A9u ^ 0xA8AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8A9u; } return 1;
case 0xA8A9u: /* JSR ABS 20 AB C0 */
    push(c, 0xA8u); push(c, 0xABu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA8ACu: /* JMP ABS 4C 9C A8 */
    c->pc = 0xA89Cu; c->cpu_cycles += 3u; return 1;
case 0xA8AFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8B0u: /* LDX IMM A2 07 */
    c->pc = 0xA8B2u;
    v = 0x07u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA8B2u: /* LDA IMM A9 04 */
    c->pc = 0xA8B4u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8B4u: /* JSR ABS 20 BF A8 */
    push(c, 0xA8u); push(c, 0xB6u); c->pc = 0xA8BFu; c->cpu_cycles += 6u; return 1;
case 0xA8B7u: /* LDX IMM A2 1F */
    c->pc = 0xA8B9u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA8B9u: /* LDA IMM A9 0F */
    c->pc = 0xA8BBu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8BBu: /* JSR ABS 20 BF A8 */
    push(c, 0xA8u); push(c, 0xBDu); c->pc = 0xA8BFu; c->cpu_cycles += 6u; return 1;
case 0xA8BEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8BFu: /* STA ZP 85 00 */
    c->pc = 0xA8C1u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA8C1u: /* SEC IMP 38 */
    c->pc = 0xA8C2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA8C2u: /* LDA ABX BD 56 03 */
    c->pc = 0xA8C5u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8C5u: /* SBC IMM E9 10 */
    c->pc = 0xA8C7u;
    v = 0x10u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA8C7u: /* BPL REL 10 02 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA8C9u ^ 0xA8CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8C9u; } return 1;
case 0xA8C9u: /* LDA IMM A9 0F */
    c->pc = 0xA8CBu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8CBu: /* STA ABX 9D 56 03 */
    c->pc = 0xA8CEu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8CEu: /* DEX IMP CA */
    c->pc = 0xA8CFu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA8CFu: /* CPX ZP E4 00 */
    c->pc = 0xA8D1u;
    ea = 0x00u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0xA8D1u: /* BNE REL D0 EE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA8D3u ^ 0xA8C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8D3u; } return 1;
case 0xA8D3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8D4u: /* LDA IMM A9 04 */
    c->pc = 0xA8D6u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8D6u: /* STA ZP 85 FD */
    c->pc = 0xA8D8u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA8D8u: /* LDA ZP A5 1C */
    c->pc = 0xA8DAu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA8DAu: /* AND IMM 29 03 */
    c->pc = 0xA8DCu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8DCu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA8DEu ^ 0xA8E5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8E5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8DEu; } return 1;
case 0xA8DEu: /* JSR ABS 20 EC A8 */
    push(c, 0xA8u); push(c, 0xE0u); c->pc = 0xA8ECu; c->cpu_cycles += 6u; return 1;
case 0xA8E1u: /* DEC ZP C6 FD */
    c->pc = 0xA8E3u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA8E3u: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xA8E5u ^ 0xA8EBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8EBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8E5u; } return 1;
case 0xA8E5u: /* JSR ABS 20 AB C0 */
    push(c, 0xA8u); push(c, 0xE7u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA8E8u: /* JMP ABS 4C D8 A8 */
    c->pc = 0xA8D8u; c->cpu_cycles += 3u; return 1;
case 0xA8EBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8ECu: /* LDX IMM A2 07 */
    c->pc = 0xA8EEu;
    v = 0x07u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA8EEu: /* LDY IMM A0 07 */
    c->pc = 0xA8F0u;
    v = 0x07u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA8F0u: /* LDA IMM A9 04 */
    c->pc = 0xA8F2u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8F2u: /* JSR ABS 20 FF A8 */
    push(c, 0xA8u); push(c, 0xF4u); c->pc = 0xA8FFu; c->cpu_cycles += 6u; return 1;
case 0xA8F5u: /* LDX IMM A2 1F */
    c->pc = 0xA8F7u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA8F7u: /* LDY IMM A0 1F */
    c->pc = 0xA8F9u;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA8F9u: /* LDA IMM A9 0F */
    c->pc = 0xA8FBu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8FBu: /* JSR ABS 20 FF A8 */
    push(c, 0xA8u); push(c, 0xFDu); c->pc = 0xA8FFu; c->cpu_cycles += 6u; return 1;
case 0xA8FEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8FFu: /* STA ZP 85 01 */
    c->pc = 0xA901u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA901u: /* LDA ABX BD 56 03 */
    c->pc = 0xA904u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA904u: /* CMP IMM C9 0F */
    c->pc = 0xA906u;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA906u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA908u ^ 0xA910u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA910u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA908u; } return 1;
case 0xA908u: /* LDA ABY B9 F9 AE */
    c->pc = 0xA90Bu;
    ea = (uint16_t)(0xAEF9u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAEF9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA90Bu: /* AND IMM 29 0F */
    c->pc = 0xA90Du;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA90Du: /* JMP ABS 4C 1D A9 */
    c->pc = 0xA91Du; c->cpu_cycles += 3u; return 1;
case 0xA910u: /* CLC IMP 18 */
    c->pc = 0xA911u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA911u: /* LDA ABX BD 56 03 */
    c->pc = 0xA914u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA914u: /* ADC IMM 69 10 */
    c->pc = 0xA916u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA916u: /* CMP ABY D9 F9 AE */
    c->pc = 0xA919u;
    ea = (uint16_t)(0xAEF9u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xAEF9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA919u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA91Bu ^ 0xA91Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA91Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA91Bu; } return 1;
case 0xA91Bu: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA91Du ^ 0xA920u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA920u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA91Du; } return 1;
case 0xA91Du: /* STA ABX 9D 56 03 */
    c->pc = 0xA920u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA920u: /* DEY IMP 88 */
    c->pc = 0xA921u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA921u: /* DEX IMP CA */
    c->pc = 0xA922u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA922u: /* CPX ZP E4 01 */
    c->pc = 0xA924u;
    ea = 0x01u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0xA924u: /* BNE REL D0 DB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA926u ^ 0xA901u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA901u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA926u; } return 1;
case 0xA926u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA927u: /* LDX ABS AE A0 06 */
    c->pc = 0xA92Au;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xA92Au: /* LDA ABX BD FB AF */
    c->pc = 0xA92Du;
    ea = (uint16_t)(0xAFFBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAFFBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA92Du: /* STA ZP 85 09 */
    c->pc = 0xA92Fu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA92Fu: /* LDA ABX BD 14 B0 */
    c->pc = 0xA932u;
    ea = (uint16_t)(0xB014u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB014u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA932u: /* STA ZP 85 08 */
    c->pc = 0xA934u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA934u: /* LDX IMM A2 0F */
    c->pc = 0xA936u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA936u: /* CLC IMP 18 */
    c->pc = 0xA937u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA937u: /* LDA ABX BD 99 B0 */
    c->pc = 0xA93Au;
    ea = (uint16_t)(0xB099u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB099u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA93Au: /* ADC ZP 65 08 */
    c->pc = 0xA93Cu;
    ea = 0x08u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA93Cu: /* STA ABX 9D 30 02 */
    c->pc = 0xA93Fu;
    ea = (uint16_t)(0x0230u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA93Fu: /* DEX IMP CA */
    c->pc = 0xA940u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA940u: /* LDA ABX BD 99 B0 */
    c->pc = 0xA943u;
    ea = (uint16_t)(0xB099u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB099u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA943u: /* STA ABX 9D 30 02 */
    c->pc = 0xA946u;
    ea = (uint16_t)(0x0230u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA946u: /* DEX IMP CA */
    c->pc = 0xA947u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA947u: /* LDA ABX BD 99 B0 */
    c->pc = 0xA94Au;
    ea = (uint16_t)(0xB099u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB099u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA94Au: /* STA ABX 9D 30 02 */
    c->pc = 0xA94Du;
    ea = (uint16_t)(0x0230u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA94Du: /* DEX IMP CA */
    c->pc = 0xA94Eu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA94Eu: /* CLC IMP 18 */
    c->pc = 0xA94Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA94Fu: /* LDA ABX BD 99 B0 */
    c->pc = 0xA952u;
    ea = (uint16_t)(0xB099u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB099u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA952u: /* ADC ZP 65 09 */
    c->pc = 0xA954u;
    ea = 0x09u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA954u: /* STA ABX 9D 30 02 */
    c->pc = 0xA957u;
    ea = (uint16_t)(0x0230u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA957u: /* DEX IMP CA */
    c->pc = 0xA958u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA958u: /* BPL REL 10 DC */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA95Au ^ 0xA936u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA936u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA95Au; } return 1;
case 0xA95Au: /* LDA ZP A5 1C */
    c->pc = 0xA95Cu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA95Cu: /* LSR IMP 4A */
    c->pc = 0xA95Du;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA95Du: /* AND IMM 29 07 */
    c->pc = 0xA95Fu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA95Fu: /* TAX IMP AA */
    c->pc = 0xA960u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA960u: /* LDA ABX BD 91 B0 */
    c->pc = 0xA963u;
    ea = (uint16_t)(0xB091u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB091u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA963u: /* STA ABS 8D 6C 03 */
    c->pc = 0xA966u;
    ea = 0x036Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA966u: /* CLC IMP 18 */
    c->pc = 0xA967u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA967u: /* LDA ABS AD 80 06 */
    c->pc = 0xA96Au;
    ea = 0x0680u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA96Au: /* ADC IMM 69 24 */
    c->pc = 0xA96Cu;
    v = 0x24u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA96Cu: /* STA ABS 8D 2D 02 */
    c->pc = 0xA96Fu;
    ea = 0x022Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA96Fu: /* LDX IMM A2 00 */
    c->pc = 0xA971u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA971u: /* LDY IMM A0 40 */
    c->pc = 0xA973u;
    v = 0x40u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA973u: /* LDA ABX BD 20 04 */
    c->pc = 0xA976u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA976u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA978u ^ 0xA97Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA97Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA978u; } return 1;
case 0xA978u: /* LDA IMM A9 F8 */
    c->pc = 0xA97Au;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA97Au: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA97Cu ^ 0xA97Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA97Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA97Cu; } return 1;
case 0xA97Cu: /* LDA IMM A9 3F */
    c->pc = 0xA97Eu;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA97Eu: /* STA ABY 99 01 02 */
    c->pc = 0xA981u;
    ea = (uint16_t)(0x0201u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA981u: /* INY IMP C8 */
    c->pc = 0xA982u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA982u: /* INY IMP C8 */
    c->pc = 0xA983u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA983u: /* INY IMP C8 */
    c->pc = 0xA984u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA984u: /* INY IMP C8 */
    c->pc = 0xA985u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA985u: /* INX IMP E8 */
    c->pc = 0xA986u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA986u: /* CPX IMM E0 19 */
    c->pc = 0xA988u;
    v = 0x19u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA988u: /* BNE REL D0 E9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA98Au ^ 0xA973u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA973u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA98Au; } return 1;
case 0xA98Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA98Bu: /* LDA ABX BD BD AF */
    c->pc = 0xA98Eu;
    ea = (uint16_t)(0xAFBDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAFBDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA98Eu: /* TAX IMP AA */
    c->pc = 0xA98Fu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA98Fu: /* LDA ABX BD 39 AF */
    c->pc = 0xA992u;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA992u: /* STA ABS 8D B6 03 */
    c->pc = 0xA995u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA995u: /* INX IMP E8 */
    c->pc = 0xA996u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA996u: /* LDA ABX BD 39 AF */
    c->pc = 0xA999u;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA999u: /* STA ABS 8D B7 03 */
    c->pc = 0xA99Cu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA99Cu: /* INX IMP E8 */
    c->pc = 0xA99Du;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA99Du: /* LDA ABX BD 39 AF */
    c->pc = 0xA9A0u;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9A0u: /* STA ZP 85 47 */
    c->pc = 0xA9A2u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9A2u: /* INX IMP E8 */
    c->pc = 0xA9A3u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA9A3u: /* LDY IMM A0 00 */
    c->pc = 0xA9A5u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA9A5u: /* LDA ABX BD 39 AF */
    c->pc = 0xA9A8u;
    ea = (uint16_t)(0xAF39u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9A8u: /* STA ABY 99 B8 03 */
    c->pc = 0xA9ABu;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9ABu: /* INX IMP E8 */
    c->pc = 0xA9ACu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA9ACu: /* INY IMP C8 */
    c->pc = 0xA9ADu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA9ADu: /* CPY ZP C4 47 */
    c->pc = 0xA9AFu;
    ea = 0x47u;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0xA9AFu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA9B1u ^ 0xA9A5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9A5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9B1u; } return 1;
case 0xA9B1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA9B2u: /* STA ZP 85 20 */
    c->pc = 0xA9B4u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9B4u: /* LDA IMM A9 00 */
    c->pc = 0xA9B6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9B6u: /* STA ZP 85 1F */
    c->pc = 0xA9B8u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9B8u: /* STA ZP 85 22 */
    c->pc = 0xA9BAu;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9BAu: /* LDX IMM A2 21 */
    c->pc = 0xA9BCu;
    v = 0x21u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA9BCu: /* LDA ABX BD F7 AE */
    c->pc = 0xA9BFu;
    ea = (uint16_t)(0xAEF7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAEF7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA9BFu: /* STA ABX 9D 54 03 */
    c->pc = 0xA9C2u;
    ea = (uint16_t)(0x0354u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA9C2u: /* DEX IMP CA */
    c->pc = 0xA9C3u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA9C3u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA9C5u ^ 0xA9BCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9BCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9C5u; } return 1;
case 0xA9C5u: /* JSR ABS 20 73 84 */
    push(c, 0xA9u); push(c, 0xC7u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xA9C8u: /* JSR ABS 20 1D A5 */
    push(c, 0xA9u); push(c, 0xCAu); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0xA9CBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA9CCu: /* CLC IMP 18 */
    c->pc = 0xA9CDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA9CDu: /* LDA ZP A5 1F */
    c->pc = 0xA9CFu;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9CFu: /* ADC IMM 69 08 */
    c->pc = 0xA9D1u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA9D1u: /* STA ZP 85 1F */
    c->pc = 0xA9D3u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9D3u: /* PHP IMP 08 */
    c->pc = 0xA9D4u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xA9D4u: /* LDA ZP A5 20 */
    c->pc = 0xA9D6u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9D6u: /* ADC IMM 69 00 */
    c->pc = 0xA9D8u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA9D8u: /* STA ZP 85 20 */
    c->pc = 0xA9DAu;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9DAu: /* PLP IMP 28 */
    c->pc = 0xA9DBu;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA9DBu: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA9DDu ^ 0xA9E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA9DDu; } return 1;
case 0xA9DDu: /* JSR ABS 20 AB C0 */
    push(c, 0xA9u); push(c, 0xDFu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA9E0u: /* JSR ABS 20 AB C0 */
    push(c, 0xA9u); push(c, 0xE2u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA9E3u: /* JSR ABS 20 AB C0 */
    push(c, 0xA9u); push(c, 0xE5u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xA9E6u: /* JMP ABS 4C CC A9 */
    c->pc = 0xA9CCu; c->cpu_cycles += 3u; return 1;
case 0xA9E9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA9EAu: /* LDA IMM A9 00 */
    c->pc = 0xA9ECu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA9ECu: /* STA ZP 85 1B */
    c->pc = 0xA9EEu;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9EEu: /* STA ZP 85 1A */
    c->pc = 0xA9F0u;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F0u: /* LDA ZP A5 FD */
    c->pc = 0xA9F2u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F2u: /* STA ZP 85 08 */
    c->pc = 0xA9F4u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F4u: /* LDA ZP A5 FE */
    c->pc = 0xA9F6u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F6u: /* STA ZP 85 09 */
    c->pc = 0xA9F8u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA9F8u: /* JSR ABS 20 0B CA */
    push(c, 0xA9u); push(c, 0xFAu); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0xA9FBu: /* INC ZP E6 FD */
    c->pc = 0xA9FDu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA9FDu: /* INC ZP E6 1A */
    c->pc = 0xA9FFu;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA9FFu: /* JSR ABS 20 AB C0 */
    push(c, 0xAAu); push(c, 0x01u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xAA02u: /* LDA ZP A5 FD */
    c->pc = 0xAA04u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA04u: /* AND IMM 29 3F */
    c->pc = 0xAA06u;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA06u: /* BNE REL D0 E8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA08u ^ 0xA9F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA9F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA08u; } return 1;
case 0xAA08u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAA09u: /* SEC IMP 38 */
    c->pc = 0xAA0Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAA0Au: /* LDA ZP A5 1F */
    c->pc = 0xAA0Cu;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA0Cu: /* SBC IMM E9 08 */
    c->pc = 0xAA0Eu;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA0Eu: /* STA ZP 85 1F */
    c->pc = 0xAA10u;
    ea = 0x1Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA10u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xAA12u ^ 0xAA24u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA24u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA12u; } return 1;
case 0xAA12u: /* LDA ZP A5 20 */
    c->pc = 0xAA14u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA14u: /* SBC IMM E9 00 */
    c->pc = 0xAA16u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA16u: /* STA ZP 85 20 */
    c->pc = 0xAA18u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xAA18u: /* JSR ABS 20 AB C0 */
    push(c, 0xAAu); push(c, 0x1Au); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xAA1Bu: /* JSR ABS 20 AB C0 */
    push(c, 0xAAu); push(c, 0x1Du); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xAA1Eu: /* JSR ABS 20 AB C0 */
    push(c, 0xAAu); push(c, 0x20u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xAA21u: /* JMP ABS 4C 09 AA */
    c->pc = 0xAA09u; c->cpu_cycles += 3u; return 1;
case 0xAA24u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xAA25u: /* LDX IMM A2 00 */
    c->pc = 0xAA27u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xAA27u: /* LDY IMM A0 40 */
    c->pc = 0xAA29u;
    v = 0x40u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA29u: /* CLC IMP 18 */
    c->pc = 0xAA2Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAA2Au: /* LDA ABX BD FB AF */
    c->pc = 0xAA2Du;
    ea = (uint16_t)(0xAFFBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAFFBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA2Du: /* ADC IMM 69 04 */
    c->pc = 0xAA2Fu;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA2Fu: /* STA ABY 99 00 02 */
    c->pc = 0xAA32u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA32u: /* INY IMP C8 */
    c->pc = 0xAA33u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA33u: /* LDA IMM A9 0F */
    c->pc = 0xAA35u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA35u: /* STA ABY 99 00 02 */
    c->pc = 0xAA38u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA38u: /* INY IMP C8 */
    c->pc = 0xAA39u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA39u: /* LDA IMM A9 00 */
    c->pc = 0xAA3Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xAA3Bu: /* STA ABY 99 00 02 */
    c->pc = 0xAA3Eu;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA3Eu: /* INY IMP C8 */
    c->pc = 0xAA3Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA3Fu: /* CLC IMP 18 */
    c->pc = 0xAA40u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xAA40u: /* LDA ABX BD 14 B0 */
    c->pc = 0xAA43u;
    ea = (uint16_t)(0xB014u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB014u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xAA43u: /* ADC IMM 69 04 */
    c->pc = 0xAA45u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA45u: /* STA ABY 99 00 02 */
    c->pc = 0xAA48u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xAA48u: /* INY IMP C8 */
    c->pc = 0xAA49u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xAA49u: /* INX IMP E8 */
    c->pc = 0xAA4Au;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xAA4Au: /* CPX IMM E0 19 */
    c->pc = 0xAA4Cu;
    v = 0x19u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xAA4Cu: /* BNE REL D0 DB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xAA4Eu ^ 0xAA29u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xAA29u; }
    else { c->cpu_cycles += 2u; c->pc = 0xAA4Eu; } return 1;
case 0xAA4Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB101u: /* LDA IMM A9 03 */
    c->pc = 0xB103u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB103u: /* JSR ABS 20 44 C6 */
    push(c, 0xB1u); push(c, 0x05u); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0xB106u: /* LDA ZP A5 2A */
    c->pc = 0xB108u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB108u: /* PHA IMP 48 */
    c->pc = 0xB109u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB109u: /* LDA IMM A9 05 */
    c->pc = 0xB10Bu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB10Bu: /* STA ZP 85 2A */
    c->pc = 0xB10Du;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB10Du: /* LDA IMM A9 00 */
    c->pc = 0xB10Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB10Fu: /* STA ZP 85 08 */
    c->pc = 0xB111u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB111u: /* LDA IMM A9 8E */
    c->pc = 0xB113u;
    v = 0x8Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB113u: /* STA ZP 85 09 */
    c->pc = 0xB115u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB115u: /* JSR ABS 20 7E A8 */
    push(c, 0xB1u); push(c, 0x17u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xB118u: /* LDA IMM A9 40 */
    c->pc = 0xB11Au;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB11Au: /* STA ZP 85 08 */
    c->pc = 0xB11Cu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB11Cu: /* LDA IMM A9 8E */
    c->pc = 0xB11Eu;
    v = 0x8Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB11Eu: /* JSR ABS 20 7E A8 */
    push(c, 0xB1u); push(c, 0x20u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xB121u: /* LDA IMM A9 21 */
    c->pc = 0xB123u;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB123u: /* STA ABS 8D 06 20 */
    c->pc = 0xB126u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB126u: /* LDA IMM A9 CC */
    c->pc = 0xB128u;
    v = 0xCCu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB128u: /* STA ABS 8D 06 20 */
    c->pc = 0xB12Bu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB12Bu: /* LDX IMM A2 00 */
    c->pc = 0xB12Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB12Du: /* LDA ABX BD E0 B1 */
    c->pc = 0xB130u;
    ea = (uint16_t)(0xB1E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB1E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB130u: /* STA ABS 8D 07 20 */
    c->pc = 0xB133u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB133u: /* INX IMP E8 */
    c->pc = 0xB134u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB134u: /* CPX IMM E0 09 */
    c->pc = 0xB136u;
    v = 0x09u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xB136u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB138u ^ 0xB12Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB12Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB138u; } return 1;
case 0xB138u: /* LDA IMM A9 0F */
    c->pc = 0xB13Au;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB13Au: /* JSR ABS 20 51 C0 */
    push(c, 0xB1u); push(c, 0x3Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB13Du: /* JSR ABS 20 7E 84 */
    push(c, 0xB1u); push(c, 0x3Fu); c->pc = 0x847Eu; c->cpu_cycles += 6u; return 1;
case 0xB140u: /* LDA IMM A9 00 */
    c->pc = 0xB142u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB142u: /* JSR ABS 20 B2 A9 */
    push(c, 0xB1u); push(c, 0x44u); c->pc = 0xA9B2u; c->cpu_cycles += 6u; return 1;
case 0xB145u: /* LDA IMM A9 04 */
    c->pc = 0xB147u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB147u: /* STA ZP 85 FE */
    c->pc = 0xB149u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB149u: /* LDA IMM A9 7D */
    c->pc = 0xB14Bu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB14Bu: /* STA ZP 85 FD */
    c->pc = 0xB14Du;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB14Du: /* LDX ZP A6 FE */
    c->pc = 0xB14Fu;
    ea = 0xFEu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB14Fu: /* CPX IMM E0 07 */
    c->pc = 0xB151u;
    v = 0x07u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xB151u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB153u ^ 0xB158u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB158u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB153u; } return 1;
case 0xB153u: /* JSR ABS 20 8B A9 */
    push(c, 0xB1u); push(c, 0x55u); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xB156u: /* INC ZP E6 FE */
    c->pc = 0xB158u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB158u: /* JSR ABS 20 AB C0 */
    push(c, 0xB1u); push(c, 0x5Au); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB15Bu: /* DEC ZP C6 FD */
    c->pc = 0xB15Du;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB15Du: /* BNE REL D0 EE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB15Fu ^ 0xB14Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB14Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB15Fu; } return 1;
case 0xB15Fu: /* JSR ABS 20 98 A8 */
    push(c, 0xB1u); push(c, 0x61u); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xB162u: /* JSR ABS 20 CC A9 */
    push(c, 0xB1u); push(c, 0x64u); c->pc = 0xA9CCu; c->cpu_cycles += 6u; return 1;
case 0xB165u: /* LDA IMM A9 80 */
    c->pc = 0xB167u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB167u: /* STA ZP 85 FD */
    c->pc = 0xB169u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB169u: /* LDA IMM A9 8E */
    c->pc = 0xB16Bu;
    v = 0x8Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB16Bu: /* STA ZP 85 FE */
    c->pc = 0xB16Du;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB16Du: /* JSR ABS 20 EA A9 */
    push(c, 0xB1u); push(c, 0x6Fu); c->pc = 0xA9EAu; c->cpu_cycles += 6u; return 1;
case 0xB170u: /* LDA IMM A9 10 */
    c->pc = 0xB172u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB172u: /* JSR ABS 20 51 C0 */
    push(c, 0xB1u); push(c, 0x74u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB175u: /* JSR ABS 20 D4 A8 */
    push(c, 0xB1u); push(c, 0x77u); c->pc = 0xA8D4u; c->cpu_cycles += 6u; return 1;
case 0xB178u: /* LDA IMM A9 00 */
    c->pc = 0xB17Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB17Au: /* STA ZP 85 FD */
    c->pc = 0xB17Cu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB17Cu: /* LDA ZP A5 27 */
    c->pc = 0xB17Eu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB17Eu: /* AND IMM 29 3C */
    c->pc = 0xB180u;
    v = 0x3Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB180u: /* BEQ REL F0 25 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB182u ^ 0xB1A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB182u; } return 1;
case 0xB182u: /* AND IMM 29 08 */
    c->pc = 0xB184u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB184u: /* BNE REL D0 40 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB186u ^ 0xB1C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB186u; } return 1;
case 0xB186u: /* LDA IMM A9 2F */
    c->pc = 0xB188u;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB188u: /* JSR ABS 20 51 C0 */
    push(c, 0xB1u); push(c, 0x8Au); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB18Bu: /* LDA ZP A5 27 */
    c->pc = 0xB18Du;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB18Du: /* AND IMM 29 24 */
    c->pc = 0xB18Fu;
    v = 0x24u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB18Fu: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB191u ^ 0xB19Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB19Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB191u; } return 1;
case 0xB191u: /* DEC ZP C6 FD */
    c->pc = 0xB193u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB193u: /* BPL REL 10 12 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB195u ^ 0xB1A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB195u; } return 1;
case 0xB195u: /* LDA IMM A9 02 */
    c->pc = 0xB197u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB197u: /* STA ZP 85 FD */
    c->pc = 0xB199u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB199u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB19Bu ^ 0xB1A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB19Bu; } return 1;
case 0xB19Bu: /* INC ZP E6 FD */
    c->pc = 0xB19Du;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB19Du: /* LDA ZP A5 FD */
    c->pc = 0xB19Fu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB19Fu: /* CMP IMM C9 03 */
    c->pc = 0xB1A1u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB1A1u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB1A3u ^ 0xB1A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1A3u; } return 1;
case 0xB1A3u: /* LDA IMM A9 00 */
    c->pc = 0xB1A5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB1A5u: /* STA ZP 85 FD */
    c->pc = 0xB1A7u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1A7u: /* LDX IMM A2 03 */
    c->pc = 0xB1A9u;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB1A9u: /* LDA ABX BD E9 B1 */
    c->pc = 0xB1ACu;
    ea = (uint16_t)(0xB1E9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB1E9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1ACu: /* STA ABX 9D 00 02 */
    c->pc = 0xB1AFu;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB1AFu: /* DEX IMP CA */
    c->pc = 0xB1B0u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB1B0u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB1B2u ^ 0xB1A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1B2u; } return 1;
case 0xB1B2u: /* LDA ZP A5 1C */
    c->pc = 0xB1B4u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1B4u: /* AND IMM 29 08 */
    c->pc = 0xB1B6u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB1B6u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB1B8u ^ 0xB1C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1B8u; } return 1;
case 0xB1B8u: /* LDX ZP A6 FD */
    c->pc = 0xB1BAu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB1BAu: /* LDA ABX BD ED B1 */
    c->pc = 0xB1BDu;
    ea = (uint16_t)(0xB1EDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB1EDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB1BDu: /* STA ABS 8D 00 02 */
    c->pc = 0xB1C0u;
    ea = 0x0200u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB1C0u: /* JSR ABS 20 AB C0 */
    push(c, 0xB1u); push(c, 0xC2u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB1C3u: /* JMP ABS 4C 7C B1 */
    c->pc = 0xB17Cu; c->cpu_cycles += 3u; return 1;
case 0xB1C6u: /* LDA ZP A5 FD */
    c->pc = 0xB1C8u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1C8u: /* CMP IMM C9 02 */
    c->pc = 0xB1CAu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB1CAu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB1CCu ^ 0xB1CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB1CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB1CCu; } return 1;
case 0xB1CCu: /* JMP ABS 4C D5 B1 */
    c->pc = 0xB1D5u; c->cpu_cycles += 3u; return 1;
case 0xB1CFu: /* JSR ABS 20 24 B2 */
    push(c, 0xB1u); push(c, 0xD1u); c->pc = 0xB224u; c->cpu_cycles += 6u; return 1;
case 0xB1D2u: /* JMP ABS 4C 75 B1 */
    c->pc = 0xB175u; c->cpu_cycles += 3u; return 1;
case 0xB1D5u: /* JSR ABS 20 2D A5 */
    push(c, 0xB1u); push(c, 0xD7u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xB1D8u: /* PLA IMP 68 */
    c->pc = 0xB1D9u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB1D9u: /* STA ZP 85 2A */
    c->pc = 0xB1DBu;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1DBu: /* LDA IMM A9 03 */
    c->pc = 0xB1DDu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB1DDu: /* STA ZP 85 A8 */
    c->pc = 0xB1DFu;
    ea = 0xA8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB1DFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB224u: /* JSR ABS 20 98 A8 */
    push(c, 0xB2u); push(c, 0x26u); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xB227u: /* JSR ABS 20 73 84 */
    push(c, 0xB2u); push(c, 0x29u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xB22Au: /* JSR ABS 20 CC A9 */
    push(c, 0xB2u); push(c, 0x2Cu); c->pc = 0xA9CCu; c->cpu_cycles += 6u; return 1;
case 0xB22Du: /* LDA IMM A9 00 */
    c->pc = 0xB22Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB22Fu: /* LDX IMM A2 18 */
    c->pc = 0xB231u;
    v = 0x18u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB231u: /* STA ABX 9D 20 04 */
    c->pc = 0xB234u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB234u: /* DEX IMP CA */
    c->pc = 0xB235u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB235u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB237u ^ 0xB231u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB231u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB237u; } return 1;
case 0xB237u: /* LDA ZP A5 9A */
    c->pc = 0xB239u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB239u: /* STA ZP 85 00 */
    c->pc = 0xB23Bu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB23Bu: /* EOR IMM 49 FF */
    c->pc = 0xB23Du;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB23Du: /* STA ZP 85 01 */
    c->pc = 0xB23Fu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB23Fu: /* CLC IMP 18 */
    c->pc = 0xB240u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB240u: /* LDA ZP A5 A7 */
    c->pc = 0xB242u;
    ea = 0xA7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB242u: /* TAX IMP AA */
    c->pc = 0xB243u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB243u: /* ADC IMM 69 05 */
    c->pc = 0xB245u;
    v = 0x05u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB245u: /* STA ZP 85 03 */
    c->pc = 0xB247u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB247u: /* INC ABX FE 20 04 */
    c->pc = 0xB24Au;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xB24Au: /* LDX IMM A2 00 */
    c->pc = 0xB24Cu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB24Cu: /* LDY ABX BC BD B0 */
    c->pc = 0xB24Fu;
    ea = (uint16_t)(0xB0BDu + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0xB0BDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB24Fu: /* LDA ABY B9 00 00 */
    c->pc = 0xB252u;
    ea = (uint16_t)(0x0000u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0000u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB252u: /* LDY ZP A4 03 */
    c->pc = 0xB254u;
    ea = 0x03u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB254u: /* AND ABX 3D A9 B0 */
    c->pc = 0xB257u;
    ea = (uint16_t)(0xB0A9u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB0A9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB257u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB259u ^ 0xB25Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB25Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB259u; } return 1;
case 0xB259u: /* LDA IMM A9 01 */
    c->pc = 0xB25Bu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB25Bu: /* STA ABY 99 20 04 */
    c->pc = 0xB25Eu;
    ea = (uint16_t)(0x0420u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB25Eu: /* INY IMP C8 */
    c->pc = 0xB25Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB25Fu: /* CPY IMM C0 19 */
    c->pc = 0xB261u;
    v = 0x19u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xB261u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB263u ^ 0xB265u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB265u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB263u; } return 1;
case 0xB263u: /* LDY IMM A0 05 */
    c->pc = 0xB265u;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB265u: /* STY ZP 84 03 */
    c->pc = 0xB267u;
    ea = 0x03u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB267u: /* INX IMP E8 */
    c->pc = 0xB268u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB268u: /* CPX IMM E0 14 */
    c->pc = 0xB26Au;
    v = 0x14u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xB26Au: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB26Cu ^ 0xB24Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB24Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB26Cu; } return 1;
case 0xB26Cu: /* JSR ABS 20 25 AA */
    push(c, 0xB2u); push(c, 0x6Eu); c->pc = 0xAA25u; c->cpu_cycles += 6u; return 1;
case 0xB26Fu: /* JSR ABS 20 27 A9 */
    push(c, 0xB2u); push(c, 0x71u); c->pc = 0xA927u; c->cpu_cycles += 6u; return 1;
case 0xB272u: /* LDA IMM A9 F8 */
    c->pc = 0xB274u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB274u: /* STA ABS 8D 30 02 */
    c->pc = 0xB277u;
    ea = 0x0230u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB277u: /* STA ABS 8D 34 02 */
    c->pc = 0xB27Au;
    ea = 0x0234u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB27Au: /* STA ABS 8D 38 02 */
    c->pc = 0xB27Du;
    ea = 0x0238u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB27Du: /* STA ABS 8D 3C 02 */
    c->pc = 0xB280u;
    ea = 0x023Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB280u: /* LDX IMM A2 27 */
    c->pc = 0xB282u;
    v = 0x27u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB282u: /* LDA ABX BD CB AF */
    c->pc = 0xB285u;
    ea = (uint16_t)(0xAFCBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAFCBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB285u: /* STA ABX 9D 00 02 */
    c->pc = 0xB288u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB288u: /* DEX IMP CA */
    c->pc = 0xB289u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB289u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB28Bu ^ 0xB282u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB282u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB28Bu; } return 1;
case 0xB28Bu: /* LDX IMM A2 03 */
    c->pc = 0xB28Du;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB28Du: /* LDA ABX BD F0 B1 */
    c->pc = 0xB290u;
    ea = (uint16_t)(0xB1F0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB1F0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB290u: /* STA ABX 9D 28 02 */
    c->pc = 0xB293u;
    ea = (uint16_t)(0x0228u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB293u: /* DEX IMP CA */
    c->pc = 0xB294u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB294u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB296u ^ 0xB28Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB28Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB296u; } return 1;
case 0xB296u: /* LDA ZP A5 9A */
    c->pc = 0xB298u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB298u: /* ASL IMP 0A */
    c->pc = 0xB299u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB299u: /* ORA IMM 09 01 */
    c->pc = 0xB29Bu;
    v = 0x01u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB29Bu: /* STA ZP 85 00 */
    c->pc = 0xB29Du;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB29Du: /* LDA ZP A5 9B */
    c->pc = 0xB29Fu;
    ea = 0x9Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB29Fu: /* ROL IMP 2A */
    c->pc = 0xB2A0u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB2A0u: /* STA ZP 85 01 */
    c->pc = 0xB2A2u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB2A2u: /* LDX IMM A2 00 */
    c->pc = 0xB2A4u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2A4u: /* LDA IMM A9 0C */
    c->pc = 0xB2A6u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB2A6u: /* STA ZP 85 02 */
    c->pc = 0xB2A8u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB2A8u: /* LSR ZP 46 01 */
    c->pc = 0xB2AAu;
    ea = 0x01u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB2AAu: /* ROR ZP 66 00 */
    c->pc = 0xB2ACu;
    ea = 0x00u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB2ACu: /* BCC REL 90 0E */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB2AEu ^ 0xB2BCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2BCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2AEu; } return 1;
case 0xB2AEu: /* LDY IMM A0 04 */
    c->pc = 0xB2B0u;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB2B0u: /* LDA ABX BD F4 B1 */
    c->pc = 0xB2B3u;
    ea = (uint16_t)(0xB1F4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB1F4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB2B3u: /* STA ABX 9D A4 02 */
    c->pc = 0xB2B6u;
    ea = (uint16_t)(0x02A4u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB2B6u: /* INX IMP E8 */
    c->pc = 0xB2B7u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2B7u: /* DEY IMP 88 */
    c->pc = 0xB2B8u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB2B8u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB2BAu ^ 0xB2B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2BAu; } return 1;
case 0xB2BAu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB2BCu ^ 0xB2C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2BCu; } return 1;
case 0xB2BCu: /* INX IMP E8 */
    c->pc = 0xB2BDu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2BDu: /* INX IMP E8 */
    c->pc = 0xB2BEu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2BEu: /* INX IMP E8 */
    c->pc = 0xB2BFu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2BFu: /* INX IMP E8 */
    c->pc = 0xB2C0u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2C0u: /* DEC ZP C6 02 */
    c->pc = 0xB2C2u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB2C2u: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB2C4u ^ 0xB2A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2C4u; } return 1;
case 0xB2C4u: /* LDX IMM A2 07 */
    c->pc = 0xB2C6u;
    v = 0x07u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2C6u: /* JSR ABS 20 8B A9 */
    push(c, 0xB2u); push(c, 0xC8u); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xB2C9u: /* JSR ABS 20 D4 A8 */
    push(c, 0xB2u); push(c, 0xCBu); c->pc = 0xA8D4u; c->cpu_cycles += 6u; return 1;
case 0xB2CCu: /* LDX IMM A2 F8 */
    c->pc = 0xB2CEu;
    v = 0xF8u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2CEu: /* LDA ZP A5 1C */
    c->pc = 0xB2D0u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB2D0u: /* AND IMM 29 08 */
    c->pc = 0xB2D2u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB2D2u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB2D4u ^ 0xB2D6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2D6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2D4u; } return 1;
case 0xB2D4u: /* LDX IMM A2 98 */
    c->pc = 0xB2D6u;
    v = 0x98u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB2D6u: /* STX ABS 8E 28 02 */
    c->pc = 0xB2D9u;
    ea = 0x0228u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xB2D9u: /* JSR ABS 20 AB C0 */
    push(c, 0xB2u); push(c, 0xDBu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB2DCu: /* LDA ZP A5 27 */
    c->pc = 0xB2DEu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB2DEu: /* AND IMM 29 01 */
    c->pc = 0xB2E0u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB2E0u: /* BEQ REL F0 EA */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB2E2u ^ 0xB2CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB2CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB2E2u; } return 1;
case 0xB2E2u: /* LDA IMM A9 42 */
    c->pc = 0xB2E4u;
    v = 0x42u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB2E4u: /* JSR ABS 20 51 C0 */
    push(c, 0xB2u); push(c, 0xE6u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB2E7u: /* JSR ABS 20 98 A8 */
    push(c, 0xB2u); push(c, 0xE9u); c->pc = 0xA898u; c->cpu_cycles += 6u; return 1;
case 0xB2EAu: /* JSR ABS 20 73 84 */
    push(c, 0xB2u); push(c, 0xECu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xB2EDu: /* JSR ABS 20 09 AA */
    push(c, 0xB2u); push(c, 0xEFu); c->pc = 0xAA09u; c->cpu_cycles += 6u; return 1;
case 0xB2F0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB6F1u: /* JSR ABS 20 7E 84 */
    push(c, 0xB6u); push(c, 0xF3u); c->pc = 0x847Eu; c->cpu_cycles += 6u; return 1;
case 0xB6F4u: /* INC ZP E6 20 */
    c->pc = 0xB6F6u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB6F6u: /* LDA IMM A9 04 */
    c->pc = 0xB6F8u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6F8u: /* JSR ABS 20 44 C6 */
    push(c, 0xB6u); push(c, 0xFAu); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0xB6FBu: /* LDA IMM A9 05 */
    c->pc = 0xB6FDu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB6FDu: /* STA ZP 85 2A */
    c->pc = 0xB6FFu;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB6FFu: /* LDA IMM A9 C0 */
    c->pc = 0xB701u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB701u: /* STA ZP 85 08 */
    c->pc = 0xB703u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB703u: /* LDA IMM A9 8E */
    c->pc = 0xB705u;
    v = 0x8Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB705u: /* STA ZP 85 09 */
    c->pc = 0xB707u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB707u: /* JSR ABS 20 7E A8 */
    push(c, 0xB7u); push(c, 0x09u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xB70Au: /* LDA IMM A9 00 */
    c->pc = 0xB70Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB70Cu: /* STA ZP 85 08 */
    c->pc = 0xB70Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB70Eu: /* LDA IMM A9 8F */
    c->pc = 0xB710u;
    v = 0x8Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB710u: /* STA ZP 85 09 */
    c->pc = 0xB712u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB712u: /* JSR ABS 20 7E A8 */
    push(c, 0xB7u); push(c, 0x14u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xB715u: /* LDA IMM A9 00 */
    c->pc = 0xB717u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB717u: /* STA ABS 8D A0 06 */
    c->pc = 0xB71Au;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB71Au: /* STA ABS 8D 80 06 */
    c->pc = 0xB71Du;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB71Du: /* STA ABS 8D 81 06 */
    c->pc = 0xB720u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB720u: /* STA ABS 8D 00 04 */
    c->pc = 0xB723u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB723u: /* STA ABS 8D 01 04 */
    c->pc = 0xB726u;
    ea = 0x0401u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB726u: /* STA ABS 8D A1 04 */
    c->pc = 0xB729u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB729u: /* LDA IMM A9 0F */
    c->pc = 0xB72Bu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB72Bu: /* LDX IMM A2 1F */
    c->pc = 0xB72Du;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB72Du: /* STA ABX 9D 56 03 */
    c->pc = 0xB730u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB730u: /* DEX IMP CA */
    c->pc = 0xB731u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB731u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB733u ^ 0xB72Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB72Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB733u; } return 1;
case 0xB733u: /* LDA IMM A9 FF */
    c->pc = 0xB735u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB735u: /* JSR ABS 20 51 C0 */
    push(c, 0xB7u); push(c, 0x37u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB738u: /* JSR ABS 20 73 84 */
    push(c, 0xB7u); push(c, 0x3Au); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xB73Bu: /* JSR ABS 20 1D A5 */
    push(c, 0xB7u); push(c, 0x3Du); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0xB73Eu: /* LDA IMM A9 BB */
    c->pc = 0xB740u;
    v = 0xBBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB740u: /* STA ZP 85 FD */
    c->pc = 0xB742u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB742u: /* JSR ABS 20 AB C0 */
    push(c, 0xB7u); push(c, 0x44u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB745u: /* DEC ZP C6 FD */
    c->pc = 0xB747u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB747u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB749u ^ 0xB742u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB742u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB749u; } return 1;
case 0xB749u: /* LDA IMM A9 13 */
    c->pc = 0xB74Bu;
    v = 0x13u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB74Bu: /* JSR ABS 20 51 C0 */
    push(c, 0xB7u); push(c, 0x4Du); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB74Eu: /* LDA IMM A9 04 */
    c->pc = 0xB750u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB750u: /* STA ZP 85 FD */
    c->pc = 0xB752u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB752u: /* LDA IMM A9 3F */
    c->pc = 0xB754u;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB754u: /* STA ZP 85 FE */
    c->pc = 0xB756u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB756u: /* DEC ZP C6 FE */
    c->pc = 0xB758u;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB758u: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB75Au ^ 0xB76Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB76Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB75Au; } return 1;
case 0xB75Au: /* LDA IMM A9 3F */
    c->pc = 0xB75Cu;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB75Cu: /* STA ZP 85 FE */
    c->pc = 0xB75Eu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB75Eu: /* LDX IMM A2 1B */
    c->pc = 0xB760u;
    v = 0x1Bu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB760u: /* LDY IMM A0 3B */
    c->pc = 0xB762u;
    v = 0x3Bu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB762u: /* LDA IMM A9 0F */
    c->pc = 0xB764u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB764u: /* JSR ABS 20 FF A8 */
    push(c, 0xB7u); push(c, 0x66u); c->pc = 0xA8FFu; c->cpu_cycles += 6u; return 1;
case 0xB767u: /* DEC ZP C6 FD */
    c->pc = 0xB769u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB769u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB76Bu ^ 0xB774u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB774u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB76Bu; } return 1;
case 0xB76Bu: /* JSR ABS 20 F9 B8 */
    push(c, 0xB7u); push(c, 0x6Du); c->pc = 0xB8F9u; c->cpu_cycles += 6u; return 1;
case 0xB76Eu: /* JSR ABS 20 AB C0 */
    push(c, 0xB7u); push(c, 0x70u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB771u: /* JMP ABS 4C 56 B7 */
    c->pc = 0xB756u; c->cpu_cycles += 3u; return 1;
case 0xB774u: /* LDX ABS AE A0 06 */
    c->pc = 0xB777u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xB777u: /* LDA ABX BD 7B BA */
    c->pc = 0xB77Au;
    ea = (uint16_t)(0xBA7Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA7Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB77Au: /* STA ZP 85 FD */
    c->pc = 0xB77Cu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB77Cu: /* LDA ABX BD 81 BA */
    c->pc = 0xB77Fu;
    ea = (uint16_t)(0xBA81u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA81u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB77Fu: /* STA ZP 85 FE */
    c->pc = 0xB781u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB781u: /* LDA IMM A9 3F */
    c->pc = 0xB783u;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB783u: /* STA ZP 85 FF */
    c->pc = 0xB785u;
    ea = 0xFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB785u: /* LDA ZP A5 FF */
    c->pc = 0xB787u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB787u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB789u ^ 0xB78Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB78Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB789u; } return 1;
case 0xB789u: /* DEC ZP C6 FF */
    c->pc = 0xB78Bu;
    ea = 0xFFu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB78Bu: /* LDA ABS AD A0 06 */
    c->pc = 0xB78Eu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB78Eu: /* CMP IMM C9 05 */
    c->pc = 0xB790u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB790u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB792u ^ 0xB79Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB79Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB792u; } return 1;
case 0xB792u: /* LDA ZP A5 FF */
    c->pc = 0xB794u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB794u: /* AND IMM 29 01 */
    c->pc = 0xB796u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB796u: /* STA ZP 85 20 */
    c->pc = 0xB798u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB798u: /* JMP ABS 4C A1 B7 */
    c->pc = 0xB7A1u; c->cpu_cycles += 3u; return 1;
case 0xB79Bu: /* JSR ABS 20 E0 B9 */
    push(c, 0xB7u); push(c, 0x9Du); c->pc = 0xB9E0u; c->cpu_cycles += 6u; return 1;
case 0xB79Eu: /* JSR ABS 20 FF B9 */
    push(c, 0xB7u); push(c, 0xA0u); c->pc = 0xB9FFu; c->cpu_cycles += 6u; return 1;
case 0xB7A1u: /* LDA ABS AD A0 06 */
    c->pc = 0xB7A4u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB7A4u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7A6u ^ 0xB7B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7A6u; } return 1;
case 0xB7A6u: /* LDA ZP A5 1C */
    c->pc = 0xB7A8u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7A8u: /* AND IMM 29 07 */
    c->pc = 0xB7AAu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7AAu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7ACu ^ 0xB7B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7ACu; } return 1;
case 0xB7ACu: /* LDX IMM A2 1F */
    c->pc = 0xB7AEu;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB7AEu: /* LDY IMM A0 3F */
    c->pc = 0xB7B0u;
    v = 0x3Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB7B0u: /* LDA IMM A9 FF */
    c->pc = 0xB7B2u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7B2u: /* JSR ABS 20 FF A8 */
    push(c, 0xB7u); push(c, 0xB4u); c->pc = 0xA8FFu; c->cpu_cycles += 6u; return 1;
case 0xB7B5u: /* JSR ABS 20 F9 B8 */
    push(c, 0xB7u); push(c, 0xB7u); c->pc = 0xB8F9u; c->cpu_cycles += 6u; return 1;
case 0xB7B8u: /* JSR ABS 20 AB C0 */
    push(c, 0xB7u); push(c, 0xBAu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB7BBu: /* SEC IMP 38 */
    c->pc = 0xB7BCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB7BCu: /* LDA ZP A5 FD */
    c->pc = 0xB7BEu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7BEu: /* SBC IMM E9 01 */
    c->pc = 0xB7C0u;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB7C0u: /* STA ZP 85 FD */
    c->pc = 0xB7C2u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7C2u: /* LDA ZP A5 FE */
    c->pc = 0xB7C4u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7C4u: /* SBC IMM E9 00 */
    c->pc = 0xB7C6u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB7C6u: /* STA ZP 85 FE */
    c->pc = 0xB7C8u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB7C8u: /* BCS REL B0 BB */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xB7CAu ^ 0xB785u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB785u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7CAu; } return 1;
case 0xB7CAu: /* INC ABS EE A0 06 */
    c->pc = 0xB7CDu;
    ea = 0x06A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB7CDu: /* LDA ABS AD A0 06 */
    c->pc = 0xB7D0u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB7D0u: /* CMP IMM C9 06 */
    c->pc = 0xB7D2u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB7D2u: /* BNE REL D0 A0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7D4u ^ 0xB774u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB774u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7D4u; } return 1;
case 0xB7D4u: /* JSR ABS 20 2D A5 */
    push(c, 0xB7u); push(c, 0xD6u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xB7D7u: /* JSR ABS 20 3C 84 */
    push(c, 0xB7u); push(c, 0xD9u); c->pc = 0x843Cu; c->cpu_cycles += 6u; return 1;
case 0xB7DAu: /* LDA IMM A9 05 */
    c->pc = 0xB7DCu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7DCu: /* JSR ABS 20 44 C6 */
    push(c, 0xB7u); push(c, 0xDEu); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0xB7DFu: /* LDA IMM A9 20 */
    c->pc = 0xB7E1u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7E1u: /* STA ABS 8D 06 20 */
    c->pc = 0xB7E4u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB7E4u: /* LDA IMM A9 00 */
    c->pc = 0xB7E6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB7E6u: /* STA ABS 8D 06 20 */
    c->pc = 0xB7E9u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB7E9u: /* LDY IMM A0 04 */
    c->pc = 0xB7EBu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB7EBu: /* LDX IMM A2 00 */
    c->pc = 0xB7EDu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB7EDu: /* STA ABS 8D 07 20 */
    c->pc = 0xB7F0u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB7F0u: /* INX IMP E8 */
    c->pc = 0xB7F1u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB7F1u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7F3u ^ 0xB7EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7F3u; } return 1;
case 0xB7F3u: /* DEY IMP 88 */
    c->pc = 0xB7F4u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB7F4u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB7F6u ^ 0xB7EBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB7EBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB7F6u; } return 1;
case 0xB7F6u: /* STA ABS 8D 20 04 */
    c->pc = 0xB7F9u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB7F9u: /* LDX IMM A2 1F */
    c->pc = 0xB7FBu;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB7FBu: /* JSR ABS 20 9E 82 */
    push(c, 0xB7u); push(c, 0xFDu); c->pc = 0x829Eu; c->cpu_cycles += 6u; return 1;
case 0xB7FEu: /* INC ZP E6 20 */
    c->pc = 0xB800u;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB800u: /* JSR ABS 20 73 84 */
    push(c, 0xB8u); push(c, 0x02u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xB803u: /* LDA IMM A9 30 */
    c->pc = 0xB805u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB805u: /* STA ABS 8D 69 03 */
    c->pc = 0xB808u;
    ea = 0x0369u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB808u: /* LDA IMM A9 0D */
    c->pc = 0xB80Au;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB80Au: /* JSR ABS 20 51 C0 */
    push(c, 0xB8u); push(c, 0x0Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB80Du: /* JSR ABS 20 1D A5 */
    push(c, 0xB8u); push(c, 0x0Fu); c->pc = 0xA51Du; c->cpu_cycles += 6u; return 1;
case 0xB810u: /* JSR ABS 20 65 84 */
    push(c, 0xB8u); push(c, 0x12u); c->pc = 0x8465u; c->cpu_cycles += 6u; return 1;
case 0xB813u: /* LDA IMM A9 25 */
    c->pc = 0xB815u;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB815u: /* STA ABS 8D B6 03 */
    c->pc = 0xB818u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB818u: /* LDA IMM A9 AC */
    c->pc = 0xB81Au;
    v = 0xACu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB81Au: /* STA ABS 8D B7 03 */
    c->pc = 0xB81Du;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB81Du: /* LDA IMM A9 A2 */
    c->pc = 0xB81Fu;
    v = 0xA2u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB81Fu: /* STA ZP 85 FD */
    c->pc = 0xB821u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB821u: /* LDA IMM A9 00 */
    c->pc = 0xB823u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB823u: /* STA ZP 85 FE */
    c->pc = 0xB825u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB825u: /* STA ABS 8D A0 06 */
    c->pc = 0xB828u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB828u: /* LDA ZP A5 FD */
    c->pc = 0xB82Au;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB82Au: /* AND IMM 29 03 */
    c->pc = 0xB82Cu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB82Cu: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB82Eu ^ 0xB841u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB841u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB82Eu; } return 1;
case 0xB82Eu: /* LDX ZP A6 FE */
    c->pc = 0xB830u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xB830u: /* CPX IMM E0 05 */
    c->pc = 0xB832u;
    v = 0x05u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xB832u: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB834u ^ 0xB841u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB841u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB834u; } return 1;
case 0xB834u: /* LDA ABX BD DB BA */
    c->pc = 0xB837u;
    ea = (uint16_t)(0xBADBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBADBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB837u: /* STA ABS 8D B8 03 */
    c->pc = 0xB83Au;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB83Au: /* INC ZP E6 47 */
    c->pc = 0xB83Cu;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB83Cu: /* INC ZP E6 FE */
    c->pc = 0xB83Eu;
    ea = 0xFEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB83Eu: /* INC ABS EE B7 03 */
    c->pc = 0xB841u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB841u: /* JSR ABS 20 58 83 */
    push(c, 0xB8u); push(c, 0x43u); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0xB844u: /* JSR ABS 20 AB C0 */
    push(c, 0xB8u); push(c, 0x46u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB847u: /* DEC ZP C6 FD */
    c->pc = 0xB849u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xB849u: /* BNE REL D0 DD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB84Bu ^ 0xB828u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB828u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB84Bu; } return 1;
case 0xB84Bu: /* LDA IMM A9 A0 */
    c->pc = 0xB84Du;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB84Du: /* STA ABS 8D B7 03 */
    c->pc = 0xB850u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB850u: /* LDA IMM A9 20 */
    c->pc = 0xB852u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB852u: /* JSR ABS 20 24 BA */
    push(c, 0xB8u); push(c, 0x54u); c->pc = 0xBA24u; c->cpu_cycles += 6u; return 1;
case 0xB855u: /* LDA IMM A9 49 */
    c->pc = 0xB857u;
    v = 0x49u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB857u: /* STA ZP 85 FD */
    c->pc = 0xB859u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB859u: /* LDA IMM A9 01 */
    c->pc = 0xB85Bu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB85Bu: /* STA ZP 85 FE */
    c->pc = 0xB85Du;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB85Du: /* LDA IMM A9 00 */
    c->pc = 0xB85Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB85Fu: /* STA ABS 8D 80 06 */
    c->pc = 0xB862u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB862u: /* LDA IMM A9 25 */
    c->pc = 0xB864u;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB864u: /* STA ABS 8D B6 03 */
    c->pc = 0xB867u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB867u: /* LDA IMM A9 83 */
    c->pc = 0xB869u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB869u: /* STA ABS 8D B7 03 */
    c->pc = 0xB86Cu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB86Cu: /* JSR ABS 20 37 D6 */
    push(c, 0xB8u); push(c, 0x6Eu); c->pc = 0xD637u; c->cpu_cycles += 6u; return 1;
case 0xB86Fu: /* JSR ABS 20 58 83 */
    push(c, 0xB8u); push(c, 0x71u); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0xB872u: /* JSR ABS 20 AB C0 */
    push(c, 0xB8u); push(c, 0x74u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB875u: /* SEC IMP 38 */
    c->pc = 0xB876u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB876u: /* LDA ZP A5 FD */
    c->pc = 0xB878u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB878u: /* SBC IMM E9 01 */
    c->pc = 0xB87Au;
    v = 0x01u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB87Au: /* STA ZP 85 FD */
    c->pc = 0xB87Cu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB87Cu: /* LDA ZP A5 FE */
    c->pc = 0xB87Eu;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB87Eu: /* SBC IMM E9 00 */
    c->pc = 0xB880u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xB880u: /* STA ZP 85 FE */
    c->pc = 0xB882u;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB882u: /* BNE REL D0 E8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB884u ^ 0xB86Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB86Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB884u; } return 1;
case 0xB884u: /* LDA ZP A5 FD */
    c->pc = 0xB886u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB886u: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB888u ^ 0xB89Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB89Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB888u; } return 1;
case 0xB888u: /* CMP IMM C9 D0 */
    c->pc = 0xB88Au;
    v = 0xD0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB88Au: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB88Cu ^ 0xB86Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB86Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB88Cu; } return 1;
case 0xB88Cu: /* LDA ABS AD A0 06 */
    c->pc = 0xB88Fu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB88Fu: /* CMP IMM C9 0E */
    c->pc = 0xB891u;
    v = 0x0Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB891u: /* BCC REL 90 D9 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB893u ^ 0xB86Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB86Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB893u; } return 1;
case 0xB893u: /* LDA IMM A9 14 */
    c->pc = 0xB895u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB895u: /* JSR ABS 20 51 C0 */
    push(c, 0xB8u); push(c, 0x97u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xB898u: /* JMP ABS 4C 6C B8 */
    c->pc = 0xB86Cu; c->cpu_cycles += 3u; return 1;
case 0xB89Bu: /* LDA IMM A9 25 */
    c->pc = 0xB89Du;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB89Du: /* STA ABS 8D B6 03 */
    c->pc = 0xB8A0u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8A0u: /* LDA IMM A9 80 */
    c->pc = 0xB8A2u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8A2u: /* STA ABS 8D B7 03 */
    c->pc = 0xB8A5u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8A5u: /* LDA IMM A9 20 */
    c->pc = 0xB8A7u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8A7u: /* JSR ABS 20 24 BA */
    push(c, 0xB8u); push(c, 0xA9u); c->pc = 0xBA24u; c->cpu_cycles += 6u; return 1;
case 0xB8AAu: /* LDA IMM A9 25 */
    c->pc = 0xB8ACu;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8ACu: /* STA ABS 8D B6 03 */
    c->pc = 0xB8AFu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8AFu: /* LDA IMM A9 C0 */
    c->pc = 0xB8B1u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8B1u: /* STA ABS 8D B7 03 */
    c->pc = 0xB8B4u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8B4u: /* LDA IMM A9 20 */
    c->pc = 0xB8B6u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8B6u: /* JSR ABS 20 24 BA */
    push(c, 0xB8u); push(c, 0xB8u); c->pc = 0xBA24u; c->cpu_cycles += 6u; return 1;
case 0xB8B9u: /* INC ABS EE A0 06 */
    c->pc = 0xB8BCu;
    ea = 0x06A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB8BCu: /* LDA ABS AD A0 06 */
    c->pc = 0xB8BFu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8BFu: /* CMP IMM C9 10 */
    c->pc = 0xB8C1u;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB8C1u: /* BNE REL D0 92 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB8C3u ^ 0xB855u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB855u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8C3u; } return 1;
case 0xB8C3u: /* LDA IMM A9 0F */
    c->pc = 0xB8C5u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8C5u: /* STA ABS 8D 58 03 */
    c->pc = 0xB8C8u;
    ea = 0x0358u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8C8u: /* STA ABS 8D 59 03 */
    c->pc = 0xB8CBu;
    ea = 0x0359u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8CBu: /* LDA IMM A9 00 */
    c->pc = 0xB8CDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8CDu: /* STA ABS 8D A0 06 */
    c->pc = 0xB8D0u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8D0u: /* STA ZP 85 20 */
    c->pc = 0xB8D2u;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8D2u: /* JSR ABS 20 42 D6 */
    push(c, 0xB8u); push(c, 0xD4u); c->pc = 0xD642u; c->cpu_cycles += 6u; return 1;
case 0xB8D5u: /* JSR ABS 20 4D D6 */
    push(c, 0xB8u); push(c, 0xD7u); c->pc = 0xD64Du; c->cpu_cycles += 6u; return 1;
case 0xB8D8u: /* JSR ABS 20 58 83 */
    push(c, 0xB8u); push(c, 0xDAu); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0xB8DBu: /* JSR ABS 20 AB C0 */
    push(c, 0xB8u); push(c, 0xDDu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB8DEu: /* LDA ABS AD A0 06 */
    c->pc = 0xB8E1u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8E1u: /* CMP IMM C9 3C */
    c->pc = 0xB8E3u;
    v = 0x3Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB8E3u: /* BNE REL D0 F0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB8E5u ^ 0xB8D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8E5u; } return 1;
case 0xB8E5u: /* LDA ZP A5 22 */
    c->pc = 0xB8E7u;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8E7u: /* BNE REL D0 EC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB8E9u ^ 0xB8D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8E9u; } return 1;
case 0xB8E9u: /* JSR ABS 20 58 83 */
    push(c, 0xB8u); push(c, 0xEBu); c->pc = 0x8358u; c->cpu_cycles += 6u; return 1;
case 0xB8ECu: /* JSR ABS 20 AB C0 */
    push(c, 0xB8u); push(c, 0xEEu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xB8EFu: /* LDA ZP A5 27 */
    c->pc = 0xB8F1u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB8F1u: /* AND IMM 29 08 */
    c->pc = 0xB8F3u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB8F3u: /* BEQ REL F0 F4 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB8F5u ^ 0xB8E9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB8E9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB8F5u; } return 1;
case 0xB8F5u: /* JSR ABS 20 2D A5 */
    push(c, 0xB8u); push(c, 0xF7u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xB8F8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB8F9u: /* JSR ABS 20 73 84 */
    push(c, 0xB8u); push(c, 0xFBu); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xB8FCu: /* LDA ABS AD A0 06 */
    c->pc = 0xB8FFu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB8FFu: /* CMP IMM C9 05 */
    c->pc = 0xB901u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB901u: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB903u ^ 0xB91Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB91Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB903u; } return 1;
case 0xB903u: /* LDY IMM A0 04 */
    c->pc = 0xB905u;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB905u: /* LDX IMM A2 30 */
    c->pc = 0xB907u;
    v = 0x30u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB907u: /* LDA ZP A5 FF */
    c->pc = 0xB909u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB909u: /* AND IMM 29 01 */
    c->pc = 0xB90Bu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB90Bu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB90Du ^ 0xB911u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB911u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB90Du; } return 1;
case 0xB90Du: /* LDY IMM A0 05 */
    c->pc = 0xB90Fu;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB90Fu: /* LDX IMM A2 0F */
    c->pc = 0xB911u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB911u: /* STX ABS 8E 67 03 */
    c->pc = 0xB914u;
    ea = 0x0367u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xB914u: /* TXA IMP 8A */
    c->pc = 0xB915u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB915u: /* AND IMM 29 0F */
    c->pc = 0xB917u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB917u: /* STA ABS 8D 6F 03 */
    c->pc = 0xB91Au;
    ea = 0x036Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB91Au: /* JSR ABS 20 27 D6 */
    push(c, 0xB9u); push(c, 0x1Cu); c->pc = 0xD627u; c->cpu_cycles += 6u; return 1;
case 0xB91Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB91Eu: /* LDA IMM A9 00 */
    c->pc = 0xB920u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB920u: /* STA ABS 8D 60 04 */
    c->pc = 0xB923u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB923u: /* STA ABS 8D A0 04 */
    c->pc = 0xB926u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB926u: /* STA ABS 8D 40 04 */
    c->pc = 0xB929u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB929u: /* STA ZP 85 00 */
    c->pc = 0xB92Bu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB92Bu: /* INC ABS EE 80 06 */
    c->pc = 0xB92Eu;
    ea = 0x0680u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB92Eu: /* LDA ABS AD 80 06 */
    c->pc = 0xB931u;
    ea = 0x0680u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB931u: /* CMP IMM C9 10 */
    c->pc = 0xB933u;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB933u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB935u ^ 0xB949u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB949u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB935u; } return 1;
case 0xB935u: /* LDA IMM A9 00 */
    c->pc = 0xB937u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB937u: /* STA ABS 8D 80 06 */
    c->pc = 0xB93Au;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB93Au: /* INC ABS EE 00 04 */
    c->pc = 0xB93Du;
    ea = 0x0400u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB93Du: /* LDA ABS AD 00 04 */
    c->pc = 0xB940u;
    ea = 0x0400u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB940u: /* CMP IMM C9 04 */
    c->pc = 0xB942u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB942u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB944u ^ 0xB949u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB949u; }
    else { c->cpu_cycles += 2u; c->pc = 0xB944u; } return 1;
case 0xB944u: /* LDA IMM A9 00 */
    c->pc = 0xB946u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB946u: /* STA ABS 8D 00 04 */
    c->pc = 0xB949u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB949u: /* LDA ABS AD A0 06 */
    c->pc = 0xB94Cu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB94Cu: /* CMP IMM C9 04 */
    c->pc = 0xB94Eu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB94Eu: /* BCC REL 90 0F */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xB950u ^ 0xB95Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB95Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB950u; } return 1;
case 0xB950u: /* LDY ABS AC 00 04 */
    c->pc = 0xB953u;
    ea = 0x0400u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xB953u: /* LDA ZP A5 FF */
    c->pc = 0xB955u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB955u: /* AND IMM 29 01 */
    c->pc = 0xB957u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB957u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB959u ^ 0xB95Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB95Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB959u; } return 1;
case 0xB959u: /* LDY IMM A0 04 */
    c->pc = 0xB95Bu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB95Bu: /* JSR ABS 20 27 D6 */
    push(c, 0xB9u); push(c, 0x5Du); c->pc = 0xD627u; c->cpu_cycles += 6u; return 1;
case 0xB95Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB95Fu: /* JSR ABS 20 24 D6 */
    push(c, 0xB9u); push(c, 0x61u); c->pc = 0xD624u; c->cpu_cycles += 6u; return 1;
case 0xB962u: /* LDX ABS AE A0 06 */
    c->pc = 0xB965u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xB965u: /* CLC IMP 18 */
    c->pc = 0xB966u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB966u: /* LDA ABS AD C1 04 */
    c->pc = 0xB969u;
    ea = 0x04C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB969u: /* ADC ABX 7D D3 BA */
    c->pc = 0xB96Cu;
    ea = (uint16_t)(0xBAD3u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xBAD3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB96Cu: /* STA ABS 8D C1 04 */
    c->pc = 0xB96Fu;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB96Fu: /* LDA ABS AD A1 04 */
    c->pc = 0xB972u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB972u: /* ADC ABX 7D D7 BA */
    c->pc = 0xB975u;
    ea = (uint16_t)(0xBAD7u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xBAD7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB975u: /* STA ABS 8D A1 04 */
    c->pc = 0xB978u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB978u: /* LDA ZP A5 1C */
    c->pc = 0xB97Au;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB97Au: /* AND IMM 29 07 */
    c->pc = 0xB97Cu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB97Cu: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB97Eu ^ 0xB98Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB98Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB97Eu; } return 1;
case 0xB97Eu: /* INC ABS EE 81 06 */
    c->pc = 0xB981u;
    ea = 0x0681u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xB981u: /* LDA ABS AD 81 06 */
    c->pc = 0xB984u;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB984u: /* CMP IMM C9 04 */
    c->pc = 0xB986u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xB986u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB988u ^ 0xB98Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB98Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xB988u; } return 1;
case 0xB988u: /* LDA IMM A9 00 */
    c->pc = 0xB98Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB98Au: /* STA ABS 8D 81 06 */
    c->pc = 0xB98Du;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB98Du: /* LDA ABS AD A0 06 */
    c->pc = 0xB990u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xB990u: /* ASL IMP 0A */
    c->pc = 0xB991u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB991u: /* ASL IMP 0A */
    c->pc = 0xB992u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB992u: /* ADC ABS 6D 81 06 */
    c->pc = 0xB995u;
    ea = 0x0681u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xB995u: /* TAX IMP AA */
    c->pc = 0xB996u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB996u: /* LDA ABX BD B3 BA */
    c->pc = 0xB999u;
    ea = (uint16_t)(0xBAB3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBAB3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB999u: /* STA ZP 85 02 */
    c->pc = 0xB99Bu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB99Bu: /* LDA ZP A5 FF */
    c->pc = 0xB99Du;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB99Du: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB99Fu ^ 0xB9BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB99Fu; } return 1;
case 0xB99Fu: /* LDX ABS AE A0 06 */
    c->pc = 0xB9A2u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xB9A2u: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB9A4u ^ 0xB9BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9A4u; } return 1;
case 0xB9A4u: /* DEX IMP CA */
    c->pc = 0xB9A5u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9A5u: /* LDA ZP A5 FF */
    c->pc = 0xB9A7u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB9A7u: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xB9A9u ^ 0xB9BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9A9u; } return 1;
case 0xB9A9u: /* LSR IMP 4A */
    c->pc = 0xB9AAu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9AAu: /* LSR IMP 4A */
    c->pc = 0xB9ABu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9ABu: /* LSR IMP 4A */
    c->pc = 0xB9ACu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9ACu: /* LSR IMP 4A */
    c->pc = 0xB9ADu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9ADu: /* STA ZP 85 02 */
    c->pc = 0xB9AFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB9AFu: /* TXA IMP 8A */
    c->pc = 0xB9B0u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9B0u: /* ASL IMP 0A */
    c->pc = 0xB9B1u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9B1u: /* ASL IMP 0A */
    c->pc = 0xB9B2u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9B2u: /* ADC ZP 65 02 */
    c->pc = 0xB9B4u;
    ea = 0x02u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xB9B4u: /* TAX IMP AA */
    c->pc = 0xB9B5u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9B5u: /* LDA ABX BD C3 BA */
    c->pc = 0xB9B8u;
    ea = (uint16_t)(0xBAC3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBAC3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9B8u: /* STA ZP 85 02 */
    c->pc = 0xB9BAu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB9BAu: /* LDY ZP A4 00 */
    c->pc = 0xB9BCu;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xB9BCu: /* LDX IMM A2 15 */
    c->pc = 0xB9BEu;
    v = 0x15u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9BEu: /* CLC IMP 18 */
    c->pc = 0xB9BFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xB9BFu: /* LDA ABX BD 87 BA */
    c->pc = 0xB9C2u;
    ea = (uint16_t)(0xBA87u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA87u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9C2u: /* ADC ABS 6D A1 04 */
    c->pc = 0xB9C5u;
    ea = 0x04A1u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xB9C5u: /* STA ABY 99 00 02 */
    c->pc = 0xB9C8u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9C8u: /* INY IMP C8 */
    c->pc = 0xB9C9u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB9C9u: /* LDA ZP A5 02 */
    c->pc = 0xB9CBu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB9CBu: /* STA ABY 99 00 02 */
    c->pc = 0xB9CEu;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9CEu: /* INY IMP C8 */
    c->pc = 0xB9CFu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB9CFu: /* LDA IMM A9 03 */
    c->pc = 0xB9D1u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9D1u: /* STA ABY 99 00 02 */
    c->pc = 0xB9D4u;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9D4u: /* INY IMP C8 */
    c->pc = 0xB9D5u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB9D5u: /* LDA ABX BD 9D BA */
    c->pc = 0xB9D8u;
    ea = (uint16_t)(0xBA9Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA9Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9D8u: /* STA ABY 99 00 02 */
    c->pc = 0xB9DBu;
    ea = (uint16_t)(0x0200u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9DBu: /* INY IMP C8 */
    c->pc = 0xB9DCu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB9DCu: /* DEX IMP CA */
    c->pc = 0xB9DDu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9DDu: /* BPL REL 10 DF */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xB9DFu ^ 0xB9BEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9BEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9DFu; } return 1;
case 0xB9DFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB9E0u: /* LDX ABS AE A0 06 */
    c->pc = 0xB9E3u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xB9E3u: /* LDA ZP A5 FF */
    c->pc = 0xB9E5u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xB9E5u: /* AND IMM 29 01 */
    c->pc = 0xB9E7u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9E7u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB9E9u ^ 0xB9EAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9EAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9E9u; } return 1;
case 0xB9E9u: /* INX IMP E8 */
    c->pc = 0xB9EAu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9EAu: /* TXA IMP 8A */
    c->pc = 0xB9EBu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9EBu: /* ASL IMP 0A */
    c->pc = 0xB9ECu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xB9ECu: /* TAX IMP AA */
    c->pc = 0xB9EDu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9EDu: /* LDY IMM A0 00 */
    c->pc = 0xB9EFu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB9EFu: /* LDA ABX BD 6F BA */
    c->pc = 0xB9F2u;
    ea = (uint16_t)(0xBA6Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA6Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xB9F2u: /* STA ABY 99 68 03 */
    c->pc = 0xB9F5u;
    ea = (uint16_t)(0x0368u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9F5u: /* STA ABY 99 70 03 */
    c->pc = 0xB9F8u;
    ea = (uint16_t)(0x0370u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xB9F8u: /* INX IMP E8 */
    c->pc = 0xB9F9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xB9F9u: /* INY IMP C8 */
    c->pc = 0xB9FAu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xB9FAu: /* CPY IMM C0 02 */
    c->pc = 0xB9FCu;
    v = 0x02u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xB9FCu: /* BNE REL D0 F1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xB9FEu ^ 0xB9EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xB9EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xB9FEu; } return 1;
case 0xB9FEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xB9FFu: /* LDX ABS AE A0 06 */
    c->pc = 0xBA02u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xBA02u: /* BEQ REL F0 1F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBA04u ^ 0xBA23u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA23u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA04u; } return 1;
case 0xBA04u: /* LDA ZP A5 FF */
    c->pc = 0xBA06u;
    ea = 0xFFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBA06u: /* AND IMM 29 01 */
    c->pc = 0xBA08u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA08u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBA0Au ^ 0xBA0Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA0Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA0Au; } return 1;
case 0xBA0Au: /* DEX IMP CA */
    c->pc = 0xBA0Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBA0Bu: /* TXA IMP 8A */
    c->pc = 0xBA0Cu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA0Cu: /* ASL IMP 0A */
    c->pc = 0xBA0Du;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA0Du: /* ASL IMP 0A */
    c->pc = 0xBA0Eu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA0Eu: /* STA ZP 85 00 */
    c->pc = 0xBA10u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBA10u: /* CLC IMP 18 */
    c->pc = 0xBA11u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBA11u: /* ASL IMP 0A */
    c->pc = 0xBA12u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBA12u: /* ADC ZP 65 00 */
    c->pc = 0xBA14u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xBA14u: /* TAX IMP AA */
    c->pc = 0xBA15u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBA15u: /* LDY IMM A0 00 */
    c->pc = 0xBA17u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBA17u: /* LDA ABX BD 33 BA */
    c->pc = 0xBA1Au;
    ea = (uint16_t)(0xBA33u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA33u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBA1Au: /* STA ABY 99 56 03 */
    c->pc = 0xBA1Du;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA1Du: /* INX IMP E8 */
    c->pc = 0xBA1Eu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBA1Eu: /* INY IMP C8 */
    c->pc = 0xBA1Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBA1Fu: /* CPY IMM C0 0C */
    c->pc = 0xBA21u;
    v = 0x0Cu;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xBA21u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBA23u ^ 0xBA17u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA17u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA23u; } return 1;
case 0xBA23u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBA24u: /* LDX IMM A2 20 */
    c->pc = 0xBA26u;
    v = 0x20u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBA26u: /* STX ZP 86 47 */
    c->pc = 0xBA28u;
    ea = 0x47u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBA28u: /* DEX IMP CA */
    c->pc = 0xBA29u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBA29u: /* STA ABX 9D B8 03 */
    c->pc = 0xBA2Cu;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBA2Cu: /* DEX IMP CA */
    c->pc = 0xBA2Du;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBA2Du: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBA2Fu ^ 0xBA29u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBA29u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBA2Fu; } return 1;
case 0xBA2Fu: /* JSR ABS 20 AB C0 */
    push(c, 0xBAu); push(c, 0x31u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBA32u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBAE0u: /* LDA IMM A9 03 */
    c->pc = 0xBAE2u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAE2u: /* JSR ABS 20 44 C6 */
    push(c, 0xBAu); push(c, 0xE4u); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0xBAE5u: /* LDA IMM A9 06 */
    c->pc = 0xBAE7u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAE7u: /* JSR ABS 20 44 C6 */
    push(c, 0xBAu); push(c, 0xE9u); c->pc = 0xC644u; c->cpu_cycles += 6u; return 1;
case 0xBAEAu: /* LDA ZP A5 2A */
    c->pc = 0xBAECu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAECu: /* PHA IMP 48 */
    c->pc = 0xBAEDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAEDu: /* LDA IMM A9 05 */
    c->pc = 0xBAEFu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAEFu: /* STA ZP 85 2A */
    c->pc = 0xBAF1u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAF1u: /* LDA IMM A9 40 */
    c->pc = 0xBAF3u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAF3u: /* STA ZP 85 08 */
    c->pc = 0xBAF5u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAF5u: /* LDA IMM A9 8F */
    c->pc = 0xBAF7u;
    v = 0x8Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAF7u: /* STA ZP 85 09 */
    c->pc = 0xBAF9u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBAF9u: /* JSR ABS 20 7E A8 */
    push(c, 0xBAu); push(c, 0xFBu); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xBAFCu: /* LDA IMM A9 80 */
    c->pc = 0xBAFEu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBAFEu: /* STA ZP 85 08 */
    c->pc = 0xBB00u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB00u: /* LDA IMM A9 8F */
    c->pc = 0xBB02u;
    v = 0x8Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB02u: /* STA ZP 85 09 */
    c->pc = 0xBB04u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB04u: /* JSR ABS 20 7E A8 */
    push(c, 0xBBu); push(c, 0x06u); c->pc = 0xA87Eu; c->cpu_cycles += 6u; return 1;
case 0xBB07u: /* PLA IMP 68 */
    c->pc = 0xBB08u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB08u: /* STA ZP 85 2A */
    c->pc = 0xBB0Au;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB0Au: /* LDA IMM A9 17 */
    c->pc = 0xBB0Cu;
    v = 0x17u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB0Cu: /* JSR ABS 20 51 C0 */
    push(c, 0xBBu); push(c, 0x0Eu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xBB0Fu: /* JSR ABS 20 7E 84 */
    push(c, 0xBBu); push(c, 0x11u); c->pc = 0x847Eu; c->cpu_cycles += 6u; return 1;
case 0xBB12u: /* LDA IMM A9 01 */
    c->pc = 0xBB14u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB14u: /* JSR ABS 20 B2 A9 */
    push(c, 0xBBu); push(c, 0x16u); c->pc = 0xA9B2u; c->cpu_cycles += 6u; return 1;
case 0xBB17u: /* LDX IMM A2 0F */
    c->pc = 0xBB19u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB19u: /* TXA IMP 8A */
    c->pc = 0xBB1Au;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB1Au: /* STA ABX 9D 66 03 */
    c->pc = 0xBB1Du;
    ea = (uint16_t)(0x0366u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBB1Du: /* DEX IMP CA */
    c->pc = 0xBB1Eu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB1Eu: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBB20u ^ 0xBB1Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB1Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB20u; } return 1;
case 0xBB20u: /* LDA IMM A9 06 */
    c->pc = 0xBB22u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB22u: /* STA ABS 8D 00 04 */
    c->pc = 0xBB25u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB25u: /* JSR ABS 20 24 D6 */
    push(c, 0xBBu); push(c, 0x27u); c->pc = 0xD624u; c->cpu_cycles += 6u; return 1;
case 0xBB28u: /* LDA IMM A9 05 */
    c->pc = 0xBB2Au;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB2Au: /* STA ZP 85 FD */
    c->pc = 0xBB2Cu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB2Cu: /* LDA ZP A5 1C */
    c->pc = 0xBB2Eu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB2Eu: /* AND IMM 29 07 */
    c->pc = 0xBB30u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB30u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB32u ^ 0xBB3Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB3Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB32u; } return 1;
case 0xBB32u: /* LDX IMM A2 1B */
    c->pc = 0xBB34u;
    v = 0x1Bu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB34u: /* LDY IMM A0 3B */
    c->pc = 0xBB36u;
    v = 0x3Bu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBB36u: /* LDA IMM A9 0F */
    c->pc = 0xBB38u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB38u: /* JSR ABS 20 FF A8 */
    push(c, 0xBBu); push(c, 0x3Au); c->pc = 0xA8FFu; c->cpu_cycles += 6u; return 1;
case 0xBB3Bu: /* DEC ZP C6 FD */
    c->pc = 0xBB3Du;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBB3Du: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBB3Fu ^ 0xBB45u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB45u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB3Fu; } return 1;
case 0xBB3Fu: /* JSR ABS 20 AB C0 */
    push(c, 0xBBu); push(c, 0x41u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBB42u: /* JMP ABS 4C 2C BB */
    c->pc = 0xBB2Cu; c->cpu_cycles += 3u; return 1;
case 0xBB45u: /* JSR ABS 20 34 BD */
    push(c, 0xBBu); push(c, 0x47u); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBB48u: /* JSR ABS 20 22 BD */
    push(c, 0xBBu); push(c, 0x4Au); c->pc = 0xBD22u; c->cpu_cycles += 6u; return 1;
case 0xBB4Bu: /* JSR ABS 20 34 BD */
    push(c, 0xBBu); push(c, 0x4Du); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBB4Eu: /* INC ABS EE B7 03 */
    c->pc = 0xBB51u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBB51u: /* LDX ZP A6 2A */
    c->pc = 0xBB53u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBB53u: /* LDA ABX BD 12 BE */
    c->pc = 0xBB56u;
    ea = (uint16_t)(0xBE12u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBE12u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB56u: /* STA ABS 8D B8 03 */
    c->pc = 0xBB59u;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB59u: /* INC ZP E6 47 */
    c->pc = 0xBB5Bu;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBB5Bu: /* JSR ABS 20 34 BD */
    push(c, 0xBBu); push(c, 0x5Du); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBB5Eu: /* JSR ABS 20 22 BD */
    push(c, 0xBBu); push(c, 0x60u); c->pc = 0xBD22u; c->cpu_cycles += 6u; return 1;
case 0xBB61u: /* INC ABS EE B7 03 */
    c->pc = 0xBB64u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBB64u: /* INC ABS EE B7 03 */
    c->pc = 0xBB67u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBB67u: /* JSR ABS 20 AB C0 */
    push(c, 0xBBu); push(c, 0x69u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBB6Au: /* LDA IMM A9 08 */
    c->pc = 0xBB6Cu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB6Cu: /* JSR ABS 20 3E BD */
    push(c, 0xBBu); push(c, 0x6Eu); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBB6Fu: /* LDA IMM A9 09 */
    c->pc = 0xBB71u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB71u: /* JSR ABS 20 3E BD */
    push(c, 0xBBu); push(c, 0x73u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBB74u: /* LDA ZP A5 2A */
    c->pc = 0xBB76u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB76u: /* JSR ABS 20 3E BD */
    push(c, 0xBBu); push(c, 0x78u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBB79u: /* LDA ZP A5 2A */
    c->pc = 0xBB7Bu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB7Bu: /* CMP IMM C9 04 */
    c->pc = 0xBB7Du;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBB7Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBB7Fu ^ 0xBB84u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB84u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB7Fu; } return 1;
case 0xBB7Fu: /* LDA IMM A9 13 */
    c->pc = 0xBB81u;
    v = 0x13u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB81u: /* JSR ABS 20 3E BD */
    push(c, 0xBBu); push(c, 0x83u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBB84u: /* LDA IMM A9 9C */
    c->pc = 0xBB86u;
    v = 0x9Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB86u: /* STA ZP 85 FD */
    c->pc = 0xBB88u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB88u: /* LDX IMM A2 00 */
    c->pc = 0xBB8Au;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB8Au: /* LDA ZP A5 FD */
    c->pc = 0xBB8Cu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBB8Cu: /* AND IMM 29 01 */
    c->pc = 0xBB8Eu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB8Eu: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBB90u ^ 0xBB96u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB96u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBB90u; } return 1;
case 0xBB90u: /* LDX ZP A6 2A */
    c->pc = 0xBB92u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBB92u: /* INX IMP E8 */
    c->pc = 0xBB93u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB93u: /* TXA IMP 8A */
    c->pc = 0xBB94u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB94u: /* ASL IMP 0A */
    c->pc = 0xBB95u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBB95u: /* TAX IMP AA */
    c->pc = 0xBB96u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBB96u: /* LDA ABX BD 5A BF */
    c->pc = 0xBB99u;
    ea = (uint16_t)(0xBF5Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF5Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBB99u: /* STA ABS 8D 68 03 */
    c->pc = 0xBB9Cu;
    ea = 0x0368u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB9Cu: /* STA ABS 8D 70 03 */
    c->pc = 0xBB9Fu;
    ea = 0x0370u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBB9Fu: /* LDA ABX BD 5B BF */
    c->pc = 0xBBA2u;
    ea = (uint16_t)(0xBF5Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF5Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBA2u: /* STA ABS 8D 69 03 */
    c->pc = 0xBBA5u;
    ea = 0x0369u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBBA5u: /* STA ABS 8D 71 03 */
    c->pc = 0xBBA8u;
    ea = 0x0371u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBBA8u: /* JSR ABS 20 AB C0 */
    push(c, 0xBBu); push(c, 0xAAu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBBABu: /* DEC ZP C6 FD */
    c->pc = 0xBBADu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBBADu: /* BNE REL D0 D9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBBAFu ^ 0xBB88u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBB88u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBAFu; } return 1;
case 0xBBAFu: /* LDX ZP A6 2A */
    c->pc = 0xBBB1u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBBB1u: /* LDA ABX BD 81 C2 */
    c->pc = 0xBBB4u;
    ea = (uint16_t)(0xC281u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC281u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBB4u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBBB6u ^ 0xBBB9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBB9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBB6u; } return 1;
case 0xBBB6u: /* JSR ABS 20 62 BC */
    push(c, 0xBBu); push(c, 0xB8u); c->pc = 0xBC62u; c->cpu_cycles += 6u; return 1;
case 0xBBB9u: /* LDX IMM A2 08 */
    c->pc = 0xBBBBu;
    v = 0x08u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBBBBu: /* JSR ABS 20 8B A9 */
    push(c, 0xBBu); push(c, 0xBDu); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xBBBEu: /* JSR ABS 20 AB C0 */
    push(c, 0xBBu); push(c, 0xC0u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBBC1u: /* LDX IMM A2 09 */
    c->pc = 0xBBC3u;
    v = 0x09u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBBC3u: /* JSR ABS 20 8B A9 */
    push(c, 0xBBu); push(c, 0xC5u); c->pc = 0xA98Bu; c->cpu_cycles += 6u; return 1;
case 0xBBC6u: /* JSR ABS 20 AB C0 */
    push(c, 0xBBu); push(c, 0xC8u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBBC9u: /* LDX IMM A2 03 */
    c->pc = 0xBBCBu;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBBCBu: /* LDA ABX BD 70 BF */
    c->pc = 0xBBCEu;
    ea = (uint16_t)(0xBF70u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF70u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBCEu: /* STA ABX 9D FC 02 */
    c->pc = 0xBBD1u;
    ea = (uint16_t)(0x02FCu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBBD1u: /* DEX IMP CA */
    c->pc = 0xBBD2u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBBD2u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBBD4u ^ 0xBBCBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBCBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBD4u; } return 1;
case 0xBBD4u: /* LDA IMM A9 30 */
    c->pc = 0xBBD6u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBD6u: /* STA ABS 8D 74 03 */
    c->pc = 0xBBD9u;
    ea = 0x0374u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBBD9u: /* LDA IMM A9 00 */
    c->pc = 0xBBDBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBDBu: /* STA ZP 85 FD */
    c->pc = 0xBBDDu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBDDu: /* LDX ZP A6 FD */
    c->pc = 0xBBDFu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBBDFu: /* LDA ABX BD 6E BF */
    c->pc = 0xBBE2u;
    ea = (uint16_t)(0xBF6Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF6Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBBE2u: /* STA ABS 8D FC 02 */
    c->pc = 0xBBE5u;
    ea = 0x02FCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBBE5u: /* LDA ZP A5 1C */
    c->pc = 0xBBE7u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBE7u: /* AND IMM 29 08 */
    c->pc = 0xBBE9u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBE9u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBBEBu ^ 0xBBF0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBBF0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBEBu; } return 1;
case 0xBBEBu: /* LDA IMM A9 F8 */
    c->pc = 0xBBEDu;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBEDu: /* STA ABS 8D FC 02 */
    c->pc = 0xBBF0u;
    ea = 0x02FCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBBF0u: /* LDA ZP A5 27 */
    c->pc = 0xBBF2u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBBF2u: /* AND IMM 29 3C */
    c->pc = 0xBBF4u;
    v = 0x3Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBF4u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBBF6u ^ 0xBC05u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC05u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBF6u; } return 1;
case 0xBBF6u: /* AND IMM 29 08 */
    c->pc = 0xBBF8u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBF8u: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBBFAu ^ 0xBC0Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC0Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBBFAu; } return 1;
case 0xBBFAu: /* LDA IMM A9 2F */
    c->pc = 0xBBFCu;
    v = 0x2Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBBFCu: /* JSR ABS 20 51 C0 */
    push(c, 0xBBu); push(c, 0xFEu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xBBFFu: /* LDA ZP A5 FD */
    c->pc = 0xBC01u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC01u: /* EOR IMM 49 01 */
    c->pc = 0xBC03u;
    v = 0x01u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC03u: /* STA ZP 85 FD */
    c->pc = 0xBC05u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC05u: /* JSR ABS 20 AB C0 */
    push(c, 0xBCu); push(c, 0x07u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBC08u: /* JMP ABS 4C DD BB */
    c->pc = 0xBBDDu; c->cpu_cycles += 3u; return 1;
case 0xBC0Bu: /* LDA ZP A5 FD */
    c->pc = 0xBC0Du;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC0Du: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBC0Fu ^ 0xBC12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC12u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC0Fu; } return 1;
case 0xBC0Fu: /* JMP ABS 4C 5E BC */
    c->pc = 0xBC5Eu; c->cpu_cycles += 3u; return 1;
case 0xBC12u: /* LDX IMM A2 1F */
    c->pc = 0xBC14u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC14u: /* LDA ABX BD 56 03 */
    c->pc = 0xBC17u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC17u: /* STA ABX 9D 00 07 */
    c->pc = 0xBC1Au;
    ea = (uint16_t)(0x0700u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC1Au: /* DEX IMP CA */
    c->pc = 0xBC1Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC1Bu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBC1Du ^ 0xBC14u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC14u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC1Du; } return 1;
case 0xBC1Du: /* JSR ABS 20 24 B2 */
    push(c, 0xBCu); push(c, 0x1Fu); c->pc = 0xB224u; c->cpu_cycles += 6u; return 1;
case 0xBC20u: /* JSR ABS 20 24 D6 */
    push(c, 0xBCu); push(c, 0x22u); c->pc = 0xD624u; c->cpu_cycles += 6u; return 1;
case 0xBC23u: /* LDA IMM A9 05 */
    c->pc = 0xBC25u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC25u: /* STA ZP 85 FD */
    c->pc = 0xBC27u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC27u: /* LDA ZP A5 1C */
    c->pc = 0xBC29u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC29u: /* AND IMM 29 03 */
    c->pc = 0xBC2Bu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC2Bu: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC2Du ^ 0xBC55u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC55u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC2Du; } return 1;
case 0xBC2Du: /* LDX IMM A2 1F */
    c->pc = 0xBC2Fu;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC2Fu: /* LDA ABX BD 56 03 */
    c->pc = 0xBC32u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC32u: /* CMP IMM C9 0F */
    c->pc = 0xBC34u;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC34u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC36u ^ 0xBC41u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC41u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC36u; } return 1;
case 0xBC36u: /* LDA ABX BD 00 07 */
    c->pc = 0xBC39u;
    ea = (uint16_t)(0x0700u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC39u: /* AND IMM 29 0F */
    c->pc = 0xBC3Bu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC3Bu: /* STA ABX 9D 56 03 */
    c->pc = 0xBC3Eu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC3Eu: /* JMP ABS 4C 4E BC */
    c->pc = 0xBC4Eu; c->cpu_cycles += 3u; return 1;
case 0xBC41u: /* CLC IMP 18 */
    c->pc = 0xBC42u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBC42u: /* ADC IMM 69 10 */
    c->pc = 0xBC44u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBC44u: /* CMP ABX DD 00 07 */
    c->pc = 0xBC47u;
    ea = (uint16_t)(0x0700u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC47u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBC49u ^ 0xBC4Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC4Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC49u; } return 1;
case 0xBC49u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xBC4Bu ^ 0xBC4Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC4Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC4Bu; } return 1;
case 0xBC4Bu: /* STA ABX 9D 56 03 */
    c->pc = 0xBC4Eu;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC4Eu: /* DEX IMP CA */
    c->pc = 0xBC4Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC4Fu: /* BPL REL 10 DE */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBC51u ^ 0xBC2Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC2Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC51u; } return 1;
case 0xBC51u: /* DEC ZP C6 FD */
    c->pc = 0xBC53u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBC53u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBC55u ^ 0xBC5Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC5Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC55u; } return 1;
case 0xBC55u: /* JSR ABS 20 AB C0 */
    push(c, 0xBCu); push(c, 0x57u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBC58u: /* JMP ABS 4C 27 BC */
    c->pc = 0xBC27u; c->cpu_cycles += 3u; return 1;
case 0xBC5Bu: /* JMP ABS 4C C9 BB */
    c->pc = 0xBBC9u; c->cpu_cycles += 3u; return 1;
case 0xBC5Eu: /* JSR ABS 20 2D A5 */
    push(c, 0xBCu); push(c, 0x60u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xBC61u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBC62u: /* LDA IMM A9 0F */
    c->pc = 0xBC64u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC64u: /* STA ABS 8D 5C 03 */
    c->pc = 0xBC67u;
    ea = 0x035Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBC67u: /* STA ABS 8D 5D 03 */
    c->pc = 0xBC6Au;
    ea = 0x035Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBC6Au: /* LDX IMM A2 02 */
    c->pc = 0xBC6Cu;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC6Cu: /* LDA ABX BD 74 BF */
    c->pc = 0xBC6Fu;
    ea = (uint16_t)(0xBF74u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF74u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBC6Fu: /* STA ABX 9D 73 03 */
    c->pc = 0xBC72u;
    ea = (uint16_t)(0x0373u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBC72u: /* DEX IMP CA */
    c->pc = 0xBC73u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC73u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBC75u ^ 0xBC6Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC6Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC75u; } return 1;
case 0xBC75u: /* JSR ABS 20 73 84 */
    push(c, 0xBCu); push(c, 0x77u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xBC78u: /* JSR ABS 20 B7 BD */
    push(c, 0xBCu); push(c, 0x7Au); c->pc = 0xBDB7u; c->cpu_cycles += 6u; return 1;
case 0xBC7Bu: /* LDA IMM A9 7D */
    c->pc = 0xBC7Du;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC7Du: /* STA ZP 85 FD */
    c->pc = 0xBC7Fu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC7Fu: /* LDX IMM A2 0F */
    c->pc = 0xBC81u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC81u: /* LDA ZP A5 FD */
    c->pc = 0xBC83u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBC83u: /* AND IMM 29 08 */
    c->pc = 0xBC85u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC85u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xBC87u ^ 0xBC89u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC89u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC87u; } return 1;
case 0xBC87u: /* LDX IMM A2 15 */
    c->pc = 0xBC89u;
    v = 0x15u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBC89u: /* STX ABS 8E 66 03 */
    c->pc = 0xBC8Cu;
    ea = 0x0366u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xBC8Cu: /* JSR ABS 20 AB C0 */
    push(c, 0xBCu); push(c, 0x8Eu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBC8Fu: /* DEC ZP C6 FD */
    c->pc = 0xBC91u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBC91u: /* BNE REL D0 EC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBC93u ^ 0xBC7Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBC7Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBC93u; } return 1;
case 0xBC93u: /* LDA IMM A9 07 */
    c->pc = 0xBC95u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC95u: /* STA ABS 8D 00 04 */
    c->pc = 0xBC98u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBC98u: /* JSR ABS 20 24 D6 */
    push(c, 0xBCu); push(c, 0x9Au); c->pc = 0xD624u; c->cpu_cycles += 6u; return 1;
case 0xBC9Bu: /* LDA IMM A9 0A */
    c->pc = 0xBC9Du;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBC9Du: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0x9Fu); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCA0u: /* LDA IMM A9 0B */
    c->pc = 0xBCA2u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCA2u: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xA4u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCA5u: /* JSR ABS 20 AB BD */
    push(c, 0xBCu); push(c, 0xA7u); c->pc = 0xBDABu; c->cpu_cycles += 6u; return 1;
case 0xBCA8u: /* JSR ABS 20 B7 BD */
    push(c, 0xBCu); push(c, 0xAAu); c->pc = 0xBDB7u; c->cpu_cycles += 6u; return 1;
case 0xBCABu: /* LDX ZP A6 2A */
    c->pc = 0xBCADu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBCADu: /* LDA ABX BD 81 C2 */
    c->pc = 0xBCB0u;
    ea = (uint16_t)(0xC281u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC281u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBCB0u: /* LSR IMP 4A */
    c->pc = 0xBCB1u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCB1u: /* ORA IMM 09 A0 */
    c->pc = 0xBCB3u;
    v = 0xA0u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCB3u: /* STA ABS 8D 20 04 */
    c->pc = 0xBCB6u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBCB6u: /* INC ABS EE 20 04 */
    c->pc = 0xBCB9u;
    ea = 0x0420u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBCB9u: /* LDA IMM A9 0F */
    c->pc = 0xBCBBu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCBBu: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xBDu); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCBEu: /* LDA IMM A9 0C */
    c->pc = 0xBCC0u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCC0u: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xC2u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCC3u: /* LDA IMM A9 0D */
    c->pc = 0xBCC5u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCC5u: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xC7u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCC8u: /* LDA IMM A9 0E */
    c->pc = 0xBCCAu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCCAu: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xCCu); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCCDu: /* JSR ABS 20 AB BD */
    push(c, 0xBCu); push(c, 0xCFu); c->pc = 0xBDABu; c->cpu_cycles += 6u; return 1;
case 0xBCD0u: /* JSR ABS 20 B7 BD */
    push(c, 0xBCu); push(c, 0xD2u); c->pc = 0xBDB7u; c->cpu_cycles += 6u; return 1;
case 0xBCD3u: /* JSR ABS 20 73 84 */
    push(c, 0xBCu); push(c, 0xD5u); c->pc = 0x8473u; c->cpu_cycles += 6u; return 1;
case 0xBCD6u: /* LDA IMM A9 06 */
    c->pc = 0xBCD8u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCD8u: /* STA ABS 8D 00 04 */
    c->pc = 0xBCDBu;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBCDBu: /* JSR ABS 20 24 D6 */
    push(c, 0xBCu); push(c, 0xDDu); c->pc = 0xD624u; c->cpu_cycles += 6u; return 1;
case 0xBCDEu: /* JSR ABS 20 EC BD */
    push(c, 0xBCu); push(c, 0xE0u); c->pc = 0xBDECu; c->cpu_cycles += 6u; return 1;
case 0xBCE1u: /* LDA IMM A9 08 */
    c->pc = 0xBCE3u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCE3u: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xE5u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCE6u: /* LDA IMM A9 09 */
    c->pc = 0xBCE8u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCE8u: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xEAu); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCEBu: /* LDA ABS AD 20 04 */
    c->pc = 0xBCEEu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBCEEu: /* AND IMM 29 0F */
    c->pc = 0xBCF0u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCF0u: /* CLC IMP 18 */
    c->pc = 0xBCF1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBCF1u: /* ADC IMM 69 0F */
    c->pc = 0xBCF3u;
    v = 0x0Fu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBCF3u: /* JSR ABS 20 3E BD */
    push(c, 0xBCu); push(c, 0xF5u); c->pc = 0xBD3Eu; c->cpu_cycles += 6u; return 1;
case 0xBCF6u: /* LDA IMM A9 7D */
    c->pc = 0xBCF8u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBCF8u: /* STA ZP 85 FD */
    c->pc = 0xBCFAu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCFAu: /* LDX IMM A2 12 */
    c->pc = 0xBCFCu;
    v = 0x12u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBCFCu: /* LDA ZP A5 FD */
    c->pc = 0xBCFEu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBCFEu: /* AND IMM 29 01 */
    c->pc = 0xBD00u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD00u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBD02u ^ 0xBD08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD08u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD02u; } return 1;
case 0xBD02u: /* LDX ZP A6 2A */
    c->pc = 0xBD04u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBD04u: /* INX IMP E8 */
    c->pc = 0xBD05u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBD05u: /* TXA IMP 8A */
    c->pc = 0xBD06u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD06u: /* ASL IMP 0A */
    c->pc = 0xBD07u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD07u: /* TAX IMP AA */
    c->pc = 0xBD08u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBD08u: /* LDA ABX BD 5A BF */
    c->pc = 0xBD0Bu;
    ea = (uint16_t)(0xBF5Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF5Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBD0Bu: /* STA ABS 8D 68 03 */
    c->pc = 0xBD0Eu;
    ea = 0x0368u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD0Eu: /* STA ABS 8D 70 03 */
    c->pc = 0xBD11u;
    ea = 0x0370u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD11u: /* LDA ABX BD 5B BF */
    c->pc = 0xBD14u;
    ea = (uint16_t)(0xBF5Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBF5Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBD14u: /* STA ABS 8D 69 03 */
    c->pc = 0xBD17u;
    ea = 0x0369u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD17u: /* STA ABS 8D 71 03 */
    c->pc = 0xBD1Au;
    ea = 0x0371u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD1Au: /* JSR ABS 20 AB C0 */
    push(c, 0xBDu); push(c, 0x1Cu); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBD1Du: /* DEC ZP C6 FD */
    c->pc = 0xBD1Fu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBD1Fu: /* BNE REL D0 D9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBD21u ^ 0xBCFAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBCFAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD21u; } return 1;
case 0xBD21u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBD22u: /* LDA IMM A9 24 */
    c->pc = 0xBD24u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD24u: /* STA ABS 8D B6 03 */
    c->pc = 0xBD27u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD27u: /* LDA IMM A9 CD */
    c->pc = 0xBD29u;
    v = 0xCDu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD29u: /* STA ABS 8D B7 03 */
    c->pc = 0xBD2Cu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD2Cu: /* LDA IMM A9 94 */
    c->pc = 0xBD2Eu;
    v = 0x94u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD2Eu: /* STA ABS 8D B8 03 */
    c->pc = 0xBD31u;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD31u: /* INC ZP E6 47 */
    c->pc = 0xBD33u;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBD33u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBD34u: /* JSR ABS 20 AB C0 */
    push(c, 0xBDu); push(c, 0x36u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBD37u: /* LDA ZP A5 1C */
    c->pc = 0xBD39u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD39u: /* AND IMM 29 07 */
    c->pc = 0xBD3Bu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD3Bu: /* BNE REL D0 F7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBD3Du ^ 0xBD34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD34u; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD3Du; } return 1;
case 0xBD3Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBD3Eu: /* STY ZP 84 00 */
    c->pc = 0xBD40u;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xBD40u: /* ASL IMP 0A */
    c->pc = 0xBD41u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD41u: /* ASL IMP 0A */
    c->pc = 0xBD42u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD42u: /* ASL IMP 0A */
    c->pc = 0xBD43u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD43u: /* ASL IMP 0A */
    c->pc = 0xBD44u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD44u: /* TAY IMP A8 */
    c->pc = 0xBD45u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBD45u: /* LDA IMM A9 00 */
    c->pc = 0xBD47u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD47u: /* ADC IMM 69 00 */
    c->pc = 0xBD49u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD49u: /* STA ZP 85 C8 */
    c->pc = 0xBD4Bu;
    ea = 0xC8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD4Bu: /* LDA IMM A9 1A */
    c->pc = 0xBD4Du;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD4Du: /* STA ZP 85 C9 */
    c->pc = 0xBD4Fu;
    ea = 0xC9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD4Fu: /* LDA IMM A9 BE */
    c->pc = 0xBD51u;
    v = 0xBEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD51u: /* CLC IMP 18 */
    c->pc = 0xBD52u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBD52u: /* ADC ZP 65 C8 */
    c->pc = 0xBD54u;
    ea = 0xC8u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xBD54u: /* STA ZP 85 CA */
    c->pc = 0xBD56u;
    ea = 0xCAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD56u: /* LDA IZY B1 C9 */
    c->pc = 0xBD58u;
    ea = (uint16_t)(read16_zp(c, 0xC9u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xC9u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBD58u: /* STA ABS 8D B6 03 */
    c->pc = 0xBD5Bu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD5Bu: /* TYA IMP 98 */
    c->pc = 0xBD5Cu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD5Cu: /* CLC IMP 18 */
    c->pc = 0xBD5Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBD5Du: /* ADC IMM 69 01 */
    c->pc = 0xBD5Fu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD5Fu: /* TAY IMP A8 */
    c->pc = 0xBD60u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBD60u: /* LDA ZP A5 CA */
    c->pc = 0xBD62u;
    ea = 0xCAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD62u: /* ADC IMM 69 00 */
    c->pc = 0xBD64u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD64u: /* STA ZP 85 CA */
    c->pc = 0xBD66u;
    ea = 0xCAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD66u: /* LDA IZY B1 C9 */
    c->pc = 0xBD68u;
    ea = (uint16_t)(read16_zp(c, 0xC9u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xC9u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBD68u: /* STA ABS 8D B7 03 */
    c->pc = 0xBD6Bu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD6Bu: /* TYA IMP 98 */
    c->pc = 0xBD6Cu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD6Cu: /* CLC IMP 18 */
    c->pc = 0xBD6Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBD6Du: /* ADC IMM 69 01 */
    c->pc = 0xBD6Fu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD6Fu: /* TAY IMP A8 */
    c->pc = 0xBD70u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xBD70u: /* LDA ZP A5 CA */
    c->pc = 0xBD72u;
    ea = 0xCAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD72u: /* ADC IMM 69 00 */
    c->pc = 0xBD74u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD74u: /* STA ZP 85 CA */
    c->pc = 0xBD76u;
    ea = 0xCAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD76u: /* STY ZP 84 FE */
    c->pc = 0xBD78u;
    ea = 0xFEu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xBD78u: /* LDA IMM A9 0E */
    c->pc = 0xBD7Au;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBD7Au: /* STA ZP 85 FD */
    c->pc = 0xBD7Cu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD7Cu: /* JSR ABS 20 34 BD */
    push(c, 0xBDu); push(c, 0x7Eu); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBD7Fu: /* LDY ZP A4 FE */
    c->pc = 0xBD81u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xBD81u: /* CPY IMM C0 F7 */
    c->pc = 0xBD83u;
    v = 0xF7u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD83u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBD85u ^ 0xBD8Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD8Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD85u; } return 1;
case 0xBD85u: /* LDA ABS AD 20 04 */
    c->pc = 0xBD88u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD88u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBD8Au ^ 0xBD8Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD8Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBD8Au; } return 1;
case 0xBD8Au: /* LDA IZY B1 C9 */
    c->pc = 0xBD8Cu;
    ea = (uint16_t)(read16_zp(c, 0xC9u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xC9u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xBD8Cu: /* STA ABS 8D B8 03 */
    c->pc = 0xBD8Fu;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBD8Fu: /* INC ZP E6 47 */
    c->pc = 0xBD91u;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBD91u: /* INC ABS EE B7 03 */
    c->pc = 0xBD94u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBD94u: /* LDA ZP A5 FE */
    c->pc = 0xBD96u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD96u: /* CLC IMP 18 */
    c->pc = 0xBD97u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBD97u: /* ADC IMM 69 01 */
    c->pc = 0xBD99u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD99u: /* STA ZP 85 FE */
    c->pc = 0xBD9Bu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD9Bu: /* LDA ZP A5 CA */
    c->pc = 0xBD9Du;
    ea = 0xCAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBD9Du: /* ADC IMM 69 00 */
    c->pc = 0xBD9Fu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBD9Fu: /* STA ZP 85 CA */
    c->pc = 0xBDA1u;
    ea = 0xCAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBDA1u: /* DEC ZP C6 FD */
    c->pc = 0xBDA3u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBDA3u: /* BNE REL D0 D7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBDA5u ^ 0xBD7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBD7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBDA5u; } return 1;
case 0xBDA5u: /* LDY ZP A4 00 */
    c->pc = 0xBDA7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xBDA7u: /* JSR ABS 20 AB C0 */
    push(c, 0xBDu); push(c, 0xA9u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBDAAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBDABu: /* LDA IMM A9 7D */
    c->pc = 0xBDADu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBDADu: /* STA ZP 85 FD */
    c->pc = 0xBDAFu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBDAFu: /* JSR ABS 20 AB C0 */
    push(c, 0xBDu); push(c, 0xB1u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBDB2u: /* DEC ZP C6 FD */
    c->pc = 0xBDB4u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBDB4u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xBDB6u ^ 0xBDAFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBDAFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBDB6u; } return 1;
case 0xBDB6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBDB7u: /* LDX IMM A2 1F */
    c->pc = 0xBDB9u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBDB9u: /* LDA IMM A9 00 */
    c->pc = 0xBDBBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBDBBu: /* STA ABX 9D B8 03 */
    c->pc = 0xBDBEu;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xBDBEu: /* DEX IMP CA */
    c->pc = 0xBDBFu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xBDBFu: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBDC1u ^ 0xBDBBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBDBBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBDC1u; } return 1;
case 0xBDC1u: /* LDA IMM A9 09 */
    c->pc = 0xBDC3u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBDC3u: /* STA ZP 85 FD */
    c->pc = 0xBDC5u;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBDC5u: /* LDA IMM A9 24 */
    c->pc = 0xBDC7u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBDC7u: /* STA ABS 8D B6 03 */
    c->pc = 0xBDCAu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDCAu: /* LDA IMM A9 AB */
    c->pc = 0xBDCCu;
    v = 0xABu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBDCCu: /* STA ABS 8D B7 03 */
    c->pc = 0xBDCFu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDCFu: /* CLC IMP 18 */
    c->pc = 0xBDD0u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xBDD0u: /* LDA ABS AD B7 03 */
    c->pc = 0xBDD3u;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDD3u: /* ADC IMM 69 20 */
    c->pc = 0xBDD5u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBDD5u: /* STA ABS 8D B7 03 */
    c->pc = 0xBDD8u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDD8u: /* LDA ABS AD B6 03 */
    c->pc = 0xBDDBu;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDDBu: /* ADC IMM 69 00 */
    c->pc = 0xBDDDu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xBDDDu: /* STA ABS 8D B6 03 */
    c->pc = 0xBDE0u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDE0u: /* LDA IMM A9 0F */
    c->pc = 0xBDE2u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xBDE2u: /* STA ZP 85 47 */
    c->pc = 0xBDE4u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xBDE4u: /* JSR ABS 20 AB C0 */
    push(c, 0xBDu); push(c, 0xE6u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBDE7u: /* DEC ZP C6 FD */
    c->pc = 0xBDE9u;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBDE9u: /* BPL REL 10 E4 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xBDEBu ^ 0xBDCFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xBDCFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xBDEBu; } return 1;
case 0xBDEBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xBDECu: /* JSR ABS 20 34 BD */
    push(c, 0xBDu); push(c, 0xEEu); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBDEFu: /* JSR ABS 20 22 BD */
    push(c, 0xBDu); push(c, 0xF1u); c->pc = 0xBD22u; c->cpu_cycles += 6u; return 1;
case 0xBDF2u: /* JSR ABS 20 34 BD */
    push(c, 0xBDu); push(c, 0xF4u); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBDF5u: /* INC ABS EE B7 03 */
    c->pc = 0xBDF8u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBDF8u: /* LDX ZP A6 2A */
    c->pc = 0xBDFAu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xBDFAu: /* LDA ABS AD 20 04 */
    c->pc = 0xBDFDu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBDFDu: /* STA ABS 8D B8 03 */
    c->pc = 0xBE00u;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xBE00u: /* INC ZP E6 47 */
    c->pc = 0xBE02u;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xBE02u: /* JSR ABS 20 34 BD */
    push(c, 0xBEu); push(c, 0x04u); c->pc = 0xBD34u; c->cpu_cycles += 6u; return 1;
case 0xBE05u: /* JSR ABS 20 22 BD */
    push(c, 0xBEu); push(c, 0x07u); c->pc = 0xBD22u; c->cpu_cycles += 6u; return 1;
case 0xBE08u: /* INC ABS EE B7 03 */
    c->pc = 0xBE0Bu;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBE0Bu: /* INC ABS EE B7 03 */
    c->pc = 0xBE0Eu;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xBE0Eu: /* JSR ABS 20 AB C0 */
    push(c, 0xBEu); push(c, 0x10u); c->pc = 0xC0ABu; c->cpu_cycles += 6u; return 1;
case 0xBE11u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
    }
    return 0;
}
