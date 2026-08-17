/* Generated from the accepted v0.06 identity ledger. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_09(MM2DirectCore *c, uint16_t pc) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    switch (pc) {
case 0x8600u: /* JMP ABS 4C 0C 86 */
    c->pc = 0x860Cu; c->cpu_cycles += 3u; return 1;
case 0x8603u: /* JMP ABS 4C 37 86 */
    c->pc = 0x8637u; c->cpu_cycles += 3u; return 1;
case 0x8606u: /* JMP ABS 4C 78 86 */
    c->pc = 0x8678u; c->cpu_cycles += 3u; return 1;
case 0x8609u: /* JMP ABS 4C 81 86 */
    c->pc = 0x8681u; c->cpu_cycles += 3u; return 1;
case 0x860Cu: /* LDY ZP A4 01 */
    c->pc = 0x860Eu;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x860Eu: /* LDA ABY B9 00 87 */
    c->pc = 0x8611u;
    ea = (uint16_t)(0x8700u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8611u: /* STA ZP 85 08 */
    c->pc = 0x8613u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8613u: /* LDA ABY B9 08 87 */
    c->pc = 0x8616u;
    ea = (uint16_t)(0x8708u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8708u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8616u: /* STA ZP 85 09 */
    c->pc = 0x8618u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8618u: /* LDY IMM A0 00 */
    c->pc = 0x861Au;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x861Au: /* LDA IZY B1 08 */
    c->pc = 0x861Cu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x861Cu: /* STA ZP 85 02 */
    c->pc = 0x861Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x861Eu: /* INY IMP C8 */
    c->pc = 0x861Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x861Fu: /* LDX IMM A2 00 */
    c->pc = 0x8621u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8621u: /* LDA IMM A9 04 */
    c->pc = 0x8623u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8623u: /* STA ZP 85 01 */
    c->pc = 0x8625u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8625u: /* LDA IZY B1 08 */
    c->pc = 0x8627u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8627u: /* STA ABX 9D 00 02 */
    c->pc = 0x862Au;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x862Au: /* INY IMP C8 */
    c->pc = 0x862Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x862Bu: /* INX IMP E8 */
    c->pc = 0x862Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x862Cu: /* DEC ZP C6 01 */
    c->pc = 0x862Eu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x862Eu: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8630u ^ 0x8625u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8625u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8630u; } return 1;
case 0x8630u: /* DEC ZP C6 02 */
    c->pc = 0x8632u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8632u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8634u ^ 0x8621u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8621u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8634u; } return 1;
case 0x8634u: /* STX ZP 86 00 */
    c->pc = 0x8636u;
    ea = 0x00u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8636u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8637u: /* LDA ZP A5 1C */
    c->pc = 0x8639u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8639u: /* AND IMM 29 03 */
    c->pc = 0x863Bu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x863Bu: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x863Du ^ 0x8677u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8677u; }
    else { c->cpu_cycles += 2u; c->pc = 0x863Du; } return 1;
case 0x863Du: /* LDX ABS AE A0 06 */
    c->pc = 0x8640u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x8640u: /* LDA ABS AD 80 06 */
    c->pc = 0x8643u;
    ea = 0x0680u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8643u: /* TAY IMP A8 */
    c->pc = 0x8644u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8644u: /* CMP ABX DD D8 8A */
    c->pc = 0x8647u;
    ea = (uint16_t)(0x8AD8u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x8AD8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8647u: /* BEQ REL F0 15 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8649u ^ 0x865Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x865Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8649u; } return 1;
case 0x8649u: /* CLC IMP 18 */
    c->pc = 0x864Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x864Au: /* ADC ABX 7D C8 8A */
    c->pc = 0x864Du;
    ea = (uint16_t)(0x8AC8u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8AC8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x864Du: /* TAX IMP AA */
    c->pc = 0x864Eu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x864Eu: /* LDA ABX BD E8 8A */
    c->pc = 0x8651u;
    ea = (uint16_t)(0x8AE8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8AE8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8651u: /* STA ABS 8D B8 03 */
    c->pc = 0x8654u;
    ea = 0x03B8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8654u: /* INC ZP E6 47 */
    c->pc = 0x8656u;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8656u: /* INC ABS EE B7 03 */
    c->pc = 0x8659u;
    ea = 0x03B7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8659u: /* INC ABS EE 80 06 */
    c->pc = 0x865Cu;
    ea = 0x0680u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x865Cu: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x865Eu ^ 0x8677u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8677u; }
    else { c->cpu_cycles += 2u; c->pc = 0x865Eu; } return 1;
case 0x865Eu: /* LDA ABS AD A0 06 */
    c->pc = 0x8661u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8661u: /* AND IMM 29 01 */
    c->pc = 0x8663u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8663u: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8665u ^ 0x8677u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8677u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8665u; } return 1;
case 0x8665u: /* INC ABS EE A0 06 */
    c->pc = 0x8668u;
    ea = 0x06A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8668u: /* LDA IMM A9 00 */
    c->pc = 0x866Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x866Au: /* STA ABS 8D 80 06 */
    c->pc = 0x866Du;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x866Du: /* LDA IMM A9 25 */
    c->pc = 0x866Fu;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x866Fu: /* STA ABS 8D B6 03 */
    c->pc = 0x8672u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8672u: /* LDA IMM A9 CC */
    c->pc = 0x8674u;
    v = 0xCCu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8674u: /* STA ABS 8D B7 03 */
    c->pc = 0x8677u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8677u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8678u: /* LDA IMM A9 8C */
    c->pc = 0x867Au;
    v = 0x8Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x867Au: /* STA ZP 85 DF */
    c->pc = 0x867Cu;
    ea = 0xDFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x867Cu: /* LDA IMM A9 95 */
    c->pc = 0x867Eu;
    v = 0x95u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x867Eu: /* STA ZP 85 DE */
    c->pc = 0x8680u;
    ea = 0xDEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8680u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8681u: /* CLC IMP 18 */
    c->pc = 0x8682u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8682u: /* LDA ZP A5 21 */
    c->pc = 0x8684u;
    ea = 0x21u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8684u: /* ADC IMM 69 78 */
    c->pc = 0x8686u;
    v = 0x78u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8686u: /* STA ZP 85 21 */
    c->pc = 0x8688u;
    ea = 0x21u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8688u: /* LDA ZP A5 22 */
    c->pc = 0x868Au;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x868Au: /* ADC IMM 69 00 */
    c->pc = 0x868Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x868Cu: /* CMP IMM C9 F0 */
    c->pc = 0x868Eu;
    v = 0xF0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x868Eu: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8690u ^ 0x8692u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8692u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8690u; } return 1;
case 0x8690u: /* LDA IMM A9 00 */
    c->pc = 0x8692u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8692u: /* STA ZP 85 22 */
    c->pc = 0x8694u;
    ea = 0x22u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8694u: /* AND IMM 29 07 */
    c->pc = 0x8696u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8696u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8698u ^ 0x86AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8698u; } return 1;
case 0x8698u: /* SEC IMP 38 */
    c->pc = 0x8699u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8699u: /* LDA ZP A5 22 */
    c->pc = 0x869Bu;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x869Bu: /* STA ZP 85 01 */
    c->pc = 0x869Du;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x869Du: /* JSR ABS 20 EB 86 */
    push(c, 0x86u); push(c, 0x9Fu); c->pc = 0x86EBu; c->cpu_cycles += 6u; return 1;
case 0x86A0u: /* LDX IMM A2 20 */
    c->pc = 0x86A2u;
    v = 0x20u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86A2u: /* STX ZP 86 47 */
    c->pc = 0x86A4u;
    ea = 0x47u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x86A4u: /* DEX IMP CA */
    c->pc = 0x86A5u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86A5u: /* LDA IMM A9 00 */
    c->pc = 0x86A7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86A7u: /* STA ABX 9D B8 03 */
    c->pc = 0x86AAu;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x86AAu: /* DEX IMP CA */
    c->pc = 0x86ABu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86ABu: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x86ADu ^ 0x86A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86ADu; } return 1;
case 0x86ADu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x86AEu: /* LDX ABS AE A0 06 */
    c->pc = 0x86B1u;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x86B1u: /* LDA ZP A5 22 */
    c->pc = 0x86B3u;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86B3u: /* CMP ABX DD E0 8B */
    c->pc = 0x86B6u;
    ea = (uint16_t)(0x8BE0u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x8BE0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86B6u: /* BNE REL D0 32 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86B8u ^ 0x86EAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86EAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86B8u; } return 1;
case 0x86B8u: /* LDA ZP A5 22 */
    c->pc = 0x86BAu;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86BAu: /* AND IMM 29 F8 */
    c->pc = 0x86BCu;
    v = 0xF8u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86BCu: /* STA ZP 85 01 */
    c->pc = 0x86BEu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86BEu: /* JSR ABS 20 EB 86 */
    push(c, 0x86u); push(c, 0xC0u); c->pc = 0x86EBu; c->cpu_cycles += 6u; return 1;
case 0x86C1u: /* LDA ABX BD 1D 8C */
    c->pc = 0x86C4u;
    ea = (uint16_t)(0x8C1Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8C1Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86C4u: /* STA ABS 8D B7 03 */
    c->pc = 0x86C7u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86C7u: /* LDA ABX BD 59 8C */
    c->pc = 0x86CAu;
    ea = (uint16_t)(0x8C59u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8C59u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86CAu: /* STA ZP 85 47 */
    c->pc = 0x86CCu;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86CCu: /* LDY IMM A0 00 */
    c->pc = 0x86CEu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x86CEu: /* LDX IMM A2 00 */
    c->pc = 0x86D0u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86D0u: /* LDA IZY B1 DE */
    c->pc = 0x86D2u;
    ea = (uint16_t)(read16_zp(c, 0xDEu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xDEu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x86D2u: /* STA ABX 9D B8 03 */
    c->pc = 0x86D5u;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x86D5u: /* CLC IMP 18 */
    c->pc = 0x86D6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x86D6u: /* LDA ZP A5 DE */
    c->pc = 0x86D8u;
    ea = 0xDEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86D8u: /* ADC IMM 69 01 */
    c->pc = 0x86DAu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x86DAu: /* STA ZP 85 DE */
    c->pc = 0x86DCu;
    ea = 0xDEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86DCu: /* LDA ZP A5 DF */
    c->pc = 0x86DEu;
    ea = 0xDFu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86DEu: /* ADC IMM 69 00 */
    c->pc = 0x86E0u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x86E0u: /* STA ZP 85 DF */
    c->pc = 0x86E2u;
    ea = 0xDFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86E2u: /* INX IMP E8 */
    c->pc = 0x86E3u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86E3u: /* CPX ZP E4 47 */
    c->pc = 0x86E5u;
    ea = 0x47u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x86E5u: /* BNE REL D0 E9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86E7u ^ 0x86D0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86D0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86E7u; } return 1;
case 0x86E7u: /* INC ABS EE A0 06 */
    c->pc = 0x86EAu;
    ea = 0x06A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x86EAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x86EBu: /* LDA IMM A9 08 */
    c->pc = 0x86EDu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86EDu: /* STA ZP 85 00 */
    c->pc = 0x86EFu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86EFu: /* LDA ZP A5 01 */
    c->pc = 0x86F1u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86F1u: /* ASL IMP 0A */
    c->pc = 0x86F2u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86F2u: /* ROL ZP 26 00 */
    c->pc = 0x86F4u;
    ea = 0x00u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x86F4u: /* ASL IMP 0A */
    c->pc = 0x86F5u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86F5u: /* ROL ZP 26 00 */
    c->pc = 0x86F7u;
    ea = 0x00u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x86F7u: /* STA ABS 8D B7 03 */
    c->pc = 0x86FAu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86FAu: /* LDA ZP A5 00 */
    c->pc = 0x86FCu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86FCu: /* STA ABS 8D B6 03 */
    c->pc = 0x86FFu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86FFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
    }
    return 0;
}
