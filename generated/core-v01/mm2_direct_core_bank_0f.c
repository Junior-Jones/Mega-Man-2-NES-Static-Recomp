/* Generated from the accepted v0.06 identity ledger. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_0f(MM2DirectCore *c, uint16_t pc) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    switch (pc) {
case 0xC000u: /* STA ZP 85 29 */
    c->pc = 0xC002u;
    ea = 0x29u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC002u: /* STA ZP 85 69 */
    c->pc = 0xC004u;
    ea = 0x69u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC004u: /* INC ZP E6 68 */
    c->pc = 0xC006u;
    ea = 0x68u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC006u: /* STA ABS 8D F0 FF */
    c->pc = 0xC009u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC009u: /* LSR IMP 4A */
    c->pc = 0xC00Au;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC00Au: /* STA ABS 8D F0 FF */
    c->pc = 0xC00Du;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC00Du: /* LSR IMP 4A */
    c->pc = 0xC00Eu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC00Eu: /* STA ABS 8D F0 FF */
    c->pc = 0xC011u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC011u: /* LSR IMP 4A */
    c->pc = 0xC012u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC012u: /* STA ABS 8D F0 FF */
    c->pc = 0xC015u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC015u: /* LSR IMP 4A */
    c->pc = 0xC016u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC016u: /* STA ABS 8D F0 FF */
    c->pc = 0xC019u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC019u: /* LDA IMM A9 00 */
    c->pc = 0xC01Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC01Bu: /* STA ZP 85 68 */
    c->pc = 0xC01Du;
    ea = 0x68u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC01Du: /* LDA ZP A5 67 */
    c->pc = 0xC01Fu;
    ea = 0x67u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC01Fu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC021u ^ 0xC022u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC022u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC021u; } return 1;
case 0xC021u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC022u: /* LDA IMM A9 0C */
    c->pc = 0xC024u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC024u: /* STA ABS 8D F0 FF */
    c->pc = 0xC027u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC027u: /* LSR IMP 4A */
    c->pc = 0xC028u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC028u: /* STA ABS 8D F0 FF */
    c->pc = 0xC02Bu;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC02Bu: /* LSR IMP 4A */
    c->pc = 0xC02Cu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC02Cu: /* STA ABS 8D F0 FF */
    c->pc = 0xC02Fu;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC02Fu: /* LSR IMP 4A */
    c->pc = 0xC030u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC030u: /* STA ABS 8D F0 FF */
    c->pc = 0xC033u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC033u: /* LSR IMP 4A */
    c->pc = 0xC034u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC034u: /* STA ABS 8D F0 FF */
    c->pc = 0xC037u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC037u: /* JSR ABS 20 00 80 */
    push(c, 0xC0u); push(c, 0x39u); c->pc = 0x8000u; c->cpu_cycles += 6u; return 1;
case 0xC03Au: /* LDX ZP A6 66 */
    c->pc = 0xC03Cu;
    ea = 0x66u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC03Cu: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC03Eu ^ 0xC048u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC048u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC03Eu; } return 1;
case 0xC03Eu: /* LDA ABX BD 7F 05 */
    c->pc = 0xC041u;
    ea = (uint16_t)(0x057Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x057Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC041u: /* JSR ABS 20 03 80 */
    push(c, 0xC0u); push(c, 0x43u); c->pc = 0x8003u; c->cpu_cycles += 6u; return 1;
case 0xC044u: /* DEC ZP C6 66 */
    c->pc = 0xC046u;
    ea = 0x66u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC046u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC048u ^ 0xC03Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC03Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xC048u; } return 1;
case 0xC048u: /* LDA IMM A9 00 */
    c->pc = 0xC04Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC04Au: /* STA ZP 85 67 */
    c->pc = 0xC04Cu;
    ea = 0x67u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC04Cu: /* LDA ZP A5 69 */
    c->pc = 0xC04Eu;
    ea = 0x69u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC04Eu: /* JMP ABS 4C 00 C0 */
    c->pc = 0xC000u; c->cpu_cycles += 3u; return 1;
case 0xC051u: /* LDY ZP A4 66 */
    c->pc = 0xC053u;
    ea = 0x66u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC053u: /* CPY IMM C0 10 */
    c->pc = 0xC055u;
    v = 0x10u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xC055u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xC057u ^ 0xC05Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC05Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC057u; } return 1;
case 0xC057u: /* STA ABY 99 80 05 */
    c->pc = 0xC05Au;
    ea = (uint16_t)(0x0580u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC05Au: /* INC ZP E6 66 */
    c->pc = 0xC05Cu;
    ea = 0x66u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC05Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC05Du: /* STA ABS 8D FF 9F */
    c->pc = 0xC060u;
    ea = 0x9FFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC060u: /* LSR IMP 4A */
    c->pc = 0xC061u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC061u: /* STA ABS 8D FF 9F */
    c->pc = 0xC064u;
    ea = 0x9FFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC064u: /* LSR IMP 4A */
    c->pc = 0xC065u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC065u: /* STA ABS 8D FF 9F */
    c->pc = 0xC068u;
    ea = 0x9FFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC068u: /* LSR IMP 4A */
    c->pc = 0xC069u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC069u: /* STA ABS 8D FF 9F */
    c->pc = 0xC06Cu;
    ea = 0x9FFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC06Cu: /* LSR IMP 4A */
    c->pc = 0xC06Du;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC06Du: /* STA ABS 8D FF 9F */
    c->pc = 0xC070u;
    ea = 0x9FFFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC070u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC071u: /* LDA IMM A9 0D */
    c->pc = 0xC073u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC073u: /* JSR ABS 20 00 C0 */
    push(c, 0xC0u); push(c, 0x75u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC076u: /* JSR ABS 20 06 80 */
    push(c, 0xC0u); push(c, 0x78u); c->pc = 0x8006u; c->cpu_cycles += 6u; return 1;
case 0xC079u: /* LDA IMM A9 0E */
    c->pc = 0xC07Bu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC07Bu: /* JSR ABS 20 00 C0 */
    push(c, 0xC0u); push(c, 0x7Du); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC07Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC07Fu: /* LDA ZP A5 23 */
    c->pc = 0xC081u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC081u: /* STA ZP 85 25 */
    c->pc = 0xC083u;
    ea = 0x25u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC083u: /* LDA ZP A5 24 */
    c->pc = 0xC085u;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC085u: /* STA ZP 85 26 */
    c->pc = 0xC087u;
    ea = 0x26u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC087u: /* JSR ABS 20 27 C4 */
    push(c, 0xC0u); push(c, 0x89u); c->pc = 0xC427u; c->cpu_cycles += 6u; return 1;
case 0xC08Au: /* LDA IMM A9 00 */
    c->pc = 0xC08Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC08Cu: /* STA ZP 85 1D */
    c->pc = 0xC08Eu;
    ea = 0x1Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC08Eu: /* LDA ZP A5 1D */
    c->pc = 0xC090u;
    ea = 0x1Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC090u: /* BEQ REL F0 FC */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC092u ^ 0xC08Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC08Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC092u; } return 1;
case 0xC092u: /* JSR ABS 20 D7 D0 */
    push(c, 0xC0u); push(c, 0x94u); c->pc = 0xD0D7u; c->cpu_cycles += 6u; return 1;
case 0xC095u: /* LDA ZP A5 23 */
    c->pc = 0xC097u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC097u: /* EOR ZP 45 25 */
    c->pc = 0xC099u;
    ea = 0x25u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC099u: /* AND ZP 25 23 */
    c->pc = 0xC09Bu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC09Bu: /* STA ZP 85 27 */
    c->pc = 0xC09Du;
    ea = 0x27u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC09Du: /* LDA ZP A5 24 */
    c->pc = 0xC09Fu;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC09Fu: /* EOR ZP 45 26 */
    c->pc = 0xC0A1u;
    ea = 0x26u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0A1u: /* AND ZP 25 24 */
    c->pc = 0xC0A3u;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0A3u: /* STA ZP 85 28 */
    c->pc = 0xC0A5u;
    ea = 0x28u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0A5u: /* LDA IMM A9 0E */
    c->pc = 0xC0A7u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC0A7u: /* JSR ABS 20 00 C0 */
    push(c, 0xC0u); push(c, 0xA9u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC0AAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC0ABu: /* LDA ZP A5 23 */
    c->pc = 0xC0ADu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0ADu: /* STA ZP 85 25 */
    c->pc = 0xC0AFu;
    ea = 0x25u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0AFu: /* LDA ZP A5 24 */
    c->pc = 0xC0B1u;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0B1u: /* STA ZP 85 26 */
    c->pc = 0xC0B3u;
    ea = 0x26u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0B3u: /* JSR ABS 20 27 C4 */
    push(c, 0xC0u); push(c, 0xB5u); c->pc = 0xC427u; c->cpu_cycles += 6u; return 1;
case 0xC0B6u: /* LDA IMM A9 00 */
    c->pc = 0xC0B8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC0B8u: /* STA ZP 85 1D */
    c->pc = 0xC0BAu;
    ea = 0x1Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0BAu: /* LDA ZP A5 1D */
    c->pc = 0xC0BCu;
    ea = 0x1Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0BCu: /* BEQ REL F0 FC */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC0BEu ^ 0xC0BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC0BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC0BEu; } return 1;
case 0xC0BEu: /* JSR ABS 20 D7 D0 */
    push(c, 0xC0u); push(c, 0xC0u); c->pc = 0xD0D7u; c->cpu_cycles += 6u; return 1;
case 0xC0C1u: /* LDA ZP A5 23 */
    c->pc = 0xC0C3u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0C3u: /* EOR ZP 45 25 */
    c->pc = 0xC0C5u;
    ea = 0x25u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0C5u: /* AND ZP 25 23 */
    c->pc = 0xC0C7u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0C7u: /* STA ZP 85 27 */
    c->pc = 0xC0C9u;
    ea = 0x27u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0C9u: /* LDA ZP A5 24 */
    c->pc = 0xC0CBu;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0CBu: /* EOR ZP 45 26 */
    c->pc = 0xC0CDu;
    ea = 0x26u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0CDu: /* AND ZP 25 24 */
    c->pc = 0xC0CFu;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0CFu: /* STA ZP 85 28 */
    c->pc = 0xC0D1u;
    ea = 0x28u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0D1u: /* LDA IMM A9 0D */
    c->pc = 0xC0D3u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC0D3u: /* JSR ABS 20 00 C0 */
    push(c, 0xC0u); push(c, 0xD5u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC0D6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC0D7u: /* LDA ZP A5 23 */
    c->pc = 0xC0D9u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0D9u: /* PHA IMP 48 */
    c->pc = 0xC0DAu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0DAu: /* LDA ZP A5 24 */
    c->pc = 0xC0DCu;
    ea = 0x24u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0DCu: /* PHA IMP 48 */
    c->pc = 0xC0DDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0DDu: /* LDA ZP A5 27 */
    c->pc = 0xC0DFu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0DFu: /* PHA IMP 48 */
    c->pc = 0xC0E0u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0E0u: /* LDA IMM A9 1E */
    c->pc = 0xC0E2u;
    v = 0x1Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC0E2u: /* ORA ZP 05 F8 */
    c->pc = 0xC0E4u;
    ea = 0xF8u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0E4u: /* STA ZP 85 F8 */
    c->pc = 0xC0E6u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0E6u: /* STA ABS 8D 01 20 */
    c->pc = 0xC0E9u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC0E9u: /* LDA IMM A9 00 */
    c->pc = 0xC0EBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC0EBu: /* STA ZP 85 1D */
    c->pc = 0xC0EDu;
    ea = 0x1Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0EDu: /* LDA ZP A5 1D */
    c->pc = 0xC0EFu;
    ea = 0x1Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0EFu: /* BEQ REL F0 FC */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC0F1u ^ 0xC0EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC0EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC0F1u; } return 1;
case 0xC0F1u: /* PLA IMP 68 */
    c->pc = 0xC0F2u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC0F2u: /* STA ZP 85 27 */
    c->pc = 0xC0F4u;
    ea = 0x27u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0F4u: /* PLA IMP 68 */
    c->pc = 0xC0F5u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC0F5u: /* STA ZP 85 24 */
    c->pc = 0xC0F7u;
    ea = 0x24u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0F7u: /* PLA IMP 68 */
    c->pc = 0xC0F8u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC0F8u: /* STA ZP 85 23 */
    c->pc = 0xC0FAu;
    ea = 0x23u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC0FAu: /* LDA IMM A9 0E */
    c->pc = 0xC0FCu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC0FCu: /* JSR ABS 20 00 C0 */
    push(c, 0xC0u); push(c, 0xFEu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC0FFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC10Bu: /* LDA IMM A9 41 */
    c->pc = 0xC10Du;
    v = 0x41u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC10Du: /* JSR ABS 20 51 C0 */
    push(c, 0xC1u); push(c, 0x0Fu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xC110u: /* LDA IMM A9 FF */
    c->pc = 0xC112u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC112u: /* JSR ABS 20 51 C0 */
    push(c, 0xC1u); push(c, 0x14u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xC115u: /* LDA ZP A5 2C */
    c->pc = 0xC117u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC117u: /* BNE REL D0 65 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC119u ^ 0xC17Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC17Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC119u; } return 1;
case 0xC119u: /* STA ZP 85 36 */
    c->pc = 0xC11Bu;
    ea = 0x36u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC11Bu: /* AND IMM 29 01 */
    c->pc = 0xC11Du;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC11Du: /* BNE REL D0 47 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC11Fu ^ 0xC166u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC166u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC11Fu; } return 1;
case 0xC11Fu: /* LDA ZP A5 36 */
    c->pc = 0xC121u;
    ea = 0x36u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC121u: /* AND IMM 29 07 */
    c->pc = 0xC123u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC123u: /* TAX IMP AA */
    c->pc = 0xC124u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC124u: /* LDY IMM A0 01 */
    c->pc = 0xC126u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC126u: /* LDA IMM A9 25 */
    c->pc = 0xC128u;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC128u: /* STA ABY 99 0E 04 */
    c->pc = 0xC12Bu;
    ea = (uint16_t)(0x040Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC12Bu: /* LDA IMM A9 80 */
    c->pc = 0xC12Du;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC12Du: /* STA ABY 99 2E 04 */
    c->pc = 0xC130u;
    ea = (uint16_t)(0x042Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC130u: /* CLC IMP 18 */
    c->pc = 0xC131u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC131u: /* LDA ABS AD 60 04 */
    c->pc = 0xC134u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC134u: /* ADC ABX 7D E0 C1 */
    c->pc = 0xC137u;
    ea = (uint16_t)(0xC1E0u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xC1E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC137u: /* STA ABY 99 6E 04 */
    c->pc = 0xC13Au;
    ea = (uint16_t)(0x046Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC13Au: /* LDA ABS AD 40 04 */
    c->pc = 0xC13Du;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC13Du: /* ADC ABX 7D E8 C1 */
    c->pc = 0xC140u;
    ea = (uint16_t)(0xC1E8u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xC1E8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC140u: /* STA ABY 99 4E 04 */
    c->pc = 0xC143u;
    ea = (uint16_t)(0x044Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC143u: /* LDA ABS AD A0 04 */
    c->pc = 0xC146u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC146u: /* ADC ABX 7D D8 C1 */
    c->pc = 0xC149u;
    ea = (uint16_t)(0xC1D8u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xC1D8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC149u: /* STA ABY 99 AE 04 */
    c->pc = 0xC14Cu;
    ea = (uint16_t)(0x04AEu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC14Cu: /* LDA IMM A9 01 */
    c->pc = 0xC14Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC14Eu: /* STA ABY 99 AE 06 */
    c->pc = 0xC151u;
    ea = (uint16_t)(0x06AEu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC151u: /* LDA IMM A9 00 */
    c->pc = 0xC153u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC153u: /* STA ABY 99 2E 06 */
    c->pc = 0xC156u;
    ea = (uint16_t)(0x062Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC156u: /* STA ABY 99 0E 06 */
    c->pc = 0xC159u;
    ea = (uint16_t)(0x060Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC159u: /* STA ABY 99 6E 06 */
    c->pc = 0xC15Cu;
    ea = (uint16_t)(0x066Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC15Cu: /* STA ABY 99 4E 06 */
    c->pc = 0xC15Fu;
    ea = (uint16_t)(0x064Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC15Fu: /* STA ABY 99 8E 06 */
    c->pc = 0xC162u;
    ea = (uint16_t)(0x068Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC162u: /* INX IMP E8 */
    c->pc = 0xC163u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC163u: /* DEY IMP 88 */
    c->pc = 0xC164u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC164u: /* BPL REL 10 C0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC166u ^ 0xC126u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC126u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC166u; } return 1;
case 0xC166u: /* JSR ABS 20 52 C3 */
    push(c, 0xC1u); push(c, 0x68u); c->pc = 0xC352u; c->cpu_cycles += 6u; return 1;
case 0xC169u: /* INC ZP E6 36 */
    c->pc = 0xC16Bu;
    ea = 0x36u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC16Bu: /* LDA ZP A5 36 */
    c->pc = 0xC16Du;
    ea = 0x36u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC16Du: /* CMP IMM C9 10 */
    c->pc = 0xC16Fu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC16Fu: /* BCC REL 90 AA */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC171u ^ 0xC11Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC11Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC171u; } return 1;
case 0xC171u: /* LSR ABS 4E 2E 04 */
    c->pc = 0xC174u;
    ea = 0x042Eu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xC174u: /* LSR ABS 4E 2F 04 */
    c->pc = 0xC177u;
    ea = 0x042Fu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xC177u: /* JSR ABS 20 93 C3 */
    push(c, 0xC1u); push(c, 0x79u); c->pc = 0xC393u; c->cpu_cycles += 6u; return 1;
case 0xC17Au: /* LDA IMM A9 A0 */
    c->pc = 0xC17Cu;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC17Cu: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC17Eu ^ 0xC180u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC180u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC17Eu; } return 1;
case 0xC17Eu: /* LDA IMM A9 E0 */
    c->pc = 0xC180u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC180u: /* STA ZP 85 36 */
    c->pc = 0xC182u;
    ea = 0x36u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC182u: /* LSR ABS 4E 20 04 */
    c->pc = 0xC185u;
    ea = 0x0420u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xC185u: /* JSR ABS 20 52 C3 */
    push(c, 0xC1u); push(c, 0x87u); c->pc = 0xC352u; c->cpu_cycles += 6u; return 1;
case 0xC188u: /* DEC ZP C6 36 */
    c->pc = 0xC18Au;
    ea = 0x36u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC18Au: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC18Cu ^ 0xC182u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC182u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC18Cu; } return 1;
case 0xC18Cu: /* LDA IMM A9 10 */
    c->pc = 0xC18Eu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC18Eu: /* STA ABS 8D 00 20 */
    c->pc = 0xC191u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC191u: /* LDA IMM A9 06 */
    c->pc = 0xC193u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC193u: /* STA ABS 8D 01 20 */
    c->pc = 0xC196u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC196u: /* LDA ZP A5 2A */
    c->pc = 0xC198u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC198u: /* AND IMM 29 07 */
    c->pc = 0xC19Au;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC19Au: /* JSR ABS 20 00 C0 */
    push(c, 0xC1u); push(c, 0x9Cu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC19Du: /* LDX IMM A2 00 */
    c->pc = 0xC19Fu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC19Fu: /* LDA ABS AD 40 04 */
    c->pc = 0xC1A2u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC1A2u: /* CMP ABX DD 07 BB */
    c->pc = 0xC1A5u;
    ea = (uint16_t)(0xBB07u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xBB07u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC1A5u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC1A7u ^ 0xC1ACu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC1ACu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC1A7u; } return 1;
case 0xC1A7u: /* INX IMP E8 */
    c->pc = 0xC1A8u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC1A8u: /* CPX IMM E0 05 */
    c->pc = 0xC1AAu;
    v = 0x05u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xC1AAu: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC1ACu ^ 0xC1A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC1A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC1ACu; } return 1;
case 0xC1ACu: /* STX ZP 86 B0 */
    c->pc = 0xC1AEu;
    ea = 0xB0u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC1AEu: /* LDX IMM A2 FF */
    c->pc = 0xC1B0u;
    v = 0xFFu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC1B0u: /* TXS IMP 9A */
    c->pc = 0xC1B1u;
    c->s = c->x;
    c->cpu_cycles += 2u; return 1;
case 0xC1B1u: /* LDA IMM A9 0E */
    c->pc = 0xC1B3u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC1B3u: /* JSR ABS 20 00 C0 */
    push(c, 0xC1u); push(c, 0xB5u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC1B6u: /* DEC ZP C6 A8 */
    c->pc = 0xC1B8u;
    ea = 0xA8u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC1B8u: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC1BAu ^ 0xC1D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC1D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC1BAu; } return 1;
case 0xC1BAu: /* LDA IMM A9 00 */
    c->pc = 0xC1BCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC1BCu: /* STA ZP 85 A7 */
    c->pc = 0xC1BEu;
    ea = 0xA7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC1BEu: /* LDA IMM A9 0D */
    c->pc = 0xC1C0u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC1C0u: /* JSR ABS 20 00 C0 */
    push(c, 0xC1u); push(c, 0xC2u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC1C3u: /* JSR ABS 20 0C 80 */
    push(c, 0xC1u); push(c, 0xC5u); c->pc = 0x800Cu; c->cpu_cycles += 6u; return 1;
case 0xC1C6u: /* LDA IMM A9 0E */
    c->pc = 0xC1C8u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC1C8u: /* JSR ABS 20 00 C0 */
    push(c, 0xC1u); push(c, 0xCAu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC1CBu: /* LDA ZP A5 FD */
    c->pc = 0xC1CDu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC1CDu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC1CFu ^ 0xC1D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC1D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC1CFu; } return 1;
case 0xC1CFu: /* JMP ABS 4C 88 80 */
    c->pc = 0x8088u; c->cpu_cycles += 3u; return 1;
case 0xC1D2u: /* JMP ABS 4C 72 80 */
    c->pc = 0x8072u; c->cpu_cycles += 3u; return 1;
case 0xC1D5u: /* JMP ABS 4C AB 80 */
    c->pc = 0x80ABu; c->cpu_cycles += 3u; return 1;
case 0xC1F0u: /* JSR ABS 20 89 C2 */
    push(c, 0xC1u); push(c, 0xF2u); c->pc = 0xC289u; c->cpu_cycles += 6u; return 1;
case 0xC1F3u: /* INC ZP E6 BD */
    c->pc = 0xC1F5u;
    ea = 0xBDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC1F5u: /* JSR ABS 20 19 C8 */
    push(c, 0xC1u); push(c, 0xF7u); c->pc = 0xC819u; c->cpu_cycles += 6u; return 1;
case 0xC1F8u: /* LDA ZP A5 2A */
    c->pc = 0xC1FAu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC1FAu: /* CMP IMM C9 08 */
    c->pc = 0xC1FCu;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC1FCu: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC1FEu ^ 0xC20Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC20Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC1FEu; } return 1;
case 0xC1FEu: /* LDA ZP A5 37 */
    c->pc = 0xC200u;
    ea = 0x37u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC200u: /* CMP IMM C9 03 */
    c->pc = 0xC202u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC202u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC204u ^ 0xC20Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC20Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC204u; } return 1;
case 0xC204u: /* LDA IMM A9 00 */
    c->pc = 0xC206u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC206u: /* STA ZP 85 BD */
    c->pc = 0xC208u;
    ea = 0xBDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC208u: /* LDA IMM A9 01 */
    c->pc = 0xC20Au;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC20Au: /* STA ZP 85 2C */
    c->pc = 0xC20Cu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC20Cu: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0xC20Fu: /* LDA ZP A5 B1 */
    c->pc = 0xC211u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC211u: /* CMP IMM C9 FF */
    c->pc = 0xC213u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC213u: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC215u ^ 0xC1F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC1F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC215u; } return 1;
case 0xC215u: /* LDA IMM A9 00 */
    c->pc = 0xC217u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC217u: /* STA ZP 85 BD */
    c->pc = 0xC219u;
    ea = 0xBDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC219u: /* LDA IMM A9 10 */
    c->pc = 0xC21Bu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC21Bu: /* STA ZP 85 F7 */
    c->pc = 0xC21Du;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC21Du: /* STA ABS 8D 00 20 */
    c->pc = 0xC220u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC220u: /* LDA IMM A9 06 */
    c->pc = 0xC222u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC222u: /* STA ZP 85 F8 */
    c->pc = 0xC224u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC224u: /* STA ABS 8D 01 20 */
    c->pc = 0xC227u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC227u: /* LDA IMM A9 00 */
    c->pc = 0xC229u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC229u: /* STA ZP 85 B0 */
    c->pc = 0xC22Bu;
    ea = 0xB0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC22Bu: /* LDX IMM A2 FF */
    c->pc = 0xC22Du;
    v = 0xFFu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC22Du: /* TXS IMP 9A */
    c->pc = 0xC22Eu;
    c->s = c->x;
    c->cpu_cycles += 2u; return 1;
case 0xC22Eu: /* LDA IMM A9 0E */
    c->pc = 0xC230u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC230u: /* JSR ABS 20 00 C0 */
    push(c, 0xC2u); push(c, 0x32u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC233u: /* LDX ZP A6 2A */
    c->pc = 0xC235u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC235u: /* CPX IMM E0 08 */
    c->pc = 0xC237u;
    v = 0x08u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xC237u: /* BCS REL B0 28 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xC239u ^ 0xC261u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC261u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC239u; } return 1;
case 0xC239u: /* LDA ABX BD 79 C2 */
    c->pc = 0xC23Cu;
    ea = (uint16_t)(0xC279u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC279u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC23Cu: /* ORA ZP 05 9A */
    c->pc = 0xC23Eu;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC23Eu: /* STA ZP 85 9A */
    c->pc = 0xC240u;
    ea = 0x9Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC240u: /* LDA ABX BD 81 C2 */
    c->pc = 0xC243u;
    ea = (uint16_t)(0xC281u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC281u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC243u: /* ORA ZP 05 9B */
    c->pc = 0xC245u;
    ea = 0x9Bu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC245u: /* STA ZP 85 9B */
    c->pc = 0xC247u;
    ea = 0x9Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC247u: /* LDA IMM A9 0D */
    c->pc = 0xC249u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC249u: /* JSR ABS 20 00 C0 */
    push(c, 0xC2u); push(c, 0x4Bu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC24Cu: /* JSR ABS 20 12 80 */
    push(c, 0xC2u); push(c, 0x4Eu); c->pc = 0x8012u; c->cpu_cycles += 6u; return 1;
case 0xC24Fu: /* LDA IMM A9 0E */
    c->pc = 0xC251u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC251u: /* JSR ABS 20 00 C0 */
    push(c, 0xC2u); push(c, 0x53u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC254u: /* LDA ZP A5 9A */
    c->pc = 0xC256u;
    ea = 0x9Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC256u: /* CMP IMM C9 FF */
    c->pc = 0xC258u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC258u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC25Au ^ 0xC25Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC25Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xC25Au; } return 1;
case 0xC25Au: /* JMP ABS 4C 76 80 */
    c->pc = 0x8076u; c->cpu_cycles += 3u; return 1;
case 0xC25Du: /* LDA IMM A9 07 */
    c->pc = 0xC25Fu;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC25Fu: /* STA ZP 85 2A */
    c->pc = 0xC261u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC261u: /* INC ZP E6 2A */
    c->pc = 0xC263u;
    ea = 0x2Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC263u: /* LDA ZP A5 2A */
    c->pc = 0xC265u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC265u: /* CMP IMM C9 0E */
    c->pc = 0xC267u;
    v = 0x0Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC267u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC269u ^ 0xC276u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC276u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC269u; } return 1;
case 0xC269u: /* LDA IMM A9 0D */
    c->pc = 0xC26Bu;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC26Bu: /* JSR ABS 20 00 C0 */
    push(c, 0xC2u); push(c, 0x6Du); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC26Eu: /* JSR ABS 20 0F 80 */
    push(c, 0xC2u); push(c, 0x70u); c->pc = 0x800Fu; c->cpu_cycles += 6u; return 1;
case 0xC271u: /* LDA IMM A9 0E */
    c->pc = 0xC273u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC273u: /* JMP ABS 4C D1 F2 */
    c->pc = 0xF2D1u; c->cpu_cycles += 3u; return 1;
case 0xC276u: /* JMP ABS 4C 79 80 */
    c->pc = 0x8079u; c->cpu_cycles += 3u; return 1;
case 0xC289u: /* LDA IMM A9 00 */
    c->pc = 0xC28Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC28Bu: /* STA ABS 8D AA 05 */
    c->pc = 0xC28Eu;
    ea = 0x05AAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC28Eu: /* STA ABS 8D A7 05 */
    c->pc = 0xC291u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC291u: /* STA ABS 8D A9 05 */
    c->pc = 0xC294u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC294u: /* STA ABS 8D A8 05 */
    c->pc = 0xC297u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC297u: /* STA ZP 85 AA */
    c->pc = 0xC299u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC299u: /* LDA IMM A9 FE */
    c->pc = 0xC29Bu;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC29Bu: /* STA ZP 85 B1 */
    c->pc = 0xC29Du;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC29Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC352u: /* LDA IMM A9 0E */
    c->pc = 0xC354u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC354u: /* JSR ABS 20 00 C0 */
    push(c, 0xC3u); push(c, 0x56u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC357u: /* LDA IMM A9 00 */
    c->pc = 0xC359u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC359u: /* STA ABS 8D 80 06 */
    c->pc = 0xC35Cu;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC35Cu: /* LDA IMM A9 01 */
    c->pc = 0xC35Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC35Eu: /* STA ZP 85 4B */
    c->pc = 0xC360u;
    ea = 0x4Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC360u: /* JSR ABS 20 D0 DC */
    push(c, 0xC3u); push(c, 0x62u); c->pc = 0xDCD0u; c->cpu_cycles += 6u; return 1;
case 0xC363u: /* JSR ABS 20 58 D6 */
    push(c, 0xC3u); push(c, 0x65u); c->pc = 0xD658u; c->cpu_cycles += 6u; return 1;
case 0xC366u: /* JSR ABS 20 A9 C5 */
    push(c, 0xC3u); push(c, 0x68u); c->pc = 0xC5A9u; c->cpu_cycles += 6u; return 1;
case 0xC369u: /* JSR ABS 20 5B 92 */
    push(c, 0xC3u); push(c, 0x6Bu); c->pc = 0x925Bu; c->cpu_cycles += 6u; return 1;
case 0xC36Cu: /* JSR ABS 20 77 CC */
    push(c, 0xC3u); push(c, 0x6Eu); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0xC36Fu: /* LDA ZP A5 FB */
    c->pc = 0xC371u;
    ea = 0xFBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC371u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC373u ^ 0xC382u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC382u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC373u; } return 1;
case 0xC373u: /* INC ZP E6 FC */
    c->pc = 0xC375u;
    ea = 0xFCu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC375u: /* CMP ZP C5 FC */
    c->pc = 0xC377u;
    ea = 0xFCu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xC377u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC379u ^ 0xC37Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC37Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC379u; } return 1;
case 0xC379u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xC37Bu ^ 0xC382u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC382u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC37Bu; } return 1;
case 0xC37Bu: /* JSR ABS 20 D7 C0 */
    push(c, 0xC3u); push(c, 0x7Du); c->pc = 0xC0D7u; c->cpu_cycles += 6u; return 1;
case 0xC37Eu: /* LDA IMM A9 00 */
    c->pc = 0xC380u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC380u: /* STA ZP 85 FC */
    c->pc = 0xC382u;
    ea = 0xFCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC382u: /* JSR ABS 20 7F C0 */
    push(c, 0xC3u); push(c, 0x84u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0xC385u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC393u: /* LDA ABS AD 40 04 */
    c->pc = 0xC396u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC396u: /* STA ZP 85 09 */
    c->pc = 0xC398u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC398u: /* LDA ABS AD 60 04 */
    c->pc = 0xC39Bu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC39Bu: /* STA ZP 85 08 */
    c->pc = 0xC39Du;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC39Du: /* LDA ABS AD A0 04 */
    c->pc = 0xC3A0u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC3A0u: /* STA ZP 85 0A */
    c->pc = 0xC3A2u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC3A2u: /* LDA IMM A9 25 */
    c->pc = 0xC3A4u;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC3A4u: /* STA ZP 85 0B */
    c->pc = 0xC3A6u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC3A6u: /* LDX IMM A2 0D */
    c->pc = 0xC3A8u;
    v = 0x0Du;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC3A8u: /* LDY IMM A0 0B */
    c->pc = 0xC3AAu;
    v = 0x0Bu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC3AAu: /* LDA IMM A9 80 */
    c->pc = 0xC3ACu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC3ACu: /* ORA ABY 19 1B C4 */
    c->pc = 0xC3AFu;
    ea = (uint16_t)(0xC41Bu + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC41Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC3AFu: /* STA ABX 9D 20 04 */
    c->pc = 0xC3B2u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3B2u: /* LDA ZP A5 0B */
    c->pc = 0xC3B4u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC3B4u: /* STA ABX 9D 00 04 */
    c->pc = 0xC3B7u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3B7u: /* LDA ZP A5 09 */
    c->pc = 0xC3B9u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC3B9u: /* STA ABX 9D 40 04 */
    c->pc = 0xC3BCu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3BCu: /* LDA ZP A5 08 */
    c->pc = 0xC3BEu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC3BEu: /* STA ABX 9D 60 04 */
    c->pc = 0xC3C1u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3C1u: /* LDA ZP A5 0A */
    c->pc = 0xC3C3u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC3C3u: /* STA ABX 9D A0 04 */
    c->pc = 0xC3C6u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3C6u: /* LDA ABY B9 EB C3 */
    c->pc = 0xC3C9u;
    ea = (uint16_t)(0xC3EBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC3EBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC3C9u: /* STA ABX 9D 20 06 */
    c->pc = 0xC3CCu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3CCu: /* LDA ABY B9 F7 C3 */
    c->pc = 0xC3CFu;
    ea = (uint16_t)(0xC3F7u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC3F7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC3CFu: /* STA ABX 9D 00 06 */
    c->pc = 0xC3D2u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3D2u: /* LDA ABY B9 03 C4 */
    c->pc = 0xC3D5u;
    ea = (uint16_t)(0xC403u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC403u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC3D5u: /* STA ABX 9D 60 06 */
    c->pc = 0xC3D8u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3D8u: /* LDA ABY B9 0F C4 */
    c->pc = 0xC3DBu;
    ea = (uint16_t)(0xC40Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC40Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC3DBu: /* STA ABX 9D 40 06 */
    c->pc = 0xC3DEu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3DEu: /* LDA IMM A9 00 */
    c->pc = 0xC3E0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC3E0u: /* STA ABX 9D 80 06 */
    c->pc = 0xC3E3u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3E3u: /* STA ABX 9D A0 06 */
    c->pc = 0xC3E6u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC3E6u: /* DEX IMP CA */
    c->pc = 0xC3E7u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC3E7u: /* DEY IMP 88 */
    c->pc = 0xC3E8u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC3E8u: /* BPL REL 10 C0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC3EAu ^ 0xC3AAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC3AAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC3EAu; } return 1;
case 0xC3EAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC427u: /* LDA ZP A5 AA */
    c->pc = 0xC429u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC429u: /* BNE REL D0 31 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC42Bu ^ 0xC45Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC45Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC42Bu; } return 1;
case 0xC42Bu: /* LDA ABS AD 55 03 */
    c->pc = 0xC42Eu;
    ea = 0x0355u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC42Eu: /* BEQ REL F0 2C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC430u ^ 0xC45Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC45Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC430u; } return 1;
case 0xC430u: /* INC ZP E6 44 */
    c->pc = 0xC432u;
    ea = 0x44u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC432u: /* CMP ZP C5 44 */
    c->pc = 0xC434u;
    ea = 0x44u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xC434u: /* BCS REL B0 26 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xC436u ^ 0xC45Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC45Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC436u; } return 1;
case 0xC436u: /* LDA IMM A9 00 */
    c->pc = 0xC438u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC438u: /* STA ZP 85 44 */
    c->pc = 0xC43Au;
    ea = 0x44u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC43Au: /* INC ZP E6 43 */
    c->pc = 0xC43Cu;
    ea = 0x43u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC43Cu: /* LDA ZP A5 43 */
    c->pc = 0xC43Eu;
    ea = 0x43u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC43Eu: /* CMP ABS CD 54 03 */
    c->pc = 0xC441u;
    ea = 0x0354u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u; return 1;
case 0xC441u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC443u ^ 0xC447u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC447u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC443u; } return 1;
case 0xC443u: /* LDA IMM A9 00 */
    c->pc = 0xC445u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC445u: /* STA ZP 85 43 */
    c->pc = 0xC447u;
    ea = 0x43u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC447u: /* ASL IMP 0A */
    c->pc = 0xC448u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC448u: /* ASL IMP 0A */
    c->pc = 0xC449u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC449u: /* ASL IMP 0A */
    c->pc = 0xC44Au;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC44Au: /* ASL IMP 0A */
    c->pc = 0xC44Bu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC44Bu: /* TAX IMP AA */
    c->pc = 0xC44Cu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC44Cu: /* LDY IMM A0 00 */
    c->pc = 0xC44Eu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC44Eu: /* LDA ABX BD 76 03 */
    c->pc = 0xC451u;
    ea = (uint16_t)(0x0376u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0376u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC451u: /* STA ABY 99 56 03 */
    c->pc = 0xC454u;
    ea = (uint16_t)(0x0356u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC454u: /* INX IMP E8 */
    c->pc = 0xC455u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC455u: /* INY IMP C8 */
    c->pc = 0xC456u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC456u: /* CPY IMM C0 10 */
    c->pc = 0xC458u;
    v = 0x10u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xC458u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC45Au ^ 0xC44Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC44Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC45Au; } return 1;
case 0xC45Au: /* INC ZP E6 3A */
    c->pc = 0xC45Cu;
    ea = 0x3Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC45Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC45Du: /* LDA ZP A5 2A */
    c->pc = 0xC45Fu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC45Fu: /* AND IMM 29 07 */
    c->pc = 0xC461u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC461u: /* JSR ABS 20 00 C0 */
    push(c, 0xC4u); push(c, 0x63u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC464u: /* LDA IMM A9 00 */
    c->pc = 0xC466u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC466u: /* STA ZP 85 0A */
    c->pc = 0xC468u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC468u: /* LDA IMM A9 BC */
    c->pc = 0xC46Au;
    v = 0xBCu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC46Au: /* STA ZP 85 0B */
    c->pc = 0xC46Cu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC46Cu: /* LDA ZP A5 2A */
    c->pc = 0xC46Eu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC46Eu: /* AND IMM 29 08 */
    c->pc = 0xC470u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC470u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC472u ^ 0xC474u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC474u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC472u; } return 1;
case 0xC472u: /* INC ZP E6 0B */
    c->pc = 0xC474u;
    ea = 0x0Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC474u: /* LDY IMM A0 00 */
    c->pc = 0xC476u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC476u: /* LDA IZY B1 0A */
    c->pc = 0xC478u;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC478u: /* STA ZP 85 00 */
    c->pc = 0xC47Au;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC47Au: /* LDA IMM A9 00 */
    c->pc = 0xC47Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC47Cu: /* STA ABS 8D 06 20 */
    c->pc = 0xC47Fu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC47Fu: /* STA ABS 8D 06 20 */
    c->pc = 0xC482u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC482u: /* STA ZP 85 08 */
    c->pc = 0xC484u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC484u: /* INY IMP C8 */
    c->pc = 0xC485u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC485u: /* STY ZP 84 01 */
    c->pc = 0xC487u;
    ea = 0x01u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC487u: /* LDY ZP A4 01 */
    c->pc = 0xC489u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC489u: /* LDA IZY B1 0A */
    c->pc = 0xC48Bu;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC48Bu: /* STA ZP 85 09 */
    c->pc = 0xC48Du;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC48Du: /* INY IMP C8 */
    c->pc = 0xC48Eu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC48Eu: /* LDA IZY B1 0A */
    c->pc = 0xC490u;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC490u: /* STA ZP 85 02 */
    c->pc = 0xC492u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC492u: /* INY IMP C8 */
    c->pc = 0xC493u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC493u: /* LDA IZY B1 0A */
    c->pc = 0xC495u;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC495u: /* INY IMP C8 */
    c->pc = 0xC496u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC496u: /* STY ZP 84 01 */
    c->pc = 0xC498u;
    ea = 0x01u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC498u: /* JSR ABS 20 00 C0 */
    push(c, 0xC4u); push(c, 0x9Au); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC49Bu: /* LDY IMM A0 00 */
    c->pc = 0xC49Du;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC49Du: /* LDA IZY B1 08 */
    c->pc = 0xC49Fu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC49Fu: /* STA ABS 8D 07 20 */
    c->pc = 0xC4A2u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC4A2u: /* INY IMP C8 */
    c->pc = 0xC4A3u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC4A3u: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC4A5u ^ 0xC49Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC49Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xC4A5u; } return 1;
case 0xC4A5u: /* INC ZP E6 09 */
    c->pc = 0xC4A7u;
    ea = 0x09u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC4A7u: /* DEC ZP C6 02 */
    c->pc = 0xC4A9u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC4A9u: /* BNE REL D0 F0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC4ABu ^ 0xC49Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC49Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC4ABu; } return 1;
case 0xC4ABu: /* LDA ZP A5 2A */
    c->pc = 0xC4ADu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4ADu: /* AND IMM 29 07 */
    c->pc = 0xC4AFu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC4AFu: /* JSR ABS 20 00 C0 */
    push(c, 0xC4u); push(c, 0xB1u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC4B2u: /* DEC ZP C6 00 */
    c->pc = 0xC4B4u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC4B4u: /* BNE REL D0 D1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC4B6u ^ 0xC487u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC487u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC4B6u; } return 1;
case 0xC4B6u: /* INC ZP E6 0B */
    c->pc = 0xC4B8u;
    ea = 0x0Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC4B8u: /* INC ZP E6 0B */
    c->pc = 0xC4BAu;
    ea = 0x0Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC4BAu: /* LDY IMM A0 61 */
    c->pc = 0xC4BCu;
    v = 0x61u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC4BCu: /* LDA IZY B1 0A */
    c->pc = 0xC4BEu;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4BEu: /* STA ABY 99 54 03 */
    c->pc = 0xC4C1u;
    ea = (uint16_t)(0x0354u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC4C1u: /* DEY IMP 88 */
    c->pc = 0xC4C2u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC4C2u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC4C4u ^ 0xC4BCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC4BCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC4C4u; } return 1;
case 0xC4C4u: /* JSR ABS 20 F5 D0 */
    push(c, 0xC4u); push(c, 0xC6u); c->pc = 0xD0F5u; c->cpu_cycles += 6u; return 1;
case 0xC4C7u: /* LDA IMM A9 0E */
    c->pc = 0xC4C9u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC4C9u: /* JSR ABS 20 00 C0 */
    push(c, 0xC4u); push(c, 0xCBu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC4CCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC4CDu: /* LDA ZP A5 2A */
    c->pc = 0xC4CFu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4CFu: /* AND IMM 29 07 */
    c->pc = 0xC4D1u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC4D1u: /* JSR ABS 20 00 C0 */
    push(c, 0xC4u); push(c, 0xD3u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC4D4u: /* LDY ZP A4 B0 */
    c->pc = 0xC4D6u;
    ea = 0xB0u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC4D6u: /* LDA ABY B9 06 BB */
    c->pc = 0xC4D9u;
    ea = (uint16_t)(0xBB06u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB06u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4D9u: /* STA ZP 85 20 */
    c->pc = 0xC4DBu;
    ea = 0x20u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4DBu: /* STA ABS 8D 40 04 */
    c->pc = 0xC4DEu;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC4DEu: /* LDA ABY B9 0C BB */
    c->pc = 0xC4E1u;
    ea = (uint16_t)(0xBB0Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB0Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4E1u: /* STA ZP 85 48 */
    c->pc = 0xC4E3u;
    ea = 0x48u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4E3u: /* STA ZP 85 49 */
    c->pc = 0xC4E5u;
    ea = 0x49u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4E5u: /* LDA ABY B9 12 BB */
    c->pc = 0xC4E8u;
    ea = (uint16_t)(0xBB12u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB12u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4E8u: /* STA ZP 85 4C */
    c->pc = 0xC4EAu;
    ea = 0x4Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4EAu: /* STA ZP 85 4D */
    c->pc = 0xC4ECu;
    ea = 0x4Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4ECu: /* LDA ABY B9 18 BB */
    c->pc = 0xC4EFu;
    ea = (uint16_t)(0xBB18u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB18u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4EFu: /* STA ZP 85 17 */
    c->pc = 0xC4F1u;
    ea = 0x17u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4F1u: /* LDA ABY B9 1E BB */
    c->pc = 0xC4F4u;
    ea = (uint16_t)(0xBB1Eu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB1Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4F4u: /* STA ZP 85 16 */
    c->pc = 0xC4F6u;
    ea = 0x16u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4F6u: /* LDA ABY B9 24 BB */
    c->pc = 0xC4F9u;
    ea = (uint16_t)(0xBB24u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB24u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4F9u: /* STA ZP 85 19 */
    c->pc = 0xC4FBu;
    ea = 0x19u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC4FBu: /* LDA ABY B9 2A BB */
    c->pc = 0xC4FEu;
    ea = (uint16_t)(0xBB2Au + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB2Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC4FEu: /* STA ZP 85 18 */
    c->pc = 0xC500u;
    ea = 0x18u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC500u: /* LDA ABY B9 30 BB */
    c->pc = 0xC503u;
    ea = (uint16_t)(0xBB30u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB30u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC503u: /* STA ZP 85 38 */
    c->pc = 0xC505u;
    ea = 0x38u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC505u: /* LDA ABY B9 36 BB */
    c->pc = 0xC508u;
    ea = (uint16_t)(0xBB36u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB36u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC508u: /* STA ZP 85 14 */
    c->pc = 0xC50Au;
    ea = 0x14u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC50Au: /* LDA ABY B9 3C BB */
    c->pc = 0xC50Du;
    ea = (uint16_t)(0xBB3Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBB3Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC50Du: /* STA ZP 85 15 */
    c->pc = 0xC50Fu;
    ea = 0x15u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC50Fu: /* LDX ZP A6 38 */
    c->pc = 0xC511u;
    ea = 0x38u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC511u: /* JSR ABS 20 64 CB */
    push(c, 0xC5u); push(c, 0x13u); c->pc = 0xCB64u; c->cpu_cycles += 6u; return 1;
case 0xC514u: /* TYA IMP 98 */
    c->pc = 0xC515u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC515u: /* CLC IMP 18 */
    c->pc = 0xC516u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC516u: /* ADC IMM 69 0B */
    c->pc = 0xC518u;
    v = 0x0Bu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC518u: /* TAY IMP A8 */
    c->pc = 0xC519u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC519u: /* LDX IMM A2 0C */
    c->pc = 0xC51Bu;
    v = 0x0Cu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC51Bu: /* LDA ABY B9 60 B4 */
    c->pc = 0xC51Eu;
    ea = (uint16_t)(0xB460u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC51Eu: /* PHA IMP 48 */
    c->pc = 0xC51Fu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC51Fu: /* DEY IMP 88 */
    c->pc = 0xC520u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC520u: /* DEX IMP CA */
    c->pc = 0xC521u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC521u: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC523u ^ 0xC51Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC51Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC523u; } return 1;
case 0xC523u: /* LDA IMM A9 0A */
    c->pc = 0xC525u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC525u: /* STA ABS 8D 06 20 */
    c->pc = 0xC528u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC528u: /* LDA IMM A9 00 */
    c->pc = 0xC52Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC52Au: /* STA ABS 8D 06 20 */
    c->pc = 0xC52Du;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC52Du: /* STA ZP 85 08 */
    c->pc = 0xC52Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC52Fu: /* LDA IMM A9 06 */
    c->pc = 0xC531u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC531u: /* STA ZP 85 00 */
    c->pc = 0xC533u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC533u: /* PLA IMP 68 */
    c->pc = 0xC534u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC534u: /* STA ZP 85 09 */
    c->pc = 0xC536u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC536u: /* PLA IMP 68 */
    c->pc = 0xC537u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC537u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x39u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC53Au: /* LDY IMM A0 00 */
    c->pc = 0xC53Cu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC53Cu: /* LDA IZY B1 08 */
    c->pc = 0xC53Eu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC53Eu: /* STA ABS 8D 07 20 */
    c->pc = 0xC541u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC541u: /* INY IMP C8 */
    c->pc = 0xC542u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC542u: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC544u ^ 0xC53Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC53Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC544u; } return 1;
case 0xC544u: /* DEC ZP C6 00 */
    c->pc = 0xC546u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC546u: /* BNE REL D0 EB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC548u ^ 0xC533u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC533u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC548u; } return 1;
case 0xC548u: /* LDA IMM A9 0E */
    c->pc = 0xC54Au;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC54Au: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x4Cu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC54Du: /* LDA ZP A5 B0 */
    c->pc = 0xC54Fu;
    ea = 0xB0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC54Fu: /* CMP IMM C9 02 */
    c->pc = 0xC551u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC551u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC553u ^ 0xC556u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC556u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC553u; } return 1;
case 0xC553u: /* JSR ABS 20 15 91 */
    push(c, 0xC5u); push(c, 0x55u); c->pc = 0x9115u; c->cpu_cycles += 6u; return 1;
case 0xC556u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC557u: /* LDA IMM A9 0D */
    c->pc = 0xC559u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC559u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x5Bu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC55Cu: /* JSR ABS 20 09 80 */
    push(c, 0xC5u); push(c, 0x5Eu); c->pc = 0x8009u; c->cpu_cycles += 6u; return 1;
case 0xC55Fu: /* LDA IMM A9 0E */
    c->pc = 0xC561u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC561u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x63u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC564u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC565u: /* LDA IMM A9 0D */
    c->pc = 0xC567u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC567u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x69u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC56Au: /* JSR ABS 20 00 80 */
    push(c, 0xC5u); push(c, 0x6Cu); c->pc = 0x8000u; c->cpu_cycles += 6u; return 1;
case 0xC56Du: /* LDA IMM A9 0E */
    c->pc = 0xC56Fu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC56Fu: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x71u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC572u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC573u: /* LDX IMM A2 0F */
    c->pc = 0xC575u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC575u: /* LDA ABX BD 20 04 */
    c->pc = 0xC578u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC578u: /* BMI REL 30 2E */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xC57Au ^ 0xC5A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC57Au; } return 1;
case 0xC57Au: /* DEX IMP CA */
    c->pc = 0xC57Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC57Bu: /* CPX IMM E0 01 */
    c->pc = 0xC57Du;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xC57Du: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC57Fu ^ 0xC575u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC575u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC57Fu; } return 1;
case 0xC57Fu: /* LDA ZP A5 47 */
    c->pc = 0xC581u;
    ea = 0x47u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC581u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC583u ^ 0xC586u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC586u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC583u; } return 1;
case 0xC583u: /* JSR ABS 20 7F C0 */
    push(c, 0xC5u); push(c, 0x85u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0xC586u: /* LDA ABS AD B6 03 */
    c->pc = 0xC589u;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC589u: /* PHA IMP 48 */
    c->pc = 0xC58Au;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC58Au: /* LDA ABS AD B7 03 */
    c->pc = 0xC58Du;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC58Du: /* PHA IMP 48 */
    c->pc = 0xC58Eu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC58Eu: /* LDA IMM A9 32 */
    c->pc = 0xC590u;
    v = 0x32u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC590u: /* JSR ABS 20 51 C0 */
    push(c, 0xC5u); push(c, 0x92u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xC593u: /* LDA IMM A9 0D */
    c->pc = 0xC595u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC595u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0x97u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC598u: /* JSR ABS 20 03 80 */
    push(c, 0xC5u); push(c, 0x9Au); c->pc = 0x8003u; c->cpu_cycles += 6u; return 1;
case 0xC59Bu: /* PLA IMP 68 */
    c->pc = 0xC59Cu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC59Cu: /* STA ABS 8D B7 03 */
    c->pc = 0xC59Fu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC59Fu: /* PLA IMP 68 */
    c->pc = 0xC5A0u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5A0u: /* STA ABS 8D B6 03 */
    c->pc = 0xC5A3u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5A3u: /* LDA IMM A9 0E */
    c->pc = 0xC5A5u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5A5u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0xA7u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC5A8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC5A9u: /* LDA ZP A5 B1 */
    c->pc = 0xC5ABu;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5ABu: /* BEQ REL F0 43 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC5ADu ^ 0xC5F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC5ADu; } return 1;
case 0xC5ADu: /* LDA IMM A9 0B */
    c->pc = 0xC5AFu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5AFu: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0xB1u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC5B2u: /* JSR ABS 20 03 80 */
    push(c, 0xC5u); push(c, 0xB4u); c->pc = 0x8003u; c->cpu_cycles += 6u; return 1;
case 0xC5B5u: /* LDA IMM A9 0E */
    c->pc = 0xC5B7u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5B7u: /* JSR ABS 20 00 C0 */
    push(c, 0xC5u); push(c, 0xB9u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC5BAu: /* LDA ABS AD AA 05 */
    c->pc = 0xC5BDu;
    ea = 0x05AAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5BDu: /* BEQ REL F0 31 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC5BFu ^ 0xC5F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC5BFu; } return 1;
case 0xC5BFu: /* LDA ZP A5 2A */
    c->pc = 0xC5C1u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5C1u: /* CMP IMM C9 0C */
    c->pc = 0xC5C3u;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC5C3u: /* BNE REL D0 28 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC5C5u ^ 0xC5EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC5C5u; } return 1;
case 0xC5C5u: /* LDA ZP A5 BC */
    c->pc = 0xC5C7u;
    ea = 0xBCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5C7u: /* CMP IMM C9 FF */
    c->pc = 0xC5C9u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC5C9u: /* BEQ REL F0 22 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC5CBu ^ 0xC5EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC5CBu; } return 1;
case 0xC5CBu: /* LDX IMM A2 0F */
    c->pc = 0xC5CDu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC5CDu: /* LSR ABX 5E 30 04 */
    c->pc = 0xC5D0u;
    ea = (uint16_t)(0x0430u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xC5D0u: /* DEX IMP CA */
    c->pc = 0xC5D1u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC5D1u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC5D3u ^ 0xC5CDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5CDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC5D3u; } return 1;
case 0xC5D3u: /* JSR ABS 20 89 C2 */
    push(c, 0xC5u); push(c, 0xD5u); c->pc = 0xC289u; c->cpu_cycles += 6u; return 1;
case 0xC5D6u: /* LDA IMM A9 00 */
    c->pc = 0xC5D8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5D8u: /* STA ZP 85 2B */
    c->pc = 0xC5DAu;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5DAu: /* LDA IMM A9 7D */
    c->pc = 0xC5DCu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5DCu: /* LDX IMM A2 0F */
    c->pc = 0xC5DEu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC5DEu: /* JSR ABS 20 60 F1 */
    push(c, 0xC5u); push(c, 0xE0u); c->pc = 0xF160u; c->cpu_cycles += 6u; return 1;
case 0xC5E1u: /* LDA IMM A9 20 */
    c->pc = 0xC5E3u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5E3u: /* STA ABS 8D 7F 04 */
    c->pc = 0xC5E6u;
    ea = 0x047Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5E6u: /* LDA IMM A9 AB */
    c->pc = 0xC5E8u;
    v = 0xABu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC5E8u: /* STA ABS 8D BF 04 */
    c->pc = 0xC5EBu;
    ea = 0x04BFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5EBu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC5EDu ^ 0xC5F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC5F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC5EDu; } return 1;
case 0xC5EDu: /* JMP ABS 4C F0 C1 */
    c->pc = 0xC1F0u; c->cpu_cycles += 3u; return 1;
case 0xC5F0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC5F1u: /* PHA IMP 48 */
    c->pc = 0xC5F2u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5F2u: /* LDA ABS AD A7 05 */
    c->pc = 0xC5F5u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5F5u: /* STA ZP 85 09 */
    c->pc = 0xC5F7u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5F7u: /* LDA ABS AD A9 05 */
    c->pc = 0xC5FAu;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5FAu: /* STA ZP 85 08 */
    c->pc = 0xC5FCu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC5FCu: /* PLA IMP 68 */
    c->pc = 0xC5FDu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC5FDu: /* JSR ABS 20 0C C7 */
    push(c, 0xC5u); push(c, 0xFFu); c->pc = 0xC70Cu; c->cpu_cycles += 6u; return 1;
case 0xC600u: /* CLC IMP 18 */
    c->pc = 0xC601u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC601u: /* LDA ABS AD B7 03 */
    c->pc = 0xC604u;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC604u: /* ADC IMM 69 20 */
    c->pc = 0xC606u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC606u: /* STA ABS 8D B7 03 */
    c->pc = 0xC609u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC609u: /* LDA ABS AD B6 03 */
    c->pc = 0xC60Cu;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC60Cu: /* ADC IMM 69 00 */
    c->pc = 0xC60Eu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC60Eu: /* STA ABS 8D B6 03 */
    c->pc = 0xC611u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC611u: /* CLC IMP 18 */
    c->pc = 0xC612u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC612u: /* LDA ABS AD A9 05 */
    c->pc = 0xC615u;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC615u: /* ADC IMM 69 20 */
    c->pc = 0xC617u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC617u: /* STA ABS 8D A9 05 */
    c->pc = 0xC61Au;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC61Au: /* LDA ABS AD A7 05 */
    c->pc = 0xC61Du;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC61Du: /* ADC IMM 69 00 */
    c->pc = 0xC61Fu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC61Fu: /* STA ABS 8D A7 05 */
    c->pc = 0xC622u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC622u: /* LDA IMM A9 0B */
    c->pc = 0xC624u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC624u: /* JSR ABS 20 00 C0 */
    push(c, 0xC6u); push(c, 0x26u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC627u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC628u: /* JSR ABS 20 00 C0 */
    push(c, 0xC6u); push(c, 0x2Au); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC62Bu: /* LDA IMM A9 00 */
    c->pc = 0xC62Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC62Du: /* STA ZP 85 08 */
    c->pc = 0xC62Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC62Fu: /* LDX IMM A2 04 */
    c->pc = 0xC631u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC631u: /* LDA IZY B1 08 */
    c->pc = 0xC633u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC633u: /* STA ABS 8D 07 20 */
    c->pc = 0xC636u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC636u: /* INY IMP C8 */
    c->pc = 0xC637u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC637u: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC639u ^ 0xC631u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC631u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC639u; } return 1;
case 0xC639u: /* INC ZP E6 09 */
    c->pc = 0xC63Bu;
    ea = 0x09u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC63Bu: /* DEX IMP CA */
    c->pc = 0xC63Cu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC63Cu: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC63Eu ^ 0xC631u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC631u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC63Eu; } return 1;
case 0xC63Eu: /* LDA IMM A9 0D */
    c->pc = 0xC640u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC640u: /* JSR ABS 20 00 C0 */
    push(c, 0xC6u); push(c, 0x42u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC643u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC644u: /* STA ZP 85 00 */
    c->pc = 0xC646u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC646u: /* TAX IMP AA */
    c->pc = 0xC647u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC647u: /* LDA ABX BD 89 C6 */
    c->pc = 0xC64Au;
    ea = (uint16_t)(0xC689u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC689u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC64Au: /* STA ZP 85 01 */
    c->pc = 0xC64Cu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC64Cu: /* LDA ABX BD 90 C6 */
    c->pc = 0xC64Fu;
    ea = (uint16_t)(0xC690u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC690u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC64Fu: /* STA ZP 85 02 */
    c->pc = 0xC651u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC651u: /* LDA IMM A9 00 */
    c->pc = 0xC653u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC653u: /* STA ZP 85 08 */
    c->pc = 0xC655u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC655u: /* STA ABS 8D 06 20 */
    c->pc = 0xC658u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC658u: /* STA ABS 8D 06 20 */
    c->pc = 0xC65Bu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC65Bu: /* LDX ZP A6 02 */
    c->pc = 0xC65Du;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC65Du: /* LDA ABX BD BE C6 */
    c->pc = 0xC660u;
    ea = (uint16_t)(0xC6BEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC6BEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC660u: /* STA ZP 85 09 */
    c->pc = 0xC662u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC662u: /* LDA ABX BD E5 C6 */
    c->pc = 0xC665u;
    ea = (uint16_t)(0xC6E5u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC6E5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC665u: /* STA ZP 85 03 */
    c->pc = 0xC667u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC667u: /* LDA ABX BD 97 C6 */
    c->pc = 0xC66Au;
    ea = (uint16_t)(0xC697u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC697u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC66Au: /* JSR ABS 20 00 C0 */
    push(c, 0xC6u); push(c, 0x6Cu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC66Du: /* LDY IMM A0 00 */
    c->pc = 0xC66Fu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC66Fu: /* LDA IZY B1 08 */
    c->pc = 0xC671u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC671u: /* STA ABS 8D 07 20 */
    c->pc = 0xC674u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC674u: /* INY IMP C8 */
    c->pc = 0xC675u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC675u: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC677u ^ 0xC66Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC66Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC677u; } return 1;
case 0xC677u: /* INC ZP E6 09 */
    c->pc = 0xC679u;
    ea = 0x09u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC679u: /* DEC ZP C6 03 */
    c->pc = 0xC67Bu;
    ea = 0x03u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC67Bu: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC67Du ^ 0xC66Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC66Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC67Du; } return 1;
case 0xC67Du: /* INC ZP E6 02 */
    c->pc = 0xC67Fu;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC67Fu: /* DEC ZP C6 01 */
    c->pc = 0xC681u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC681u: /* BNE REL D0 D8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC683u ^ 0xC65Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC65Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC683u; } return 1;
case 0xC683u: /* LDA IMM A9 0D */
    c->pc = 0xC685u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC685u: /* JSR ABS 20 00 C0 */
    push(c, 0xC6u); push(c, 0x87u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC688u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC70Cu: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x0Eu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC70Fu: /* LDY IMM A0 1F */
    c->pc = 0xC711u;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC711u: /* LDA IZY B1 08 */
    c->pc = 0xC713u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC713u: /* STA ABY 99 B8 03 */
    c->pc = 0xC716u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC716u: /* DEY IMP 88 */
    c->pc = 0xC717u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC717u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC719u ^ 0xC711u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC711u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC719u; } return 1;
case 0xC719u: /* LDA IMM A9 20 */
    c->pc = 0xC71Bu;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC71Bu: /* STA ZP 85 47 */
    c->pc = 0xC71Du;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC71Du: /* LDA IMM A9 0D */
    c->pc = 0xC71Fu;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC71Fu: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x21u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC722u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC723u: /* LDA IMM A9 01 */
    c->pc = 0xC725u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC725u: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x27u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC728u: /* LDX IMM A2 1F */
    c->pc = 0xC72Au;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC72Au: /* LDA ABX BD D0 9C */
    c->pc = 0xC72Du;
    ea = (uint16_t)(0x9CD0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CD0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC72Du: /* STA ABX 9D B8 03 */
    c->pc = 0xC730u;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC730u: /* DEX IMP CA */
    c->pc = 0xC731u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC731u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC733u ^ 0xC72Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC72Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xC733u; } return 1;
case 0xC733u: /* LDA IMM A9 08 */
    c->pc = 0xC735u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC735u: /* STA ABS 8D B6 03 */
    c->pc = 0xC738u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC738u: /* LDA IMM A9 00 */
    c->pc = 0xC73Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC73Au: /* STA ABS 8D B7 03 */
    c->pc = 0xC73Du;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC73Du: /* LDA IMM A9 20 */
    c->pc = 0xC73Fu;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC73Fu: /* STA ZP 85 47 */
    c->pc = 0xC741u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC741u: /* LDA IMM A9 0D */
    c->pc = 0xC743u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC743u: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x45u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC746u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC747u: /* LDA IMM A9 09 */
    c->pc = 0xC749u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC749u: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x4Bu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC74Cu: /* LDY IMM A0 1F */
    c->pc = 0xC74Eu;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC74Eu: /* LDA IZY B1 FE */
    c->pc = 0xC750u;
    ea = (uint16_t)(read16_zp(c, 0xFEu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0xFEu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC750u: /* STA ABY 99 B8 03 */
    c->pc = 0xC753u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC753u: /* DEY IMP 88 */
    c->pc = 0xC754u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC754u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC756u ^ 0xC74Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC74Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC756u; } return 1;
case 0xC756u: /* LDA IMM A9 20 */
    c->pc = 0xC758u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC758u: /* STA ZP 85 47 */
    c->pc = 0xC75Au;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC75Au: /* LDA IMM A9 0D */
    c->pc = 0xC75Cu;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC75Cu: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x5Eu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC75Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC760u: /* LDA ZP A5 FD */
    c->pc = 0xC762u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC762u: /* STA ZP 85 09 */
    c->pc = 0xC764u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC764u: /* LDA IMM A9 00 */
    c->pc = 0xC766u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC766u: /* LSR ZP 46 09 */
    c->pc = 0xC768u;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC768u: /* ROR IMP 6A */
    c->pc = 0xC769u;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC769u: /* LSR ZP 46 09 */
    c->pc = 0xC76Bu;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC76Bu: /* ROR IMP 6A */
    c->pc = 0xC76Cu;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC76Cu: /* LSR ZP 46 09 */
    c->pc = 0xC76Eu;
    ea = 0x09u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC76Eu: /* ROR IMP 6A */
    c->pc = 0xC76Fu;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC76Fu: /* STA ABS 8D B7 03 */
    c->pc = 0xC772u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC772u: /* STA ZP 85 08 */
    c->pc = 0xC774u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC774u: /* LDA ZP A5 FD */
    c->pc = 0xC776u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC776u: /* CMP IMM C9 08 */
    c->pc = 0xC778u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC778u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC77Au ^ 0xC77Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC77Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC77Au; } return 1;
case 0xC77Au: /* LDA ZP A5 09 */
    c->pc = 0xC77Cu;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC77Cu: /* JMP ABS 4C 83 C7 */
    c->pc = 0xC783u; c->cpu_cycles += 3u; return 1;
case 0xC77Fu: /* LDA ZP A5 09 */
    c->pc = 0xC781u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC781u: /* ADC IMM 69 09 */
    c->pc = 0xC783u;
    v = 0x09u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC783u: /* STA ABS 8D B6 03 */
    c->pc = 0xC786u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC786u: /* CLC IMP 18 */
    c->pc = 0xC787u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC787u: /* TYA IMP 98 */
    c->pc = 0xC788u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC788u: /* ADC ZP 65 09 */
    c->pc = 0xC78Au;
    ea = 0x09u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xC78Au: /* STA ZP 85 09 */
    c->pc = 0xC78Cu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC78Cu: /* TXA IMP 8A */
    c->pc = 0xC78Du;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC78Du: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0x8Fu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC790u: /* LDY IMM A0 1F */
    c->pc = 0xC792u;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC792u: /* LDA IZY B1 08 */
    c->pc = 0xC794u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC794u: /* STA ABY 99 B8 03 */
    c->pc = 0xC797u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC797u: /* DEY IMP 88 */
    c->pc = 0xC798u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC798u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xC79Au ^ 0xC792u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC792u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC79Au; } return 1;
case 0xC79Au: /* LDA IMM A9 20 */
    c->pc = 0xC79Cu;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC79Cu: /* STA ZP 85 47 */
    c->pc = 0xC79Eu;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC79Eu: /* LDA IMM A9 0D */
    c->pc = 0xC7A0u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7A0u: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0xA2u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC7A3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC7A4u: /* LDA ZP A5 2A */
    c->pc = 0xC7A6u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC7A6u: /* AND IMM 29 07 */
    c->pc = 0xC7A8u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7A8u: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0xAAu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC7ABu: /* LDA ABY B9 00 B4 */
    c->pc = 0xC7AEu;
    ea = (uint16_t)(0xB400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC7AEu: /* TAY IMP A8 */
    c->pc = 0xC7AFu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC7AFu: /* LDA IMM A9 0E */
    c->pc = 0xC7B1u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7B1u: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0xB3u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC7B4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC7B5u: /* LDA IMM A9 C0 */
    c->pc = 0xC7B7u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7B7u: /* STA ABS 8D 20 04 */
    c->pc = 0xC7BAu;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7BAu: /* LDA IMM A9 80 */
    c->pc = 0xC7BCu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7BCu: /* STA ABS 8D 60 04 */
    c->pc = 0xC7BFu;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7BFu: /* LDA IMM A9 14 */
    c->pc = 0xC7C1u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7C1u: /* STA ABS 8D A0 04 */
    c->pc = 0xC7C4u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7C4u: /* LDA IMM A9 1A */
    c->pc = 0xC7C6u;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7C6u: /* STA ABS 8D 00 04 */
    c->pc = 0xC7C9u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7C9u: /* LDA ZP A5 2A */
    c->pc = 0xC7CBu;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC7CBu: /* AND IMM 29 07 */
    c->pc = 0xC7CDu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7CDu: /* JSR ABS 20 00 C0 */
    push(c, 0xC7u); push(c, 0xCFu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC7D0u: /* LDA IMM A9 00 */
    c->pc = 0xC7D2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7D2u: /* STA ABS 8D 80 06 */
    c->pc = 0xC7D5u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7D5u: /* STA ABS 8D A0 06 */
    c->pc = 0xC7D8u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7D8u: /* CLC IMP 18 */
    c->pc = 0xC7D9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC7D9u: /* LDA ABS AD A0 04 */
    c->pc = 0xC7DCu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7DCu: /* ADC IMM 69 10 */
    c->pc = 0xC7DEu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC7DEu: /* STA ABS 8D A0 04 */
    c->pc = 0xC7E1u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC7E1u: /* LDX ZP A6 B0 */
    c->pc = 0xC7E3u;
    ea = 0xB0u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC7E3u: /* CMP ABX DD 00 BB */
    c->pc = 0xC7E6u;
    ea = (uint16_t)(0xBB00u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xBB00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC7E6u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC7E8u ^ 0xC7F1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC7F1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC7E8u; } return 1;
case 0xC7E8u: /* JSR ABS 20 77 CC */
    push(c, 0xC7u); push(c, 0xEAu); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0xC7EBu: /* JSR ABS 20 7F C0 */
    push(c, 0xC7u); push(c, 0xEDu); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0xC7EEu: /* JMP ABS 4C C9 C7 */
    c->pc = 0xC7C9u; c->cpu_cycles += 3u; return 1;
case 0xC7F1u: /* LDA IMM A9 30 */
    c->pc = 0xC7F3u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7F3u: /* JSR ABS 20 51 C0 */
    push(c, 0xC7u); push(c, 0xF5u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xC7F6u: /* LDA IMM A9 00 */
    c->pc = 0xC7F8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC7F8u: /* STA ZP 85 2C */
    c->pc = 0xC7FAu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC7FAu: /* STA ZP 85 3E */
    c->pc = 0xC7FCu;
    ea = 0x3Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC7FCu: /* STA ZP 85 3F */
    c->pc = 0xC7FEu;
    ea = 0x3Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC7FEu: /* LDA IMM A9 40 */
    c->pc = 0xC800u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC800u: /* STA ZP 85 42 */
    c->pc = 0xC802u;
    ea = 0x42u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC802u: /* LDA IMM A9 0E */
    c->pc = 0xC804u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC804u: /* JSR ABS 20 00 C0 */
    push(c, 0xC8u); push(c, 0x06u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC807u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC808u: /* LDA ZP A5 2A */
    c->pc = 0xC80Au;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC80Au: /* STA ZP 85 B3 */
    c->pc = 0xC80Cu;
    ea = 0xB3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC80Cu: /* LDA IMM A9 0B */
    c->pc = 0xC80Eu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC80Eu: /* JSR ABS 20 00 C0 */
    push(c, 0xC8u); push(c, 0x10u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC811u: /* JSR ABS 20 00 80 */
    push(c, 0xC8u); push(c, 0x13u); c->pc = 0x8000u; c->cpu_cycles += 6u; return 1;
case 0xC814u: /* LDA IMM A9 0E */
    c->pc = 0xC816u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC816u: /* JSR ABS 20 00 C0 */
    push(c, 0xC8u); push(c, 0x18u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC819u: /* LDA IMM A9 00 */
    c->pc = 0xC81Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC81Bu: /* STA ZP 85 23 */
    c->pc = 0xC81Du;
    ea = 0x23u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC81Du: /* STA ZP 85 27 */
    c->pc = 0xC81Fu;
    ea = 0x27u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC81Fu: /* JSR ABS 20 EE 84 */
    push(c, 0xC8u); push(c, 0x21u); c->pc = 0x84EEu; c->cpu_cycles += 6u; return 1;
case 0xC822u: /* JSR ABS 20 D0 DC */
    push(c, 0xC8u); push(c, 0x24u); c->pc = 0xDCD0u; c->cpu_cycles += 6u; return 1;
case 0xC825u: /* JSR ABS 20 58 D6 */
    push(c, 0xC8u); push(c, 0x27u); c->pc = 0xD658u; c->cpu_cycles += 6u; return 1;
case 0xC828u: /* JSR ABS 20 A9 C5 */
    push(c, 0xC8u); push(c, 0x2Au); c->pc = 0xC5A9u; c->cpu_cycles += 6u; return 1;
case 0xC82Bu: /* JSR ABS 20 5B 92 */
    push(c, 0xC8u); push(c, 0x2Du); c->pc = 0x925Bu; c->cpu_cycles += 6u; return 1;
case 0xC82Eu: /* JSR ABS 20 77 CC */
    push(c, 0xC8u); push(c, 0x30u); c->pc = 0xCC77u; c->cpu_cycles += 6u; return 1;
case 0xC831u: /* LDA ZP A5 FB */
    c->pc = 0xC833u;
    ea = 0xFBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC833u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC835u ^ 0xC844u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC844u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC835u; } return 1;
case 0xC835u: /* INC ZP E6 FC */
    c->pc = 0xC837u;
    ea = 0xFCu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC837u: /* CMP ZP C5 FC */
    c->pc = 0xC839u;
    ea = 0xFCu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xC839u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC83Bu ^ 0xC83Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC83Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xC83Bu; } return 1;
case 0xC83Bu: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xC83Du ^ 0xC844u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC844u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC83Du; } return 1;
case 0xC83Du: /* JSR ABS 20 D7 C0 */
    push(c, 0xC8u); push(c, 0x3Fu); c->pc = 0xC0D7u; c->cpu_cycles += 6u; return 1;
case 0xC840u: /* LDA IMM A9 00 */
    c->pc = 0xC842u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC842u: /* STA ZP 85 FC */
    c->pc = 0xC844u;
    ea = 0xFCu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC844u: /* JSR ABS 20 7F C0 */
    push(c, 0xC8u); push(c, 0x46u); c->pc = 0xC07Fu; c->cpu_cycles += 6u; return 1;
case 0xC847u: /* LDA ZP A5 B1 */
    c->pc = 0xC849u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC849u: /* CMP IMM C9 02 */
    c->pc = 0xC84Bu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xC84Bu: /* BCC REL 90 CC */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC84Du ^ 0xC819u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC819u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC84Du; } return 1;
case 0xC84Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC84Eu: /* LDA IMM A9 00 */
    c->pc = 0xC850u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC850u: /* STA ZP 85 03 */
    c->pc = 0xC852u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC852u: /* STA ZP 85 04 */
    c->pc = 0xC854u;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC854u: /* LDA ZP A5 01 */
    c->pc = 0xC856u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC856u: /* ORA ZP 05 02 */
    c->pc = 0xC858u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC858u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC85Au ^ 0xC85Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC85Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xC85Au; } return 1;
case 0xC85Au: /* STA ZP 85 03 */
    c->pc = 0xC85Cu;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC85Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC85Du: /* LDY IMM A0 08 */
    c->pc = 0xC85Fu;
    v = 0x08u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC85Fu: /* ASL ZP 06 03 */
    c->pc = 0xC861u;
    ea = 0x03u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC861u: /* ROL ZP 26 01 */
    c->pc = 0xC863u;
    ea = 0x01u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC863u: /* ROL ZP 26 04 */
    c->pc = 0xC865u;
    ea = 0x04u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC865u: /* SEC IMP 38 */
    c->pc = 0xC866u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC866u: /* LDA ZP A5 04 */
    c->pc = 0xC868u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC868u: /* SBC ZP E5 02 */
    c->pc = 0xC86Au;
    ea = 0x02u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xC86Au: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC86Cu ^ 0xC870u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC870u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC86Cu; } return 1;
case 0xC86Cu: /* STA ZP 85 04 */
    c->pc = 0xC86Eu;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC86Eu: /* INC ZP E6 03 */
    c->pc = 0xC870u;
    ea = 0x03u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC870u: /* DEY IMP 88 */
    c->pc = 0xC871u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC871u: /* BNE REL D0 EC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC873u ^ 0xC85Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC85Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC873u; } return 1;
case 0xC873u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC874u: /* LDA IMM A9 00 */
    c->pc = 0xC876u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC876u: /* STA ZP 85 11 */
    c->pc = 0xC878u;
    ea = 0x11u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC878u: /* STA ZP 85 10 */
    c->pc = 0xC87Au;
    ea = 0x10u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC87Au: /* LDA ZP A5 0B */
    c->pc = 0xC87Cu;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC87Cu: /* ORA ZP 05 0A */
    c->pc = 0xC87Eu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC87Eu: /* ORA ZP 05 0D */
    c->pc = 0xC880u;
    ea = 0x0Du;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC880u: /* ORA ZP 05 0C */
    c->pc = 0xC882u;
    ea = 0x0Cu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC882u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC884u ^ 0xC889u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC889u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC884u; } return 1;
case 0xC884u: /* STA ZP 85 0F */
    c->pc = 0xC886u;
    ea = 0x0Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC886u: /* STA ZP 85 0E */
    c->pc = 0xC888u;
    ea = 0x0Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC888u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC889u: /* LDY IMM A0 10 */
    c->pc = 0xC88Bu;
    v = 0x10u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC88Bu: /* ASL ZP 06 10 */
    c->pc = 0xC88Du;
    ea = 0x10u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC88Du: /* ROL ZP 26 0A */
    c->pc = 0xC88Fu;
    ea = 0x0Au; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC88Fu: /* ROL ZP 26 0B */
    c->pc = 0xC891u;
    ea = 0x0Bu; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC891u: /* ROL ZP 26 11 */
    c->pc = 0xC893u;
    ea = 0x11u; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC893u: /* SEC IMP 38 */
    c->pc = 0xC894u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC894u: /* LDA ZP A5 0B */
    c->pc = 0xC896u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC896u: /* SBC ZP E5 0C */
    c->pc = 0xC898u;
    ea = 0x0Cu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xC898u: /* TAX IMP AA */
    c->pc = 0xC899u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC899u: /* LDA ZP A5 11 */
    c->pc = 0xC89Bu;
    ea = 0x11u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC89Bu: /* SBC ZP E5 0D */
    c->pc = 0xC89Du;
    ea = 0x0Du;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xC89Du: /* BCC REL 90 06 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xC89Fu ^ 0xC8A5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC8A5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC89Fu; } return 1;
case 0xC89Fu: /* STX ZP 86 09 */
    c->pc = 0xC8A1u;
    ea = 0x09u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC8A1u: /* STA ZP 85 11 */
    c->pc = 0xC8A3u;
    ea = 0x11u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8A3u: /* INC ZP E6 10 */
    c->pc = 0xC8A5u;
    ea = 0x10u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC8A5u: /* DEY IMP 88 */
    c->pc = 0xC8A6u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC8A6u: /* BNE REL D0 E3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC8A8u ^ 0xC88Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC88Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC8A8u; } return 1;
case 0xC8A8u: /* LDA ZP A5 0A */
    c->pc = 0xC8AAu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8AAu: /* STA ZP 85 0F */
    c->pc = 0xC8ACu;
    ea = 0x0Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8ACu: /* LDA ZP A5 10 */
    c->pc = 0xC8AEu;
    ea = 0x10u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8AEu: /* STA ZP 85 0E */
    c->pc = 0xC8B0u;
    ea = 0x0Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8B0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC8B1u: /* LDX ZP A6 1B */
    c->pc = 0xC8B3u;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC8B3u: /* LDY IMM A0 20 */
    c->pc = 0xC8B5u;
    v = 0x20u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC8B5u: /* LDA ZP A5 09 */
    c->pc = 0xC8B7u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8B7u: /* AND IMM 29 01 */
    c->pc = 0xC8B9u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8B9u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC8BBu ^ 0xC8BDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC8BDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC8BBu; } return 1;
case 0xC8BBu: /* LDY IMM A0 24 */
    c->pc = 0xC8BDu;
    v = 0x24u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC8BDu: /* STY ZP 84 0B */
    c->pc = 0xC8BFu;
    ea = 0x0Bu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC8BFu: /* LDA ZP A5 08 */
    c->pc = 0xC8C1u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8C1u: /* LSR IMP 4A */
    c->pc = 0xC8C2u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8C2u: /* LSR IMP 4A */
    c->pc = 0xC8C3u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8C3u: /* PHA IMP 48 */
    c->pc = 0xC8C4u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8C4u: /* LSR IMP 4A */
    c->pc = 0xC8C5u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8C5u: /* AND IMM 29 03 */
    c->pc = 0xC8C7u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8C7u: /* ORA ZP 05 0B */
    c->pc = 0xC8C9u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8C9u: /* STA ABX 9D 00 03 */
    c->pc = 0xC8CCu;
    ea = (uint16_t)(0x0300u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC8CCu: /* PLA IMP 68 */
    c->pc = 0xC8CDu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC8CDu: /* PHA IMP 48 */
    c->pc = 0xC8CEu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8CEu: /* ROR IMP 6A */
    c->pc = 0xC8CFu;
    c->a = ror8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8CFu: /* AND IMM 29 FC */
    c->pc = 0xC8D1u;
    v = 0xFCu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8D1u: /* STA ABX 9D 04 03 */
    c->pc = 0xC8D4u;
    ea = (uint16_t)(0x0304u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC8D4u: /* LDA ZP A5 0B */
    c->pc = 0xC8D6u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8D6u: /* ORA IMM 09 03 */
    c->pc = 0xC8D8u;
    v = 0x03u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8D8u: /* STA ABX 9D 08 03 */
    c->pc = 0xC8DBu;
    ea = (uint16_t)(0x0308u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC8DBu: /* PLA IMP 68 */
    c->pc = 0xC8DCu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC8DCu: /* STA ZP 85 0A */
    c->pc = 0xC8DEu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8DEu: /* LSR IMP 4A */
    c->pc = 0xC8DFu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8DFu: /* LSR IMP 4A */
    c->pc = 0xC8E0u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8E0u: /* LSR IMP 4A */
    c->pc = 0xC8E1u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8E1u: /* ASL ZP 06 0A */
    c->pc = 0xC8E3u;
    ea = 0x0Au; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC8E3u: /* ASL ZP 06 0A */
    c->pc = 0xC8E5u;
    ea = 0x0Au; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC8E5u: /* ASL ZP 06 0A */
    c->pc = 0xC8E7u;
    ea = 0x0Au; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC8E7u: /* ORA ZP 05 0A */
    c->pc = 0xC8E9u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8E9u: /* ORA IMM 09 C0 */
    c->pc = 0xC8EBu;
    v = 0xC0u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8EBu: /* STA ABX 9D 0C 03 */
    c->pc = 0xC8EEu;
    ea = (uint16_t)(0x030Cu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC8EEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC8EFu: /* LDX ZP A6 51 */
    c->pc = 0xC8F1u;
    ea = 0x51u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC8F1u: /* LDY IMM A0 08 */
    c->pc = 0xC8F3u;
    v = 0x08u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC8F3u: /* LDA ZP A5 09 */
    c->pc = 0xC8F5u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8F5u: /* AND IMM 29 01 */
    c->pc = 0xC8F7u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC8F7u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC8F9u ^ 0xC8FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC8FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC8F9u; } return 1;
case 0xC8F9u: /* LDY IMM A0 09 */
    c->pc = 0xC8FBu;
    v = 0x09u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC8FBu: /* STY ZP 84 0B */
    c->pc = 0xC8FDu;
    ea = 0x0Bu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC8FDu: /* LDA ZP A5 0A */
    c->pc = 0xC8FFu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC8FFu: /* AND IMM 29 F8 */
    c->pc = 0xC901u;
    v = 0xF8u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC901u: /* ASL IMP 0A */
    c->pc = 0xC902u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC902u: /* ROL ZP 26 0B */
    c->pc = 0xC904u;
    ea = 0x0Bu; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC904u: /* ASL IMP 0A */
    c->pc = 0xC905u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC905u: /* ROL ZP 26 0B */
    c->pc = 0xC907u;
    ea = 0x0Bu; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC907u: /* STA ABX 9D BC 03 */
    c->pc = 0xC90Au;
    ea = (uint16_t)(0x03BCu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC90Au: /* LDA ZP A5 08 */
    c->pc = 0xC90Cu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC90Cu: /* LSR IMP 4A */
    c->pc = 0xC90Du;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC90Du: /* LSR IMP 4A */
    c->pc = 0xC90Eu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC90Eu: /* LSR IMP 4A */
    c->pc = 0xC90Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC90Fu: /* ORA ABX 1D BC 03 */
    c->pc = 0xC912u;
    ea = (uint16_t)(0x03BCu + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03BCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC912u: /* STA ABX 9D BC 03 */
    c->pc = 0xC915u;
    ea = (uint16_t)(0x03BCu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC915u: /* LDA ZP A5 0B */
    c->pc = 0xC917u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC917u: /* STA ABX 9D B6 03 */
    c->pc = 0xC91Au;
    ea = (uint16_t)(0x03B6u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC91Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC91Bu: /* PHA IMP 48 */
    c->pc = 0xC91Cu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC91Cu: /* LDA ZP A5 08 */
    c->pc = 0xC91Eu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC91Eu: /* PHA IMP 48 */
    c->pc = 0xC91Fu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC91Fu: /* LDX ZP A6 51 */
    c->pc = 0xC921u;
    ea = 0x51u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC921u: /* LDA ZP A5 0A */
    c->pc = 0xC923u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC923u: /* AND IMM 29 E0 */
    c->pc = 0xC925u;
    v = 0xE0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC925u: /* LSR IMP 4A */
    c->pc = 0xC926u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC926u: /* LSR IMP 4A */
    c->pc = 0xC927u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC927u: /* STA ZP 85 0B */
    c->pc = 0xC929u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC929u: /* ASL ZP 06 08 */
    c->pc = 0xC92Bu;
    ea = 0x08u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC92Bu: /* ROL IMP 2A */
    c->pc = 0xC92Cu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC92Cu: /* ASL ZP 06 08 */
    c->pc = 0xC92Eu;
    ea = 0x08u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC92Eu: /* ROL IMP 2A */
    c->pc = 0xC92Fu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC92Fu: /* ASL ZP 06 08 */
    c->pc = 0xC931u;
    ea = 0x08u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC931u: /* ROL IMP 2A */
    c->pc = 0xC932u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC932u: /* ORA ZP 05 0B */
    c->pc = 0xC934u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC934u: /* ORA IMM 09 C0 */
    c->pc = 0xC936u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC936u: /* STA ABX 9D C8 03 */
    c->pc = 0xC939u;
    ea = (uint16_t)(0x03C8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC939u: /* LDY IMM A0 23 */
    c->pc = 0xC93Bu;
    v = 0x23u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC93Bu: /* LDA ZP A5 09 */
    c->pc = 0xC93Du;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC93Du: /* AND IMM 29 01 */
    c->pc = 0xC93Fu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC93Fu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC941u ^ 0xC943u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC943u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC941u; } return 1;
case 0xC941u: /* LDY IMM A0 27 */
    c->pc = 0xC943u;
    v = 0x27u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC943u: /* TYA IMP 98 */
    c->pc = 0xC944u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC944u: /* STA ABX 9D C2 03 */
    c->pc = 0xC947u;
    ea = (uint16_t)(0x03C2u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC947u: /* LDY IMM A0 00 */
    c->pc = 0xC949u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC949u: /* PLA IMP 68 */
    c->pc = 0xC94Au;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC94Au: /* AND IMM 29 10 */
    c->pc = 0xC94Cu;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC94Cu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC94Eu ^ 0xC94Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC94Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xC94Eu; } return 1;
case 0xC94Eu: /* INY IMP C8 */
    c->pc = 0xC94Fu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC94Fu: /* LDA ZP A5 0A */
    c->pc = 0xC951u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC951u: /* AND IMM 29 10 */
    c->pc = 0xC953u;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC953u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC955u ^ 0xC957u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC957u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC955u; } return 1;
case 0xC955u: /* INY IMP C8 */
    c->pc = 0xC956u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC956u: /* INY IMP C8 */
    c->pc = 0xC957u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC957u: /* PLA IMP 68 */
    c->pc = 0xC958u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC958u: /* AND ABY 39 67 C9 */
    c->pc = 0xC95Bu;
    ea = (uint16_t)(0xC967u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC967u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC95Bu: /* STA ABX 9D CE 03 */
    c->pc = 0xC95Eu;
    ea = (uint16_t)(0x03CEu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC95Eu: /* LDA ABY B9 67 C9 */
    c->pc = 0xC961u;
    ea = (uint16_t)(0xC967u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xC967u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC961u: /* EOR IMM 49 FF */
    c->pc = 0xC963u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC963u: /* STA ABX 9D D4 03 */
    c->pc = 0xC966u;
    ea = (uint16_t)(0x03D4u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC966u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xC96Bu: /* LDA ZP A5 2A */
    c->pc = 0xC96Du;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC96Du: /* AND IMM 29 07 */
    c->pc = 0xC96Fu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC96Fu: /* JSR ABS 20 00 C0 */
    push(c, 0xC9u); push(c, 0x71u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xC972u: /* LDA IMM A9 20 */
    c->pc = 0xC974u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC974u: /* STA ZP 85 0B */
    c->pc = 0xC976u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC976u: /* LDY IMM A0 00 */
    c->pc = 0xC978u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC978u: /* LDA IZY B1 08 */
    c->pc = 0xC97Au;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC97Au: /* TAX IMP AA */
    c->pc = 0xC97Bu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC97Bu: /* TAY IMP A8 */
    c->pc = 0xC97Cu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC97Cu: /* LDA ABY B9 00 84 */
    c->pc = 0xC97Fu;
    ea = (uint16_t)(0x8400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC97Fu: /* PHA IMP 48 */
    c->pc = 0xC980u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC980u: /* TXA IMP 8A */
    c->pc = 0xC981u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC981u: /* ASL IMP 0A */
    c->pc = 0xC982u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC982u: /* ROL ZP 26 0B */
    c->pc = 0xC984u;
    ea = 0x0Bu; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC984u: /* ASL IMP 0A */
    c->pc = 0xC985u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC985u: /* ROL ZP 26 0B */
    c->pc = 0xC987u;
    ea = 0x0Bu; v = read8(c, ea);
    v = rol8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC987u: /* STA ZP 85 0A */
    c->pc = 0xC989u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC989u: /* LDA ZP A5 1B */
    c->pc = 0xC98Bu;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC98Bu: /* ASL IMP 0A */
    c->pc = 0xC98Cu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC98Cu: /* ASL IMP 0A */
    c->pc = 0xC98Du;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC98Du: /* ASL IMP 0A */
    c->pc = 0xC98Eu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC98Eu: /* ASL IMP 0A */
    c->pc = 0xC98Fu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC98Fu: /* TAX IMP AA */
    c->pc = 0xC990u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC990u: /* PHA IMP 48 */
    c->pc = 0xC991u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC991u: /* LDY IMM A0 00 */
    c->pc = 0xC993u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC993u: /* CLC IMP 18 */
    c->pc = 0xC994u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC994u: /* PLA IMP 68 */
    c->pc = 0xC995u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC995u: /* PHA IMP 48 */
    c->pc = 0xC996u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC996u: /* ADC ABY 79 07 CA */
    c->pc = 0xC999u;
    ea = (uint16_t)(0xCA07u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xCA07u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC999u: /* TAX IMP AA */
    c->pc = 0xC99Au;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xC99Au: /* LDA IZY B1 0A */
    c->pc = 0xC99Cu;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xC99Cu: /* ASL IMP 0A */
    c->pc = 0xC99Du;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC99Du: /* ASL IMP 0A */
    c->pc = 0xC99Eu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC99Eu: /* CLC IMP 18 */
    c->pc = 0xC99Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xC99Fu: /* STA ABX 9D 10 03 */
    c->pc = 0xC9A2u;
    ea = (uint16_t)(0x0310u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9A2u: /* ADC IMM 69 01 */
    c->pc = 0xC9A4u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC9A4u: /* STA ABX 9D 14 03 */
    c->pc = 0xC9A7u;
    ea = (uint16_t)(0x0314u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9A7u: /* ADC IMM 69 01 */
    c->pc = 0xC9A9u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC9A9u: /* STA ABX 9D 11 03 */
    c->pc = 0xC9ACu;
    ea = (uint16_t)(0x0311u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9ACu: /* ADC IMM 69 01 */
    c->pc = 0xC9AEu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xC9AEu: /* STA ABX 9D 15 03 */
    c->pc = 0xC9B1u;
    ea = (uint16_t)(0x0315u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9B1u: /* INY IMP C8 */
    c->pc = 0xC9B2u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC9B2u: /* CPY IMM C0 04 */
    c->pc = 0xC9B4u;
    v = 0x04u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xC9B4u: /* BNE REL D0 DD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xC9B6u ^ 0xC993u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC993u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC9B6u; } return 1;
case 0xC9B6u: /* PLA IMP 68 */
    c->pc = 0xC9B7u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC9B7u: /* LDY IMM A0 20 */
    c->pc = 0xC9B9u;
    v = 0x20u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC9B9u: /* LDA ZP A5 08 */
    c->pc = 0xC9BBu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9BBu: /* AND IMM 29 40 */
    c->pc = 0xC9BDu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9BDu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xC9BFu ^ 0xC9C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xC9C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xC9BFu; } return 1;
case 0xC9BFu: /* LDY IMM A0 24 */
    c->pc = 0xC9C1u;
    v = 0x24u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xC9C1u: /* STY ZP 84 0D */
    c->pc = 0xC9C3u;
    ea = 0x0Du;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xC9C3u: /* LDA ZP A5 1A */
    c->pc = 0xC9C5u;
    ea = 0x1Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9C5u: /* STA ZP 85 0C */
    c->pc = 0xC9C7u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9C7u: /* LSR IMP 4A */
    c->pc = 0xC9C8u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9C8u: /* ROR ZP 66 0C */
    c->pc = 0xC9CAu;
    ea = 0x0Cu; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC9CAu: /* LDA ZP A5 0C */
    c->pc = 0xC9CCu;
    ea = 0x0Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9CCu: /* PHA IMP 48 */
    c->pc = 0xC9CDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9CDu: /* AND IMM 29 03 */
    c->pc = 0xC9CFu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9CFu: /* ORA ZP 05 0D */
    c->pc = 0xC9D1u;
    ea = 0x0Du;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9D1u: /* STA ZP 85 0D */
    c->pc = 0xC9D3u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9D3u: /* PLA IMP 68 */
    c->pc = 0xC9D4u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC9D4u: /* AND IMM 29 FC */
    c->pc = 0xC9D6u;
    v = 0xFCu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9D6u: /* LDX ZP A6 1B */
    c->pc = 0xC9D8u;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xC9D8u: /* STA ABX 9D 04 03 */
    c->pc = 0xC9DBu;
    ea = (uint16_t)(0x0304u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9DBu: /* LDA ZP A5 0D */
    c->pc = 0xC9DDu;
    ea = 0x0Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9DDu: /* STA ABX 9D 00 03 */
    c->pc = 0xC9E0u;
    ea = (uint16_t)(0x0300u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9E0u: /* LDA ZP A5 0D */
    c->pc = 0xC9E2u;
    ea = 0x0Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9E2u: /* ORA IMM 09 03 */
    c->pc = 0xC9E4u;
    v = 0x03u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9E4u: /* STA ABX 9D 08 03 */
    c->pc = 0xC9E7u;
    ea = (uint16_t)(0x0308u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9E7u: /* LDA ZP A5 1A */
    c->pc = 0xC9E9u;
    ea = 0x1Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9E9u: /* STA ZP 85 0C */
    c->pc = 0xC9EBu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9EBu: /* LSR IMP 4A */
    c->pc = 0xC9ECu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9ECu: /* LSR IMP 4A */
    c->pc = 0xC9EDu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9EDu: /* LSR IMP 4A */
    c->pc = 0xC9EEu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9EEu: /* ASL ZP 06 0C */
    c->pc = 0xC9F0u;
    ea = 0x0Cu; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC9F0u: /* ASL ZP 06 0C */
    c->pc = 0xC9F2u;
    ea = 0x0Cu; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC9F2u: /* ASL ZP 06 0C */
    c->pc = 0xC9F4u;
    ea = 0x0Cu; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xC9F4u: /* ORA IMM 09 C0 */
    c->pc = 0xC9F6u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xC9F6u: /* ORA ZP 05 0C */
    c->pc = 0xC9F8u;
    ea = 0x0Cu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xC9F8u: /* STA ABX 9D 0C 03 */
    c->pc = 0xC9FBu;
    ea = (uint16_t)(0x030Cu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9FBu: /* PLA IMP 68 */
    c->pc = 0xC9FCu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xC9FCu: /* STA ABX 9D 50 03 */
    c->pc = 0xC9FFu;
    ea = (uint16_t)(0x0350u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xC9FFu: /* INC ZP E6 1B */
    c->pc = 0xCA01u;
    ea = 0x1Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA01u: /* LDA IMM A9 0E */
    c->pc = 0xCA03u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA03u: /* JSR ABS 20 00 C0 */
    push(c, 0xCAu); push(c, 0x05u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCA06u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCA0Bu: /* LDA ZP A5 29 */
    c->pc = 0xCA0Du;
    ea = 0x29u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA0Du: /* PHA IMP 48 */
    c->pc = 0xCA0Eu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA0Eu: /* JSR ABS 20 6B C9 */
    push(c, 0xCAu); push(c, 0x10u); c->pc = 0xC96Bu; c->cpu_cycles += 6u; return 1;
case 0xCA11u: /* PLA IMP 68 */
    c->pc = 0xCA12u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA12u: /* JSR ABS 20 00 C0 */
    push(c, 0xCAu); push(c, 0x14u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCA15u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCA16u: /* LDA ZP A5 2A */
    c->pc = 0xCA18u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA18u: /* AND IMM 29 07 */
    c->pc = 0xCA1Au;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA1Au: /* JSR ABS 20 00 C0 */
    push(c, 0xCAu); push(c, 0x1Cu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCA1Du: /* LDA ZP A5 39 */
    c->pc = 0xCA1Fu;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA1Fu: /* LSR IMP 4A */
    c->pc = 0xCA20u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA20u: /* LSR IMP 4A */
    c->pc = 0xCA21u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA21u: /* LSR IMP 4A */
    c->pc = 0xCA22u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA22u: /* LSR IMP 4A */
    c->pc = 0xCA23u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA23u: /* STA ABS 8D 00 03 */
    c->pc = 0xCA26u;
    ea = 0x0300u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA26u: /* LDA ZP A5 39 */
    c->pc = 0xCA28u;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA28u: /* ASL IMP 0A */
    c->pc = 0xCA29u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA29u: /* ASL IMP 0A */
    c->pc = 0xCA2Au;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA2Au: /* ASL IMP 0A */
    c->pc = 0xCA2Bu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA2Bu: /* PHA IMP 48 */
    c->pc = 0xCA2Cu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA2Cu: /* AND IMM 29 18 */
    c->pc = 0xCA2Eu;
    v = 0x18u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA2Eu: /* STA ABS 8D 01 03 */
    c->pc = 0xCA31u;
    ea = 0x0301u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA31u: /* PLA IMP 68 */
    c->pc = 0xCA32u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA32u: /* ASL IMP 0A */
    c->pc = 0xCA33u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA33u: /* AND IMM 29 C0 */
    c->pc = 0xCA35u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA35u: /* ORA ABS 0D 01 03 */
    c->pc = 0xCA38u;
    ea = 0x0301u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA38u: /* STA ABS 8D 01 03 */
    c->pc = 0xCA3Bu;
    ea = 0x0301u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA3Bu: /* LDA ZP A5 39 */
    c->pc = 0xCA3Du;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA3Du: /* AND IMM 29 F8 */
    c->pc = 0xCA3Fu;
    v = 0xF8u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA3Fu: /* ORA IMM 09 C0 */
    c->pc = 0xCA41u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA41u: /* STA ABS 8D 13 03 */
    c->pc = 0xCA44u;
    ea = 0x0313u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA44u: /* LDA ZP A5 39 */
    c->pc = 0xCA46u;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA46u: /* AND IMM 29 03 */
    c->pc = 0xCA48u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA48u: /* ASL IMP 0A */
    c->pc = 0xCA49u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA49u: /* ORA ABS 0D 13 03 */
    c->pc = 0xCA4Cu;
    ea = 0x0313u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA4Cu: /* STA ABS 8D 13 03 */
    c->pc = 0xCA4Fu;
    ea = 0x0313u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA4Fu: /* LDX IMM A2 20 */
    c->pc = 0xCA51u;
    v = 0x20u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCA51u: /* LDA ZP A5 20 */
    c->pc = 0xCA53u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA53u: /* AND IMM 29 01 */
    c->pc = 0xCA55u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA55u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCA57u ^ 0xCA59u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCA59u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCA57u; } return 1;
case 0xCA57u: /* LDX IMM A2 24 */
    c->pc = 0xCA59u;
    v = 0x24u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCA59u: /* TXA IMP 8A */
    c->pc = 0xCA5Au;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA5Au: /* ORA ABS 0D 00 03 */
    c->pc = 0xCA5Du;
    ea = 0x0300u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA5Du: /* STA ABS 8D 00 03 */
    c->pc = 0xCA60u;
    ea = 0x0300u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA60u: /* TXA IMP 8A */
    c->pc = 0xCA61u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA61u: /* ORA IMM 09 03 */
    c->pc = 0xCA63u;
    v = 0x03u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA63u: /* STA ABS 8D 12 03 */
    c->pc = 0xCA66u;
    ea = 0x0312u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA66u: /* LDA IMM A9 00 */
    c->pc = 0xCA68u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA68u: /* STA ZP 85 00 */
    c->pc = 0xCA6Au;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA6Au: /* LDA ZP A5 39 */
    c->pc = 0xCA6Cu;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA6Cu: /* AND IMM 29 3B */
    c->pc = 0xCA6Eu;
    v = 0x3Bu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA6Eu: /* LSR IMP 4A */
    c->pc = 0xCA6Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA6Fu: /* ROR ZP 66 00 */
    c->pc = 0xCA71u;
    ea = 0x00u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA71u: /* LSR IMP 4A */
    c->pc = 0xCA72u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA72u: /* ROR ZP 66 00 */
    c->pc = 0xCA74u;
    ea = 0x00u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA74u: /* LSR IMP 4A */
    c->pc = 0xCA75u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA75u: /* ROR ZP 66 00 */
    c->pc = 0xCA77u;
    ea = 0x00u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA77u: /* LSR ZP 46 00 */
    c->pc = 0xCA79u;
    ea = 0x00u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA79u: /* ORA ZP 05 00 */
    c->pc = 0xCA7Bu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA7Bu: /* STA ZP 85 00 */
    c->pc = 0xCA7Du;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA7Du: /* LDA ABS AD 40 04 */
    c->pc = 0xCA80u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCA80u: /* LDX IMM A2 00 */
    c->pc = 0xCA82u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCA82u: /* STX ZP 86 08 */
    c->pc = 0xCA84u;
    ea = 0x08u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCA84u: /* LSR IMP 4A */
    c->pc = 0xCA85u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA85u: /* ROR ZP 66 08 */
    c->pc = 0xCA87u;
    ea = 0x08u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA87u: /* LSR IMP 4A */
    c->pc = 0xCA88u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA88u: /* ROR ZP 66 08 */
    c->pc = 0xCA8Au;
    ea = 0x08u; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA8Au: /* CLC IMP 18 */
    c->pc = 0xCA8Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCA8Bu: /* ADC IMM 69 85 */
    c->pc = 0xCA8Du;
    v = 0x85u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCA8Du: /* STA ZP 85 09 */
    c->pc = 0xCA8Fu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA8Fu: /* STX ZP 86 01 */
    c->pc = 0xCA91u;
    ea = 0x01u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCA91u: /* LDY ZP A4 00 */
    c->pc = 0xCA93u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCA93u: /* LDA IZY B1 08 */
    c->pc = 0xCA95u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCA95u: /* STA ZP 85 03 */
    c->pc = 0xCA97u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA97u: /* STA ZP 85 0A */
    c->pc = 0xCA99u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCA99u: /* LDA IMM A9 20 */
    c->pc = 0xCA9Bu;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA9Bu: /* ASL ZP 06 0A */
    c->pc = 0xCA9Du;
    ea = 0x0Au; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCA9Du: /* ROL IMP 2A */
    c->pc = 0xCA9Eu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCA9Eu: /* ASL ZP 06 0A */
    c->pc = 0xCAA0u;
    ea = 0x0Au; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCAA0u: /* ROL IMP 2A */
    c->pc = 0xCAA1u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAA1u: /* STA ZP 85 0B */
    c->pc = 0xCAA3u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAA3u: /* LDY IMM A0 00 */
    c->pc = 0xCAA5u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCAA5u: /* LDA ZP A5 39 */
    c->pc = 0xCAA7u;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAA7u: /* AND IMM 29 04 */
    c->pc = 0xCAA9u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAA9u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCAABu ^ 0xCAACu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCAACu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCAABu; } return 1;
case 0xCAABu: /* INY IMP C8 */
    c->pc = 0xCAACu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCAACu: /* LDA IMM A9 02 */
    c->pc = 0xCAAEu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAAEu: /* STA ZP 85 02 */
    c->pc = 0xCAB0u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAB0u: /* LDA IZY B1 0A */
    c->pc = 0xCAB2u;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCAB2u: /* ASL IMP 0A */
    c->pc = 0xCAB3u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAB3u: /* ASL IMP 0A */
    c->pc = 0xCAB4u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAB4u: /* CLC IMP 18 */
    c->pc = 0xCAB5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCAB5u: /* STA ABX 9D 02 03 */
    c->pc = 0xCAB8u;
    ea = (uint16_t)(0x0302u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCAB8u: /* ADC IMM 69 01 */
    c->pc = 0xCABAu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCABAu: /* STA ABX 9D 0A 03 */
    c->pc = 0xCABDu;
    ea = (uint16_t)(0x030Au + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCABDu: /* ADC IMM 69 01 */
    c->pc = 0xCABFu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCABFu: /* STA ABX 9D 03 03 */
    c->pc = 0xCAC2u;
    ea = (uint16_t)(0x0303u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCAC2u: /* ADC IMM 69 01 */
    c->pc = 0xCAC4u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCAC4u: /* STA ABX 9D 0B 03 */
    c->pc = 0xCAC7u;
    ea = (uint16_t)(0x030Bu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCAC7u: /* INX IMP E8 */
    c->pc = 0xCAC8u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCAC8u: /* INX IMP E8 */
    c->pc = 0xCAC9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCAC9u: /* INY IMP C8 */
    c->pc = 0xCACAu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCACAu: /* INY IMP C8 */
    c->pc = 0xCACBu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCACBu: /* DEC ZP C6 02 */
    c->pc = 0xCACDu;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCACDu: /* BNE REL D0 E1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCACFu ^ 0xCAB0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCAB0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCACFu; } return 1;
case 0xCACFu: /* LDA ZP A5 39 */
    c->pc = 0xCAD1u;
    ea = 0x39u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAD1u: /* LDY IMM A0 0F */
    c->pc = 0xCAD3u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCAD3u: /* AND IMM 29 04 */
    c->pc = 0xCAD5u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAD5u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCAD7u ^ 0xCAD9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCAD9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCAD7u; } return 1;
case 0xCAD7u: /* LDY IMM A0 F0 */
    c->pc = 0xCAD9u;
    v = 0xF0u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCAD9u: /* STY ABS 8C 14 03 */
    c->pc = 0xCADCu;
    ea = 0x0314u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xCADCu: /* LDY ZP A4 03 */
    c->pc = 0xCADEu;
    ea = 0x03u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCADEu: /* LDA ABY B9 00 84 */
    c->pc = 0xCAE1u;
    ea = (uint16_t)(0x8400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCAE1u: /* AND ABS 2D 14 03 */
    c->pc = 0xCAE4u;
    ea = 0x0314u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCAE4u: /* LDY ZP A4 01 */
    c->pc = 0xCAE6u;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCAE6u: /* STA ABY 99 15 03 */
    c->pc = 0xCAE9u;
    ea = (uint16_t)(0x0315u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCAE9u: /* LDA ZP A5 00 */
    c->pc = 0xCAEBu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAEBu: /* ORA IMM 09 08 */
    c->pc = 0xCAEDu;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAEDu: /* STA ZP 85 00 */
    c->pc = 0xCAEFu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAEFu: /* INC ZP E6 01 */
    c->pc = 0xCAF1u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCAF1u: /* LDA ZP A5 01 */
    c->pc = 0xCAF3u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAF3u: /* CMP IMM C9 02 */
    c->pc = 0xCAF5u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCAF5u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCAF7u ^ 0xCAFAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCAFAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCAF7u; } return 1;
case 0xCAF7u: /* JMP ABS 4C 91 CA */
    c->pc = 0xCA91u; c->cpu_cycles += 3u; return 1;
case 0xCAFAu: /* LDA IMM A9 80 */
    c->pc = 0xCAFCu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCAFCu: /* STA ZP 85 1B */
    c->pc = 0xCAFEu;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCAFEu: /* LDA IMM A9 FF */
    c->pc = 0xCB00u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB00u: /* EOR ABS 4D 14 03 */
    c->pc = 0xCB03u;
    ea = 0x0314u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB03u: /* STA ABS 8D 14 03 */
    c->pc = 0xCB06u;
    ea = 0x0314u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB06u: /* LDA IMM A9 0E */
    c->pc = 0xCB08u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB08u: /* JSR ABS 20 00 C0 */
    push(c, 0xCBu); push(c, 0x0Au); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCB0Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCB0Cu: /* LDA ZP A5 FD */
    c->pc = 0xCB0Eu;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB0Eu: /* CMP IMM C9 60 */
    c->pc = 0xCB10u;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCB10u: /* BCC REL 90 01 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xCB12u ^ 0xCB13u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCB13u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCB12u; } return 1;
case 0xCB12u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCB13u: /* LDA ZP A5 29 */
    c->pc = 0xCB15u;
    ea = 0x29u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB15u: /* PHA IMP 48 */
    c->pc = 0xCB16u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB16u: /* LDA ZP A5 FD */
    c->pc = 0xCB18u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB18u: /* AND IMM 29 F0 */
    c->pc = 0xCB1Au;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB1Au: /* LSR IMP 4A */
    c->pc = 0xCB1Bu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB1Bu: /* LSR IMP 4A */
    c->pc = 0xCB1Cu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB1Cu: /* LSR IMP 4A */
    c->pc = 0xCB1Du;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB1Du: /* PHA IMP 48 */
    c->pc = 0xCB1Eu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB1Eu: /* LSR IMP 4A */
    c->pc = 0xCB1Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB1Fu: /* CLC IMP 18 */
    c->pc = 0xCB20u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCB20u: /* ADC IMM 69 0A */
    c->pc = 0xCB22u;
    v = 0x0Au;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCB22u: /* STA ABS 8D B6 03 */
    c->pc = 0xCB25u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB25u: /* LDA ZP A5 FD */
    c->pc = 0xCB27u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB27u: /* ASL IMP 0A */
    c->pc = 0xCB28u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB28u: /* ASL IMP 0A */
    c->pc = 0xCB29u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB29u: /* ASL IMP 0A */
    c->pc = 0xCB2Au;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB2Au: /* ASL IMP 0A */
    c->pc = 0xCB2Bu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB2Bu: /* STA ABS 8D B7 03 */
    c->pc = 0xCB2Eu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB2Eu: /* STA ZP 85 08 */
    c->pc = 0xCB30u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB30u: /* LDA ZP A5 2A */
    c->pc = 0xCB32u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB32u: /* AND IMM 29 07 */
    c->pc = 0xCB34u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB34u: /* JSR ABS 20 00 C0 */
    push(c, 0xCBu); push(c, 0x36u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCB37u: /* LDX ZP A6 FE */
    c->pc = 0xCB39u;
    ea = 0xFEu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCB39u: /* JSR ABS 20 64 CB */
    push(c, 0xCBu); push(c, 0x3Bu); c->pc = 0xCB64u; c->cpu_cycles += 6u; return 1;
case 0xCB3Cu: /* CLC IMP 18 */
    c->pc = 0xCB3Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCB3Du: /* PLA IMP 68 */
    c->pc = 0xCB3Eu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB3Eu: /* ADC ABX 7D 2C B4 */
    c->pc = 0xCB41u;
    ea = (uint16_t)(0xB42Cu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xB42Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB41u: /* TAX IMP AA */
    c->pc = 0xCB42u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCB42u: /* LDA ABX BD 60 B4 */
    c->pc = 0xCB45u;
    ea = (uint16_t)(0xB460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB45u: /* STA ZP 85 09 */
    c->pc = 0xCB47u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB47u: /* LDA ABX BD 61 B4 */
    c->pc = 0xCB4Au;
    ea = (uint16_t)(0xB461u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB461u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB4Au: /* JSR ABS 20 00 C0 */
    push(c, 0xCBu); push(c, 0x4Cu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCB4Du: /* LDY IMM A0 1F */
    c->pc = 0xCB4Fu;
    v = 0x1Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCB4Fu: /* LDA IZY B1 08 */
    c->pc = 0xCB51u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB51u: /* STA ABY 99 B8 03 */
    c->pc = 0xCB54u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCB54u: /* DEY IMP 88 */
    c->pc = 0xCB55u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCB55u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xCB57u ^ 0xCB4Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCB4Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCB57u; } return 1;
case 0xCB57u: /* LDA IMM A9 20 */
    c->pc = 0xCB59u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB59u: /* STA ZP 85 47 */
    c->pc = 0xCB5Bu;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCB5Bu: /* INC ZP E6 FD */
    c->pc = 0xCB5Du;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCB5Du: /* INC ZP E6 FD */
    c->pc = 0xCB5Fu;
    ea = 0xFDu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCB5Fu: /* PLA IMP 68 */
    c->pc = 0xCB60u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB60u: /* JSR ABS 20 00 C0 */
    push(c, 0xCBu); push(c, 0x62u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCB63u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCB64u: /* LDY ABX BC 2C B4 */
    c->pc = 0xCB67u;
    ea = (uint16_t)(0xB42Cu + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0xB42Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB67u: /* LDA ABY B9 6C B4 */
    c->pc = 0xCB6Au;
    ea = (uint16_t)(0xB46Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB46Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB6Au: /* STA ABS 8D 6F 03 */
    c->pc = 0xCB6Du;
    ea = 0x036Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB6Du: /* LDA ABY B9 6D B4 */
    c->pc = 0xCB70u;
    ea = (uint16_t)(0xB46Du + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB46Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB70u: /* STA ABS 8D 70 03 */
    c->pc = 0xCB73u;
    ea = 0x0370u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB73u: /* LDA ABY B9 6E B4 */
    c->pc = 0xCB76u;
    ea = (uint16_t)(0xB46Eu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB46Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB76u: /* STA ABS 8D 71 03 */
    c->pc = 0xCB79u;
    ea = 0x0371u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB79u: /* LDA ABY B9 6F B4 */
    c->pc = 0xCB7Cu;
    ea = (uint16_t)(0xB46Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB46Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB7Cu: /* STA ABS 8D 73 03 */
    c->pc = 0xCB7Fu;
    ea = 0x0373u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB7Fu: /* LDA ABY B9 70 B4 */
    c->pc = 0xCB82u;
    ea = (uint16_t)(0xB470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB82u: /* STA ABS 8D 74 03 */
    c->pc = 0xCB85u;
    ea = 0x0374u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB85u: /* LDA ABY B9 71 B4 */
    c->pc = 0xCB88u;
    ea = (uint16_t)(0xB471u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB471u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB88u: /* STA ABS 8D 75 03 */
    c->pc = 0xCB8Bu;
    ea = 0x0375u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCB8Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCB8Cu: /* LDX IMM A2 0F */
    c->pc = 0xCB8Eu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCB8Eu: /* LDY IMM A0 00 */
    c->pc = 0xCB90u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCB90u: /* LDA ABX BD 30 04 */
    c->pc = 0xCB93u;
    ea = (uint16_t)(0x0430u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCB93u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xCB95u ^ 0xCB9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCB9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCB95u; } return 1;
case 0xCB95u: /* AND IMM 29 10 */
    c->pc = 0xCB97u;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCB97u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCB99u ^ 0xCB9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCB9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCB99u; } return 1;
case 0xCB99u: /* STX ZPY 96 56 */
    c->pc = 0xCB9Bu;
    ea = (uint8_t)(0x56u + c->y);
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xCB9Bu: /* INY IMP C8 */
    c->pc = 0xCB9Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCB9Cu: /* DEX IMP CA */
    c->pc = 0xCB9Du;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCB9Du: /* BPL REL 10 F1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xCB9Fu ^ 0xCB90u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCB90u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCB9Fu; } return 1;
case 0xCB9Fu: /* STY ZP 84 55 */
    c->pc = 0xCBA1u;
    ea = 0x55u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCBA1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCBA2u: /* LDY ZP A4 55 */
    c->pc = 0xCBA4u;
    ea = 0x55u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCBA4u: /* DEY IMP 88 */
    c->pc = 0xCBA5u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCBA5u: /* BMI REL 30 1C */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCBA7u ^ 0xCBC3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCBC3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCBA7u; } return 1;
case 0xCBA7u: /* LDX ZPY B6 56 */
    c->pc = 0xCBA9u;
    ea = (uint8_t)(0x56u + c->y);
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xCBA9u: /* LDA ZP A5 08 */
    c->pc = 0xCBABu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBABu: /* AND ABX 3D 10 06 */
    c->pc = 0xCBAEu;
    ea = (uint16_t)(0x0610u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0610u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCBAEu: /* CMP ABX DD 50 06 */
    c->pc = 0xCBB1u;
    ea = (uint16_t)(0x0650u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0650u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCBB1u: /* BNE REL D0 F1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCBB3u ^ 0xCBA4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCBA4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCBB3u; } return 1;
case 0xCBB3u: /* LDA ZP A5 0A */
    c->pc = 0xCBB5u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBB5u: /* AND ABX 3D 30 06 */
    c->pc = 0xCBB8u;
    ea = (uint16_t)(0x0630u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0630u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCBB8u: /* CMP ABX DD 70 06 */
    c->pc = 0xCBBBu;
    ea = (uint16_t)(0x0670u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0670u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCBBBu: /* BNE REL D0 E7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCBBDu ^ 0xCBA4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCBA4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCBBDu; } return 1;
case 0xCBBDu: /* LDA ABX BD F0 04 */
    c->pc = 0xCBC0u;
    ea = (uint16_t)(0x04F0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04F0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCBC0u: /* STA ZP 85 00 */
    c->pc = 0xCBC2u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBC2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCBC3u: /* LDA ZP A5 2A */
    c->pc = 0xCBC5u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBC5u: /* AND IMM 29 07 */
    c->pc = 0xCBC7u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBC7u: /* JSR ABS 20 00 C0 */
    push(c, 0xCBu); push(c, 0xC9u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCBCAu: /* LDA IMM A9 00 */
    c->pc = 0xCBCCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBCCu: /* STA ZP 85 00 */
    c->pc = 0xCBCEu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBCEu: /* LDA ZP A5 0B */
    c->pc = 0xCBD0u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBD0u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCBD2u ^ 0xCBDBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCBDBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCBD2u; } return 1;
case 0xCBD2u: /* BMI REL 30 03 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCBD4u ^ 0xCBD7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCBD7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCBD4u; } return 1;
case 0xCBD4u: /* JMP ABS 4C 41 CC */
    c->pc = 0xCC41u; c->cpu_cycles += 3u; return 1;
case 0xCBD7u: /* LDA IMM A9 00 */
    c->pc = 0xCBD9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBD9u: /* STA ZP 85 0A */
    c->pc = 0xCBDBu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBDBu: /* LDA ZP A5 08 */
    c->pc = 0xCBDDu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBDDu: /* LSR IMP 4A */
    c->pc = 0xCBDEu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBDEu: /* LSR IMP 4A */
    c->pc = 0xCBDFu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBDFu: /* AND IMM 29 38 */
    c->pc = 0xCBE1u;
    v = 0x38u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBE1u: /* STA ZP 85 00 */
    c->pc = 0xCBE3u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBE3u: /* LDA ZP A5 0A */
    c->pc = 0xCBE5u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBE5u: /* ASL IMP 0A */
    c->pc = 0xCBE6u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBE6u: /* ROL IMP 2A */
    c->pc = 0xCBE7u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBE7u: /* ROL IMP 2A */
    c->pc = 0xCBE8u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBE8u: /* ROL IMP 2A */
    c->pc = 0xCBE9u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBE9u: /* AND IMM 29 07 */
    c->pc = 0xCBEBu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBEBu: /* ORA ZP 05 00 */
    c->pc = 0xCBEDu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBEDu: /* STA ZP 85 00 */
    c->pc = 0xCBEFu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBEFu: /* LDA IMM A9 00 */
    c->pc = 0xCBF1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBF1u: /* STA ZP 85 0C */
    c->pc = 0xCBF3u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBF3u: /* LDA ZP A5 09 */
    c->pc = 0xCBF5u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCBF5u: /* LSR IMP 4A */
    c->pc = 0xCBF6u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBF6u: /* ROR ZP 66 0C */
    c->pc = 0xCBF8u;
    ea = 0x0Cu; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCBF8u: /* LSR IMP 4A */
    c->pc = 0xCBF9u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCBF9u: /* ROR ZP 66 0C */
    c->pc = 0xCBFBu;
    ea = 0x0Cu; v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCBFBu: /* CLC IMP 18 */
    c->pc = 0xCBFCu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCBFCu: /* ADC IMM 69 85 */
    c->pc = 0xCBFEu;
    v = 0x85u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCBFEu: /* STA ZP 85 0D */
    c->pc = 0xCC00u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC00u: /* LDY ZP A4 00 */
    c->pc = 0xCC02u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCC02u: /* LDA IZY B1 0C */
    c->pc = 0xCC04u;
    ea = (uint16_t)(read16_zp(c, 0x0Cu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Cu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCC04u: /* STA ZP 85 0C */
    c->pc = 0xCC06u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC06u: /* LDA IMM A9 20 */
    c->pc = 0xCC08u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC08u: /* ASL ZP 06 0C */
    c->pc = 0xCC0Au;
    ea = 0x0Cu; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCC0Au: /* ROL IMP 2A */
    c->pc = 0xCC0Bu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC0Bu: /* ASL ZP 06 0C */
    c->pc = 0xCC0Du;
    ea = 0x0Cu; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCC0Du: /* ROL IMP 2A */
    c->pc = 0xCC0Eu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC0Eu: /* STA ZP 85 0D */
    c->pc = 0xCC10u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC10u: /* LDY IMM A0 00 */
    c->pc = 0xCC12u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCC12u: /* LDA ZP A5 08 */
    c->pc = 0xCC14u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC14u: /* AND IMM 29 10 */
    c->pc = 0xCC16u;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC16u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCC18u ^ 0xCC1Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCC1Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xCC18u; } return 1;
case 0xCC18u: /* INY IMP C8 */
    c->pc = 0xCC19u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCC19u: /* INY IMP C8 */
    c->pc = 0xCC1Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCC1Au: /* LDA ZP A5 0A */
    c->pc = 0xCC1Cu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC1Cu: /* AND IMM 29 10 */
    c->pc = 0xCC1Eu;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC1Eu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCC20u ^ 0xCC21u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCC21u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCC20u; } return 1;
case 0xCC20u: /* INY IMP C8 */
    c->pc = 0xCC21u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCC21u: /* LDA IZY B1 0C */
    c->pc = 0xCC23u;
    ea = (uint16_t)(read16_zp(c, 0x0Cu) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Cu) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCC23u: /* STA ZP 85 00 */
    c->pc = 0xCC25u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC25u: /* ASL ZP 06 00 */
    c->pc = 0xCC27u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCC27u: /* ROL IMP 2A */
    c->pc = 0xCC28u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC28u: /* ASL ZP 06 00 */
    c->pc = 0xCC2Au;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCC2Au: /* ROL IMP 2A */
    c->pc = 0xCC2Bu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC2Bu: /* AND IMM 29 03 */
    c->pc = 0xCC2Du;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC2Du: /* STA ZP 85 00 */
    c->pc = 0xCC2Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC2Fu: /* LSR IMP 4A */
    c->pc = 0xCC30u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC30u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCC32u ^ 0xCC41u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCC41u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCC32u; } return 1;
case 0xCC32u: /* DEC ZP C6 00 */
    c->pc = 0xCC34u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCC34u: /* DEC ZP C6 00 */
    c->pc = 0xCC36u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCC36u: /* LDA ZP A5 2A */
    c->pc = 0xCC38u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC38u: /* ASL IMP 0A */
    c->pc = 0xCC39u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC39u: /* ADC ZP 65 00 */
    c->pc = 0xCC3Bu;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xCC3Bu: /* TAX IMP AA */
    c->pc = 0xCC3Cu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCC3Cu: /* LDA ABX BD 47 CC */
    c->pc = 0xCC3Fu;
    ea = (uint16_t)(0xCC47u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xCC47u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCC3Fu: /* STA ZP 85 00 */
    c->pc = 0xCC41u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC41u: /* LDA IMM A9 0E */
    c->pc = 0xCC43u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC43u: /* JSR ABS 20 00 C0 */
    push(c, 0xCCu); push(c, 0x45u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCC46u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCC63u: /* JSR ABS 20 A2 CB */
    push(c, 0xCCu); push(c, 0x65u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xCC66u: /* LDA IMM A9 0B */
    c->pc = 0xCC68u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC68u: /* JSR ABS 20 00 C0 */
    push(c, 0xCCu); push(c, 0x6Au); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCC6Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCC6Cu: /* LDA IMM A9 F8 */
    c->pc = 0xCC6Eu;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC6Eu: /* LDX IMM A2 00 */
    c->pc = 0xCC70u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCC70u: /* STA ABX 9D 00 02 */
    c->pc = 0xCC73u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCC73u: /* INX IMP E8 */
    c->pc = 0xCC74u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCC74u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCC76u ^ 0xCC70u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCC70u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCC76u; } return 1;
case 0xCC76u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCC77u: /* LDA IMM A9 0A */
    c->pc = 0xCC79u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC79u: /* JSR ABS 20 00 C0 */
    push(c, 0xCCu); push(c, 0x7Bu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCC7Cu: /* JSR ABS 20 6C CC */
    push(c, 0xCCu); push(c, 0x7Eu); c->pc = 0xCC6Cu; c->cpu_cycles += 6u; return 1;
case 0xCC7Fu: /* LDA IMM A9 00 */
    c->pc = 0xCC81u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC81u: /* STA ZP 85 06 */
    c->pc = 0xCC83u;
    ea = 0x06u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC83u: /* STA ZP 85 0D */
    c->pc = 0xCC85u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC85u: /* STA ZP 85 0C */
    c->pc = 0xCC87u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC87u: /* LDA ZP A5 AA */
    c->pc = 0xCC89u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC89u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCC8Bu ^ 0xCC8Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCC8Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCC8Bu; } return 1;
case 0xCC8Bu: /* JMP ABS 4C 05 CD */
    c->pc = 0xCD05u; c->cpu_cycles += 3u; return 1;
case 0xCC8Eu: /* LDA ZP A5 1C */
    c->pc = 0xCC90u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC90u: /* AND IMM 29 01 */
    c->pc = 0xCC92u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC92u: /* BNE REL D0 2C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCC94u ^ 0xCCC0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCC0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCC94u; } return 1;
case 0xCC94u: /* LDA IMM A9 FF */
    c->pc = 0xCC96u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC96u: /* STA ZP 85 0C */
    c->pc = 0xCC98u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC98u: /* LDA IMM A9 00 */
    c->pc = 0xCC9Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCC9Au: /* STA ZP 85 2B */
    c->pc = 0xCC9Cu;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCC9Cu: /* JSR ABS 20 E7 CD */
    push(c, 0xCCu); push(c, 0x9Eu); c->pc = 0xCDE7u; c->cpu_cycles += 6u; return 1;
case 0xCC9Fu: /* BCS REL B0 1C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCCA1u ^ 0xCCBDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCBDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCA1u; } return 1;
case 0xCCA1u: /* INC ZP E6 2B */
    c->pc = 0xCCA3u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCCA3u: /* LDA ZP A5 2B */
    c->pc = 0xCCA5u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCA5u: /* CMP IMM C9 10 */
    c->pc = 0xCCA7u;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCCA7u: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCCA9u ^ 0xCC9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCC9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCA9u; } return 1;
case 0xCCA9u: /* JSR ABS 20 F9 CE */
    push(c, 0xCCu); push(c, 0xABu); c->pc = 0xCEF9u; c->cpu_cycles += 6u; return 1;
case 0xCCACu: /* BCS REL B0 0F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCCAEu ^ 0xCCBDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCBDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCAEu; } return 1;
case 0xCCAEu: /* INC ZP E6 2B */
    c->pc = 0xCCB0u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCCB0u: /* LDA ZP A5 2B */
    c->pc = 0xCCB2u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCB2u: /* CMP IMM C9 20 */
    c->pc = 0xCCB4u;
    v = 0x20u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCCB4u: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCCB6u ^ 0xCCA9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCA9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCB6u; } return 1;
case 0xCCB6u: /* LDA ZP A5 06 */
    c->pc = 0xCCB8u;
    ea = 0x06u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCB8u: /* STA ZP 85 0C */
    c->pc = 0xCCBAu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCBAu: /* JSR ABS 20 5D CF */
    push(c, 0xCCu); push(c, 0xBCu); c->pc = 0xCF5Du; c->cpu_cycles += 6u; return 1;
case 0xCCBDu: /* JMP ABS 4C E5 CC */
    c->pc = 0xCCE5u; c->cpu_cycles += 3u; return 1;
case 0xCCC0u: /* JSR ABS 20 5D CF */
    push(c, 0xCCu); push(c, 0xC2u); c->pc = 0xCF5Du; c->cpu_cycles += 6u; return 1;
case 0xCCC3u: /* LDA ZP A5 06 */
    c->pc = 0xCCC5u;
    ea = 0x06u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCC5u: /* STA ZP 85 0D */
    c->pc = 0xCCC7u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCC7u: /* LDA IMM A9 1F */
    c->pc = 0xCCC9u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCCC9u: /* STA ZP 85 2B */
    c->pc = 0xCCCBu;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCCBu: /* JSR ABS 20 F9 CE */
    push(c, 0xCCu); push(c, 0xCDu); c->pc = 0xCEF9u; c->cpu_cycles += 6u; return 1;
case 0xCCCEu: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCCD0u ^ 0xCCE5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCE5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCD0u; } return 1;
case 0xCCD0u: /* DEC ZP C6 2B */
    c->pc = 0xCCD2u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCCD2u: /* LDA ZP A5 2B */
    c->pc = 0xCCD4u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCD4u: /* CMP IMM C9 0F */
    c->pc = 0xCCD6u;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCCD6u: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCCD8u ^ 0xCCCBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCCBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCD8u; } return 1;
case 0xCCD8u: /* JSR ABS 20 E7 CD */
    push(c, 0xCCu); push(c, 0xDAu); c->pc = 0xCDE7u; c->cpu_cycles += 6u; return 1;
case 0xCCDBu: /* BCS REL B0 08 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCCDDu ^ 0xCCE5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCE5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCDDu; } return 1;
case 0xCCDDu: /* DEC ZP C6 2B */
    c->pc = 0xCCDFu;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCCDFu: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xCCE1u ^ 0xCCD8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCD8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCE1u; } return 1;
case 0xCCE1u: /* LDA ZP A5 06 */
    c->pc = 0xCCE3u;
    ea = 0x06u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCE3u: /* STA ZP 85 0C */
    c->pc = 0xCCE5u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCE5u: /* LDA ZP A5 2A */
    c->pc = 0xCCE7u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCCE7u: /* CMP IMM C9 01 */
    c->pc = 0xCCE9u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCCE9u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCCEBu ^ 0xCCFFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCFFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCEBu; } return 1;
case 0xCCEBu: /* LDX ZP A6 0D */
    c->pc = 0xCCEDu;
    ea = 0x0Du;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCCEDu: /* CPX ZP E4 0C */
    c->pc = 0xCCEFu;
    ea = 0x0Cu;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0xCCEFu: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCCF1u ^ 0xCCFFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCFFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCF1u; } return 1;
case 0xCCF1u: /* LDA ABX BD 02 02 */
    c->pc = 0xCCF4u;
    ea = (uint16_t)(0x0202u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0202u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCCF4u: /* ORA IMM 09 20 */
    c->pc = 0xCCF6u;
    v = 0x20u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCCF6u: /* STA ABX 9D 02 02 */
    c->pc = 0xCCF9u;
    ea = (uint16_t)(0x0202u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCCF9u: /* INX IMP E8 */
    c->pc = 0xCCFAu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCCFAu: /* INX IMP E8 */
    c->pc = 0xCCFBu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCCFBu: /* INX IMP E8 */
    c->pc = 0xCCFCu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCCFCu: /* INX IMP E8 */
    c->pc = 0xCCFDu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCCFDu: /* BNE REL D0 EE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCCFFu ^ 0xCCEDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCCEDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCCFFu; } return 1;
case 0xCCFFu: /* LDA IMM A9 0E */
    c->pc = 0xCD01u;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD01u: /* JSR ABS 20 00 C0 */
    push(c, 0xCDu); push(c, 0x03u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xCD04u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCD05u: /* LDA ZP A5 1C */
    c->pc = 0xCD07u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD07u: /* AND IMM 29 01 */
    c->pc = 0xCD09u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD09u: /* BNE REL D0 49 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD0Bu ^ 0xCD54u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD54u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD0Bu; } return 1;
case 0xCD0Bu: /* LDA IMM A9 FF */
    c->pc = 0xCD0Du;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD0Du: /* STA ZP 85 0C */
    c->pc = 0xCD0Fu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD0Fu: /* LDA IMM A9 00 */
    c->pc = 0xCD11u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD11u: /* STA ZP 85 2B */
    c->pc = 0xCD13u;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD13u: /* LDA ZP A5 AA */
    c->pc = 0xCD15u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD15u: /* AND IMM 29 04 */
    c->pc = 0xCD17u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD17u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCD19u ^ 0xCD1Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD1Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD19u; } return 1;
case 0xCD19u: /* JSR ABS 20 97 CD */
    push(c, 0xCDu); push(c, 0x1Bu); c->pc = 0xCD97u; c->cpu_cycles += 6u; return 1;
case 0xCD1Cu: /* JMP ABS 4C 22 CD */
    c->pc = 0xCD22u; c->cpu_cycles += 3u; return 1;
case 0xCD1Fu: /* JSR ABS 20 E7 CD */
    push(c, 0xCDu); push(c, 0x21u); c->pc = 0xCDE7u; c->cpu_cycles += 6u; return 1;
case 0xCD22u: /* INC ZP E6 2B */
    c->pc = 0xCD24u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCD24u: /* LDA ZP A5 AA */
    c->pc = 0xCD26u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD26u: /* AND IMM 29 02 */
    c->pc = 0xCD28u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD28u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD2Au ^ 0xCD30u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD30u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD2Au; } return 1;
case 0xCD2Au: /* JSR ABS 20 E7 CD */
    push(c, 0xCDu); push(c, 0x2Cu); c->pc = 0xCDE7u; c->cpu_cycles += 6u; return 1;
case 0xCD2Du: /* JMP ABS 4C 33 CD */
    c->pc = 0xCD33u; c->cpu_cycles += 3u; return 1;
case 0xCD30u: /* JSR ABS 20 97 CD */
    push(c, 0xCDu); push(c, 0x32u); c->pc = 0xCD97u; c->cpu_cycles += 6u; return 1;
case 0xCD33u: /* BCS REL B0 1C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCD35u ^ 0xCD51u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD51u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD35u; } return 1;
case 0xCD35u: /* INC ZP E6 2B */
    c->pc = 0xCD37u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCD37u: /* LDA ZP A5 2B */
    c->pc = 0xCD39u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD39u: /* CMP IMM C9 10 */
    c->pc = 0xCD3Bu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCD3Bu: /* BNE REL D0 E7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD3Du ^ 0xCD24u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD24u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD3Du; } return 1;
case 0xCD3Du: /* JSR ABS 20 BF CD */
    push(c, 0xCDu); push(c, 0x3Fu); c->pc = 0xCDBFu; c->cpu_cycles += 6u; return 1;
case 0xCD40u: /* BCS REL B0 0F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCD42u ^ 0xCD51u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD51u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD42u; } return 1;
case 0xCD42u: /* INC ZP E6 2B */
    c->pc = 0xCD44u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCD44u: /* LDA ZP A5 2B */
    c->pc = 0xCD46u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD46u: /* CMP IMM C9 20 */
    c->pc = 0xCD48u;
    v = 0x20u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCD48u: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD4Au ^ 0xCD3Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD3Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD4Au; } return 1;
case 0xCD4Au: /* LDA ZP A5 06 */
    c->pc = 0xCD4Cu;
    ea = 0x06u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD4Cu: /* STA ZP 85 0C */
    c->pc = 0xCD4Eu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD4Eu: /* JSR ABS 20 5D CF */
    push(c, 0xCDu); push(c, 0x50u); c->pc = 0xCF5Du; c->cpu_cycles += 6u; return 1;
case 0xCD51u: /* JMP ABS 4C E5 CC */
    c->pc = 0xCCE5u; c->cpu_cycles += 3u; return 1;
case 0xCD54u: /* JSR ABS 20 5D CF */
    push(c, 0xCDu); push(c, 0x56u); c->pc = 0xCF5Du; c->cpu_cycles += 6u; return 1;
case 0xCD57u: /* LDA ZP A5 06 */
    c->pc = 0xCD59u;
    ea = 0x06u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD59u: /* STA ZP 85 0D */
    c->pc = 0xCD5Bu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD5Bu: /* LDA IMM A9 1F */
    c->pc = 0xCD5Du;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD5Du: /* STA ZP 85 2B */
    c->pc = 0xCD5Fu;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD5Fu: /* JSR ABS 20 BF CD */
    push(c, 0xCDu); push(c, 0x61u); c->pc = 0xCDBFu; c->cpu_cycles += 6u; return 1;
case 0xCD62u: /* BCS REL B0 30 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCD64u ^ 0xCD94u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD94u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD64u; } return 1;
case 0xCD64u: /* DEC ZP C6 2B */
    c->pc = 0xCD66u;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCD66u: /* LDA ZP A5 2B */
    c->pc = 0xCD68u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD68u: /* CMP IMM C9 0F */
    c->pc = 0xCD6Au;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xCD6Au: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD6Cu ^ 0xCD5Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD5Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD6Cu; } return 1;
case 0xCD6Cu: /* LDA ZP A5 AA */
    c->pc = 0xCD6Eu;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD6Eu: /* AND IMM 29 02 */
    c->pc = 0xCD70u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD70u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD72u ^ 0xCD78u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD78u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD72u; } return 1;
case 0xCD72u: /* JSR ABS 20 E7 CD */
    push(c, 0xCDu); push(c, 0x74u); c->pc = 0xCDE7u; c->cpu_cycles += 6u; return 1;
case 0xCD75u: /* JMP ABS 4C 7B CD */
    c->pc = 0xCD7Bu; c->cpu_cycles += 3u; return 1;
case 0xCD78u: /* JSR ABS 20 97 CD */
    push(c, 0xCDu); push(c, 0x7Au); c->pc = 0xCD97u; c->cpu_cycles += 6u; return 1;
case 0xCD7Bu: /* BCS REL B0 17 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCD7Du ^ 0xCD94u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD94u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD7Du; } return 1;
case 0xCD7Du: /* DEC ZP C6 2B */
    c->pc = 0xCD7Fu;
    ea = 0x2Bu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCD7Fu: /* BNE REL D0 EB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCD81u ^ 0xCD6Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD6Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD81u; } return 1;
case 0xCD81u: /* LDA ZP A5 AA */
    c->pc = 0xCD83u;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD83u: /* AND IMM 29 04 */
    c->pc = 0xCD85u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCD85u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCD87u ^ 0xCD8Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCD8Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD87u; } return 1;
case 0xCD87u: /* JSR ABS 20 97 CD */
    push(c, 0xCDu); push(c, 0x89u); c->pc = 0xCD97u; c->cpu_cycles += 6u; return 1;
case 0xCD8Au: /* JMP ABS 4C 90 CD */
    c->pc = 0xCD90u; c->cpu_cycles += 3u; return 1;
case 0xCD8Du: /* JSR ABS 20 E7 CD */
    push(c, 0xCDu); push(c, 0x8Fu); c->pc = 0xCDE7u; c->cpu_cycles += 6u; return 1;
case 0xCD90u: /* LDA ZP A5 06 */
    c->pc = 0xCD92u;
    ea = 0x06u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD92u: /* STA ZP 85 0C */
    c->pc = 0xCD94u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCD94u: /* JMP ABS 4C E5 CC */
    c->pc = 0xCCE5u; c->cpu_cycles += 3u; return 1;
case 0xCD97u: /* LDX ZP A6 2B */
    c->pc = 0xCD99u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCD99u: /* LDA ABX BD 20 04 */
    c->pc = 0xCD9Cu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCD9Cu: /* BMI REL 30 02 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCD9Eu ^ 0xCDA0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCDA0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCD9Eu; } return 1;
case 0xCD9Eu: /* CLC IMP 18 */
    c->pc = 0xCD9Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCD9Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCDA0u: /* LDY ABX BC 00 04 */
    c->pc = 0xCDA3u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDA3u: /* LDA ABY B9 00 F9 */
    c->pc = 0xCDA6u;
    ea = (uint16_t)(0xF900u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF900u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDA6u: /* STA ZP 85 08 */
    c->pc = 0xCDA8u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCDA8u: /* LDA ABY B9 00 FA */
    c->pc = 0xCDABu;
    ea = (uint16_t)(0xFA00u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xFA00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDABu: /* STA ZP 85 09 */
    c->pc = 0xCDADu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCDADu: /* LDA ABX BD A0 06 */
    c->pc = 0xCDB0u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDB0u: /* CLC IMP 18 */
    c->pc = 0xCDB1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCDB1u: /* ADC IMM 69 02 */
    c->pc = 0xCDB3u;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCDB3u: /* TAY IMP A8 */
    c->pc = 0xCDB4u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCDB4u: /* LDA IZY B1 08 */
    c->pc = 0xCDB6u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDB6u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCDB8u ^ 0xCDBBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCDBBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCDB8u; } return 1;
case 0xCDB8u: /* JMP ABS 4C 2F CE */
    c->pc = 0xCE2Fu; c->cpu_cycles += 3u; return 1;
case 0xCDBBu: /* LSR ABX 5E 20 04 */
    c->pc = 0xCDBEu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCDBEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCDBFu: /* LDX ZP A6 2B */
    c->pc = 0xCDC1u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCDC1u: /* LDA ABX BD 20 04 */
    c->pc = 0xCDC4u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDC4u: /* BMI REL 30 02 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCDC6u ^ 0xCDC8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCDC8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCDC6u; } return 1;
case 0xCDC6u: /* CLC IMP 18 */
    c->pc = 0xCDC7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCDC7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCDC8u: /* LDY ABX BC 00 04 */
    c->pc = 0xCDCBu;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDCBu: /* LDA ABY B9 80 F9 */
    c->pc = 0xCDCEu;
    ea = (uint16_t)(0xF980u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF980u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDCEu: /* STA ZP 85 08 */
    c->pc = 0xCDD0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCDD0u: /* LDA ABY B9 80 FA */
    c->pc = 0xCDD3u;
    ea = (uint16_t)(0xFA80u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xFA80u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDD3u: /* STA ZP 85 09 */
    c->pc = 0xCDD5u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCDD5u: /* LDA ABX BD A0 06 */
    c->pc = 0xCDD8u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDD8u: /* CLC IMP 18 */
    c->pc = 0xCDD9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCDD9u: /* ADC IMM 69 02 */
    c->pc = 0xCDDBu;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCDDBu: /* TAY IMP A8 */
    c->pc = 0xCDDCu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCDDCu: /* LDA IZY B1 08 */
    c->pc = 0xCDDEu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDDEu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCDE0u ^ 0xCDE3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCDE3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCDE0u; } return 1;
case 0xCDE0u: /* JMP ABS 4C 41 CF */
    c->pc = 0xCF41u; c->cpu_cycles += 3u; return 1;
case 0xCDE3u: /* LSR ABX 5E 20 04 */
    c->pc = 0xCDE6u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCDE6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCDE7u: /* LDX ZP A6 2B */
    c->pc = 0xCDE9u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCDE9u: /* LDA ABX BD 20 04 */
    c->pc = 0xCDECu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDECu: /* BMI REL 30 02 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCDEEu ^ 0xCDF0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCDF0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCDEEu; } return 1;
case 0xCDEEu: /* CLC IMP 18 */
    c->pc = 0xCDEFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCDEFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCDF0u: /* LDY ABX BC 00 04 */
    c->pc = 0xCDF3u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDF3u: /* LDA ABY B9 00 F9 */
    c->pc = 0xCDF6u;
    ea = (uint16_t)(0xF900u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF900u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDF6u: /* STA ZP 85 08 */
    c->pc = 0xCDF8u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCDF8u: /* LDA ABY B9 00 FA */
    c->pc = 0xCDFBu;
    ea = (uint16_t)(0xFA00u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xFA00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCDFBu: /* STA ZP 85 09 */
    c->pc = 0xCDFDu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCDFDu: /* LDA ABX BD A0 06 */
    c->pc = 0xCE00u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE00u: /* PHA IMP 48 */
    c->pc = 0xCE01u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE01u: /* INC ABX FE 80 06 */
    c->pc = 0xCE04u;
    ea = (uint16_t)(0x0680u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCE04u: /* LDY IMM A0 01 */
    c->pc = 0xCE06u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE06u: /* LDA IZY B1 08 */
    c->pc = 0xCE08u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE08u: /* CMP ABX DD 80 06 */
    c->pc = 0xCE0Bu;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE0Bu: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCE0Du ^ 0xCE22u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE22u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE0Du; } return 1;
case 0xCE0Du: /* LDA IMM A9 00 */
    c->pc = 0xCE0Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE0Fu: /* STA ABX 9D 80 06 */
    c->pc = 0xCE12u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCE12u: /* INC ABX FE A0 06 */
    c->pc = 0xCE15u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCE15u: /* DEY IMP 88 */
    c->pc = 0xCE16u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE16u: /* LDA IZY B1 08 */
    c->pc = 0xCE18u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE18u: /* CMP ABX DD A0 06 */
    c->pc = 0xCE1Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE1Bu: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCE1Du ^ 0xCE22u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE22u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE1Du; } return 1;
case 0xCE1Du: /* LDA IMM A9 00 */
    c->pc = 0xCE1Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE1Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xCE22u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCE22u: /* PLA IMP 68 */
    c->pc = 0xCE23u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCE23u: /* CLC IMP 18 */
    c->pc = 0xCE24u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCE24u: /* ADC IMM 69 02 */
    c->pc = 0xCE26u;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCE26u: /* TAY IMP A8 */
    c->pc = 0xCE27u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE27u: /* LDA IZY B1 08 */
    c->pc = 0xCE29u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE29u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCE2Bu ^ 0xCE2Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE2Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE2Bu; } return 1;
case 0xCE2Bu: /* LSR ABX 5E 20 04 */
    c->pc = 0xCE2Eu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCE2Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCE2Fu: /* TAY IMP A8 */
    c->pc = 0xCE30u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE30u: /* CPX IMM E0 01 */
    c->pc = 0xCE32u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xCE32u: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCE34u ^ 0xCE49u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE49u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE34u; } return 1;
case 0xCE34u: /* LDA ZP A5 4B */
    c->pc = 0xCE36u;
    ea = 0x4Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE36u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCE38u ^ 0xCE43u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE43u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE38u; } return 1;
case 0xCE38u: /* DEC ZP C6 4B */
    c->pc = 0xCE3Au;
    ea = 0x4Bu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCE3Au: /* LDA ZP A5 1C */
    c->pc = 0xCE3Cu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE3Cu: /* AND IMM 29 02 */
    c->pc = 0xCE3Eu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE3Eu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCE40u ^ 0xCE43u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE43u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE40u; } return 1;
case 0xCE40u: /* JMP ABS 4C F5 CE */
    c->pc = 0xCEF5u; c->cpu_cycles += 3u; return 1;
case 0xCE43u: /* LDA ZP A5 F9 */
    c->pc = 0xCE45u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE45u: /* BNE REL D0 F9 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCE47u ^ 0xCE40u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE40u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE47u; } return 1;
case 0xCE47u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCE49u ^ 0xCE5Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE5Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE49u; } return 1;
case 0xCE49u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCE4Bu ^ 0xCE5Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE5Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE4Bu; } return 1;
case 0xCE4Bu: /* LDA ABS AD A8 05 */
    c->pc = 0xCE4Eu;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCE4Eu: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCE50u ^ 0xCE5Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE5Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE50u; } return 1;
case 0xCE50u: /* LDA ZP A5 1C */
    c->pc = 0xCE52u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE52u: /* AND IMM 29 02 */
    c->pc = 0xCE54u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE54u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCE56u ^ 0xCE58u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE58u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCE56u; } return 1;
case 0xCE56u: /* LDY IMM A0 18 */
    c->pc = 0xCE58u;
    v = 0x18u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE58u: /* DEC ABS CE A8 05 */
    c->pc = 0xCE5Bu;
    ea = 0x05A8u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xCE5Bu: /* LDA ABY B9 00 80 */
    c->pc = 0xCE5Eu;
    ea = (uint16_t)(0x8000u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8000u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE5Eu: /* STA ZP 85 08 */
    c->pc = 0xCE60u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE60u: /* LDA ABY B9 00 82 */
    c->pc = 0xCE63u;
    ea = (uint16_t)(0x8200u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8200u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE63u: /* STA ZP 85 09 */
    c->pc = 0xCE65u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE65u: /* LDA IMM A9 00 */
    c->pc = 0xCE67u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE67u: /* STA ZP 85 03 */
    c->pc = 0xCE69u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE69u: /* LDY IMM A0 00 */
    c->pc = 0xCE6Bu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE6Bu: /* LDA IZY B1 08 */
    c->pc = 0xCE6Du;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE6Du: /* STA ZP 85 04 */
    c->pc = 0xCE6Fu;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE6Fu: /* INY IMP C8 */
    c->pc = 0xCE70u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE70u: /* LDA IZY B1 08 */
    c->pc = 0xCE72u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE72u: /* TAY IMP A8 */
    c->pc = 0xCE73u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCE73u: /* LDA ABY B9 00 84 */
    c->pc = 0xCE76u;
    ea = (uint16_t)(0x8400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE76u: /* STA ZP 85 0A */
    c->pc = 0xCE78u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE78u: /* LDA ABY B9 00 85 */
    c->pc = 0xCE7Bu;
    ea = (uint16_t)(0x8500u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8500u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE7Bu: /* STA ZP 85 0B */
    c->pc = 0xCE7Du;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE7Du: /* SEC IMP 38 */
    c->pc = 0xCE7Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCE7Eu: /* LDA ABX BD 60 04 */
    c->pc = 0xCE81u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE81u: /* SBC ZP E5 1F */
    c->pc = 0xCE83u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xCE83u: /* STA ZP 85 00 */
    c->pc = 0xCE85u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE85u: /* LDA ABX BD 40 04 */
    c->pc = 0xCE88u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE88u: /* SBC ZP E5 20 */
    c->pc = 0xCE8Au;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xCE8Au: /* LDA ABX BD A0 04 */
    c->pc = 0xCE8Du;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE8Du: /* STA ZP 85 01 */
    c->pc = 0xCE8Fu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE8Fu: /* LDA ABX BD 20 04 */
    c->pc = 0xCE92u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCE92u: /* AND IMM 29 40 */
    c->pc = 0xCE94u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE94u: /* STA ZP 85 02 */
    c->pc = 0xCE96u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE96u: /* LDA IMM A9 02 */
    c->pc = 0xCE98u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCE98u: /* STA ZP 85 07 */
    c->pc = 0xCE9Au;
    ea = 0x07u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCE9Au: /* LDX ZP A6 06 */
    c->pc = 0xCE9Cu;
    ea = 0x06u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCE9Cu: /* LDY ZP A4 07 */
    c->pc = 0xCE9Eu;
    ea = 0x07u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCE9Eu: /* LDA IZY B1 08 */
    c->pc = 0xCEA0u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEA0u: /* STA ABX 9D 01 02 */
    c->pc = 0xCEA3u;
    ea = (uint16_t)(0x0201u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCEA3u: /* CLC IMP 18 */
    c->pc = 0xCEA4u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCEA4u: /* LDA IZY B1 0A */
    c->pc = 0xCEA6u;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEA6u: /* ADC ZP 65 01 */
    c->pc = 0xCEA8u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xCEA8u: /* STA ABX 9D 00 02 */
    c->pc = 0xCEABu;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCEABu: /* INY IMP C8 */
    c->pc = 0xCEACu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCEACu: /* LDA ZP A5 03 */
    c->pc = 0xCEAEu;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCEAEu: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCEB0u ^ 0xCEB8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEB8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEB0u; } return 1;
case 0xCEB0u: /* LDA IZY B1 08 */
    c->pc = 0xCEB2u;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEB2u: /* AND IMM 29 F0 */
    c->pc = 0xCEB4u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCEB4u: /* ORA ZP 05 03 */
    c->pc = 0xCEB6u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCEB6u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCEB8u ^ 0xCEBAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEBAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEB8u; } return 1;
case 0xCEB8u: /* LDA IZY B1 08 */
    c->pc = 0xCEBAu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEBAu: /* EOR ZP 45 02 */
    c->pc = 0xCEBCu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCEBCu: /* STA ABX 9D 02 02 */
    c->pc = 0xCEBFu;
    ea = (uint16_t)(0x0202u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCEBFu: /* LDA ZP A5 02 */
    c->pc = 0xCEC1u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCEC1u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCEC3u ^ 0xCECCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCECCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEC3u; } return 1;
case 0xCEC3u: /* LDA IZY B1 0A */
    c->pc = 0xCEC5u;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEC5u: /* TAY IMP A8 */
    c->pc = 0xCEC6u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCEC6u: /* LDA ABY B9 00 86 */
    c->pc = 0xCEC9u;
    ea = (uint16_t)(0x8600u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEC9u: /* JMP ABS 4C CE CE */
    c->pc = 0xCECEu; c->cpu_cycles += 3u; return 1;
case 0xCECCu: /* LDA IZY B1 0A */
    c->pc = 0xCECEu;
    ea = (uint16_t)(read16_zp(c, 0x0Au) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x0Au) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCECEu: /* CLC IMP 18 */
    c->pc = 0xCECFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCECFu: /* BMI REL 30 06 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCED1u ^ 0xCED7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCED7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCED1u; } return 1;
case 0xCED1u: /* ADC ZP 65 00 */
    c->pc = 0xCED3u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xCED3u: /* BCC REL 90 0D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xCED5u ^ 0xCEE2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEE2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCED5u; } return 1;
case 0xCED5u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCED7u ^ 0xCEDBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEDBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCED7u; } return 1;
case 0xCED7u: /* ADC ZP 65 00 */
    c->pc = 0xCED9u;
    ea = 0x00u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xCED9u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCEDBu ^ 0xCEE2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEE2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEDBu; } return 1;
case 0xCEDBu: /* LDA IMM A9 F8 */
    c->pc = 0xCEDDu;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCEDDu: /* STA ABX 9D 00 02 */
    c->pc = 0xCEE0u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCEE0u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCEE2u ^ 0xCEEDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEEDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEE2u; } return 1;
case 0xCEE2u: /* STA ABX 9D 03 02 */
    c->pc = 0xCEE5u;
    ea = (uint16_t)(0x0203u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCEE5u: /* CLC IMP 18 */
    c->pc = 0xCEE6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCEE6u: /* TXA IMP 8A */
    c->pc = 0xCEE7u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCEE7u: /* ADC IMM 69 04 */
    c->pc = 0xCEE9u;
    v = 0x04u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCEE9u: /* STA ZP 85 06 */
    c->pc = 0xCEEBu;
    ea = 0x06u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCEEBu: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCEEDu ^ 0xCEF7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCEF7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEEDu; } return 1;
case 0xCEEDu: /* INC ZP E6 07 */
    c->pc = 0xCEEFu;
    ea = 0x07u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCEEFu: /* INC ZP E6 07 */
    c->pc = 0xCEF1u;
    ea = 0x07u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCEF1u: /* DEC ZP C6 04 */
    c->pc = 0xCEF3u;
    ea = 0x04u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xCEF3u: /* BNE REL D0 A5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCEF5u ^ 0xCE9Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCE9Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xCEF5u; } return 1;
case 0xCEF5u: /* CLC IMP 18 */
    c->pc = 0xCEF6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCEF6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCEF7u: /* SEC IMP 38 */
    c->pc = 0xCEF8u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCEF8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCEF9u: /* LDX ZP A6 2B */
    c->pc = 0xCEFBu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCEFBu: /* LDA ABX BD 20 04 */
    c->pc = 0xCEFEu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCEFEu: /* BMI REL 30 02 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xCF00u ^ 0xCF02u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF02u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF00u; } return 1;
case 0xCF00u: /* CLC IMP 18 */
    c->pc = 0xCF01u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCF01u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCF02u: /* LDY ABX BC 00 04 */
    c->pc = 0xCF05u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF05u: /* LDA ABY B9 80 F9 */
    c->pc = 0xCF08u;
    ea = (uint16_t)(0xF980u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF980u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF08u: /* STA ZP 85 08 */
    c->pc = 0xCF0Au;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF0Au: /* LDA ABY B9 80 FA */
    c->pc = 0xCF0Du;
    ea = (uint16_t)(0xFA80u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xFA80u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF0Du: /* STA ZP 85 09 */
    c->pc = 0xCF0Fu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF0Fu: /* LDA ABX BD A0 06 */
    c->pc = 0xCF12u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF12u: /* PHA IMP 48 */
    c->pc = 0xCF13u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF13u: /* INC ABX FE 80 06 */
    c->pc = 0xCF16u;
    ea = (uint16_t)(0x0680u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCF16u: /* LDY IMM A0 01 */
    c->pc = 0xCF18u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCF18u: /* LDA IZY B1 08 */
    c->pc = 0xCF1Au;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF1Au: /* CMP ABX DD 80 06 */
    c->pc = 0xCF1Du;
    ea = (uint16_t)(0x0680u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0680u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF1Du: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCF1Fu ^ 0xCF34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF34u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF1Fu; } return 1;
case 0xCF1Fu: /* LDA IMM A9 00 */
    c->pc = 0xCF21u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF21u: /* STA ABX 9D 80 06 */
    c->pc = 0xCF24u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCF24u: /* INC ABX FE A0 06 */
    c->pc = 0xCF27u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCF27u: /* DEY IMP 88 */
    c->pc = 0xCF28u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCF28u: /* LDA IZY B1 08 */
    c->pc = 0xCF2Au;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF2Au: /* CMP ABX DD A0 06 */
    c->pc = 0xCF2Du;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF2Du: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCF2Fu ^ 0xCF34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF34u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF2Fu; } return 1;
case 0xCF2Fu: /* LDA IMM A9 00 */
    c->pc = 0xCF31u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF31u: /* STA ABX 9D A0 06 */
    c->pc = 0xCF34u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCF34u: /* PLA IMP 68 */
    c->pc = 0xCF35u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCF35u: /* CLC IMP 18 */
    c->pc = 0xCF36u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCF36u: /* ADC IMM 69 02 */
    c->pc = 0xCF38u;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCF38u: /* TAY IMP A8 */
    c->pc = 0xCF39u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCF39u: /* LDA IZY B1 08 */
    c->pc = 0xCF3Bu;
    ea = (uint16_t)(read16_zp(c, 0x08u) + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 5u + ((((read16_zp(c, 0x08u) ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF3Bu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCF3Du ^ 0xCF41u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF41u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF3Du; } return 1;
case 0xCF3Du: /* LSR ABX 5E 20 04 */
    c->pc = 0xCF40u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xCF40u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCF41u: /* TAY IMP A8 */
    c->pc = 0xCF42u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCF42u: /* LDA ABX BD 20 04 */
    c->pc = 0xCF45u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF45u: /* AND IMM 29 20 */
    c->pc = 0xCF47u;
    v = 0x20u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF47u: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCF49u ^ 0xCF5Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF5Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF49u; } return 1;
case 0xCF49u: /* LDA ABY B9 00 81 */
    c->pc = 0xCF4Cu;
    ea = (uint16_t)(0x8100u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF4Cu: /* STA ZP 85 08 */
    c->pc = 0xCF4Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF4Eu: /* LDA ABY B9 00 83 */
    c->pc = 0xCF51u;
    ea = (uint16_t)(0x8300u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8300u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF51u: /* STA ZP 85 09 */
    c->pc = 0xCF53u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF53u: /* LDA ABX BD 00 01 */
    c->pc = 0xCF56u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF56u: /* STA ZP 85 03 */
    c->pc = 0xCF58u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF58u: /* JMP ABS 4C 69 CE */
    c->pc = 0xCE69u; c->cpu_cycles += 3u; return 1;
case 0xCF5Bu: /* CLC IMP 18 */
    c->pc = 0xCF5Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCF5Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCF5Du: /* LDA ABS AD C0 06 */
    c->pc = 0xCF60u;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCF60u: /* STA ZP 85 00 */
    c->pc = 0xCF62u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF62u: /* LDX ZP A6 06 */
    c->pc = 0xCF64u;
    ea = 0x06u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCF64u: /* LDA IMM A9 01 */
    c->pc = 0xCF66u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF66u: /* STA ZP 85 02 */
    c->pc = 0xCF68u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF68u: /* LDA IMM A9 18 */
    c->pc = 0xCF6Au;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF6Au: /* STA ZP 85 01 */
    c->pc = 0xCF6Cu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF6Cu: /* JSR ABS 20 A8 CF */
    push(c, 0xCFu); push(c, 0x6Eu); c->pc = 0xCFA8u; c->cpu_cycles += 6u; return 1;
case 0xCF6Fu: /* BCS REL B0 36 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCF71u ^ 0xCFA7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFA7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF71u; } return 1;
case 0xCF71u: /* LDY ZP A4 A9 */
    c->pc = 0xCF73u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCF73u: /* BEQ REL F0 12 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCF75u ^ 0xCF87u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF87u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF75u; } return 1;
case 0xCF75u: /* LDA ABY B9 9B 00 */
    c->pc = 0xCF78u;
    ea = (uint16_t)(0x009Bu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x009Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCF78u: /* STA ZP 85 00 */
    c->pc = 0xCF7Au;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF7Au: /* LDA IMM A9 00 */
    c->pc = 0xCF7Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF7Cu: /* STA ZP 85 02 */
    c->pc = 0xCF7Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF7Eu: /* LDA IMM A9 10 */
    c->pc = 0xCF80u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF80u: /* STA ZP 85 01 */
    c->pc = 0xCF82u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF82u: /* JSR ABS 20 A8 CF */
    push(c, 0xCFu); push(c, 0x84u); c->pc = 0xCFA8u; c->cpu_cycles += 6u; return 1;
case 0xCF85u: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCF87u ^ 0xCFA7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFA7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF87u; } return 1;
case 0xCF87u: /* LDA ZP A5 B1 */
    c->pc = 0xCF89u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF89u: /* BEQ REL F0 1C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCF8Bu ^ 0xCFA7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFA7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF8Bu; } return 1;
case 0xCF8Bu: /* LDA ABS AD C1 06 */
    c->pc = 0xCF8Eu;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xCF8Eu: /* STA ZP 85 00 */
    c->pc = 0xCF90u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCF90u: /* LDA IMM A9 03 */
    c->pc = 0xCF92u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF92u: /* LDY ZP A4 B3 */
    c->pc = 0xCF94u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xCF94u: /* CPY IMM C0 08 */
    c->pc = 0xCF96u;
    v = 0x08u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xCF96u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCF98u ^ 0xCF9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF98u; } return 1;
case 0xCF98u: /* CPY IMM C0 0D */
    c->pc = 0xCF9Au;
    v = 0x0Du;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xCF9Au: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xCF9Cu ^ 0xCF9Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCF9Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCF9Cu; } return 1;
case 0xCF9Cu: /* LDA IMM A9 01 */
    c->pc = 0xCF9Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCF9Eu: /* STA ZP 85 02 */
    c->pc = 0xCFA0u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFA0u: /* LDA IMM A9 28 */
    c->pc = 0xCFA2u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCFA2u: /* STA ZP 85 01 */
    c->pc = 0xCFA4u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFA4u: /* JSR ABS 20 A8 CF */
    push(c, 0xCFu); push(c, 0xA6u); c->pc = 0xCFA8u; c->cpu_cycles += 6u; return 1;
case 0xCFA7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCFA8u: /* LDY IMM A0 06 */
    c->pc = 0xCFAAu;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCFAAu: /* LDA ABY B9 E5 CF */
    c->pc = 0xCFADu;
    ea = (uint16_t)(0xCFE5u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xCFE5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCFADu: /* STA ABX 9D 00 02 */
    c->pc = 0xCFB0u;
    ea = (uint16_t)(0x0200u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCFB0u: /* SEC IMP 38 */
    c->pc = 0xCFB1u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCFB1u: /* LDA ZP A5 00 */
    c->pc = 0xCFB3u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFB3u: /* SBC IMM E9 04 */
    c->pc = 0xCFB5u;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xCFB5u: /* BCS REL B0 0E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xCFB7u ^ 0xCFC5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFC5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCFB7u; } return 1;
case 0xCFB7u: /* LDX ZP A6 00 */
    c->pc = 0xCFB9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCFB9u: /* LDA IMM A9 00 */
    c->pc = 0xCFBBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCFBBu: /* STA ZP 85 00 */
    c->pc = 0xCFBDu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFBDu: /* LDA ABX BD EC CF */
    c->pc = 0xCFC0u;
    ea = (uint16_t)(0xCFECu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xCFECu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xCFC0u: /* LDX ZP A6 06 */
    c->pc = 0xCFC2u;
    ea = 0x06u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCFC2u: /* JMP ABS 4C C9 CF */
    c->pc = 0xCFC9u; c->cpu_cycles += 3u; return 1;
case 0xCFC5u: /* STA ZP 85 00 */
    c->pc = 0xCFC7u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFC7u: /* LDA IMM A9 87 */
    c->pc = 0xCFC9u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCFC9u: /* STA ABX 9D 01 02 */
    c->pc = 0xCFCCu;
    ea = (uint16_t)(0x0201u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCFCCu: /* LDA ZP A5 02 */
    c->pc = 0xCFCEu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFCEu: /* STA ABX 9D 02 02 */
    c->pc = 0xCFD1u;
    ea = (uint16_t)(0x0202u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCFD1u: /* LDA ZP A5 01 */
    c->pc = 0xCFD3u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFD3u: /* STA ABX 9D 03 02 */
    c->pc = 0xCFD6u;
    ea = (uint16_t)(0x0203u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xCFD6u: /* INX IMP E8 */
    c->pc = 0xCFD7u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCFD7u: /* INX IMP E8 */
    c->pc = 0xCFD8u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCFD8u: /* INX IMP E8 */
    c->pc = 0xCFD9u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCFD9u: /* INX IMP E8 */
    c->pc = 0xCFDAu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xCFDAu: /* STX ZP 86 06 */
    c->pc = 0xCFDCu;
    ea = 0x06u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xCFDCu: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCFDEu ^ 0xCFE3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFE3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xCFDEu; } return 1;
case 0xCFDEu: /* DEY IMP 88 */
    c->pc = 0xCFDFu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xCFDFu: /* BPL REL 10 C9 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xCFE1u ^ 0xCFAAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFAAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCFE1u; } return 1;
case 0xCFE1u: /* CLC IMP 18 */
    c->pc = 0xCFE2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCFE2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCFE3u: /* SEC IMP 38 */
    c->pc = 0xCFE4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xCFE4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xCFF0u: /* PHA IMP 48 */
    c->pc = 0xCFF1u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFF1u: /* PHP IMP 08 */
    c->pc = 0xCFF2u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xCFF2u: /* TXA IMP 8A */
    c->pc = 0xCFF3u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCFF3u: /* PHA IMP 48 */
    c->pc = 0xCFF4u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFF4u: /* TYA IMP 98 */
    c->pc = 0xCFF5u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xCFF5u: /* PHA IMP 48 */
    c->pc = 0xCFF6u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFF6u: /* LDA ZP A5 1D */
    c->pc = 0xCFF8u;
    ea = 0x1Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFF8u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xCFFAu ^ 0xCFFDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xCFFDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xCFFAu; } return 1;
case 0xCFFAu: /* JMP ABS 4C 8D D0 */
    c->pc = 0xD08Du; c->cpu_cycles += 3u; return 1;
case 0xCFFDu: /* LDA ZP A5 F7 */
    c->pc = 0xCFFFu;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xCFFFu: /* AND IMM 29 7C */
    c->pc = 0xD001u;
    v = 0x7Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD001u: /* STA ZP 85 F7 */
    c->pc = 0xD003u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD003u: /* STA ABS 8D 00 20 */
    c->pc = 0xD006u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD006u: /* LDA ZP A5 F8 */
    c->pc = 0xD008u;
    ea = 0xF8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD008u: /* AND IMM 29 E7 */
    c->pc = 0xD00Au;
    v = 0xE7u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD00Au: /* STA ZP 85 F8 */
    c->pc = 0xD00Cu;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD00Cu: /* STA ABS 8D 01 20 */
    c->pc = 0xD00Fu;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD00Fu: /* LDA ABS AD 02 20 */
    c->pc = 0xD012u;
    ea = 0x2002u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD012u: /* LDA IMM A9 00 */
    c->pc = 0xD014u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD014u: /* STA ABS 8D 03 20 */
    c->pc = 0xD017u;
    ea = 0x2003u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD017u: /* LDA IMM A9 02 */
    c->pc = 0xD019u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD019u: /* STA ABS 8D 14 40 */
    c->pc = 0xD01Cu;
    ea = 0x4014u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD01Cu: /* LDA ZP A5 1B */
    c->pc = 0xD01Eu;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD01Eu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD020u ^ 0xD023u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD023u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD020u; } return 1;
case 0xD020u: /* JSR ABS 20 1B D1 */
    push(c, 0xD0u); push(c, 0x22u); c->pc = 0xD11Bu; c->cpu_cycles += 6u; return 1;
case 0xD023u: /* JSR ABS 20 F5 D0 */
    push(c, 0xD0u); push(c, 0x25u); c->pc = 0xD0F5u; c->cpu_cycles += 6u; return 1;
case 0xD026u: /* LDA ZP A5 47 */
    c->pc = 0xD028u;
    ea = 0x47u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD028u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD02Au ^ 0xD02Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD02Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xD02Au; } return 1;
case 0xD02Au: /* JSR ABS 20 DF D1 */
    push(c, 0xD0u); push(c, 0x2Cu); c->pc = 0xD1DFu; c->cpu_cycles += 6u; return 1;
case 0xD02Du: /* LDA ZP A5 51 */
    c->pc = 0xD02Fu;
    ea = 0x51u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD02Fu: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD031u ^ 0xD034u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD034u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD031u; } return 1;
case 0xD031u: /* JSR ABS 20 F9 D1 */
    push(c, 0xD0u); push(c, 0x33u); c->pc = 0xD1F9u; c->cpu_cycles += 6u; return 1;
case 0xD034u: /* LDA ABS AD 02 20 */
    c->pc = 0xD037u;
    ea = 0x2002u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD037u: /* LDA IMM A9 00 */
    c->pc = 0xD039u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD039u: /* STA ZP 85 01 */
    c->pc = 0xD03Bu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD03Bu: /* LDA ZP A5 1F */
    c->pc = 0xD03Du;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD03Du: /* STA ZP 85 00 */
    c->pc = 0xD03Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD03Fu: /* LDA ZP A5 B8 */
    c->pc = 0xD041u;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD041u: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD043u ^ 0xD052u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD052u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD043u; } return 1;
case 0xD043u: /* SEC IMP 38 */
    c->pc = 0xD044u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD044u: /* LDA ZP A5 00 */
    c->pc = 0xD046u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD046u: /* SBC ZP E5 B8 */
    c->pc = 0xD048u;
    ea = 0xB8u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xD048u: /* STA ZP 85 00 */
    c->pc = 0xD04Au;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD04Au: /* LDA IMM A9 00 */
    c->pc = 0xD04Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD04Cu: /* SBC ZP E5 B9 */
    c->pc = 0xD04Eu;
    ea = 0xB9u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xD04Eu: /* AND IMM 29 01 */
    c->pc = 0xD050u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD050u: /* STA ZP 85 01 */
    c->pc = 0xD052u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD052u: /* LDA ZP A5 00 */
    c->pc = 0xD054u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD054u: /* STA ABS 8D 05 20 */
    c->pc = 0xD057u;
    ea = 0x2005u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD057u: /* LDA ZP A5 22 */
    c->pc = 0xD059u;
    ea = 0x22u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD059u: /* STA ZP 85 00 */
    c->pc = 0xD05Bu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD05Bu: /* LDA ZP A5 B6 */
    c->pc = 0xD05Du;
    ea = 0xB6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD05Du: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD05Fu ^ 0xD066u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD066u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD05Fu; } return 1;
case 0xD05Fu: /* SEC IMP 38 */
    c->pc = 0xD060u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD060u: /* LDA ZP A5 00 */
    c->pc = 0xD062u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD062u: /* SBC ZP E5 B6 */
    c->pc = 0xD064u;
    ea = 0xB6u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xD064u: /* STA ZP 85 00 */
    c->pc = 0xD066u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD066u: /* LDA ZP A5 00 */
    c->pc = 0xD068u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD068u: /* STA ABS 8D 05 20 */
    c->pc = 0xD06Bu;
    ea = 0x2005u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD06Bu: /* LDA ZP A5 F8 */
    c->pc = 0xD06Du;
    ea = 0xF8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD06Du: /* ORA IMM 09 1E */
    c->pc = 0xD06Fu;
    v = 0x1Eu;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD06Fu: /* STA ZP 85 F8 */
    c->pc = 0xD071u;
    ea = 0xF8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD071u: /* STA ABS 8D 01 20 */
    c->pc = 0xD074u;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD074u: /* LDA ZP A5 F7 */
    c->pc = 0xD076u;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD076u: /* ORA IMM 09 80 */
    c->pc = 0xD078u;
    v = 0x80u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD078u: /* STA ZP 85 F7 */
    c->pc = 0xD07Au;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD07Au: /* LDA ZP A5 20 */
    c->pc = 0xD07Cu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD07Cu: /* EOR ZP 45 01 */
    c->pc = 0xD07Eu;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD07Eu: /* AND IMM 29 01 */
    c->pc = 0xD080u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD080u: /* ORA ZP 05 F7 */
    c->pc = 0xD082u;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD082u: /* ORA ZP 05 AE */
    c->pc = 0xD084u;
    ea = 0xAEu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD084u: /* STA ZP 85 F7 */
    c->pc = 0xD086u;
    ea = 0xF7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD086u: /* STA ABS 8D 00 20 */
    c->pc = 0xD089u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD089u: /* STA ZP 85 1D */
    c->pc = 0xD08Bu;
    ea = 0x1Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD08Bu: /* INC ZP E6 1C */
    c->pc = 0xD08Du;
    ea = 0x1Cu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD08Du: /* LDA ZP A5 68 */
    c->pc = 0xD08Fu;
    ea = 0x68u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD08Fu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD091u ^ 0xD095u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD095u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD091u; } return 1;
case 0xD091u: /* INC ZP E6 67 */
    c->pc = 0xD093u;
    ea = 0x67u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD093u: /* BNE REL D0 31 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD095u ^ 0xD0C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD095u; } return 1;
case 0xD095u: /* LDA IMM A9 0C */
    c->pc = 0xD097u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD097u: /* STA ABS 8D F0 FF */
    c->pc = 0xD09Au;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD09Au: /* LSR IMP 4A */
    c->pc = 0xD09Bu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD09Bu: /* STA ABS 8D F0 FF */
    c->pc = 0xD09Eu;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD09Eu: /* LSR IMP 4A */
    c->pc = 0xD09Fu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD09Fu: /* STA ABS 8D F0 FF */
    c->pc = 0xD0A2u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0A2u: /* LSR IMP 4A */
    c->pc = 0xD0A3u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD0A3u: /* STA ABS 8D F0 FF */
    c->pc = 0xD0A6u;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0A6u: /* LSR IMP 4A */
    c->pc = 0xD0A7u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD0A7u: /* STA ABS 8D F0 FF */
    c->pc = 0xD0AAu;
    ea = 0xFFF0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0AAu: /* JSR ABS 20 00 80 */
    push(c, 0xD0u); push(c, 0xACu); c->pc = 0x8000u; c->cpu_cycles += 6u; return 1;
case 0xD0ADu: /* LDX ZP A6 66 */
    c->pc = 0xD0AFu;
    ea = 0x66u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xD0AFu: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD0B1u ^ 0xD0C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD0B1u; } return 1;
case 0xD0B1u: /* LDA ABX BD 7F 05 */
    c->pc = 0xD0B4u;
    ea = (uint16_t)(0x057Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x057Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD0B4u: /* CMP IMM C9 FD */
    c->pc = 0xD0B6u;
    v = 0xFDu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xD0B6u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD0B8u ^ 0xD0BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD0B8u; } return 1;
case 0xD0B8u: /* LDY IMM A0 A0 */
    c->pc = 0xD0BAu;
    v = 0xA0u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD0BAu: /* JSR ABS 20 03 80 */
    push(c, 0xD0u); push(c, 0xBCu); c->pc = 0x8003u; c->cpu_cycles += 6u; return 1;
case 0xD0BDu: /* DEC ZP C6 66 */
    c->pc = 0xD0BFu;
    ea = 0x66u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD0BFu: /* BNE REL D0 EC */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD0C1u ^ 0xD0ADu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0ADu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD0C1u; } return 1;
case 0xD0C1u: /* LDA ZP A5 29 */
    c->pc = 0xD0C3u;
    ea = 0x29u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD0C3u: /* JSR ABS 20 00 C0 */
    push(c, 0xD0u); push(c, 0xC5u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD0C6u: /* LDA ABS AD 80 04 */
    c->pc = 0xD0C9u;
    ea = 0x0480u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0C9u: /* EOR ZP 45 4A */
    c->pc = 0xD0CBu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD0CBu: /* ADC ZP 65 1C */
    c->pc = 0xD0CDu;
    ea = 0x1Cu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xD0CDu: /* LSR IMP 4A */
    c->pc = 0xD0CEu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD0CEu: /* STA ZP 85 4A */
    c->pc = 0xD0D0u;
    ea = 0x4Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD0D0u: /* PLA IMP 68 */
    c->pc = 0xD0D1u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0D1u: /* TAY IMP A8 */
    c->pc = 0xD0D2u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD0D2u: /* PLA IMP 68 */
    c->pc = 0xD0D3u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0D3u: /* TAX IMP AA */
    c->pc = 0xD0D4u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD0D4u: /* PLP IMP 28 */
    c->pc = 0xD0D5u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xD0D5u: /* PLA IMP 68 */
    c->pc = 0xD0D6u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD0D6u: /* RTI IMP 40 */
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = ea; c->cpu_cycles += 6u; return 1;
case 0xD0D7u: /* LDX IMM A2 01 */
    c->pc = 0xD0D9u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD0D9u: /* STX ABS 8E 16 40 */
    c->pc = 0xD0DCu;
    ea = 0x4016u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD0DCu: /* DEX IMP CA */
    c->pc = 0xD0DDu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD0DDu: /* STX ABS 8E 16 40 */
    c->pc = 0xD0E0u;
    ea = 0x4016u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD0E0u: /* INX IMP E8 */
    c->pc = 0xD0E1u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD0E1u: /* LDY IMM A0 08 */
    c->pc = 0xD0E3u;
    v = 0x08u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD0E3u: /* LDA ABX BD 16 40 */
    c->pc = 0xD0E6u;
    ea = (uint16_t)(0x4016u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x4016u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD0E6u: /* STA ZP 85 27 */
    c->pc = 0xD0E8u;
    ea = 0x27u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD0E8u: /* LSR IMP 4A */
    c->pc = 0xD0E9u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD0E9u: /* ORA ZP 05 27 */
    c->pc = 0xD0EBu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD0EBu: /* LSR IMP 4A */
    c->pc = 0xD0ECu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD0ECu: /* ROR ZPX 76 23 */
    c->pc = 0xD0EEu;
    ea = (uint8_t)(0x23u + c->x); v = read8(c, ea);
    v = ror8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xD0EEu: /* DEY IMP 88 */
    c->pc = 0xD0EFu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD0EFu: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD0F1u ^ 0xD0E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD0F1u; } return 1;
case 0xD0F1u: /* DEX IMP CA */
    c->pc = 0xD0F2u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD0F2u: /* BPL REL 10 ED */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD0F4u ^ 0xD0E1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0E1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD0F4u; } return 1;
case 0xD0F4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD0F5u: /* LDY IMM A0 3F */
    c->pc = 0xD0F7u;
    v = 0x3Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD0F7u: /* STY ABS 8C 06 20 */
    c->pc = 0xD0FAu;
    ea = 0x2006u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xD0FAu: /* LDX IMM A2 00 */
    c->pc = 0xD0FCu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD0FCu: /* STX ABS 8E 06 20 */
    c->pc = 0xD0FFu;
    ea = 0x2006u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD0FFu: /* LDA ABX BD 56 03 */
    c->pc = 0xD102u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD102u: /* STA ABS 8D 07 20 */
    c->pc = 0xD105u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD105u: /* INX IMP E8 */
    c->pc = 0xD106u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD106u: /* CPX IMM E0 20 */
    c->pc = 0xD108u;
    v = 0x20u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xD108u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD10Au ^ 0xD0FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD0FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD10Au; } return 1;
case 0xD10Au: /* STY ABS 8C 06 20 */
    c->pc = 0xD10Du;
    ea = 0x2006u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xD10Du: /* LDA IMM A9 00 */
    c->pc = 0xD10Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD10Fu: /* STA ABS 8D 06 20 */
    c->pc = 0xD112u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD112u: /* STA ABS 8D 06 20 */
    c->pc = 0xD115u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD115u: /* STA ABS 8D 06 20 */
    c->pc = 0xD118u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD118u: /* STA ZP 85 3A */
    c->pc = 0xD11Au;
    ea = 0x3Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD11Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD11Bu: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD11Du ^ 0xD120u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD120u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD11Du; } return 1;
case 0xD11Du: /* JMP ABS 4C 81 D1 */
    c->pc = 0xD181u; c->cpu_cycles += 3u; return 1;
case 0xD120u: /* LDY IMM A0 00 */
    c->pc = 0xD122u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD122u: /* STY ZP 84 00 */
    c->pc = 0xD124u;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD124u: /* TYA IMP 98 */
    c->pc = 0xD125u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD125u: /* ASL IMP 0A */
    c->pc = 0xD126u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD126u: /* ASL IMP 0A */
    c->pc = 0xD127u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD127u: /* ASL IMP 0A */
    c->pc = 0xD128u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD128u: /* ASL IMP 0A */
    c->pc = 0xD129u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD129u: /* TAX IMP AA */
    c->pc = 0xD12Au;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD12Au: /* LDA IMM A9 04 */
    c->pc = 0xD12Cu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD12Cu: /* STA ZP 85 01 */
    c->pc = 0xD12Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD12Eu: /* LDA ABY B9 00 03 */
    c->pc = 0xD131u;
    ea = (uint16_t)(0x0300u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0300u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD131u: /* STA ZP 85 0B */
    c->pc = 0xD133u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD133u: /* LDA ABY B9 04 03 */
    c->pc = 0xD136u;
    ea = (uint16_t)(0x0304u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0304u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD136u: /* STA ZP 85 0A */
    c->pc = 0xD138u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD138u: /* CMP IMM C9 80 */
    c->pc = 0xD13Au;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xD13Au: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD13Cu ^ 0xD148u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD148u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD13Cu; } return 1;
case 0xD13Cu: /* LDA ZP A5 0B */
    c->pc = 0xD13Eu;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD13Eu: /* AND IMM 29 03 */
    c->pc = 0xD140u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD140u: /* CMP IMM C9 03 */
    c->pc = 0xD142u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xD142u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD144u ^ 0xD148u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD148u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD144u; } return 1;
case 0xD144u: /* LDA IMM A9 02 */
    c->pc = 0xD146u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD146u: /* STA ZP 85 01 */
    c->pc = 0xD148u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD148u: /* LDA ABY B9 08 03 */
    c->pc = 0xD14Bu;
    ea = (uint16_t)(0x0308u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0308u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD14Bu: /* STA ABS 8D 06 20 */
    c->pc = 0xD14Eu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD14Eu: /* LDA ABY B9 0C 03 */
    c->pc = 0xD151u;
    ea = (uint16_t)(0x030Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x030Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD151u: /* STA ABS 8D 06 20 */
    c->pc = 0xD154u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD154u: /* LDA ABY B9 50 03 */
    c->pc = 0xD157u;
    ea = (uint16_t)(0x0350u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0350u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD157u: /* STA ABS 8D 07 20 */
    c->pc = 0xD15Au;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD15Au: /* LDA ZP A5 0B */
    c->pc = 0xD15Cu;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD15Cu: /* STA ABS 8D 06 20 */
    c->pc = 0xD15Fu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD15Fu: /* CLC IMP 18 */
    c->pc = 0xD160u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD160u: /* LDA ZP A5 0A */
    c->pc = 0xD162u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD162u: /* STA ABS 8D 06 20 */
    c->pc = 0xD165u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD165u: /* ADC IMM 69 20 */
    c->pc = 0xD167u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD167u: /* STA ZP 85 0A */
    c->pc = 0xD169u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD169u: /* LDY IMM A0 04 */
    c->pc = 0xD16Bu;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD16Bu: /* LDA ABX BD 10 03 */
    c->pc = 0xD16Eu;
    ea = (uint16_t)(0x0310u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0310u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD16Eu: /* STA ABS 8D 07 20 */
    c->pc = 0xD171u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD171u: /* INX IMP E8 */
    c->pc = 0xD172u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD172u: /* DEY IMP 88 */
    c->pc = 0xD173u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD173u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD175u ^ 0xD16Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD16Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD175u; } return 1;
case 0xD175u: /* DEC ZP C6 01 */
    c->pc = 0xD177u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD177u: /* BNE REL D0 E1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD179u ^ 0xD15Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD15Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xD179u; } return 1;
case 0xD179u: /* LDY ZP A4 00 */
    c->pc = 0xD17Bu;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD17Bu: /* INY IMP C8 */
    c->pc = 0xD17Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD17Cu: /* DEC ZP C6 1B */
    c->pc = 0xD17Eu;
    ea = 0x1Bu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD17Eu: /* BNE REL D0 A2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD180u ^ 0xD122u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD122u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD180u; } return 1;
case 0xD180u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD181u: /* LDX IMM A2 00 */
    c->pc = 0xD183u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD183u: /* STX ZP 86 1B */
    c->pc = 0xD185u;
    ea = 0x1Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xD185u: /* LDA ABS AD 00 03 */
    c->pc = 0xD188u;
    ea = 0x0300u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD188u: /* STA ABS 8D 06 20 */
    c->pc = 0xD18Bu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD18Bu: /* LDA ABS AD 01 03 */
    c->pc = 0xD18Eu;
    ea = 0x0301u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD18Eu: /* STA ABS 8D 06 20 */
    c->pc = 0xD191u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD191u: /* LDA ABX BD 02 03 */
    c->pc = 0xD194u;
    ea = (uint16_t)(0x0302u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0302u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD194u: /* STA ABS 8D 07 20 */
    c->pc = 0xD197u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD197u: /* INX IMP E8 */
    c->pc = 0xD198u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD198u: /* TXA IMP 8A */
    c->pc = 0xD199u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD199u: /* AND IMM 29 07 */
    c->pc = 0xD19Bu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD19Bu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD19Du ^ 0xD191u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD191u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD19Du; } return 1;
case 0xD19Du: /* CLC IMP 18 */
    c->pc = 0xD19Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD19Eu: /* LDA ABS AD 01 03 */
    c->pc = 0xD1A1u;
    ea = 0x0301u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1A1u: /* ADC IMM 69 20 */
    c->pc = 0xD1A3u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD1A3u: /* STA ABS 8D 01 03 */
    c->pc = 0xD1A6u;
    ea = 0x0301u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1A6u: /* LDA ABS AD 12 03 */
    c->pc = 0xD1A9u;
    ea = 0x0312u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1A9u: /* STA ABS 8D 06 20 */
    c->pc = 0xD1ACu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1ACu: /* LDA ABS AD 13 03 */
    c->pc = 0xD1AFu;
    ea = 0x0313u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1AFu: /* STA ABS 8D 06 20 */
    c->pc = 0xD1B2u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1B2u: /* LDA ABS AD 07 20 */
    c->pc = 0xD1B5u;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1B5u: /* LDA ABS AD 07 20 */
    c->pc = 0xD1B8u;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1B8u: /* LDY ZP A4 1B */
    c->pc = 0xD1BAu;
    ea = 0x1Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD1BAu: /* AND ABS 2D 14 03 */
    c->pc = 0xD1BDu;
    ea = 0x0314u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1BDu: /* ORA ABY 19 15 03 */
    c->pc = 0xD1C0u;
    ea = (uint16_t)(0x0315u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0315u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD1C0u: /* PHA IMP 48 */
    c->pc = 0xD1C1u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD1C1u: /* LDA ABS AD 12 03 */
    c->pc = 0xD1C4u;
    ea = 0x0312u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1C4u: /* STA ABS 8D 06 20 */
    c->pc = 0xD1C7u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1C7u: /* LDA ABS AD 13 03 */
    c->pc = 0xD1CAu;
    ea = 0x0313u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1CAu: /* STA ABS 8D 06 20 */
    c->pc = 0xD1CDu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1CDu: /* PLA IMP 68 */
    c->pc = 0xD1CEu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1CEu: /* STA ABS 8D 07 20 */
    c->pc = 0xD1D1u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1D1u: /* INC ZP E6 1B */
    c->pc = 0xD1D3u;
    ea = 0x1Bu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD1D3u: /* INC ABS EE 13 03 */
    c->pc = 0xD1D6u;
    ea = 0x0313u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xD1D6u: /* CPX IMM E0 10 */
    c->pc = 0xD1D8u;
    v = 0x10u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xD1D8u: /* BNE REL D0 AB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD1DAu ^ 0xD185u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD185u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD1DAu; } return 1;
case 0xD1DAu: /* LDA IMM A9 00 */
    c->pc = 0xD1DCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD1DCu: /* STA ZP 85 1B */
    c->pc = 0xD1DEu;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD1DEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD1DFu: /* LDA ABS AD B6 03 */
    c->pc = 0xD1E2u;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1E2u: /* STA ABS 8D 06 20 */
    c->pc = 0xD1E5u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1E5u: /* LDA ABS AD B7 03 */
    c->pc = 0xD1E8u;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1E8u: /* STA ABS 8D 06 20 */
    c->pc = 0xD1EBu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1EBu: /* LDX IMM A2 00 */
    c->pc = 0xD1EDu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD1EDu: /* LDA ABX BD B8 03 */
    c->pc = 0xD1F0u;
    ea = (uint16_t)(0x03B8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03B8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD1F0u: /* STA ABS 8D 07 20 */
    c->pc = 0xD1F3u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD1F3u: /* INX IMP E8 */
    c->pc = 0xD1F4u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD1F4u: /* DEC ZP C6 47 */
    c->pc = 0xD1F6u;
    ea = 0x47u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD1F6u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD1F8u ^ 0xD1EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD1EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD1F8u; } return 1;
case 0xD1F8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD1F9u: /* LDA ZP A5 F7 */
    c->pc = 0xD1FBu;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD1FBu: /* ORA IMM 09 04 */
    c->pc = 0xD1FDu;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD1FDu: /* STA ABS 8D 00 20 */
    c->pc = 0xD200u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD200u: /* LDA ZP A5 54 */
    c->pc = 0xD202u;
    ea = 0x54u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD202u: /* BNE REL D0 65 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD204u ^ 0xD269u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD269u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD204u; } return 1;
case 0xD204u: /* LDY ZP A4 51 */
    c->pc = 0xD206u;
    ea = 0x51u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD206u: /* BMI REL 30 25 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xD208u ^ 0xD22Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD22Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xD208u; } return 1;
case 0xD208u: /* LDA ABY B9 B5 03 */
    c->pc = 0xD20Bu;
    ea = (uint16_t)(0x03B5u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03B5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD20Bu: /* STA ABS 8D 06 20 */
    c->pc = 0xD20Eu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD20Eu: /* LDA ABY B9 BB 03 */
    c->pc = 0xD211u;
    ea = (uint16_t)(0x03BBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03BBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD211u: /* STA ABS 8D 06 20 */
    c->pc = 0xD214u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD214u: /* LDA ABY B9 C1 03 */
    c->pc = 0xD217u;
    ea = (uint16_t)(0x03C1u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03C1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD217u: /* STA ABS 8D 07 20 */
    c->pc = 0xD21Au;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD21Au: /* CLC IMP 18 */
    c->pc = 0xD21Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD21Bu: /* ADC IMM 69 01 */
    c->pc = 0xD21Du;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD21Du: /* STA ABS 8D 07 20 */
    c->pc = 0xD220u;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD220u: /* DEY IMP 88 */
    c->pc = 0xD221u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD221u: /* BNE REL D0 E5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD223u ^ 0xD208u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD208u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD223u; } return 1;
case 0xD223u: /* STY ZP 84 51 */
    c->pc = 0xD225u;
    ea = 0x51u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD225u: /* LDA ZP A5 F7 */
    c->pc = 0xD227u;
    ea = 0xF7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD227u: /* AND IMM 29 FB */
    c->pc = 0xD229u;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD229u: /* STA ABS 8D 00 20 */
    c->pc = 0xD22Cu;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD22Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD22Du: /* TYA IMP 98 */
    c->pc = 0xD22Eu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD22Eu: /* AND IMM 29 7F */
    c->pc = 0xD230u;
    v = 0x7Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD230u: /* TAY IMP A8 */
    c->pc = 0xD231u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD231u: /* LDA IMM A9 02 */
    c->pc = 0xD233u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD233u: /* STA ZP 85 00 */
    c->pc = 0xD235u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD235u: /* LDA IMM A9 E4 */
    c->pc = 0xD237u;
    v = 0xE4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD237u: /* STA ZP 85 01 */
    c->pc = 0xD239u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD239u: /* LDA ABY B9 B5 03 */
    c->pc = 0xD23Cu;
    ea = (uint16_t)(0x03B5u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03B5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD23Cu: /* STA ABS 8D 06 20 */
    c->pc = 0xD23Fu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD23Fu: /* LDA ABY B9 BB 03 */
    c->pc = 0xD242u;
    ea = (uint16_t)(0x03BBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03BBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD242u: /* STA ABS 8D 06 20 */
    c->pc = 0xD245u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD245u: /* LDA IMM A9 02 */
    c->pc = 0xD247u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD247u: /* STA ZP 85 02 */
    c->pc = 0xD249u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD249u: /* LDA ZP A5 01 */
    c->pc = 0xD24Bu;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD24Bu: /* STA ABS 8D 07 20 */
    c->pc = 0xD24Eu;
    ea = 0x2007u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD24Eu: /* INC ZP E6 01 */
    c->pc = 0xD250u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD250u: /* DEC ZP C6 02 */
    c->pc = 0xD252u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD252u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD254u ^ 0xD249u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD249u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD254u; } return 1;
case 0xD254u: /* DEC ZP C6 00 */
    c->pc = 0xD256u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD256u: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD258u ^ 0xD264u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD264u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD258u; } return 1;
case 0xD258u: /* CLC IMP 18 */
    c->pc = 0xD259u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD259u: /* LDA ABY B9 BB 03 */
    c->pc = 0xD25Cu;
    ea = (uint16_t)(0x03BBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x03BBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD25Cu: /* ADC IMM 69 01 */
    c->pc = 0xD25Eu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD25Eu: /* STA ABY 99 BB 03 */
    c->pc = 0xD261u;
    ea = (uint16_t)(0x03BBu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD261u: /* JMP ABS 4C 39 D2 */
    c->pc = 0xD239u; c->cpu_cycles += 3u; return 1;
case 0xD264u: /* DEY IMP 88 */
    c->pc = 0xD265u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD265u: /* BNE REL D0 CA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD267u ^ 0xD231u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD231u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD267u; } return 1;
case 0xD267u: /* BEQ REL F0 BA */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD269u ^ 0xD223u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD223u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD269u; } return 1;
case 0xD269u: /* BPL REL 10 18 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD26Bu ^ 0xD283u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD283u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD26Bu; } return 1;
case 0xD26Bu: /* LDA ABS AD B6 03 */
    c->pc = 0xD26Eu;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD26Eu: /* STA ABS 8D 06 20 */
    c->pc = 0xD271u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD271u: /* LDX ABS AE BC 03 */
    c->pc = 0xD274u;
    ea = 0x03BCu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD274u: /* DEX IMP CA */
    c->pc = 0xD275u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD275u: /* DEX IMP CA */
    c->pc = 0xD276u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD276u: /* STX ABS 8E 06 20 */
    c->pc = 0xD279u;
    ea = 0x2006u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD279u: /* LDA ABS AD 07 20 */
    c->pc = 0xD27Cu;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD27Cu: /* LDA ABS AD 07 20 */
    c->pc = 0xD27Fu;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD27Fu: /* TAX IMP AA */
    c->pc = 0xD280u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD280u: /* JMP ABS 4C 85 D2 */
    c->pc = 0xD285u; c->cpu_cycles += 3u; return 1;
case 0xD283u: /* LDX IMM A2 20 */
    c->pc = 0xD285u;
    v = 0x20u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD285u: /* LDY IMM A0 02 */
    c->pc = 0xD287u;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD287u: /* LDA ABS AD B6 03 */
    c->pc = 0xD28Au;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD28Au: /* STA ABS 8D 06 20 */
    c->pc = 0xD28Du;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD28Du: /* LDA ABS AD BC 03 */
    c->pc = 0xD290u;
    ea = 0x03BCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD290u: /* STA ABS 8D 06 20 */
    c->pc = 0xD293u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD293u: /* STX ABS 8E 07 20 */
    c->pc = 0xD296u;
    ea = 0x2007u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD296u: /* INX IMP E8 */
    c->pc = 0xD297u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD297u: /* STX ABS 8E 07 20 */
    c->pc = 0xD29Au;
    ea = 0x2007u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD29Au: /* INX IMP E8 */
    c->pc = 0xD29Bu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD29Bu: /* INC ABS EE BC 03 */
    c->pc = 0xD29Eu;
    ea = 0x03BCu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xD29Eu: /* DEY IMP 88 */
    c->pc = 0xD29Fu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD29Fu: /* BNE REL D0 E6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD2A1u ^ 0xD287u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD287u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD2A1u; } return 1;
case 0xD2A1u: /* LDA ABS AD C2 03 */
    c->pc = 0xD2A4u;
    ea = 0x03C2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2A4u: /* STA ABS 8D 06 20 */
    c->pc = 0xD2A7u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2A7u: /* LDA ABS AD C8 03 */
    c->pc = 0xD2AAu;
    ea = 0x03C8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2AAu: /* STA ABS 8D 06 20 */
    c->pc = 0xD2ADu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2ADu: /* LDA ZP A5 54 */
    c->pc = 0xD2AFu;
    ea = 0x54u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD2AFu: /* BPL REL 10 1B */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD2B1u ^ 0xD2CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD2CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD2B1u; } return 1;
case 0xD2B1u: /* LDA ABS AD 07 20 */
    c->pc = 0xD2B4u;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2B4u: /* LDA ABS AD 07 20 */
    c->pc = 0xD2B7u;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2B7u: /* STA ZP 85 00 */
    c->pc = 0xD2B9u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD2B9u: /* LDA ABS AD D4 03 */
    c->pc = 0xD2BCu;
    ea = 0x03D4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2BCu: /* EOR IMM 49 FF */
    c->pc = 0xD2BEu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2BEu: /* LSR IMP 4A */
    c->pc = 0xD2BFu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2BFu: /* LSR IMP 4A */
    c->pc = 0xD2C0u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2C0u: /* AND ZP 25 00 */
    c->pc = 0xD2C2u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD2C2u: /* ASL IMP 0A */
    c->pc = 0xD2C3u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2C3u: /* ASL IMP 0A */
    c->pc = 0xD2C4u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2C4u: /* STA ABS 8D CE 03 */
    c->pc = 0xD2C7u;
    ea = 0x03CEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2C7u: /* LDA ZP A5 00 */
    c->pc = 0xD2C9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD2C9u: /* JMP ABS 4C D2 D2 */
    c->pc = 0xD2D2u; c->cpu_cycles += 3u; return 1;
case 0xD2CCu: /* LDA ABS AD 07 20 */
    c->pc = 0xD2CFu;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2CFu: /* LDA ABS AD 07 20 */
    c->pc = 0xD2D2u;
    ea = 0x2007u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2D2u: /* AND ABS 2D D4 03 */
    c->pc = 0xD2D5u;
    ea = 0x03D4u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2D5u: /* ORA ABS 0D CE 03 */
    c->pc = 0xD2D8u;
    ea = 0x03CEu;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2D8u: /* TAX IMP AA */
    c->pc = 0xD2D9u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD2D9u: /* LDA ABS AD C2 03 */
    c->pc = 0xD2DCu;
    ea = 0x03C2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2DCu: /* STA ABS 8D 06 20 */
    c->pc = 0xD2DFu;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2DFu: /* LDA ABS AD C8 03 */
    c->pc = 0xD2E2u;
    ea = 0x03C8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2E2u: /* STA ABS 8D 06 20 */
    c->pc = 0xD2E5u;
    ea = 0x2006u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD2E5u: /* STX ABS 8E 07 20 */
    c->pc = 0xD2E8u;
    ea = 0x2007u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD2E8u: /* STY ZP 84 54 */
    c->pc = 0xD2EAu;
    ea = 0x54u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD2EAu: /* JMP ABS 4C 23 D2 */
    c->pc = 0xD223u; c->cpu_cycles += 3u; return 1;
case 0xD2EDu: /* LDA ZP A5 A9 */
    c->pc = 0xD2EFu;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD2EFu: /* ASL IMP 0A */
    c->pc = 0xD2F0u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2F0u: /* ASL IMP 0A */
    c->pc = 0xD2F1u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD2F1u: /* TAX IMP AA */
    c->pc = 0xD2F2u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD2F2u: /* INX IMP E8 */
    c->pc = 0xD2F3u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD2F3u: /* LDY IMM A0 01 */
    c->pc = 0xD2F5u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD2F5u: /* LDA ABX BD 02 D3 */
    c->pc = 0xD2F8u;
    ea = (uint16_t)(0xD302u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD302u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD2F8u: /* STA ABY 99 66 03 */
    c->pc = 0xD2FBu;
    ea = (uint16_t)(0x0366u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD2FBu: /* INY IMP C8 */
    c->pc = 0xD2FCu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD2FCu: /* INX IMP E8 */
    c->pc = 0xD2FDu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD2FDu: /* CPY IMM C0 04 */
    c->pc = 0xD2FFu;
    v = 0x04u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xD2FFu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD301u ^ 0xD2F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD2F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD301u; } return 1;
case 0xD301u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD332u: /* LDA IMM A9 26 */
    c->pc = 0xD334u;
    v = 0x26u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD334u: /* JSR ABS 20 51 C0 */
    push(c, 0xD3u); push(c, 0x36u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xD337u: /* LDA IMM A9 00 */
    c->pc = 0xD339u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD339u: /* STA ZP 85 3D */
    c->pc = 0xD33Bu;
    ea = 0x3Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD33Bu: /* STA ZP 85 36 */
    c->pc = 0xD33Du;
    ea = 0x36u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD33Du: /* LDA IMM A9 02 */
    c->pc = 0xD33Fu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD33Fu: /* STA ZP 85 2C */
    c->pc = 0xD341u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD341u: /* JSR ABS 20 A8 D3 */
    push(c, 0xD3u); push(c, 0x43u); c->pc = 0xD3A8u; c->cpu_cycles += 6u; return 1;
case 0xD344u: /* LDA IMM A9 01 */
    c->pc = 0xD346u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD346u: /* STA ABS 8D A0 06 */
    c->pc = 0xD349u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD349u: /* LDA IMM A9 6F */
    c->pc = 0xD34Bu;
    v = 0x6Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD34Bu: /* STA ZP 85 4B */
    c->pc = 0xD34Du;
    ea = 0x4Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD34Du: /* LDA IMM A9 01 */
    c->pc = 0xD34Fu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD34Fu: /* STA ABS 8D 40 06 */
    c->pc = 0xD352u;
    ea = 0x0640u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD352u: /* LDA IMM A9 40 */
    c->pc = 0xD354u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD354u: /* STA ABS 8D 60 06 */
    c->pc = 0xD357u;
    ea = 0x0660u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD357u: /* LDA IMM A9 00 */
    c->pc = 0xD359u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD359u: /* STA ABS 8D 00 06 */
    c->pc = 0xD35Cu;
    ea = 0x0600u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD35Cu: /* LDA IMM A9 90 */
    c->pc = 0xD35Eu;
    v = 0x90u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD35Eu: /* STA ABS 8D 20 06 */
    c->pc = 0xD361u;
    ea = 0x0620u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD361u: /* LSR ABS 4E 2F 04 */
    c->pc = 0xD364u;
    ea = 0x042Fu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xD364u: /* LDA IMM A9 00 */
    c->pc = 0xD366u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD366u: /* STA ZP 85 AA */
    c->pc = 0xD368u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD368u: /* LDX IMM A2 0E */
    c->pc = 0xD36Au;
    v = 0x0Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD36Au: /* LDA ABX BD 20 04 */
    c->pc = 0xD36Du;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD36Du: /* BPL REL 10 06 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD36Fu ^ 0xD375u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD375u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD36Fu; } return 1;
case 0xD36Fu: /* DEX IMP CA */
    c->pc = 0xD370u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD370u: /* CPX IMM E0 01 */
    c->pc = 0xD372u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xD372u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD374u ^ 0xD36Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD36Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xD374u; } return 1;
case 0xD374u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD375u: /* LDA IMM A9 80 */
    c->pc = 0xD377u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD377u: /* STA ABX 9D 20 04 */
    c->pc = 0xD37Au;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD37Au: /* LDA IMM A9 24 */
    c->pc = 0xD37Cu;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD37Cu: /* STA ABX 9D 00 04 */
    c->pc = 0xD37Fu;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD37Fu: /* LDA ABS AD 40 04 */
    c->pc = 0xD382u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD382u: /* STA ABX 9D 40 04 */
    c->pc = 0xD385u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD385u: /* LDA ABS AD 60 04 */
    c->pc = 0xD388u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD388u: /* STA ABX 9D 60 04 */
    c->pc = 0xD38Bu;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD38Bu: /* LDA ABS AD A0 04 */
    c->pc = 0xD38Eu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD38Eu: /* STA ABX 9D A0 04 */
    c->pc = 0xD391u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD391u: /* LDA IMM A9 08 */
    c->pc = 0xD393u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD393u: /* STA ABX 9D 60 06 */
    c->pc = 0xD396u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD396u: /* LDA IMM A9 00 */
    c->pc = 0xD398u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD398u: /* STA ABX 9D 40 06 */
    c->pc = 0xD39Bu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD39Bu: /* STA ABX 9D 20 06 */
    c->pc = 0xD39Eu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD39Eu: /* STA ABX 9D 00 06 */
    c->pc = 0xD3A1u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD3A1u: /* STA ABX 9D 80 06 */
    c->pc = 0xD3A4u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD3A4u: /* STA ABX 9D A0 06 */
    c->pc = 0xD3A7u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD3A7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD3A8u: /* LDX ZP A6 2C */
    c->pc = 0xD3AAu;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xD3AAu: /* CLC IMP 18 */
    c->pc = 0xD3ABu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD3ABu: /* LDA ABX BD D4 D3 */
    c->pc = 0xD3AEu;
    ea = (uint16_t)(0xD3D4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD3D4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD3AEu: /* ADC ZP 65 3D */
    c->pc = 0xD3B0u;
    ea = 0x3Du;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xD3B0u: /* CMP ABS CD 00 04 */
    c->pc = 0xD3B3u;
    ea = 0x0400u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u; return 1;
case 0xD3B3u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD3B5u ^ 0xD3BDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD3BDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD3B5u; } return 1;
case 0xD3B5u: /* LDX IMM A2 00 */
    c->pc = 0xD3B7u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD3B7u: /* STX ABS 8E A0 06 */
    c->pc = 0xD3BAu;
    ea = 0x06A0u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD3BAu: /* STX ABS 8E 80 06 */
    c->pc = 0xD3BDu;
    ea = 0x0680u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0xD3BDu: /* STA ABS 8D 00 04 */
    c->pc = 0xD3C0u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD3C0u: /* LDA ZP A5 36 */
    c->pc = 0xD3C2u;
    ea = 0x36u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD3C2u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD3C4u ^ 0xD3C7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD3C7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD3C4u; } return 1;
case 0xD3C4u: /* DEC ZP C6 36 */
    c->pc = 0xD3C6u;
    ea = 0x36u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD3C6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD3C7u: /* LDA IMM A9 00 */
    c->pc = 0xD3C9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD3C9u: /* STA ZP 85 3D */
    c->pc = 0xD3CBu;
    ea = 0x3Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD3CBu: /* LDX ZP A6 2C */
    c->pc = 0xD3CDu;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xD3CDu: /* LDA ABX BD D4 D3 */
    c->pc = 0xD3D0u;
    ea = (uint16_t)(0xD3D4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD3D4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD3D0u: /* STA ABS 8D 00 04 */
    c->pc = 0xD3D3u;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD3D3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD3E0u: /* LDA ABY B9 4F D4 */
    c->pc = 0xD3E3u;
    ea = (uint16_t)(0xD44Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD44Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD3E3u: /* STA ABX 9D 00 04 */
    c->pc = 0xD3E6u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD3E6u: /* LDA ABS AD 20 04 */
    c->pc = 0xD3E9u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD3E9u: /* AND IMM 29 40 */
    c->pc = 0xD3EBu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD3EBu: /* PHP IMP 08 */
    c->pc = 0xD3ECu;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xD3ECu: /* ORA ABY 19 61 D4 */
    c->pc = 0xD3EFu;
    ea = (uint16_t)(0xD461u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD461u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD3EFu: /* STA ABX 9D 20 04 */
    c->pc = 0xD3F2u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD3F2u: /* PLP IMP 28 */
    c->pc = 0xD3F3u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xD3F3u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD3F5u ^ 0xD40Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD40Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xD3F5u; } return 1;
case 0xD3F5u: /* SEC IMP 38 */
    c->pc = 0xD3F6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD3F6u: /* LDA ABS AD 60 04 */
    c->pc = 0xD3F9u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD3F9u: /* SBC ABY F9 73 D4 */
    c->pc = 0xD3FCu;
    ea = (uint16_t)(0xD473u + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0xD473u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD3FCu: /* STA ABX 9D 60 04 */
    c->pc = 0xD3FFu;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD3FFu: /* LDA ABS AD 40 04 */
    c->pc = 0xD402u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD402u: /* SBC IMM E9 00 */
    c->pc = 0xD404u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD404u: /* STA ABX 9D 40 04 */
    c->pc = 0xD407u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD407u: /* JMP ABS 4C 1C D4 */
    c->pc = 0xD41Cu; c->cpu_cycles += 3u; return 1;
case 0xD40Au: /* CLC IMP 18 */
    c->pc = 0xD40Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD40Bu: /* LDA ABS AD 60 04 */
    c->pc = 0xD40Eu;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD40Eu: /* ADC ABY 79 73 D4 */
    c->pc = 0xD411u;
    ea = (uint16_t)(0xD473u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xD473u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD411u: /* STA ABX 9D 60 04 */
    c->pc = 0xD414u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD414u: /* LDA ABS AD 40 04 */
    c->pc = 0xD417u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD417u: /* ADC IMM 69 00 */
    c->pc = 0xD419u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD419u: /* STA ABX 9D 40 04 */
    c->pc = 0xD41Cu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD41Cu: /* LDA ABS AD A0 04 */
    c->pc = 0xD41Fu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD41Fu: /* STA ABX 9D A0 04 */
    c->pc = 0xD422u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD422u: /* LDA ABY B9 85 D4 */
    c->pc = 0xD425u;
    ea = (uint16_t)(0xD485u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD485u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD425u: /* STA ABX 9D 20 06 */
    c->pc = 0xD428u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD428u: /* LDA ABY B9 97 D4 */
    c->pc = 0xD42Bu;
    ea = (uint16_t)(0xD497u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD497u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD42Bu: /* STA ABX 9D 00 06 */
    c->pc = 0xD42Eu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD42Eu: /* LDA ABY B9 A9 D4 */
    c->pc = 0xD431u;
    ea = (uint16_t)(0xD4A9u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4A9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD431u: /* STA ABX 9D 60 06 */
    c->pc = 0xD434u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD434u: /* LDA ABY B9 BB D4 */
    c->pc = 0xD437u;
    ea = (uint16_t)(0xD4BBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4BBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD437u: /* STA ABX 9D 40 06 */
    c->pc = 0xD43Au;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD43Au: /* LDA ABY B9 CD D4 */
    c->pc = 0xD43Du;
    ea = (uint16_t)(0xD4CDu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4CDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD43Du: /* STA ABX 9D 90 05 */
    c->pc = 0xD440u;
    ea = (uint16_t)(0x0590u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD440u: /* LDA IMM A9 00 */
    c->pc = 0xD442u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD442u: /* STA ABX 9D A0 06 */
    c->pc = 0xD445u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD445u: /* STA ABX 9D 80 06 */
    c->pc = 0xD448u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD448u: /* STA ABX 9D E0 04 */
    c->pc = 0xD44Bu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD44Bu: /* STA ABX 9D C0 06 */
    c->pc = 0xD44Eu;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD44Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD624u: /* LDY ABS AC 00 04 */
    c->pc = 0xD627u;
    ea = 0x0400u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xD627u: /* STY ZP 84 01 */
    c->pc = 0xD629u;
    ea = 0x01u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD629u: /* LDA IMM A9 09 */
    c->pc = 0xD62Bu;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD62Bu: /* JSR ABS 20 00 C0 */
    push(c, 0xD6u); push(c, 0x2Du); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD62Eu: /* JSR ABS 20 00 86 */
    push(c, 0xD6u); push(c, 0x30u); c->pc = 0x8600u; c->cpu_cycles += 6u; return 1;
case 0xD631u: /* LDA IMM A9 0D */
    c->pc = 0xD633u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD633u: /* JSR ABS 20 00 C0 */
    push(c, 0xD6u); push(c, 0x35u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD636u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD637u: /* LDA IMM A9 09 */
    c->pc = 0xD639u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD639u: /* JSR ABS 20 00 C0 */
    push(c, 0xD6u); push(c, 0x3Bu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD63Cu: /* JSR ABS 20 03 86 */
    push(c, 0xD6u); push(c, 0x3Eu); c->pc = 0x8603u; c->cpu_cycles += 6u; return 1;
case 0xD63Fu: /* JMP ABS 4C 31 D6 */
    c->pc = 0xD631u; c->cpu_cycles += 3u; return 1;
case 0xD642u: /* LDA IMM A9 09 */
    c->pc = 0xD644u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD644u: /* JSR ABS 20 00 C0 */
    push(c, 0xD6u); push(c, 0x46u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD647u: /* JSR ABS 20 06 86 */
    push(c, 0xD6u); push(c, 0x49u); c->pc = 0x8606u; c->cpu_cycles += 6u; return 1;
case 0xD64Au: /* JMP ABS 4C 31 D6 */
    c->pc = 0xD631u; c->cpu_cycles += 3u; return 1;
case 0xD64Du: /* LDA IMM A9 09 */
    c->pc = 0xD64Fu;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD64Fu: /* JSR ABS 20 00 C0 */
    push(c, 0xD6u); push(c, 0x51u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD652u: /* JSR ABS 20 09 86 */
    push(c, 0xD6u); push(c, 0x54u); c->pc = 0x8609u; c->cpu_cycles += 6u; return 1;
case 0xD655u: /* JMP ABS 4C 31 D6 */
    c->pc = 0xD631u; c->cpu_cycles += 3u; return 1;
case 0xD658u: /* LDA ZP A5 2A */
    c->pc = 0xD65Au;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD65Au: /* AND IMM 29 07 */
    c->pc = 0xD65Cu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD65Cu: /* JSR ABS 20 00 C0 */
    push(c, 0xD6u); push(c, 0x5Eu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD65Fu: /* CLC IMP 18 */
    c->pc = 0xD660u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xD660u: /* LDA ZP A5 1F */
    c->pc = 0xD662u;
    ea = 0x1Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD662u: /* STA ZP 85 0A */
    c->pc = 0xD664u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD664u: /* ADC IMM 69 FF */
    c->pc = 0xD666u;
    v = 0xFFu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD666u: /* STA ZP 85 08 */
    c->pc = 0xD668u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD668u: /* LDA ZP A5 20 */
    c->pc = 0xD66Au;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD66Au: /* STA ZP 85 0B */
    c->pc = 0xD66Cu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD66Cu: /* ADC IMM 69 00 */
    c->pc = 0xD66Eu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xD66Eu: /* STA ZP 85 09 */
    c->pc = 0xD670u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD670u: /* LDA ZP A5 42 */
    c->pc = 0xD672u;
    ea = 0x42u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD672u: /* AND IMM 29 40 */
    c->pc = 0xD674u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD674u: /* BNE REL D0 72 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD676u ^ 0xD6E8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6E8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD676u; } return 1;
case 0xD676u: /* LDY ZP A4 48 */
    c->pc = 0xD678u;
    ea = 0x48u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD678u: /* BEQ REL F0 18 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD67Au ^ 0xD692u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD692u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD67Au; } return 1;
case 0xD67Au: /* LDA ABY B9 FF B5 */
    c->pc = 0xD67Du;
    ea = (uint16_t)(0xB5FFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB5FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD67Du: /* CMP ZP C5 0B */
    c->pc = 0xD67Fu;
    ea = 0x0Bu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD67Fu: /* BCC REL 90 11 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD681u ^ 0xD692u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD692u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD681u; } return 1;
case 0xD681u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD683u ^ 0xD68Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD68Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xD683u; } return 1;
case 0xD683u: /* LDA ABY B9 FF B6 */
    c->pc = 0xD686u;
    ea = (uint16_t)(0xB6FFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB6FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD686u: /* CMP ZP C5 0A */
    c->pc = 0xD688u;
    ea = 0x0Au;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD688u: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD68Au ^ 0xD692u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD692u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD68Au; } return 1;
case 0xD68Au: /* DEY IMP 88 */
    c->pc = 0xD68Bu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD68Bu: /* JSR ABS 20 53 D7 */
    push(c, 0xD6u); push(c, 0x8Du); c->pc = 0xD753u; c->cpu_cycles += 6u; return 1;
case 0xD68Eu: /* DEC ZP C6 48 */
    c->pc = 0xD690u;
    ea = 0x48u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD690u: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD692u ^ 0xD676u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD676u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD692u; } return 1;
case 0xD692u: /* LDY ZP A4 49 */
    c->pc = 0xD694u;
    ea = 0x49u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD694u: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD696u ^ 0xD6A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD696u; } return 1;
case 0xD696u: /* LDA ABY B9 FF B5 */
    c->pc = 0xD699u;
    ea = (uint16_t)(0xB5FFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB5FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD699u: /* CMP ZP C5 09 */
    c->pc = 0xD69Bu;
    ea = 0x09u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD69Bu: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD69Du ^ 0xD6A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD69Du; } return 1;
case 0xD69Du: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD69Fu ^ 0xD6A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD69Fu; } return 1;
case 0xD69Fu: /* LDA ABY B9 FF B6 */
    c->pc = 0xD6A2u;
    ea = (uint16_t)(0xB6FFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB6FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6A2u: /* CMP ZP C5 08 */
    c->pc = 0xD6A4u;
    ea = 0x08u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD6A4u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6A6u ^ 0xD6A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6A6u; } return 1;
case 0xD6A6u: /* DEY IMP 88 */
    c->pc = 0xD6A7u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD6A7u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD6A9u ^ 0xD696u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD696u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6A9u; } return 1;
case 0xD6A9u: /* STY ZP 84 49 */
    c->pc = 0xD6ABu;
    ea = 0x49u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD6ABu: /* LDY ZP A4 4C */
    c->pc = 0xD6ADu;
    ea = 0x4Cu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD6ADu: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD6AFu ^ 0xD6CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6AFu; } return 1;
case 0xD6AFu: /* LDA ABY B9 FF B9 */
    c->pc = 0xD6B2u;
    ea = (uint16_t)(0xB9FFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB9FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6B2u: /* CMP ZP C5 0B */
    c->pc = 0xD6B4u;
    ea = 0x0Bu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD6B4u: /* BCC REL 90 16 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6B6u ^ 0xD6CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6B6u; } return 1;
case 0xD6B6u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD6B8u ^ 0xD6BFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6BFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6B8u; } return 1;
case 0xD6B8u: /* LDA ABY B9 3F BA */
    c->pc = 0xD6BBu;
    ea = (uint16_t)(0xBA3Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA3Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6BBu: /* CMP ZP C5 0A */
    c->pc = 0xD6BDu;
    ea = 0x0Au;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD6BDu: /* BCC REL 90 0D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6BFu ^ 0xD6CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6BFu; } return 1;
case 0xD6BFu: /* LDA ABY B9 3F 01 */
    c->pc = 0xD6C2u;
    ea = (uint16_t)(0x013Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x013Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6C2u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD6C4u ^ 0xD6C8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6C8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6C4u; } return 1;
case 0xD6C4u: /* DEY IMP 88 */
    c->pc = 0xD6C5u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD6C5u: /* JSR ABS 20 CC D7 */
    push(c, 0xD6u); push(c, 0xC7u); c->pc = 0xD7CCu; c->cpu_cycles += 6u; return 1;
case 0xD6C8u: /* DEC ZP C6 4C */
    c->pc = 0xD6CAu;
    ea = 0x4Cu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD6CAu: /* BNE REL D0 DF */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD6CCu ^ 0xD6ABu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6ABu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6CCu; } return 1;
case 0xD6CCu: /* LDY ZP A4 4D */
    c->pc = 0xD6CEu;
    ea = 0x4Du;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD6CEu: /* BEQ REL F0 13 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD6D0u ^ 0xD6E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6D0u; } return 1;
case 0xD6D0u: /* LDA ABY B9 FF B9 */
    c->pc = 0xD6D3u;
    ea = (uint16_t)(0xB9FFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB9FFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6D3u: /* CMP ZP C5 09 */
    c->pc = 0xD6D5u;
    ea = 0x09u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD6D5u: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6D7u ^ 0xD6E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6D7u; } return 1;
case 0xD6D7u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD6D9u ^ 0xD6E0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6E0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6D9u; } return 1;
case 0xD6D9u: /* LDA ABY B9 3F BA */
    c->pc = 0xD6DCu;
    ea = (uint16_t)(0xBA3Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA3Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6DCu: /* CMP ZP C5 08 */
    c->pc = 0xD6DEu;
    ea = 0x08u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xD6DEu: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6E0u ^ 0xD6E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6E0u; } return 1;
case 0xD6E0u: /* DEY IMP 88 */
    c->pc = 0xD6E1u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD6E1u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD6E3u ^ 0xD6D0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6D0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6E3u; } return 1;
case 0xD6E3u: /* STY ZP 84 4D */
    c->pc = 0xD6E5u;
    ea = 0x4Du;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD6E5u: /* JMP ABS 4C 4D D7 */
    c->pc = 0xD74Du; c->cpu_cycles += 3u; return 1;
case 0xD6E8u: /* LDY ZP A4 49 */
    c->pc = 0xD6EAu;
    ea = 0x49u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD6EAu: /* LDA ZP A5 09 */
    c->pc = 0xD6ECu;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD6ECu: /* CMP ABY D9 00 B6 */
    c->pc = 0xD6EFu;
    ea = (uint16_t)(0xB600u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xB600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6EFu: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6F1u ^ 0xD701u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD701u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6F1u; } return 1;
case 0xD6F1u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD6F3u ^ 0xD6FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6F3u; } return 1;
case 0xD6F3u: /* LDA ZP A5 08 */
    c->pc = 0xD6F5u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD6F5u: /* CMP ABY D9 00 B7 */
    c->pc = 0xD6F8u;
    ea = (uint16_t)(0xB700u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xB700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD6F8u: /* BCC REL 90 07 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD6FAu ^ 0xD701u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD701u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD6FAu; } return 1;
case 0xD6FAu: /* JSR ABS 20 53 D7 */
    push(c, 0xD6u); push(c, 0xFCu); c->pc = 0xD753u; c->cpu_cycles += 6u; return 1;
case 0xD6FDu: /* INC ZP E6 49 */
    c->pc = 0xD6FFu;
    ea = 0x49u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD6FFu: /* BNE REL D0 E7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD701u ^ 0xD6E8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD6E8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD701u; } return 1;
case 0xD701u: /* LDY ZP A4 48 */
    c->pc = 0xD703u;
    ea = 0x48u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD703u: /* LDA ZP A5 0B */
    c->pc = 0xD705u;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD705u: /* CMP ABY D9 00 B6 */
    c->pc = 0xD708u;
    ea = (uint16_t)(0xB600u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xB600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD708u: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD70Au ^ 0xD716u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD716u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD70Au; } return 1;
case 0xD70Au: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD70Cu ^ 0xD713u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD713u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD70Cu; } return 1;
case 0xD70Cu: /* LDA ZP A5 0A */
    c->pc = 0xD70Eu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD70Eu: /* CMP ABY D9 00 B7 */
    c->pc = 0xD711u;
    ea = (uint16_t)(0xB700u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xB700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD711u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD713u ^ 0xD716u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD716u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD713u; } return 1;
case 0xD713u: /* INY IMP C8 */
    c->pc = 0xD714u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD714u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD716u ^ 0xD703u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD703u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD716u; } return 1;
case 0xD716u: /* STY ZP 84 48 */
    c->pc = 0xD718u;
    ea = 0x48u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD718u: /* LDY ZP A4 4D */
    c->pc = 0xD71Au;
    ea = 0x4Du;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD71Au: /* LDA ZP A5 09 */
    c->pc = 0xD71Cu;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD71Cu: /* CMP ABY D9 00 BA */
    c->pc = 0xD71Fu;
    ea = (uint16_t)(0xBA00u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xBA00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD71Fu: /* BCC REL 90 15 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD721u ^ 0xD736u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD736u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD721u; } return 1;
case 0xD721u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD723u ^ 0xD72Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD72Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xD723u; } return 1;
case 0xD723u: /* LDA ZP A5 08 */
    c->pc = 0xD725u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD725u: /* CMP ABY D9 40 BA */
    c->pc = 0xD728u;
    ea = (uint16_t)(0xBA40u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xBA40u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD728u: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD72Au ^ 0xD736u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD736u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD72Au; } return 1;
case 0xD72Au: /* LDA ABY B9 40 01 */
    c->pc = 0xD72Du;
    ea = (uint16_t)(0x0140u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0140u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD72Du: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD72Fu ^ 0xD732u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD732u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD72Fu; } return 1;
case 0xD72Fu: /* JSR ABS 20 CC D7 */
    push(c, 0xD7u); push(c, 0x31u); c->pc = 0xD7CCu; c->cpu_cycles += 6u; return 1;
case 0xD732u: /* INC ZP E6 4D */
    c->pc = 0xD734u;
    ea = 0x4Du; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xD734u: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD736u ^ 0xD718u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD718u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD736u; } return 1;
case 0xD736u: /* LDY ZP A4 4C */
    c->pc = 0xD738u;
    ea = 0x4Cu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD738u: /* LDA ZP A5 0B */
    c->pc = 0xD73Au;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD73Au: /* CMP ABY D9 00 BA */
    c->pc = 0xD73Du;
    ea = (uint16_t)(0xBA00u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xBA00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD73Du: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD73Fu ^ 0xD74Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD74Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD73Fu; } return 1;
case 0xD73Fu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD741u ^ 0xD748u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD748u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD741u; } return 1;
case 0xD741u: /* LDA ZP A5 0A */
    c->pc = 0xD743u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD743u: /* CMP ABY D9 40 BA */
    c->pc = 0xD746u;
    ea = (uint16_t)(0xBA40u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xBA40u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD746u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xD748u ^ 0xD74Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD74Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD748u; } return 1;
case 0xD748u: /* INY IMP C8 */
    c->pc = 0xD749u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD749u: /* BNE REL D0 ED */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xD74Bu ^ 0xD738u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD738u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD74Bu; } return 1;
case 0xD74Bu: /* STY ZP 84 4C */
    c->pc = 0xD74Du;
    ea = 0x4Cu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xD74Du: /* LDA IMM A9 0E */
    c->pc = 0xD74Fu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD74Fu: /* JSR ABS 20 00 C0 */
    push(c, 0xD7u); push(c, 0x51u); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xD752u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD753u: /* TYA IMP 98 */
    c->pc = 0xD754u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD754u: /* LDX IMM A2 0F */
    c->pc = 0xD756u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD756u: /* CMP ABX DD 00 01 */
    c->pc = 0xD759u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD759u: /* BEQ REL F0 70 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD75Bu ^ 0xD7CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD7CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD75Bu; } return 1;
case 0xD75Bu: /* DEX IMP CA */
    c->pc = 0xD75Cu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD75Cu: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD75Eu ^ 0xD756u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD756u; }
    else { c->cpu_cycles += 2u; c->pc = 0xD75Eu; } return 1;
case 0xD75Eu: /* JSR ABS 20 43 DA */
    push(c, 0xD7u); push(c, 0x60u); c->pc = 0xDA43u; c->cpu_cycles += 6u; return 1;
case 0xD761u: /* BCS REL B0 68 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xD763u ^ 0xD7CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD7CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD763u; } return 1;
case 0xD763u: /* TYA IMP 98 */
    c->pc = 0xD764u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD764u: /* STA ABX 9D 00 01 */
    c->pc = 0xD767u;
    ea = (uint16_t)(0x0100u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD767u: /* LDA ABY B9 00 B6 */
    c->pc = 0xD76Au;
    ea = (uint16_t)(0xB600u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD76Au: /* STA ABX 9D 50 04 */
    c->pc = 0xD76Du;
    ea = (uint16_t)(0x0450u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD76Du: /* LDA ABY B9 00 B7 */
    c->pc = 0xD770u;
    ea = (uint16_t)(0xB700u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB700u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD770u: /* STA ABX 9D 70 04 */
    c->pc = 0xD773u;
    ea = (uint16_t)(0x0470u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD773u: /* LDA ABY B9 00 B8 */
    c->pc = 0xD776u;
    ea = (uint16_t)(0xB800u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB800u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD776u: /* STA ABX 9D B0 04 */
    c->pc = 0xD779u;
    ea = (uint16_t)(0x04B0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD779u: /* LDA ABY B9 00 B9 */
    c->pc = 0xD77Cu;
    ea = (uint16_t)(0xB900u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xB900u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD77Cu: /* STA ABX 9D 10 04 */
    c->pc = 0xD77Fu;
    ea = (uint16_t)(0x0410u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD77Fu: /* TAY IMP A8 */
    c->pc = 0xD780u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD780u: /* PHA IMP 48 */
    c->pc = 0xD781u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD781u: /* LDA ABY B9 05 D8 */
    c->pc = 0xD784u;
    ea = (uint16_t)(0xD805u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD805u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD784u: /* STA ABX 9D 30 04 */
    c->pc = 0xD787u;
    ea = (uint16_t)(0x0430u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD787u: /* LDA ABY B9 81 D9 */
    c->pc = 0xD78Au;
    ea = (uint16_t)(0xD981u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD981u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD78Au: /* STA ABX 9D F0 06 */
    c->pc = 0xD78Du;
    ea = (uint16_t)(0x06F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD78Du: /* LDA IMM A9 14 */
    c->pc = 0xD78Fu;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD78Fu: /* STA ABX 9D D0 06 */
    c->pc = 0xD792u;
    ea = (uint16_t)(0x06D0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD792u: /* LDA ABY B9 85 D8 */
    c->pc = 0xD795u;
    ea = (uint16_t)(0xD885u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD885u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD795u: /* TAY IMP A8 */
    c->pc = 0xD796u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD796u: /* LDA ABY B9 01 DA */
    c->pc = 0xD799u;
    ea = (uint16_t)(0xDA01u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDA01u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD799u: /* STA ABX 9D 10 06 */
    c->pc = 0xD79Cu;
    ea = (uint16_t)(0x0610u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD79Cu: /* LDA ABY B9 02 DA */
    c->pc = 0xD79Fu;
    ea = (uint16_t)(0xDA02u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDA02u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD79Fu: /* STA ABX 9D 30 06 */
    c->pc = 0xD7A2u;
    ea = (uint16_t)(0x0630u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7A2u: /* PLA IMP 68 */
    c->pc = 0xD7A3u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD7A3u: /* TAY IMP A8 */
    c->pc = 0xD7A4u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD7A4u: /* LDA ABY B9 01 D9 */
    c->pc = 0xD7A7u;
    ea = (uint16_t)(0xD901u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD901u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7A7u: /* TAY IMP A8 */
    c->pc = 0xD7A8u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD7A8u: /* LDA ABY B9 21 DA */
    c->pc = 0xD7ABu;
    ea = (uint16_t)(0xDA21u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDA21u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7ABu: /* STA ABX 9D 50 06 */
    c->pc = 0xD7AEu;
    ea = (uint16_t)(0x0650u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7AEu: /* LDA ABY B9 22 DA */
    c->pc = 0xD7B1u;
    ea = (uint16_t)(0xDA22u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDA22u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7B1u: /* STA ABX 9D 70 06 */
    c->pc = 0xD7B4u;
    ea = (uint16_t)(0x0670u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7B4u: /* LDA IMM A9 00 */
    c->pc = 0xD7B6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD7B6u: /* STA ABX 9D B0 06 */
    c->pc = 0xD7B9u;
    ea = (uint16_t)(0x06B0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7B9u: /* STA ABX 9D 90 06 */
    c->pc = 0xD7BCu;
    ea = (uint16_t)(0x0690u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7BCu: /* STA ABX 9D F0 04 */
    c->pc = 0xD7BFu;
    ea = (uint16_t)(0x04F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7BFu: /* STA ABX 9D 20 01 */
    c->pc = 0xD7C2u;
    ea = (uint16_t)(0x0120u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7C2u: /* STA ABX 9D 90 04 */
    c->pc = 0xD7C5u;
    ea = (uint16_t)(0x0490u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7C5u: /* STA ABX 9D D0 04 */
    c->pc = 0xD7C8u;
    ea = (uint16_t)(0x04D0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7C8u: /* STA ABX 9D 10 01 */
    c->pc = 0xD7CBu;
    ea = (uint16_t)(0x0110u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7CBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xD7CCu: /* TYA IMP 98 */
    c->pc = 0xD7CDu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD7CDu: /* LDX IMM A2 0F */
    c->pc = 0xD7CFu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD7CFu: /* CMP ABX DD 30 01 */
    c->pc = 0xD7D2u;
    ea = (uint16_t)(0x0130u + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0130u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7D2u: /* BEQ REL F0 F7 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xD7D4u ^ 0xD7CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD7CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD7D4u; } return 1;
case 0xD7D4u: /* DEX IMP CA */
    c->pc = 0xD7D5u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xD7D5u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xD7D7u ^ 0xD7CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD7CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD7D7u; } return 1;
case 0xD7D7u: /* JSR ABS 20 43 DA */
    push(c, 0xD7u); push(c, 0xD9u); c->pc = 0xDA43u; c->cpu_cycles += 6u; return 1;
case 0xD7DAu: /* BCS REL B0 EF */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xD7DCu ^ 0xD7CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xD7CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xD7DCu; } return 1;
case 0xD7DCu: /* TYA IMP 98 */
    c->pc = 0xD7DDu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xD7DDu: /* PHA IMP 48 */
    c->pc = 0xD7DEu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xD7DEu: /* STA ABX 9D 30 01 */
    c->pc = 0xD7E1u;
    ea = (uint16_t)(0x0130u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7E1u: /* LDA ABY B9 00 BA */
    c->pc = 0xD7E4u;
    ea = (uint16_t)(0xBA00u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA00u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7E4u: /* STA ABX 9D 50 04 */
    c->pc = 0xD7E7u;
    ea = (uint16_t)(0x0450u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7E7u: /* LDA ABY B9 40 BA */
    c->pc = 0xD7EAu;
    ea = (uint16_t)(0xBA40u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA40u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7EAu: /* STA ABX 9D 70 04 */
    c->pc = 0xD7EDu;
    ea = (uint16_t)(0x0470u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7EDu: /* LDA ABY B9 80 BA */
    c->pc = 0xD7F0u;
    ea = (uint16_t)(0xBA80u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBA80u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7F0u: /* STA ABX 9D B0 04 */
    c->pc = 0xD7F3u;
    ea = (uint16_t)(0x04B0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7F3u: /* LDA ABY B9 C0 BA */
    c->pc = 0xD7F6u;
    ea = (uint16_t)(0xBAC0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xBAC0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD7F6u: /* JSR ABS 20 7C D7 */
    push(c, 0xD7u); push(c, 0xF8u); c->pc = 0xD77Cu; c->cpu_cycles += 6u; return 1;
case 0xD7F9u: /* PLA IMP 68 */
    c->pc = 0xD7FAu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xD7FAu: /* STA ABX 9D 20 01 */
    c->pc = 0xD7FDu;
    ea = (uint16_t)(0x0120u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD7FDu: /* TAY IMP A8 */
    c->pc = 0xD7FEu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xD7FEu: /* LDA ABY B9 40 01 */
    c->pc = 0xD801u;
    ea = (uint16_t)(0x0140u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0140u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xD801u: /* STA ABX 9D D0 06 */
    c->pc = 0xD804u;
    ea = (uint16_t)(0x06D0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xD804u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDA43u: /* LDX IMM A2 0F */
    c->pc = 0xDA45u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDA45u: /* LDA ABX BD 30 04 */
    c->pc = 0xDA48u;
    ea = (uint16_t)(0x0430u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDA48u: /* BPL REL 10 05 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDA4Au ^ 0xDA4Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA4Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA4Au; } return 1;
case 0xDA4Au: /* DEX IMP CA */
    c->pc = 0xDA4Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDA4Bu: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDA4Du ^ 0xDA45u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA45u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA4Du; } return 1;
case 0xDA4Du: /* SEC IMP 38 */
    c->pc = 0xDA4Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDA4Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDA4Fu: /* CLC IMP 18 */
    c->pc = 0xDA50u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDA50u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDA51u: /* LDA ZP A5 F9 */
    c->pc = 0xDA53u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDA53u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDA55u ^ 0xDA6Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA6Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA55u; } return 1;
case 0xDA55u: /* LDX ZP A6 A9 */
    c->pc = 0xDA57u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDA57u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDA59u ^ 0xDA5Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA5Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA59u; } return 1;
case 0xDA59u: /* LDA ZPX B5 9B */
    c->pc = 0xDA5Bu;
    ea = (uint8_t)(0x9Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDA5Bu: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDA5Du ^ 0xDA6Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA6Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA5Du; } return 1;
case 0xDA5Du: /* LDA ABX BD B8 DC */
    c->pc = 0xDA60u;
    ea = (uint16_t)(0xDCB8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDCB8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDA60u: /* STA ZP 85 08 */
    c->pc = 0xDA62u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDA62u: /* LDA ABX BD C4 DC */
    c->pc = 0xDA65u;
    ea = (uint16_t)(0xDCC4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDCC4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDA65u: /* STA ZP 85 09 */
    c->pc = 0xDA67u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDA67u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0xDA6Au: /* SEC IMP 38 */
    c->pc = 0xDA6Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDA6Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDA6Cu: /* LDA ZP A5 27 */
    c->pc = 0xDA6Eu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDA6Eu: /* AND IMM 29 02 */
    c->pc = 0xDA70u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDA70u: /* BEQ REL F0 2B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDA72u ^ 0xDA9Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA9Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA72u; } return 1;
case 0xDA72u: /* LDX IMM A2 04 */
    c->pc = 0xDA74u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDA74u: /* LDA ABX BD 20 04 */
    c->pc = 0xDA77u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDA77u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDA79u ^ 0xDA80u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA80u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA79u; } return 1;
case 0xDA79u: /* DEX IMP CA */
    c->pc = 0xDA7Au;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDA7Au: /* CPX IMM E0 01 */
    c->pc = 0xDA7Cu;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDA7Cu: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDA7Eu ^ 0xDA74u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA74u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA7Eu; } return 1;
case 0xDA7Eu: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDA80u ^ 0xDA9Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDA9Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDA80u; } return 1;
case 0xDA80u: /* LDA IMM A9 24 */
    c->pc = 0xDA82u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDA82u: /* JSR ABS 20 51 C0 */
    push(c, 0xDAu); push(c, 0x84u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDA85u: /* LDY IMM A0 00 */
    c->pc = 0xDA87u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDA87u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDAu); push(c, 0x89u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDA8Au: /* LDA IMM A9 0F */
    c->pc = 0xDA8Cu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDA8Cu: /* STA ZP 85 36 */
    c->pc = 0xDA8Eu;
    ea = 0x36u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDA8Eu: /* LDA IMM A9 01 */
    c->pc = 0xDA90u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDA90u: /* STA ZP 85 3D */
    c->pc = 0xDA92u;
    ea = 0x3Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDA92u: /* LDX ZP A6 2C */
    c->pc = 0xDA94u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDA94u: /* CLC IMP 18 */
    c->pc = 0xDA95u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDA95u: /* ADC ABX 7D D4 D3 */
    c->pc = 0xDA98u;
    ea = (uint16_t)(0xD3D4u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xD3D4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDA98u: /* STA ABS 8D 00 04 */
    c->pc = 0xDA9Bu;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDA9Bu: /* CLC IMP 18 */
    c->pc = 0xDA9Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDA9Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDA9Du: /* SEC IMP 38 */
    c->pc = 0xDA9Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDA9Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDA9Fu: /* LDA ZP A5 27 */
    c->pc = 0xDAA1u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDAA1u: /* AND IMM 29 02 */
    c->pc = 0xDAA3u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDAA3u: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDAA5u ^ 0xDAB1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDAB1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAA5u; } return 1;
case 0xDAA5u: /* LDX IMM A2 02 */
    c->pc = 0xDAA7u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDAA7u: /* LDY IMM A0 01 */
    c->pc = 0xDAA9u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDAA9u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDAu); push(c, 0xABu); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDAACu: /* LDA IMM A9 82 */
    c->pc = 0xDAAEu;
    v = 0x82u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDAAEu: /* STA ABX 9D 20 04 */
    c->pc = 0xDAB1u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDAB1u: /* SEC IMP 38 */
    c->pc = 0xDAB2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDAB2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDAB3u: /* LDA ZP A5 27 */
    c->pc = 0xDAB5u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDAB5u: /* AND IMM 29 02 */
    c->pc = 0xDAB7u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDAB7u: /* BEQ REL F0 2B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDAB9u ^ 0xDAE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDAE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAB9u; } return 1;
case 0xDAB9u: /* LDX IMM A2 04 */
    c->pc = 0xDABBu;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDABBu: /* LDA ABX BD 20 04 */
    c->pc = 0xDABEu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDABEu: /* BMI REL 30 24 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xDAC0u ^ 0xDAE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDAE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAC0u; } return 1;
case 0xDAC0u: /* DEX IMP CA */
    c->pc = 0xDAC1u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDAC1u: /* CPX IMM E0 01 */
    c->pc = 0xDAC3u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDAC3u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDAC5u ^ 0xDABBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDABBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAC5u; } return 1;
case 0xDAC5u: /* LDX IMM A2 04 */
    c->pc = 0xDAC7u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDAC7u: /* STX ZP 86 01 */
    c->pc = 0xDAC9u;
    ea = 0x01u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDAC9u: /* LDY IMM A0 02 */
    c->pc = 0xDACBu;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDACBu: /* JSR ABS 20 E0 D3 */
    push(c, 0xDAu); push(c, 0xCDu); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDACEu: /* LDX ZP A6 01 */
    c->pc = 0xDAD0u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDAD0u: /* DEX IMP CA */
    c->pc = 0xDAD1u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDAD1u: /* CPX IMM E0 01 */
    c->pc = 0xDAD3u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDAD3u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDAD5u ^ 0xDAC7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDAC7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAD5u; } return 1;
case 0xDAD5u: /* LDA IMM A9 3F */
    c->pc = 0xDAD7u;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDAD7u: /* JSR ABS 20 51 C0 */
    push(c, 0xDAu); push(c, 0xD9u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDADAu: /* SEC IMP 38 */
    c->pc = 0xDADBu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDADBu: /* LDA ZP A5 9D */
    c->pc = 0xDADDu;
    ea = 0x9Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDADDu: /* SBC IMM E9 02 */
    c->pc = 0xDADFu;
    v = 0x02u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDADFu: /* STA ZP 85 9D */
    c->pc = 0xDAE1u;
    ea = 0x9Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDAE1u: /* JMP ABS 4C 8A DA */
    c->pc = 0xDA8Au; c->cpu_cycles += 3u; return 1;
case 0xDAE4u: /* SEC IMP 38 */
    c->pc = 0xDAE5u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDAE5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDAE6u: /* LDA ZP A5 27 */
    c->pc = 0xDAE8u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDAE8u: /* AND IMM 29 02 */
    c->pc = 0xDAEAu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDAEAu: /* BEQ REL F0 1C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDAECu ^ 0xDB08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB08u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAECu; } return 1;
case 0xDAECu: /* LDA ABS AD 22 04 */
    c->pc = 0xDAEFu;
    ea = 0x0422u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDAEFu: /* BMI REL 30 17 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xDAF1u ^ 0xDB08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB08u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAF1u; } return 1;
case 0xDAF1u: /* SEC IMP 38 */
    c->pc = 0xDAF2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDAF2u: /* LDA ZP A5 9E */
    c->pc = 0xDAF4u;
    ea = 0x9Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDAF4u: /* SBC IMM E9 03 */
    c->pc = 0xDAF6u;
    v = 0x03u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDAF6u: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xDAF8u ^ 0xDB08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB08u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDAF8u; } return 1;
case 0xDAF8u: /* LDX IMM A2 05 */
    c->pc = 0xDAFAu;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDAFAu: /* STX ZP 86 02 */
    c->pc = 0xDAFCu;
    ea = 0x02u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDAFCu: /* LDY IMM A0 03 */
    c->pc = 0xDAFEu;
    v = 0x03u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDAFEu: /* JSR ABS 20 E0 D3 */
    push(c, 0xDBu); push(c, 0x00u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDB01u: /* LDX ZP A6 02 */
    c->pc = 0xDB03u;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDB03u: /* DEX IMP CA */
    c->pc = 0xDB04u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDB04u: /* CPX IMM E0 01 */
    c->pc = 0xDB06u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB06u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDB08u ^ 0xDAFAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDAFAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB08u; } return 1;
case 0xDB08u: /* SEC IMP 38 */
    c->pc = 0xDB09u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDB09u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDB0Au: /* LDA ZP A5 27 */
    c->pc = 0xDB0Cu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB0Cu: /* AND IMM 29 02 */
    c->pc = 0xDB0Eu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB0Eu: /* BEQ REL F0 29 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDB10u ^ 0xDB39u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB39u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB10u; } return 1;
case 0xDB10u: /* LDX IMM A2 03 */
    c->pc = 0xDB12u;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDB12u: /* LDA ABX BD 20 04 */
    c->pc = 0xDB15u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDB15u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDB17u ^ 0xDB1Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB1Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB17u; } return 1;
case 0xDB17u: /* DEX IMP CA */
    c->pc = 0xDB18u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDB18u: /* CPX IMM E0 01 */
    c->pc = 0xDB1Au;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB1Au: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDB1Cu ^ 0xDB12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB12u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB1Cu; } return 1;
case 0xDB1Cu: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDB1Eu ^ 0xDB39u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB39u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB1Eu; } return 1;
case 0xDB1Eu: /* LDY IMM A0 04 */
    c->pc = 0xDB20u;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDB20u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDBu); push(c, 0x22u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDB23u: /* LDA IMM A9 24 */
    c->pc = 0xDB25u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB25u: /* JSR ABS 20 51 C0 */
    push(c, 0xDBu); push(c, 0x27u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDB28u: /* INC ZP E6 AC */
    c->pc = 0xDB2Au;
    ea = 0xACu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDB2Au: /* LDA ZP A5 AC */
    c->pc = 0xDB2Cu;
    ea = 0xACu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB2Cu: /* CMP IMM C9 02 */
    c->pc = 0xDB2Eu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB2Eu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDB30u ^ 0xDB36u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB36u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB30u; } return 1;
case 0xDB30u: /* LDA IMM A9 00 */
    c->pc = 0xDB32u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB32u: /* STA ZP 85 AC */
    c->pc = 0xDB34u;
    ea = 0xACu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB34u: /* DEC ZP C6 9F */
    c->pc = 0xDB36u;
    ea = 0x9Fu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDB36u: /* JMP ABS 4C 8A DA */
    c->pc = 0xDA8Au; c->cpu_cycles += 3u; return 1;
case 0xDB39u: /* SEC IMP 38 */
    c->pc = 0xDB3Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDB3Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDB3Bu: /* LDA ZP A5 27 */
    c->pc = 0xDB3Du;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB3Du: /* AND IMM 29 02 */
    c->pc = 0xDB3Fu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB3Fu: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDB41u ^ 0xDB4Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB4Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB41u; } return 1;
case 0xDB41u: /* LDA ZP A5 AB */
    c->pc = 0xDB43u;
    ea = 0xABu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB43u: /* CMP IMM C9 0B */
    c->pc = 0xDB45u;
    v = 0x0Bu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB45u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDB47u ^ 0xDB4Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB4Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB47u; } return 1;
case 0xDB47u: /* INC ZP E6 AB */
    c->pc = 0xDB49u;
    ea = 0xABu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDB49u: /* CLC IMP 18 */
    c->pc = 0xDB4Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDB4Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDB4Bu: /* LDX IMM A2 05 */
    c->pc = 0xDB4Du;
    v = 0x05u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDB4Du: /* LDA ABX BD 20 04 */
    c->pc = 0xDB50u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDB50u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDB52u ^ 0xDB59u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB59u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB52u; } return 1;
case 0xDB52u: /* DEX IMP CA */
    c->pc = 0xDB53u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDB53u: /* CPX IMM E0 01 */
    c->pc = 0xDB55u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB55u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDB57u ^ 0xDB4Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB4Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB57u; } return 1;
case 0xDB57u: /* BEQ REL F0 1F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDB59u ^ 0xDB78u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB78u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB59u; } return 1;
case 0xDB59u: /* LDY IMM A0 05 */
    c->pc = 0xDB5Bu;
    v = 0x05u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDB5Bu: /* JSR ABS 20 E0 D3 */
    push(c, 0xDBu); push(c, 0x5Du); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDB5Eu: /* LDA IMM A9 24 */
    c->pc = 0xDB60u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB60u: /* JSR ABS 20 51 C0 */
    push(c, 0xDBu); push(c, 0x62u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDB63u: /* INC ZP E6 AC */
    c->pc = 0xDB65u;
    ea = 0xACu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDB65u: /* LDA ZP A5 AC */
    c->pc = 0xDB67u;
    ea = 0xACu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB67u: /* CMP IMM C9 08 */
    c->pc = 0xDB69u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB69u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDB6Bu ^ 0xDB71u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB71u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB6Bu; } return 1;
case 0xDB6Bu: /* LDA IMM A9 00 */
    c->pc = 0xDB6Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB6Du: /* STA ZP 85 AC */
    c->pc = 0xDB6Fu;
    ea = 0xACu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB6Fu: /* DEC ZP C6 A0 */
    c->pc = 0xDB71u;
    ea = 0xA0u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDB71u: /* LDA IMM A9 00 */
    c->pc = 0xDB73u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB73u: /* STA ZP 85 AB */
    c->pc = 0xDB75u;
    ea = 0xABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB75u: /* JMP ABS 4C 8A DA */
    c->pc = 0xDA8Au; c->cpu_cycles += 3u; return 1;
case 0xDB78u: /* SEC IMP 38 */
    c->pc = 0xDB79u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDB79u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDB7Au: /* LDA ZP A5 27 */
    c->pc = 0xDB7Cu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB7Cu: /* AND IMM 29 02 */
    c->pc = 0xDB7Eu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB7Eu: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDB80u ^ 0xDB9Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB9Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB80u; } return 1;
case 0xDB80u: /* LDA ABS AD 22 04 */
    c->pc = 0xDB83u;
    ea = 0x0422u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDB83u: /* BMI REL 30 18 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xDB85u ^ 0xDB9Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB9Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB85u; } return 1;
case 0xDB85u: /* SEC IMP 38 */
    c->pc = 0xDB86u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDB86u: /* LDA ZP A5 A3 */
    c->pc = 0xDB88u;
    ea = 0xA3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB88u: /* SBC IMM E9 04 */
    c->pc = 0xDB8Au;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDB8Au: /* BCC REL 90 11 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xDB8Cu ^ 0xDB9Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDB9Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xDB8Cu; } return 1;
case 0xDB8Cu: /* STA ZP 85 A3 */
    c->pc = 0xDB8Eu;
    ea = 0xA3u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDB8Eu: /* LDX IMM A2 02 */
    c->pc = 0xDB90u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDB90u: /* LDY IMM A0 06 */
    c->pc = 0xDB92u;
    v = 0x06u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDB92u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDBu); push(c, 0x94u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDB95u: /* LDA IMM A9 24 */
    c->pc = 0xDB97u;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDB97u: /* JSR ABS 20 51 C0 */
    push(c, 0xDBu); push(c, 0x99u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDB9Au: /* JMP ABS 4C 8A DA */
    c->pc = 0xDA8Au; c->cpu_cycles += 3u; return 1;
case 0xDB9Du: /* SEC IMP 38 */
    c->pc = 0xDB9Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDB9Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDB9Fu: /* LDA ZP A5 27 */
    c->pc = 0xDBA1u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDBA1u: /* AND IMM 29 02 */
    c->pc = 0xDBA3u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBA3u: /* BEQ REL F0 4A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDBA5u ^ 0xDBEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDBEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDBA5u; } return 1;
case 0xDBA5u: /* LDX IMM A2 04 */
    c->pc = 0xDBA7u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDBA7u: /* LDA ABX BD 20 04 */
    c->pc = 0xDBAAu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDBAAu: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDBACu ^ 0xDBB3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDBB3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDBACu; } return 1;
case 0xDBACu: /* DEX IMP CA */
    c->pc = 0xDBADu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDBADu: /* CPX IMM E0 01 */
    c->pc = 0xDBAFu;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDBAFu: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDBB1u ^ 0xDBA7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDBA7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDBB1u; } return 1;
case 0xDBB1u: /* BEQ REL F0 3C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDBB3u ^ 0xDBEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDBEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDBB3u; } return 1;
case 0xDBB3u: /* LDY IMM A0 07 */
    c->pc = 0xDBB5u;
    v = 0x07u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDBB5u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDBu); push(c, 0xB7u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDBB8u: /* LDA IMM A9 23 */
    c->pc = 0xDBBAu;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBBAu: /* JSR ABS 20 51 C0 */
    push(c, 0xDBu); push(c, 0xBCu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDBBDu: /* INC ZP E6 AC */
    c->pc = 0xDBBFu;
    ea = 0xACu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDBBFu: /* LDA ZP A5 AC */
    c->pc = 0xDBC1u;
    ea = 0xACu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDBC1u: /* CMP IMM C9 04 */
    c->pc = 0xDBC3u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDBC3u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDBC5u ^ 0xDBCBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDBCBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDBC5u; } return 1;
case 0xDBC5u: /* LDA IMM A9 00 */
    c->pc = 0xDBC7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBC7u: /* STA ZP 85 AC */
    c->pc = 0xDBC9u;
    ea = 0xACu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDBC9u: /* DEC ZP C6 A2 */
    c->pc = 0xDBCBu;
    ea = 0xA2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDBCBu: /* LDA ZP A5 23 */
    c->pc = 0xDBCDu;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDBCDu: /* AND IMM 29 F0 */
    c->pc = 0xDBCFu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBCFu: /* LSR IMP 4A */
    c->pc = 0xDBD0u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBD0u: /* LSR IMP 4A */
    c->pc = 0xDBD1u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBD1u: /* LSR IMP 4A */
    c->pc = 0xDBD2u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBD2u: /* LSR IMP 4A */
    c->pc = 0xDBD3u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDBD3u: /* TAY IMP A8 */
    c->pc = 0xDBD4u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDBD4u: /* LDA ABY B9 F1 DB */
    c->pc = 0xDBD7u;
    ea = (uint16_t)(0xDBF1u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDBF1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDBD7u: /* STA ABX 9D 60 06 */
    c->pc = 0xDBDAu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDBDAu: /* LDA ABY B9 01 DC */
    c->pc = 0xDBDDu;
    ea = (uint16_t)(0xDC01u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDC01u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDBDDu: /* STA ABX 9D 40 06 */
    c->pc = 0xDBE0u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDBE0u: /* LDA ABY B9 11 DC */
    c->pc = 0xDBE3u;
    ea = (uint16_t)(0xDC11u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDC11u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDBE3u: /* STA ABX 9D 20 06 */
    c->pc = 0xDBE6u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDBE6u: /* LDA ABY B9 21 DC */
    c->pc = 0xDBE9u;
    ea = (uint16_t)(0xDC21u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDC21u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDBE9u: /* STA ABX 9D 00 06 */
    c->pc = 0xDBECu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDBECu: /* JMP ABS 4C 4D DC */
    c->pc = 0xDC4Du; c->cpu_cycles += 3u; return 1;
case 0xDBEFu: /* SEC IMP 38 */
    c->pc = 0xDBF0u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDBF0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDC31u: /* LDA ZP A5 27 */
    c->pc = 0xDC33u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC33u: /* AND IMM 29 02 */
    c->pc = 0xDC35u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC35u: /* BEQ REL F0 1F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDC37u ^ 0xDC56u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC56u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC37u; } return 1;
case 0xDC37u: /* LDX IMM A2 02 */
    c->pc = 0xDC39u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDC39u: /* LDA ABS AD 22 04 */
    c->pc = 0xDC3Cu;
    ea = 0x0422u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDC3Cu: /* BMI REL 30 18 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xDC3Eu ^ 0xDC56u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC56u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC3Eu; } return 1;
case 0xDC3Eu: /* LDY IMM A0 08 */
    c->pc = 0xDC40u;
    v = 0x08u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDC40u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDCu); push(c, 0x42u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDC43u: /* LDA IMM A9 01 */
    c->pc = 0xDC45u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC45u: /* STA ABS 8D A6 05 */
    c->pc = 0xDC48u;
    ea = 0x05A6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDC48u: /* LDA IMM A9 21 */
    c->pc = 0xDC4Au;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC4Au: /* JSR ABS 20 51 C0 */
    push(c, 0xDCu); push(c, 0x4Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDC4Du: /* LDA IMM A9 0F */
    c->pc = 0xDC4Fu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC4Fu: /* STA ZP 85 36 */
    c->pc = 0xDC51u;
    ea = 0x36u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC51u: /* LDA IMM A9 03 */
    c->pc = 0xDC53u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC53u: /* JMP ABS 4C 90 DA */
    c->pc = 0xDA90u; c->cpu_cycles += 3u; return 1;
case 0xDC56u: /* SEC IMP 38 */
    c->pc = 0xDC57u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDC57u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDC58u: /* LDA ZP A5 27 */
    c->pc = 0xDC5Au;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC5Au: /* AND IMM 29 02 */
    c->pc = 0xDC5Cu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC5Cu: /* BEQ REL F0 F8 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDC5Eu ^ 0xDC56u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC56u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC5Eu; } return 1;
case 0xDC5Eu: /* LDX IMM A2 04 */
    c->pc = 0xDC60u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDC60u: /* LDA ABX BD 20 04 */
    c->pc = 0xDC63u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDC63u: /* BPL REL 10 07 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDC65u ^ 0xDC6Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC6Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC65u; } return 1;
case 0xDC65u: /* DEX IMP CA */
    c->pc = 0xDC66u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDC66u: /* CPX IMM E0 01 */
    c->pc = 0xDC68u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDC68u: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDC6Au ^ 0xDC60u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC60u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC6Au; } return 1;
case 0xDC6Au: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDC6Cu ^ 0xDC7Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC7Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC6Cu; } return 1;
case 0xDC6Cu: /* LDY IMM A0 09 */
    c->pc = 0xDC6Eu;
    v = 0x09u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDC6Eu: /* JSR ABS 20 E0 D3 */
    push(c, 0xDCu); push(c, 0x70u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDC71u: /* SEC IMP 38 */
    c->pc = 0xDC72u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDC72u: /* LDA ZP A5 A4 */
    c->pc = 0xDC74u;
    ea = 0xA4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC74u: /* SBC IMM E9 02 */
    c->pc = 0xDC76u;
    v = 0x02u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDC76u: /* STA ZP 85 A4 */
    c->pc = 0xDC78u;
    ea = 0xA4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC78u: /* JMP ABS 4C 4D DC */
    c->pc = 0xDC4Du; c->cpu_cycles += 3u; return 1;
case 0xDC7Bu: /* SEC IMP 38 */
    c->pc = 0xDC7Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDC7Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDC7Du: /* LDA ZP A5 27 */
    c->pc = 0xDC7Fu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC7Fu: /* AND IMM 29 02 */
    c->pc = 0xDC81u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC81u: /* BEQ REL F0 19 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDC83u ^ 0xDC9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC83u; } return 1;
case 0xDC83u: /* LDA ABS AD 22 04 */
    c->pc = 0xDC86u;
    ea = 0x0422u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDC86u: /* BMI REL 30 14 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xDC88u ^ 0xDC9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDC9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDC88u; } return 1;
case 0xDC88u: /* LDX IMM A2 02 */
    c->pc = 0xDC8Au;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDC8Au: /* LDY IMM A0 0A */
    c->pc = 0xDC8Cu;
    v = 0x0Au;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDC8Cu: /* JSR ABS 20 E0 D3 */
    push(c, 0xDCu); push(c, 0x8Eu); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDC8Fu: /* LDA IMM A9 3E */
    c->pc = 0xDC91u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC91u: /* STA ABS 8D E2 04 */
    c->pc = 0xDC94u;
    ea = 0x04E2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDC94u: /* LDA IMM A9 13 */
    c->pc = 0xDC96u;
    v = 0x13u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDC96u: /* STA ABS 8D C2 06 */
    c->pc = 0xDC99u;
    ea = 0x06C2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDC99u: /* JMP ABS 4C 4D DC */
    c->pc = 0xDC4Du; c->cpu_cycles += 3u; return 1;
case 0xDC9Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDC9Du: /* LDA ZP A5 27 */
    c->pc = 0xDC9Fu;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDC9Fu: /* AND IMM 29 02 */
    c->pc = 0xDCA1u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDCA1u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDCA3u ^ 0xDCB7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDCB7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDCA3u; } return 1;
case 0xDCA3u: /* LDA ABS AD 22 04 */
    c->pc = 0xDCA6u;
    ea = 0x0422u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDCA6u: /* BMI REL 30 0F */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xDCA8u ^ 0xDCB7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDCB7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDCA8u; } return 1;
case 0xDCA8u: /* LDX IMM A2 02 */
    c->pc = 0xDCAAu;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDCAAu: /* LDY IMM A0 0B */
    c->pc = 0xDCACu;
    v = 0x0Bu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDCACu: /* JSR ABS 20 E0 D3 */
    push(c, 0xDCu); push(c, 0xAEu); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDCAFu: /* LDA IMM A9 1F */
    c->pc = 0xDCB1u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDCB1u: /* STA ABS 8D C2 06 */
    c->pc = 0xDCB4u;
    ea = 0x06C2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDCB4u: /* JMP ABS 4C 4D DC */
    c->pc = 0xDC4Du; c->cpu_cycles += 3u; return 1;
case 0xDCB7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDCD0u: /* LDX IMM A2 0F */
    c->pc = 0xDCD2u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDCD2u: /* STX ZP 86 2B */
    c->pc = 0xDCD4u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDCD4u: /* LDA ABX BD 20 04 */
    c->pc = 0xDCD7u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDCD7u: /* BPL REL 10 10 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDCD9u ^ 0xDCE9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDCE9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDCD9u; } return 1;
case 0xDCD9u: /* AND IMM 29 02 */
    c->pc = 0xDCDBu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDCDBu: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDCDDu ^ 0xDCF1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDCF1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDCDDu; } return 1;
case 0xDCDDu: /* SEC IMP 38 */
    c->pc = 0xDCDEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDCDEu: /* LDA ABX BD 60 04 */
    c->pc = 0xDCE1u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDCE1u: /* SBC ZP E5 1F */
    c->pc = 0xDCE3u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDCE3u: /* STA ABX 9D E0 06 */
    c->pc = 0xDCE6u;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDCE6u: /* JSR ABS 20 EF EE */
    push(c, 0xDCu); push(c, 0xE8u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xDCE9u: /* LDX ZP A6 2B */
    c->pc = 0xDCEBu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xDCEBu: /* DEX IMP CA */
    c->pc = 0xDCECu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDCECu: /* CPX IMM E0 01 */
    c->pc = 0xDCEEu;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDCEEu: /* BNE REL D0 E2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDCF0u ^ 0xDCD2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDCD2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDCF0u; } return 1;
case 0xDCF0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDCF1u: /* LDA IMM A9 DC */
    c->pc = 0xDCF3u;
    v = 0xDCu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDCF3u: /* PHA IMP 48 */
    c->pc = 0xDCF4u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDCF4u: /* LDA IMM A9 E8 */
    c->pc = 0xDCF6u;
    v = 0xE8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDCF6u: /* PHA IMP 48 */
    c->pc = 0xDCF7u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDCF7u: /* SEC IMP 38 */
    c->pc = 0xDCF8u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDCF8u: /* LDA ABX BD 60 04 */
    c->pc = 0xDCFBu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDCFBu: /* SBC ZP E5 1F */
    c->pc = 0xDCFDu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDCFDu: /* STA ABX 9D E0 06 */
    c->pc = 0xDD00u;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDD00u: /* SEC IMP 38 */
    c->pc = 0xDD01u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDD01u: /* LDA ABX BD 00 04 */
    c->pc = 0xDD04u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDD04u: /* SBC IMM E9 2F */
    c->pc = 0xDD06u;
    v = 0x2Fu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDD06u: /* TAY IMP A8 */
    c->pc = 0xDD07u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD07u: /* LDA ABY B9 14 DD */
    c->pc = 0xDD0Au;
    ea = (uint16_t)(0xDD14u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDD14u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDD0Au: /* STA ZP 85 08 */
    c->pc = 0xDD0Cu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD0Cu: /* LDA ABY B9 24 DD */
    c->pc = 0xDD0Fu;
    ea = (uint16_t)(0xDD24u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDD24u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDD0Fu: /* STA ZP 85 09 */
    c->pc = 0xDD11u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD11u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0xDD34u: /* LDA ABX BD E0 04 */
    c->pc = 0xDD37u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDD37u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDD39u ^ 0xDD3Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD3Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD39u; } return 1;
case 0xDD39u: /* JMP ABS 4C EC DD */
    c->pc = 0xDDECu; c->cpu_cycles += 3u; return 1;
case 0xDD3Cu: /* LDA IMM A9 00 */
    c->pc = 0xDD3Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDD3Eu: /* STA ABX 9D A0 06 */
    c->pc = 0xDD41u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDD41u: /* STA ABX 9D 80 06 */
    c->pc = 0xDD44u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDD44u: /* LDA ZP A5 AC */
    c->pc = 0xDD46u;
    ea = 0xACu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD46u: /* CMP IMM C9 FF */
    c->pc = 0xDD48u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDD48u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDD4Au ^ 0xDD4Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD4Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD4Au; } return 1;
case 0xDD4Au: /* INC ZP E6 AC */
    c->pc = 0xDD4Cu;
    ea = 0xACu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xDD4Cu: /* LDY IMM A0 02 */
    c->pc = 0xDD4Eu;
    v = 0x02u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD4Eu: /* LDA ZP A5 AC */
    c->pc = 0xDD50u;
    ea = 0xACu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD50u: /* CMP IMM C9 7D */
    c->pc = 0xDD52u;
    v = 0x7Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDD52u: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xDD54u ^ 0xDD5Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD5Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD54u; } return 1;
case 0xDD54u: /* INY IMP C8 */
    c->pc = 0xDD55u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD55u: /* INY IMP C8 */
    c->pc = 0xDD56u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD56u: /* CMP IMM C9 BB */
    c->pc = 0xDD58u;
    v = 0xBBu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDD58u: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xDD5Au ^ 0xDD5Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD5Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD5Au; } return 1;
case 0xDD5Au: /* INY IMP C8 */
    c->pc = 0xDD5Bu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD5Bu: /* INY IMP C8 */
    c->pc = 0xDD5Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD5Cu: /* STY ZP 84 00 */
    c->pc = 0xDD5Eu;
    ea = 0x00u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xDD5Eu: /* LDA ZP A5 1C */
    c->pc = 0xDD60u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD60u: /* AND IMM 29 04 */
    c->pc = 0xDD62u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDD62u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDD64u ^ 0xDD66u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD66u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD64u; } return 1;
case 0xDD64u: /* LDY IMM A0 00 */
    c->pc = 0xDD66u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD66u: /* JSR ABS 20 18 DE */
    push(c, 0xDDu); push(c, 0x68u); c->pc = 0xDE18u; c->cpu_cycles += 6u; return 1;
case 0xDD69u: /* LDA ABS AD A0 04 */
    c->pc = 0xDD6Cu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDD6Cu: /* STA ABX 9D A0 04 */
    c->pc = 0xDD6Fu;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDD6Fu: /* LDA ABS AD 60 04 */
    c->pc = 0xDD72u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDD72u: /* STA ABX 9D 60 04 */
    c->pc = 0xDD75u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDD75u: /* LDA ABS AD 40 04 */
    c->pc = 0xDD78u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDD78u: /* STA ABX 9D 40 04 */
    c->pc = 0xDD7Bu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDD7Bu: /* LDA ZP A5 00 */
    c->pc = 0xDD7Du;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD7Du: /* LSR IMP 4A */
    c->pc = 0xDD7Eu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDD7Eu: /* TAY IMP A8 */
    c->pc = 0xDD7Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD7Fu: /* LDA ABY B9 44 DE */
    c->pc = 0xDD82u;
    ea = (uint16_t)(0xDE44u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE44u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDD82u: /* CMP ZP C5 9C */
    c->pc = 0xDD84u;
    ea = 0x9Cu;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xDD84u: /* BCC REL 90 0D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xDD86u ^ 0xDD93u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD93u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD86u; } return 1;
case 0xDD86u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDD88u ^ 0xDD93u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD93u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD88u; } return 1;
case 0xDD88u: /* LDY IMM A0 00 */
    c->pc = 0xDD8Au;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD8Au: /* STY ZP 84 AC */
    c->pc = 0xDD8Cu;
    ea = 0xACu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xDD8Cu: /* JSR ABS 20 18 DE */
    push(c, 0xDDu); push(c, 0x8Eu); c->pc = 0xDE18u; c->cpu_cycles += 6u; return 1;
case 0xDD8Fu: /* LSR ABX 5E 20 04 */
    c->pc = 0xDD92u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDD92u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDD93u: /* LDA ZP A5 23 */
    c->pc = 0xDD95u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDD95u: /* AND IMM 29 02 */
    c->pc = 0xDD97u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDD97u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDD99u ^ 0xDD9Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDD9Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xDD99u; } return 1;
case 0xDD99u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDD9Au: /* LDY IMM A0 00 */
    c->pc = 0xDD9Cu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDD9Cu: /* STY ZP 84 AC */
    c->pc = 0xDD9Eu;
    ea = 0xACu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xDD9Eu: /* JSR ABS 20 18 DE */
    push(c, 0xDDu); push(c, 0xA0u); c->pc = 0xDE18u; c->cpu_cycles += 6u; return 1;
case 0xDDA1u: /* LSR ABS 4E 22 04 */
    c->pc = 0xDDA4u;
    ea = 0x0422u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xDDA4u: /* LDX IMM A2 04 */
    c->pc = 0xDDA6u;
    v = 0x04u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDDA6u: /* LDA ABX BD 20 04 */
    c->pc = 0xDDA9u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDDA9u: /* BPL REL 10 06 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xDDABu ^ 0xDDB1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDDB1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDABu; } return 1;
case 0xDDABu: /* DEX IMP CA */
    c->pc = 0xDDACu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xDDACu: /* CPX IMM E0 02 */
    c->pc = 0xDDAEu;
    v = 0x02u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xDDAEu: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDDB0u ^ 0xDDA6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDDA6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDB0u; } return 1;
case 0xDDB0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDDB1u: /* LDA ZP A5 F9 */
    c->pc = 0xDDB3u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDDB3u: /* BNE REL D0 1E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDDB5u ^ 0xDDD3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDDD3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDB5u; } return 1;
case 0xDDB5u: /* LDY IMM A0 01 */
    c->pc = 0xDDB7u;
    v = 0x01u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDDB7u: /* JSR ABS 20 E0 D3 */
    push(c, 0xDDu); push(c, 0xB9u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0xDDBAu: /* LDA ZP A5 00 */
    c->pc = 0xDDBCu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDDBCu: /* LSR IMP 4A */
    c->pc = 0xDDBDu;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDDBDu: /* STA ABX 9D E0 04 */
    c->pc = 0xDDC0u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDDC0u: /* STA ABX 9D 90 05 */
    c->pc = 0xDDC3u;
    ea = (uint16_t)(0x0590u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDDC3u: /* TAY IMP A8 */
    c->pc = 0xDDC4u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDDC4u: /* LDA ABY B9 41 DE */
    c->pc = 0xDDC7u;
    ea = (uint16_t)(0xDE41u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE41u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDDC7u: /* STA ABX 9D A0 06 */
    c->pc = 0xDDCAu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDDCAu: /* SEC IMP 38 */
    c->pc = 0xDDCBu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDDCBu: /* LDA ABX BD 60 04 */
    c->pc = 0xDDCEu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDDCEu: /* SBC ZP E5 1F */
    c->pc = 0xDDD0u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDDD0u: /* STA ABX 9D E0 06 */
    c->pc = 0xDDD3u;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDDD3u: /* SEC IMP 38 */
    c->pc = 0xDDD4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDDD4u: /* LDA ZP A5 9C */
    c->pc = 0xDDD6u;
    ea = 0x9Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDDD6u: /* SBC ABY F9 44 DE */
    c->pc = 0xDDD9u;
    ea = (uint16_t)(0xDE44u + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0xDE44u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDDD9u: /* STA ZP 85 9C */
    c->pc = 0xDDDBu;
    ea = 0x9Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDDDBu: /* LDA IMM A9 38 */
    c->pc = 0xDDDDu;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDDDDu: /* JSR ABS 20 51 C0 */
    push(c, 0xDDu); push(c, 0xDFu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDDE0u: /* LDA IMM A9 04 */
    c->pc = 0xDDE2u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDDE2u: /* STA ABX 9D 00 06 */
    c->pc = 0xDDE5u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDDE5u: /* LDA ZP A5 2C */
    c->pc = 0xDDE7u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDDE7u: /* BEQ REL F0 C7 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDDE9u ^ 0xDDB0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDDB0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDE9u; } return 1;
case 0xDDE9u: /* JMP ABS 4C 8A DA */
    c->pc = 0xDA8Au; c->cpu_cycles += 3u; return 1;
case 0xDDECu: /* CMP IMM C9 02 */
    c->pc = 0xDDEEu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDDEEu: /* BCS REL B0 0B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xDDF0u ^ 0xDDFBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDDFBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDF0u; } return 1;
case 0xDDF0u: /* LDA ABX BD A0 06 */
    c->pc = 0xDDF3u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDDF3u: /* CMP IMM C9 03 */
    c->pc = 0xDDF5u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDDF5u: /* BNE REL D0 1D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDDF7u ^ 0xDE14u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE14u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDF7u; } return 1;
case 0xDDF7u: /* LDA IMM A9 01 */
    c->pc = 0xDDF9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDDF9u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDDFBu ^ 0xDE11u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE11u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDFBu; } return 1;
case 0xDDFBu: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDDFDu ^ 0xDE08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE08u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDDFDu; } return 1;
case 0xDDFDu: /* LDA ABX BD A0 06 */
    c->pc = 0xDE00u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE00u: /* CMP IMM C9 06 */
    c->pc = 0xDE02u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE02u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDE04u ^ 0xDE14u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE14u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDE04u; } return 1;
case 0xDE04u: /* LDA IMM A9 04 */
    c->pc = 0xDE06u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE06u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDE08u ^ 0xDE11u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE11u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDE08u; } return 1;
case 0xDE08u: /* LDA ABX BD A0 06 */
    c->pc = 0xDE0Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE0Bu: /* CMP IMM C9 09 */
    c->pc = 0xDE0Du;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE0Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDE0Fu ^ 0xDE14u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE14u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDE0Fu; } return 1;
case 0xDE0Fu: /* LDA IMM A9 07 */
    c->pc = 0xDE11u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE11u: /* STA ABX 9D A0 06 */
    c->pc = 0xDE14u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE14u: /* JSR ABS 20 EF EE */
    push(c, 0xDEu); push(c, 0x16u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xDE17u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDE18u: /* LDA ABY B9 39 DE */
    c->pc = 0xDE1Bu;
    ea = (uint16_t)(0xDE39u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE39u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE1Bu: /* STA ABS 8D 67 03 */
    c->pc = 0xDE1Eu;
    ea = 0x0367u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDE1Eu: /* LDA ABY B9 3A DE */
    c->pc = 0xDE21u;
    ea = (uint16_t)(0xDE3Au + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE3Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE21u: /* STA ABS 8D 69 03 */
    c->pc = 0xDE24u;
    ea = 0x0369u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDE24u: /* LDA ZP A5 1C */
    c->pc = 0xDE26u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDE26u: /* AND IMM 29 07 */
    c->pc = 0xDE28u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE28u: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDE2Au ^ 0xDE34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE34u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDE2Au; } return 1;
case 0xDE2Au: /* LDA ZP A5 00 */
    c->pc = 0xDE2Cu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDE2Cu: /* LSR IMP 4A */
    c->pc = 0xDE2Du;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE2Du: /* TAY IMP A8 */
    c->pc = 0xDE2Eu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDE2Eu: /* LDA ABY B9 35 DE */
    c->pc = 0xDE31u;
    ea = (uint16_t)(0xDE35u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE35u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE31u: /* JSR ABS 20 51 C0 */
    push(c, 0xDEu); push(c, 0x33u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDE34u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDE48u: /* TXA IMP 8A */
    c->pc = 0xDE49u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE49u: /* SEC IMP 38 */
    c->pc = 0xDE4Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDE4Au: /* SBC IMM E9 02 */
    c->pc = 0xDE4Cu;
    v = 0x02u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE4Cu: /* TAY IMP A8 */
    c->pc = 0xDE4Du;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDE4Du: /* LDA ABY B9 6E DE */
    c->pc = 0xDE50u;
    ea = (uint16_t)(0xDE6Eu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE6Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE50u: /* STA ABX 9D 20 06 */
    c->pc = 0xDE53u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE53u: /* LDA ABY B9 71 DE */
    c->pc = 0xDE56u;
    ea = (uint16_t)(0xDE71u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDE71u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE56u: /* STA ABX 9D 00 06 */
    c->pc = 0xDE59u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE59u: /* CLC IMP 18 */
    c->pc = 0xDE5Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDE5Au: /* LDA ABX BD 60 06 */
    c->pc = 0xDE5Du;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE5Du: /* ADC IMM 69 10 */
    c->pc = 0xDE5Fu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE5Fu: /* STA ABX 9D 60 06 */
    c->pc = 0xDE62u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE62u: /* LDA ABX BD 40 06 */
    c->pc = 0xDE65u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE65u: /* ADC IMM 69 00 */
    c->pc = 0xDE67u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE67u: /* STA ABX 9D 40 06 */
    c->pc = 0xDE6Au;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE6Au: /* JSR ABS 20 EF EE */
    push(c, 0xDEu); push(c, 0x6Cu); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xDE6Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDE74u: /* LDA ABX BD E0 04 */
    c->pc = 0xDE77u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE77u: /* BNE REL D0 74 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDE79u ^ 0xDEEDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDEEDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDE79u; } return 1;
case 0xDE79u: /* LDA IMM A9 00 */
    c->pc = 0xDE7Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE7Bu: /* STA ABX 9D 80 06 */
    c->pc = 0xDE7Eu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE7Eu: /* LDA ABX BD C0 06 */
    c->pc = 0xDE81u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDE81u: /* STA ZP 85 01 */
    c->pc = 0xDE83u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDE83u: /* TXA IMP 8A */
    c->pc = 0xDE84u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE84u: /* SEC IMP 38 */
    c->pc = 0xDE85u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDE85u: /* SBC IMM E9 02 */
    c->pc = 0xDE87u;
    v = 0x02u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE87u: /* STA ZP 85 00 */
    c->pc = 0xDE89u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDE89u: /* AND IMM 29 01 */
    c->pc = 0xDE8Bu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDE8Bu: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDE8Du ^ 0xDE9Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDE9Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDE8Du; } return 1;
case 0xDE8Du: /* SEC IMP 38 */
    c->pc = 0xDE8Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDE8Eu: /* LDA ABS AD 60 04 */
    c->pc = 0xDE91u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDE91u: /* SBC ZP E5 01 */
    c->pc = 0xDE93u;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDE93u: /* STA ABX 9D 60 04 */
    c->pc = 0xDE96u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDE96u: /* LDA ABS AD 40 04 */
    c->pc = 0xDE99u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDE99u: /* SBC IMM E9 00 */
    c->pc = 0xDE9Bu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDE9Bu: /* JMP ABS 4C AC DE */
    c->pc = 0xDEACu; c->cpu_cycles += 3u; return 1;
case 0xDE9Eu: /* CLC IMP 18 */
    c->pc = 0xDE9Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDE9Fu: /* LDA ABS AD 60 04 */
    c->pc = 0xDEA2u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEA2u: /* ADC ZP 65 01 */
    c->pc = 0xDEA4u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDEA4u: /* STA ABX 9D 60 04 */
    c->pc = 0xDEA7u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDEA7u: /* LDA ABS AD 40 04 */
    c->pc = 0xDEAAu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEAAu: /* ADC IMM 69 00 */
    c->pc = 0xDEACu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDEACu: /* STA ABX 9D 40 04 */
    c->pc = 0xDEAFu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDEAFu: /* LDA ZP A5 00 */
    c->pc = 0xDEB1u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDEB1u: /* AND IMM 29 02 */
    c->pc = 0xDEB3u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDEB3u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDEB5u ^ 0xDEBEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDEBEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDEB5u; } return 1;
case 0xDEB5u: /* SEC IMP 38 */
    c->pc = 0xDEB6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDEB6u: /* LDA ABS AD A0 04 */
    c->pc = 0xDEB9u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEB9u: /* SBC ZP E5 01 */
    c->pc = 0xDEBBu;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDEBBu: /* JMP ABS 4C C4 DE */
    c->pc = 0xDEC4u; c->cpu_cycles += 3u; return 1;
case 0xDEBEu: /* CLC IMP 18 */
    c->pc = 0xDEBFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDEBFu: /* LDA ABS AD A0 04 */
    c->pc = 0xDEC2u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEC2u: /* ADC ZP 65 01 */
    c->pc = 0xDEC4u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xDEC4u: /* STA ABX 9D A0 04 */
    c->pc = 0xDEC7u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDEC7u: /* LDA ZP A5 01 */
    c->pc = 0xDEC9u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDEC9u: /* CMP IMM C9 0C */
    c->pc = 0xDECBu;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDECBu: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDECDu ^ 0xDED4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDED4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDECDu; } return 1;
case 0xDECDu: /* CLC IMP 18 */
    c->pc = 0xDECEu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDECEu: /* ADC IMM 69 02 */
    c->pc = 0xDED0u;
    v = 0x02u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDED0u: /* STA ABX 9D C0 06 */
    c->pc = 0xDED3u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDED3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDED4u: /* LSR ABS 4E 23 04 */
    c->pc = 0xDED7u;
    ea = 0x0423u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xDED7u: /* LSR ABS 4E 24 04 */
    c->pc = 0xDEDAu;
    ea = 0x0424u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xDEDAu: /* LSR ABS 4E 25 04 */
    c->pc = 0xDEDDu;
    ea = 0x0425u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xDEDDu: /* LDA IMM A9 83 */
    c->pc = 0xDEDFu;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDEDFu: /* STA ABS 8D 22 04 */
    c->pc = 0xDEE2u;
    ea = 0x0422u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEE2u: /* LDA IMM A9 01 */
    c->pc = 0xDEE4u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDEE4u: /* STA ABS 8D E2 04 */
    c->pc = 0xDEE7u;
    ea = 0x04E2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEE7u: /* LDA IMM A9 01 */
    c->pc = 0xDEE9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDEE9u: /* STA ABS 8D A2 06 */
    c->pc = 0xDEECu;
    ea = 0x06A2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDEECu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDEEDu: /* LDA ZP A5 F9 */
    c->pc = 0xDEEFu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDEEFu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDEF1u ^ 0xDEF5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDEF5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDEF1u; } return 1;
case 0xDEF1u: /* LDA IMM A9 06 */
    c->pc = 0xDEF3u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDEF3u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDEF5u ^ 0xDEFEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDEFEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDEF5u; } return 1;
case 0xDEF5u: /* LDA ABX BD A0 06 */
    c->pc = 0xDEF8u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDEF8u: /* CMP IMM C9 05 */
    c->pc = 0xDEFAu;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDEFAu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xDEFCu ^ 0xDF01u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF01u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDEFCu; } return 1;
case 0xDEFCu: /* LDA IMM A9 01 */
    c->pc = 0xDEFEu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDEFEu: /* STA ABX 9D A0 06 */
    c->pc = 0xDF01u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF01u: /* LDA ABX BD E0 04 */
    c->pc = 0xDF04u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDF04u: /* CMP IMM C9 01 */
    c->pc = 0xDF06u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDF06u: /* BNE REL D0 61 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDF08u ^ 0xDF69u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF69u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF08u; } return 1;
case 0xDF08u: /* LDA ZP A5 1C */
    c->pc = 0xDF0Au;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF0Au: /* AND IMM 29 07 */
    c->pc = 0xDF0Cu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF0Cu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDF0Eu ^ 0xDF13u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF13u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF0Eu; } return 1;
case 0xDF0Eu: /* LDA IMM A9 31 */
    c->pc = 0xDF10u;
    v = 0x31u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF10u: /* JSR ABS 20 51 C0 */
    push(c, 0xDFu); push(c, 0x12u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xDF13u: /* LDA ABS AD 60 04 */
    c->pc = 0xDF16u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDF16u: /* STA ABX 9D 60 04 */
    c->pc = 0xDF19u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF19u: /* LDA ABS AD 40 04 */
    c->pc = 0xDF1Cu;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDF1Cu: /* STA ABX 9D 40 04 */
    c->pc = 0xDF1Fu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF1Fu: /* LDA ABS AD A0 04 */
    c->pc = 0xDF22u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xDF22u: /* STA ABX 9D A0 04 */
    c->pc = 0xDF25u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF25u: /* LDA ZP A5 F9 */
    c->pc = 0xDF27u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF27u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDF29u ^ 0xDF2Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF2Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF29u; } return 1;
case 0xDF29u: /* LDA IMM A9 00 */
    c->pc = 0xDF2Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF2Bu: /* STA ABX 9D A0 04 */
    c->pc = 0xDF2Eu;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF2Eu: /* LDA ZP A5 23 */
    c->pc = 0xDF30u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF30u: /* AND IMM 29 F0 */
    c->pc = 0xDF32u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF32u: /* BEQ REL F0 34 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDF34u ^ 0xDF68u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF68u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF34u; } return 1;
case 0xDF34u: /* LDY ZP A4 F9 */
    c->pc = 0xDF36u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xDF36u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDF38u ^ 0xDF3Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF3Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF38u; } return 1;
case 0xDF38u: /* LSR ABX 5E 20 04 */
    c->pc = 0xDF3Bu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDF3Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDF3Cu: /* AND IMM 29 C0 */
    c->pc = 0xDF3Eu;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF3Eu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDF40u ^ 0xDF4Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF4Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF40u; } return 1;
case 0xDF40u: /* LSR IMP 4A */
    c->pc = 0xDF41u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF41u: /* AND IMM 29 40 */
    c->pc = 0xDF43u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF43u: /* ORA IMM 09 83 */
    c->pc = 0xDF45u;
    v = 0x83u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF45u: /* STA ABX 9D 20 04 */
    c->pc = 0xDF48u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF48u: /* LDA IMM A9 04 */
    c->pc = 0xDF4Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF4Au: /* STA ABX 9D 00 06 */
    c->pc = 0xDF4Du;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF4Du: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDF4Fu ^ 0xDF5Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF5Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF4Fu; } return 1;
case 0xDF4Fu: /* LDY IMM A0 00 */
    c->pc = 0xDF51u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDF51u: /* LDA ZP A5 23 */
    c->pc = 0xDF53u;
    ea = 0x23u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF53u: /* AND IMM 29 10 */
    c->pc = 0xDF55u;
    v = 0x10u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF55u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDF57u ^ 0xDF58u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF58u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF57u; } return 1;
case 0xDF57u: /* INY IMP C8 */
    c->pc = 0xDF58u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xDF58u: /* LDA ABY B9 6D DF */
    c->pc = 0xDF5Bu;
    ea = (uint16_t)(0xDF6Du + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xDF6Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDF5Bu: /* STA ABX 9D 40 06 */
    c->pc = 0xDF5Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF5Eu: /* SEC IMP 38 */
    c->pc = 0xDF5Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDF5Fu: /* LDA ZP A5 9E */
    c->pc = 0xDF61u;
    ea = 0x9Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF61u: /* SBC IMM E9 03 */
    c->pc = 0xDF63u;
    v = 0x03u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDF63u: /* STA ZP 85 9E */
    c->pc = 0xDF65u;
    ea = 0x9Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF65u: /* INC ABX FE E0 04 */
    c->pc = 0xDF68u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDF68u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDF69u: /* JSR ABS 20 EF EE */
    push(c, 0xDFu); push(c, 0x6Bu); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xDF6Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDF6Fu: /* LDA IMM A9 07 */
    c->pc = 0xDF71u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF71u: /* STA ZP 85 01 */
    c->pc = 0xDF73u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF73u: /* LDA IMM A9 07 */
    c->pc = 0xDF75u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF75u: /* STA ZP 85 02 */
    c->pc = 0xDF77u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF77u: /* JSR ABS 20 CF F0 */
    push(c, 0xDFu); push(c, 0x79u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xDF7Au: /* LDA ABX BD E0 04 */
    c->pc = 0xDF7Du;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDF7Du: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDF7Fu ^ 0xDF9Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF9Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF7Fu; } return 1;
case 0xDF7Fu: /* LDA ZP A5 00 */
    c->pc = 0xDF81u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDF81u: /* BEQ REL F0 47 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDF83u ^ 0xDFCAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFCAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF83u; } return 1;
case 0xDF83u: /* INC ABX FE E0 04 */
    c->pc = 0xDF86u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDF86u: /* LDA ABX BD 20 04 */
    c->pc = 0xDF89u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDF89u: /* AND IMM 29 FB */
    c->pc = 0xDF8Bu;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF8Bu: /* STA ABX 9D 20 04 */
    c->pc = 0xDF8Eu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF8Eu: /* LDA IMM A9 C0 */
    c->pc = 0xDF90u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF90u: /* STA ABX 9D 60 06 */
    c->pc = 0xDF93u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF93u: /* LDA IMM A9 FF */
    c->pc = 0xDF95u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF95u: /* STA ABX 9D 40 06 */
    c->pc = 0xDF98u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF98u: /* LDA IMM A9 02 */
    c->pc = 0xDF9Au;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDF9Au: /* STA ABX 9D 00 06 */
    c->pc = 0xDF9Du;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDF9Du: /* BNE REL D0 2B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDF9Fu ^ 0xDFCAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFCAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDF9Fu; } return 1;
case 0xDF9Fu: /* CMP IMM C9 01 */
    c->pc = 0xDFA1u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDFA1u: /* BNE REL D0 1E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDFA3u ^ 0xDFC1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFC1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFA3u; } return 1;
case 0xDFA3u: /* LDA ZP A5 03 */
    c->pc = 0xDFA5u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDFA5u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDFA7u ^ 0xDFABu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFABu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFA7u; } return 1;
case 0xDFA7u: /* LSR ABX 5E 20 04 */
    c->pc = 0xDFAAu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDFAAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDFABu: /* LDA ZP A5 00 */
    c->pc = 0xDFADu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDFADu: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDFAFu ^ 0xDFCAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFCAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFAFu; } return 1;
case 0xDFAFu: /* LDA IMM A9 00 */
    c->pc = 0xDFB1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDFB1u: /* STA ABX 9D 00 06 */
    c->pc = 0xDFB4u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDFB4u: /* STA ABX 9D 60 06 */
    c->pc = 0xDFB7u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDFB7u: /* LDA IMM A9 FE */
    c->pc = 0xDFB9u;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDFB9u: /* STA ABX 9D 40 06 */
    c->pc = 0xDFBCu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDFBCu: /* INC ABX FE E0 04 */
    c->pc = 0xDFBFu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDFBFu: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDFC1u ^ 0xDFCAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFCAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFC1u; } return 1;
case 0xDFC1u: /* LDA ZP A5 00 */
    c->pc = 0xDFC3u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xDFC3u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xDFC5u ^ 0xDFCAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFCAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFC5u; } return 1;
case 0xDFC5u: /* DEC ABX DE E0 04 */
    c->pc = 0xDFC8u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDFC8u: /* BNE REL D0 C4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDFCAu ^ 0xDF8Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDF8Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFCAu; } return 1;
case 0xDFCAu: /* JSR ABS 20 EF EE */
    push(c, 0xDFu); push(c, 0xCCu); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xDFCDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDFCEu: /* LDA ABX BD E0 04 */
    c->pc = 0xDFD1u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDFD1u: /* CMP IMM C9 12 */
    c->pc = 0xDFD3u;
    v = 0x12u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDFD3u: /* BCS REL B0 14 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xDFD5u ^ 0xDFE9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFE9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFD5u; } return 1;
case 0xDFD5u: /* SEC IMP 38 */
    c->pc = 0xDFD6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDFD6u: /* LDA ABX BD 60 06 */
    c->pc = 0xDFD9u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDFD9u: /* SBC IMM E9 4B */
    c->pc = 0xDFDBu;
    v = 0x4Bu;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDFDBu: /* STA ABX 9D 60 06 */
    c->pc = 0xDFDEu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDFDEu: /* LDA ABX BD 40 06 */
    c->pc = 0xDFE1u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDFE1u: /* SBC IMM E9 00 */
    c->pc = 0xDFE3u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xDFE3u: /* STA ABX 9D 40 06 */
    c->pc = 0xDFE6u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDFE6u: /* JMP ABS 4C 0F E0 */
    c->pc = 0xE00Fu; c->cpu_cycles += 3u; return 1;
case 0xDFE9u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDFEBu ^ 0xDFF3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFF3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFEBu; } return 1;
case 0xDFEBu: /* LDA ABX BD 20 04 */
    c->pc = 0xDFEEu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDFEEu: /* EOR IMM 49 40 */
    c->pc = 0xDFF0u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xDFF0u: /* STA ABX 9D 20 04 */
    c->pc = 0xDFF3u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xDFF3u: /* LDA ABX BD E0 04 */
    c->pc = 0xDFF6u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xDFF6u: /* CMP IMM C9 23 */
    c->pc = 0xDFF8u;
    v = 0x23u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xDFF8u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xDFFAu ^ 0xDFFEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xDFFEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xDFFAu; } return 1;
case 0xDFFAu: /* LSR ABX 5E 20 04 */
    c->pc = 0xDFFDu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xDFFDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xDFFEu: /* CLC IMP 18 */
    c->pc = 0xDFFFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xDFFFu: /* LDA ABX BD 60 06 */
    c->pc = 0xE002u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE002u: /* ADC IMM 69 4B */
    c->pc = 0xE004u;
    v = 0x4Bu;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE004u: /* STA ABX 9D 60 06 */
    c->pc = 0xE007u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE007u: /* LDA ABX BD 40 06 */
    c->pc = 0xE00Au;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE00Au: /* ADC IMM 69 00 */
    c->pc = 0xE00Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE00Cu: /* STA ABX 9D 40 06 */
    c->pc = 0xE00Fu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE00Fu: /* INC ABX FE E0 04 */
    c->pc = 0xE012u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE012u: /* JSR ABS 20 EF EE */
    push(c, 0xE0u); push(c, 0x14u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xE015u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE016u: /* LDA ABX BD E0 04 */
    c->pc = 0xE019u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE019u: /* BNE REL D0 77 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE01Bu ^ 0xE092u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE092u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE01Bu; } return 1;
case 0xE01Bu: /* LDA IMM A9 00 */
    c->pc = 0xE01Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE01Du: /* STA ABX 9D A0 06 */
    c->pc = 0xE020u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE020u: /* STA ABX 9D 80 06 */
    c->pc = 0xE023u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE023u: /* SEC IMP 38 */
    c->pc = 0xE024u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE024u: /* LDA ABX BD A0 04 */
    c->pc = 0xE027u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE027u: /* SBC IMM E9 08 */
    c->pc = 0xE029u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE029u: /* STA ZP 85 0A */
    c->pc = 0xE02Bu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE02Bu: /* LDA IMM A9 00 */
    c->pc = 0xE02Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE02Du: /* STA ZP 85 0B */
    c->pc = 0xE02Fu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE02Fu: /* LDA ABX BD 20 04 */
    c->pc = 0xE032u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE032u: /* AND IMM 29 40 */
    c->pc = 0xE034u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE034u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE036u ^ 0xE046u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE046u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE036u; } return 1;
case 0xE036u: /* SEC IMP 38 */
    c->pc = 0xE037u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE037u: /* LDA ABX BD 60 04 */
    c->pc = 0xE03Au;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE03Au: /* SBC IMM E9 06 */
    c->pc = 0xE03Cu;
    v = 0x06u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE03Cu: /* STA ZP 85 08 */
    c->pc = 0xE03Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE03Eu: /* LDA ABX BD 40 04 */
    c->pc = 0xE041u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE041u: /* SBC IMM E9 00 */
    c->pc = 0xE043u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE043u: /* JMP ABS 4C 53 E0 */
    c->pc = 0xE053u; c->cpu_cycles += 3u; return 1;
case 0xE046u: /* CLC IMP 18 */
    c->pc = 0xE047u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE047u: /* LDA ABX BD 60 04 */
    c->pc = 0xE04Au;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE04Au: /* ADC IMM 69 06 */
    c->pc = 0xE04Cu;
    v = 0x06u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE04Cu: /* STA ZP 85 08 */
    c->pc = 0xE04Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE04Eu: /* LDA ABX BD 40 04 */
    c->pc = 0xE051u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE051u: /* ADC IMM 69 00 */
    c->pc = 0xE053u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE053u: /* STA ZP 85 09 */
    c->pc = 0xE055u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE055u: /* JSR ABS 20 A2 CB */
    push(c, 0xE0u); push(c, 0x57u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xE058u: /* LDY ZP A4 00 */
    c->pc = 0xE05Au;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE05Au: /* LDX ZP A6 2B */
    c->pc = 0xE05Cu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE05Cu: /* LDA ABY B9 4F E1 */
    c->pc = 0xE05Fu;
    ea = (uint16_t)(0xE14Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE14Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE05Fu: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE061u ^ 0xE078u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE078u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE061u; } return 1;
case 0xE061u: /* CLC IMP 18 */
    c->pc = 0xE062u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE062u: /* LDA ZP A5 0A */
    c->pc = 0xE064u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE064u: /* ADC IMM 69 10 */
    c->pc = 0xE066u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE066u: /* STA ZP 85 0A */
    c->pc = 0xE068u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE068u: /* JSR ABS 20 A2 CB */
    push(c, 0xE0u); push(c, 0x6Au); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xE06Bu: /* LDY ZP A4 00 */
    c->pc = 0xE06Du;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE06Du: /* LDX ZP A6 2B */
    c->pc = 0xE06Fu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE06Fu: /* LDA ABY B9 4F E1 */
    c->pc = 0xE072u;
    ea = (uint16_t)(0xE14Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE14Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE072u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE074u ^ 0xE078u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE078u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE074u; } return 1;
case 0xE074u: /* JSR ABS 20 EF EE */
    push(c, 0xE0u); push(c, 0x76u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xE077u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE078u: /* LDA IMM A9 2E */
    c->pc = 0xE07Au;
    v = 0x2Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE07Au: /* JSR ABS 20 51 C0 */
    push(c, 0xE0u); push(c, 0x7Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE07Du: /* LDA ABX BD 20 04 */
    c->pc = 0xE080u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE080u: /* AND IMM 29 FE */
    c->pc = 0xE082u;
    v = 0xFEu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE082u: /* STA ABX 9D 20 04 */
    c->pc = 0xE085u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE085u: /* INC ABX FE A0 06 */
    c->pc = 0xE088u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE088u: /* INC ABX FE E0 04 */
    c->pc = 0xE08Bu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE08Bu: /* LDA IMM A9 7E */
    c->pc = 0xE08Du;
    v = 0x7Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE08Du: /* STA ABX 9D C0 06 */
    c->pc = 0xE090u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE090u: /* BNE REL D0 27 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE092u ^ 0xE0B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE0B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE092u; } return 1;
case 0xE092u: /* CMP IMM C9 01 */
    c->pc = 0xE094u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE094u: /* BNE REL D0 27 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE096u ^ 0xE0BDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE0BDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE096u; } return 1;
case 0xE096u: /* LDA ABX BD A0 06 */
    c->pc = 0xE099u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE099u: /* CMP IMM C9 04 */
    c->pc = 0xE09Bu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE09Bu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE09Du ^ 0xE0A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE0A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE09Du; } return 1;
case 0xE09Du: /* LDA IMM A9 02 */
    c->pc = 0xE09Fu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE09Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xE0A2u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0A2u: /* DEC ABX DE C0 06 */
    c->pc = 0xE0A5u;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE0A5u: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE0A7u ^ 0xE0B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE0B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE0A7u; } return 1;
case 0xE0A7u: /* LDA IMM A9 05 */
    c->pc = 0xE0A9u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0A9u: /* STA ABX 9D A0 06 */
    c->pc = 0xE0ACu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0ACu: /* LDA IMM A9 00 */
    c->pc = 0xE0AEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0AEu: /* STA ABX 9D 80 06 */
    c->pc = 0xE0B1u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0B1u: /* LDA IMM A9 38 */
    c->pc = 0xE0B3u;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0B3u: /* STA ABX 9D C0 06 */
    c->pc = 0xE0B6u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0B6u: /* INC ABX FE E0 04 */
    c->pc = 0xE0B9u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE0B9u: /* JSR ABS 20 E9 E4 */
    push(c, 0xE0u); push(c, 0xBBu); c->pc = 0xE4E9u; c->cpu_cycles += 6u; return 1;
case 0xE0BCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE0BDu: /* LDA IMM A9 00 */
    c->pc = 0xE0BFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0BFu: /* STA ABX 9D 80 06 */
    c->pc = 0xE0C2u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0C2u: /* LDA ABX BD C0 06 */
    c->pc = 0xE0C5u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE0C5u: /* AND IMM 29 07 */
    c->pc = 0xE0C7u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0C7u: /* BNE REL D0 47 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE0C9u ^ 0xE110u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE110u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE0C9u; } return 1;
case 0xE0C9u: /* LDA IMM A9 2B */
    c->pc = 0xE0CBu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0CBu: /* JSR ABS 20 51 C0 */
    push(c, 0xE0u); push(c, 0xCDu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE0CEu: /* LDA ABX BD C0 06 */
    c->pc = 0xE0D1u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE0D1u: /* LSR IMP 4A */
    c->pc = 0xE0D2u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0D2u: /* AND IMM 29 0C */
    c->pc = 0xE0D4u;
    v = 0x0Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0D4u: /* STA ZP 85 02 */
    c->pc = 0xE0D6u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE0D6u: /* LDA IMM A9 06 */
    c->pc = 0xE0D8u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE0D8u: /* STA ZP 85 01 */
    c->pc = 0xE0DAu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE0DAu: /* LDA ZP A5 01 */
    c->pc = 0xE0DCu;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE0DCu: /* CMP IMM C9 02 */
    c->pc = 0xE0DEu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE0DEu: /* BEQ REL F0 30 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE0E0u ^ 0xE110u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE110u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE0E0u; } return 1;
case 0xE0E0u: /* STA ZP 85 00 */
    c->pc = 0xE0E2u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE0E2u: /* LDY IMM A0 0C */
    c->pc = 0xE0E4u;
    v = 0x0Cu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE0E4u: /* JSR ABS 20 FF E4 */
    push(c, 0xE0u); push(c, 0xE6u); c->pc = 0xE4FFu; c->cpu_cycles += 6u; return 1;
case 0xE0E7u: /* LDY ZP A4 00 */
    c->pc = 0xE0E9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE0E9u: /* LDX ZP A6 02 */
    c->pc = 0xE0EBu;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE0EBu: /* CLC IMP 18 */
    c->pc = 0xE0ECu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE0ECu: /* LDA ABY B9 A0 04 */
    c->pc = 0xE0EFu;
    ea = (uint16_t)(0x04A0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE0EFu: /* ADC ABX 7D 1F E1 */
    c->pc = 0xE0F2u;
    ea = (uint16_t)(0xE11Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE11Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE0F2u: /* STA ABY 99 A0 04 */
    c->pc = 0xE0F5u;
    ea = (uint16_t)(0x04A0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0F5u: /* CLC IMP 18 */
    c->pc = 0xE0F6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE0F6u: /* LDA ABY B9 60 04 */
    c->pc = 0xE0F9u;
    ea = (uint16_t)(0x0460u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE0F9u: /* ADC ABX 7D 2F E1 */
    c->pc = 0xE0FCu;
    ea = (uint16_t)(0xE12Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE12Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE0FCu: /* STA ABY 99 60 04 */
    c->pc = 0xE0FFu;
    ea = (uint16_t)(0x0460u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE0FFu: /* LDA ABY B9 40 04 */
    c->pc = 0xE102u;
    ea = (uint16_t)(0x0440u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE102u: /* ADC ABX 7D 3F E1 */
    c->pc = 0xE105u;
    ea = (uint16_t)(0xE13Fu + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE13Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE105u: /* STA ABY 99 40 04 */
    c->pc = 0xE108u;
    ea = (uint16_t)(0x0440u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE108u: /* LDX ZP A6 2B */
    c->pc = 0xE10Au;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE10Au: /* INC ZP E6 02 */
    c->pc = 0xE10Cu;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE10Cu: /* DEC ZP C6 01 */
    c->pc = 0xE10Eu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE10Eu: /* BNE REL D0 CA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE110u ^ 0xE0DAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE0DAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE110u; } return 1;
case 0xE110u: /* LDX ZP A6 2B */
    c->pc = 0xE112u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE112u: /* DEC ABX DE C0 06 */
    c->pc = 0xE115u;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE115u: /* BPL REL 10 04 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE117u ^ 0xE11Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE11Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE117u; } return 1;
case 0xE117u: /* LSR ABX 5E 20 04 */
    c->pc = 0xE11Au;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE11Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE11Bu: /* JSR ABS 20 E9 E4 */
    push(c, 0xE1u); push(c, 0x1Du); c->pc = 0xE4E9u; c->cpu_cycles += 6u; return 1;
case 0xE11Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE158u: /* DEC ABX DE 20 06 */
    c->pc = 0xE15Bu;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE15Bu: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE15Du ^ 0xE172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE172u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE15Du; } return 1;
case 0xE15Du: /* LDA IMM A9 0F */
    c->pc = 0xE15Fu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE15Fu: /* STA ABX 9D 20 06 */
    c->pc = 0xE162u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE162u: /* DEC ZP C6 A1 */
    c->pc = 0xE164u;
    ea = 0xA1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE164u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE166u ^ 0xE172u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE172u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE166u; } return 1;
case 0xE166u: /* LSR ABX 5E 20 04 */
    c->pc = 0xE169u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE169u: /* LDA IMM A9 00 */
    c->pc = 0xE16Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE16Bu: /* STA ZP 85 AA */
    c->pc = 0xE16Du;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE16Du: /* LDA IMM A9 01 */
    c->pc = 0xE16Fu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE16Fu: /* STA ZP 85 50 */
    c->pc = 0xE171u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE171u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE172u: /* LDA IMM A9 01 */
    c->pc = 0xE174u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE174u: /* STA ZP 85 AA */
    c->pc = 0xE176u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE176u: /* LDA IMM A9 00 */
    c->pc = 0xE178u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE178u: /* STA ZP 85 50 */
    c->pc = 0xE17Au;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE17Au: /* STA ZP 85 4F */
    c->pc = 0xE17Cu;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE17Cu: /* LDA IMM A9 80 */
    c->pc = 0xE17Eu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE17Eu: /* STA ABX 9D A0 04 */
    c->pc = 0xE181u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE181u: /* CLC IMP 18 */
    c->pc = 0xE182u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE182u: /* ADC ZP 65 1F */
    c->pc = 0xE184u;
    ea = 0x1Fu;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE184u: /* STA ABX 9D 60 04 */
    c->pc = 0xE187u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE187u: /* LDA ABS AD 40 04 */
    c->pc = 0xE18Au;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE18Au: /* ADC IMM 69 00 */
    c->pc = 0xE18Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE18Cu: /* STA ABX 9D 40 04 */
    c->pc = 0xE18Fu;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE18Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE190u: /* LDA ABX BD E0 04 */
    c->pc = 0xE193u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE193u: /* BNE REL D0 23 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE195u ^ 0xE1B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE1B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE195u; } return 1;
case 0xE195u: /* INC ABX FE C0 06 */
    c->pc = 0xE198u;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE198u: /* LDA ABX BD C0 06 */
    c->pc = 0xE19Bu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE19Bu: /* CMP IMM C9 BB */
    c->pc = 0xE19Du;
    v = 0xBBu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE19Du: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE19Fu ^ 0xE1AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE1AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE19Fu; } return 1;
case 0xE19Fu: /* LDA ABX BD A0 06 */
    c->pc = 0xE1A2u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE1A2u: /* CMP IMM C9 02 */
    c->pc = 0xE1A4u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE1A4u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE1A6u ^ 0xE1ABu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE1ABu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE1A6u; } return 1;
case 0xE1A6u: /* LDA IMM A9 00 */
    c->pc = 0xE1A8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1A8u: /* STA ABX 9D A0 06 */
    c->pc = 0xE1ABu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1ABu: /* JMP ABS 4C CD E1 */
    c->pc = 0xE1CDu; c->cpu_cycles += 3u; return 1;
case 0xE1AEu: /* LDA IMM A9 3E */
    c->pc = 0xE1B0u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1B0u: /* STA ABX 9D C0 06 */
    c->pc = 0xE1B3u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1B3u: /* INC ABX FE E0 04 */
    c->pc = 0xE1B6u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE1B6u: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE1B8u ^ 0xE1CDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE1CDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE1B8u; } return 1;
case 0xE1B8u: /* CMP IMM C9 01 */
    c->pc = 0xE1BAu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE1BAu: /* BNE REL D0 49 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE1BCu ^ 0xE205u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE205u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE1BCu; } return 1;
case 0xE1BCu: /* LDA ABX BD A0 06 */
    c->pc = 0xE1BFu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE1BFu: /* CMP IMM C9 07 */
    c->pc = 0xE1C1u;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE1C1u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE1C3u ^ 0xE1C8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE1C8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE1C3u; } return 1;
case 0xE1C3u: /* LDA IMM A9 03 */
    c->pc = 0xE1C5u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1C5u: /* STA ABX 9D A0 06 */
    c->pc = 0xE1C8u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1C8u: /* DEC ABX DE C0 06 */
    c->pc = 0xE1CBu;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE1CBu: /* BEQ REL F0 26 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE1CDu ^ 0xE1F3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE1F3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE1CDu; } return 1;
case 0xE1CDu: /* SEC IMP 38 */
    c->pc = 0xE1CEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE1CEu: /* LDA ABX BD A0 04 */
    c->pc = 0xE1D1u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE1D1u: /* SBC IMM E9 04 */
    c->pc = 0xE1D3u;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE1D3u: /* STA ABX 9D A1 05 */
    c->pc = 0xE1D6u;
    ea = (uint16_t)(0x05A1u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1D6u: /* LDA IMM A9 14 */
    c->pc = 0xE1D8u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1D8u: /* STA ABX 9D 9E 05 */
    c->pc = 0xE1DBu;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1DBu: /* LDA IMM A9 0B */
    c->pc = 0xE1DDu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1DDu: /* STA ZP 85 01 */
    c->pc = 0xE1DFu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE1DFu: /* LDA IMM A9 1D */
    c->pc = 0xE1E1u;
    v = 0x1Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1E1u: /* STA ZP 85 02 */
    c->pc = 0xE1E3u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE1E3u: /* LDA IMM A9 04 */
    c->pc = 0xE1E5u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1E5u: /* STA ZP 85 03 */
    c->pc = 0xE1E7u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE1E7u: /* JSR ABS 20 ED E3 */
    push(c, 0xE1u); push(c, 0xE9u); c->pc = 0xE3EDu; c->cpu_cycles += 6u; return 1;
case 0xE1EAu: /* LDA ZP A5 00 */
    c->pc = 0xE1ECu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE1ECu: /* BEQ REL F0 17 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE1EEu ^ 0xE205u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE205u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE1EEu; } return 1;
case 0xE1EEu: /* LDA IMM A9 00 */
    c->pc = 0xE1F0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1F0u: /* STA ABX 9D 60 06 */
    c->pc = 0xE1F3u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1F3u: /* LDA IMM A9 02 */
    c->pc = 0xE1F5u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1F5u: /* STA ABX 9D E0 04 */
    c->pc = 0xE1F8u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1F8u: /* LDA IMM A9 08 */
    c->pc = 0xE1FAu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1FAu: /* STA ABX 9D A0 06 */
    c->pc = 0xE1FDu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE1FDu: /* LDA IMM A9 00 */
    c->pc = 0xE1FFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE1FFu: /* STA ABX 9D 80 06 */
    c->pc = 0xE202u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE202u: /* STA ABX 9D 9E 05 */
    c->pc = 0xE205u;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE205u: /* JSR ABS 20 EF EE */
    push(c, 0xE2u); push(c, 0x07u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xE208u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE20Au ^ 0xE20Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE20Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE20Au; } return 1;
case 0xE20Au: /* LDA IMM A9 00 */
    c->pc = 0xE20Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE20Cu: /* STA ABX 9D 9E 05 */
    c->pc = 0xE20Fu;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE20Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE210u: /* LDA ABX BD E0 04 */
    c->pc = 0xE213u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE213u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE215u ^ 0xE21Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE21Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xE215u; } return 1;
case 0xE215u: /* DEC ABX DE E0 04 */
    c->pc = 0xE218u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE218u: /* BNE REL D0 4C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE21Au ^ 0xE266u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE266u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE21Au; } return 1;
case 0xE21Au: /* DEC ABX DE C0 06 */
    c->pc = 0xE21Du;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE21Du: /* BNE REL D0 26 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE21Fu ^ 0xE245u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE245u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE21Fu; } return 1;
case 0xE21Fu: /* LDA IMM A9 13 */
    c->pc = 0xE221u;
    v = 0x13u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE221u: /* STA ABX 9D C0 06 */
    c->pc = 0xE224u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE224u: /* DEC ZP C6 A5 */
    c->pc = 0xE226u;
    ea = 0xA5u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE226u: /* BNE REL D0 1D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE228u ^ 0xE245u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE245u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE228u; } return 1;
case 0xE228u: /* LDA IMM A9 05 */
    c->pc = 0xE22Au;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE22Au: /* STA ABX 9D A0 06 */
    c->pc = 0xE22Du;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE22Du: /* LDA IMM A9 00 */
    c->pc = 0xE22Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE22Fu: /* STA ABS 8D A0 05 */
    c->pc = 0xE232u;
    ea = 0x05A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE232u: /* STA ABX 9D 00 06 */
    c->pc = 0xE235u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE235u: /* STA ABX 9D 20 06 */
    c->pc = 0xE238u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE238u: /* STA ABX 9D 80 06 */
    c->pc = 0xE23Bu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE23Bu: /* LDA IMM A9 80 */
    c->pc = 0xE23Du;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE23Du: /* STA ABX 9D 20 04 */
    c->pc = 0xE240u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE240u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE242u ^ 0xE245u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE245u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE242u; } return 1;
case 0xE242u: /* JMP ABS 4C D2 E2 */
    c->pc = 0xE2D2u; c->cpu_cycles += 3u; return 1;
case 0xE245u: /* LDA ABX BD 00 06 */
    c->pc = 0xE248u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE248u: /* CMP IMM C9 02 */
    c->pc = 0xE24Au;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE24Au: /* BEQ REL F0 1A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE24Cu ^ 0xE266u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE266u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE24Cu; } return 1;
case 0xE24Cu: /* CLC IMP 18 */
    c->pc = 0xE24Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE24Du: /* LDA ABX BD 20 06 */
    c->pc = 0xE250u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE250u: /* ADC IMM 69 08 */
    c->pc = 0xE252u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE252u: /* STA ABX 9D 20 06 */
    c->pc = 0xE255u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE255u: /* LDA ABX BD 00 06 */
    c->pc = 0xE258u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE258u: /* ADC IMM 69 00 */
    c->pc = 0xE25Au;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE25Au: /* STA ABX 9D 00 06 */
    c->pc = 0xE25Du;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE25Du: /* CMP IMM C9 02 */
    c->pc = 0xE25Fu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE25Fu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE261u ^ 0xE266u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE266u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE261u; } return 1;
case 0xE261u: /* LDA IMM A9 00 */
    c->pc = 0xE263u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE263u: /* STA ABX 9D 20 06 */
    c->pc = 0xE266u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE266u: /* LDA IMM A9 0F */
    c->pc = 0xE268u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE268u: /* STA ZP 85 01 */
    c->pc = 0xE26Au;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE26Au: /* LDA IMM A9 08 */
    c->pc = 0xE26Cu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE26Cu: /* STA ZP 85 02 */
    c->pc = 0xE26Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE26Eu: /* JSR ABS 20 CF F0 */
    push(c, 0xE2u); push(c, 0x70u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xE271u: /* LDA ZP A5 03 */
    c->pc = 0xE273u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE273u: /* BNE REL D0 B3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE275u ^ 0xE228u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE228u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE275u; } return 1;
case 0xE275u: /* SEC IMP 38 */
    c->pc = 0xE276u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE276u: /* LDA ABX BD A0 04 */
    c->pc = 0xE279u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE279u: /* SBC IMM E9 20 */
    c->pc = 0xE27Bu;
    v = 0x20u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE27Bu: /* STA ZP 85 0A */
    c->pc = 0xE27Du;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE27Du: /* LDA IMM A9 00 */
    c->pc = 0xE27Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE27Fu: /* STA ZP 85 0B */
    c->pc = 0xE281u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE281u: /* SEC IMP 38 */
    c->pc = 0xE282u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE282u: /* LDA ABX BD 60 04 */
    c->pc = 0xE285u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE285u: /* SBC IMM E9 10 */
    c->pc = 0xE287u;
    v = 0x10u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE287u: /* STA ZP 85 08 */
    c->pc = 0xE289u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE289u: /* LDA ABX BD 40 04 */
    c->pc = 0xE28Cu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE28Cu: /* SBC IMM E9 00 */
    c->pc = 0xE28Eu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE28Eu: /* STA ZP 85 09 */
    c->pc = 0xE290u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE290u: /* JSR ABS 20 A2 CB */
    push(c, 0xE2u); push(c, 0x92u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xE293u: /* LDX ZP A6 2B */
    c->pc = 0xE295u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE295u: /* LDY ZP A4 00 */
    c->pc = 0xE297u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE297u: /* LDA ABY B9 4F E1 */
    c->pc = 0xE29Au;
    ea = (uint16_t)(0xE14Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE14Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE29Au: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE29Cu ^ 0xE2B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE2B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE29Cu; } return 1;
case 0xE29Cu: /* CLC IMP 18 */
    c->pc = 0xE29Du;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE29Du: /* LDA ZP A5 08 */
    c->pc = 0xE29Fu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE29Fu: /* ADC IMM 69 20 */
    c->pc = 0xE2A1u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE2A1u: /* STA ZP 85 08 */
    c->pc = 0xE2A3u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2A3u: /* LDA ZP A5 09 */
    c->pc = 0xE2A5u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2A5u: /* ADC IMM 69 00 */
    c->pc = 0xE2A7u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE2A7u: /* STA ZP 85 09 */
    c->pc = 0xE2A9u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2A9u: /* JSR ABS 20 A2 CB */
    push(c, 0xE2u); push(c, 0xABu); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xE2ACu: /* LDX ZP A6 2B */
    c->pc = 0xE2AEu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE2AEu: /* LDY ZP A4 00 */
    c->pc = 0xE2B0u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE2B0u: /* LDA ABY B9 4F E1 */
    c->pc = 0xE2B3u;
    ea = (uint16_t)(0xE14Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE14Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE2B3u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE2B5u ^ 0xE2B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE2B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE2B5u; } return 1;
case 0xE2B5u: /* JMP ABS 4C 28 E2 */
    c->pc = 0xE228u; c->cpu_cycles += 3u; return 1;
case 0xE2B8u: /* SEC IMP 38 */
    c->pc = 0xE2B9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE2B9u: /* LDA ABX BD A0 04 */
    c->pc = 0xE2BCu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE2BCu: /* SBC IMM E9 04 */
    c->pc = 0xE2BEu;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE2BEu: /* STA ABX 9D A1 05 */
    c->pc = 0xE2C1u;
    ea = (uint16_t)(0x05A1u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE2C1u: /* LDA IMM A9 18 */
    c->pc = 0xE2C3u;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2C3u: /* STA ABX 9D 9E 05 */
    c->pc = 0xE2C6u;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE2C6u: /* LDA ABX BD A0 06 */
    c->pc = 0xE2C9u;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE2C9u: /* CMP IMM C9 04 */
    c->pc = 0xE2CBu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE2CBu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE2CDu ^ 0xE2D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE2D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE2CDu; } return 1;
case 0xE2CDu: /* LDA IMM A9 00 */
    c->pc = 0xE2CFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2CFu: /* STA ABX 9D A0 06 */
    c->pc = 0xE2D2u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE2D2u: /* JSR ABS 20 EF EE */
    push(c, 0xE2u); push(c, 0xD4u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xE2D5u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE2D7u ^ 0xE2DCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE2DCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE2D7u; } return 1;
case 0xE2D7u: /* LDA IMM A9 00 */
    c->pc = 0xE2D9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2D9u: /* STA ABX 9D 9E 05 */
    c->pc = 0xE2DCu;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE2DCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE2DDu: /* LDA ABX BD E0 04 */
    c->pc = 0xE2E0u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE2E0u: /* BNE REL D0 65 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE2E2u ^ 0xE347u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE347u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE2E2u; } return 1;
case 0xE2E2u: /* LDA ABX BD 40 06 */
    c->pc = 0xE2E5u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE2E5u: /* STA ZP 85 04 */
    c->pc = 0xE2E7u;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2E7u: /* LDA IMM A9 0A */
    c->pc = 0xE2E9u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2E9u: /* STA ZP 85 01 */
    c->pc = 0xE2EBu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2EBu: /* LDA IMM A9 08 */
    c->pc = 0xE2EDu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2EDu: /* STA ZP 85 02 */
    c->pc = 0xE2EFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2EFu: /* JSR ABS 20 CF F0 */
    push(c, 0xE2u); push(c, 0xF1u); c->pc = 0xF0CFu; c->cpu_cycles += 6u; return 1;
case 0xE2F2u: /* LDA ZP A5 03 */
    c->pc = 0xE2F4u;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE2F4u: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE2F6u ^ 0xE313u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE313u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE2F6u; } return 1;
case 0xE2F6u: /* LDA IMM A9 62 */
    c->pc = 0xE2F8u;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2F8u: /* STA ABX 9D 60 06 */
    c->pc = 0xE2FBu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE2FBu: /* LDA IMM A9 00 */
    c->pc = 0xE2FDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE2FDu: /* STA ABX 9D 40 06 */
    c->pc = 0xE300u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE300u: /* STA ABX 9D 20 06 */
    c->pc = 0xE303u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE303u: /* STA ABX 9D 00 06 */
    c->pc = 0xE306u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE306u: /* LDA ABX BD 20 04 */
    c->pc = 0xE309u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE309u: /* AND IMM 29 FB */
    c->pc = 0xE30Bu;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE30Bu: /* STA ABX 9D 20 04 */
    c->pc = 0xE30Eu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE30Eu: /* INC ABX FE E0 04 */
    c->pc = 0xE311u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE311u: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE313u ^ 0xE325u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE325u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE313u; } return 1;
case 0xE313u: /* LDA ZP A5 04 */
    c->pc = 0xE315u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE315u: /* BPL REL 10 0E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE317u ^ 0xE325u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE325u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE317u; } return 1;
case 0xE317u: /* LDA ZP A5 00 */
    c->pc = 0xE319u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE319u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE31Bu ^ 0xE325u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE325u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE31Bu; } return 1;
case 0xE31Bu: /* LDA IMM A9 03 */
    c->pc = 0xE31Du;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE31Du: /* STA ABX 9D 40 06 */
    c->pc = 0xE320u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE320u: /* LDA IMM A9 76 */
    c->pc = 0xE322u;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE322u: /* STA ABX 9D 60 06 */
    c->pc = 0xE325u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE325u: /* LDA IMM A9 00 */
    c->pc = 0xE327u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE327u: /* STA ABX 9D 90 05 */
    c->pc = 0xE32Au;
    ea = (uint16_t)(0x0590u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE32Au: /* LDA ABX BD A0 06 */
    c->pc = 0xE32Du;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE32Du: /* CMP IMM C9 04 */
    c->pc = 0xE32Fu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE32Fu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE331u ^ 0xE336u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE336u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE331u; } return 1;
case 0xE331u: /* LDA IMM A9 00 */
    c->pc = 0xE333u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE333u: /* STA ABX 9D A0 06 */
    c->pc = 0xE336u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE336u: /* DEC ABX DE C0 06 */
    c->pc = 0xE339u;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE339u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE33Bu ^ 0xE344u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE344u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE33Bu; } return 1;
case 0xE33Bu: /* LDA IMM A9 1F */
    c->pc = 0xE33Du;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE33Du: /* STA ABX 9D C0 06 */
    c->pc = 0xE340u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE340u: /* DEC ZP C6 A6 */
    c->pc = 0xE342u;
    ea = 0xA6u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE342u: /* BEQ REL F0 59 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE344u ^ 0xE39Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE39Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xE344u; } return 1;
case 0xE344u: /* JMP ABS 4C E2 E3 */
    c->pc = 0xE3E2u; c->cpu_cycles += 3u; return 1;
case 0xE347u: /* SEC IMP 38 */
    c->pc = 0xE348u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE348u: /* LDA ABX BD A0 04 */
    c->pc = 0xE34Bu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE34Bu: /* SBC IMM E9 08 */
    c->pc = 0xE34Du;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE34Du: /* STA ABX 9D A1 05 */
    c->pc = 0xE350u;
    ea = (uint16_t)(0x05A1u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE350u: /* LDA IMM A9 14 */
    c->pc = 0xE352u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE352u: /* STA ABX 9D 9E 05 */
    c->pc = 0xE355u;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE355u: /* LDA IMM A9 0C */
    c->pc = 0xE357u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE357u: /* STA ZP 85 01 */
    c->pc = 0xE359u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE359u: /* LDA IMM A9 21 */
    c->pc = 0xE35Bu;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE35Bu: /* STA ZP 85 02 */
    c->pc = 0xE35Du;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE35Du: /* LDA IMM A9 08 */
    c->pc = 0xE35Fu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE35Fu: /* STA ZP 85 03 */
    c->pc = 0xE361u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE361u: /* JSR ABS 20 ED E3 */
    push(c, 0xE3u); push(c, 0x63u); c->pc = 0xE3EDu; c->cpu_cycles += 6u; return 1;
case 0xE364u: /* LDA ABX BD E0 04 */
    c->pc = 0xE367u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE367u: /* AND IMM 29 0F */
    c->pc = 0xE369u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE369u: /* CMP IMM C9 02 */
    c->pc = 0xE36Bu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE36Bu: /* BCS REL B0 49 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE36Du ^ 0xE3B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE3B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE36Du; } return 1;
case 0xE36Du: /* LDA ABX BD E0 04 */
    c->pc = 0xE370u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE370u: /* BPL REL 10 05 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE372u ^ 0xE377u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE377u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE372u; } return 1;
case 0xE372u: /* INC ABX FE E0 04 */
    c->pc = 0xE375u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE375u: /* BNE REL D0 00 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE377u ^ 0xE377u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE377u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE377u; } return 1;
case 0xE377u: /* LDA ZP A5 00 */
    c->pc = 0xE379u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE379u: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE37Bu ^ 0xE39Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE39Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xE37Bu; } return 1;
case 0xE37Bu: /* LDA ZP A5 03 */
    c->pc = 0xE37Du;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE37Du: /* BNE REL D0 A6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE37Fu ^ 0xE325u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE325u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE37Fu; } return 1;
case 0xE37Fu: /* LDA IMM A9 00 */
    c->pc = 0xE381u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE381u: /* STA ABX 9D 40 06 */
    c->pc = 0xE384u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE384u: /* STA ABX 9D 60 06 */
    c->pc = 0xE387u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE387u: /* LDA ABX BD A0 06 */
    c->pc = 0xE38Au;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE38Au: /* CMP IMM C9 09 */
    c->pc = 0xE38Cu;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE38Cu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE38Eu ^ 0xE393u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE393u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE38Eu; } return 1;
case 0xE38Eu: /* LDA IMM A9 05 */
    c->pc = 0xE390u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE390u: /* STA ABX 9D A0 06 */
    c->pc = 0xE393u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE393u: /* INC ABX FE 90 05 */
    c->pc = 0xE396u;
    ea = (uint16_t)(0x0590u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE396u: /* LDA ABX BD 90 05 */
    c->pc = 0xE399u;
    ea = (uint16_t)(0x0590u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0590u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE399u: /* CMP IMM C9 3E */
    c->pc = 0xE39Bu;
    v = 0x3Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE39Bu: /* BCC REL 90 99 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE39Du ^ 0xE336u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE336u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE39Du; } return 1;
case 0xE39Du: /* LDA IMM A9 0A */
    c->pc = 0xE39Fu;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE39Fu: /* STA ABX 9D A0 06 */
    c->pc = 0xE3A2u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3A2u: /* LDA IMM A9 00 */
    c->pc = 0xE3A4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3A4u: /* STA ABX 9D 40 06 */
    c->pc = 0xE3A7u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3A7u: /* STA ABX 9D 60 06 */
    c->pc = 0xE3AAu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3AAu: /* STA ABX 9D 80 06 */
    c->pc = 0xE3ADu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3ADu: /* STA ABX 9D 9E 05 */
    c->pc = 0xE3B0u;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3B0u: /* LDA IMM A9 80 */
    c->pc = 0xE3B2u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3B2u: /* STA ABX 9D 20 04 */
    c->pc = 0xE3B5u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3B5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE3B6u: /* LDA ABX BD E0 04 */
    c->pc = 0xE3B9u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE3B9u: /* BPL REL 10 11 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE3BBu ^ 0xE3CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE3CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE3BBu; } return 1;
case 0xE3BBu: /* AND IMM 29 0F */
    c->pc = 0xE3BDu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3BDu: /* STA ABX 9D E0 04 */
    c->pc = 0xE3C0u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3C0u: /* LDA IMM A9 62 */
    c->pc = 0xE3C2u;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3C2u: /* STA ABX 9D 60 06 */
    c->pc = 0xE3C5u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3C5u: /* LDA IMM A9 00 */
    c->pc = 0xE3C7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3C7u: /* STA ABX 9D 40 06 */
    c->pc = 0xE3CAu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3CAu: /* BEQ REL F0 AB */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE3CCu ^ 0xE377u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE377u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE3CCu; } return 1;
case 0xE3CCu: /* LDA ABX BD 40 06 */
    c->pc = 0xE3CFu;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE3CFu: /* BPL REL 10 04 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE3D1u ^ 0xE3D5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE3D5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE3D1u; } return 1;
case 0xE3D1u: /* LDA ZP A5 00 */
    c->pc = 0xE3D3u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE3D3u: /* BNE REL D0 C8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE3D5u ^ 0xE39Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE39Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xE3D5u; } return 1;
case 0xE3D5u: /* LDA IMM A9 9E */
    c->pc = 0xE3D7u;
    v = 0x9Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3D7u: /* STA ABX 9D 60 06 */
    c->pc = 0xE3DAu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3DAu: /* LDA IMM A9 FF */
    c->pc = 0xE3DCu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3DCu: /* STA ABX 9D 40 06 */
    c->pc = 0xE3DFu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3DFu: /* JMP ABS 4C 77 E3 */
    c->pc = 0xE377u; c->cpu_cycles += 3u; return 1;
case 0xE3E2u: /* JSR ABS 20 EF EE */
    push(c, 0xE3u); push(c, 0xE4u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xE3E5u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE3E7u ^ 0xE3ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE3ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE3E7u; } return 1;
case 0xE3E7u: /* LDA IMM A9 00 */
    c->pc = 0xE3E9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3E9u: /* STA ABX 9D 9E 05 */
    c->pc = 0xE3ECu;
    ea = (uint16_t)(0x059Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE3ECu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE3EDu: /* LDA ABX BD 20 04 */
    c->pc = 0xE3F0u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE3F0u: /* AND IMM 29 40 */
    c->pc = 0xE3F2u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE3F2u: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE3F4u ^ 0xE404u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE404u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE3F4u; } return 1;
case 0xE3F4u: /* SEC IMP 38 */
    c->pc = 0xE3F5u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE3F5u: /* LDA ABX BD 60 04 */
    c->pc = 0xE3F8u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE3F8u: /* SBC ZP E5 01 */
    c->pc = 0xE3FAu;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE3FAu: /* STA ZP 85 08 */
    c->pc = 0xE3FCu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE3FCu: /* LDA ABX BD 40 04 */
    c->pc = 0xE3FFu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE3FFu: /* SBC IMM E9 00 */
    c->pc = 0xE401u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE401u: /* JMP ABS 4C 11 E4 */
    c->pc = 0xE411u; c->cpu_cycles += 3u; return 1;
case 0xE404u: /* CLC IMP 18 */
    c->pc = 0xE405u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE405u: /* LDA ABX BD 60 04 */
    c->pc = 0xE408u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE408u: /* ADC ZP 65 01 */
    c->pc = 0xE40Au;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE40Au: /* STA ZP 85 08 */
    c->pc = 0xE40Cu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE40Cu: /* LDA ABX BD 40 04 */
    c->pc = 0xE40Fu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE40Fu: /* ADC IMM 69 00 */
    c->pc = 0xE411u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE411u: /* STA ZP 85 09 */
    c->pc = 0xE413u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE413u: /* SEC IMP 38 */
    c->pc = 0xE414u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE414u: /* LDA ABX BD A0 04 */
    c->pc = 0xE417u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE417u: /* SBC IMM E9 08 */
    c->pc = 0xE419u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE419u: /* STA ZP 85 0A */
    c->pc = 0xE41Bu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE41Bu: /* LDA IMM A9 00 */
    c->pc = 0xE41Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE41Du: /* SBC IMM E9 00 */
    c->pc = 0xE41Fu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE41Fu: /* STA ZP 85 0B */
    c->pc = 0xE421u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE421u: /* JSR ABS 20 A2 CB */
    push(c, 0xE4u); push(c, 0x23u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xE424u: /* LDX ZP A6 2B */
    c->pc = 0xE426u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE426u: /* LDY ZP A4 00 */
    c->pc = 0xE428u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE428u: /* LDA ABY B9 68 E4 */
    c->pc = 0xE42Bu;
    ea = (uint16_t)(0xE468u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE468u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE42Bu: /* PHA IMP 48 */
    c->pc = 0xE42Cu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE42Cu: /* LDA ABX BD 40 06 */
    c->pc = 0xE42Fu;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE42Fu: /* BPL REL 10 0F */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE431u ^ 0xE440u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE440u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE431u; } return 1;
case 0xE431u: /* CLC IMP 18 */
    c->pc = 0xE432u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE432u: /* LDA ABX BD A0 04 */
    c->pc = 0xE435u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE435u: /* ADC ZP 65 03 */
    c->pc = 0xE437u;
    ea = 0x03u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE437u: /* STA ZP 85 0A */
    c->pc = 0xE439u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE439u: /* LDA IMM A9 00 */
    c->pc = 0xE43Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE43Bu: /* ADC IMM 69 00 */
    c->pc = 0xE43Du;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE43Du: /* JMP ABS 4C 4C E4 */
    c->pc = 0xE44Cu; c->cpu_cycles += 3u; return 1;
case 0xE440u: /* SEC IMP 38 */
    c->pc = 0xE441u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE441u: /* LDA ABX BD A0 04 */
    c->pc = 0xE444u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE444u: /* SBC ZP E5 02 */
    c->pc = 0xE446u;
    ea = 0x02u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE446u: /* STA ZP 85 0A */
    c->pc = 0xE448u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE448u: /* LDA IMM A9 00 */
    c->pc = 0xE44Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE44Au: /* SBC IMM E9 00 */
    c->pc = 0xE44Cu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE44Cu: /* STA ZP 85 0B */
    c->pc = 0xE44Eu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE44Eu: /* LDA ABX BD 60 04 */
    c->pc = 0xE451u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE451u: /* STA ZP 85 08 */
    c->pc = 0xE453u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE453u: /* LDA ABX BD 40 04 */
    c->pc = 0xE456u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE456u: /* STA ZP 85 09 */
    c->pc = 0xE458u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE458u: /* JSR ABS 20 A2 CB */
    push(c, 0xE4u); push(c, 0x5Au); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xE45Bu: /* LDX ZP A6 2B */
    c->pc = 0xE45Du;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE45Du: /* LDY ZP A4 00 */
    c->pc = 0xE45Fu;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE45Fu: /* LDA ABY B9 68 E4 */
    c->pc = 0xE462u;
    ea = (uint16_t)(0xE468u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE468u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE462u: /* STA ZP 85 00 */
    c->pc = 0xE464u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE464u: /* PLA IMP 68 */
    c->pc = 0xE465u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE465u: /* STA ZP 85 03 */
    c->pc = 0xE467u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE467u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE471u: /* LDA IMM A9 00 */
    c->pc = 0xE473u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE473u: /* STA ABX 9D 80 06 */
    c->pc = 0xE476u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE476u: /* LDA ABX BD E0 04 */
    c->pc = 0xE479u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE479u: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE47Bu ^ 0xE4AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE4AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE47Bu; } return 1;
case 0xE47Bu: /* LDA ABX BD C0 06 */
    c->pc = 0xE47Eu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE47Eu: /* BNE REL D0 5D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE480u ^ 0xE4DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE4DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE480u; } return 1;
case 0xE480u: /* LDA ABX BD 20 04 */
    c->pc = 0xE483u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE483u: /* EOR IMM 49 40 */
    c->pc = 0xE485u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE485u: /* STA ABX 9D 20 04 */
    c->pc = 0xE488u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE488u: /* INC ABX FE A0 06 */
    c->pc = 0xE48Bu;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE48Bu: /* AND IMM 29 40 */
    c->pc = 0xE48Du;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE48Du: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE48Fu ^ 0xE492u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE492u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE48Fu; } return 1;
case 0xE48Fu: /* INC ABX FE A0 06 */
    c->pc = 0xE492u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE492u: /* LDA IMM A9 00 */
    c->pc = 0xE494u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE494u: /* STA ABX 9D 20 06 */
    c->pc = 0xE497u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE497u: /* STA ABX 9D 60 06 */
    c->pc = 0xE49Au;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE49Au: /* LDA IMM A9 FE */
    c->pc = 0xE49Cu;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE49Cu: /* STA ABX 9D 40 06 */
    c->pc = 0xE49Fu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE49Fu: /* LDA IMM A9 01 */
    c->pc = 0xE4A1u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE4A1u: /* STA ABX 9D 00 06 */
    c->pc = 0xE4A4u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4A4u: /* LDA IMM A9 10 */
    c->pc = 0xE4A6u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE4A6u: /* STA ABX 9D C0 06 */
    c->pc = 0xE4A9u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4A9u: /* INC ABX FE E0 04 */
    c->pc = 0xE4ACu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE4ACu: /* BNE REL D0 2F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE4AEu ^ 0xE4DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE4DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE4AEu; } return 1;
case 0xE4AEu: /* CLC IMP 18 */
    c->pc = 0xE4AFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE4AFu: /* LDA ABX BD 20 06 */
    c->pc = 0xE4B2u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE4B2u: /* ADC IMM 69 40 */
    c->pc = 0xE4B4u;
    v = 0x40u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE4B4u: /* STA ABX 9D 20 06 */
    c->pc = 0xE4B7u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4B7u: /* LDA ABX BD 00 06 */
    c->pc = 0xE4BAu;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE4BAu: /* ADC IMM 69 00 */
    c->pc = 0xE4BCu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE4BCu: /* STA ABX 9D 00 06 */
    c->pc = 0xE4BFu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4BFu: /* LDA ABX BD C0 06 */
    c->pc = 0xE4C2u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE4C2u: /* BNE REL D0 19 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE4C4u ^ 0xE4DDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE4DDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE4C4u; } return 1;
case 0xE4C4u: /* LDA IMM A9 00 */
    c->pc = 0xE4C6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE4C6u: /* STA ABX 9D A0 06 */
    c->pc = 0xE4C9u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4C9u: /* STA ABX 9D 20 06 */
    c->pc = 0xE4CCu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4CCu: /* STA ABX 9D 00 06 */
    c->pc = 0xE4CFu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4CFu: /* STA ABX 9D 60 06 */
    c->pc = 0xE4D2u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4D2u: /* STA ABX 9D 40 06 */
    c->pc = 0xE4D5u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4D5u: /* LDA IMM A9 02 */
    c->pc = 0xE4D7u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE4D7u: /* STA ABX 9D C0 06 */
    c->pc = 0xE4DAu;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE4DAu: /* DEC ABX DE E0 04 */
    c->pc = 0xE4DDu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE4DDu: /* DEC ABX DE C0 06 */
    c->pc = 0xE4E0u;
    ea = (uint16_t)(0x06C0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE4E0u: /* JSR ABS 20 EF EE */
    push(c, 0xE4u); push(c, 0xE2u); c->pc = 0xEEEFu; c->cpu_cycles += 6u; return 1;
case 0xE4E3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE4E4u: /* JSR ABS 20 E9 E4 */
    push(c, 0xE4u); push(c, 0xE6u); c->pc = 0xE4E9u; c->cpu_cycles += 6u; return 1;
case 0xE4E7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE4E8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE4E9u: /* SEC IMP 38 */
    c->pc = 0xE4EAu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE4EAu: /* LDA ABX BD 60 04 */
    c->pc = 0xE4EDu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE4EDu: /* SBC ZP E5 1F */
    c->pc = 0xE4EFu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE4EFu: /* LDA ABX BD 40 04 */
    c->pc = 0xE4F2u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE4F2u: /* SBC ZP E5 20 */
    c->pc = 0xE4F4u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE4F4u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE4F6u ^ 0xE4FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE4FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE4F6u; } return 1;
case 0xE4F6u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE4F8u ^ 0xE4FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE4FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE4F8u; } return 1;
case 0xE4F8u: /* CLC IMP 18 */
    c->pc = 0xE4F9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE4F9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE4FAu: /* LSR ABX 5E 20 04 */
    c->pc = 0xE4FDu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE4FDu: /* SEC IMP 38 */
    c->pc = 0xE4FEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE4FEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE4FFu: /* LDA ABX BD 60 04 */
    c->pc = 0xE502u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE502u: /* STA ZP 85 08 */
    c->pc = 0xE504u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE504u: /* LDA ABX BD 40 04 */
    c->pc = 0xE507u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE507u: /* STA ZP 85 09 */
    c->pc = 0xE509u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE509u: /* LDA ABX BD A0 04 */
    c->pc = 0xE50Cu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE50Cu: /* STA ZP 85 0A */
    c->pc = 0xE50Eu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE50Eu: /* LDX ZP A6 00 */
    c->pc = 0xE510u;
    ea = 0x00u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE510u: /* LDA ABY B9 4F D4 */
    c->pc = 0xE513u;
    ea = (uint16_t)(0xD44Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD44Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE513u: /* STA ABX 9D 00 04 */
    c->pc = 0xE516u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE516u: /* LDA ABY B9 61 D4 */
    c->pc = 0xE519u;
    ea = (uint16_t)(0xD461u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD461u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE519u: /* STA ABX 9D 20 04 */
    c->pc = 0xE51Cu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE51Cu: /* LDA ZP A5 08 */
    c->pc = 0xE51Eu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE51Eu: /* STA ABX 9D 60 04 */
    c->pc = 0xE521u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE521u: /* LDA ZP A5 09 */
    c->pc = 0xE523u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE523u: /* STA ABX 9D 40 04 */
    c->pc = 0xE526u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE526u: /* LDA ZP A5 0A */
    c->pc = 0xE528u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE528u: /* STA ABX 9D A0 04 */
    c->pc = 0xE52Bu;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE52Bu: /* LDA ABY B9 85 D4 */
    c->pc = 0xE52Eu;
    ea = (uint16_t)(0xD485u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD485u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE52Eu: /* STA ABX 9D 20 06 */
    c->pc = 0xE531u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE531u: /* LDA ABY B9 97 D4 */
    c->pc = 0xE534u;
    ea = (uint16_t)(0xD497u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD497u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE534u: /* STA ABX 9D 00 06 */
    c->pc = 0xE537u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE537u: /* LDA ABY B9 A9 D4 */
    c->pc = 0xE53Au;
    ea = (uint16_t)(0xD4A9u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4A9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE53Au: /* STA ABX 9D 60 06 */
    c->pc = 0xE53Du;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE53Du: /* LDA ABY B9 BB D4 */
    c->pc = 0xE540u;
    ea = (uint16_t)(0xD4BBu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4BBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE540u: /* STA ABX 9D 40 06 */
    c->pc = 0xE543u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE543u: /* LDA IMM A9 00 */
    c->pc = 0xE545u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE545u: /* STA ABX 9D A0 06 */
    c->pc = 0xE548u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE548u: /* STA ABX 9D 80 06 */
    c->pc = 0xE54Bu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE54Bu: /* STA ABX 9D E0 04 */
    c->pc = 0xE54Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE54Eu: /* SEC IMP 38 */
    c->pc = 0xE54Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE54Fu: /* LDA ABX BD 60 04 */
    c->pc = 0xE552u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE552u: /* SBC ZP E5 1F */
    c->pc = 0xE554u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE554u: /* STA ABX 9D E0 06 */
    c->pc = 0xE557u;
    ea = (uint16_t)(0x06E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE557u: /* LDX ZP A6 2B */
    c->pc = 0xE559u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE559u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE55Au: /* LDA IMM A9 00 */
    c->pc = 0xE55Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE55Cu: /* STA ZP 85 01 */
    c->pc = 0xE55Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE55Eu: /* LDA ZP A5 2C */
    c->pc = 0xE560u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE560u: /* BEQ REL F0 6A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE562u ^ 0xE5CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE562u; } return 1;
case 0xE562u: /* LDA ZP A5 BD */
    c->pc = 0xE564u;
    ea = 0xBDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE564u: /* BNE REL D0 66 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE566u ^ 0xE5CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE566u; } return 1;
case 0xE566u: /* LDA ZP A5 F9 */
    c->pc = 0xE568u;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE568u: /* BNE REL D0 62 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE56Au ^ 0xE5CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE56Au; } return 1;
case 0xE56Au: /* SEC IMP 38 */
    c->pc = 0xE56Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE56Bu: /* LDA ZP A5 2D */
    c->pc = 0xE56Du;
    ea = 0x2Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE56Du: /* SBC ZP E5 2E */
    c->pc = 0xE56Fu;
    ea = 0x2Eu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE56Fu: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE571u ^ 0xE575u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE575u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE571u; } return 1;
case 0xE571u: /* EOR IMM 49 FF */
    c->pc = 0xE573u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE573u: /* ADC IMM 69 01 */
    c->pc = 0xE575u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE575u: /* LDY ABX BC E0 06 */
    c->pc = 0xE578u;
    ea = (uint16_t)(0x06E0u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x06E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE578u: /* CMP ABY D9 E4 D4 */
    c->pc = 0xE57Bu;
    ea = (uint16_t)(0xD4E4u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD4E4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE57Bu: /* BCS REL B0 4F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE57Du ^ 0xE5CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE57Du; } return 1;
case 0xE57Du: /* SEC IMP 38 */
    c->pc = 0xE57Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE57Eu: /* LDA ABS AD A0 04 */
    c->pc = 0xE581u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE581u: /* SBC ABX FD A0 04 */
    c->pc = 0xE584u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE584u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE586u ^ 0xE58Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE58Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xE586u; } return 1;
case 0xE586u: /* EOR IMM 49 FF */
    c->pc = 0xE588u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE588u: /* ADC IMM 69 01 */
    c->pc = 0xE58Au;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE58Au: /* CMP ABY D9 84 D5 */
    c->pc = 0xE58Du;
    ea = (uint16_t)(0xD584u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD584u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE58Du: /* BCS REL B0 3D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE58Fu ^ 0xE5CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE58Fu; } return 1;
case 0xE58Fu: /* LDY ABX BC 00 04 */
    c->pc = 0xE592u;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE592u: /* CPY IMM C0 76 */
    c->pc = 0xE594u;
    v = 0x76u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0xE594u: /* BCS REL B0 37 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE596u ^ 0xE5CDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE596u; } return 1;
case 0xE596u: /* LDA ZP A5 4B */
    c->pc = 0xE598u;
    ea = 0x4Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE598u: /* BNE REL D0 32 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE59Au ^ 0xE5CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE59Au; } return 1;
case 0xE59Au: /* SEC IMP 38 */
    c->pc = 0xE59Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE59Bu: /* LDA ABS AD C0 06 */
    c->pc = 0xE59Eu;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE59Eu: /* SBC ABY F9 5C ED */
    c->pc = 0xE5A1u;
    ea = (uint16_t)(0xED5Cu + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0xED5Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE5A1u: /* STA ABS 8D C0 06 */
    c->pc = 0xE5A4u;
    ea = 0x06C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE5A4u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE5A6u ^ 0xE5A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE5A6u; } return 1;
case 0xE5A6u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE5A8u ^ 0xE5B2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5B2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE5A8u; } return 1;
case 0xE5A8u: /* LDA IMM A9 00 */
    c->pc = 0xE5AAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5AAu: /* STA ZP 85 2C */
    c->pc = 0xE5ACu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE5ACu: /* STA ABS 8D C0 06 */
    c->pc = 0xE5AFu;
    ea = 0x06C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE5AFu: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0xE5B2u: /* LDA ABS AD 20 04 */
    c->pc = 0xE5B5u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE5B5u: /* AND IMM 29 BF */
    c->pc = 0xE5B7u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5B7u: /* STA ABS 8D 20 04 */
    c->pc = 0xE5BAu;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE5BAu: /* LDA ABX BD 20 04 */
    c->pc = 0xE5BDu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE5BDu: /* AND IMM 29 40 */
    c->pc = 0xE5BFu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5BFu: /* EOR IMM 49 40 */
    c->pc = 0xE5C1u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5C1u: /* ORA ABS 0D 20 04 */
    c->pc = 0xE5C4u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE5C4u: /* STA ABS 8D 20 04 */
    c->pc = 0xE5C7u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE5C7u: /* JSR ABS 20 32 D3 */
    push(c, 0xE5u); push(c, 0xC9u); c->pc = 0xD332u; c->cpu_cycles += 6u; return 1;
case 0xE5CAu: /* INC ZP E6 01 */
    c->pc = 0xE5CCu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE5CCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE5CDu: /* LDA ZP A5 AD */
    c->pc = 0xE5CFu;
    ea = 0xADu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE5CFu: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE5D1u ^ 0xE5EBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5EBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE5D1u; } return 1;
case 0xE5D1u: /* LSR ABX 5E 20 04 */
    c->pc = 0xE5D4u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE5D4u: /* STY ZP 84 AD */
    c->pc = 0xE5D6u;
    ea = 0xADu;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE5D6u: /* INC ZP E6 01 */
    c->pc = 0xE5D8u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE5D8u: /* LDA ABX BD E0 04 */
    c->pc = 0xE5DBu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE5DBu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE5DDu ^ 0xE5EBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5EBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE5DDu; } return 1;
case 0xE5DDu: /* LDA IMM A9 FF */
    c->pc = 0xE5DFu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5DFu: /* STA ABX 9D 20 01 */
    c->pc = 0xE5E2u;
    ea = (uint16_t)(0x0120u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE5E2u: /* LDA ABX BD 10 01 */
    c->pc = 0xE5E5u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE5E5u: /* TAY IMP A8 */
    c->pc = 0xE5E6u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE5E6u: /* LDA IMM A9 00 */
    c->pc = 0xE5E8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5E8u: /* STA ABY 99 40 01 */
    c->pc = 0xE5EBu;
    ea = (uint16_t)(0x0140u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE5EBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE5ECu: /* LDA ABX BD A0 04 */
    c->pc = 0xE5EFu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE5EFu: /* STA ZP 85 00 */
    c->pc = 0xE5F1u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE5F1u: /* LDA ABX BD E0 06 */
    c->pc = 0xE5F4u;
    ea = (uint16_t)(0x06E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE5F4u: /* STA ZP 85 08 */
    c->pc = 0xE5F6u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE5F6u: /* LDX IMM A2 09 */
    c->pc = 0xE5F8u;
    v = 0x09u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xE5F8u: /* LDA ZP A5 1C */
    c->pc = 0xE5FAu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE5FAu: /* AND IMM 29 01 */
    c->pc = 0xE5FCu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE5FCu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE5FEu ^ 0xE5FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE5FEu; } return 1;
case 0xE5FEu: /* DEX IMP CA */
    c->pc = 0xE5FFu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xE5FFu: /* LDA ABX BD 20 04 */
    c->pc = 0xE602u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE602u: /* BPL REL 10 30 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xE604u ^ 0xE634u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE634u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE604u; } return 1;
case 0xE604u: /* AND IMM 29 01 */
    c->pc = 0xE606u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE606u: /* BEQ REL F0 2C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE608u ^ 0xE634u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE634u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE608u; } return 1;
case 0xE608u: /* CLC IMP 18 */
    c->pc = 0xE609u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE609u: /* LDY ABX BC 90 05 */
    c->pc = 0xE60Cu;
    ea = (uint16_t)(0x0590u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0590u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE60Cu: /* LDA ABY B9 DF D4 */
    c->pc = 0xE60Fu;
    ea = (uint16_t)(0xD4DFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4DFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE60Fu: /* ADC ZP 65 08 */
    c->pc = 0xE611u;
    ea = 0x08u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE611u: /* TAY IMP A8 */
    c->pc = 0xE612u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE612u: /* SEC IMP 38 */
    c->pc = 0xE613u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE613u: /* LDA ZP A5 2E */
    c->pc = 0xE615u;
    ea = 0x2Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE615u: /* SBC ABX FD E0 06 */
    c->pc = 0xE618u;
    ea = (uint16_t)(0x06E0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x06E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE618u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE61Au ^ 0xE61Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE61Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE61Au; } return 1;
case 0xE61Au: /* EOR IMM 49 FF */
    c->pc = 0xE61Cu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE61Cu: /* ADC IMM 69 01 */
    c->pc = 0xE61Eu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE61Eu: /* CMP ABY D9 E4 D4 */
    c->pc = 0xE621u;
    ea = (uint16_t)(0xD4E4u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD4E4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE621u: /* BCS REL B0 11 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE623u ^ 0xE634u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE634u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE623u; } return 1;
case 0xE623u: /* SEC IMP 38 */
    c->pc = 0xE624u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE624u: /* LDA ZP A5 00 */
    c->pc = 0xE626u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE626u: /* SBC ABX FD A0 04 */
    c->pc = 0xE629u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE629u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE62Bu ^ 0xE62Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE62Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE62Bu; } return 1;
case 0xE62Bu: /* EOR IMM 49 FF */
    c->pc = 0xE62Du;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE62Du: /* ADC IMM 69 01 */
    c->pc = 0xE62Fu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xE62Fu: /* CMP ABY D9 84 D5 */
    c->pc = 0xE632u;
    ea = (uint16_t)(0xD584u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD584u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE632u: /* BCC REL 90 0F */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE634u ^ 0xE643u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE643u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE634u; } return 1;
case 0xE634u: /* DEX IMP CA */
    c->pc = 0xE635u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xE635u: /* DEX IMP CA */
    c->pc = 0xE636u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xE636u: /* CPX IMM E0 02 */
    c->pc = 0xE638u;
    v = 0x02u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xE638u: /* BCS REL B0 C5 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE63Au ^ 0xE5FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE5FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE63Au; } return 1;
case 0xE63Au: /* LDX ZP A6 2B */
    c->pc = 0xE63Cu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE63Cu: /* LDA IMM A9 00 */
    c->pc = 0xE63Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE63Eu: /* STA ABX 9D 00 01 */
    c->pc = 0xE641u;
    ea = (uint16_t)(0x0100u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE641u: /* CLC IMP 18 */
    c->pc = 0xE642u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE642u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE643u: /* LDY ZP A4 A9 */
    c->pc = 0xE645u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE645u: /* LDA ABY B9 86 E9 */
    c->pc = 0xE648u;
    ea = (uint16_t)(0xE986u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE986u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE648u: /* STA ZP 85 08 */
    c->pc = 0xE64Au;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE64Au: /* LDA ABY B9 8F E9 */
    c->pc = 0xE64Du;
    ea = (uint16_t)(0xE98Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE98Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE64Du: /* STA ZP 85 09 */
    c->pc = 0xE64Fu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE64Fu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0xE652u: /* LDY ZP A4 2B */
    c->pc = 0xE654u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE654u: /* LDA ABY B9 20 04 */
    c->pc = 0xE657u;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE657u: /* AND IMM 29 08 */
    c->pc = 0xE659u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE659u: /* BNE REL D0 34 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE65Bu ^ 0xE68Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE68Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE65Bu; } return 1;
case 0xE65Bu: /* LDA ABY B9 00 04 */
    c->pc = 0xE65Eu;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE65Eu: /* TAY IMP A8 */
    c->pc = 0xE65Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE65Fu: /* LDA ABY B9 98 E9 */
    c->pc = 0xE662u;
    ea = (uint16_t)(0xE998u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE998u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE662u: /* STA ZP 85 00 */
    c->pc = 0xE664u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE664u: /* BEQ REL F0 29 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE666u ^ 0xE68Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE68Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE666u; } return 1;
case 0xE666u: /* JSR ABS 20 7F E9 */
    push(c, 0xE6u); push(c, 0x68u); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE669u: /* LSR ABX 5E 20 04 */
    c->pc = 0xE66Cu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE66Cu: /* LDA IMM A9 2B */
    c->pc = 0xE66Eu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE66Eu: /* JSR ABS 20 51 C0 */
    push(c, 0xE6u); push(c, 0x70u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE671u: /* LDX ZP A6 2B */
    c->pc = 0xE673u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE673u: /* LDA ABX BD 00 01 */
    c->pc = 0xE676u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE676u: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE678u ^ 0xE6A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE6A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE678u; } return 1;
case 0xE678u: /* INC ABX FE 00 01 */
    c->pc = 0xE67Bu;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE67Bu: /* SEC IMP 38 */
    c->pc = 0xE67Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE67Cu: /* LDA ABX BD C0 06 */
    c->pc = 0xE67Fu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE67Fu: /* SBC ZP E5 00 */
    c->pc = 0xE681u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE681u: /* STA ABX 9D C0 06 */
    c->pc = 0xE684u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE684u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE686u ^ 0xE688u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE688u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE686u; } return 1;
case 0xE686u: /* BCS REL B0 20 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE688u ^ 0xE6A8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE6A8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE688u; } return 1;
case 0xE688u: /* LDA IMM A9 00 */
    c->pc = 0xE68Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE68Au: /* STA ABX 9D C0 06 */
    c->pc = 0xE68Du;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE68Du: /* SEC IMP 38 */
    c->pc = 0xE68Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE68Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE68Fu: /* LDA ABX BD 20 04 */
    c->pc = 0xE692u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE692u: /* EOR IMM 49 40 */
    c->pc = 0xE694u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE694u: /* AND IMM 29 FE */
    c->pc = 0xE696u;
    v = 0xFEu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE696u: /* STA ABX 9D 20 04 */
    c->pc = 0xE699u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE699u: /* LDA IMM A9 05 */
    c->pc = 0xE69Bu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE69Bu: /* STA ABX 9D 40 06 */
    c->pc = 0xE69Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE69Eu: /* STA ABX 9D 00 06 */
    c->pc = 0xE6A1u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE6A1u: /* LDA IMM A9 2D */
    c->pc = 0xE6A3u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE6A3u: /* JSR ABS 20 51 C0 */
    push(c, 0xE6u); push(c, 0xA5u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE6A6u: /* LDX ZP A6 2B */
    c->pc = 0xE6A8u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE6A8u: /* CLC IMP 18 */
    c->pc = 0xE6A9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE6A9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE6AAu: /* LDY ZP A4 2B */
    c->pc = 0xE6ACu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE6ACu: /* LDA ABY B9 20 04 */
    c->pc = 0xE6AFu;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6AFu: /* AND IMM 29 08 */
    c->pc = 0xE6B1u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE6B1u: /* BNE REL D0 4F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE6B3u ^ 0xE702u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE702u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6B3u; } return 1;
case 0xE6B3u: /* LDA ABY B9 00 04 */
    c->pc = 0xE6B6u;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6B6u: /* TAY IMP A8 */
    c->pc = 0xE6B7u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE6B7u: /* LDA ABX BD E0 04 */
    c->pc = 0xE6BAu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6BAu: /* CMP IMM C9 02 */
    c->pc = 0xE6BCu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE6BCu: /* BCC REL 90 13 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xE6BEu ^ 0xE6D1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE6D1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6BEu; } return 1;
case 0xE6BEu: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE6C0u ^ 0xE6C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE6C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6C0u; } return 1;
case 0xE6C0u: /* LDA ABY B9 14 EA */
    c->pc = 0xE6C3u;
    ea = (uint16_t)(0xEA14u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xEA14u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6C3u: /* JMP ABS 4C D4 E6 */
    c->pc = 0xE6D4u; c->cpu_cycles += 3u; return 1;
case 0xE6C6u: /* CLC IMP 18 */
    c->pc = 0xE6C7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE6C7u: /* LDA ABY B9 98 E9 */
    c->pc = 0xE6CAu;
    ea = (uint16_t)(0xE998u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE998u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6CAu: /* ASL IMP 0A */
    c->pc = 0xE6CBu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE6CBu: /* ADC ABY 79 98 E9 */
    c->pc = 0xE6CEu;
    ea = (uint16_t)(0xE998u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xE998u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6CEu: /* JMP ABS 4C D4 E6 */
    c->pc = 0xE6D4u; c->cpu_cycles += 3u; return 1;
case 0xE6D1u: /* LDA ABY B9 98 E9 */
    c->pc = 0xE6D4u;
    ea = (uint16_t)(0xE998u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xE998u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6D4u: /* STA ZP 85 00 */
    c->pc = 0xE6D6u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE6D6u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE6D8u ^ 0xE702u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE702u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6D8u; } return 1;
case 0xE6D8u: /* JSR ABS 20 7F E9 */
    push(c, 0xE6u); push(c, 0xDAu); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE6DBu: /* TXA IMP 8A */
    c->pc = 0xE6DCu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE6DCu: /* PHA IMP 48 */
    c->pc = 0xE6DDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE6DDu: /* LDA IMM A9 2B */
    c->pc = 0xE6DFu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE6DFu: /* JSR ABS 20 51 C0 */
    push(c, 0xE6u); push(c, 0xE1u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE6E2u: /* PLA IMP 68 */
    c->pc = 0xE6E3u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE6E3u: /* TAY IMP A8 */
    c->pc = 0xE6E4u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE6E4u: /* LDX ZP A6 2B */
    c->pc = 0xE6E6u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE6E6u: /* LDA ABX BD 00 01 */
    c->pc = 0xE6E9u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6E9u: /* BNE REL D0 27 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE6EBu ^ 0xE712u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE712u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6EBu; } return 1;
case 0xE6EBu: /* INC ABX FE 00 01 */
    c->pc = 0xE6EEu;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE6EEu: /* SEC IMP 38 */
    c->pc = 0xE6EFu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE6EFu: /* LDA ABX BD C0 06 */
    c->pc = 0xE6F2u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE6F2u: /* SBC ZP E5 00 */
    c->pc = 0xE6F4u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE6F4u: /* STA ABX 9D C0 06 */
    c->pc = 0xE6F7u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE6F7u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE6F9u ^ 0xE6FBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE6FBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6F9u; } return 1;
case 0xE6F9u: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE6FBu ^ 0xE70Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE70Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xE6FBu; } return 1;
case 0xE6FBu: /* LDA IMM A9 00 */
    c->pc = 0xE6FDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE6FDu: /* STA ABX 9D C0 06 */
    c->pc = 0xE700u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE700u: /* SEC IMP 38 */
    c->pc = 0xE701u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE701u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE702u: /* LDA IMM A9 2D */
    c->pc = 0xE704u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE704u: /* JSR ABS 20 51 C0 */
    push(c, 0xE7u); push(c, 0x06u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE707u: /* LSR ABX 5E 20 04 */
    c->pc = 0xE70Au;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE70Au: /* JMP ABS 4C 12 E7 */
    c->pc = 0xE712u; c->cpu_cycles += 3u; return 1;
case 0xE70Du: /* LDA IMM A9 00 */
    c->pc = 0xE70Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE70Fu: /* STA ABY 99 20 04 */
    c->pc = 0xE712u;
    ea = (uint16_t)(0x0420u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE712u: /* LDX ZP A6 2B */
    c->pc = 0xE714u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE714u: /* CLC IMP 18 */
    c->pc = 0xE715u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE715u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE716u: /* LDY ZP A4 2B */
    c->pc = 0xE718u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE718u: /* LDA ABY B9 20 04 */
    c->pc = 0xE71Bu;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE71Bu: /* AND IMM 29 08 */
    c->pc = 0xE71Du;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE71Du: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE71Fu ^ 0xE754u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE754u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE71Fu; } return 1;
case 0xE71Fu: /* LDA ABY B9 00 04 */
    c->pc = 0xE722u;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE722u: /* TAY IMP A8 */
    c->pc = 0xE723u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE723u: /* LDA ABY B9 8C EA */
    c->pc = 0xE726u;
    ea = (uint16_t)(0xEA8Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xEA8Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE726u: /* STA ZP 85 00 */
    c->pc = 0xE728u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE728u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE72Au ^ 0xE754u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE754u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE72Au; } return 1;
case 0xE72Au: /* JSR ABS 20 7F E9 */
    push(c, 0xE7u); push(c, 0x2Cu); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE72Du: /* TXA IMP 8A */
    c->pc = 0xE72Eu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE72Eu: /* PHA IMP 48 */
    c->pc = 0xE72Fu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE72Fu: /* LDA IMM A9 2B */
    c->pc = 0xE731u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE731u: /* JSR ABS 20 51 C0 */
    push(c, 0xE7u); push(c, 0x33u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE734u: /* PLA IMP 68 */
    c->pc = 0xE735u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE735u: /* TAY IMP A8 */
    c->pc = 0xE736u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE736u: /* LDX ZP A6 2B */
    c->pc = 0xE738u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE738u: /* LDA ABX BD 00 01 */
    c->pc = 0xE73Bu;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE73Bu: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE73Du ^ 0xE770u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE770u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE73Du; } return 1;
case 0xE73Du: /* INC ABX FE 00 01 */
    c->pc = 0xE740u;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE740u: /* SEC IMP 38 */
    c->pc = 0xE741u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE741u: /* LDA ABX BD C0 06 */
    c->pc = 0xE744u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE744u: /* SBC ZP E5 00 */
    c->pc = 0xE746u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE746u: /* STA ABX 9D C0 06 */
    c->pc = 0xE749u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE749u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE74Bu ^ 0xE74Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE74Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xE74Bu; } return 1;
case 0xE74Bu: /* BCS REL B0 C0 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE74Du ^ 0xE70Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE70Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xE74Du; } return 1;
case 0xE74Du: /* LDA IMM A9 00 */
    c->pc = 0xE74Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE74Fu: /* STA ABX 9D C0 06 */
    c->pc = 0xE752u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE752u: /* SEC IMP 38 */
    c->pc = 0xE753u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE753u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE754u: /* LDA IMM A9 2D */
    c->pc = 0xE756u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE756u: /* JSR ABS 20 51 C0 */
    push(c, 0xE7u); push(c, 0x58u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE759u: /* LDA ABX BD 20 04 */
    c->pc = 0xE75Cu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE75Cu: /* AND IMM 29 FE */
    c->pc = 0xE75Eu;
    v = 0xFEu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE75Eu: /* STA ABX 9D 20 04 */
    c->pc = 0xE761u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE761u: /* LDA IMM A9 3D */
    c->pc = 0xE763u;
    v = 0x3Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE763u: /* STA ABX 9D 00 04 */
    c->pc = 0xE766u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE766u: /* LDA IMM A9 00 */
    c->pc = 0xE768u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE768u: /* STA ABX 9D A0 06 */
    c->pc = 0xE76Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE76Bu: /* STA ABX 9D 80 06 */
    c->pc = 0xE76Eu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE76Eu: /* LDX ZP A6 2B */
    c->pc = 0xE770u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE770u: /* CLC IMP 18 */
    c->pc = 0xE771u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE771u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE772u: /* LDY ZP A4 2B */
    c->pc = 0xE774u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE774u: /* LDA ABY B9 20 04 */
    c->pc = 0xE777u;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE777u: /* AND IMM 29 08 */
    c->pc = 0xE779u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE779u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE77Bu ^ 0xE7B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE77Bu; } return 1;
case 0xE77Bu: /* LDA ABY B9 00 04 */
    c->pc = 0xE77Eu;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE77Eu: /* TAY IMP A8 */
    c->pc = 0xE77Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE77Fu: /* LDA ABY B9 04 EB */
    c->pc = 0xE782u;
    ea = (uint16_t)(0xEB04u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xEB04u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE782u: /* STA ZP 85 00 */
    c->pc = 0xE784u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE784u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE786u ^ 0xE7B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE786u; } return 1;
case 0xE786u: /* JSR ABS 20 7F E9 */
    push(c, 0xE7u); push(c, 0x88u); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE789u: /* TXA IMP 8A */
    c->pc = 0xE78Au;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE78Au: /* PHA IMP 48 */
    c->pc = 0xE78Bu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE78Bu: /* LDA IMM A9 2B */
    c->pc = 0xE78Du;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE78Du: /* JSR ABS 20 51 C0 */
    push(c, 0xE7u); push(c, 0x8Fu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE790u: /* PLA IMP 68 */
    c->pc = 0xE791u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE791u: /* TAY IMP A8 */
    c->pc = 0xE792u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE792u: /* LDX ZP A6 2B */
    c->pc = 0xE794u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE794u: /* LDA ABX BD 00 01 */
    c->pc = 0xE797u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE797u: /* BNE REL D0 39 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE799u ^ 0xE7D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE799u; } return 1;
case 0xE799u: /* INC ABX FE 00 01 */
    c->pc = 0xE79Cu;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE79Cu: /* SEC IMP 38 */
    c->pc = 0xE79Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE79Du: /* LDA ABX BD C0 06 */
    c->pc = 0xE7A0u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE7A0u: /* SBC ZP E5 00 */
    c->pc = 0xE7A2u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE7A2u: /* STA ABX 9D C0 06 */
    c->pc = 0xE7A5u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7A5u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE7A7u ^ 0xE7A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE7A7u; } return 1;
case 0xE7A7u: /* BCS REL B0 2B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE7A9u ^ 0xE7D4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7D4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE7A9u; } return 1;
case 0xE7A9u: /* LDA IMM A9 00 */
    c->pc = 0xE7ABu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7ABu: /* STA ABX 9D C0 06 */
    c->pc = 0xE7AEu;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7AEu: /* SEC IMP 38 */
    c->pc = 0xE7AFu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE7AFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE7B0u: /* LDA IMM A9 2D */
    c->pc = 0xE7B2u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7B2u: /* JSR ABS 20 51 C0 */
    push(c, 0xE7u); push(c, 0xB4u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE7B5u: /* LDA ABX BD 20 04 */
    c->pc = 0xE7B8u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE7B8u: /* AND IMM 29 F2 */
    c->pc = 0xE7BAu;
    v = 0xF2u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7BAu: /* STA ABX 9D 20 04 */
    c->pc = 0xE7BDu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7BDu: /* LDA IMM A9 3B */
    c->pc = 0xE7BFu;
    v = 0x3Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7BFu: /* STA ABX 9D 00 04 */
    c->pc = 0xE7C2u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7C2u: /* LDA IMM A9 00 */
    c->pc = 0xE7C4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7C4u: /* STA ABX 9D A0 06 */
    c->pc = 0xE7C7u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7C7u: /* STA ABX 9D 80 06 */
    c->pc = 0xE7CAu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7CAu: /* STA ABX 9D E0 04 */
    c->pc = 0xE7CDu;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7CDu: /* STA ABX 9D C0 06 */
    c->pc = 0xE7D0u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7D0u: /* LDX ZP A6 2B */
    c->pc = 0xE7D2u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE7D2u: /* CLC IMP 18 */
    c->pc = 0xE7D3u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE7D3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE7D4u: /* LDA IMM A9 00 */
    c->pc = 0xE7D6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7D6u: /* STA ABY 99 20 04 */
    c->pc = 0xE7D9u;
    ea = (uint16_t)(0x0420u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE7D9u: /* BEQ REL F0 F5 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE7DBu ^ 0xE7D0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7D0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE7DBu; } return 1;
case 0xE7DBu: /* LDY ZP A4 2B */
    c->pc = 0xE7DDu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE7DDu: /* LDA ABY B9 20 04 */
    c->pc = 0xE7E0u;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE7E0u: /* AND IMM 29 08 */
    c->pc = 0xE7E2u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7E2u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE7E4u ^ 0xE819u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE819u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE7E4u; } return 1;
case 0xE7E4u: /* LDA ABY B9 00 04 */
    c->pc = 0xE7E7u;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE7E7u: /* TAY IMP A8 */
    c->pc = 0xE7E8u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE7E8u: /* LDA ABY B9 7C EB */
    c->pc = 0xE7EBu;
    ea = (uint16_t)(0xEB7Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xEB7Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE7EBu: /* STA ZP 85 00 */
    c->pc = 0xE7EDu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE7EDu: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE7EFu ^ 0xE819u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE819u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE7EFu; } return 1;
case 0xE7EFu: /* JSR ABS 20 7F E9 */
    push(c, 0xE7u); push(c, 0xF1u); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE7F2u: /* TXA IMP 8A */
    c->pc = 0xE7F3u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7F3u: /* PHA IMP 48 */
    c->pc = 0xE7F4u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE7F4u: /* LDA IMM A9 2B */
    c->pc = 0xE7F6u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE7F6u: /* JSR ABS 20 51 C0 */
    push(c, 0xE7u); push(c, 0xF8u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE7F9u: /* PLA IMP 68 */
    c->pc = 0xE7FAu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE7FAu: /* TAY IMP A8 */
    c->pc = 0xE7FBu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE7FBu: /* LDX ZP A6 2B */
    c->pc = 0xE7FDu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE7FDu: /* LDA ABX BD 00 01 */
    c->pc = 0xE800u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE800u: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE802u ^ 0xE835u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE835u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE802u; } return 1;
case 0xE802u: /* INC ABX FE 00 01 */
    c->pc = 0xE805u;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE805u: /* SEC IMP 38 */
    c->pc = 0xE806u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE806u: /* LDA ABX BD C0 06 */
    c->pc = 0xE809u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE809u: /* SBC ZP E5 00 */
    c->pc = 0xE80Bu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE80Bu: /* STA ABX 9D C0 06 */
    c->pc = 0xE80Eu;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE80Eu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE810u ^ 0xE812u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE812u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE810u; } return 1;
case 0xE810u: /* BCS REL B0 C2 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE812u ^ 0xE7D4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE7D4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE812u; } return 1;
case 0xE812u: /* LDA IMM A9 00 */
    c->pc = 0xE814u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE814u: /* STA ABX 9D C0 06 */
    c->pc = 0xE817u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE817u: /* SEC IMP 38 */
    c->pc = 0xE818u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE818u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE819u: /* LDA IMM A9 00 */
    c->pc = 0xE81Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE81Bu: /* STA ABX 9D 00 06 */
    c->pc = 0xE81Eu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE81Eu: /* STA ABX 9D 20 06 */
    c->pc = 0xE821u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE821u: /* STA ABX 9D 60 06 */
    c->pc = 0xE824u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE824u: /* LDA IMM A9 04 */
    c->pc = 0xE826u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE826u: /* STA ABX 9D 40 06 */
    c->pc = 0xE829u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE829u: /* LDA IMM A9 80 */
    c->pc = 0xE82Bu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE82Bu: /* STA ABX 9D 20 04 */
    c->pc = 0xE82Eu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE82Eu: /* LDA IMM A9 2D */
    c->pc = 0xE830u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE830u: /* JSR ABS 20 51 C0 */
    push(c, 0xE8u); push(c, 0x32u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE833u: /* LDX ZP A6 2B */
    c->pc = 0xE835u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE835u: /* CLC IMP 18 */
    c->pc = 0xE836u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE836u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE837u: /* LDY ZP A4 2B */
    c->pc = 0xE839u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE839u: /* LDA ABY B9 20 04 */
    c->pc = 0xE83Cu;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE83Cu: /* AND IMM 29 08 */
    c->pc = 0xE83Eu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE83Eu: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE840u ^ 0xE875u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE875u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE840u; } return 1;
case 0xE840u: /* LDA ABY B9 00 04 */
    c->pc = 0xE843u;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE843u: /* TAY IMP A8 */
    c->pc = 0xE844u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE844u: /* LDA ABY B9 F4 EB */
    c->pc = 0xE847u;
    ea = (uint16_t)(0xEBF4u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xEBF4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE847u: /* STA ZP 85 00 */
    c->pc = 0xE849u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE849u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE84Bu ^ 0xE875u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE875u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE84Bu; } return 1;
case 0xE84Bu: /* JSR ABS 20 7F E9 */
    push(c, 0xE8u); push(c, 0x4Du); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE84Eu: /* TXA IMP 8A */
    c->pc = 0xE84Fu;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE84Fu: /* PHA IMP 48 */
    c->pc = 0xE850u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE850u: /* LDA IMM A9 2B */
    c->pc = 0xE852u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE852u: /* JSR ABS 20 51 C0 */
    push(c, 0xE8u); push(c, 0x54u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE855u: /* PLA IMP 68 */
    c->pc = 0xE856u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE856u: /* TAY IMP A8 */
    c->pc = 0xE857u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE857u: /* LDX ZP A6 2B */
    c->pc = 0xE859u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE859u: /* LDA ABX BD 00 01 */
    c->pc = 0xE85Cu;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE85Cu: /* BNE REL D0 47 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE85Eu ^ 0xE8A5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8A5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE85Eu; } return 1;
case 0xE85Eu: /* INC ABX FE 00 01 */
    c->pc = 0xE861u;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE861u: /* SEC IMP 38 */
    c->pc = 0xE862u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE862u: /* LDA ABX BD C0 06 */
    c->pc = 0xE865u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE865u: /* SBC ZP E5 00 */
    c->pc = 0xE867u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE867u: /* STA ABX 9D C0 06 */
    c->pc = 0xE86Au;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE86Au: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE86Cu ^ 0xE86Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE86Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE86Cu; } return 1;
case 0xE86Cu: /* BCS REL B0 39 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE86Eu ^ 0xE8A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE86Eu; } return 1;
case 0xE86Eu: /* LDA IMM A9 00 */
    c->pc = 0xE870u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE870u: /* STA ABX 9D C0 06 */
    c->pc = 0xE873u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE873u: /* SEC IMP 38 */
    c->pc = 0xE874u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE874u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE875u: /* LDA IMM A9 3C */
    c->pc = 0xE877u;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE877u: /* STA ABX 9D 00 04 */
    c->pc = 0xE87Au;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE87Au: /* LDA ABX BD 20 04 */
    c->pc = 0xE87Du;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE87Du: /* AND IMM 29 C0 */
    c->pc = 0xE87Fu;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE87Fu: /* EOR IMM 49 40 */
    c->pc = 0xE881u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE881u: /* ORA IMM 09 04 */
    c->pc = 0xE883u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE883u: /* STA ABX 9D 20 04 */
    c->pc = 0xE886u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE886u: /* LDA IMM A9 00 */
    c->pc = 0xE888u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE888u: /* STA ABX 9D A0 06 */
    c->pc = 0xE88Bu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE88Bu: /* STA ABX 9D 80 06 */
    c->pc = 0xE88Eu;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE88Eu: /* STA ABX 9D 00 06 */
    c->pc = 0xE891u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE891u: /* STA ABX 9D 60 06 */
    c->pc = 0xE894u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE894u: /* LDA IMM A9 C0 */
    c->pc = 0xE896u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE896u: /* STA ABX 9D 20 06 */
    c->pc = 0xE899u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE899u: /* LDA IMM A9 04 */
    c->pc = 0xE89Bu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE89Bu: /* STA ABX 9D 40 06 */
    c->pc = 0xE89Eu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE89Eu: /* LDA IMM A9 2D */
    c->pc = 0xE8A0u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8A0u: /* JSR ABS 20 51 C0 */
    push(c, 0xE8u); push(c, 0xA2u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE8A3u: /* LDX ZP A6 2B */
    c->pc = 0xE8A5u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE8A5u: /* CLC IMP 18 */
    c->pc = 0xE8A6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE8A6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE8A7u: /* LDA IMM A9 00 */
    c->pc = 0xE8A9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8A9u: /* STA ABY 99 20 04 */
    c->pc = 0xE8ACu;
    ea = (uint16_t)(0x0420u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE8ACu: /* BEQ REL F0 F5 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE8AEu ^ 0xE8A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8AEu; } return 1;
case 0xE8AEu: /* LDY ZP A4 2B */
    c->pc = 0xE8B0u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE8B0u: /* LDA ABY B9 20 04 */
    c->pc = 0xE8B3u;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8B3u: /* AND IMM 29 08 */
    c->pc = 0xE8B5u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8B5u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE8B7u ^ 0xE8ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8B7u; } return 1;
case 0xE8B7u: /* LDA ABY B9 00 04 */
    c->pc = 0xE8BAu;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8BAu: /* TAY IMP A8 */
    c->pc = 0xE8BBu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE8BBu: /* LDA ABY B9 6C EC */
    c->pc = 0xE8BEu;
    ea = (uint16_t)(0xEC6Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xEC6Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8BEu: /* STA ZP 85 00 */
    c->pc = 0xE8C0u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE8C0u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE8C2u ^ 0xE8ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8C2u; } return 1;
case 0xE8C2u: /* JSR ABS 20 7F E9 */
    push(c, 0xE8u); push(c, 0xC4u); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE8C5u: /* TXA IMP 8A */
    c->pc = 0xE8C6u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8C6u: /* PHA IMP 48 */
    c->pc = 0xE8C7u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE8C7u: /* LDA IMM A9 2B */
    c->pc = 0xE8C9u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8C9u: /* JSR ABS 20 51 C0 */
    push(c, 0xE8u); push(c, 0xCBu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE8CCu: /* PLA IMP 68 */
    c->pc = 0xE8CDu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE8CDu: /* TAY IMP A8 */
    c->pc = 0xE8CEu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE8CEu: /* LDX ZP A6 2B */
    c->pc = 0xE8D0u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE8D0u: /* LDA ABX BD 00 01 */
    c->pc = 0xE8D3u;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8D3u: /* BNE REL D0 3C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE8D5u ^ 0xE911u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE911u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8D5u; } return 1;
case 0xE8D5u: /* INC ABX FE 00 01 */
    c->pc = 0xE8D8u;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE8D8u: /* SEC IMP 38 */
    c->pc = 0xE8D9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE8D9u: /* LDA ABX BD C0 06 */
    c->pc = 0xE8DCu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8DCu: /* SBC ZP E5 00 */
    c->pc = 0xE8DEu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE8DEu: /* STA ABX 9D C0 06 */
    c->pc = 0xE8E1u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE8E1u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE8E3u ^ 0xE8E5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8E5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8E3u; } return 1;
case 0xE8E3u: /* BCS REL B0 C2 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE8E5u ^ 0xE8A7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE8A7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8E5u; } return 1;
case 0xE8E5u: /* LDA IMM A9 00 */
    c->pc = 0xE8E7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8E7u: /* STA ABX 9D C0 06 */
    c->pc = 0xE8EAu;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE8EAu: /* SEC IMP 38 */
    c->pc = 0xE8EBu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE8EBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE8ECu: /* LDA ABX BD 00 04 */
    c->pc = 0xE8EFu;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8EFu: /* CMP IMM C9 2F */
    c->pc = 0xE8F1u;
    v = 0x2Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE8F1u: /* BEQ REL F0 1E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE8F3u ^ 0xE911u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE911u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8F3u; } return 1;
case 0xE8F3u: /* LDA ABX BD E0 04 */
    c->pc = 0xE8F6u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE8F6u: /* CMP IMM C9 02 */
    c->pc = 0xE8F8u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xE8F8u: /* BEQ REL F0 17 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE8FAu ^ 0xE911u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE911u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE8FAu; } return 1;
case 0xE8FAu: /* LDA IMM A9 05 */
    c->pc = 0xE8FCu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE8FCu: /* STA ABX 9D A0 06 */
    c->pc = 0xE8FFu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE8FFu: /* LDA IMM A9 00 */
    c->pc = 0xE901u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE901u: /* STA ABX 9D 80 06 */
    c->pc = 0xE904u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE904u: /* LDA IMM A9 38 */
    c->pc = 0xE906u;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE906u: /* STA ABX 9D C0 06 */
    c->pc = 0xE909u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE909u: /* INC ABX FE E0 04 */
    c->pc = 0xE90Cu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE90Cu: /* LDA IMM A9 2D */
    c->pc = 0xE90Eu;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE90Eu: /* JSR ABS 20 51 C0 */
    push(c, 0xE9u); push(c, 0x10u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE911u: /* LDX ZP A6 2B */
    c->pc = 0xE913u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE913u: /* CLC IMP 18 */
    c->pc = 0xE914u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE914u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE915u: /* LDY ZP A4 2B */
    c->pc = 0xE917u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xE917u: /* LDA ABY B9 20 04 */
    c->pc = 0xE91Au;
    ea = (uint16_t)(0x0420u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE91Au: /* AND IMM 29 08 */
    c->pc = 0xE91Cu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE91Cu: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE91Eu ^ 0xE953u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE953u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE91Eu; } return 1;
case 0xE91Eu: /* LDA ABY B9 00 04 */
    c->pc = 0xE921u;
    ea = (uint16_t)(0x0400u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE921u: /* TAY IMP A8 */
    c->pc = 0xE922u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE922u: /* LDA ABY B9 E4 EC */
    c->pc = 0xE925u;
    ea = (uint16_t)(0xECE4u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xECE4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE925u: /* STA ZP 85 00 */
    c->pc = 0xE927u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE927u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE929u ^ 0xE953u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE953u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE929u; } return 1;
case 0xE929u: /* JSR ABS 20 7F E9 */
    push(c, 0xE9u); push(c, 0x2Bu); c->pc = 0xE97Fu; c->cpu_cycles += 6u; return 1;
case 0xE92Cu: /* TXA IMP 8A */
    c->pc = 0xE92Du;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE92Du: /* PHA IMP 48 */
    c->pc = 0xE92Eu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE92Eu: /* LDA IMM A9 2B */
    c->pc = 0xE930u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE930u: /* JSR ABS 20 51 C0 */
    push(c, 0xE9u); push(c, 0x32u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE933u: /* PLA IMP 68 */
    c->pc = 0xE934u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xE934u: /* TAY IMP A8 */
    c->pc = 0xE935u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xE935u: /* LDX ZP A6 2B */
    c->pc = 0xE937u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE937u: /* LDA ABX BD 00 01 */
    c->pc = 0xE93Au;
    ea = (uint16_t)(0x0100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE93Au: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE93Cu ^ 0xE976u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE976u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE93Cu; } return 1;
case 0xE93Cu: /* INC ABX FE 00 01 */
    c->pc = 0xE93Fu;
    ea = (uint16_t)(0x0100u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xE93Fu: /* SEC IMP 38 */
    c->pc = 0xE940u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE940u: /* LDA ABX BD C0 06 */
    c->pc = 0xE943u;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE943u: /* SBC ZP E5 00 */
    c->pc = 0xE945u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xE945u: /* STA ABX 9D C0 06 */
    c->pc = 0xE948u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE948u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE94Au ^ 0xE94Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE94Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xE94Au; } return 1;
case 0xE94Au: /* BCS REL B0 2C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xE94Cu ^ 0xE978u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE978u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE94Cu; } return 1;
case 0xE94Cu: /* LDA IMM A9 00 */
    c->pc = 0xE94Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE94Eu: /* STA ABX 9D C0 06 */
    c->pc = 0xE951u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE951u: /* SEC IMP 38 */
    c->pc = 0xE952u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE952u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE953u: /* LDA IMM A9 03 */
    c->pc = 0xE955u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE955u: /* STA ABX 9D 40 06 */
    c->pc = 0xE958u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE958u: /* LDA IMM A9 B2 */
    c->pc = 0xE95Au;
    v = 0xB2u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE95Au: /* STA ABX 9D 60 06 */
    c->pc = 0xE95Du;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE95Du: /* LDA IMM A9 01 */
    c->pc = 0xE95Fu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE95Fu: /* STA ABX 9D 00 06 */
    c->pc = 0xE962u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE962u: /* LDA IMM A9 87 */
    c->pc = 0xE964u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE964u: /* STA ABX 9D 20 06 */
    c->pc = 0xE967u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE967u: /* LDA ABX BD 20 04 */
    c->pc = 0xE96Au;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xE96Au: /* AND IMM 29 F0 */
    c->pc = 0xE96Cu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE96Cu: /* STA ABX 9D 20 04 */
    c->pc = 0xE96Fu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE96Fu: /* LDA IMM A9 2D */
    c->pc = 0xE971u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE971u: /* JSR ABS 20 51 C0 */
    push(c, 0xE9u); push(c, 0x73u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xE974u: /* LDX ZP A6 2B */
    c->pc = 0xE976u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xE976u: /* CLC IMP 18 */
    c->pc = 0xE977u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xE977u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xE978u: /* LDA IMM A9 00 */
    c->pc = 0xE97Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xE97Au: /* STA ABY 99 20 04 */
    c->pc = 0xE97Du;
    ea = (uint16_t)(0x0420u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xE97Du: /* BEQ REL F0 F5 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xE97Fu ^ 0xE974u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE974u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE97Fu; } return 1;
case 0xE97Fu: /* LDA ZP A5 CB */
    c->pc = 0xE981u;
    ea = 0xCBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xE981u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xE983u ^ 0xE985u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xE985u; }
    else { c->cpu_cycles += 2u; c->pc = 0xE983u; } return 1;
case 0xE983u: /* ASL ZP 06 00 */
    c->pc = 0xE985u;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xE985u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEDD8u: /* LDA IMM A9 14 */
    c->pc = 0xEDDAu;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEDDAu: /* STA ABX 9D 50 01 */
    c->pc = 0xEDDDu;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEDDDu: /* JSR ABS 20 B3 EF */
    push(c, 0xEDu); push(c, 0xDFu); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xEDE0u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEDE2u ^ 0xEDE7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEDE7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEDE2u; } return 1;
case 0xEDE2u: /* LDA IMM A9 00 */
    c->pc = 0xEDE4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEDE4u: /* STA ABX 9D 50 01 */
    c->pc = 0xEDE7u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEDE7u: /* SEC IMP 38 */
    c->pc = 0xEDE8u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEDE8u: /* LDA ABX BD A0 04 */
    c->pc = 0xEDEBu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEDEBu: /* SBC IMM E9 04 */
    c->pc = 0xEDEDu;
    v = 0x04u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xEDEDu: /* STA ABX 9D 60 01 */
    c->pc = 0xEDF0u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEDF0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEDF1u: /* LDA IMM A9 18 */
    c->pc = 0xEDF3u;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEDF3u: /* STA ABX 9D 50 01 */
    c->pc = 0xEDF6u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEDF6u: /* JSR ABS 20 B3 EF */
    push(c, 0xEDu); push(c, 0xF8u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xEDF9u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEDFBu ^ 0xEE00u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE00u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEDFBu; } return 1;
case 0xEDFBu: /* LDA IMM A9 00 */
    c->pc = 0xEDFDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEDFDu: /* STA ABX 9D 50 01 */
    c->pc = 0xEE00u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE00u: /* SEC IMP 38 */
    c->pc = 0xEE01u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEE01u: /* LDA ABX BD A0 04 */
    c->pc = 0xEE04u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE04u: /* SBC IMM E9 08 */
    c->pc = 0xEE06u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xEE06u: /* STA ABX 9D 60 01 */
    c->pc = 0xEE09u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE09u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEE0Au: /* LDA IMM A9 18 */
    c->pc = 0xEE0Cu;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE0Cu: /* STA ABX 9D 50 01 */
    c->pc = 0xEE0Fu;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE0Fu: /* JSR ABS 20 B3 EF */
    push(c, 0xEEu); push(c, 0x11u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xEE12u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEE14u ^ 0xEE19u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE19u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE14u; } return 1;
case 0xEE14u: /* LDA IMM A9 00 */
    c->pc = 0xEE16u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE16u: /* STA ABX 9D 50 01 */
    c->pc = 0xEE19u;
    ea = (uint16_t)(0x0150u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE19u: /* SEC IMP 38 */
    c->pc = 0xEE1Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEE1Au: /* LDA ABX BD A0 04 */
    c->pc = 0xEE1Du;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE1Du: /* SBC IMM E9 08 */
    c->pc = 0xEE1Fu;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xEE1Fu: /* STA ABX 9D 60 01 */
    c->pc = 0xEE22u;
    ea = (uint16_t)(0x0160u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE22u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEE23u: /* JSR ABS 20 EE EF */
    push(c, 0xEEu); push(c, 0x25u); c->pc = 0xEFEEu; c->cpu_cycles += 6u; return 1;
case 0xEE26u: /* SEC IMP 38 */
    c->pc = 0xEE27u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEE27u: /* LDA ABX BD 00 04 */
    c->pc = 0xEE2Au;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE2Au: /* SBC IMM E9 40 */
    c->pc = 0xEE2Cu;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xEE2Cu: /* TAY IMP A8 */
    c->pc = 0xEE2Du;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xEE2Du: /* LDA ABY B9 79 AF */
    c->pc = 0xEE30u;
    ea = (uint16_t)(0xAF79u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAF79u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE30u: /* STA ZP 85 01 */
    c->pc = 0xEE32u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEE32u: /* LDA ABX BD 20 04 */
    c->pc = 0xEE35u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE35u: /* AND IMM 29 20 */
    c->pc = 0xEE37u;
    v = 0x20u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE37u: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEE39u ^ 0xEE54u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE54u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE39u; } return 1;
case 0xEE39u: /* LDY ZP A4 01 */
    c->pc = 0xEE3Bu;
    ea = 0x01u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xEE3Bu: /* LDA IMM A9 15 */
    c->pc = 0xEE3Du;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE3Du: /* CMP ABY D9 58 03 */
    c->pc = 0xEE40u;
    ea = (uint16_t)(0x0358u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0358u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE40u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEE42u ^ 0xEE49u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE49u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE42u; } return 1;
case 0xEE42u: /* LDA IMM A9 04 */
    c->pc = 0xEE44u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE44u: /* STA ABX 9D 20 06 */
    c->pc = 0xEE47u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE47u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEE49u ^ 0xEE4Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE4Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE49u; } return 1;
case 0xEE49u: /* LDA ZP A5 00 */
    c->pc = 0xEE4Bu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEE4Bu: /* CMP IMM C9 60 */
    c->pc = 0xEE4Du;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xEE4Du: /* BCS REL B0 29 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xEE4Fu ^ 0xEE78u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE78u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE4Fu; } return 1;
case 0xEE4Fu: /* LDA IMM A9 82 */
    c->pc = 0xEE51u;
    v = 0x82u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE51u: /* STA ABX 9D 20 04 */
    c->pc = 0xEE54u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE54u: /* LDA ABX BD 20 06 */
    c->pc = 0xEE57u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE57u: /* CMP IMM C9 04 */
    c->pc = 0xEE59u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xEE59u: /* BCS REL B0 1D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xEE5Bu ^ 0xEE78u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE78u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE5Bu; } return 1;
case 0xEE5Bu: /* LDA ABX BD E0 04 */
    c->pc = 0xEE5Eu;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE5Eu: /* AND IMM 29 03 */
    c->pc = 0xEE60u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE60u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEE62u ^ 0xEE75u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEE75u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE62u; } return 1;
case 0xEE62u: /* STA ABX 9D E0 04 */
    c->pc = 0xEE65u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE65u: /* LDA ABX BD 20 06 */
    c->pc = 0xEE68u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE68u: /* INC ABX FE 20 06 */
    c->pc = 0xEE6Bu;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xEE6Bu: /* ASL IMP 0A */
    c->pc = 0xEE6Cu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE6Cu: /* ASL IMP 0A */
    c->pc = 0xEE6Du;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE6Du: /* TAY IMP A8 */
    c->pc = 0xEE6Eu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xEE6Eu: /* LDX ZP A6 01 */
    c->pc = 0xEE70u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xEE70u: /* JSR ABS 20 4C AF */
    push(c, 0xEEu); push(c, 0x72u); c->pc = 0xAF4Cu; c->cpu_cycles += 6u; return 1;
case 0xEE73u: /* LDX ZP A6 2B */
    c->pc = 0xEE75u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xEE75u: /* INC ABX FE E0 04 */
    c->pc = 0xEE78u;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xEE78u: /* JSR ABS 20 B3 EF */
    push(c, 0xEEu); push(c, 0x7Au); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xEE7Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEE7Cu: /* LDA ABX BD 20 06 */
    c->pc = 0xEE7Fu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEE7Fu: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEE81u ^ 0xEEA3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEA3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE81u; } return 1;
case 0xEE81u: /* LDA IMM A9 6E */
    c->pc = 0xEE83u;
    v = 0x6Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE83u: /* STA ABX 9D E0 04 */
    c->pc = 0xEE86u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE86u: /* INC ABX FE 20 06 */
    c->pc = 0xEE89u;
    ea = (uint16_t)(0x0620u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xEE89u: /* LDA IMM A9 00 */
    c->pc = 0xEE8Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE8Bu: /* STA ABX 9D 20 04 */
    c->pc = 0xEE8Eu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE8Eu: /* LDA IMM A9 01 */
    c->pc = 0xEE90u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE90u: /* STA ZP 85 01 */
    c->pc = 0xEE92u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEE92u: /* LDA IMM A9 23 */
    c->pc = 0xEE94u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE94u: /* JSR ABS 20 CF 96 */
    push(c, 0xEEu); push(c, 0x96u); c->pc = 0x96CFu; c->cpu_cycles += 6u; return 1;
case 0xEE97u: /* LDA IMM A9 83 */
    c->pc = 0xEE99u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEE99u: /* STA ABX 9D 20 04 */
    c->pc = 0xEE9Cu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEE9Cu: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xEE9Eu ^ 0xEEA3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEA3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEE9Eu; } return 1;
case 0xEE9Eu: /* LDA IMM A9 26 */
    c->pc = 0xEEA0u;
    v = 0x26u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEA0u: /* JSR ABS 20 59 F1 */
    push(c, 0xEEu); push(c, 0xA2u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xEEA3u: /* JSR ABS 20 B3 EF */
    push(c, 0xEEu); push(c, 0xA5u); c->pc = 0xEFB3u; c->cpu_cycles += 6u; return 1;
case 0xEEA6u: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEEA8u ^ 0xEEB4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEB4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEEA8u; } return 1;
case 0xEEA8u: /* LDA IMM A9 23 */
    c->pc = 0xEEAAu;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEAAu: /* JSR ABS 20 10 F0 */
    push(c, 0xEEu); push(c, 0xACu); c->pc = 0xF010u; c->cpu_cycles += 6u; return 1;
case 0xEEADu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEEAFu ^ 0xEEB4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEB4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEEAFu; } return 1;
case 0xEEAFu: /* LDA IMM A9 28 */
    c->pc = 0xEEB1u;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEB1u: /* JSR ABS 20 59 F1 */
    push(c, 0xEEu); push(c, 0xB3u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xEEB4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEEBAu: /* LDA IMM A9 00 */
    c->pc = 0xEEBCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEBCu: /* STA ZP 85 4E */
    c->pc = 0xEEBEu;
    ea = 0x4Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEEBEu: /* LDA ABX BD 20 04 */
    c->pc = 0xEEC1u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEEC1u: /* AND IMM 29 03 */
    c->pc = 0xEEC3u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEC3u: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEEC5u ^ 0xEEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEEC5u; } return 1;
case 0xEEC5u: /* PHA IMP 48 */
    c->pc = 0xEEC6u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEEC6u: /* AND IMM 29 01 */
    c->pc = 0xEEC8u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEC8u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEECAu ^ 0xEECDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEECDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEECAu; } return 1;
case 0xEECAu: /* JSR ABS 20 5A E5 */
    push(c, 0xEEu); push(c, 0xCCu); c->pc = 0xE55Au; c->cpu_cycles += 6u; return 1;
case 0xEECDu: /* PLA IMP 68 */
    c->pc = 0xEECEu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xEECEu: /* AND IMM 29 02 */
    c->pc = 0xEED0u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEED0u: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEED2u ^ 0xEEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEED2u; } return 1;
case 0xEED2u: /* JSR ABS 20 EC E5 */
    push(c, 0xEEu); push(c, 0xD4u); c->pc = 0xE5ECu; c->cpu_cycles += 6u; return 1;
case 0xEED5u: /* BCC REL 90 18 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEED7u ^ 0xEEEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEEEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEED7u; } return 1;
case 0xEED7u: /* JSR ABS 20 5A F2 */
    push(c, 0xEEu); push(c, 0xD9u); c->pc = 0xF25Au; c->cpu_cycles += 6u; return 1;
case 0xEEDAu: /* LDA IMM A9 06 */
    c->pc = 0xEEDCu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEDCu: /* STA ABX 9D 00 04 */
    c->pc = 0xEEDFu;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEEDFu: /* LDA IMM A9 80 */
    c->pc = 0xEEE1u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEE1u: /* STA ABX 9D 20 04 */
    c->pc = 0xEEE4u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEEE4u: /* LDA IMM A9 00 */
    c->pc = 0xEEE6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEEE6u: /* STA ABX 9D 80 06 */
    c->pc = 0xEEE9u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEEE9u: /* STA ABX 9D A0 06 */
    c->pc = 0xEEECu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEEECu: /* JMP ABS 4C 8F EF */
    c->pc = 0xEF8Fu; c->cpu_cycles += 3u; return 1;
case 0xEEEFu: /* SEC IMP 38 */
    c->pc = 0xEEF0u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEEF0u: /* LDA ABX BD C0 04 */
    c->pc = 0xEEF3u;
    ea = (uint16_t)(0x04C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEEF3u: /* SBC ABX FD 60 06 */
    c->pc = 0xEEF6u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEEF6u: /* STA ABX 9D C0 04 */
    c->pc = 0xEEF9u;
    ea = (uint16_t)(0x04C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEEF9u: /* LDA ABX BD A0 04 */
    c->pc = 0xEEFCu;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEEFCu: /* SBC ABX FD 40 06 */
    c->pc = 0xEEFFu;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEEFFu: /* STA ABX 9D A0 04 */
    c->pc = 0xEF02u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF02u: /* CMP IMM C9 F0 */
    c->pc = 0xEF04u;
    v = 0xF0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xEF04u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEF06u ^ 0xEF09u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF09u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF06u; } return 1;
case 0xEF06u: /* JMP ABS 4C 8C EF */
    c->pc = 0xEF8Cu; c->cpu_cycles += 3u; return 1;
case 0xEF09u: /* LDA ABX BD 20 04 */
    c->pc = 0xEF0Cu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF0Cu: /* AND IMM 29 04 */
    c->pc = 0xEF0Eu;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEF0Eu: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEF10u ^ 0xEF21u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF21u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF10u; } return 1;
case 0xEF10u: /* CLC IMP 18 */
    c->pc = 0xEF11u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF11u: /* LDA ABX BD 60 06 */
    c->pc = 0xEF14u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF14u: /* SBC ZP E5 30 */
    c->pc = 0xEF16u;
    ea = 0x30u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEF16u: /* STA ABX 9D 60 06 */
    c->pc = 0xEF19u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF19u: /* LDA ABX BD 40 06 */
    c->pc = 0xEF1Cu;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF1Cu: /* SBC ZP E5 31 */
    c->pc = 0xEF1Eu;
    ea = 0x31u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEF1Eu: /* STA ABX 9D 40 06 */
    c->pc = 0xEF21u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF21u: /* LDA ABX BD 20 04 */
    c->pc = 0xEF24u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF24u: /* AND IMM 29 40 */
    c->pc = 0xEF26u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEF26u: /* BNE REL D0 32 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEF28u ^ 0xEF5Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF5Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF28u; } return 1;
case 0xEF28u: /* SEC IMP 38 */
    c->pc = 0xEF29u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF29u: /* LDA ABX BD 80 04 */
    c->pc = 0xEF2Cu;
    ea = (uint16_t)(0x0480u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0480u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF2Cu: /* SBC ABX FD 20 06 */
    c->pc = 0xEF2Fu;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF2Fu: /* STA ABX 9D 80 04 */
    c->pc = 0xEF32u;
    ea = (uint16_t)(0x0480u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF32u: /* LDA ABX BD 60 04 */
    c->pc = 0xEF35u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF35u: /* SBC ABX FD 00 06 */
    c->pc = 0xEF38u;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF38u: /* STA ABX 9D 60 04 */
    c->pc = 0xEF3Bu;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF3Bu: /* LDA ABX BD 40 04 */
    c->pc = 0xEF3Eu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF3Eu: /* SBC IMM E9 00 */
    c->pc = 0xEF40u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xEF40u: /* STA ABX 9D 40 04 */
    c->pc = 0xEF43u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF43u: /* SEC IMP 38 */
    c->pc = 0xEF44u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF44u: /* LDA ABX BD 60 04 */
    c->pc = 0xEF47u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF47u: /* SBC ZP E5 1F */
    c->pc = 0xEF49u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEF49u: /* STA ZP 85 08 */
    c->pc = 0xEF4Bu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEF4Bu: /* LDA ABX BD 40 04 */
    c->pc = 0xEF4Eu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF4Eu: /* SBC ZP E5 20 */
    c->pc = 0xEF50u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEF50u: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEF52u ^ 0xEF8Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF8Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF52u; } return 1;
case 0xEF52u: /* LDA ZP A5 08 */
    c->pc = 0xEF54u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEF54u: /* CMP IMM C9 08 */
    c->pc = 0xEF56u;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xEF56u: /* BCC REL 90 34 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEF58u ^ 0xEF8Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF8Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF58u; } return 1;
case 0xEF58u: /* BCS REL B0 30 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xEF5Au ^ 0xEF8Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF8Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF5Au; } return 1;
case 0xEF5Au: /* CLC IMP 18 */
    c->pc = 0xEF5Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF5Bu: /* LDA ABX BD 80 04 */
    c->pc = 0xEF5Eu;
    ea = (uint16_t)(0x0480u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0480u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF5Eu: /* ADC ABX 7D 20 06 */
    c->pc = 0xEF61u;
    ea = (uint16_t)(0x0620u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x0620u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF61u: /* STA ABX 9D 80 04 */
    c->pc = 0xEF64u;
    ea = (uint16_t)(0x0480u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF64u: /* LDA ABX BD 60 04 */
    c->pc = 0xEF67u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF67u: /* ADC ABX 7D 00 06 */
    c->pc = 0xEF6Au;
    ea = (uint16_t)(0x0600u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x0600u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF6Au: /* STA ABX 9D 60 04 */
    c->pc = 0xEF6Du;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF6Du: /* LDA ABX BD 40 04 */
    c->pc = 0xEF70u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF70u: /* ADC IMM 69 00 */
    c->pc = 0xEF72u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xEF72u: /* STA ABX 9D 40 04 */
    c->pc = 0xEF75u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF75u: /* SEC IMP 38 */
    c->pc = 0xEF76u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF76u: /* LDA ABX BD 60 04 */
    c->pc = 0xEF79u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF79u: /* SBC ZP E5 1F */
    c->pc = 0xEF7Bu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEF7Bu: /* STA ZP 85 08 */
    c->pc = 0xEF7Du;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEF7Du: /* LDA ABX BD 40 04 */
    c->pc = 0xEF80u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEF80u: /* SBC ZP E5 20 */
    c->pc = 0xEF82u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEF82u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEF84u ^ 0xEF8Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF8Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF84u; } return 1;
case 0xEF84u: /* LDA ZP A5 08 */
    c->pc = 0xEF86u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEF86u: /* CMP IMM C9 F8 */
    c->pc = 0xEF88u;
    v = 0xF8u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xEF88u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xEF8Au ^ 0xEF8Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF8Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF8Au; } return 1;
case 0xEF8Au: /* CLC IMP 18 */
    c->pc = 0xEF8Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF8Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEF8Cu: /* LSR ABX 5E 20 04 */
    c->pc = 0xEF8Fu;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xEF8Fu: /* CPX IMM E0 10 */
    c->pc = 0xEF91u;
    v = 0x10u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xEF91u: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEF93u ^ 0xEF9Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF9Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF93u; } return 1;
case 0xEF93u: /* LDA ZP A5 4E */
    c->pc = 0xEF95u;
    ea = 0x4Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEF95u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEF97u ^ 0xEF9Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF9Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEF97u; } return 1;
case 0xEF97u: /* LDA IMM A9 FF */
    c->pc = 0xEF99u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEF99u: /* STA ABX 9D F0 00 */
    c->pc = 0xEF9Cu;
    ea = (uint16_t)(0x00F0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEF9Cu: /* SEC IMP 38 */
    c->pc = 0xEF9Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEF9Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEF9Eu: /* LDA IMM A9 FF */
    c->pc = 0xEFA0u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFA0u: /* STA ABX 9D 20 01 */
    c->pc = 0xEFA3u;
    ea = (uint16_t)(0x0120u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFA3u: /* LDA ABX BD 10 01 */
    c->pc = 0xEFA6u;
    ea = (uint16_t)(0x0110u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0110u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEFA6u: /* TAY IMP A8 */
    c->pc = 0xEFA7u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xEFA7u: /* LDA ABX BD C0 06 */
    c->pc = 0xEFAAu;
    ea = (uint16_t)(0x06C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEFAAu: /* STA ABY 99 40 01 */
    c->pc = 0xEFADu;
    ea = (uint16_t)(0x0140u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFADu: /* SEC IMP 38 */
    c->pc = 0xEFAEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEFAEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEFAFu: /* LDA IMM A9 01 */
    c->pc = 0xEFB1u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFB1u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEFB3u ^ 0xEFB5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEFB5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFB3u; } return 1;
case 0xEFB3u: /* LDA IMM A9 00 */
    c->pc = 0xEFB5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFB5u: /* STA ZP 85 4E */
    c->pc = 0xEFB7u;
    ea = 0x4Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEFB7u: /* LDA ABX BD 20 04 */
    c->pc = 0xEFBAu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEFBAu: /* AND IMM 29 03 */
    c->pc = 0xEFBCu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFBCu: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEFBEu ^ 0xEFE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEFE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFBEu; } return 1;
case 0xEFBEu: /* PHA IMP 48 */
    c->pc = 0xEFBFu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEFBFu: /* AND IMM 29 01 */
    c->pc = 0xEFC1u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFC1u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEFC3u ^ 0xEFC6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEFC6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFC3u; } return 1;
case 0xEFC3u: /* JSR ABS 20 5A E5 */
    push(c, 0xEFu); push(c, 0xC5u); c->pc = 0xE55Au; c->cpu_cycles += 6u; return 1;
case 0xEFC6u: /* PLA IMP 68 */
    c->pc = 0xEFC7u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xEFC7u: /* AND IMM 29 02 */
    c->pc = 0xEFC9u;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFC9u: /* BEQ REL F0 1D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xEFCBu ^ 0xEFE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEFE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFCBu; } return 1;
case 0xEFCBu: /* JSR ABS 20 EC E5 */
    push(c, 0xEFu); push(c, 0xCDu); c->pc = 0xE5ECu; c->cpu_cycles += 6u; return 1;
case 0xEFCEu: /* BCC REL 90 18 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xEFD0u ^ 0xEFE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEFE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFD0u; } return 1;
case 0xEFD0u: /* JSR ABS 20 5A F2 */
    push(c, 0xEFu); push(c, 0xD2u); c->pc = 0xF25Au; c->cpu_cycles += 6u; return 1;
case 0xEFD3u: /* LDA IMM A9 06 */
    c->pc = 0xEFD5u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFD5u: /* STA ABX 9D 00 04 */
    c->pc = 0xEFD8u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFD8u: /* LDA IMM A9 80 */
    c->pc = 0xEFDAu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFDAu: /* STA ABX 9D 20 04 */
    c->pc = 0xEFDDu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFDDu: /* LDA IMM A9 00 */
    c->pc = 0xEFDFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFDFu: /* STA ABX 9D 80 06 */
    c->pc = 0xEFE2u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFE2u: /* STA ABX 9D A0 06 */
    c->pc = 0xEFE5u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFE5u: /* JMP ABS 4C 8F EF */
    c->pc = 0xEF8Fu; c->cpu_cycles += 3u; return 1;
case 0xEFE8u: /* LDA ZP A5 2F */
    c->pc = 0xEFEAu;
    ea = 0x2Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEFEAu: /* BNE REL D0 A0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xEFECu ^ 0xEF8Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xEF8Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFECu; } return 1;
case 0xEFECu: /* CLC IMP 18 */
    c->pc = 0xEFEDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEFEDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xEFEEu: /* LDA ABX BD 20 04 */
    c->pc = 0xEFF1u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xEFF1u: /* AND IMM 29 BF */
    c->pc = 0xEFF3u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xEFF3u: /* STA ABX 9D 20 04 */
    c->pc = 0xEFF6u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xEFF6u: /* SEC IMP 38 */
    c->pc = 0xEFF7u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xEFF7u: /* LDA ZP A5 2E */
    c->pc = 0xEFF9u;
    ea = 0x2Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEFF9u: /* SBC ZP E5 2D */
    c->pc = 0xEFFBu;
    ea = 0x2Du;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xEFFBu: /* STA ZP 85 00 */
    c->pc = 0xEFFDu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xEFFDu: /* BCS REL B0 10 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xEFFFu ^ 0xF00Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF00Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xEFFFu; } return 1;
case 0xEFFFu: /* LDA ZP A5 00 */
    c->pc = 0xF001u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF001u: /* EOR IMM 49 FF */
    c->pc = 0xF003u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF003u: /* ADC IMM 69 01 */
    c->pc = 0xF005u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF005u: /* STA ZP 85 00 */
    c->pc = 0xF007u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF007u: /* LDA IMM A9 40 */
    c->pc = 0xF009u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF009u: /* ORA ABX 1D 20 04 */
    c->pc = 0xF00Cu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF00Cu: /* STA ABX 9D 20 04 */
    c->pc = 0xF00Fu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF00Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF010u: /* STA ZP 85 00 */
    c->pc = 0xF012u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF012u: /* LDY IMM A0 0F */
    c->pc = 0xF014u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xF014u: /* LDA ZP A5 00 */
    c->pc = 0xF016u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF016u: /* CMP ABY D9 10 04 */
    c->pc = 0xF019u;
    ea = (uint16_t)(0x0410u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0410u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF019u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF01Bu ^ 0xF020u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF020u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF01Bu; } return 1;
case 0xF01Bu: /* DEY IMP 88 */
    c->pc = 0xF01Cu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xF01Cu: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xF01Eu ^ 0xF016u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF016u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF01Eu; } return 1;
case 0xF01Eu: /* SEC IMP 38 */
    c->pc = 0xF01Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF01Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF020u: /* LDA ABY B9 30 04 */
    c->pc = 0xF023u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF023u: /* BMI REL 30 05 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xF025u ^ 0xF02Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF02Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xF025u; } return 1;
case 0xF025u: /* DEY IMP 88 */
    c->pc = 0xF026u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xF026u: /* BPL REL 10 EC */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xF028u ^ 0xF014u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF014u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF028u; } return 1;
case 0xF028u: /* SEC IMP 38 */
    c->pc = 0xF029u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF029u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF02Au: /* CLC IMP 18 */
    c->pc = 0xF02Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF02Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF02Cu: /* LDA IMM A9 00 */
    c->pc = 0xF02Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF02Eu: /* STA ZP 85 0B */
    c->pc = 0xF030u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF030u: /* LDA ABX BD 40 06 */
    c->pc = 0xF033u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF033u: /* PHP IMP 08 */
    c->pc = 0xF034u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xF034u: /* BPL REL 10 09 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xF036u ^ 0xF03Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF03Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xF036u; } return 1;
case 0xF036u: /* CLC IMP 18 */
    c->pc = 0xF037u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF037u: /* LDA ABX BD A0 04 */
    c->pc = 0xF03Au;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF03Au: /* ADC ZP 65 02 */
    c->pc = 0xF03Cu;
    ea = 0x02u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF03Cu: /* JMP ABS 4C 45 F0 */
    c->pc = 0xF045u; c->cpu_cycles += 3u; return 1;
case 0xF03Fu: /* SEC IMP 38 */
    c->pc = 0xF040u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF040u: /* LDA ABX BD A0 04 */
    c->pc = 0xF043u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF043u: /* SBC ZP E5 02 */
    c->pc = 0xF045u;
    ea = 0x02u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF045u: /* STA ZP 85 0A */
    c->pc = 0xF047u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF047u: /* CLC IMP 18 */
    c->pc = 0xF048u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF048u: /* LDA ABX BD 60 04 */
    c->pc = 0xF04Bu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF04Bu: /* ADC ZP 65 01 */
    c->pc = 0xF04Du;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF04Du: /* STA ZP 85 08 */
    c->pc = 0xF04Fu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF04Fu: /* LDA ABX BD 40 04 */
    c->pc = 0xF052u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF052u: /* ADC IMM 69 00 */
    c->pc = 0xF054u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF054u: /* STA ZP 85 09 */
    c->pc = 0xF056u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF056u: /* CPX IMM E0 0F */
    c->pc = 0xF058u;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xF058u: /* BCS REL B0 06 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF05Au ^ 0xF060u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF060u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF05Au; } return 1;
case 0xF05Au: /* JSR ABS 20 A2 CB */
    push(c, 0xF0u); push(c, 0x5Cu); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xF05Du: /* JMP ABS 4C 63 F0 */
    c->pc = 0xF063u; c->cpu_cycles += 3u; return 1;
case 0xF060u: /* JSR ABS 20 C3 CB */
    push(c, 0xF0u); push(c, 0x62u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xF063u: /* LDY ZP A4 00 */
    c->pc = 0xF065u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xF065u: /* LDA ABY B9 50 F1 */
    c->pc = 0xF068u;
    ea = (uint16_t)(0xF150u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF150u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF068u: /* STA ZP 85 02 */
    c->pc = 0xF06Au;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF06Au: /* LDX ZP A6 2B */
    c->pc = 0xF06Cu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF06Cu: /* SEC IMP 38 */
    c->pc = 0xF06Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF06Du: /* LDA ABX BD 60 04 */
    c->pc = 0xF070u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF070u: /* SBC ZP E5 01 */
    c->pc = 0xF072u;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF072u: /* STA ZP 85 08 */
    c->pc = 0xF074u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF074u: /* LDA ABX BD 40 04 */
    c->pc = 0xF077u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF077u: /* SBC IMM E9 00 */
    c->pc = 0xF079u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF079u: /* STA ZP 85 09 */
    c->pc = 0xF07Bu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF07Bu: /* CPX IMM E0 0F */
    c->pc = 0xF07Du;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xF07Du: /* BCS REL B0 06 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF07Fu ^ 0xF085u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF085u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF07Fu; } return 1;
case 0xF07Fu: /* JSR ABS 20 A2 CB */
    push(c, 0xF0u); push(c, 0x81u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xF082u: /* JMP ABS 4C 88 F0 */
    c->pc = 0xF088u; c->cpu_cycles += 3u; return 1;
case 0xF085u: /* JSR ABS 20 C3 CB */
    push(c, 0xF0u); push(c, 0x87u); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xF088u: /* LDX ZP A6 2B */
    c->pc = 0xF08Au;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF08Au: /* LDY ZP A4 00 */
    c->pc = 0xF08Cu;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xF08Cu: /* LDA ABY B9 50 F1 */
    c->pc = 0xF08Fu;
    ea = (uint16_t)(0xF150u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF150u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF08Fu: /* ORA ZP 05 02 */
    c->pc = 0xF091u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF091u: /* STA ZP 85 00 */
    c->pc = 0xF093u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF093u: /* BEQ REL F0 38 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF095u ^ 0xF0CDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF0CDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xF095u; } return 1;
case 0xF095u: /* PLP IMP 28 */
    c->pc = 0xF096u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xF096u: /* BMI REL 30 0D */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xF098u ^ 0xF0A5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF0A5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF098u; } return 1;
case 0xF098u: /* LDA ZP A5 0A */
    c->pc = 0xF09Au;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF09Au: /* AND IMM 29 0F */
    c->pc = 0xF09Cu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF09Cu: /* EOR IMM 49 0F */
    c->pc = 0xF09Eu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF09Eu: /* SEC IMP 38 */
    c->pc = 0xF09Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF09Fu: /* ADC ABX 7D A0 04 */
    c->pc = 0xF0A2u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0A2u: /* JMP ABS 4C B3 F0 */
    c->pc = 0xF0B3u; c->cpu_cycles += 3u; return 1;
case 0xF0A5u: /* LDA ABX BD A0 04 */
    c->pc = 0xF0A8u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0A8u: /* PHA IMP 48 */
    c->pc = 0xF0A9u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0A9u: /* LDA ZP A5 0A */
    c->pc = 0xF0ABu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0ABu: /* AND IMM 29 0F */
    c->pc = 0xF0ADu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0ADu: /* STA ZP 85 02 */
    c->pc = 0xF0AFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0AFu: /* PLA IMP 68 */
    c->pc = 0xF0B0u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xF0B0u: /* SEC IMP 38 */
    c->pc = 0xF0B1u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF0B1u: /* SBC ZP E5 02 */
    c->pc = 0xF0B3u;
    ea = 0x02u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF0B3u: /* STA ABX 9D A0 04 */
    c->pc = 0xF0B6u;
    ea = (uint16_t)(0x04A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF0B6u: /* LDA IMM A9 00 */
    c->pc = 0xF0B8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0B8u: /* STA ABX 9D C0 04 */
    c->pc = 0xF0BBu;
    ea = (uint16_t)(0x04C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF0BBu: /* LDA ABX BD 20 04 */
    c->pc = 0xF0BEu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0BEu: /* AND IMM 29 04 */
    c->pc = 0xF0C0u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0C0u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF0C2u ^ 0xF0CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF0CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xF0C2u; } return 1;
case 0xF0C2u: /* LDA IMM A9 C0 */
    c->pc = 0xF0C4u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0C4u: /* STA ABX 9D 60 06 */
    c->pc = 0xF0C7u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF0C7u: /* LDA IMM A9 FF */
    c->pc = 0xF0C9u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0C9u: /* STA ABX 9D 40 06 */
    c->pc = 0xF0CCu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF0CCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF0CDu: /* PLP IMP 28 */
    c->pc = 0xF0CEu;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xF0CEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF0CFu: /* LDA ABX BD A0 04 */
    c->pc = 0xF0D2u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0D2u: /* STA ZP 85 0A */
    c->pc = 0xF0D4u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0D4u: /* LDA IMM A9 00 */
    c->pc = 0xF0D6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0D6u: /* STA ZP 85 0B */
    c->pc = 0xF0D8u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0D8u: /* LDA ABX BD 20 04 */
    c->pc = 0xF0DBu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0DBu: /* AND IMM 29 40 */
    c->pc = 0xF0DDu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF0DDu: /* PHP IMP 08 */
    c->pc = 0xF0DEu;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xF0DEu: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF0E0u ^ 0xF0F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF0F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF0E0u; } return 1;
case 0xF0E0u: /* SEC IMP 38 */
    c->pc = 0xF0E1u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF0E1u: /* LDA ABX BD 60 04 */
    c->pc = 0xF0E4u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0E4u: /* ADC ZP 65 01 */
    c->pc = 0xF0E6u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF0E6u: /* STA ZP 85 08 */
    c->pc = 0xF0E8u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0E8u: /* LDA ABX BD 40 04 */
    c->pc = 0xF0EBu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0EBu: /* ADC IMM 69 00 */
    c->pc = 0xF0EDu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF0EDu: /* JMP ABS 4C FD F0 */
    c->pc = 0xF0FDu; c->cpu_cycles += 3u; return 1;
case 0xF0F0u: /* CLC IMP 18 */
    c->pc = 0xF0F1u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF0F1u: /* LDA ABX BD 60 04 */
    c->pc = 0xF0F4u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0F4u: /* SBC ZP E5 01 */
    c->pc = 0xF0F6u;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF0F6u: /* STA ZP 85 08 */
    c->pc = 0xF0F8u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0F8u: /* LDA ABX BD 40 04 */
    c->pc = 0xF0FBu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF0FBu: /* SBC IMM E9 00 */
    c->pc = 0xF0FDu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF0FDu: /* STA ZP 85 09 */
    c->pc = 0xF0FFu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF0FFu: /* CPX IMM E0 0F */
    c->pc = 0xF101u;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xF101u: /* BCS REL B0 06 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF103u ^ 0xF109u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF109u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF103u; } return 1;
case 0xF103u: /* JSR ABS 20 A2 CB */
    push(c, 0xF1u); push(c, 0x05u); c->pc = 0xCBA2u; c->cpu_cycles += 6u; return 1;
case 0xF106u: /* JMP ABS 4C 0C F1 */
    c->pc = 0xF10Cu; c->cpu_cycles += 3u; return 1;
case 0xF109u: /* JSR ABS 20 C3 CB */
    push(c, 0xF1u); push(c, 0x0Bu); c->pc = 0xCBC3u; c->cpu_cycles += 6u; return 1;
case 0xF10Cu: /* LDX ZP A6 2B */
    c->pc = 0xF10Eu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF10Eu: /* LDY ZP A4 00 */
    c->pc = 0xF110u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xF110u: /* LDA ABY B9 50 F1 */
    c->pc = 0xF113u;
    ea = (uint16_t)(0xF150u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xF150u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF113u: /* STA ZP 85 03 */
    c->pc = 0xF115u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF115u: /* BEQ REL F0 35 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF117u ^ 0xF14Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF14Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xF117u; } return 1;
case 0xF117u: /* PLP IMP 28 */
    c->pc = 0xF118u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xF118u: /* BEQ REL F0 1A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF11Au ^ 0xF134u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF134u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF11Au; } return 1;
case 0xF11Au: /* LDA ZP A5 08 */
    c->pc = 0xF11Cu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF11Cu: /* AND IMM 29 0F */
    c->pc = 0xF11Eu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF11Eu: /* STA ZP 85 00 */
    c->pc = 0xF120u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF120u: /* SEC IMP 38 */
    c->pc = 0xF121u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF121u: /* LDA ABX BD 60 04 */
    c->pc = 0xF124u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF124u: /* SBC ZP E5 00 */
    c->pc = 0xF126u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF126u: /* STA ABX 9D 60 04 */
    c->pc = 0xF129u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF129u: /* LDA ABX BD 40 04 */
    c->pc = 0xF12Cu;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF12Cu: /* SBC IMM E9 00 */
    c->pc = 0xF12Eu;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF12Eu: /* STA ABX 9D 40 04 */
    c->pc = 0xF131u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF131u: /* JMP ABS 4C 2C F0 */
    c->pc = 0xF02Cu; c->cpu_cycles += 3u; return 1;
case 0xF134u: /* LDA ZP A5 08 */
    c->pc = 0xF136u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF136u: /* AND IMM 29 0F */
    c->pc = 0xF138u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF138u: /* EOR IMM 49 0F */
    c->pc = 0xF13Au;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF13Au: /* SEC IMP 38 */
    c->pc = 0xF13Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF13Bu: /* ADC ABX 7D 60 04 */
    c->pc = 0xF13Eu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF13Eu: /* STA ABX 9D 60 04 */
    c->pc = 0xF141u;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF141u: /* LDA ABX BD 40 04 */
    c->pc = 0xF144u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF144u: /* ADC IMM 69 00 */
    c->pc = 0xF146u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF146u: /* STA ABX 9D 40 04 */
    c->pc = 0xF149u;
    ea = (uint16_t)(0x0440u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF149u: /* JMP ABS 4C 2C F0 */
    c->pc = 0xF02Cu; c->cpu_cycles += 3u; return 1;
case 0xF14Cu: /* PLP IMP 28 */
    c->pc = 0xF14Du;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xF14Du: /* JMP ABS 4C 2C F0 */
    c->pc = 0xF02Cu; c->cpu_cycles += 3u; return 1;
case 0xF159u: /* PHA IMP 48 */
    c->pc = 0xF15Au;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF15Au: /* JSR ABS 20 43 DA */
    push(c, 0xF1u); push(c, 0x5Cu); c->pc = 0xDA43u; c->cpu_cycles += 6u; return 1;
case 0xF15Du: /* BCS REL B0 33 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF15Fu ^ 0xF192u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF192u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF15Fu; } return 1;
case 0xF15Fu: /* PLA IMP 68 */
    c->pc = 0xF160u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xF160u: /* JSR ABS 20 7C D7 */
    push(c, 0xF1u); push(c, 0x62u); c->pc = 0xD77Cu; c->cpu_cycles += 6u; return 1;
case 0xF163u: /* TXA IMP 8A */
    c->pc = 0xF164u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF164u: /* TAY IMP A8 */
    c->pc = 0xF165u;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xF165u: /* LDX ZP A6 2B */
    c->pc = 0xF167u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF167u: /* LDA ABX BD 20 04 */
    c->pc = 0xF16Au;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF16Au: /* AND IMM 29 40 */
    c->pc = 0xF16Cu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF16Cu: /* ORA ABY 19 30 04 */
    c->pc = 0xF16Fu;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF16Fu: /* STA ABY 99 30 04 */
    c->pc = 0xF172u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF172u: /* LDA ABX BD 80 04 */
    c->pc = 0xF175u;
    ea = (uint16_t)(0x0480u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0480u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF175u: /* STA ABY 99 90 04 */
    c->pc = 0xF178u;
    ea = (uint16_t)(0x0490u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF178u: /* LDA ABX BD 60 04 */
    c->pc = 0xF17Bu;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF17Bu: /* STA ABY 99 70 04 */
    c->pc = 0xF17Eu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF17Eu: /* LDA ABX BD 40 04 */
    c->pc = 0xF181u;
    ea = (uint16_t)(0x0440u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0440u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF181u: /* STA ABY 99 50 04 */
    c->pc = 0xF184u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF184u: /* LDA ABX BD C0 04 */
    c->pc = 0xF187u;
    ea = (uint16_t)(0x04C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF187u: /* STA ABY 99 D0 04 */
    c->pc = 0xF18Au;
    ea = (uint16_t)(0x04D0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF18Au: /* LDA ABX BD A0 04 */
    c->pc = 0xF18Du;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF18Du: /* STA ABY 99 B0 04 */
    c->pc = 0xF190u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF190u: /* CLC IMP 18 */
    c->pc = 0xF191u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF191u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF192u: /* PLA IMP 68 */
    c->pc = 0xF193u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xF193u: /* LDX ZP A6 2B */
    c->pc = 0xF195u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF195u: /* SEC IMP 38 */
    c->pc = 0xF196u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF196u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF197u: /* LDY IMM A0 40 */
    c->pc = 0xF199u;
    v = 0x40u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xF199u: /* SEC IMP 38 */
    c->pc = 0xF19Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF19Au: /* LDA ZP A5 2D */
    c->pc = 0xF19Cu;
    ea = 0x2Du;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF19Cu: /* SBC ZP E5 2E */
    c->pc = 0xF19Eu;
    ea = 0x2Eu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xF19Eu: /* STA ZP 85 00 */
    c->pc = 0xF1A0u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1A0u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF1A2u ^ 0xF1ACu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF1ACu; }
    else { c->cpu_cycles += 2u; c->pc = 0xF1A2u; } return 1;
case 0xF1A2u: /* LDA ZP A5 00 */
    c->pc = 0xF1A4u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1A4u: /* EOR IMM 49 FF */
    c->pc = 0xF1A6u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF1A6u: /* ADC IMM 69 01 */
    c->pc = 0xF1A8u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF1A8u: /* LDY IMM A0 00 */
    c->pc = 0xF1AAu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xF1AAu: /* STA ZP 85 00 */
    c->pc = 0xF1ACu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1ACu: /* LDA ABX BD 20 04 */
    c->pc = 0xF1AFu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF1AFu: /* AND IMM 29 BF */
    c->pc = 0xF1B1u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF1B1u: /* STA ABX 9D 20 04 */
    c->pc = 0xF1B4u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF1B4u: /* TYA IMP 98 */
    c->pc = 0xF1B5u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF1B5u: /* ORA ABX 1D 20 04 */
    c->pc = 0xF1B8u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF1B8u: /* STA ABX 9D 20 04 */
    c->pc = 0xF1BBu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF1BBu: /* SEC IMP 38 */
    c->pc = 0xF1BCu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xF1BCu: /* LDA ABS AD A0 04 */
    c->pc = 0xF1BFu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xF1BFu: /* SBC ABX FD A0 04 */
    c->pc = 0xF1C2u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF1C2u: /* PHP IMP 08 */
    c->pc = 0xF1C3u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xF1C3u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF1C5u ^ 0xF1C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF1C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF1C5u; } return 1;
case 0xF1C5u: /* EOR IMM 49 FF */
    c->pc = 0xF1C7u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF1C7u: /* ADC IMM 69 01 */
    c->pc = 0xF1C9u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF1C9u: /* STA ZP 85 01 */
    c->pc = 0xF1CBu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1CBu: /* CMP ZP C5 00 */
    c->pc = 0xF1CDu;
    ea = 0x00u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xF1CDu: /* BCS REL B0 3B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF1CFu ^ 0xF20Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF20Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xF1CFu; } return 1;
case 0xF1CFu: /* LDA ZP A5 09 */
    c->pc = 0xF1D1u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1D1u: /* STA ZP 85 0D */
    c->pc = 0xF1D3u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1D3u: /* STA ABX 9D 00 06 */
    c->pc = 0xF1D6u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF1D6u: /* LDA ZP A5 08 */
    c->pc = 0xF1D8u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1D8u: /* STA ZP 85 0C */
    c->pc = 0xF1DAu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1DAu: /* STA ABX 9D 20 06 */
    c->pc = 0xF1DDu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF1DDu: /* LDA ZP A5 00 */
    c->pc = 0xF1DFu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1DFu: /* STA ZP 85 0B */
    c->pc = 0xF1E1u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1E1u: /* LDA IMM A9 00 */
    c->pc = 0xF1E3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF1E3u: /* STA ZP 85 0A */
    c->pc = 0xF1E5u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1E5u: /* JSR ABS 20 74 C8 */
    push(c, 0xF1u); push(c, 0xE7u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xF1E8u: /* LDA ZP A5 0F */
    c->pc = 0xF1EAu;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1EAu: /* STA ZP 85 0D */
    c->pc = 0xF1ECu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1ECu: /* LDA ZP A5 0E */
    c->pc = 0xF1EEu;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1EEu: /* STA ZP 85 0C */
    c->pc = 0xF1F0u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1F0u: /* LDA ZP A5 01 */
    c->pc = 0xF1F2u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1F2u: /* STA ZP 85 0B */
    c->pc = 0xF1F4u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1F4u: /* LDA IMM A9 00 */
    c->pc = 0xF1F6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF1F6u: /* STA ZP 85 0A */
    c->pc = 0xF1F8u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1F8u: /* JSR ABS 20 74 C8 */
    push(c, 0xF1u); push(c, 0xFAu); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xF1FBu: /* LDX ZP A6 2B */
    c->pc = 0xF1FDu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF1FDu: /* LDA ZP A5 0F */
    c->pc = 0xF1FFu;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF1FFu: /* STA ABX 9D 40 06 */
    c->pc = 0xF202u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF202u: /* LDA ZP A5 0E */
    c->pc = 0xF204u;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF204u: /* STA ABX 9D 60 06 */
    c->pc = 0xF207u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF207u: /* JMP ABS 4C 42 F2 */
    c->pc = 0xF242u; c->cpu_cycles += 3u; return 1;
case 0xF20Au: /* LDA ZP A5 09 */
    c->pc = 0xF20Cu;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF20Cu: /* STA ZP 85 0D */
    c->pc = 0xF20Eu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF20Eu: /* STA ABX 9D 40 06 */
    c->pc = 0xF211u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF211u: /* LDA ZP A5 08 */
    c->pc = 0xF213u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF213u: /* STA ZP 85 0C */
    c->pc = 0xF215u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF215u: /* STA ABX 9D 60 06 */
    c->pc = 0xF218u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF218u: /* LDA ZP A5 01 */
    c->pc = 0xF21Au;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF21Au: /* STA ZP 85 0B */
    c->pc = 0xF21Cu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF21Cu: /* LDA IMM A9 00 */
    c->pc = 0xF21Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF21Eu: /* STA ZP 85 0A */
    c->pc = 0xF220u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF220u: /* JSR ABS 20 74 C8 */
    push(c, 0xF2u); push(c, 0x22u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xF223u: /* LDA ZP A5 0F */
    c->pc = 0xF225u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF225u: /* STA ZP 85 0D */
    c->pc = 0xF227u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF227u: /* LDA ZP A5 0E */
    c->pc = 0xF229u;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF229u: /* STA ZP 85 0C */
    c->pc = 0xF22Bu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF22Bu: /* LDA ZP A5 00 */
    c->pc = 0xF22Du;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF22Du: /* STA ZP 85 0B */
    c->pc = 0xF22Fu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF22Fu: /* LDA IMM A9 00 */
    c->pc = 0xF231u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF231u: /* STA ZP 85 0A */
    c->pc = 0xF233u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF233u: /* JSR ABS 20 74 C8 */
    push(c, 0xF2u); push(c, 0x35u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xF236u: /* LDX ZP A6 2B */
    c->pc = 0xF238u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xF238u: /* LDA ZP A5 0F */
    c->pc = 0xF23Au;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF23Au: /* STA ABX 9D 00 06 */
    c->pc = 0xF23Du;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF23Du: /* LDA ZP A5 0E */
    c->pc = 0xF23Fu;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF23Fu: /* STA ABX 9D 20 06 */
    c->pc = 0xF242u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF242u: /* PLP IMP 28 */
    c->pc = 0xF243u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xF243u: /* BCC REL 90 14 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF245u ^ 0xF259u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF259u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF245u; } return 1;
case 0xF245u: /* LDA ABX BD 60 06 */
    c->pc = 0xF248u;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF248u: /* EOR IMM 49 FF */
    c->pc = 0xF24Au;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF24Au: /* ADC IMM 69 01 */
    c->pc = 0xF24Cu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF24Cu: /* STA ABX 9D 60 06 */
    c->pc = 0xF24Fu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF24Fu: /* LDA ABX BD 40 06 */
    c->pc = 0xF252u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xF252u: /* EOR IMM 49 FF */
    c->pc = 0xF254u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF254u: /* ADC IMM 69 00 */
    c->pc = 0xF256u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xF256u: /* STA ABX 9D 40 06 */
    c->pc = 0xF259u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF259u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF25Au: /* LDA ZP A5 B1 */
    c->pc = 0xF25Cu;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF25Cu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF25Eu ^ 0xF25Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF25Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xF25Eu; } return 1;
case 0xF25Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF25Fu: /* LDA ZP A5 4A */
    c->pc = 0xF261u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF261u: /* STA ZP 85 01 */
    c->pc = 0xF263u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF263u: /* LDA IMM A9 64 */
    c->pc = 0xF265u;
    v = 0x64u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF265u: /* STA ZP 85 02 */
    c->pc = 0xF267u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF267u: /* JSR ABS 20 4E C8 */
    push(c, 0xF2u); push(c, 0x69u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0xF26Au: /* LDA ZP A5 CB */
    c->pc = 0xF26Cu;
    ea = 0xCBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF26Cu: /* BEQ REL F0 48 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF26Eu ^ 0xF2B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF26Eu; } return 1;
case 0xF26Eu: /* LDA ZP A5 04 */
    c->pc = 0xF270u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF270u: /* CMP IMM C9 30 */
    c->pc = 0xF272u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF272u: /* BCC REL 90 14 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF274u ^ 0xF288u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF288u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF274u; } return 1;
case 0xF274u: /* CMP IMM C9 49 */
    c->pc = 0xF276u;
    v = 0x49u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF276u: /* BCC REL 90 11 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF278u ^ 0xF289u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF289u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF278u; } return 1;
case 0xF278u: /* CMP IMM C9 58 */
    c->pc = 0xF27Au;
    v = 0x58u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF27Au: /* BCC REL 90 11 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF27Cu ^ 0xF28Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF28Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xF27Cu; } return 1;
case 0xF27Cu: /* CMP IMM C9 5D */
    c->pc = 0xF27Eu;
    v = 0x5Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF27Eu: /* BCC REL 90 11 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF280u ^ 0xF291u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF291u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF280u; } return 1;
case 0xF280u: /* CMP IMM C9 61 */
    c->pc = 0xF282u;
    v = 0x61u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF282u: /* BCC REL 90 11 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF284u ^ 0xF295u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF295u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF284u; } return 1;
case 0xF284u: /* CMP IMM C9 62 */
    c->pc = 0xF286u;
    v = 0x62u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF286u: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF288u ^ 0xF299u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF299u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF288u; } return 1;
case 0xF288u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF289u: /* LDA IMM A9 79 */
    c->pc = 0xF28Bu;
    v = 0x79u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF28Bu: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xF28Du ^ 0xF2A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF28Du; } return 1;
case 0xF28Du: /* LDA IMM A9 77 */
    c->pc = 0xF28Fu;
    v = 0x77u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF28Fu: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xF291u ^ 0xF2A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF291u; } return 1;
case 0xF291u: /* LDA IMM A9 78 */
    c->pc = 0xF293u;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF293u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xF295u ^ 0xF2A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF295u; } return 1;
case 0xF295u: /* LDA IMM A9 76 */
    c->pc = 0xF297u;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF297u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xF299u ^ 0xF2A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF299u; } return 1;
case 0xF299u: /* LDA IMM A9 7B */
    c->pc = 0xF29Bu;
    v = 0x7Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF29Bu: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xF29Du ^ 0xF2A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF29Du; } return 1;
case 0xF29Du: /* LDA IMM A9 7A */
    c->pc = 0xF29Fu;
    v = 0x7Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF29Fu: /* BNE REL D0 00 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xF2A1u ^ 0xF2A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2A1u; } return 1;
case 0xF2A1u: /* JSR ABS 20 59 F1 */
    push(c, 0xF2u); push(c, 0xA3u); c->pc = 0xF159u; c->cpu_cycles += 6u; return 1;
case 0xF2A4u: /* BCS REL B0 0F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xF2A6u ^ 0xF2B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF2B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2A6u; } return 1;
case 0xF2A6u: /* LDA IMM A9 84 */
    c->pc = 0xF2A8u;
    v = 0x84u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF2A8u: /* STA ABY 99 30 04 */
    c->pc = 0xF2ABu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF2ABu: /* LDA IMM A9 02 */
    c->pc = 0xF2ADu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF2ADu: /* STA ABY 99 50 06 */
    c->pc = 0xF2B0u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF2B0u: /* LDA IMM A9 01 */
    c->pc = 0xF2B2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF2B2u: /* STA ABY 99 F0 04 */
    c->pc = 0xF2B5u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xF2B5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF2B6u: /* LDA ZP A5 04 */
    c->pc = 0xF2B8u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xF2B8u: /* CMP IMM C9 1C */
    c->pc = 0xF2BAu;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF2BAu: /* BCC REL 90 CC */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF2BCu ^ 0xF288u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF288u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2BCu; } return 1;
case 0xF2BCu: /* CMP IMM C9 26 */
    c->pc = 0xF2BEu;
    v = 0x26u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF2BEu: /* BCC REL 90 C9 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF2C0u ^ 0xF289u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF289u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2C0u; } return 1;
case 0xF2C0u: /* CMP IMM C9 30 */
    c->pc = 0xF2C2u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF2C2u: /* BCC REL 90 C9 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF2C4u ^ 0xF28Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF28Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2C4u; } return 1;
case 0xF2C4u: /* CMP IMM C9 4E */
    c->pc = 0xF2C6u;
    v = 0x4Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF2C6u: /* BCC REL 90 C9 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF2C8u ^ 0xF291u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF291u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2C8u; } return 1;
case 0xF2C8u: /* CMP IMM C9 62 */
    c->pc = 0xF2CAu;
    v = 0x62u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF2CAu: /* BCC REL 90 C9 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xF2CCu ^ 0xF295u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF295u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2CCu; } return 1;
case 0xF2CCu: /* CMP IMM C9 63 */
    c->pc = 0xF2CEu;
    v = 0x63u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xF2CEu: /* BEQ REL F0 C9 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xF2D0u ^ 0xF299u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xF299u; }
    else { c->cpu_cycles += 2u; c->pc = 0xF2D0u; } return 1;
case 0xF2D0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xF2D1u: /* LDA IMM A9 10 */
    c->pc = 0xF2D3u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF2D3u: /* STA ABS 8D 00 20 */
    c->pc = 0xF2D6u;
    ea = 0x2000u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xF2D6u: /* LDA IMM A9 06 */
    c->pc = 0xF2D8u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF2D8u: /* STA ABS 8D 01 20 */
    c->pc = 0xF2DBu;
    ea = 0x2001u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xF2DBu: /* LDA IMM A9 0E */
    c->pc = 0xF2DDu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xF2DDu: /* JSR ABS 20 00 C0 */
    push(c, 0xF2u); push(c, 0xDFu); c->pc = 0xC000u; c->cpu_cycles += 6u; return 1;
case 0xF2E0u: /* JMP ABS 4C 00 80 */
    c->pc = 0x8000u; c->cpu_cycles += 3u; return 1;
case 0xFFE0u: /* SEI IMP 78 */
    c->pc = 0xFFE1u;
    c->p = (uint8_t)(c->p | MM2_FLAG_I);
    c->cpu_cycles += 2u; return 1;
case 0xFFE1u: /* INC ABS EE E1 FF */
    c->pc = 0xFFE4u;
    ea = 0xFFE1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xFFE4u: /* JMP ABS 4C D1 F2 */
    c->pc = 0xF2D1u; c->cpu_cycles += 3u; return 1;
    }
    return 0;
}
