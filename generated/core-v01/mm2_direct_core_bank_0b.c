/* Generated from the accepted v0.06 identity ledger. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_0b(MM2DirectCore *c, uint16_t pc) {
    uint16_t ea = 0u;
    uint8_t v = 0u;
    switch (pc) {
case 0x8000u: /* JMP ABS 4C 51 A4 */
    c->pc = 0xA451u; c->cpu_cycles += 3u; return 1;
case 0x8003u: /* LDA IMM A9 01 */
    c->pc = 0x8005u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8005u: /* STA ZP 85 2B */
    c->pc = 0x8007u;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8007u: /* LDY ZP A4 B3 */
    c->pc = 0x8009u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8009u: /* LDA ZP A5 AA */
    c->pc = 0x800Bu;
    ea = 0xAAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x800Bu: /* AND IMM 29 01 */
    c->pc = 0x800Du;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x800Du: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x800Fu ^ 0x8017u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8017u; }
    else { c->cpu_cycles += 2u; c->pc = 0x800Fu; } return 1;
case 0x800Fu: /* LDA ABY B9 2B 80 */
    c->pc = 0x8012u;
    ea = (uint16_t)(0x802Bu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x802Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8012u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8014u ^ 0x8017u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8017u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8014u; } return 1;
case 0x8014u: /* JMP ABS 4C 63 80 */
    c->pc = 0x8063u; c->cpu_cycles += 3u; return 1;
case 0x8017u: /* LDX ZP A6 B1 */
    c->pc = 0x8019u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8019u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x801Bu ^ 0x801Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x801Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x801Bu; } return 1;
case 0x801Bu: /* JMP ABS 4C D3 9F */
    c->pc = 0x9FD3u; c->cpu_cycles += 3u; return 1;
case 0x801Eu: /* LDA ABY B9 47 80 */
    c->pc = 0x8021u;
    ea = (uint16_t)(0x8047u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8047u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8021u: /* STA ZP 85 08 */
    c->pc = 0x8023u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8023u: /* LDA ABY B9 55 80 */
    c->pc = 0x8026u;
    ea = (uint16_t)(0x8055u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8055u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8026u: /* STA ZP 85 09 */
    c->pc = 0x8028u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8028u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8063u: /* LDA IMM A9 00 */
    c->pc = 0x8065u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8065u: /* STA ABS 8D 81 06 */
    c->pc = 0x8068u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8068u: /* JSR ABS 20 2D A5 */
    push(c, 0x80u); push(c, 0x6Au); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0x806Bu: /* LDA ZP A5 A9 */
    c->pc = 0x806Du;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x806Du: /* CMP IMM C9 06 */
    c->pc = 0x806Fu;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x806Fu: /* BNE REL D0 53 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8071u ^ 0x80C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8071u; } return 1;
case 0x8071u: /* LDA ABS AD 22 04 */
    c->pc = 0x8074u;
    ea = 0x0422u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8074u: /* BPL REL 10 4E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8076u ^ 0x80C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8076u; } return 1;
case 0x8076u: /* LDA ZP A5 B1 */
    c->pc = 0x8078u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8078u: /* CMP IMM C9 02 */
    c->pc = 0x807Au;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x807Au: /* BCC REL 90 48 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x807Cu ^ 0x80C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x807Cu; } return 1;
case 0x807Cu: /* LDA ZP A5 B3 */
    c->pc = 0x807Eu;
    ea = 0xB3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x807Eu: /* CMP IMM C9 05 */
    c->pc = 0x8080u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8080u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8082u ^ 0x8086u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8086u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8082u; } return 1;
case 0x8082u: /* CMP IMM C9 0D */
    c->pc = 0x8084u;
    v = 0x0Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8084u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8086u ^ 0x808Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x808Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8086u; } return 1;
case 0x8086u: /* LDA IMM A9 1C */
    c->pc = 0x8088u;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8088u: /* STA ABS 8D C1 06 */
    c->pc = 0x808Bu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x808Bu: /* BNE REL D0 37 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x808Du ^ 0x80C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x808Du; } return 1;
case 0x808Du: /* INC ABS EE A6 05 */
    c->pc = 0x8090u;
    ea = 0x05A6u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8090u: /* LDX ZP A6 B3 */
    c->pc = 0x8092u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8092u: /* LDA ABS AD A6 05 */
    c->pc = 0x8095u;
    ea = 0x05A6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8095u: /* CMP ABX DD 2B 80 */
    c->pc = 0x8098u;
    ea = (uint16_t)(0x802Bu + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x802Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8098u: /* BNE REL D0 2A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x809Au ^ 0x80C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x809Au; } return 1;
case 0x809Au: /* LDA IMM A9 00 */
    c->pc = 0x809Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x809Cu: /* STA ABS 8D A6 05 */
    c->pc = 0x809Fu;
    ea = 0x05A6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x809Fu: /* LDA ABX BD 39 80 */
    c->pc = 0x80A2u;
    ea = (uint16_t)(0x8039u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8039u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80A2u: /* BEQ REL F0 20 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x80A4u ^ 0x80C4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80A4u; } return 1;
case 0x80A4u: /* SEC IMP 38 */
    c->pc = 0x80A5u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x80A5u: /* LDA ABS AD C1 06 */
    c->pc = 0x80A8u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80A8u: /* SBC ABX FD 39 80 */
    c->pc = 0x80ABu;
    ea = (uint16_t)(0x8039u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x8039u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80ABu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x80ADu ^ 0x80AFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80AFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x80ADu; } return 1;
case 0x80ADu: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x80AFu ^ 0x80C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80AFu; } return 1;
case 0x80AFu: /* LDA IMM A9 00 */
    c->pc = 0x80B1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B1u: /* LSR ABS 4E 22 04 */
    c->pc = 0x80B4u;
    ea = 0x0422u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x80B4u: /* LDA IMM A9 00 */
    c->pc = 0x80B6u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80B6u: /* STA ZP 85 AA */
    c->pc = 0x80B8u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80B8u: /* LDA IMM A9 01 */
    c->pc = 0x80BAu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80BAu: /* STA ZP 85 50 */
    c->pc = 0x80BCu;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80BCu: /* INC ABS EE AA 05 */
    c->pc = 0x80BFu;
    ea = 0x05AAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x80BFu: /* LDA IMM A9 00 */
    c->pc = 0x80C1u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80C1u: /* STA ABS 8D C1 06 */
    c->pc = 0x80C4u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80C4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x80C5u: /* DEX IMP CA */
    c->pc = 0x80C6u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x80C6u: /* LDA ABX BD D9 82 */
    c->pc = 0x80C9u;
    ea = (uint16_t)(0x82D9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x82D9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80C9u: /* STA ZP 85 08 */
    c->pc = 0x80CBu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80CBu: /* LDA ABX BD DE 82 */
    c->pc = 0x80CEu;
    ea = (uint16_t)(0x82DEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x82DEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80CEu: /* STA ZP 85 09 */
    c->pc = 0x80D0u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80D0u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x80D3u: /* LDA ABS AD E1 04 */
    c->pc = 0x80D6u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80D6u: /* BNE REL D0 2A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x80D8u ^ 0x8102u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8102u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80D8u; } return 1;
case 0x80D8u: /* LDY ZP A4 B3 */
    c->pc = 0x80DAu;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x80DAu: /* LDA ABY B9 3E 81 */
    c->pc = 0x80DDu;
    ea = (uint16_t)(0x813Eu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x813Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80DDu: /* STA ZP 85 01 */
    c->pc = 0x80DFu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80DFu: /* LDA ABY B9 46 81 */
    c->pc = 0x80E2u;
    ea = (uint16_t)(0x8146u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8146u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x80E2u: /* STA ZP 85 02 */
    c->pc = 0x80E4u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E4u: /* JSR ABS 20 49 A2 */
    push(c, 0x80u); push(c, 0xE6u); c->pc = 0xA249u; c->cpu_cycles += 6u; return 1;
case 0x80E7u: /* LDA ZP A5 00 */
    c->pc = 0x80E9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x80E9u: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x80EBu ^ 0x80F7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80F7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x80EBu; } return 1;
case 0x80EBu: /* LDA IMM A9 00 */
    c->pc = 0x80EDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80EDu: /* STA ABS 8D A1 06 */
    c->pc = 0x80F0u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80F0u: /* STA ABS 8D 81 06 */
    c->pc = 0x80F3u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80F3u: /* JSR ABS 20 4F A1 */
    push(c, 0x80u); push(c, 0xF5u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x80F6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x80F7u: /* LDA IMM A9 00 */
    c->pc = 0x80F9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x80F9u: /* STA ABS 8D 41 06 */
    c->pc = 0x80FCu;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80FCu: /* STA ABS 8D 61 06 */
    c->pc = 0x80FFu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x80FFu: /* INC ABS EE E1 04 */
    c->pc = 0x8102u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8102u: /* LDA ABS AD A1 06 */
    c->pc = 0x8105u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8105u: /* LDY ZP A4 B3 */
    c->pc = 0x8107u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8107u: /* CMP ABY D9 4E 81 */
    c->pc = 0x810Au;
    ea = (uint16_t)(0x814Eu + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x814Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x810Au: /* BNE REL D0 E7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x810Cu ^ 0x80F3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x80F3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x810Cu; } return 1;
case 0x810Cu: /* STA ABS 8D A1 06 */
    c->pc = 0x810Fu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x810Fu: /* LDA IMM A9 00 */
    c->pc = 0x8111u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8111u: /* STA ABS 8D 81 06 */
    c->pc = 0x8114u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8114u: /* LDA ABS AD C1 06 */
    c->pc = 0x8117u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8117u: /* CMP IMM C9 1C */
    c->pc = 0x8119u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8119u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x811Bu ^ 0x812Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x812Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x811Bu; } return 1;
case 0x811Bu: /* LDA IMM A9 02 */
    c->pc = 0x811Du;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x811Du: /* STA ZP 85 B1 */
    c->pc = 0x811Fu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x811Fu: /* LDA IMM A9 00 */
    c->pc = 0x8121u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8121u: /* STA ZP 85 B2 */
    c->pc = 0x8123u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8123u: /* STA ABS 8D E1 04 */
    c->pc = 0x8126u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8126u: /* LDY ZP A4 B3 */
    c->pc = 0x8128u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8128u: /* LDA ABY B9 56 81 */
    c->pc = 0x812Bu;
    ea = (uint16_t)(0x8156u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8156u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x812Bu: /* JSR ABS 20 0C A1 */
    push(c, 0x81u); push(c, 0x2Du); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x812Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x812Fu: /* LDA ZP A5 1C */
    c->pc = 0x8131u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8131u: /* AND IMM 29 03 */
    c->pc = 0x8133u;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8133u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8135u ^ 0x813Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x813Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8135u; } return 1;
case 0x8135u: /* INC ABS EE C1 06 */
    c->pc = 0x8138u;
    ea = 0x06C1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8138u: /* LDA IMM A9 28 */
    c->pc = 0x813Au;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x813Au: /* JSR ABS 20 51 C0 */
    push(c, 0x81u); push(c, 0x3Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x813Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x815Eu: /* LDA IMM A9 58 */
    c->pc = 0x8160u;
    v = 0x58u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8160u: /* JSR ABS 20 2D A2 */
    push(c, 0x81u); push(c, 0x62u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x8163u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8165u ^ 0x816Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x816Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8165u; } return 1;
case 0x8165u: /* LDA ABS AD A1 06 */
    c->pc = 0x8168u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8168u: /* BNE REL D0 69 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x816Au ^ 0x81D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x816Au; } return 1;
case 0x816Au: /* STA ABS 8D 81 06 */
    c->pc = 0x816Du;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x816Du: /* BEQ REL F0 64 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x816Fu ^ 0x81D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x816Fu; } return 1;
case 0x816Fu: /* LDA ABS AD 81 06 */
    c->pc = 0x8172u;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8172u: /* BNE REL D0 5F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8174u ^ 0x81D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8174u; } return 1;
case 0x8174u: /* LDA ABS AD A1 06 */
    c->pc = 0x8177u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8177u: /* CMP IMM C9 02 */
    c->pc = 0x8179u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8179u: /* BNE REL D0 58 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x817Bu ^ 0x81D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x817Bu; } return 1;
case 0x817Bu: /* JSR ABS 20 09 A2 */
    push(c, 0x81u); push(c, 0x7Du); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x817Eu: /* LDA ZP A5 00 */
    c->pc = 0x8180u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8180u: /* STA ZP 85 03 */
    c->pc = 0x8182u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8182u: /* CLC IMP 18 */
    c->pc = 0x8183u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8183u: /* ADC IMM 69 20 */
    c->pc = 0x8185u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8185u: /* STA ZP 85 02 */
    c->pc = 0x8187u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8187u: /* SEC IMP 38 */
    c->pc = 0x8188u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8188u: /* SBC IMM E9 40 */
    c->pc = 0x818Au;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x818Au: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x818Cu ^ 0x818Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x818Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x818Cu; } return 1;
case 0x818Cu: /* LDA IMM A9 00 */
    c->pc = 0x818Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x818Eu: /* STA ZP 85 04 */
    c->pc = 0x8190u;
    ea = 0x04u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8190u: /* LDA IMM A9 02 */
    c->pc = 0x8192u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8192u: /* STA ZP 85 01 */
    c->pc = 0x8194u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8194u: /* LDX ZP A6 01 */
    c->pc = 0x8196u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8196u: /* LDA IMM A9 00 */
    c->pc = 0x8198u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8198u: /* STA ZP 85 0A */
    c->pc = 0x819Au;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x819Au: /* STA ZP 85 0C */
    c->pc = 0x819Cu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x819Cu: /* LDA ZPX B5 02 */
    c->pc = 0x819Eu;
    ea = (uint8_t)(0x02u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x819Eu: /* STA ZP 85 0B */
    c->pc = 0x81A0u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81A0u: /* LDA ABX BD FA 81 */
    c->pc = 0x81A3u;
    ea = (uint16_t)(0x81FAu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x81FAu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x81A3u: /* STA ZP 85 0D */
    c->pc = 0x81A5u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81A5u: /* JSR ABS 20 74 C8 */
    push(c, 0x81u); push(c, 0xA7u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0x81A8u: /* LDX IMM A2 01 */
    c->pc = 0x81AAu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81AAu: /* LDA IMM A9 58 */
    c->pc = 0x81ACu;
    v = 0x58u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81ACu: /* JSR ABS 20 52 A3 */
    push(c, 0x81u); push(c, 0xAEu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x81AFu: /* LDX ZP A6 01 */
    c->pc = 0x81B1u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x81B1u: /* LDA ABX BD F4 81 */
    c->pc = 0x81B4u;
    ea = (uint16_t)(0x81F4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x81F4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x81B4u: /* STA ABY 99 70 06 */
    c->pc = 0x81B7u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81B7u: /* LDA ABX BD F7 81 */
    c->pc = 0x81BAu;
    ea = (uint16_t)(0x81F7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x81F7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x81BAu: /* STA ABY 99 50 06 */
    c->pc = 0x81BDu;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81BDu: /* LDA ZP A5 0E */
    c->pc = 0x81BFu;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81BFu: /* STA ABY 99 30 06 */
    c->pc = 0x81C2u;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81C2u: /* LDA ZP A5 0F */
    c->pc = 0x81C4u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81C4u: /* STA ABY 99 10 06 */
    c->pc = 0x81C7u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81C7u: /* LDA ABY B9 30 04 */
    c->pc = 0x81CAu;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x81CAu: /* ORA IMM 09 04 */
    c->pc = 0x81CCu;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81CCu: /* STA ABY 99 30 04 */
    c->pc = 0x81CFu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x81CFu: /* DEC ZP C6 01 */
    c->pc = 0x81D1u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x81D1u: /* BPL REL 10 C1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x81D3u ^ 0x8194u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8194u; }
    else { c->cpu_cycles += 2u; c->pc = 0x81D3u; } return 1;
case 0x81D3u: /* LDX IMM A2 01 */
    c->pc = 0x81D5u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x81D5u: /* JSR ABS 20 46 A1 */
    push(c, 0x81u); push(c, 0xD7u); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x81D8u: /* LDA ZP A5 02 */
    c->pc = 0x81DAu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81DAu: /* CMP IMM C9 01 */
    c->pc = 0x81DCu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x81DCu: /* BNE REL D0 10 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81DEu ^ 0x81EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81DEu; } return 1;
case 0x81DEu: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x81E0u ^ 0x81EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x81E0u; } return 1;
case 0x81E0u: /* LDA IMM A9 04 */
    c->pc = 0x81E2u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81E2u: /* STA ZP 85 B1 */
    c->pc = 0x81E4u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x81E4u: /* LDA IMM A9 12 */
    c->pc = 0x81E6u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81E6u: /* STA ABS 8D A8 05 */
    c->pc = 0x81E9u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x81E9u: /* LDA IMM A9 53 */
    c->pc = 0x81EBu;
    v = 0x53u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x81EBu: /* JSR ABS 20 0C A1 */
    push(c, 0x81u); push(c, 0xEDu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x81EEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x81FDu: /* LDA ABS AD E1 04 */
    c->pc = 0x8200u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8200u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8202u ^ 0x8237u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8237u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8202u; } return 1;
case 0x8202u: /* LDA ABS AD A1 06 */
    c->pc = 0x8205u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8205u: /* CMP IMM C9 02 */
    c->pc = 0x8207u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8207u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8209u ^ 0x820Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x820Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8209u; } return 1;
case 0x8209u: /* LDA IMM A9 00 */
    c->pc = 0x820Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x820Bu: /* STA ABS 8D A1 06 */
    c->pc = 0x820Eu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x820Eu: /* DEC ZP C6 B2 */
    c->pc = 0x8210u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8210u: /* BNE REL D0 C1 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8212u ^ 0x81D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8212u; } return 1;
case 0x8212u: /* LDA IMM A9 03 */
    c->pc = 0x8214u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8214u: /* STA ABS 8D A1 06 */
    c->pc = 0x8217u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8217u: /* LDA IMM A9 00 */
    c->pc = 0x8219u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8219u: /* STA ABS 8D 81 06 */
    c->pc = 0x821Cu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x821Cu: /* LDA IMM A9 11 */
    c->pc = 0x821Eu;
    v = 0x11u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x821Eu: /* STA ABS 8D E1 06 */
    c->pc = 0x8221u;
    ea = 0x06E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8221u: /* JSR ABS 20 09 A2 */
    push(c, 0x82u); push(c, 0x23u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8224u: /* LDA ZP A5 00 */
    c->pc = 0x8226u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8226u: /* LSR IMP 4A */
    c->pc = 0x8227u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8227u: /* LSR IMP 4A */
    c->pc = 0x8228u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8228u: /* CLC IMP 18 */
    c->pc = 0x8229u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8229u: /* ADC IMM 69 0A */
    c->pc = 0x822Bu;
    v = 0x0Au;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x822Bu: /* STA ZP 85 B2 */
    c->pc = 0x822Du;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x822Du: /* LDA IMM A9 38 */
    c->pc = 0x822Fu;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x822Fu: /* JSR ABS 20 51 C0 */
    push(c, 0x82u); push(c, 0x31u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8232u: /* INC ABS EE E1 04 */
    c->pc = 0x8235u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8235u: /* BNE REL D0 9C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8237u ^ 0x81D3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x81D3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8237u; } return 1;
case 0x8237u: /* CMP IMM C9 01 */
    c->pc = 0x8239u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8239u: /* BNE REL D0 34 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x823Bu ^ 0x826Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x826Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x823Bu; } return 1;
case 0x823Bu: /* LDA ABS AD A1 06 */
    c->pc = 0x823Eu;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x823Eu: /* CMP IMM C9 06 */
    c->pc = 0x8240u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8240u: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8242u ^ 0x8247u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8247u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8242u; } return 1;
case 0x8242u: /* LDY IMM A0 04 */
    c->pc = 0x8244u;
    v = 0x04u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8244u: /* STY ABS 8C 01 06 */
    c->pc = 0x8247u;
    ea = 0x0601u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x8247u: /* CMP IMM C9 09 */
    c->pc = 0x8249u;
    v = 0x09u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8249u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x824Bu ^ 0x8250u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8250u; }
    else { c->cpu_cycles += 2u; c->pc = 0x824Bu; } return 1;
case 0x824Bu: /* LDA IMM A9 06 */
    c->pc = 0x824Du;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x824Du: /* STA ABS 8D A1 06 */
    c->pc = 0x8250u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8250u: /* LDA ZP A5 B2 */
    c->pc = 0x8252u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8252u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8254u ^ 0x8258u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8258u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8254u; } return 1;
case 0x8254u: /* DEC ZP C6 B2 */
    c->pc = 0x8256u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8256u: /* BNE REL D0 32 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8258u ^ 0x828Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x828Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8258u; } return 1;
case 0x8258u: /* LDA IMM A9 00 */
    c->pc = 0x825Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x825Au: /* STA ABS 8D 01 06 */
    c->pc = 0x825Du;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x825Du: /* STA ABS 8D 81 06 */
    c->pc = 0x8260u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8260u: /* LDA IMM A9 01 */
    c->pc = 0x8262u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8262u: /* STA ABS 8D E1 06 */
    c->pc = 0x8265u;
    ea = 0x06E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8265u: /* LDA IMM A9 0A */
    c->pc = 0x8267u;
    v = 0x0Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8267u: /* STA ABS 8D A1 06 */
    c->pc = 0x826Au;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x826Au: /* INC ABS EE E1 04 */
    c->pc = 0x826Du;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x826Du: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x826Fu ^ 0x828Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x828Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x826Fu; } return 1;
case 0x826Fu: /* LDA ABS AD A1 06 */
    c->pc = 0x8272u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8272u: /* CMP IMM C9 0D */
    c->pc = 0x8274u;
    v = 0x0Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8274u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8276u ^ 0x828Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x828Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8276u; } return 1;
case 0x8276u: /* LDA IMM A9 50 */
    c->pc = 0x8278u;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8278u: /* JSR ABS 20 0C A1 */
    push(c, 0x82u); push(c, 0x7Au); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x827Bu: /* LDA IMM A9 83 */
    c->pc = 0x827Du;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x827Du: /* STA ABS 8D 21 04 */
    c->pc = 0x8280u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8280u: /* JSR ABS 20 09 A2 */
    push(c, 0x82u); push(c, 0x82u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8283u: /* INC ABX FE A0 06 */
    c->pc = 0x8286u;
    ea = (uint16_t)(0x06A0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x8286u: /* LDA IMM A9 05 */
    c->pc = 0x8288u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8288u: /* STA ZP 85 B1 */
    c->pc = 0x828Au;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x828Au: /* JMP ABS 4C D3 81 */
    c->pc = 0x81D3u; c->cpu_cycles += 3u; return 1;
case 0x8290u: /* LDA ABS AD A1 06 */
    c->pc = 0x8293u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8293u: /* BEQ REL F0 33 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8295u ^ 0x82C8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82C8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8295u; } return 1;
case 0x8295u: /* DEC ZP C6 B1 */
    c->pc = 0x8297u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8297u: /* LDA IMM A9 8B */
    c->pc = 0x8299u;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8299u: /* LDX ABS AE 61 04 */
    c->pc = 0x829Cu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x829Cu: /* CPX IMM E0 80 */
    c->pc = 0x829Eu;
    v = 0x80u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x829Eu: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x82A0u ^ 0x82A2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82A2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82A0u; } return 1;
case 0x82A0u: /* LDA IMM A9 CB */
    c->pc = 0x82A2u;
    v = 0xCBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82A2u: /* STA ABS 8D 21 04 */
    c->pc = 0x82A5u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x82A5u: /* LDA IMM A9 00 */
    c->pc = 0x82A7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82A7u: /* STA ABS 8D E1 04 */
    c->pc = 0x82AAu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x82AAu: /* STA ZP 85 B4 */
    c->pc = 0x82ACu;
    ea = 0xB4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82ACu: /* LDA ZP A5 4A */
    c->pc = 0x82AEu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82AEu: /* STA ZP 85 01 */
    c->pc = 0x82B0u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82B0u: /* LDA IMM A9 03 */
    c->pc = 0x82B2u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82B2u: /* STA ZP 85 02 */
    c->pc = 0x82B4u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82B4u: /* JSR ABS 20 4E C8 */
    push(c, 0x82u); push(c, 0xB6u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x82B7u: /* LDX ZP A6 04 */
    c->pc = 0x82B9u;
    ea = 0x04u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x82B9u: /* LDA ABX BD 8D 82 */
    c->pc = 0x82BCu;
    ea = (uint16_t)(0x828Du + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x828Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82BCu: /* STA ZP 85 B2 */
    c->pc = 0x82BEu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82BEu: /* LDA IMM A9 52 */
    c->pc = 0x82C0u;
    v = 0x52u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82C0u: /* JSR ABS 20 0C A1 */
    push(c, 0x82u); push(c, 0xC2u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x82C3u: /* LDA IMM A9 38 */
    c->pc = 0x82C5u;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82C5u: /* JSR ABS 20 51 C0 */
    push(c, 0x82u); push(c, 0xC7u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x82C8u: /* JSR ABS 20 4F A1 */
    push(c, 0x82u); push(c, 0xCAu); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x82CBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x82CCu: /* LDA ABS AD A1 06 */
    c->pc = 0x82CFu;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x82CFu: /* CMP IMM C9 04 */
    c->pc = 0x82D1u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x82D1u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x82D3u ^ 0x82D6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x82D6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x82D3u; } return 1;
case 0x82D3u: /* JMP ABS 4C D3 81 */
    c->pc = 0x81D3u; c->cpu_cycles += 3u; return 1;
case 0x82D6u: /* JMP ABS 4C 1B 81 */
    c->pc = 0x811Bu; c->cpu_cycles += 3u; return 1;
case 0x82E3u: /* DEX IMP CA */
    c->pc = 0x82E4u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x82E4u: /* LDA ABX BD F3 84 */
    c->pc = 0x82E7u;
    ea = (uint16_t)(0x84F3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84F3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82E7u: /* STA ZP 85 08 */
    c->pc = 0x82E9u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82E9u: /* LDA ABX BD F7 84 */
    c->pc = 0x82ECu;
    ea = (uint16_t)(0x84F7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84F7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x82ECu: /* STA ZP 85 09 */
    c->pc = 0x82EEu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82EEu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x82F1u: /* LDA IMM A9 00 */
    c->pc = 0x82F3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x82F3u: /* STA ZP 85 40 */
    c->pc = 0x82F5u;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82F5u: /* STA ZP 85 4F */
    c->pc = 0x82F7u;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82F7u: /* STA ZP 85 50 */
    c->pc = 0x82F9u;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82F9u: /* LDA ZP A5 B2 */
    c->pc = 0x82FBu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x82FBu: /* CMP IMM C9 03 */
    c->pc = 0x82FDu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x82FDu: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x82FFu ^ 0x831Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x831Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x82FFu; } return 1;
case 0x82FFu: /* LDA IMM A9 00 */
    c->pc = 0x8301u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8301u: /* STA ZP 85 B2 */
    c->pc = 0x8303u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8303u: /* LDA IMM A9 68 */
    c->pc = 0x8305u;
    v = 0x68u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8305u: /* JSR ABS 20 0C A1 */
    push(c, 0x83u); push(c, 0x07u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8308u: /* LDA ABS AD 21 04 */
    c->pc = 0x830Bu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x830Bu: /* ORA IMM 09 04 */
    c->pc = 0x830Du;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x830Du: /* STA ABS 8D 21 04 */
    c->pc = 0x8310u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8310u: /* LDA IMM A9 04 */
    c->pc = 0x8312u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8312u: /* STA ZP 85 B1 */
    c->pc = 0x8314u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8314u: /* LDA IMM A9 FF */
    c->pc = 0x8316u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8316u: /* STA ABS 8D 41 06 */
    c->pc = 0x8319u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8319u: /* BNE REL D0 5F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x831Bu ^ 0x837Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x837Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x831Bu; } return 1;
case 0x831Bu: /* LDA ZP A5 4A */
    c->pc = 0x831Du;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x831Du: /* STA ZP 85 01 */
    c->pc = 0x831Fu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x831Fu: /* LDA IMM A9 05 */
    c->pc = 0x8321u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8321u: /* STA ZP 85 02 */
    c->pc = 0x8323u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8323u: /* JSR ABS 20 4E C8 */
    push(c, 0x83u); push(c, 0x25u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x8326u: /* LDX ZP A6 04 */
    c->pc = 0x8328u;
    ea = 0x04u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8328u: /* LDA ABX BD 7E 83 */
    c->pc = 0x832Bu;
    ea = (uint16_t)(0x837Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x837Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x832Bu: /* STA ABS 8D E1 04 */
    c->pc = 0x832Eu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x832Eu: /* LDA ZP A5 04 */
    c->pc = 0x8330u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8330u: /* ASL IMP 0A */
    c->pc = 0x8331u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8331u: /* STA ZP 85 01 */
    c->pc = 0x8333u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8333u: /* ASL IMP 0A */
    c->pc = 0x8334u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8334u: /* ADC ZP 65 01 */
    c->pc = 0x8336u;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8336u: /* STA ZP 85 01 */
    c->pc = 0x8338u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8338u: /* LDA IMM A9 06 */
    c->pc = 0x833Au;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x833Au: /* STA ZP 85 02 */
    c->pc = 0x833Cu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x833Cu: /* LDA IMM A9 5D */
    c->pc = 0x833Eu;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x833Eu: /* LDX IMM A2 01 */
    c->pc = 0x8340u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8340u: /* JSR ABS 20 52 A3 */
    push(c, 0x83u); push(c, 0x42u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8343u: /* LDX ZP A6 01 */
    c->pc = 0x8345u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8345u: /* LDA ABX BD 83 83 */
    c->pc = 0x8348u;
    ea = (uint16_t)(0x8383u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8383u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8348u: /* STA ABY 99 70 06 */
    c->pc = 0x834Bu;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x834Bu: /* LDA ABX BD A1 83 */
    c->pc = 0x834Eu;
    ea = (uint16_t)(0x83A1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x83A1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x834Eu: /* STA ABY 99 50 06 */
    c->pc = 0x8351u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8351u: /* LDA ABX BD BF 83 */
    c->pc = 0x8354u;
    ea = (uint16_t)(0x83BFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x83BFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8354u: /* STA ABY 99 30 06 */
    c->pc = 0x8357u;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8357u: /* LDA ABX BD DD 83 */
    c->pc = 0x835Au;
    ea = (uint16_t)(0x83DDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x83DDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x835Au: /* STA ABY 99 10 06 */
    c->pc = 0x835Du;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x835Du: /* LDA ABX BD FB 83 */
    c->pc = 0x8360u;
    ea = (uint16_t)(0x83FBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x83FBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8360u: /* STA ABY 99 F0 04 */
    c->pc = 0x8363u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8363u: /* INC ZP E6 01 */
    c->pc = 0x8365u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8365u: /* DEC ZP C6 02 */
    c->pc = 0x8367u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8367u: /* BNE REL D0 D3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8369u ^ 0x833Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x833Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8369u; } return 1;
case 0x8369u: /* LDA IMM A9 3F */
    c->pc = 0x836Bu;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x836Bu: /* JSR ABS 20 51 C0 */
    push(c, 0x83u); push(c, 0x6Du); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x836Eu: /* INC ZP E6 B2 */
    c->pc = 0x8370u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8370u: /* INC ZP E6 B1 */
    c->pc = 0x8372u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8372u: /* LDA IMM A9 00 */
    c->pc = 0x8374u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8374u: /* STA ABS 8D A1 06 */
    c->pc = 0x8377u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8377u: /* STA ABS 8D 81 06 */
    c->pc = 0x837Au;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x837Au: /* JSR ABS 20 D9 84 */
    push(c, 0x83u); push(c, 0x7Cu); c->pc = 0x84D9u; c->cpu_cycles += 6u; return 1;
case 0x837Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8419u: /* LDA ABS AD E1 04 */
    c->pc = 0x841Cu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x841Cu: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x841Eu ^ 0x842Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x842Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x841Eu; } return 1;
case 0x841Eu: /* LDA IMM A9 00 */
    c->pc = 0x8420u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8420u: /* STA ABS 8D 81 06 */
    c->pc = 0x8423u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8423u: /* DEC ABS CE E1 04 */
    c->pc = 0x8426u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8426u: /* JSR ABS 20 D9 84 */
    push(c, 0x84u); push(c, 0x28u); c->pc = 0x84D9u; c->cpu_cycles += 6u; return 1;
case 0x8429u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x842Au: /* LDA IMM A9 5D */
    c->pc = 0x842Cu;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x842Cu: /* JSR ABS 20 2D A2 */
    push(c, 0x84u); push(c, 0x2Eu); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x842Fu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8431u ^ 0x8436u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8436u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8431u; } return 1;
case 0x8431u: /* DEC ZP C6 B1 */
    c->pc = 0x8433u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8433u: /* JMP ABS 4C 1E 84 */
    c->pc = 0x841Eu; c->cpu_cycles += 3u; return 1;
case 0x8436u: /* LDA IMM A9 01 */
    c->pc = 0x8438u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8438u: /* STA ZP 85 40 */
    c->pc = 0x843Au;
    ea = 0x40u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x843Au: /* LDA ABS AD 21 04 */
    c->pc = 0x843Du;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x843Du: /* AND IMM 29 40 */
    c->pc = 0x843Fu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x843Fu: /* STA ZP 85 AF */
    c->pc = 0x8441u;
    ea = 0xAFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8441u: /* CLC IMP 18 */
    c->pc = 0x8442u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8442u: /* LDA ZP A5 4F */
    c->pc = 0x8444u;
    ea = 0x4Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8444u: /* ADC IMM 69 10 */
    c->pc = 0x8446u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8446u: /* STA ZP 85 4F */
    c->pc = 0x8448u;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8448u: /* LDA ZP A5 50 */
    c->pc = 0x844Au;
    ea = 0x50u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x844Au: /* ADC IMM 69 00 */
    c->pc = 0x844Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x844Cu: /* STA ZP 85 50 */
    c->pc = 0x844Eu;
    ea = 0x50u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x844Eu: /* CMP IMM C9 04 */
    c->pc = 0x8450u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8450u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8452u ^ 0x8456u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8456u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8452u; } return 1;
case 0x8452u: /* LDA IMM A9 00 */
    c->pc = 0x8454u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8454u: /* STA ZP 85 4F */
    c->pc = 0x8456u;
    ea = 0x4Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8456u: /* LDY IMM A0 0F */
    c->pc = 0x8458u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8458u: /* LDA IMM A9 5D */
    c->pc = 0x845Au;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x845Au: /* STA ZP 85 00 */
    c->pc = 0x845Cu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x845Cu: /* JSR ABS 20 31 A2 */
    push(c, 0x84u); push(c, 0x5Eu); c->pc = 0xA231u; c->cpu_cycles += 6u; return 1;
case 0x845Fu: /* BCS REL B0 0D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8461u ^ 0x846Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x846Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8461u; } return 1;
case 0x8461u: /* LDA ZP A5 4F */
    c->pc = 0x8463u;
    ea = 0x4Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8463u: /* STA ABY 99 30 06 */
    c->pc = 0x8466u;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8466u: /* LDA ZP A5 50 */
    c->pc = 0x8468u;
    ea = 0x50u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8468u: /* STA ABY 99 10 06 */
    c->pc = 0x846Bu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x846Bu: /* DEY IMP 88 */
    c->pc = 0x846Cu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x846Cu: /* BPL REL 10 EE */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x846Eu ^ 0x845Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x845Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x846Eu; } return 1;
case 0x846Eu: /* LDA ABS AD A1 06 */
    c->pc = 0x8471u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8471u: /* CMP IMM C9 03 */
    c->pc = 0x8473u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8473u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8475u ^ 0x847Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x847Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8475u; } return 1;
case 0x8475u: /* LDA IMM A9 01 */
    c->pc = 0x8477u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8477u: /* STA ABS 8D A1 06 */
    c->pc = 0x847Au;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x847Au: /* LDX IMM A2 01 */
    c->pc = 0x847Cu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x847Cu: /* JSR ABS 20 D9 84 */
    push(c, 0x84u); push(c, 0x7Eu); c->pc = 0x84D9u; c->cpu_cycles += 6u; return 1;
case 0x847Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8480u: /* JSR ABS 20 D9 84 */
    push(c, 0x84u); push(c, 0x82u); c->pc = 0x84D9u; c->cpu_cycles += 6u; return 1;
case 0x8483u: /* LDA IMM A9 0B */
    c->pc = 0x8485u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8485u: /* STA ZP 85 01 */
    c->pc = 0x8487u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8487u: /* LDA IMM A9 10 */
    c->pc = 0x8489u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8489u: /* STA ZP 85 02 */
    c->pc = 0x848Bu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x848Bu: /* JSR ABS 20 D4 A2 */
    push(c, 0x84u); push(c, 0x8Du); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x848Eu: /* LDA ZP A5 00 */
    c->pc = 0x8490u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8490u: /* BEQ REL F0 3A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8492u ^ 0x84CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8492u; } return 1;
case 0x8492u: /* LDX ZP A6 B2 */
    c->pc = 0x8494u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8494u: /* LDA ABX BD CD 84 */
    c->pc = 0x8497u;
    ea = (uint16_t)(0x84CDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84CDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8497u: /* STA ABS 8D 61 06 */
    c->pc = 0x849Au;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x849Au: /* LDA ABX BD D0 84 */
    c->pc = 0x849Du;
    ea = (uint16_t)(0x84D0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84D0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x849Du: /* STA ABS 8D 41 06 */
    c->pc = 0x84A0u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84A0u: /* LDA ABX BD D3 84 */
    c->pc = 0x84A3u;
    ea = (uint16_t)(0x84D3u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84D3u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84A3u: /* STA ABS 8D 21 06 */
    c->pc = 0x84A6u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84A6u: /* LDA ABX BD D6 84 */
    c->pc = 0x84A9u;
    ea = (uint16_t)(0x84D6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x84D6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84A9u: /* STA ABS 8D 01 06 */
    c->pc = 0x84ACu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84ACu: /* INC ZP E6 B2 */
    c->pc = 0x84AEu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x84AEu: /* LDA ZP A5 B2 */
    c->pc = 0x84B0u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84B0u: /* CMP IMM C9 03 */
    c->pc = 0x84B2u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x84B2u: /* BNE REL D0 18 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x84B4u ^ 0x84CCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84CCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x84B4u; } return 1;
case 0x84B4u: /* LDA IMM A9 02 */
    c->pc = 0x84B6u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84B6u: /* STA ZP 85 B1 */
    c->pc = 0x84B8u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84B8u: /* LDA ABS AD 21 04 */
    c->pc = 0x84BBu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84BBu: /* AND IMM 29 FB */
    c->pc = 0x84BDu;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84BDu: /* EOR IMM 49 40 */
    c->pc = 0x84BFu;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84BFu: /* STA ABS 8D 21 04 */
    c->pc = 0x84C2u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84C2u: /* LDA IMM A9 00 */
    c->pc = 0x84C4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84C4u: /* STA ZP 85 B2 */
    c->pc = 0x84C6u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84C6u: /* LDA IMM A9 67 */
    c->pc = 0x84C8u;
    v = 0x67u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84C8u: /* JSR ABS 20 0C A1 */
    push(c, 0x84u); push(c, 0xCAu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x84CBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84CCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84D9u: /* LDA ABS AD A8 05 */
    c->pc = 0x84DCu;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84DCu: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x84DEu ^ 0x84E4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84E4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x84DEu; } return 1;
case 0x84DEu: /* JSR ABS 20 4F A1 */
    push(c, 0x84u); push(c, 0xE0u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x84E1u: /* JMP ABS 4C F2 84 */
    c->pc = 0x84F2u; c->cpu_cycles += 3u; return 1;
case 0x84E4u: /* JSR ABS 20 46 A1 */
    push(c, 0x84u); push(c, 0xE6u); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x84E7u: /* LDA ZP A5 02 */
    c->pc = 0x84E9u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x84E9u: /* CMP IMM C9 01 */
    c->pc = 0x84EBu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x84EBu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x84EDu ^ 0x84F2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x84F2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x84EDu; } return 1;
case 0x84EDu: /* LDA IMM A9 12 */
    c->pc = 0x84EFu;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x84EFu: /* STA ABS 8D A8 05 */
    c->pc = 0x84F2u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x84F2u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x84FBu: /* DEX IMP CA */
    c->pc = 0x84FCu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x84FCu: /* LDA ABX BD 4E 86 */
    c->pc = 0x84FFu;
    ea = (uint16_t)(0x864Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x864Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x84FFu: /* STA ZP 85 08 */
    c->pc = 0x8501u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8501u: /* LDA ABX BD 52 86 */
    c->pc = 0x8504u;
    ea = (uint16_t)(0x8652u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8652u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8504u: /* STA ZP 85 09 */
    c->pc = 0x8506u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8506u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8509u: /* JSR ABS 20 09 A2 */
    push(c, 0x85u); push(c, 0x0Bu); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x850Cu: /* LDA ABS AD E1 04 */
    c->pc = 0x850Fu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x850Fu: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8511u ^ 0x851Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x851Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8511u; } return 1;
case 0x8511u: /* LDA IMM A9 61 */
    c->pc = 0x8513u;
    v = 0x61u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8513u: /* LDX IMM A2 01 */
    c->pc = 0x8515u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8515u: /* JSR ABS 20 52 A3 */
    push(c, 0x85u); push(c, 0x17u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8518u: /* INC ABS EE E1 04 */
    c->pc = 0x851Bu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x851Bu: /* JMP ABS 4C 7B 85 */
    c->pc = 0x857Bu; c->cpu_cycles += 3u; return 1;
case 0x851Eu: /* CMP IMM C9 04 */
    c->pc = 0x8520u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8520u: /* BCS REL B0 19 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8522u ^ 0x853Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x853Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8522u; } return 1;
case 0x8522u: /* INC ZP E6 B2 */
    c->pc = 0x8524u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8524u: /* LDA ZP A5 B2 */
    c->pc = 0x8526u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8526u: /* CMP IMM C9 12 */
    c->pc = 0x8528u;
    v = 0x12u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8528u: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x852Au ^ 0x8538u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8538u; }
    else { c->cpu_cycles += 2u; c->pc = 0x852Au; } return 1;
case 0x852Au: /* LDA IMM A9 00 */
    c->pc = 0x852Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x852Cu: /* STA ZP 85 B2 */
    c->pc = 0x852Eu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x852Eu: /* INC ABS EE E1 04 */
    c->pc = 0x8531u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8531u: /* LDA IMM A9 62 */
    c->pc = 0x8533u;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8533u: /* LDX IMM A2 01 */
    c->pc = 0x8535u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8535u: /* JSR ABS 20 52 A3 */
    push(c, 0x85u); push(c, 0x37u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8538u: /* JMP ABS 4C 7B 85 */
    c->pc = 0x857Bu; c->cpu_cycles += 3u; return 1;
case 0x853Bu: /* LDA IMM A9 62 */
    c->pc = 0x853Du;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x853Du: /* JSR ABS 20 2D A2 */
    push(c, 0x85u); push(c, 0x3Fu); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x8540u: /* BCC REL 90 39 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8542u ^ 0x857Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x857Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8542u; } return 1;
case 0x8542u: /* LDA IMM A9 03 */
    c->pc = 0x8544u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8544u: /* STA ZP 85 02 */
    c->pc = 0x8546u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8546u: /* LDA IMM A9 62 */
    c->pc = 0x8548u;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8548u: /* LDX IMM A2 01 */
    c->pc = 0x854Au;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x854Au: /* JSR ABS 20 52 A3 */
    push(c, 0x85u); push(c, 0x4Cu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x854Du: /* BCS REL B0 25 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x854Fu ^ 0x8574u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8574u; }
    else { c->cpu_cycles += 2u; c->pc = 0x854Fu; } return 1;
case 0x854Fu: /* LDX ZP A6 02 */
    c->pc = 0x8551u;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8551u: /* LDA IMM A9 C1 */
    c->pc = 0x8553u;
    v = 0xC1u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8553u: /* STA ABY 99 30 04 */
    c->pc = 0x8556u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8556u: /* LDA IMM A9 20 */
    c->pc = 0x8558u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8558u: /* STA ABY 99 B0 04 */
    c->pc = 0x855Bu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x855Bu: /* LDA IMM A9 01 */
    c->pc = 0x855Du;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x855Du: /* STA ABY 99 F0 04 */
    c->pc = 0x8560u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8560u: /* LDA IMM A9 FE */
    c->pc = 0x8562u;
    v = 0xFEu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8562u: /* STA ABY 99 50 06 */
    c->pc = 0x8565u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8565u: /* LDA IMM A9 02 */
    c->pc = 0x8567u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8567u: /* STA ABY 99 10 06 */
    c->pc = 0x856Au;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x856Au: /* LDA ABX BD 7F 85 */
    c->pc = 0x856Du;
    ea = (uint16_t)(0x857Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x857Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x856Du: /* STA ABY 99 70 04 */
    c->pc = 0x8570u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8570u: /* DEC ZP C6 02 */
    c->pc = 0x8572u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8572u: /* BPL REL 10 D2 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8574u ^ 0x8546u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8546u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8574u; } return 1;
case 0x8574u: /* INC ZP E6 B1 */
    c->pc = 0x8576u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8576u: /* LDA IMM A9 6F */
    c->pc = 0x8578u;
    v = 0x6Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8578u: /* JSR ABS 20 0C A1 */
    push(c, 0x85u); push(c, 0x7Au); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x857Bu: /* JSR ABS 20 36 86 */
    push(c, 0x85u); push(c, 0x7Du); c->pc = 0x8636u; c->cpu_cycles += 6u; return 1;
case 0x857Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8583u: /* LDA ABS AD A1 06 */
    c->pc = 0x8586u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8586u: /* CMP IMM C9 02 */
    c->pc = 0x8588u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8588u: /* BCC REL 90 2D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x858Au ^ 0x85B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x858Au; } return 1;
case 0x858Au: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x858Cu ^ 0x85B0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85B0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x858Cu; } return 1;
case 0x858Cu: /* LDA ABS AD 81 06 */
    c->pc = 0x858Fu;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x858Fu: /* BNE REL D0 26 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8591u ^ 0x85B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8591u; } return 1;
case 0x8591u: /* LDA IMM A9 61 */
    c->pc = 0x8593u;
    v = 0x61u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8593u: /* JSR ABS 20 2D A2 */
    push(c, 0x85u); push(c, 0x95u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x8596u: /* BCS REL B0 1F */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8598u ^ 0x85B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8598u; } return 1;
case 0x8598u: /* LDA IMM A9 04 */
    c->pc = 0x859Au;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x859Au: /* STA ABY 99 10 06 */
    c->pc = 0x859Du;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x859Du: /* LDA ABY B9 30 04 */
    c->pc = 0x85A0u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x85A0u: /* AND IMM 29 BF */
    c->pc = 0x85A2u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85A2u: /* STA ZP 85 00 */
    c->pc = 0x85A4u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85A4u: /* LDA ABS AD 21 04 */
    c->pc = 0x85A7u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85A7u: /* AND IMM 29 40 */
    c->pc = 0x85A9u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85A9u: /* ORA ZP 05 00 */
    c->pc = 0x85ABu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85ABu: /* STA ABY 99 30 04 */
    c->pc = 0x85AEu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x85AEu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85B0u ^ 0x85B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85B0u; } return 1;
case 0x85B0u: /* LDA IMM A9 6E */
    c->pc = 0x85B2u;
    v = 0x6Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85B2u: /* JSR ABS 20 0C A1 */
    push(c, 0x85u); push(c, 0xB4u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x85B5u: /* INC ZP E6 B1 */
    c->pc = 0x85B7u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x85B7u: /* JSR ABS 20 36 86 */
    push(c, 0x85u); push(c, 0xB9u); c->pc = 0x8636u; c->cpu_cycles += 6u; return 1;
case 0x85BAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x85BBu: /* JSR ABS 20 36 86 */
    push(c, 0x85u); push(c, 0xBDu); c->pc = 0x8636u; c->cpu_cycles += 6u; return 1;
case 0x85BEu: /* LDA ABS AD A1 06 */
    c->pc = 0x85C1u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85C1u: /* CMP IMM C9 02 */
    c->pc = 0x85C3u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x85C3u: /* BCC REL 90 70 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x85C5u ^ 0x8635u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8635u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85C5u; } return 1;
case 0x85C5u: /* BNE REL D0 52 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85C7u ^ 0x8619u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8619u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85C7u; } return 1;
case 0x85C7u: /* LDA ABS AD 81 06 */
    c->pc = 0x85CAu;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85CAu: /* BNE REL D0 12 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x85CCu ^ 0x85DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x85DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x85CCu; } return 1;
case 0x85CCu: /* LDA IMM A9 04 */
    c->pc = 0x85CEu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85CEu: /* STA ABS 8D 41 06 */
    c->pc = 0x85D1u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85D1u: /* LDA IMM A9 01 */
    c->pc = 0x85D3u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85D3u: /* STA ABS 8D 01 06 */
    c->pc = 0x85D6u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85D6u: /* LDA ABS AD 21 04 */
    c->pc = 0x85D9u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85D9u: /* ORA IMM 09 04 */
    c->pc = 0x85DBu;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85DBu: /* STA ABS 8D 21 04 */
    c->pc = 0x85DEu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85DEu: /* LDA IMM A9 01 */
    c->pc = 0x85E0u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85E0u: /* STA ABS 8D 81 06 */
    c->pc = 0x85E3u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85E3u: /* LDA ABS AD 41 06 */
    c->pc = 0x85E6u;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85E6u: /* PHP IMP 08 */
    c->pc = 0x85E7u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x85E7u: /* LDA IMM A9 0F */
    c->pc = 0x85E9u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85E9u: /* STA ZP 85 01 */
    c->pc = 0x85EBu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85EBu: /* LDA IMM A9 10 */
    c->pc = 0x85EDu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85EDu: /* STA ZP 85 02 */
    c->pc = 0x85EFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85EFu: /* JSR ABS 20 D4 A2 */
    push(c, 0x85u); push(c, 0xF1u); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x85F2u: /* PLP IMP 28 */
    c->pc = 0x85F3u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x85F3u: /* BPL REL 10 40 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x85F5u ^ 0x8635u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8635u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85F5u; } return 1;
case 0x85F5u: /* LDA ZP A5 00 */
    c->pc = 0x85F7u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x85F7u: /* BEQ REL F0 3C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x85F9u ^ 0x8635u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8635u; }
    else { c->cpu_cycles += 2u; c->pc = 0x85F9u; } return 1;
case 0x85F9u: /* LDA IMM A9 03 */
    c->pc = 0x85FBu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x85FBu: /* STA ABS 8D A1 06 */
    c->pc = 0x85FEu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x85FEu: /* LDA IMM A9 00 */
    c->pc = 0x8600u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8600u: /* STA ABS 8D 41 06 */
    c->pc = 0x8603u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8603u: /* STA ABS 8D 61 06 */
    c->pc = 0x8606u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8606u: /* STA ABS 8D 01 06 */
    c->pc = 0x8609u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8609u: /* STA ABS 8D 81 06 */
    c->pc = 0x860Cu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x860Cu: /* STA ABS 8D E1 04 */
    c->pc = 0x860Fu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x860Fu: /* STA ZP 85 B2 */
    c->pc = 0x8611u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8611u: /* LDA ABS AD 21 04 */
    c->pc = 0x8614u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8614u: /* AND IMM 29 FB */
    c->pc = 0x8616u;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8616u: /* STA ABS 8D 21 04 */
    c->pc = 0x8619u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8619u: /* LDA ABS AD A1 06 */
    c->pc = 0x861Cu;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x861Cu: /* CMP IMM C9 04 */
    c->pc = 0x861Eu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x861Eu: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8620u ^ 0x8635u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8635u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8620u; } return 1;
case 0x8620u: /* LDA IMM A9 00 */
    c->pc = 0x8622u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8622u: /* STA ABS 8D 81 06 */
    c->pc = 0x8625u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8625u: /* LDA IMM A9 62 */
    c->pc = 0x8627u;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8627u: /* JSR ABS 20 2D A2 */
    push(c, 0x86u); push(c, 0x29u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x862Au: /* BCC REL 90 09 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x862Cu ^ 0x8635u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8635u; }
    else { c->cpu_cycles += 2u; c->pc = 0x862Cu; } return 1;
case 0x862Cu: /* LDA IMM A9 02 */
    c->pc = 0x862Eu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x862Eu: /* STA ZP 85 B1 */
    c->pc = 0x8630u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8630u: /* LDA IMM A9 6D */
    c->pc = 0x8632u;
    v = 0x6Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8632u: /* JSR ABS 20 0C A1 */
    push(c, 0x86u); push(c, 0x34u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8635u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8636u: /* LDA ABS AD A8 05 */
    c->pc = 0x8639u;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8639u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x863Bu ^ 0x863Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x863Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x863Bu; } return 1;
case 0x863Bu: /* JSR ABS 20 4F A1 */
    push(c, 0x86u); push(c, 0x3Du); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x863Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x863Fu: /* JSR ABS 20 46 A1 */
    push(c, 0x86u); push(c, 0x41u); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x8642u: /* LDA ZP A5 02 */
    c->pc = 0x8644u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8644u: /* CMP IMM C9 01 */
    c->pc = 0x8646u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8646u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8648u ^ 0x864Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x864Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8648u; } return 1;
case 0x8648u: /* LDA IMM A9 12 */
    c->pc = 0x864Au;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x864Au: /* STA ABS 8D A8 05 */
    c->pc = 0x864Du;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x864Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8656u: /* DEX IMP CA */
    c->pc = 0x8657u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8657u: /* LDA ABX BD 96 87 */
    c->pc = 0x865Au;
    ea = (uint16_t)(0x8796u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8796u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x865Au: /* STA ZP 85 08 */
    c->pc = 0x865Cu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x865Cu: /* LDA ABX BD 9A 87 */
    c->pc = 0x865Fu;
    ea = (uint16_t)(0x879Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x879Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x865Fu: /* STA ZP 85 09 */
    c->pc = 0x8661u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8661u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8664u: /* LDA IMM A9 83 */
    c->pc = 0x8666u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8666u: /* STA ABS 8D 21 04 */
    c->pc = 0x8669u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8669u: /* JSR ABS 20 09 A2 */
    push(c, 0x86u); push(c, 0x6Bu); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x866Cu: /* LDA ABX BD A0 06 */
    c->pc = 0x866Fu;
    ea = (uint16_t)(0x06A0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x06A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x866Fu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8671u ^ 0x8674u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8674u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8671u; } return 1;
case 0x8671u: /* STA ABS 8D 81 06 */
    c->pc = 0x8674u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8674u: /* LDA ABS AD E1 04 */
    c->pc = 0x8677u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8677u: /* BNE REL D0 27 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8679u ^ 0x86A0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86A0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8679u; } return 1;
case 0x8679u: /* SEC IMP 38 */
    c->pc = 0x867Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x867Au: /* LDA ABS AD A1 04 */
    c->pc = 0x867Du;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x867Du: /* SBC ABS ED A0 04 */
    c->pc = 0x8680u;
    ea = 0x04A0u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8680u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8682u ^ 0x8686u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8686u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8682u; } return 1;
case 0x8682u: /* EOR IMM 49 FF */
    c->pc = 0x8684u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8684u: /* ADC IMM 69 01 */
    c->pc = 0x8686u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8686u: /* CMP IMM C9 03 */
    c->pc = 0x8688u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8688u: /* BCS REL B0 5C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x868Au ^ 0x86E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x868Au; } return 1;
case 0x868Au: /* LDA ZP A5 4A */
    c->pc = 0x868Cu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x868Cu: /* STA ZP 85 01 */
    c->pc = 0x868Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x868Eu: /* LDA IMM A9 03 */
    c->pc = 0x8690u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8690u: /* STA ZP 85 02 */
    c->pc = 0x8692u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8692u: /* JSR ABS 20 4E C8 */
    push(c, 0x86u); push(c, 0x94u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x8695u: /* INC ZP E6 04 */
    c->pc = 0x8697u;
    ea = 0x04u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8697u: /* LDA ZP A5 04 */
    c->pc = 0x8699u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8699u: /* STA ABS 8D E1 04 */
    c->pc = 0x869Cu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x869Cu: /* LDA IMM A9 01 */
    c->pc = 0x869Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x869Eu: /* STA ZP 85 B2 */
    c->pc = 0x86A0u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86A0u: /* DEC ZP C6 B2 */
    c->pc = 0x86A2u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x86A2u: /* BNE REL D0 42 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86A4u ^ 0x86E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86A4u; } return 1;
case 0x86A4u: /* LDA IMM A9 1F */
    c->pc = 0x86A6u;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86A6u: /* STA ZP 85 B2 */
    c->pc = 0x86A8u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86A8u: /* LDA IMM A9 5B */
    c->pc = 0x86AAu;
    v = 0x5Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86AAu: /* LDX IMM A2 01 */
    c->pc = 0x86ACu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86ACu: /* JSR ABS 20 52 A3 */
    push(c, 0x86u); push(c, 0xAEu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x86AFu: /* LDA IMM A9 01 */
    c->pc = 0x86B1u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86B1u: /* STA ABS 8D A1 06 */
    c->pc = 0x86B4u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86B4u: /* DEC ABS CE E1 04 */
    c->pc = 0x86B7u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x86B7u: /* BNE REL D0 2D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x86B9u ^ 0x86E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x86E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x86B9u; } return 1;
case 0x86B9u: /* LDA ABS AD A0 04 */
    c->pc = 0x86BCu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86BCu: /* PHA IMP 48 */
    c->pc = 0x86BDu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86BDu: /* LDA IMM A9 50 */
    c->pc = 0x86BFu;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86BFu: /* STA ABS 8D A0 04 */
    c->pc = 0x86C2u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86C2u: /* LDA IMM A9 01 */
    c->pc = 0x86C4u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86C4u: /* STA ZP 85 09 */
    c->pc = 0x86C6u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86C6u: /* LDA IMM A9 60 */
    c->pc = 0x86C8u;
    v = 0x60u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86C8u: /* STA ZP 85 08 */
    c->pc = 0x86CAu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86CAu: /* LDX IMM A2 01 */
    c->pc = 0x86CCu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x86CCu: /* STX ZP 86 2B */
    c->pc = 0x86CEu;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x86CEu: /* JSR ABS 20 8C A3 */
    push(c, 0x86u); push(c, 0xD0u); c->pc = 0xA38Cu; c->cpu_cycles += 6u; return 1;
case 0x86D1u: /* PLA IMP 68 */
    c->pc = 0x86D2u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86D2u: /* STA ABS 8D A0 04 */
    c->pc = 0x86D5u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86D5u: /* LDA IMM A9 00 */
    c->pc = 0x86D7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86D7u: /* STA ZP 85 B2 */
    c->pc = 0x86D9u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x86D9u: /* LDA ABS AD 21 04 */
    c->pc = 0x86DCu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86DCu: /* STA ABS 8D E1 04 */
    c->pc = 0x86DFu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86DFu: /* INC ZP E6 B1 */
    c->pc = 0x86E1u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x86E1u: /* LDA IMM A9 62 */
    c->pc = 0x86E3u;
    v = 0x62u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86E3u: /* JSR ABS 20 0C A1 */
    push(c, 0x86u); push(c, 0xE5u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x86E6u: /* JSR ABS 20 71 87 */
    push(c, 0x86u); push(c, 0xE8u); c->pc = 0x8771u; c->cpu_cycles += 6u; return 1;
case 0x86E9u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x86EAu: /* LDA ABS AD E1 04 */
    c->pc = 0x86EDu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86EDu: /* STA ABS 8D 21 04 */
    c->pc = 0x86F0u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86F0u: /* JSR ABS 20 71 87 */
    push(c, 0x86u); push(c, 0xF2u); c->pc = 0x8771u; c->cpu_cycles += 6u; return 1;
case 0x86F3u: /* LDA ABS AD A1 04 */
    c->pc = 0x86F6u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86F6u: /* CMP IMM C9 50 */
    c->pc = 0x86F8u;
    v = 0x50u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x86F8u: /* BCS REL B0 14 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x86FAu ^ 0x870Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x870Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x86FAu; } return 1;
case 0x86FAu: /* LDA IMM A9 FF */
    c->pc = 0x86FCu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x86FCu: /* STA ABS 8D 41 06 */
    c->pc = 0x86FFu;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x86FFu: /* LDA IMM A9 00 */
    c->pc = 0x8701u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8701u: /* STA ABS 8D 61 06 */
    c->pc = 0x8704u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8704u: /* STA ABS 8D 01 06 */
    c->pc = 0x8707u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8707u: /* STA ABS 8D 21 06 */
    c->pc = 0x870Au;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x870Au: /* LDA IMM A9 04 */
    c->pc = 0x870Cu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x870Cu: /* STA ZP 85 B1 */
    c->pc = 0x870Eu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x870Eu: /* JSR ABS 20 09 A2 */
    push(c, 0x87u); push(c, 0x10u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8711u: /* LDA ZP A5 B2 */
    c->pc = 0x8713u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8713u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8715u ^ 0x872Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x872Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8715u; } return 1;
case 0x8715u: /* SEC IMP 38 */
    c->pc = 0x8716u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8716u: /* LDA ABS AD A1 04 */
    c->pc = 0x8719u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8719u: /* SBC ABS ED A0 04 */
    c->pc = 0x871Cu;
    ea = 0x04A0u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x871Cu: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x871Eu ^ 0x8722u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8722u; }
    else { c->cpu_cycles += 2u; c->pc = 0x871Eu; } return 1;
case 0x871Eu: /* EOR IMM 49 FF */
    c->pc = 0x8720u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8720u: /* ADC IMM 69 01 */
    c->pc = 0x8722u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8722u: /* CMP IMM C9 03 */
    c->pc = 0x8724u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8724u: /* BCS REL B0 21 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8726u ^ 0x8747u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8747u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8726u; } return 1;
case 0x8726u: /* LDA IMM A9 01 */
    c->pc = 0x8728u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8728u: /* STA ABS 8D A7 05 */
    c->pc = 0x872Bu;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x872Bu: /* LDA IMM A9 04 */
    c->pc = 0x872Du;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x872Du: /* STA ZP 85 B2 */
    c->pc = 0x872Fu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x872Fu: /* DEC ABS CE A7 05 */
    c->pc = 0x8732u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8732u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8734u ^ 0x8747u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8747u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8734u; } return 1;
case 0x8734u: /* LDA IMM A9 12 */
    c->pc = 0x8736u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8736u: /* STA ABS 8D A7 05 */
    c->pc = 0x8739u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8739u: /* LDA IMM A9 03 */
    c->pc = 0x873Bu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x873Bu: /* STA ABS 8D A1 06 */
    c->pc = 0x873Eu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x873Eu: /* LDA IMM A9 5A */
    c->pc = 0x8740u;
    v = 0x5Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8740u: /* LDX IMM A2 01 */
    c->pc = 0x8742u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8742u: /* JSR ABS 20 52 A3 */
    push(c, 0x87u); push(c, 0x44u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8745u: /* DEC ZP C6 B2 */
    c->pc = 0x8747u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8747u: /* LDA ABS AD A1 06 */
    c->pc = 0x874Au;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x874Au: /* CMP IMM C9 02 */
    c->pc = 0x874Cu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x874Cu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x874Eu ^ 0x8753u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8753u; }
    else { c->cpu_cycles += 2u; c->pc = 0x874Eu; } return 1;
case 0x874Eu: /* LDA IMM A9 00 */
    c->pc = 0x8750u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8750u: /* STA ABS 8D A1 06 */
    c->pc = 0x8753u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8753u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8754u: /* JSR ABS 20 71 87 */
    push(c, 0x87u); push(c, 0x56u); c->pc = 0x8771u; c->cpu_cycles += 6u; return 1;
case 0x8757u: /* LDA ZP A5 00 */
    c->pc = 0x8759u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8759u: /* BEQ REL F0 B3 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x875Bu ^ 0x870Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x870Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x875Bu; } return 1;
case 0x875Bu: /* LDA IMM A9 02 */
    c->pc = 0x875Du;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x875Du: /* STA ZP 85 B1 */
    c->pc = 0x875Fu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x875Fu: /* LDA IMM A9 00 */
    c->pc = 0x8761u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8761u: /* STA ABS 8D 41 06 */
    c->pc = 0x8764u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8764u: /* STA ABS 8D E1 04 */
    c->pc = 0x8767u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8767u: /* STA ZP 85 B2 */
    c->pc = 0x8769u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8769u: /* LDA IMM A9 61 */
    c->pc = 0x876Bu;
    v = 0x61u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x876Bu: /* JSR ABS 20 0C A1 */
    push(c, 0x87u); push(c, 0x6Du); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x876Eu: /* JMP ABS 4C 47 87 */
    c->pc = 0x8747u; c->cpu_cycles += 3u; return 1;
case 0x8771u: /* LDA ABS AD A8 05 */
    c->pc = 0x8774u;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8774u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8776u ^ 0x877Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x877Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8776u; } return 1;
case 0x8776u: /* JSR ABS 20 4F A1 */
    push(c, 0x87u); push(c, 0x78u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x8779u: /* JMP ABS 4C 8A 87 */
    c->pc = 0x878Au; c->cpu_cycles += 3u; return 1;
case 0x877Cu: /* JSR ABS 20 46 A1 */
    push(c, 0x87u); push(c, 0x7Eu); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x877Fu: /* LDA ZP A5 02 */
    c->pc = 0x8781u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8781u: /* CMP IMM C9 01 */
    c->pc = 0x8783u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8783u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8785u ^ 0x878Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x878Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8785u; } return 1;
case 0x8785u: /* LDA IMM A9 12 */
    c->pc = 0x8787u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8787u: /* STA ABS 8D A8 05 */
    c->pc = 0x878Au;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x878Au: /* LDA IMM A9 09 */
    c->pc = 0x878Cu;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x878Cu: /* STA ZP 85 01 */
    c->pc = 0x878Eu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x878Eu: /* LDA IMM A9 0C */
    c->pc = 0x8790u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8790u: /* STA ZP 85 02 */
    c->pc = 0x8792u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8792u: /* JSR ABS 20 D4 A2 */
    push(c, 0x87u); push(c, 0x94u); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x8795u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x879Eu: /* DEX IMP CA */
    c->pc = 0x879Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x879Fu: /* LDA ABX BD 4C 89 */
    c->pc = 0x87A2u;
    ea = (uint16_t)(0x894Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x894Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87A2u: /* STA ZP 85 08 */
    c->pc = 0x87A4u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87A4u: /* LDA ABX BD 51 89 */
    c->pc = 0x87A7u;
    ea = (uint16_t)(0x8951u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8951u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87A7u: /* STA ZP 85 09 */
    c->pc = 0x87A9u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87A9u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x87ACu: /* LDA ABS AD E1 04 */
    c->pc = 0x87AFu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87AFu: /* BNE REL D0 51 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x87B1u ^ 0x8802u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8802u; }
    else { c->cpu_cycles += 2u; c->pc = 0x87B1u; } return 1;
case 0x87B1u: /* LDA IMM A9 87 */
    c->pc = 0x87B3u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87B3u: /* STA ABS 8D 21 04 */
    c->pc = 0x87B6u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87B6u: /* JSR ABS 20 09 A2 */
    push(c, 0x87u); push(c, 0xB8u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x87B9u: /* LDA ZP A5 4A */
    c->pc = 0x87BBu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87BBu: /* STA ZP 85 01 */
    c->pc = 0x87BDu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87BDu: /* LDA IMM A9 03 */
    c->pc = 0x87BFu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87BFu: /* STA ZP 85 02 */
    c->pc = 0x87C1u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87C1u: /* JSR ABS 20 4E C8 */
    push(c, 0x87u); push(c, 0xC3u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x87C4u: /* LDX ZP A6 04 */
    c->pc = 0x87C6u;
    ea = 0x04u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x87C6u: /* LDA ZP A5 00 */
    c->pc = 0x87C8u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87C8u: /* CLC IMP 18 */
    c->pc = 0x87C9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x87C9u: /* ADC IMM 69 20 */
    c->pc = 0x87CBu;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x87CBu: /* STA ZP 85 01 */
    c->pc = 0x87CDu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87CDu: /* SEC IMP 38 */
    c->pc = 0x87CEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x87CEu: /* SBC IMM E9 40 */
    c->pc = 0x87D0u;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x87D0u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x87D2u ^ 0x87D4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x87D4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x87D2u; } return 1;
case 0x87D2u: /* LDA IMM A9 00 */
    c->pc = 0x87D4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87D4u: /* STA ZP 85 02 */
    c->pc = 0x87D6u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87D6u: /* LDA IMM A9 00 */
    c->pc = 0x87D8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87D8u: /* STA ABS 8D 61 06 */
    c->pc = 0x87DBu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87DBu: /* LDA ABX BD 93 88 */
    c->pc = 0x87DEu;
    ea = (uint16_t)(0x8893u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8893u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87DEu: /* STA ABS 8D 41 06 */
    c->pc = 0x87E1u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87E1u: /* LDA ZPX B5 00 */
    c->pc = 0x87E3u;
    ea = (uint8_t)(0x00u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87E3u: /* STA ZP 85 0B */
    c->pc = 0x87E5u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87E5u: /* LDA ABX BD 96 88 */
    c->pc = 0x87E8u;
    ea = (uint16_t)(0x8896u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8896u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x87E8u: /* STA ZP 85 0D */
    c->pc = 0x87EAu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87EAu: /* LDA IMM A9 00 */
    c->pc = 0x87ECu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x87ECu: /* STA ZP 85 0A */
    c->pc = 0x87EEu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87EEu: /* STA ZP 85 0C */
    c->pc = 0x87F0u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87F0u: /* JSR ABS 20 74 C8 */
    push(c, 0x87u); push(c, 0xF2u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0x87F3u: /* LDA ZP A5 0F */
    c->pc = 0x87F5u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87F5u: /* STA ABS 8D 01 06 */
    c->pc = 0x87F8u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87F8u: /* LDA ZP A5 0E */
    c->pc = 0x87FAu;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x87FAu: /* STA ABS 8D 21 06 */
    c->pc = 0x87FDu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x87FDu: /* INC ABS EE E1 04 */
    c->pc = 0x8800u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8800u: /* INC ZP E6 B2 */
    c->pc = 0x8802u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8802u: /* LDA IMM A9 08 */
    c->pc = 0x8804u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8804u: /* STA ZP 85 01 */
    c->pc = 0x8806u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8806u: /* LDA IMM A9 0C */
    c->pc = 0x8808u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8808u: /* STA ZP 85 02 */
    c->pc = 0x880Au;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x880Au: /* LDA ABS AD 41 06 */
    c->pc = 0x880Du;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x880Du: /* PHP IMP 08 */
    c->pc = 0x880Eu;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x880Eu: /* JSR ABS 20 D4 A2 */
    push(c, 0x88u); push(c, 0x10u); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x8811u: /* PLP IMP 28 */
    c->pc = 0x8812u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x8812u: /* BPL REL 10 12 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8814u ^ 0x8826u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8826u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8814u; } return 1;
case 0x8814u: /* LDA ZP A5 00 */
    c->pc = 0x8816u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8816u: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8818u ^ 0x8826u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8826u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8818u; } return 1;
case 0x8818u: /* DEC ABS CE E1 04 */
    c->pc = 0x881Bu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x881Bu: /* LDA ZP A5 B2 */
    c->pc = 0x881Du;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x881Du: /* CMP IMM C9 03 */
    c->pc = 0x881Fu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x881Fu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8821u ^ 0x8826u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8826u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8821u; } return 1;
case 0x8821u: /* LDX IMM A2 01 */
    c->pc = 0x8823u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8823u: /* JMP ABS 4C 9E 88 */
    c->pc = 0x889Eu; c->cpu_cycles += 3u; return 1;
case 0x8826u: /* LDA ABS AD A1 06 */
    c->pc = 0x8829u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8829u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x882Bu ^ 0x882Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x882Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x882Bu; } return 1;
case 0x882Bu: /* STA ABS 8D 81 06 */
    c->pc = 0x882Eu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x882Eu: /* LDA ABS AD 41 06 */
    c->pc = 0x8831u;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8831u: /* PHP IMP 08 */
    c->pc = 0x8832u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x8832u: /* JSR ABS 20 0E 89 */
    push(c, 0x88u); push(c, 0x34u); c->pc = 0x890Eu; c->cpu_cycles += 6u; return 1;
case 0x8835u: /* PLP IMP 28 */
    c->pc = 0x8836u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x8836u: /* BMI REL 30 5A */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8838u ^ 0x8892u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8892u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8838u; } return 1;
case 0x8838u: /* LDA ABS AD 41 06 */
    c->pc = 0x883Bu;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x883Bu: /* BPL REL 10 55 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x883Du ^ 0x8892u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8892u; }
    else { c->cpu_cycles += 2u; c->pc = 0x883Du; } return 1;
case 0x883Du: /* LDA ZP A5 B2 */
    c->pc = 0x883Fu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x883Fu: /* CMP IMM C9 02 */
    c->pc = 0x8841u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8841u: /* BNE REL D0 4F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8843u ^ 0x8892u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8892u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8843u; } return 1;
case 0x8843u: /* LDA ZP A5 B1 */
    c->pc = 0x8845u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8845u: /* CMP IMM C9 02 */
    c->pc = 0x8847u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8847u: /* BNE REL D0 49 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8849u ^ 0x8892u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8892u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8849u; } return 1;
case 0x8849u: /* LDA IMM A9 00 */
    c->pc = 0x884Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x884Bu: /* STA ABS 8D 81 06 */
    c->pc = 0x884Eu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x884Eu: /* LDA IMM A9 01 */
    c->pc = 0x8850u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8850u: /* STA ABS 8D A1 06 */
    c->pc = 0x8853u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8853u: /* LDA ABS AD A0 04 */
    c->pc = 0x8856u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8856u: /* PHA IMP 48 */
    c->pc = 0x8857u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8857u: /* SEC IMP 38 */
    c->pc = 0x8858u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8858u: /* SBC IMM E9 18 */
    c->pc = 0x885Au;
    v = 0x18u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x885Au: /* STA ABS 8D A0 04 */
    c->pc = 0x885Du;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x885Du: /* LDA IMM A9 03 */
    c->pc = 0x885Fu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x885Fu: /* STA ZP 85 02 */
    c->pc = 0x8861u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8861u: /* LDA IMM A9 59 */
    c->pc = 0x8863u;
    v = 0x59u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8863u: /* LDX IMM A2 01 */
    c->pc = 0x8865u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8865u: /* JSR ABS 20 52 A3 */
    push(c, 0x88u); push(c, 0x67u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8868u: /* BCS REL B0 24 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x886Au ^ 0x888Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x888Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x886Au; } return 1;
case 0x886Au: /* TYA IMP 98 */
    c->pc = 0x886Bu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x886Bu: /* CLC IMP 18 */
    c->pc = 0x886Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x886Cu: /* ADC IMM 69 10 */
    c->pc = 0x886Eu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x886Eu: /* TAX IMP AA */
    c->pc = 0x886Fu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x886Fu: /* STA ZP 85 2B */
    c->pc = 0x8871u;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8871u: /* LDA IMM A9 25 */
    c->pc = 0x8873u;
    v = 0x25u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8873u: /* STA ABX 9D E0 04 */
    c->pc = 0x8876u;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8876u: /* LDA IMM A9 04 */
    c->pc = 0x8878u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8878u: /* STA ZP 85 09 */
    c->pc = 0x887Au;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x887Au: /* LDA IMM A9 00 */
    c->pc = 0x887Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x887Cu: /* STA ZP 85 08 */
    c->pc = 0x887Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x887Eu: /* JSR ABS 20 8C A3 */
    push(c, 0x88u); push(c, 0x80u); c->pc = 0xA38Cu; c->cpu_cycles += 6u; return 1;
case 0x8881u: /* CLC IMP 18 */
    c->pc = 0x8882u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8882u: /* LDA ABS AD A0 04 */
    c->pc = 0x8885u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8885u: /* ADC IMM 69 18 */
    c->pc = 0x8887u;
    v = 0x18u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8887u: /* STA ABS 8D A0 04 */
    c->pc = 0x888Au;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x888Au: /* DEC ZP C6 02 */
    c->pc = 0x888Cu;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x888Cu: /* BNE REL D0 D3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x888Eu ^ 0x8861u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8861u; }
    else { c->cpu_cycles += 2u; c->pc = 0x888Eu; } return 1;
case 0x888Eu: /* PLA IMP 68 */
    c->pc = 0x888Fu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x888Fu: /* STA ABS 8D A0 04 */
    c->pc = 0x8892u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8892u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8899u: /* JSR ABS 20 09 A2 */
    push(c, 0x88u); push(c, 0x9Bu); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x889Cu: /* LDX IMM A2 00 */
    c->pc = 0x889Eu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x889Eu: /* LDA IMM A9 00 */
    c->pc = 0x88A0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88A0u: /* STA ABS 8D E1 04 */
    c->pc = 0x88A3u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88A3u: /* STA ZP 85 B2 */
    c->pc = 0x88A5u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88A5u: /* LDA ABX BD B4 88 */
    c->pc = 0x88A8u;
    ea = (uint16_t)(0x88B4u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x88B4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x88A8u: /* STA ZP 85 B1 */
    c->pc = 0x88AAu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88AAu: /* LDA ABX BD B6 88 */
    c->pc = 0x88ADu;
    ea = (uint16_t)(0x88B6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x88B6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x88ADu: /* JSR ABS 20 0C A1 */
    push(c, 0x88u); push(c, 0xAFu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x88B0u: /* JSR ABS 20 03 89 */
    push(c, 0x88u); push(c, 0xB2u); c->pc = 0x8903u; c->cpu_cycles += 6u; return 1;
case 0x88B3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88B8u: /* DEC ABS CE E1 04 */
    c->pc = 0x88BBu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x88BBu: /* BEQ REL F0 2A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x88BDu ^ 0x88E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88BDu; } return 1;
case 0x88BDu: /* JSR ABS 20 03 89 */
    push(c, 0x88u); push(c, 0xBFu); c->pc = 0x8903u; c->cpu_cycles += 6u; return 1;
case 0x88C0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88C1u: /* LDA ABS AD E1 04 */
    c->pc = 0x88C4u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88C4u: /* BNE REL D0 14 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x88C6u ^ 0x88DAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88DAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x88C6u; } return 1;
case 0x88C6u: /* LDA IMM A9 87 */
    c->pc = 0x88C8u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88C8u: /* STA ABS 8D 21 04 */
    c->pc = 0x88CBu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88CBu: /* JSR ABS 20 09 A2 */
    push(c, 0x88u); push(c, 0xCDu); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x88CEu: /* LDA IMM A9 02 */
    c->pc = 0x88D0u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88D0u: /* STA ABS 8D 01 06 */
    c->pc = 0x88D3u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88D3u: /* LDA IMM A9 3E */
    c->pc = 0x88D5u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88D5u: /* STA ZP 85 B2 */
    c->pc = 0x88D7u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88D7u: /* INC ABS EE E1 04 */
    c->pc = 0x88DAu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x88DAu: /* DEC ZP C6 B2 */
    c->pc = 0x88DCu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x88DCu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x88DEu ^ 0x88E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x88E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x88DEu; } return 1;
case 0x88DEu: /* LDX IMM A2 00 */
    c->pc = 0x88E0u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x88E0u: /* JSR ABS 20 9E 88 */
    push(c, 0x88u); push(c, 0xE2u); c->pc = 0x889Eu; c->cpu_cycles += 6u; return 1;
case 0x88E3u: /* JSR ABS 20 03 89 */
    push(c, 0x88u); push(c, 0xE5u); c->pc = 0x8903u; c->cpu_cycles += 6u; return 1;
case 0x88E6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x88E7u: /* LDA IMM A9 00 */
    c->pc = 0x88E9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88E9u: /* STA ABS 8D E1 04 */
    c->pc = 0x88ECu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x88ECu: /* STA ZP 85 B2 */
    c->pc = 0x88EEu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88EEu: /* LDA IMM A9 03 */
    c->pc = 0x88F0u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88F0u: /* STA ZP 85 B1 */
    c->pc = 0x88F2u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88F2u: /* LDA IMM A9 56 */
    c->pc = 0x88F4u;
    v = 0x56u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88F4u: /* JSR ABS 20 0C A1 */
    push(c, 0x88u); push(c, 0xF6u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x88F7u: /* LDA IMM A9 0B */
    c->pc = 0x88F9u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88F9u: /* STA ZP 85 01 */
    c->pc = 0x88FBu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88FBu: /* LDA IMM A9 0C */
    c->pc = 0x88FDu;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x88FDu: /* STA ZP 85 02 */
    c->pc = 0x88FFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x88FFu: /* JSR ABS 20 2E A1 */
    push(c, 0x89u); push(c, 0x01u); c->pc = 0xA12Eu; c->cpu_cycles += 6u; return 1;
case 0x8902u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8903u: /* LDA IMM A9 08 */
    c->pc = 0x8905u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8905u: /* STA ZP 85 01 */
    c->pc = 0x8907u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8907u: /* LDA IMM A9 0C */
    c->pc = 0x8909u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8909u: /* STA ZP 85 02 */
    c->pc = 0x890Bu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x890Bu: /* JSR ABS 20 D4 A2 */
    push(c, 0x89u); push(c, 0x0Du); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x890Eu: /* LDA ABS AD A8 05 */
    c->pc = 0x8911u;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8911u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8913u ^ 0x8919u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8919u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8913u; } return 1;
case 0x8913u: /* JSR ABS 20 4F A1 */
    push(c, 0x89u); push(c, 0x15u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x8916u: /* JMP ABS 4C 4B 89 */
    c->pc = 0x894Bu; c->cpu_cycles += 3u; return 1;
case 0x8919u: /* JSR ABS 20 46 A1 */
    push(c, 0x89u); push(c, 0x1Bu); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x891Cu: /* LDA ZP A5 02 */
    c->pc = 0x891Eu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x891Eu: /* BEQ REL F0 2B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8920u ^ 0x894Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x894Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8920u; } return 1;
case 0x8920u: /* CMP IMM C9 01 */
    c->pc = 0x8922u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8922u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8924u ^ 0x892Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x892Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8924u; } return 1;
case 0x8924u: /* LDA IMM A9 12 */
    c->pc = 0x8926u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8926u: /* STA ABS 8D A8 05 */
    c->pc = 0x8929u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8929u: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x892Bu ^ 0x894Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x894Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x892Bu; } return 1;
case 0x892Bu: /* LDA IMM A9 00 */
    c->pc = 0x892Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x892Du: /* STA ABS 8D 01 06 */
    c->pc = 0x8930u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8930u: /* STA ABS 8D 21 06 */
    c->pc = 0x8933u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8933u: /* LDA IMM A9 FF */
    c->pc = 0x8935u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8935u: /* STA ABS 8D 41 06 */
    c->pc = 0x8938u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8938u: /* LDA IMM A9 C0 */
    c->pc = 0x893Au;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x893Au: /* STA ABS 8D 61 06 */
    c->pc = 0x893Du;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x893Du: /* LDA IMM A9 57 */
    c->pc = 0x893Fu;
    v = 0x57u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x893Fu: /* JSR ABS 20 0C A1 */
    push(c, 0x89u); push(c, 0x41u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8942u: /* LDA IMM A9 04 */
    c->pc = 0x8944u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8944u: /* STA ZP 85 B1 */
    c->pc = 0x8946u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8946u: /* LDA IMM A9 3E */
    c->pc = 0x8948u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8948u: /* STA ABS 8D E1 04 */
    c->pc = 0x894Bu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x894Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8956u: /* DEX IMP CA */
    c->pc = 0x8957u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8957u: /* LDA ABX BD 16 8B */
    c->pc = 0x895Au;
    ea = (uint16_t)(0x8B16u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8B16u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x895Au: /* STA ZP 85 08 */
    c->pc = 0x895Cu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x895Cu: /* LDA ABX BD 1B 8B */
    c->pc = 0x895Fu;
    ea = (uint16_t)(0x8B1Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8B1Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x895Fu: /* STA ZP 85 09 */
    c->pc = 0x8961u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8961u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8964u: /* LDA ABS AD 21 04 */
    c->pc = 0x8967u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8967u: /* ORA IMM 09 04 */
    c->pc = 0x8969u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8969u: /* STA ABS 8D 21 04 */
    c->pc = 0x896Cu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x896Cu: /* LDA IMM A9 06 */
    c->pc = 0x896Eu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x896Eu: /* STA ABS 8D 21 06 */
    c->pc = 0x8971u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8971u: /* LDA IMM A9 01 */
    c->pc = 0x8973u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8973u: /* STA ABS 8D 01 06 */
    c->pc = 0x8976u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8976u: /* INC ZP E6 B2 */
    c->pc = 0x8978u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8978u: /* LDA ZP A5 B2 */
    c->pc = 0x897Au;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x897Au: /* CMP IMM C9 BB */
    c->pc = 0x897Cu;
    v = 0xBBu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x897Cu: /* BCC REL 90 1C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x897Eu ^ 0x899Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x899Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x897Eu; } return 1;
case 0x897Eu: /* LDA IMM A9 00 */
    c->pc = 0x8980u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8980u: /* STA ABS 8D E1 04 */
    c->pc = 0x8983u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8983u: /* LDA IMM A9 03 */
    c->pc = 0x8985u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8985u: /* STA ZP 85 B1 */
    c->pc = 0x8987u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8987u: /* LDA IMM A9 5A */
    c->pc = 0x8989u;
    v = 0x5Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8989u: /* JSR ABS 20 0C A1 */
    push(c, 0x89u); push(c, 0x8Bu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x898Cu: /* LDA IMM A9 03 */
    c->pc = 0x898Eu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x898Eu: /* STA ABS 8D A1 06 */
    c->pc = 0x8991u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8991u: /* JSR ABS 20 E4 8A */
    push(c, 0x89u); push(c, 0x93u); c->pc = 0x8AE4u; c->cpu_cycles += 6u; return 1;
case 0x8994u: /* LDA IMM A9 21 */
    c->pc = 0x8996u;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8996u: /* JSR ABS 20 51 C0 */
    push(c, 0x89u); push(c, 0x98u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8999u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x899Au: /* JSR ABS 20 E4 8A */
    push(c, 0x89u); push(c, 0x9Cu); c->pc = 0x8AE4u; c->cpu_cycles += 6u; return 1;
case 0x899Du: /* LDA ZP A5 03 */
    c->pc = 0x899Fu;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x899Fu: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x89A1u ^ 0x89B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x89B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89A1u; } return 1;
case 0x89A1u: /* LDA ZP A5 B1 */
    c->pc = 0x89A3u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89A3u: /* CMP IMM C9 06 */
    c->pc = 0x89A5u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x89A5u: /* BEQ REL F0 0E */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x89A7u ^ 0x89B5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x89B5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89A7u; } return 1;
case 0x89A7u: /* LDA IMM A9 00 */
    c->pc = 0x89A9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89A9u: /* STA ABS 8D E1 04 */
    c->pc = 0x89ACu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89ACu: /* LDA IMM A9 05 */
    c->pc = 0x89AEu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89AEu: /* STA ZP 85 B1 */
    c->pc = 0x89B0u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89B0u: /* LDA IMM A9 5D */
    c->pc = 0x89B2u;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89B2u: /* JSR ABS 20 0C A1 */
    push(c, 0x89u); push(c, 0xB4u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x89B5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x89B6u: /* LDA IMM A9 00 */
    c->pc = 0x89B8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89B8u: /* STA ABS 8D 21 06 */
    c->pc = 0x89BBu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89BBu: /* STA ABS 8D 01 06 */
    c->pc = 0x89BEu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89BEu: /* LDA ABS AD A1 06 */
    c->pc = 0x89C1u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89C1u: /* CMP IMM C9 07 */
    c->pc = 0x89C3u;
    v = 0x07u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x89C3u: /* BNE REL D0 43 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x89C5u ^ 0x8A08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A08u; }
    else { c->cpu_cycles += 2u; c->pc = 0x89C5u; } return 1;
case 0x89C5u: /* LDA IMM A9 5F */
    c->pc = 0x89C7u;
    v = 0x5Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89C7u: /* STA ABS 8D 0F 04 */
    c->pc = 0x89CAu;
    ea = 0x040Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89CAu: /* LDA IMM A9 80 */
    c->pc = 0x89CCu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89CCu: /* STA ABS 8D 2F 04 */
    c->pc = 0x89CFu;
    ea = 0x042Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89CFu: /* STA ABS 8D 6F 04 */
    c->pc = 0x89D2u;
    ea = 0x046Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89D2u: /* STA ABS 8D AF 04 */
    c->pc = 0x89D5u;
    ea = 0x04AFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89D5u: /* LDA ABS AD 41 04 */
    c->pc = 0x89D8u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89D8u: /* STA ABS 8D 4F 04 */
    c->pc = 0x89DBu;
    ea = 0x044Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89DBu: /* LDA IMM A9 00 */
    c->pc = 0x89DDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89DDu: /* STA ABS 8D 6F 06 */
    c->pc = 0x89E0u;
    ea = 0x066Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89E0u: /* STA ABS 8D 4F 06 */
    c->pc = 0x89E3u;
    ea = 0x064Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89E3u: /* STA ABS 8D 0F 06 */
    c->pc = 0x89E6u;
    ea = 0x060Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89E6u: /* STA ABS 8D 2F 06 */
    c->pc = 0x89E9u;
    ea = 0x062Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89E9u: /* STA ABS 8D 8F 06 */
    c->pc = 0x89ECu;
    ea = 0x068Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89ECu: /* STA ABS 8D AF 06 */
    c->pc = 0x89EFu;
    ea = 0x06AFu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89EFu: /* LDA IMM A9 04 */
    c->pc = 0x89F1u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89F1u: /* STA ZP 85 AA */
    c->pc = 0x89F3u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x89F3u: /* LDA IMM A9 20 */
    c->pc = 0x89F5u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89F5u: /* STA ABS 8D 66 03 */
    c->pc = 0x89F8u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89F8u: /* LDA IMM A9 06 */
    c->pc = 0x89FAu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89FAu: /* STA ABS 8D E1 04 */
    c->pc = 0x89FDu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x89FDu: /* LDA IMM A9 1F */
    c->pc = 0x89FFu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x89FFu: /* STA ZP 85 B2 */
    c->pc = 0x8A01u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A01u: /* INC ZP E6 B1 */
    c->pc = 0x8A03u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8A03u: /* LDA IMM A9 5B */
    c->pc = 0x8A05u;
    v = 0x5Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A05u: /* JSR ABS 20 0C A1 */
    push(c, 0x8Au); push(c, 0x07u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8A08u: /* JSR ABS 20 E4 8A */
    push(c, 0x8Au); push(c, 0x0Au); c->pc = 0x8AE4u; c->cpu_cycles += 6u; return 1;
case 0x8A0Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8A0Cu: /* LDA IMM A9 0F */
    c->pc = 0x8A0Eu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A0Eu: /* STA ABS 8D 66 03 */
    c->pc = 0x8A11u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A11u: /* LDA ABS AD A1 06 */
    c->pc = 0x8A14u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A14u: /* BEQ REL F0 F2 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8A16u ^ 0x8A08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A08u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A16u; } return 1;
case 0x8A16u: /* CMP IMM C9 02 */
    c->pc = 0x8A18u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8A18u: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8A1Au ^ 0x8A35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A35u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A1Au; } return 1;
case 0x8A1Au: /* LDA IMM A9 02 */
    c->pc = 0x8A1Cu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A1Cu: /* STA ZP 85 B1 */
    c->pc = 0x8A1Eu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A1Eu: /* LDA IMM A9 00 */
    c->pc = 0x8A20u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A20u: /* STA ZP 85 AA */
    c->pc = 0x8A22u;
    ea = 0xAAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A22u: /* STA ZP 85 B2 */
    c->pc = 0x8A24u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A24u: /* STA ABS 8D E1 04 */
    c->pc = 0x8A27u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A27u: /* LSR ABS 4E 2F 04 */
    c->pc = 0x8A2Au;
    ea = 0x042Fu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8A2Au: /* LDA IMM A9 5C */
    c->pc = 0x8A2Cu;
    v = 0x5Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A2Cu: /* JSR ABS 20 0C A1 */
    push(c, 0x8Au); push(c, 0x2Eu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8A2Fu: /* JSR ABS 20 09 A2 */
    push(c, 0x8Au); push(c, 0x31u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8A32u: /* JMP ABS 4C 08 8A */
    c->pc = 0x8A08u; c->cpu_cycles += 3u; return 1;
case 0x8A35u: /* JSR ABS 20 09 A2 */
    push(c, 0x8Au); push(c, 0x37u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8A38u: /* LDA IMM A9 00 */
    c->pc = 0x8A3Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A3Au: /* STA ABS 8D 81 06 */
    c->pc = 0x8A3Du;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A3Du: /* DEC ZP C6 B2 */
    c->pc = 0x8A3Fu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8A3Fu: /* BNE REL D0 C7 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8A41u ^ 0x8A08u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A08u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A41u; } return 1;
case 0x8A41u: /* LDA IMM A9 06 */
    c->pc = 0x8A43u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A43u: /* STA ZP 85 B2 */
    c->pc = 0x8A45u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A45u: /* LDA ABS AD A0 04 */
    c->pc = 0x8A48u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A48u: /* PHA IMP 48 */
    c->pc = 0x8A49u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A49u: /* LDA ZP A5 4A */
    c->pc = 0x8A4Bu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A4Bu: /* STA ZP 85 01 */
    c->pc = 0x8A4Du;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A4Du: /* LDA IMM A9 50 */
    c->pc = 0x8A4Fu;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A4Fu: /* STA ZP 85 02 */
    c->pc = 0x8A51u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A51u: /* JSR ABS 20 4E C8 */
    push(c, 0x8Au); push(c, 0x53u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x8A54u: /* SEC IMP 38 */
    c->pc = 0x8A55u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A55u: /* LDA ABS AD A1 04 */
    c->pc = 0x8A58u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A58u: /* SBC IMM E9 28 */
    c->pc = 0x8A5Au;
    v = 0x28u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8A5Au: /* CLC IMP 18 */
    c->pc = 0x8A5Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A5Bu: /* ADC ZP 65 04 */
    c->pc = 0x8A5Du;
    ea = 0x04u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x8A5Du: /* STA ABS 8D A0 04 */
    c->pc = 0x8A60u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A60u: /* LDA IMM A9 35 */
    c->pc = 0x8A62u;
    v = 0x35u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A62u: /* LDX IMM A2 01 */
    c->pc = 0x8A64u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8A64u: /* JSR ABS 20 52 A3 */
    push(c, 0x8Au); push(c, 0x66u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8A67u: /* BCS REL B0 31 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8A69u ^ 0x8A9Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A9Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A69u; } return 1;
case 0x8A69u: /* CLC IMP 18 */
    c->pc = 0x8A6Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A6Au: /* TYA IMP 98 */
    c->pc = 0x8A6Bu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A6Bu: /* ADC IMM 69 10 */
    c->pc = 0x8A6Du;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8A6Du: /* TAX IMP AA */
    c->pc = 0x8A6Eu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8A6Eu: /* STX ZP 86 2B */
    c->pc = 0x8A70u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8A70u: /* LDA IMM A9 08 */
    c->pc = 0x8A72u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A72u: /* STA ZP 85 09 */
    c->pc = 0x8A74u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A74u: /* LDA IMM A9 00 */
    c->pc = 0x8A76u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A76u: /* STA ZP 85 08 */
    c->pc = 0x8A78u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A78u: /* LDY IMM A0 00 */
    c->pc = 0x8A7Au;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8A7Au: /* LDA ABS AD 21 04 */
    c->pc = 0x8A7Du;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A7Du: /* AND IMM 29 40 */
    c->pc = 0x8A7Fu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A7Fu: /* PHA IMP 48 */
    c->pc = 0x8A80u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A80u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8A82u ^ 0x8A83u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8A83u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8A82u; } return 1;
case 0x8A82u: /* INY IMP C8 */
    c->pc = 0x8A83u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8A83u: /* CLC IMP 18 */
    c->pc = 0x8A84u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8A84u: /* LDA ABX BD 60 04 */
    c->pc = 0x8A87u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8A87u: /* ADC ABY 79 AB 8A */
    c->pc = 0x8A8Au;
    ea = (uint16_t)(0x8AABu + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0x8AABu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8A8Au: /* STA ABX 9D 60 04 */
    c->pc = 0x8A8Du;
    ea = (uint16_t)(0x0460u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8A8Du: /* PLA IMP 68 */
    c->pc = 0x8A8Eu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A8Eu: /* TAY IMP A8 */
    c->pc = 0x8A8Fu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8A8Fu: /* LDA IMM A9 60 */
    c->pc = 0x8A91u;
    v = 0x60u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A91u: /* STA ZP 85 00 */
    c->pc = 0x8A93u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A93u: /* JSR ABS 20 A3 A3 */
    push(c, 0x8Au); push(c, 0x95u); c->pc = 0xA3A3u; c->cpu_cycles += 6u; return 1;
case 0x8A96u: /* LDA IMM A9 01 */
    c->pc = 0x8A98u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8A98u: /* STA ZP 85 2B */
    c->pc = 0x8A9Au;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8A9Au: /* PLA IMP 68 */
    c->pc = 0x8A9Bu;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A9Bu: /* STA ABS 8D A0 04 */
    c->pc = 0x8A9Eu;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8A9Eu: /* LDX IMM A2 01 */
    c->pc = 0x8AA0u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8AA0u: /* DEC ABS CE E1 04 */
    c->pc = 0x8AA3u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8AA3u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8AA5u ^ 0x8AA8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AA8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AA5u; } return 1;
case 0x8AA5u: /* INC ABS EE A1 06 */
    c->pc = 0x8AA8u;
    ea = 0x06A1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8AA8u: /* JMP ABS 4C 08 8A */
    c->pc = 0x8A08u; c->cpu_cycles += 3u; return 1;
case 0x8AADu: /* LDA ABS AD E1 04 */
    c->pc = 0x8AB0u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AB0u: /* BNE REL D0 18 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8AB2u ^ 0x8ACAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8ACAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AB2u; } return 1;
case 0x8AB2u: /* JSR ABS 20 09 A2 */
    push(c, 0x8Au); push(c, 0xB4u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8AB5u: /* LDA IMM A9 00 */
    c->pc = 0x8AB7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AB7u: /* STA ABS 8D 61 06 */
    c->pc = 0x8ABAu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8ABAu: /* STA ABS 8D 01 06 */
    c->pc = 0x8ABDu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8ABDu: /* LDA IMM A9 04 */
    c->pc = 0x8ABFu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8ABFu: /* STA ABS 8D 41 06 */
    c->pc = 0x8AC2u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AC2u: /* LDA IMM A9 80 */
    c->pc = 0x8AC4u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AC4u: /* STA ABS 8D 21 06 */
    c->pc = 0x8AC7u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AC7u: /* INC ABS EE E1 04 */
    c->pc = 0x8ACAu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8ACAu: /* JSR ABS 20 E4 8A */
    push(c, 0x8Au); push(c, 0xCCu); c->pc = 0x8AE4u; c->cpu_cycles += 6u; return 1;
case 0x8ACDu: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8ACFu ^ 0x8AD0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AD0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8ACFu; } return 1;
case 0x8ACFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8AD0u: /* LDA ZP A5 B1 */
    c->pc = 0x8AD2u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AD2u: /* CMP IMM C9 06 */
    c->pc = 0x8AD4u;
    v = 0x06u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8AD4u: /* BEQ REL F0 F9 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8AD6u ^ 0x8ACFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8ACFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AD6u; } return 1;
case 0x8AD6u: /* LDA IMM A9 00 */
    c->pc = 0x8AD8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AD8u: /* STA ABS 8D E1 04 */
    c->pc = 0x8ADBu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8ADBu: /* LDA IMM A9 02 */
    c->pc = 0x8ADDu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8ADDu: /* STA ZP 85 B1 */
    c->pc = 0x8ADFu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8ADFu: /* LDA IMM A9 5C */
    c->pc = 0x8AE1u;
    v = 0x5Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AE1u: /* JSR ABS 20 0C A1 */
    push(c, 0x8Au); push(c, 0xE3u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8AE4u: /* LDA ABS AD A8 05 */
    c->pc = 0x8AE7u;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AE7u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8AE9u ^ 0x8AEFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AEFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AE9u; } return 1;
case 0x8AE9u: /* JSR ABS 20 4F A1 */
    push(c, 0x8Au); push(c, 0xEBu); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x8AECu: /* JMP ABS 4C FE 8A */
    c->pc = 0x8AFEu; c->cpu_cycles += 3u; return 1;
case 0x8AEFu: /* JSR ABS 20 46 A1 */
    push(c, 0x8Au); push(c, 0xF1u); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x8AF2u: /* LDA ZP A5 02 */
    c->pc = 0x8AF4u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8AF4u: /* CMP IMM C9 01 */
    c->pc = 0x8AF6u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8AF6u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8AF8u ^ 0x8AFEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8AFEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8AF8u; } return 1;
case 0x8AF8u: /* LDA IMM A9 12 */
    c->pc = 0x8AFAu;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8AFAu: /* STA ABS 8D A8 05 */
    c->pc = 0x8AFDu;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8AFDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8AFEu: /* LDA IMM A9 08 */
    c->pc = 0x8B00u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B00u: /* STA ZP 85 01 */
    c->pc = 0x8B02u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B02u: /* LDA IMM A9 0C */
    c->pc = 0x8B04u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B04u: /* STA ZP 85 02 */
    c->pc = 0x8B06u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B06u: /* LDA ABS AD 41 06 */
    c->pc = 0x8B09u;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B09u: /* PHP IMP 08 */
    c->pc = 0x8B0Au;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x8B0Au: /* JSR ABS 20 D4 A2 */
    push(c, 0x8Bu); push(c, 0x0Cu); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x8B0Du: /* PLP IMP 28 */
    c->pc = 0x8B0Eu;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x8B0Eu: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8B10u ^ 0x8B13u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B13u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B10u; } return 1;
case 0x8B10u: /* LDA ZP A5 00 */
    c->pc = 0x8B12u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B12u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8B13u: /* LDA IMM A9 00 */
    c->pc = 0x8B15u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B15u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8B20u: /* DEX IMP CA */
    c->pc = 0x8B21u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8B21u: /* LDA ABX BD BB 8C */
    c->pc = 0x8B24u;
    ea = (uint16_t)(0x8CBBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8CBBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B24u: /* STA ZP 85 08 */
    c->pc = 0x8B26u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B26u: /* LDA ABX BD BF 8C */
    c->pc = 0x8B29u;
    ea = (uint16_t)(0x8CBFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8CBFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B29u: /* STA ZP 85 09 */
    c->pc = 0x8B2Bu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B2Bu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8B2Eu: /* LDA IMM A9 87 */
    c->pc = 0x8B30u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B30u: /* STA ABS 8D 21 04 */
    c->pc = 0x8B33u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B33u: /* JSR ABS 20 09 A2 */
    push(c, 0x8Bu); push(c, 0x35u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8B36u: /* LDA ZP A5 27 */
    c->pc = 0x8B38u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B38u: /* AND IMM 29 02 */
    c->pc = 0x8B3Au;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B3Au: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8B3Cu ^ 0x8B42u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B42u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B3Cu; } return 1;
case 0x8B3Cu: /* LDA ZP A5 B2 */
    c->pc = 0x8B3Eu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B3Eu: /* CMP IMM C9 BB */
    c->pc = 0x8B40u;
    v = 0xBBu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B40u: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8B42u ^ 0x8B55u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B55u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B42u; } return 1;
case 0x8B42u: /* LDA ZP A5 4A */
    c->pc = 0x8B44u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B44u: /* STA ZP 85 01 */
    c->pc = 0x8B46u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B46u: /* LDA IMM A9 03 */
    c->pc = 0x8B48u;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B48u: /* STA ZP 85 02 */
    c->pc = 0x8B4Au;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B4Au: /* JSR ABS 20 4E C8 */
    push(c, 0x8Bu); push(c, 0x4Cu); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x8B4Du: /* LDX ZP A6 04 */
    c->pc = 0x8B4Fu;
    ea = 0x04u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8B4Fu: /* JSR ABS 20 74 8B */
    push(c, 0x8Bu); push(c, 0x51u); c->pc = 0x8B74u; c->cpu_cycles += 6u; return 1;
case 0x8B52u: /* JMP ABS 4C 6E 8B */
    c->pc = 0x8B6Eu; c->cpu_cycles += 3u; return 1;
case 0x8B55u: /* LDA ZP A5 00 */
    c->pc = 0x8B57u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B57u: /* CMP IMM C9 48 */
    c->pc = 0x8B59u;
    v = 0x48u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B59u: /* BCS REL B0 13 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8B5Bu ^ 0x8B6Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B6Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B5Bu; } return 1;
case 0x8B5Bu: /* LDA IMM A9 87 */
    c->pc = 0x8B5Du;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B5Du: /* LDY ABS AC 61 04 */
    c->pc = 0x8B60u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x8B60u: /* CPY IMM C0 80 */
    c->pc = 0x8B62u;
    v = 0x80u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8B62u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8B64u ^ 0x8B66u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8B66u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8B64u; } return 1;
case 0x8B64u: /* ORA IMM 09 40 */
    c->pc = 0x8B66u;
    v = 0x40u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B66u: /* STA ABS 8D 21 04 */
    c->pc = 0x8B69u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B69u: /* LDX IMM A2 03 */
    c->pc = 0x8B6Bu;
    v = 0x03u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8B6Bu: /* JSR ABS 20 74 8B */
    push(c, 0x8Bu); push(c, 0x6Du); c->pc = 0x8B74u; c->cpu_cycles += 6u; return 1;
case 0x8B6Eu: /* INC ZP E6 B2 */
    c->pc = 0x8B70u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8B70u: /* JSR ABS 20 3E 8C */
    push(c, 0x8Bu); push(c, 0x72u); c->pc = 0x8C3Eu; c->cpu_cycles += 6u; return 1;
case 0x8B73u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8B74u: /* LDA IMM A9 65 */
    c->pc = 0x8B76u;
    v = 0x65u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B76u: /* JSR ABS 20 0C A1 */
    push(c, 0x8Bu); push(c, 0x78u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8B79u: /* LDA IMM A9 01 */
    c->pc = 0x8B7Bu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8B7Bu: /* STA ZP 85 B2 */
    c->pc = 0x8B7Du;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B7Du: /* LDA ABX BD A1 8B */
    c->pc = 0x8B80u;
    ea = (uint16_t)(0x8BA1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8BA1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B80u: /* STA ABS 8D 61 06 */
    c->pc = 0x8B83u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B83u: /* LDA ABX BD A5 8B */
    c->pc = 0x8B86u;
    ea = (uint16_t)(0x8BA5u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8BA5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B86u: /* STA ABS 8D 41 06 */
    c->pc = 0x8B89u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B89u: /* LDA ABX BD A9 8B */
    c->pc = 0x8B8Cu;
    ea = (uint16_t)(0x8BA9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8BA9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B8Cu: /* STA ABS 8D 21 06 */
    c->pc = 0x8B8Fu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B8Fu: /* LDA ABX BD AD 8B */
    c->pc = 0x8B92u;
    ea = (uint16_t)(0x8BADu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8BADu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B92u: /* STA ABS 8D 01 06 */
    c->pc = 0x8B95u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B95u: /* LDA ABX BD B1 8B */
    c->pc = 0x8B98u;
    ea = (uint16_t)(0x8BB1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8BB1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8B98u: /* STA ZP 85 B1 */
    c->pc = 0x8B9Au;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8B9Au: /* LDA ABS AD 21 04 */
    c->pc = 0x8B9Du;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8B9Du: /* STA ABS 8D E1 04 */
    c->pc = 0x8BA0u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BA0u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8BB5u: /* LDA ABS AD E1 04 */
    c->pc = 0x8BB8u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BB8u: /* STA ABS 8D 21 04 */
    c->pc = 0x8BBBu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BBBu: /* JSR ABS 20 3E 8C */
    push(c, 0x8Bu); push(c, 0xBDu); c->pc = 0x8C3Eu; c->cpu_cycles += 6u; return 1;
case 0x8BBEu: /* LDA ZP A5 00 */
    c->pc = 0x8BC0u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BC0u: /* PHA IMP 48 */
    c->pc = 0x8BC1u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BC1u: /* JSR ABS 20 09 A2 */
    push(c, 0x8Bu); push(c, 0xC3u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8BC4u: /* PLA IMP 68 */
    c->pc = 0x8BC5u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BC5u: /* STA ZP 85 00 */
    c->pc = 0x8BC7u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BC7u: /* LDA ABS AD 41 06 */
    c->pc = 0x8BCAu;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BCAu: /* BPL REL 10 3A */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8BCCu ^ 0x8C06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C06u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BCCu; } return 1;
case 0x8BCCu: /* DEC ZP C6 B2 */
    c->pc = 0x8BCEu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8BCEu: /* BNE REL D0 21 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8BD0u ^ 0x8BF1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BF1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BD0u; } return 1;
case 0x8BD0u: /* LDY IMM A0 12 */
    c->pc = 0x8BD2u;
    v = 0x12u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8BD2u: /* LDA ZP A5 B1 */
    c->pc = 0x8BD4u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BD4u: /* CMP IMM C9 04 */
    c->pc = 0x8BD6u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8BD6u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8BD8u ^ 0x8BDAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8BDAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BD8u; } return 1;
case 0x8BD8u: /* LDY IMM A0 40 */
    c->pc = 0x8BDAu;
    v = 0x40u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8BDAu: /* STY ZP 84 B2 */
    c->pc = 0x8BDCu;
    ea = 0xB2u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8BDCu: /* LDA IMM A9 00 */
    c->pc = 0x8BDEu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BDEu: /* STA ABS 8D 41 06 */
    c->pc = 0x8BE1u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BE1u: /* STA ABS 8D 61 06 */
    c->pc = 0x8BE4u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BE4u: /* LDA ABS AD 21 04 */
    c->pc = 0x8BE7u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BE7u: /* AND IMM 29 FB */
    c->pc = 0x8BE9u;
    v = 0xFBu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BE9u: /* STA ABS 8D 21 04 */
    c->pc = 0x8BECu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BECu: /* LDA IMM A9 01 */
    c->pc = 0x8BEEu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BEEu: /* STA ABS 8D A1 06 */
    c->pc = 0x8BF1u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BF1u: /* LDA ZP A5 00 */
    c->pc = 0x8BF3u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BF3u: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8BF5u ^ 0x8C06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C06u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8BF5u; } return 1;
case 0x8BF5u: /* LDA IMM A9 00 */
    c->pc = 0x8BF7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8BF7u: /* STA ZP 85 B2 */
    c->pc = 0x8BF9u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8BF9u: /* DEC ZP C6 B1 */
    c->pc = 0x8BFBu;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8BFBu: /* STA ABS 8D 01 06 */
    c->pc = 0x8BFEu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8BFEu: /* STA ABS 8D 21 06 */
    c->pc = 0x8C01u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C01u: /* LDA IMM A9 64 */
    c->pc = 0x8C03u;
    v = 0x64u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C03u: /* JSR ABS 20 0C A1 */
    push(c, 0x8Cu); push(c, 0x05u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8C06u: /* LDA ABS AD A1 06 */
    c->pc = 0x8C09u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C09u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8C0Bu ^ 0x8C0Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C0Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C0Bu; } return 1;
case 0x8C0Bu: /* STA ABS 8D 81 06 */
    c->pc = 0x8C0Eu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C0Eu: /* CMP IMM C9 02 */
    c->pc = 0x8C10u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C10u: /* BNE REL D0 2B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8C12u ^ 0x8C3Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C3Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C12u; } return 1;
case 0x8C12u: /* LDA ABS AD 81 06 */
    c->pc = 0x8C15u;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C15u: /* BNE REL D0 26 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8C17u ^ 0x8C3Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C3Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C17u; } return 1;
case 0x8C17u: /* LDA IMM A9 23 */
    c->pc = 0x8C19u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C19u: /* JSR ABS 20 51 C0 */
    push(c, 0x8Cu); push(c, 0x1Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8C1Cu: /* LDA IMM A9 5C */
    c->pc = 0x8C1Eu;
    v = 0x5Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C1Eu: /* LDX IMM A2 01 */
    c->pc = 0x8C20u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C20u: /* JSR ABS 20 52 A3 */
    push(c, 0x8Cu); push(c, 0x22u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8C23u: /* CLC IMP 18 */
    c->pc = 0x8C24u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8C24u: /* TYA IMP 98 */
    c->pc = 0x8C25u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C25u: /* ADC IMM 69 10 */
    c->pc = 0x8C27u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C27u: /* TAX IMP AA */
    c->pc = 0x8C28u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C28u: /* STX ZP 86 2B */
    c->pc = 0x8C2Au;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8C2Au: /* LDA IMM A9 00 */
    c->pc = 0x8C2Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C2Cu: /* STA ZP 85 08 */
    c->pc = 0x8C2Eu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C2Eu: /* LDA IMM A9 04 */
    c->pc = 0x8C30u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C30u: /* STA ZP 85 09 */
    c->pc = 0x8C32u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C32u: /* JSR ABS 20 8C A3 */
    push(c, 0x8Cu); push(c, 0x34u); c->pc = 0xA38Cu; c->cpu_cycles += 6u; return 1;
case 0x8C35u: /* LDA ABS AD 21 04 */
    c->pc = 0x8C38u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C38u: /* ORA IMM 09 04 */
    c->pc = 0x8C3Au;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C3Au: /* STA ABS 8D 21 04 */
    c->pc = 0x8C3Du;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C3Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8C3Eu: /* LDA IMM A9 0F */
    c->pc = 0x8C40u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C40u: /* STA ABS 8D 66 03 */
    c->pc = 0x8C43u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C43u: /* CLC IMP 18 */
    c->pc = 0x8C44u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8C44u: /* LDA ABS AD A7 05 */
    c->pc = 0x8C47u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C47u: /* ADC IMM 69 01 */
    c->pc = 0x8C49u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C49u: /* STA ABS 8D A7 05 */
    c->pc = 0x8C4Cu;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C4Cu: /* LDA ABS AD A9 05 */
    c->pc = 0x8C4Fu;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C4Fu: /* ADC IMM 69 00 */
    c->pc = 0x8C51u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C51u: /* STA ABS 8D A9 05 */
    c->pc = 0x8C54u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C54u: /* BEQ REL F0 3A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8C56u ^ 0x8C90u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C90u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C56u; } return 1;
case 0x8C56u: /* LDA ABS AD A7 05 */
    c->pc = 0x8C59u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C59u: /* CMP IMM C9 77 */
    c->pc = 0x8C5Bu;
    v = 0x77u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C5Bu: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8C5Du ^ 0x8C90u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C90u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C5Du; } return 1;
case 0x8C5Du: /* LDA IMM A9 00 */
    c->pc = 0x8C5Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C5Fu: /* STA ABS 8D A7 05 */
    c->pc = 0x8C62u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C62u: /* STA ABS 8D A9 05 */
    c->pc = 0x8C65u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C65u: /* LDA ZP A5 2A */
    c->pc = 0x8C67u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C67u: /* CMP IMM C9 0C */
    c->pc = 0x8C69u;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C69u: /* BEQ REL F0 25 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8C6Bu ^ 0x8C90u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C90u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C6Bu; } return 1;
case 0x8C6Bu: /* LDA IMM A9 30 */
    c->pc = 0x8C6Du;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C6Du: /* STA ABS 8D 66 03 */
    c->pc = 0x8C70u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C70u: /* LDX IMM A2 00 */
    c->pc = 0x8C72u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C72u: /* LDY IMM A0 00 */
    c->pc = 0x8C74u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8C74u: /* LDA ZP A5 45 */
    c->pc = 0x8C76u;
    ea = 0x45u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C76u: /* EOR IMM 49 40 */
    c->pc = 0x8C78u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C78u: /* STA ZP 85 45 */
    c->pc = 0x8C7Au;
    ea = 0x45u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C7Au: /* LDA ZP A5 46 */
    c->pc = 0x8C7Cu;
    ea = 0x46u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C7Cu: /* EOR IMM 49 40 */
    c->pc = 0x8C7Eu;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8C7Eu: /* STA ZP 85 46 */
    c->pc = 0x8C80u;
    ea = 0x46u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8C80u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8C82u ^ 0x8C83u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C83u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C82u; } return 1;
case 0x8C82u: /* INX IMP E8 */
    c->pc = 0x8C83u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C83u: /* LDA ABX BD B5 8C */
    c->pc = 0x8C86u;
    ea = (uint16_t)(0x8CB5u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8CB5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8C86u: /* STA ABY 99 7B 03 */
    c->pc = 0x8C89u;
    ea = (uint16_t)(0x037Bu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8C89u: /* INX IMP E8 */
    c->pc = 0x8C8Au;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C8Au: /* INX IMP E8 */
    c->pc = 0x8C8Bu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8C8Bu: /* INY IMP C8 */
    c->pc = 0x8C8Cu;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8C8Cu: /* CPY IMM C0 03 */
    c->pc = 0x8C8Eu;
    v = 0x03u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8C8Eu: /* BNE REL D0 F3 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8C90u ^ 0x8C83u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C83u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C90u; } return 1;
case 0x8C90u: /* LDA ABS AD A8 05 */
    c->pc = 0x8C93u;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8C93u: /* BEQ REL F0 06 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8C95u ^ 0x8C9Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8C9Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8C95u; } return 1;
case 0x8C95u: /* JSR ABS 20 4F A1 */
    push(c, 0x8Cu); push(c, 0x97u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x8C98u: /* JMP ABS 4C A9 8C */
    c->pc = 0x8CA9u; c->cpu_cycles += 3u; return 1;
case 0x8C9Bu: /* JSR ABS 20 46 A1 */
    push(c, 0x8Cu); push(c, 0x9Du); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x8C9Eu: /* LDA ZP A5 02 */
    c->pc = 0x8CA0u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CA0u: /* CMP IMM C9 01 */
    c->pc = 0x8CA2u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8CA2u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8CA4u ^ 0x8CA9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8CA9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CA4u; } return 1;
case 0x8CA4u: /* LDA IMM A9 12 */
    c->pc = 0x8CA6u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CA6u: /* STA ABS 8D A8 05 */
    c->pc = 0x8CA9u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CA9u: /* LDA IMM A9 07 */
    c->pc = 0x8CABu;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CABu: /* STA ZP 85 01 */
    c->pc = 0x8CADu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CADu: /* LDA IMM A9 0C */
    c->pc = 0x8CAFu;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CAFu: /* STA ZP 85 02 */
    c->pc = 0x8CB1u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CB1u: /* JSR ABS 20 D4 A2 */
    push(c, 0x8Cu); push(c, 0xB3u); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x8CB4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8CC3u: /* DEX IMP CA */
    c->pc = 0x8CC4u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8CC4u: /* LDA ABX BD 08 8E */
    c->pc = 0x8CC7u;
    ea = (uint16_t)(0x8E08u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8E08u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8CC7u: /* STA ZP 85 08 */
    c->pc = 0x8CC9u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CC9u: /* LDA ABX BD 0C 8E */
    c->pc = 0x8CCCu;
    ea = (uint16_t)(0x8E0Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8E0Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8CCCu: /* STA ZP 85 09 */
    c->pc = 0x8CCEu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CCEu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8CD1u: /* LDA ABS AD E1 04 */
    c->pc = 0x8CD4u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CD4u: /* ORA IMM 09 83 */
    c->pc = 0x8CD6u;
    v = 0x83u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CD6u: /* STA ABS 8D 21 04 */
    c->pc = 0x8CD9u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CD9u: /* LDA IMM A9 00 */
    c->pc = 0x8CDBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CDBu: /* STA ABS 8D 61 06 */
    c->pc = 0x8CDEu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CDEu: /* STA ABS 8D 41 06 */
    c->pc = 0x8CE1u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CE1u: /* LDA IMM A9 47 */
    c->pc = 0x8CE3u;
    v = 0x47u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CE3u: /* STA ABS 8D 21 06 */
    c->pc = 0x8CE6u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CE6u: /* LDA IMM A9 01 */
    c->pc = 0x8CE8u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CE8u: /* STA ABS 8D 01 06 */
    c->pc = 0x8CEBu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CEBu: /* LDA IMM A9 6A */
    c->pc = 0x8CEDu;
    v = 0x6Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CEDu: /* JSR ABS 20 0C A1 */
    push(c, 0x8Cu); push(c, 0xEFu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8CF0u: /* INC ZP E6 B1 */
    c->pc = 0x8CF2u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8CF2u: /* JSR ABS 20 F0 8D */
    push(c, 0x8Cu); push(c, 0xF4u); c->pc = 0x8DF0u; c->cpu_cycles += 6u; return 1;
case 0x8CF5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8CF6u: /* LDA ZP A5 27 */
    c->pc = 0x8CF8u;
    ea = 0x27u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8CF8u: /* AND IMM 29 02 */
    c->pc = 0x8CFAu;
    v = 0x02u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8CFAu: /* BNE REL D0 0A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8CFCu ^ 0x8D06u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D06u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8CFCu; } return 1;
case 0x8CFCu: /* LDA ABS AD A7 05 */
    c->pc = 0x8CFFu;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8CFFu: /* BEQ REL F0 57 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8D01u ^ 0x8D58u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D58u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D01u; } return 1;
case 0x8D01u: /* DEC ABS CE A7 05 */
    c->pc = 0x8D04u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8D04u: /* BNE REL D0 52 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D06u ^ 0x8D58u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D58u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D06u; } return 1;
case 0x8D06u: /* LDA IMM A9 87 */
    c->pc = 0x8D08u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D08u: /* STA ABS 8D 21 04 */
    c->pc = 0x8D0Bu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D0Bu: /* JSR ABS 20 09 A2 */
    push(c, 0x8Du); push(c, 0x0Du); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8D0Eu: /* LDA ABS AD 21 04 */
    c->pc = 0x8D11u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D11u: /* STA ABS 8D A9 05 */
    c->pc = 0x8D14u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D14u: /* LDA IMM A9 ED */
    c->pc = 0x8D16u;
    v = 0xEDu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D16u: /* STA ABS 8D 61 06 */
    c->pc = 0x8D19u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D19u: /* LDA IMM A9 06 */
    c->pc = 0x8D1Bu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D1Bu: /* STA ABS 8D 41 06 */
    c->pc = 0x8D1Eu;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D1Eu: /* CLC IMP 18 */
    c->pc = 0x8D1Fu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D1Fu: /* LDA ZP A5 00 */
    c->pc = 0x8D21u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D21u: /* ADC IMM 69 20 */
    c->pc = 0x8D23u;
    v = 0x20u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D23u: /* STA ZP 85 0B */
    c->pc = 0x8D25u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D25u: /* LDA ZP A5 4A */
    c->pc = 0x8D27u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D27u: /* AND IMM 29 01 */
    c->pc = 0x8D29u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D29u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8D2Bu ^ 0x8D36u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D36u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D2Bu; } return 1;
case 0x8D2Bu: /* SEC IMP 38 */
    c->pc = 0x8D2Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8D2Cu: /* LDA ZP A5 0B */
    c->pc = 0x8D2Eu;
    ea = 0x0Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D2Eu: /* SBC IMM E9 40 */
    c->pc = 0x8D30u;
    v = 0x40u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D30u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8D32u ^ 0x8D34u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D34u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D32u; } return 1;
case 0x8D32u: /* LDA IMM A9 00 */
    c->pc = 0x8D34u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D34u: /* STA ZP 85 0B */
    c->pc = 0x8D36u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D36u: /* LDA IMM A9 37 */
    c->pc = 0x8D38u;
    v = 0x37u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D38u: /* STA ZP 85 0D */
    c->pc = 0x8D3Au;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D3Au: /* LDA IMM A9 00 */
    c->pc = 0x8D3Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D3Cu: /* STA ZP 85 0A */
    c->pc = 0x8D3Eu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D3Eu: /* STA ZP 85 0C */
    c->pc = 0x8D40u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D40u: /* JSR ABS 20 74 C8 */
    push(c, 0x8Du); push(c, 0x42u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0x8D43u: /* LDA ZP A5 0F */
    c->pc = 0x8D45u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D45u: /* STA ABS 8D 01 06 */
    c->pc = 0x8D48u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D48u: /* LDA ZP A5 0E */
    c->pc = 0x8D4Au;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D4Au: /* STA ABS 8D 21 06 */
    c->pc = 0x8D4Du;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D4Du: /* LDA IMM A9 6B */
    c->pc = 0x8D4Fu;
    v = 0x6Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D4Fu: /* JSR ABS 20 0C A1 */
    push(c, 0x8Du); push(c, 0x51u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x8D52u: /* LDA IMM A9 04 */
    c->pc = 0x8D54u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D54u: /* STA ZP 85 B1 */
    c->pc = 0x8D56u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D56u: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D58u ^ 0x8D7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D58u; } return 1;
case 0x8D58u: /* LDX ABS AE 61 04 */
    c->pc = 0x8D5Bu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x8D5Bu: /* LDA ABS AD 21 04 */
    c->pc = 0x8D5Eu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D5Eu: /* AND IMM 29 40 */
    c->pc = 0x8D60u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D60u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8D62u ^ 0x8D68u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D68u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D62u; } return 1;
case 0x8D62u: /* CPX IMM E0 38 */
    c->pc = 0x8D64u;
    v = 0x38u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D64u: /* BCS REL B0 16 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8D66u ^ 0x8D7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D66u; } return 1;
case 0x8D66u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8D68u ^ 0x8D6Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D6Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D68u; } return 1;
case 0x8D68u: /* CPX IMM E0 C8 */
    c->pc = 0x8D6Au;
    v = 0xC8u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8D6Au: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8D6Cu ^ 0x8D7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8D7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D6Cu; } return 1;
case 0x8D6Cu: /* LDA ABS AD E1 04 */
    c->pc = 0x8D6Fu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D6Fu: /* EOR IMM 49 40 */
    c->pc = 0x8D71u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D71u: /* STA ABS 8D E1 04 */
    c->pc = 0x8D74u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D74u: /* LDA ABS AD 21 04 */
    c->pc = 0x8D77u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D77u: /* EOR IMM 49 40 */
    c->pc = 0x8D79u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D79u: /* STA ABS 8D 21 04 */
    c->pc = 0x8D7Cu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D7Cu: /* JSR ABS 20 F0 8D */
    push(c, 0x8Du); push(c, 0x7Eu); c->pc = 0x8DF0u; c->cpu_cycles += 6u; return 1;
case 0x8D7Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8D80u: /* LDA ABS AD A9 05 */
    c->pc = 0x8D83u;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D83u: /* STA ABS 8D 21 04 */
    c->pc = 0x8D86u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D86u: /* LDA ABS AD 41 06 */
    c->pc = 0x8D89u;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D89u: /* PHP IMP 08 */
    c->pc = 0x8D8Au;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0x8D8Au: /* JSR ABS 20 F0 8D */
    push(c, 0x8Du); push(c, 0x8Cu); c->pc = 0x8DF0u; c->cpu_cycles += 6u; return 1;
case 0x8D8Du: /* LDA IMM A9 0B */
    c->pc = 0x8D8Fu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D8Fu: /* STA ZP 85 01 */
    c->pc = 0x8D91u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D91u: /* LDA IMM A9 0C */
    c->pc = 0x8D93u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8D93u: /* STA ZP 85 02 */
    c->pc = 0x8D95u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8D95u: /* JSR ABS 20 D4 A2 */
    push(c, 0x8Du); push(c, 0x97u); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0x8D98u: /* PLP IMP 28 */
    c->pc = 0x8D99u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0x8D99u: /* BMI REL 30 0C */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x8D9Bu ^ 0x8DA7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DA7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8D9Bu; } return 1;
case 0x8D9Bu: /* LDA ABS AD 41 06 */
    c->pc = 0x8D9Eu;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8D9Eu: /* BPL REL 10 44 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8DA0u ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DA0u; } return 1;
case 0x8DA0u: /* LDA IMM A9 01 */
    c->pc = 0x8DA2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DA2u: /* STA ABS 8D A1 06 */
    c->pc = 0x8DA5u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DA5u: /* BNE REL D0 3D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8DA7u ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DA7u; } return 1;
case 0x8DA7u: /* LDA ZP A5 00 */
    c->pc = 0x8DA9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DA9u: /* BEQ REL F0 0B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8DABu ^ 0x8DB6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DB6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DABu; } return 1;
case 0x8DABu: /* LDA IMM A9 02 */
    c->pc = 0x8DADu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DADu: /* STA ZP 85 B1 */
    c->pc = 0x8DAFu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DAFu: /* LDA IMM A9 9C */
    c->pc = 0x8DB1u;
    v = 0x9Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DB1u: /* STA ABS 8D A7 05 */
    c->pc = 0x8DB4u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DB4u: /* BNE REL D0 2E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8DB6u ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DB6u; } return 1;
case 0x8DB6u: /* LDA ABS AD A1 06 */
    c->pc = 0x8DB9u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DB9u: /* CMP IMM C9 02 */
    c->pc = 0x8DBBu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8DBBu: /* BNE REL D0 27 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8DBDu ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DBDu; } return 1;
case 0x8DBDu: /* LDA ABS AD 81 06 */
    c->pc = 0x8DC0u;
    ea = 0x0681u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DC0u: /* BNE REL D0 22 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8DC2u ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DC2u; } return 1;
case 0x8DC2u: /* LDA IMM A9 5E */
    c->pc = 0x8DC4u;
    v = 0x5Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DC4u: /* JSR ABS 20 2D A2 */
    push(c, 0x8Du); push(c, 0xC6u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x8DC7u: /* BCC REL 90 1B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8DC9u ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DC9u; } return 1;
case 0x8DC9u: /* LDA IMM A9 5E */
    c->pc = 0x8DCBu;
    v = 0x5Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DCBu: /* LDX IMM A2 01 */
    c->pc = 0x8DCDu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8DCDu: /* JSR ABS 20 52 A3 */
    push(c, 0x8Du); push(c, 0xCFu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8DD0u: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8DD2u ^ 0x8DE4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DE4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DD2u; } return 1;
case 0x8DD2u: /* CLC IMP 18 */
    c->pc = 0x8DD3u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8DD3u: /* TYA IMP 98 */
    c->pc = 0x8DD4u;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DD4u: /* ADC IMM 69 10 */
    c->pc = 0x8DD6u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8DD6u: /* TAX IMP AA */
    c->pc = 0x8DD7u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8DD7u: /* STX ZP 86 2B */
    c->pc = 0x8DD9u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8DD9u: /* LDA IMM A9 24 */
    c->pc = 0x8DDBu;
    v = 0x24u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DDBu: /* STA ZP 85 08 */
    c->pc = 0x8DDDu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DDDu: /* LDA IMM A9 06 */
    c->pc = 0x8DDFu;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8DDFu: /* STA ZP 85 09 */
    c->pc = 0x8DE1u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DE1u: /* JSR ABS 20 8C A3 */
    push(c, 0x8Du); push(c, 0xE3u); c->pc = 0xA38Cu; c->cpu_cycles += 6u; return 1;
case 0x8DE4u: /* LDA ABS AD A1 06 */
    c->pc = 0x8DE7u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DE7u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8DE9u ^ 0x8DECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DECu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DE9u; } return 1;
case 0x8DE9u: /* STA ABS 8D 81 06 */
    c->pc = 0x8DECu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DECu: /* JSR ABS 20 09 A2 */
    push(c, 0x8Du); push(c, 0xEEu); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x8DEFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8DF0u: /* LDA ABS AD A8 05 */
    c->pc = 0x8DF3u;
    ea = 0x05A8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8DF3u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8DF5u ^ 0x8DF9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8DF9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8DF5u; } return 1;
case 0x8DF5u: /* JSR ABS 20 4F A1 */
    push(c, 0x8Du); push(c, 0xF7u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x8DF8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8DF9u: /* JSR ABS 20 46 A1 */
    push(c, 0x8Du); push(c, 0xFBu); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x8DFCu: /* LDA ZP A5 02 */
    c->pc = 0x8DFEu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8DFEu: /* CMP IMM C9 01 */
    c->pc = 0x8E00u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E00u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E02u ^ 0x8E07u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E07u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E02u; } return 1;
case 0x8E02u: /* LDA IMM A9 12 */
    c->pc = 0x8E04u;
    v = 0x12u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E04u: /* STA ABS 8D A8 05 */
    c->pc = 0x8E07u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E07u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E10u: /* DEX IMP CA */
    c->pc = 0x8E11u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8E11u: /* LDA ABX BD 05 92 */
    c->pc = 0x8E14u;
    ea = (uint16_t)(0x9205u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9205u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8E14u: /* STA ZP 85 08 */
    c->pc = 0x8E16u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E16u: /* LDA ABX BD 0C 92 */
    c->pc = 0x8E19u;
    ea = (uint16_t)(0x920Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x920Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8E19u: /* STA ZP 85 09 */
    c->pc = 0x8E1Bu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E1Bu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x8E1Eu: /* LDA ABS AD E1 04 */
    c->pc = 0x8E21u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E21u: /* BNE REL D0 1B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E23u ^ 0x8E3Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E3Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E23u; } return 1;
case 0x8E23u: /* LDA IMM A9 09 */
    c->pc = 0x8E25u;
    v = 0x09u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E25u: /* JSR ABS 20 F1 C5 */
    push(c, 0x8Eu); push(c, 0x27u); c->pc = 0xC5F1u; c->cpu_cycles += 6u; return 1;
case 0x8E28u: /* INC ZP E6 B2 */
    c->pc = 0x8E2Au;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8E2Au: /* LDA ZP A5 B2 */
    c->pc = 0x8E2Cu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E2Cu: /* CMP IMM C9 40 */
    c->pc = 0x8E2Eu;
    v = 0x40u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E2Eu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8E30u ^ 0x8E31u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E31u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E30u; } return 1;
case 0x8E30u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E31u: /* INC ABS EE E1 04 */
    c->pc = 0x8E34u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8E34u: /* LDA IMM A9 00 */
    c->pc = 0x8E36u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E36u: /* STA ZP 85 B2 */
    c->pc = 0x8E38u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E38u: /* LDA IMM A9 80 */
    c->pc = 0x8E3Au;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E3Au: /* STA ABS 8D A7 05 */
    c->pc = 0x8E3Du;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E3Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E3Eu: /* CMP IMM C9 01 */
    c->pc = 0x8E40u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E40u: /* BNE REL D0 34 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E42u ^ 0x8E76u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E76u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E42u; } return 1;
case 0x8E42u: /* LDX ZP A6 B2 */
    c->pc = 0x8E44u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8E44u: /* LDA ABX BD D9 8E */
    c->pc = 0x8E47u;
    ea = (uint16_t)(0x8ED9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8ED9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8E47u: /* STA ABS 8D B6 03 */
    c->pc = 0x8E4Au;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E4Au: /* LDA ABX BD E8 8E */
    c->pc = 0x8E4Du;
    ea = (uint16_t)(0x8EE8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8EE8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8E4Du: /* STA ABS 8D B7 03 */
    c->pc = 0x8E50u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E50u: /* LDA ABX BD F7 8E */
    c->pc = 0x8E53u;
    ea = (uint16_t)(0x8EF7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8EF7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8E53u: /* STA ZP 85 47 */
    c->pc = 0x8E55u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E55u: /* STA ZP 85 00 */
    c->pc = 0x8E57u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E57u: /* LDY IMM A0 00 */
    c->pc = 0x8E59u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8E59u: /* LDA ABS AD A7 05 */
    c->pc = 0x8E5Cu;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E5Cu: /* STA ABY 99 B8 03 */
    c->pc = 0x8E5Fu;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8E5Fu: /* INY IMP C8 */
    c->pc = 0x8E60u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8E60u: /* INC ABS EE A7 05 */
    c->pc = 0x8E63u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8E63u: /* DEC ZP C6 00 */
    c->pc = 0x8E65u;
    ea = 0x00u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8E65u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E67u ^ 0x8E59u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E59u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E67u; } return 1;
case 0x8E67u: /* INX IMP E8 */
    c->pc = 0x8E68u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8E68u: /* STX ZP 86 B2 */
    c->pc = 0x8E6Au;
    ea = 0xB2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8E6Au: /* CPX IMM E0 0F */
    c->pc = 0x8E6Cu;
    v = 0x0Fu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E6Cu: /* BNE REL D0 6A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E6Eu ^ 0x8ED8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8ED8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E6Eu; } return 1;
case 0x8E6Eu: /* INC ABS EE E1 04 */
    c->pc = 0x8E71u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8E71u: /* LDA IMM A9 00 */
    c->pc = 0x8E73u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E73u: /* STA ZP 85 B2 */
    c->pc = 0x8E75u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8E75u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E76u: /* CMP IMM C9 02 */
    c->pc = 0x8E78u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E78u: /* BNE REL D0 36 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E7Au ^ 0x8EB0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8EB0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E7Au; } return 1;
case 0x8E7Au: /* LDX ZP A6 B2 */
    c->pc = 0x8E7Cu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8E7Cu: /* CPX IMM E0 10 */
    c->pc = 0x8E7Eu;
    v = 0x10u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E7Eu: /* BEQ REL F0 1F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x8E80u ^ 0x8E9Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E9Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E80u; } return 1;
case 0x8E80u: /* LDA IMM A9 23 */
    c->pc = 0x8E82u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E82u: /* STA ABS 8D B6 03 */
    c->pc = 0x8E85u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E85u: /* TXA IMP 8A */
    c->pc = 0x8E86u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E86u: /* ASL IMP 0A */
    c->pc = 0x8E87u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8E87u: /* ADC IMM 69 D0 */
    c->pc = 0x8E89u;
    v = 0xD0u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E89u: /* STA ABS 8D B7 03 */
    c->pc = 0x8E8Cu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8E8Cu: /* LDY IMM A0 00 */
    c->pc = 0x8E8Eu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8E8Eu: /* LDA ABX BD 06 8F */
    c->pc = 0x8E91u;
    ea = (uint16_t)(0x8F06u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8F06u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8E91u: /* STA ABY 99 B8 03 */
    c->pc = 0x8E94u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8E94u: /* INX IMP E8 */
    c->pc = 0x8E95u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8E95u: /* INY IMP C8 */
    c->pc = 0x8E96u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8E96u: /* CPY IMM C0 04 */
    c->pc = 0x8E98u;
    v = 0x04u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x8E98u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8E9Au ^ 0x8E8Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8E8Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8E9Au; } return 1;
case 0x8E9Au: /* STY ZP 84 47 */
    c->pc = 0x8E9Cu;
    ea = 0x47u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x8E9Cu: /* STX ZP 86 B2 */
    c->pc = 0x8E9Eu;
    ea = 0xB2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x8E9Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8E9Fu: /* INC ABS EE E1 04 */
    c->pc = 0x8EA2u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8EA2u: /* LDA IMM A9 23 */
    c->pc = 0x8EA4u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EA4u: /* STA ABS 8D B6 03 */
    c->pc = 0x8EA7u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8EA7u: /* LDA IMM A9 E0 */
    c->pc = 0x8EA9u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EA9u: /* STA ABS 8D B7 03 */
    c->pc = 0x8EACu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8EACu: /* LDA IMM A9 1E */
    c->pc = 0x8EAEu;
    v = 0x1Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EAEu: /* STA ZP 85 B2 */
    c->pc = 0x8EB0u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EB0u: /* LDA IMM A9 00 */
    c->pc = 0x8EB2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EB2u: /* LDX IMM A2 1F */
    c->pc = 0x8EB4u;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8EB4u: /* STA ABX 9D B8 03 */
    c->pc = 0x8EB7u;
    ea = (uint16_t)(0x03B8u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8EB7u: /* DEX IMP CA */
    c->pc = 0x8EB8u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8EB8u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8EBAu ^ 0x8EB4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8EB4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8EBAu; } return 1;
case 0x8EBAu: /* CLC IMP 18 */
    c->pc = 0x8EBBu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x8EBBu: /* LDA IMM A9 20 */
    c->pc = 0x8EBDu;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8EBDu: /* STA ZP 85 47 */
    c->pc = 0x8EBFu;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8EBFu: /* ADC ABS 6D B7 03 */
    c->pc = 0x8EC2u;
    ea = 0x03B7u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x8EC2u: /* STA ABS 8D B7 03 */
    c->pc = 0x8EC5u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8EC5u: /* LDA ABS AD B6 03 */
    c->pc = 0x8EC8u;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8EC8u: /* ADC IMM 69 00 */
    c->pc = 0x8ECAu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x8ECAu: /* STA ABS 8D B6 03 */
    c->pc = 0x8ECDu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8ECDu: /* DEC ZP C6 B2 */
    c->pc = 0x8ECFu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8ECFu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8ED1u ^ 0x8ED8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8ED8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8ED1u; } return 1;
case 0x8ED1u: /* INC ZP E6 B1 */
    c->pc = 0x8ED3u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8ED3u: /* LDA IMM A9 00 */
    c->pc = 0x8ED5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8ED5u: /* STA ABS 8D E1 04 */
    c->pc = 0x8ED8u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8ED8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8F16u: /* LDA ABS AD E1 04 */
    c->pc = 0x8F19u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8F19u: /* BNE REL D0 1A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8F1Bu ^ 0x8F35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F35u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F1Bu; } return 1;
case 0x8F1Bu: /* LDA IMM A9 67 */
    c->pc = 0x8F1Du;
    v = 0x67u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F1Du: /* LDX IMM A2 01 */
    c->pc = 0x8F1Fu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8F1Fu: /* JSR ABS 20 52 A3 */
    push(c, 0x8Fu); push(c, 0x21u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8F22u: /* LDA ZP A5 20 */
    c->pc = 0x8F24u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F24u: /* STA ABY 99 50 04 */
    c->pc = 0x8F27u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F27u: /* LDA IMM A9 30 */
    c->pc = 0x8F29u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F29u: /* STA ABY 99 70 04 */
    c->pc = 0x8F2Cu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F2Cu: /* LDA IMM A9 E0 */
    c->pc = 0x8F2Eu;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F2Eu: /* STA ABY 99 B0 04 */
    c->pc = 0x8F31u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F31u: /* INC ABS EE E1 04 */
    c->pc = 0x8F34u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x8F34u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8F35u: /* CMP IMM C9 02 */
    c->pc = 0x8F37u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8F37u: /* BCS REL B0 01 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8F39u ^ 0x8F3Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F3Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F39u; } return 1;
case 0x8F39u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8F3Au: /* BNE REL D0 3D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8F3Cu ^ 0x8F79u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F79u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F3Cu; } return 1;
case 0x8F3Cu: /* LDX IMM A2 0F */
    c->pc = 0x8F3Eu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8F3Eu: /* LDA ABX BD 7A 8F */
    c->pc = 0x8F41u;
    ea = (uint16_t)(0x8F7Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x8F7Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8F41u: /* STA ABX 9D 56 03 */
    c->pc = 0x8F44u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F44u: /* DEX IMP CA */
    c->pc = 0x8F45u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8F45u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8F47u ^ 0x8F3Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F3Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F47u; } return 1;
case 0x8F47u: /* JSR ABS 20 51 A4 */
    push(c, 0x8Fu); push(c, 0x49u); c->pc = 0xA451u; c->cpu_cycles += 6u; return 1;
case 0x8F4Au: /* LDA IMM A9 03 */
    c->pc = 0x8F4Cu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F4Cu: /* STA ZP 85 B1 */
    c->pc = 0x8F4Eu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F4Eu: /* LDA IMM A9 5D */
    c->pc = 0x8F50u;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F50u: /* STA ZP 85 B2 */
    c->pc = 0x8F52u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F52u: /* LDA IMM A9 65 */
    c->pc = 0x8F54u;
    v = 0x65u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F54u: /* LDX IMM A2 01 */
    c->pc = 0x8F56u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8F56u: /* JSR ABS 20 52 A3 */
    push(c, 0x8Fu); push(c, 0x58u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8F59u: /* LDA IMM A9 40 */
    c->pc = 0x8F5Bu;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F5Bu: /* STA ABY 99 70 04 */
    c->pc = 0x8F5Eu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F5Eu: /* LDA IMM A9 87 */
    c->pc = 0x8F60u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F60u: /* STA ABY 99 B0 04 */
    c->pc = 0x8F63u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F63u: /* LDA IMM A9 66 */
    c->pc = 0x8F65u;
    v = 0x66u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F65u: /* LDX IMM A2 01 */
    c->pc = 0x8F67u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x8F67u: /* JSR ABS 20 52 A3 */
    push(c, 0x8Fu); push(c, 0x69u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x8F6Au: /* LDA IMM A9 38 */
    c->pc = 0x8F6Cu;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F6Cu: /* STA ABY 99 70 04 */
    c->pc = 0x8F6Fu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F6Fu: /* LDA IMM A9 BF */
    c->pc = 0x8F71u;
    v = 0xBFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F71u: /* STA ABY 99 B0 04 */
    c->pc = 0x8F74u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8F74u: /* LDA IMM A9 2C */
    c->pc = 0x8F76u;
    v = 0x2Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F76u: /* JSR ABS 20 51 C0 */
    push(c, 0x8Fu); push(c, 0x78u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x8F79u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8F8Au: /* LDA IMM A9 63 */
    c->pc = 0x8F8Cu;
    v = 0x63u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F8Cu: /* STA ZP 85 00 */
    c->pc = 0x8F8Eu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8F8Eu: /* LDY IMM A0 0F */
    c->pc = 0x8F90u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8F90u: /* JSR ABS 20 31 A2 */
    push(c, 0x8Fu); push(c, 0x92u); c->pc = 0xA231u; c->cpu_cycles += 6u; return 1;
case 0x8F93u: /* BCS REL B0 1D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8F95u ^ 0x8FB2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FB2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F95u; } return 1;
case 0x8F95u: /* LDA ABY B9 30 04 */
    c->pc = 0x8F98u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8F98u: /* AND IMM 29 04 */
    c->pc = 0x8F9Au;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8F9Au: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8F9Cu ^ 0x8FAFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FAFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8F9Cu; } return 1;
case 0x8F9Cu: /* LDA ABY B9 70 04 */
    c->pc = 0x8F9Fu;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x8F9Fu: /* CMP IMM C9 60 */
    c->pc = 0x8FA1u;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FA1u: /* BCS REL B0 0C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8FA3u ^ 0x8FAFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FAFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FA3u; } return 1;
case 0x8FA3u: /* LDA IMM A9 C4 */
    c->pc = 0x8FA5u;
    v = 0xC4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FA5u: /* STA ABY 99 30 04 */
    c->pc = 0x8FA8u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8FA8u: /* LDA ZP A5 4A */
    c->pc = 0x8FAAu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FAAu: /* AND IMM 29 03 */
    c->pc = 0x8FACu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FACu: /* STA ABY 99 10 06 */
    c->pc = 0x8FAFu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x8FAFu: /* DEY IMP 88 */
    c->pc = 0x8FB0u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x8FB0u: /* BPL REL 10 DE */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x8FB2u ^ 0x8F90u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8F90u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FB2u; } return 1;
case 0x8FB2u: /* JSR ABS 20 C9 8F */
    push(c, 0x8Fu); push(c, 0xB4u); c->pc = 0x8FC9u; c->cpu_cycles += 6u; return 1;
case 0x8FB5u: /* DEC ZP C6 B2 */
    c->pc = 0x8FB7u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x8FB7u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8FB9u ^ 0x8FBDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FBDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FB9u; } return 1;
case 0x8FB9u: /* LDA IMM A9 5D */
    c->pc = 0x8FBBu;
    v = 0x5Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FBBu: /* STA ZP 85 B2 */
    c->pc = 0x8FBDu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x8FBDu: /* JSR ABS 20 65 91 */
    push(c, 0x8Fu); push(c, 0xBFu); c->pc = 0x9165u; c->cpu_cycles += 6u; return 1;
case 0x8FC0u: /* LDA ABS AD A1 06 */
    c->pc = 0x8FC3u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FC3u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8FC5u ^ 0x8FC8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FC8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FC5u; } return 1;
case 0x8FC5u: /* STA ABS 8D 81 06 */
    c->pc = 0x8FC8u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FC8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8FC9u: /* LDA ABS AD E1 04 */
    c->pc = 0x8FCCu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FCCu: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x8FCEu ^ 0x8FE5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FE5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FCEu; } return 1;
case 0x8FCEu: /* LDA ABS AD A1 04 */
    c->pc = 0x8FD1u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FD1u: /* CMP IMM C9 53 */
    c->pc = 0x8FD3u;
    v = 0x53u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FD3u: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x8FD5u ^ 0x8FE5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FE5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FD5u; } return 1;
case 0x8FD5u: /* LDA IMM A9 00 */
    c->pc = 0x8FD7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FD7u: /* STA ABS 8D E1 04 */
    c->pc = 0x8FDAu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FDAu: /* LDA IMM A9 00 */
    c->pc = 0x8FDCu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FDCu: /* STA ABS 8D 41 06 */
    c->pc = 0x8FDFu;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FDFu: /* LDA IMM A9 80 */
    c->pc = 0x8FE1u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FE1u: /* STA ABS 8D 61 06 */
    c->pc = 0x8FE4u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FE4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8FE5u: /* LDA ABS AD A1 04 */
    c->pc = 0x8FE8u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FE8u: /* CMP IMM C9 73 */
    c->pc = 0x8FEAu;
    v = 0x73u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x8FEAu: /* BCS REL B0 E9 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x8FECu ^ 0x8FD5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x8FD5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x8FECu; } return 1;
case 0x8FECu: /* LDA IMM A9 01 */
    c->pc = 0x8FEEu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FEEu: /* STA ABS 8D E1 04 */
    c->pc = 0x8FF1u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FF1u: /* LDA IMM A9 FF */
    c->pc = 0x8FF3u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FF3u: /* STA ABS 8D 41 06 */
    c->pc = 0x8FF6u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FF6u: /* LDA IMM A9 80 */
    c->pc = 0x8FF8u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FF8u: /* STA ABS 8D 61 06 */
    c->pc = 0x8FFBu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x8FFBu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x8FFCu: /* LDA IMM A9 63 */
    c->pc = 0x8FFEu;
    v = 0x63u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x8FFEu: /* STA ZP 85 00 */
    c->pc = 0x9000u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9000u: /* LDY IMM A0 0F */
    c->pc = 0x9002u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9002u: /* JSR ABS 20 31 A2 */
    push(c, 0x90u); push(c, 0x04u); c->pc = 0xA231u; c->cpu_cycles += 6u; return 1;
case 0x9005u: /* BCS REL B0 16 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9007u ^ 0x901Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x901Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9007u; } return 1;
case 0x9007u: /* LDA ABY B9 30 04 */
    c->pc = 0x900Au;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x900Au: /* AND IMM 29 04 */
    c->pc = 0x900Cu;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x900Cu: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x900Eu ^ 0x901Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x901Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x900Eu; } return 1;
case 0x900Eu: /* LDA ABY B9 70 04 */
    c->pc = 0x9011u;
    ea = (uint16_t)(0x0470u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0470u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9011u: /* CMP IMM C9 90 */
    c->pc = 0x9013u;
    v = 0x90u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9013u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9015u ^ 0x901Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x901Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9015u; } return 1;
case 0x9015u: /* LDA IMM A9 C4 */
    c->pc = 0x9017u;
    v = 0xC4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9017u: /* STA ABY 99 30 04 */
    c->pc = 0x901Au;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x901Au: /* DEY IMP 88 */
    c->pc = 0x901Bu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x901Bu: /* BPL REL 10 E5 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x901Du ^ 0x9002u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9002u; }
    else { c->cpu_cycles += 2u; c->pc = 0x901Du; } return 1;
case 0x901Du: /* JSR ABS 20 C9 8F */
    push(c, 0x90u); push(c, 0x1Fu); c->pc = 0x8FC9u; c->cpu_cycles += 6u; return 1;
case 0x9020u: /* JSR ABS 20 65 91 */
    push(c, 0x90u); push(c, 0x22u); c->pc = 0x9165u; c->cpu_cycles += 6u; return 1;
case 0x9023u: /* JSR ABS 20 18 A1 */
    push(c, 0x90u); push(c, 0x25u); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x9026u: /* LDA ABS AD C1 06 */
    c->pc = 0x9029u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9029u: /* CMP IMM C9 1C */
    c->pc = 0x902Bu;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x902Bu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x902Du ^ 0x9034u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9034u; }
    else { c->cpu_cycles += 2u; c->pc = 0x902Du; } return 1;
case 0x902Du: /* LDA IMM A9 00 */
    c->pc = 0x902Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x902Fu: /* STA ABS 8D E1 04 */
    c->pc = 0x9032u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9032u: /* INC ZP E6 B1 */
    c->pc = 0x9034u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9034u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9035u: /* LDA IMM A9 2C */
    c->pc = 0x9037u;
    v = 0x2Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9037u: /* JSR ABS 20 51 C0 */
    push(c, 0x90u); push(c, 0x39u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x903Au: /* LDA IMM A9 01 */
    c->pc = 0x903Cu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x903Cu: /* STA ABS 8D A1 06 */
    c->pc = 0x903Fu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x903Fu: /* LDA IMM A9 68 */
    c->pc = 0x9041u;
    v = 0x68u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9041u: /* LDX IMM A2 01 */
    c->pc = 0x9043u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9043u: /* JSR ABS 20 52 A3 */
    push(c, 0x90u); push(c, 0x45u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x9046u: /* BCS REL B0 1B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9048u ^ 0x9063u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9063u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9048u; } return 1;
case 0x9048u: /* CLC IMP 18 */
    c->pc = 0x9049u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9049u: /* LDA ABY B9 B0 04 */
    c->pc = 0x904Cu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x904Cu: /* ADC IMM 69 10 */
    c->pc = 0x904Eu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x904Eu: /* STA ABY 99 B0 04 */
    c->pc = 0x9051u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9051u: /* LDA IMM A9 02 */
    c->pc = 0x9053u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9053u: /* STA ZP 85 09 */
    c->pc = 0x9055u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9055u: /* LDA IMM A9 00 */
    c->pc = 0x9057u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9057u: /* STA ZP 85 08 */
    c->pc = 0x9059u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9059u: /* TYA IMP 98 */
    c->pc = 0x905Au;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x905Au: /* CLC IMP 18 */
    c->pc = 0x905Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x905Bu: /* ADC IMM 69 10 */
    c->pc = 0x905Du;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x905Du: /* TAX IMP AA */
    c->pc = 0x905Eu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x905Eu: /* STX ZP 86 2B */
    c->pc = 0x9060u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9060u: /* JSR ABS 20 8C A3 */
    push(c, 0x90u); push(c, 0x62u); c->pc = 0xA38Cu; c->cpu_cycles += 6u; return 1;
case 0x9063u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9064u: /* LDA ABS AD E1 04 */
    c->pc = 0x9067u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9067u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9069u ^ 0x9071u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9071u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9069u; } return 1;
case 0x9069u: /* LDY IMM A0 A0 */
    c->pc = 0x906Bu;
    v = 0xA0u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x906Bu: /* JSR ABS 20 C5 90 */
    push(c, 0x90u); push(c, 0x6Du); c->pc = 0x90C5u; c->cpu_cycles += 6u; return 1;
case 0x906Eu: /* INC ABS EE E1 04 */
    c->pc = 0x9071u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9071u: /* JSR ABS 20 0A 91 */
    push(c, 0x90u); push(c, 0x73u); c->pc = 0x910Au; c->cpu_cycles += 6u; return 1;
case 0x9074u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9076u ^ 0x907Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x907Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9076u; } return 1;
case 0x9076u: /* LDA ABS AD 61 04 */
    c->pc = 0x9079u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9079u: /* CMP IMM C9 A0 */
    c->pc = 0x907Bu;
    v = 0xA0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x907Bu: /* BCC REL 90 07 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x907Du ^ 0x9084u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9084u; }
    else { c->cpu_cycles += 2u; c->pc = 0x907Du; } return 1;
case 0x907Du: /* LDA IMM A9 00 */
    c->pc = 0x907Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x907Fu: /* STA ABS 8D E1 04 */
    c->pc = 0x9082u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9082u: /* INC ZP E6 B1 */
    c->pc = 0x9084u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9084u: /* LDA ABS AD A1 06 */
    c->pc = 0x9087u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9087u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9089u ^ 0x908Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x908Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9089u; } return 1;
case 0x9089u: /* STA ABS 8D 81 06 */
    c->pc = 0x908Cu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x908Cu: /* LDA ABS AD 41 06 */
    c->pc = 0x908Fu;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x908Fu: /* BPL REL 10 09 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9091u ^ 0x909Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x909Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9091u; } return 1;
case 0x9091u: /* LDA ABS AD A1 04 */
    c->pc = 0x9094u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9094u: /* CMP IMM C9 A0 */
    c->pc = 0x9096u;
    v = 0xA0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9096u: /* BCC REL 90 1E */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9098u ^ 0x90B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9098u; } return 1;
case 0x9098u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x909Au ^ 0x90A1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90A1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x909Au; } return 1;
case 0x909Au: /* LDA ABS AD A1 04 */
    c->pc = 0x909Du;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x909Du: /* CMP IMM C9 20 */
    c->pc = 0x909Fu;
    v = 0x20u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x909Fu: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x90A1u ^ 0x90B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x90A1u; } return 1;
case 0x90A1u: /* CLC IMP 18 */
    c->pc = 0x90A2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x90A2u: /* LDA ABS AD 61 06 */
    c->pc = 0x90A5u;
    ea = 0x0661u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90A5u: /* EOR IMM 49 FF */
    c->pc = 0x90A7u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90A7u: /* ADC IMM 69 01 */
    c->pc = 0x90A9u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x90A9u: /* STA ABS 8D 61 06 */
    c->pc = 0x90ACu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90ACu: /* LDA ABS AD 41 06 */
    c->pc = 0x90AFu;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90AFu: /* EOR IMM 49 FF */
    c->pc = 0x90B1u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90B1u: /* ADC IMM 69 00 */
    c->pc = 0x90B3u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x90B3u: /* STA ABS 8D 41 06 */
    c->pc = 0x90B6u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90B6u: /* LDA ABS AD A7 05 */
    c->pc = 0x90B9u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90B9u: /* STA ABS 8D 21 04 */
    c->pc = 0x90BCu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90BCu: /* JSR ABS 20 65 91 */
    push(c, 0x90u); push(c, 0xBEu); c->pc = 0x9165u; c->cpu_cycles += 6u; return 1;
case 0x90BFu: /* LDA IMM A9 83 */
    c->pc = 0x90C1u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90C1u: /* STA ABS 8D 21 04 */
    c->pc = 0x90C4u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90C4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x90C5u: /* LDA IMM A9 00 */
    c->pc = 0x90C7u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90C7u: /* STA ZP 85 09 */
    c->pc = 0x90C9u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90C9u: /* LDA IMM A9 C4 */
    c->pc = 0x90CBu;
    v = 0xC4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90CBu: /* STA ZP 85 08 */
    c->pc = 0x90CDu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90CDu: /* LDX IMM A2 01 */
    c->pc = 0x90CFu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x90CFu: /* STX ZP 86 2B */
    c->pc = 0x90D1u;
    ea = 0x2Bu;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x90D1u: /* LDA ABS AD 60 04 */
    c->pc = 0x90D4u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90D4u: /* PHA IMP 48 */
    c->pc = 0x90D5u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x90D5u: /* STY ABS 8C 60 04 */
    c->pc = 0x90D8u;
    ea = 0x0460u;
    write8(c, ea, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x90D8u: /* JSR ABS 20 8C A3 */
    push(c, 0x90u); push(c, 0xDAu); c->pc = 0xA38Cu; c->cpu_cycles += 6u; return 1;
case 0x90DBu: /* LDA IMM A9 C3 */
    c->pc = 0x90DDu;
    v = 0xC3u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90DDu: /* STA ABS 8D A7 05 */
    c->pc = 0x90E0u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90E0u: /* PLA IMP 68 */
    c->pc = 0x90E1u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90E1u: /* STA ABS 8D 60 04 */
    c->pc = 0x90E4u;
    ea = 0x0460u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90E4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x90E5u: /* LDA ABS AD E1 04 */
    c->pc = 0x90E8u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90E8u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x90EAu ^ 0x90F7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x90F7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x90EAu; } return 1;
case 0x90EAu: /* LDY IMM A0 58 */
    c->pc = 0x90ECu;
    v = 0x58u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x90ECu: /* JSR ABS 20 C5 90 */
    push(c, 0x90u); push(c, 0xEEu); c->pc = 0x90C5u; c->cpu_cycles += 6u; return 1;
case 0x90EFu: /* LDA IMM A9 83 */
    c->pc = 0x90F1u;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x90F1u: /* STA ABS 8D A7 05 */
    c->pc = 0x90F4u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90F4u: /* INC ABS EE E1 04 */
    c->pc = 0x90F7u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x90F7u: /* LDA ABS AD 61 04 */
    c->pc = 0x90FAu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x90FAu: /* CMP IMM C9 58 */
    c->pc = 0x90FCu;
    v = 0x58u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x90FCu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x90FEu ^ 0x9100u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9100u; }
    else { c->cpu_cycles += 2u; c->pc = 0x90FEu; } return 1;
case 0x90FEu: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9100u ^ 0x9107u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9107u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9100u; } return 1;
case 0x9100u: /* LDA IMM A9 00 */
    c->pc = 0x9102u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9102u: /* STA ABS 8D E1 04 */
    c->pc = 0x9105u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9105u: /* DEC ZP C6 B1 */
    c->pc = 0x9107u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9107u: /* JMP ABS 4C 84 90 */
    c->pc = 0x9084u; c->cpu_cycles += 3u; return 1;
case 0x910Au: /* SEC IMP 38 */
    c->pc = 0x910Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x910Bu: /* LDA ABS AD A0 04 */
    c->pc = 0x910Eu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x910Eu: /* SBC ABS ED A1 04 */
    c->pc = 0x9111u;
    ea = 0x04A1u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x9111u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9113u ^ 0x9117u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9117u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9113u; } return 1;
case 0x9113u: /* EOR IMM 49 FF */
    c->pc = 0x9115u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9115u: /* ADC IMM 69 01 */
    c->pc = 0x9117u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9117u: /* CMP IMM C9 04 */
    c->pc = 0x9119u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9119u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x911Bu ^ 0x9120u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9120u; }
    else { c->cpu_cycles += 2u; c->pc = 0x911Bu; } return 1;
case 0x911Bu: /* JSR ABS 20 35 90 */
    push(c, 0x91u); push(c, 0x1Du); c->pc = 0x9035u; c->cpu_cycles += 6u; return 1;
case 0x911Eu: /* SEC IMP 38 */
    c->pc = 0x911Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x911Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9120u: /* CLC IMP 18 */
    c->pc = 0x9121u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9121u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9122u: /* LDA ZP A5 B2 */
    c->pc = 0x9124u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9124u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9126u ^ 0x912Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x912Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9126u; } return 1;
case 0x9126u: /* LDA IMM A9 0F */
    c->pc = 0x9128u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9128u: /* STA ABS 8D 66 03 */
    c->pc = 0x912Bu;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x912Bu: /* JMP ABS 4C 8B A0 */
    c->pc = 0xA08Bu; c->cpu_cycles += 3u; return 1;
case 0x912Eu: /* JSR ABS 20 82 93 */
    push(c, 0x91u); push(c, 0x30u); c->pc = 0x9382u; c->cpu_cycles += 6u; return 1;
case 0x9131u: /* LDA ZP A5 1C */
    c->pc = 0x9133u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9133u: /* AND IMM 29 0F */
    c->pc = 0x9135u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9135u: /* BNE REL D0 2D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9137u ^ 0x9164u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9164u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9137u; } return 1;
case 0x9137u: /* LDX IMM A2 0F */
    c->pc = 0x9139u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9139u: /* SEC IMP 38 */
    c->pc = 0x913Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x913Au: /* LDA ABX BD 56 03 */
    c->pc = 0x913Du;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x913Du: /* SBC IMM E9 10 */
    c->pc = 0x913Fu;
    v = 0x10u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x913Fu: /* BPL REL 10 02 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9141u ^ 0x9143u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9143u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9141u; } return 1;
case 0x9141u: /* LDA IMM A9 0F */
    c->pc = 0x9143u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9143u: /* STA ABX 9D 56 03 */
    c->pc = 0x9146u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9146u: /* DEX IMP CA */
    c->pc = 0x9147u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9147u: /* BPL REL 10 F0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9149u ^ 0x9139u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9139u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9149u; } return 1;
case 0x9149u: /* LDX IMM A2 07 */
    c->pc = 0x914Bu;
    v = 0x07u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x914Bu: /* SEC IMP 38 */
    c->pc = 0x914Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x914Cu: /* LDA ABX BD 6E 03 */
    c->pc = 0x914Fu;
    ea = (uint16_t)(0x036Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x036Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x914Fu: /* SBC IMM E9 10 */
    c->pc = 0x9151u;
    v = 0x10u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9151u: /* BPL REL 10 02 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9153u ^ 0x9155u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9155u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9153u; } return 1;
case 0x9153u: /* LDA IMM A9 0F */
    c->pc = 0x9155u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9155u: /* STA ABX 9D 6E 03 */
    c->pc = 0x9158u;
    ea = (uint16_t)(0x036Eu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9158u: /* DEX IMP CA */
    c->pc = 0x9159u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9159u: /* BPL REL 10 F0 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x915Bu ^ 0x914Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x914Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x915Bu; } return 1;
case 0x915Bu: /* DEC ZP C6 B2 */
    c->pc = 0x915Du;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x915Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x915Fu ^ 0x9164u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9164u; }
    else { c->cpu_cycles += 2u; c->pc = 0x915Fu; } return 1;
case 0x915Fu: /* LDA IMM A9 70 */
    c->pc = 0x9161u;
    v = 0x70u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9161u: /* STA ABS 8D A7 05 */
    c->pc = 0x9164u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9164u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9165u: /* LDA ABS AD A0 04 */
    c->pc = 0x9168u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9168u: /* CMP IMM C9 B0 */
    c->pc = 0x916Au;
    v = 0xB0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x916Au: /* BCC REL 90 08 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x916Cu ^ 0x9174u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9174u; }
    else { c->cpu_cycles += 2u; c->pc = 0x916Cu; } return 1;
case 0x916Cu: /* LDA IMM A9 00 */
    c->pc = 0x916Eu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x916Eu: /* STA ABS 8D 61 06 */
    c->pc = 0x9171u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9171u: /* STA ABS 8D 41 06 */
    c->pc = 0x9174u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9174u: /* LDA IMM A9 0F */
    c->pc = 0x9176u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9176u: /* STA ABS 8D 66 03 */
    c->pc = 0x9179u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9179u: /* JSR ABS 20 9D A5 */
    push(c, 0x91u); push(c, 0x7Bu); c->pc = 0xA59Du; c->cpu_cycles += 6u; return 1;
case 0x917Cu: /* BCC REL 90 1B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x917Eu ^ 0x9199u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9199u; }
    else { c->cpu_cycles += 2u; c->pc = 0x917Eu; } return 1;
case 0x917Eu: /* LDA IMM A9 0D */
    c->pc = 0x9180u;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9180u: /* STA ZP 85 B2 */
    c->pc = 0x9182u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9182u: /* LDA IMM A9 00 */
    c->pc = 0x9184u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9184u: /* STA ABS 8D 61 06 */
    c->pc = 0x9187u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9187u: /* STA ABS 8D 41 06 */
    c->pc = 0x918Au;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x918Au: /* STA ABS 8D 21 06 */
    c->pc = 0x918Du;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x918Du: /* STA ABS 8D 01 06 */
    c->pc = 0x9190u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9190u: /* INC ABS EE AA 05 */
    c->pc = 0x9193u;
    ea = 0x05AAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9193u: /* LDA IMM A9 07 */
    c->pc = 0x9195u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9195u: /* STA ZP 85 B1 */
    c->pc = 0x9197u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9197u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9199u ^ 0x91A4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91A4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9199u; } return 1;
case 0x9199u: /* LDA ZP A5 02 */
    c->pc = 0x919Bu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x919Bu: /* CMP IMM C9 01 */
    c->pc = 0x919Du;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x919Du: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x919Fu ^ 0x91A4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91A4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x919Fu; } return 1;
case 0x919Fu: /* LDA IMM A9 30 */
    c->pc = 0x91A1u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91A1u: /* STA ABS 8D 66 03 */
    c->pc = 0x91A4u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91A4u: /* JSR ABS 20 4F A1 */
    push(c, 0x91u); push(c, 0xA6u); c->pc = 0xA14Fu; c->cpu_cycles += 6u; return 1;
case 0x91A7u: /* SEC IMP 38 */
    c->pc = 0x91A8u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91A8u: /* LDA ZP A5 B5 */
    c->pc = 0x91AAu;
    ea = 0xB5u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91AAu: /* SBC ABS ED 61 06 */
    c->pc = 0x91ADu;
    ea = 0x0661u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x91ADu: /* STA ZP 85 B5 */
    c->pc = 0x91AFu;
    ea = 0xB5u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91AFu: /* LDA ZP A5 B6 */
    c->pc = 0x91B1u;
    ea = 0xB6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91B1u: /* SBC ABS ED 41 06 */
    c->pc = 0x91B4u;
    ea = 0x0641u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x91B4u: /* STA ZP 85 B6 */
    c->pc = 0x91B6u;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91B6u: /* BEQ REL F0 1A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x91B8u ^ 0x91D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91B8u; } return 1;
case 0x91B8u: /* LDY ABS AC 41 06 */
    c->pc = 0x91BBu;
    ea = 0x0641u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0x91BBu: /* BPL REL 10 0C */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x91BDu ^ 0x91C9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91C9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91BDu; } return 1;
case 0x91BDu: /* CMP IMM C9 10 */
    c->pc = 0x91BFu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x91BFu: /* BCS REL B0 11 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x91C1u ^ 0x91D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91C1u; } return 1;
case 0x91C1u: /* CLC IMP 18 */
    c->pc = 0x91C2u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91C2u: /* ADC IMM 69 10 */
    c->pc = 0x91C4u;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x91C4u: /* STA ZP 85 B6 */
    c->pc = 0x91C6u;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91C6u: /* JMP ABS 4C D2 91 */
    c->pc = 0x91D2u; c->cpu_cycles += 3u; return 1;
case 0x91C9u: /* CMP IMM C9 11 */
    c->pc = 0x91CBu;
    v = 0x11u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x91CBu: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x91CDu ^ 0x91D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x91CDu; } return 1;
case 0x91CDu: /* SEC IMP 38 */
    c->pc = 0x91CEu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91CEu: /* SBC IMM E9 10 */
    c->pc = 0x91D0u;
    v = 0x10u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x91D0u: /* STA ZP 85 B6 */
    c->pc = 0x91D2u;
    ea = 0xB6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91D2u: /* LDA ABS AD 21 04 */
    c->pc = 0x91D5u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x91D5u: /* AND IMM 29 40 */
    c->pc = 0x91D7u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x91D7u: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x91D9u ^ 0x91EFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x91EFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x91D9u; } return 1;
case 0x91D9u: /* CLC IMP 18 */
    c->pc = 0x91DAu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91DAu: /* LDA ZP A5 B7 */
    c->pc = 0x91DCu;
    ea = 0xB7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91DCu: /* ADC ABS 6D 21 06 */
    c->pc = 0x91DFu;
    ea = 0x0621u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x91DFu: /* STA ZP 85 B7 */
    c->pc = 0x91E1u;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91E1u: /* LDA ZP A5 B8 */
    c->pc = 0x91E3u;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91E3u: /* ADC ABS 6D 01 06 */
    c->pc = 0x91E6u;
    ea = 0x0601u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x91E6u: /* STA ZP 85 B8 */
    c->pc = 0x91E8u;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91E8u: /* LDA ZP A5 B9 */
    c->pc = 0x91EAu;
    ea = 0xB9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91EAu: /* ADC IMM 69 00 */
    c->pc = 0x91ECu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x91ECu: /* STA ZP 85 B9 */
    c->pc = 0x91EEu;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91EEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x91EFu: /* SEC IMP 38 */
    c->pc = 0x91F0u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x91F0u: /* LDA ZP A5 B7 */
    c->pc = 0x91F2u;
    ea = 0xB7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F2u: /* SBC ABS ED 21 06 */
    c->pc = 0x91F5u;
    ea = 0x0621u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x91F5u: /* STA ZP 85 B7 */
    c->pc = 0x91F7u;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F7u: /* LDA ZP A5 B8 */
    c->pc = 0x91F9u;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91F9u: /* SBC ABS ED 01 06 */
    c->pc = 0x91FCu;
    ea = 0x0601u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x91FCu: /* STA ZP 85 B8 */
    c->pc = 0x91FEu;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x91FEu: /* LDA ZP A5 B9 */
    c->pc = 0x9200u;
    ea = 0xB9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9200u: /* SBC IMM E9 00 */
    c->pc = 0x9202u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9202u: /* STA ZP 85 B9 */
    c->pc = 0x9204u;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9204u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9213u: /* DEX IMP CA */
    c->pc = 0x9214u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9214u: /* LDA ABX BD 95 93 */
    c->pc = 0x9217u;
    ea = (uint16_t)(0x9395u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9395u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9217u: /* STA ZP 85 08 */
    c->pc = 0x9219u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9219u: /* LDA ABX BD 98 93 */
    c->pc = 0x921Cu;
    ea = (uint16_t)(0x9398u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9398u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x921Cu: /* STA ZP 85 09 */
    c->pc = 0x921Eu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x921Eu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x9221u: /* LDA ZP A5 B2 */
    c->pc = 0x9223u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9223u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9225u ^ 0x922Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x922Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9225u; } return 1;
case 0x9225u: /* INC ZP E6 B2 */
    c->pc = 0x9227u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9227u: /* LDA IMM A9 0B */
    c->pc = 0x9229u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9229u: /* JSR ABS 20 51 C0 */
    push(c, 0x92u); push(c, 0x2Bu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x922Cu: /* JSR ABS 20 18 A1 */
    push(c, 0x92u); push(c, 0x2Eu); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x922Fu: /* LDA ABS AD C1 06 */
    c->pc = 0x9232u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9232u: /* CMP IMM C9 1C */
    c->pc = 0x9234u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9234u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9236u ^ 0x9241u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9241u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9236u; } return 1;
case 0x9236u: /* LDA IMM A9 6F */
    c->pc = 0x9238u;
    v = 0x6Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9238u: /* STA ABS 8D E1 04 */
    c->pc = 0x923Bu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x923Bu: /* INC ZP E6 B1 */
    c->pc = 0x923Du;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x923Du: /* LDA IMM A9 00 */
    c->pc = 0x923Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x923Fu: /* STA ZP 85 B2 */
    c->pc = 0x9241u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9241u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9242u: /* JMP ABS 4C DC 92 */
    c->pc = 0x92DCu; c->cpu_cycles += 3u; return 1;
case 0x9245u: /* DEC ABS CE E1 04 */
    c->pc = 0x9248u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9248u: /* BNE REL D0 F8 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x924Au ^ 0x9242u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9242u; }
    else { c->cpu_cycles += 2u; c->pc = 0x924Au; } return 1;
case 0x924Au: /* LDA IMM A9 1F */
    c->pc = 0x924Cu;
    v = 0x1Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x924Cu: /* STA ABS 8D E1 04 */
    c->pc = 0x924Fu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x924Fu: /* LDA IMM A9 6A */
    c->pc = 0x9251u;
    v = 0x6Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9251u: /* JSR ABS 20 2D A2 */
    push(c, 0x92u); push(c, 0x53u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x9254u: /* BCC REL 90 EC */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9256u ^ 0x9242u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9242u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9256u; } return 1;
case 0x9256u: /* LDX ZP A6 B2 */
    c->pc = 0x9258u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9258u: /* LDY ABX BC DD 92 */
    c->pc = 0x925Bu;
    ea = (uint16_t)(0x92DDu + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x92DDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x925Bu: /* LDX IMM A2 00 */
    c->pc = 0x925Du;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x925Du: /* LDA ABY B9 3F 93 */
    c->pc = 0x9260u;
    ea = (uint16_t)(0x933Fu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x933Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9260u: /* STA ZPX 95 08 */
    c->pc = 0x9262u;
    ea = (uint8_t)(0x08u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9262u: /* INY IMP C8 */
    c->pc = 0x9263u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9263u: /* INX IMP E8 */
    c->pc = 0x9264u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9264u: /* CPX IMM E0 08 */
    c->pc = 0x9266u;
    v = 0x08u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9266u: /* BNE REL D0 F5 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9268u ^ 0x925Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x925Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9268u; } return 1;
case 0x9268u: /* LDA ZP A5 B2 */
    c->pc = 0x926Au;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x926Au: /* ASL IMP 0A */
    c->pc = 0x926Bu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x926Bu: /* STA ZP 85 01 */
    c->pc = 0x926Du;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x926Du: /* LDX IMM A2 00 */
    c->pc = 0x926Fu;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x926Fu: /* STX ZP 86 02 */
    c->pc = 0x9271u;
    ea = 0x02u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9271u: /* LDA IMM A9 6A */
    c->pc = 0x9273u;
    v = 0x6Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9273u: /* LDX IMM A2 01 */
    c->pc = 0x9275u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9275u: /* JSR ABS 20 52 A3 */
    push(c, 0x92u); push(c, 0x77u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x9278u: /* LDX ZP A6 01 */
    c->pc = 0x927Au;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x927Au: /* LDA ABX BD EB 92 */
    c->pc = 0x927Du;
    ea = (uint16_t)(0x92EBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x92EBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x927Du: /* STA ABY 99 B0 04 */
    c->pc = 0x9280u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9280u: /* LDA ABX BD 07 93 */
    c->pc = 0x9283u;
    ea = (uint16_t)(0x9307u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9307u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9283u: /* STA ABY 99 70 04 */
    c->pc = 0x9286u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9286u: /* LDA ABX BD 23 93 */
    c->pc = 0x9289u;
    ea = (uint16_t)(0x9323u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9323u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9289u: /* STA ABY 99 F0 04 */
    c->pc = 0x928Cu;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x928Cu: /* LDX ZP A6 02 */
    c->pc = 0x928Eu;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x928Eu: /* LDA ZPX B5 08 */
    c->pc = 0x9290u;
    ea = (uint8_t)(0x08u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9290u: /* STA ABY 99 50 06 */
    c->pc = 0x9293u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9293u: /* LDA ZPX B5 0A */
    c->pc = 0x9295u;
    ea = (uint8_t)(0x0Au + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9295u: /* STA ABY 99 10 06 */
    c->pc = 0x9298u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9298u: /* LDA ZPX B5 0C */
    c->pc = 0x929Au;
    ea = (uint8_t)(0x0Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x929Au: /* STA ABY 99 30 04 */
    c->pc = 0x929Du;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x929Du: /* LDA ZPX B5 0E */
    c->pc = 0x929Fu;
    ea = (uint8_t)(0x0Eu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x929Fu: /* STA ABY 99 20 01 */
    c->pc = 0x92A2u;
    ea = (uint16_t)(0x0120u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x92A2u: /* INC ZP E6 01 */
    c->pc = 0x92A4u;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92A4u: /* INX IMP E8 */
    c->pc = 0x92A5u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x92A5u: /* CPX IMM E0 02 */
    c->pc = 0x92A7u;
    v = 0x02u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x92A7u: /* BNE REL D0 C6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92A9u ^ 0x926Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x926Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x92A9u; } return 1;
case 0x92A9u: /* LDA ZP A5 B2 */
    c->pc = 0x92ABu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92ABu: /* ASL IMP 0A */
    c->pc = 0x92ACu;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92ACu: /* STA ZP 85 0C */
    c->pc = 0x92AEu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92AEu: /* LDX ZP A6 0C */
    c->pc = 0x92B0u;
    ea = 0x0Cu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x92B0u: /* LDA ABS AD 40 04 */
    c->pc = 0x92B3u;
    ea = 0x0440u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x92B3u: /* STA ZP 85 09 */
    c->pc = 0x92B5u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92B5u: /* LDA ABX BD 07 93 */
    c->pc = 0x92B8u;
    ea = (uint16_t)(0x9307u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9307u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92B8u: /* AND IMM 29 F0 */
    c->pc = 0x92BAu;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92BAu: /* STA ZP 85 08 */
    c->pc = 0x92BCu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92BCu: /* LDA ABX BD EB 92 */
    c->pc = 0x92BFu;
    ea = (uint16_t)(0x92EBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x92EBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x92BFu: /* STA ZP 85 0A */
    c->pc = 0x92C1u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92C1u: /* JSR ABS 20 EF C8 */
    push(c, 0x92u); push(c, 0xC3u); c->pc = 0xC8EFu; c->cpu_cycles += 6u; return 1;
case 0x92C4u: /* LDA ZP A5 51 */
    c->pc = 0x92C6u;
    ea = 0x51u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92C6u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92C8u ^ 0x92CEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92CEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x92C8u; } return 1;
case 0x92C8u: /* INC ZP E6 51 */
    c->pc = 0x92CAu;
    ea = 0x51u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92CAu: /* INC ZP E6 0C */
    c->pc = 0x92CCu;
    ea = 0x0Cu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92CCu: /* BNE REL D0 E0 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92CEu ^ 0x92AEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92AEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x92CEu; } return 1;
case 0x92CEu: /* LDA IMM A9 82 */
    c->pc = 0x92D0u;
    v = 0x82u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x92D0u: /* STA ZP 85 51 */
    c->pc = 0x92D2u;
    ea = 0x51u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D2u: /* INC ZP E6 B2 */
    c->pc = 0x92D4u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92D4u: /* LDA ZP A5 B2 */
    c->pc = 0x92D6u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x92D6u: /* CMP IMM C9 0E */
    c->pc = 0x92D8u;
    v = 0x0Eu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x92D8u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x92DAu ^ 0x92DCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x92DCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x92DAu; } return 1;
case 0x92DAu: /* INC ZP E6 B1 */
    c->pc = 0x92DCu;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x92DCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9357u: /* LDA ABS AD C1 06 */
    c->pc = 0x935Au;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x935Au: /* BNE REL D0 0C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x935Cu ^ 0x9368u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9368u; }
    else { c->cpu_cycles += 2u; c->pc = 0x935Cu; } return 1;
case 0x935Cu: /* LDA IMM A9 BB */
    c->pc = 0x935Eu;
    v = 0xBBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x935Eu: /* STA ZP 85 B2 */
    c->pc = 0x9360u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9360u: /* INC ABS EE AA 05 */
    c->pc = 0x9363u;
    ea = 0x05AAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9363u: /* LDA IMM A9 FF */
    c->pc = 0x9365u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9365u: /* JSR ABS 20 51 C0 */
    push(c, 0x93u); push(c, 0x67u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9368u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9369u: /* LDA ZP A5 B2 */
    c->pc = 0x936Bu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x936Bu: /* BEQ REL F0 0D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x936Du ^ 0x937Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x937Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x936Du; } return 1;
case 0x936Du: /* DEC ZP C6 B2 */
    c->pc = 0x936Fu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x936Fu: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9371u ^ 0x9375u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9375u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9371u; } return 1;
case 0x9371u: /* JSR ABS 20 82 93 */
    push(c, 0x93u); push(c, 0x73u); c->pc = 0x9382u; c->cpu_cycles += 6u; return 1;
case 0x9374u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9375u: /* LDA IMM A9 80 */
    c->pc = 0x9377u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9377u: /* STA ABS 8D A7 05 */
    c->pc = 0x937Au;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x937Au: /* LDA IMM A9 0F */
    c->pc = 0x937Cu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x937Cu: /* STA ABS 8D 66 03 */
    c->pc = 0x937Fu;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x937Fu: /* JMP ABS 4C 8B A0 */
    c->pc = 0xA08Bu; c->cpu_cycles += 3u; return 1;
case 0x9382u: /* LDX IMM A2 0F */
    c->pc = 0x9384u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9384u: /* LDA ZP A5 1C */
    c->pc = 0x9386u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9386u: /* AND IMM 29 07 */
    c->pc = 0x9388u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9388u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x938Au ^ 0x9391u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9391u; }
    else { c->cpu_cycles += 2u; c->pc = 0x938Au; } return 1;
case 0x938Au: /* LDA IMM A9 2B */
    c->pc = 0x938Cu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x938Cu: /* JSR ABS 20 51 C0 */
    push(c, 0x93u); push(c, 0x8Eu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x938Fu: /* LDX IMM A2 30 */
    c->pc = 0x9391u;
    v = 0x30u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9391u: /* STX ABS 8E 66 03 */
    c->pc = 0x9394u;
    ea = 0x0366u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9394u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x939Bu: /* DEX IMP CA */
    c->pc = 0x939Cu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x939Cu: /* LDA ABX BD 62 96 */
    c->pc = 0x939Fu;
    ea = (uint16_t)(0x9662u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9662u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x939Fu: /* STA ZP 85 08 */
    c->pc = 0x93A1u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93A1u: /* LDA ABX BD 68 96 */
    c->pc = 0x93A4u;
    ea = (uint16_t)(0x9668u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9668u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x93A4u: /* STA ZP 85 09 */
    c->pc = 0x93A6u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93A6u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x93A9u: /* JSR ABS 20 18 A1 */
    push(c, 0x93u); push(c, 0xABu); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x93ACu: /* LDA ABS AD E1 04 */
    c->pc = 0x93AFu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93AFu: /* BNE REL D0 25 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x93B1u ^ 0x93D6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93D6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93B1u; } return 1;
case 0x93B1u: /* LDA IMM A9 02 */
    c->pc = 0x93B3u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93B3u: /* STA ABS 8D 54 03 */
    c->pc = 0x93B6u;
    ea = 0x0354u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93B6u: /* LDA IMM A9 04 */
    c->pc = 0x93B8u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93B8u: /* STA ABS 8D 55 03 */
    c->pc = 0x93BBu;
    ea = 0x0355u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93BBu: /* LDA IMM A9 B2 */
    c->pc = 0x93BDu;
    v = 0xB2u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93BDu: /* STA ABS 8D A7 05 */
    c->pc = 0x93C0u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93C0u: /* LDA IMM A9 00 */
    c->pc = 0x93C2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93C2u: /* STA ABS 8D A9 05 */
    c->pc = 0x93C5u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93C5u: /* LDA IMM A9 10 */
    c->pc = 0x93C7u;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93C7u: /* STA ABS 8D B6 03 */
    c->pc = 0x93CAu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93CAu: /* LDA IMM A9 E0 */
    c->pc = 0x93CCu;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93CCu: /* STA ABS 8D B7 03 */
    c->pc = 0x93CFu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93CFu: /* LDA IMM A9 69 */
    c->pc = 0x93D1u;
    v = 0x69u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93D1u: /* STA ZP 85 B2 */
    c->pc = 0x93D3u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x93D3u: /* INC ABS EE E1 04 */
    c->pc = 0x93D6u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x93D6u: /* LDA ABS AD E1 04 */
    c->pc = 0x93D9u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93D9u: /* CMP IMM C9 01 */
    c->pc = 0x93DBu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x93DBu: /* BNE REL D0 13 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x93DDu ^ 0x93F0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93F0u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93DDu; } return 1;
case 0x93DDu: /* LDA IMM A9 0B */
    c->pc = 0x93DFu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93DFu: /* JSR ABS 20 F1 C5 */
    push(c, 0x93u); push(c, 0xE1u); c->pc = 0xC5F1u; c->cpu_cycles += 6u; return 1;
case 0x93E2u: /* DEC ZP C6 B2 */
    c->pc = 0x93E4u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x93E4u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x93E6u ^ 0x93E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x93E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93E6u; } return 1;
case 0x93E6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x93E7u: /* INC ABS EE E1 04 */
    c->pc = 0x93EAu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x93EAu: /* LDA IMM A9 10 */
    c->pc = 0x93ECu;
    v = 0x10u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x93ECu: /* STA ABS 8D A7 05 */
    c->pc = 0x93EFu;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x93EFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x93F0u: /* CMP IMM C9 02 */
    c->pc = 0x93F2u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x93F2u: /* BNE REL D0 3C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x93F4u ^ 0x9430u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9430u; }
    else { c->cpu_cycles += 2u; c->pc = 0x93F4u; } return 1;
case 0x93F4u: /* LDX ZP A6 B2 */
    c->pc = 0x93F6u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x93F6u: /* CPX IMM E0 0B */
    c->pc = 0x93F8u;
    v = 0x0Bu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x93F8u: /* BEQ REL F0 25 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x93FAu ^ 0x941Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x941Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x93FAu; } return 1;
case 0x93FAu: /* LDA ABX BD C0 A9 */
    c->pc = 0x93FDu;
    ea = (uint16_t)(0xA9C0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x93FDu: /* STA ABS 8D B6 03 */
    c->pc = 0x9400u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9400u: /* LDA ABX BD CB A9 */
    c->pc = 0x9403u;
    ea = (uint16_t)(0xA9CBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9CBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9403u: /* STA ABS 8D B7 03 */
    c->pc = 0x9406u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9406u: /* LDA ABX BD D6 A9 */
    c->pc = 0x9409u;
    ea = (uint16_t)(0xA9D6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9D6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9409u: /* STA ZP 85 47 */
    c->pc = 0x940Bu;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x940Bu: /* LDY IMM A0 00 */
    c->pc = 0x940Du;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x940Du: /* LDA ABS AD A7 05 */
    c->pc = 0x9410u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9410u: /* STA ABY 99 B8 03 */
    c->pc = 0x9413u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9413u: /* INC ABS EE A7 05 */
    c->pc = 0x9416u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9416u: /* INY IMP C8 */
    c->pc = 0x9417u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9417u: /* CPY ZP C4 47 */
    c->pc = 0x9419u;
    ea = 0x47u;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x9419u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x941Bu ^ 0x940Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x940Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x941Bu; } return 1;
case 0x941Bu: /* INX IMP E8 */
    c->pc = 0x941Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x941Cu: /* STX ZP 86 B2 */
    c->pc = 0x941Eu;
    ea = 0xB2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x941Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x941Fu: /* LDA IMM A9 21 */
    c->pc = 0x9421u;
    v = 0x21u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9421u: /* STA ABS 8D B6 03 */
    c->pc = 0x9424u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9424u: /* LDA IMM A9 E0 */
    c->pc = 0x9426u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9426u: /* STA ABS 8D B7 03 */
    c->pc = 0x9429u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9429u: /* LDA IMM A9 00 */
    c->pc = 0x942Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x942Bu: /* STA ZP 85 B2 */
    c->pc = 0x942Du;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x942Du: /* INC ABS EE E1 04 */
    c->pc = 0x9430u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9430u: /* LDA ABS AD E1 04 */
    c->pc = 0x9433u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9433u: /* CMP IMM C9 03 */
    c->pc = 0x9435u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9435u: /* BNE REL D0 3B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9437u ^ 0x9472u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9472u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9437u; } return 1;
case 0x9437u: /* CLC IMP 18 */
    c->pc = 0x9438u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9438u: /* LDA IMM A9 20 */
    c->pc = 0x943Au;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x943Au: /* STA ZP 85 47 */
    c->pc = 0x943Cu;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x943Cu: /* ADC ABS 6D B7 03 */
    c->pc = 0x943Fu;
    ea = 0x03B7u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0x943Fu: /* STA ABS 8D B7 03 */
    c->pc = 0x9442u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9442u: /* LDA ABS AD B6 03 */
    c->pc = 0x9445u;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9445u: /* ADC IMM 69 00 */
    c->pc = 0x9447u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9447u: /* STA ABS 8D B6 03 */
    c->pc = 0x944Au;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x944Au: /* LDX ZP A6 B2 */
    c->pc = 0x944Cu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x944Cu: /* CPX IMM E0 B0 */
    c->pc = 0x944Eu;
    v = 0xB0u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x944Eu: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9450u ^ 0x9461u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9461u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9450u; } return 1;
case 0x9450u: /* LDY IMM A0 00 */
    c->pc = 0x9452u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9452u: /* LDA ABX BD E1 A9 */
    c->pc = 0x9455u;
    ea = (uint16_t)(0xA9E1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9E1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9455u: /* STA ABY 99 B8 03 */
    c->pc = 0x9458u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9458u: /* INX IMP E8 */
    c->pc = 0x9459u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9459u: /* INY IMP C8 */
    c->pc = 0x945Au;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x945Au: /* CPY IMM C0 16 */
    c->pc = 0x945Cu;
    v = 0x16u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x945Cu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x945Eu ^ 0x9452u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9452u; }
    else { c->cpu_cycles += 2u; c->pc = 0x945Eu; } return 1;
case 0x945Eu: /* STX ZP 86 B2 */
    c->pc = 0x9460u;
    ea = 0xB2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9460u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9461u: /* LDA IMM A9 23 */
    c->pc = 0x9463u;
    v = 0x23u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9463u: /* STA ABS 8D B6 03 */
    c->pc = 0x9466u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9466u: /* LDA IMM A9 C0 */
    c->pc = 0x9468u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9468u: /* STA ABS 8D B7 03 */
    c->pc = 0x946Bu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x946Bu: /* LDA IMM A9 00 */
    c->pc = 0x946Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x946Du: /* STA ZP 85 B2 */
    c->pc = 0x946Fu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x946Fu: /* INC ABS EE E1 04 */
    c->pc = 0x9472u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9472u: /* CLC IMP 18 */
    c->pc = 0x9473u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9473u: /* LDA ABS AD B7 03 */
    c->pc = 0x9476u;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9476u: /* ADC IMM 69 08 */
    c->pc = 0x9478u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9478u: /* STA ABS 8D B7 03 */
    c->pc = 0x947Bu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x947Bu: /* LDA ABS AD B6 03 */
    c->pc = 0x947Eu;
    ea = 0x03B6u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x947Eu: /* ADC IMM 69 00 */
    c->pc = 0x9480u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9480u: /* STA ABS 8D B6 03 */
    c->pc = 0x9483u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9483u: /* LDA IMM A9 06 */
    c->pc = 0x9485u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9485u: /* STA ZP 85 47 */
    c->pc = 0x9487u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9487u: /* LDX ZP A6 B2 */
    c->pc = 0x9489u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9489u: /* CPX IMM E0 1E */
    c->pc = 0x948Bu;
    v = 0x1Eu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x948Bu: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x948Du ^ 0x949Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x949Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x948Du; } return 1;
case 0x948Du: /* LDY IMM A0 00 */
    c->pc = 0x948Fu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x948Fu: /* LDA ABX BD 91 AA */
    c->pc = 0x9492u;
    ea = (uint16_t)(0xAA91u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xAA91u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9492u: /* STA ABY 99 B8 03 */
    c->pc = 0x9495u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9495u: /* INX IMP E8 */
    c->pc = 0x9496u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9496u: /* INY IMP C8 */
    c->pc = 0x9497u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9497u: /* CPY IMM C0 06 */
    c->pc = 0x9499u;
    v = 0x06u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x9499u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x949Bu ^ 0x948Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x948Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x949Bu; } return 1;
case 0x949Bu: /* STX ZP 86 B2 */
    c->pc = 0x949Du;
    ea = 0xB2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x949Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x949Eu: /* LDA IMM A9 00 */
    c->pc = 0x94A0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94A0u: /* STA ZP 85 47 */
    c->pc = 0x94A2u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94A2u: /* STA ABS 8D E1 04 */
    c->pc = 0x94A5u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94A5u: /* LDA IMM A9 8B */
    c->pc = 0x94A7u;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94A7u: /* STA ABS 8D A7 05 */
    c->pc = 0x94AAu;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94AAu: /* INC ZP E6 B1 */
    c->pc = 0x94ACu;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x94ACu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x94ADu: /* LDA ABS AD 21 04 */
    c->pc = 0x94B0u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94B0u: /* BMI REL 30 05 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0x94B2u ^ 0x94B7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x94B7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94B2u; } return 1;
case 0x94B2u: /* LDA IMM A9 FF */
    c->pc = 0x94B4u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94B4u: /* STA ABS 8D 61 04 */
    c->pc = 0x94B7u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94B7u: /* LDX ABS AE E1 04 */
    c->pc = 0x94BAu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x94BAu: /* LDA ZP A5 B8 */
    c->pc = 0x94BCu;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94BCu: /* CMP ABX DD 0D 95 */
    c->pc = 0x94BFu;
    ea = (uint16_t)(0x950Du + c->x);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x950Du ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x94BFu: /* BNE REL D0 48 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x94C1u ^ 0x9509u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9509u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94C1u; } return 1;
case 0x94C1u: /* CPX IMM E0 01 */
    c->pc = 0x94C3u;
    v = 0x01u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x94C3u: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x94C5u ^ 0x94D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x94D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0x94C5u; } return 1;
case 0x94C5u: /* LDA IMM A9 8B */
    c->pc = 0x94C7u;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94C7u: /* STA ABS 8D 21 04 */
    c->pc = 0x94CAu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94CAu: /* LDA ZP A5 B7 */
    c->pc = 0x94CCu;
    ea = 0xB7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94CCu: /* STA ABS 8D 81 04 */
    c->pc = 0x94CFu;
    ea = 0x0481u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94CFu: /* JMP ABS 4C F8 94 */
    c->pc = 0x94F8u; c->cpu_cycles += 3u; return 1;
case 0x94D2u: /* LDA ABX BD 15 95 */
    c->pc = 0x94D5u;
    ea = (uint16_t)(0x9515u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9515u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x94D5u: /* STA ZP 85 01 */
    c->pc = 0x94D7u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94D7u: /* LDA ABX BD 19 95 */
    c->pc = 0x94DAu;
    ea = (uint16_t)(0x9519u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9519u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x94DAu: /* STA ZP 85 02 */
    c->pc = 0x94DCu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94DCu: /* LDA ABX BD 11 95 */
    c->pc = 0x94DFu;
    ea = (uint16_t)(0x9511u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9511u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x94DFu: /* LDX IMM A2 01 */
    c->pc = 0x94E1u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x94E1u: /* JSR ABS 20 52 A3 */
    push(c, 0x94u); push(c, 0xE3u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x94E4u: /* LDA ZP A5 01 */
    c->pc = 0x94E6u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94E6u: /* STA ABY 99 B0 04 */
    c->pc = 0x94E9u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94E9u: /* LDA IMM A9 FF */
    c->pc = 0x94EBu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x94EBu: /* STA ABY 99 70 04 */
    c->pc = 0x94EEu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94EEu: /* LDA ZP A5 B7 */
    c->pc = 0x94F0u;
    ea = 0xB7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94F0u: /* STA ABY 99 90 04 */
    c->pc = 0x94F3u;
    ea = (uint16_t)(0x0490u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94F3u: /* LDA ZP A5 02 */
    c->pc = 0x94F5u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x94F5u: /* STA ABY 99 F0 06 */
    c->pc = 0x94F8u;
    ea = (uint16_t)(0x06F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x94F8u: /* INC ABS EE E1 04 */
    c->pc = 0x94FBu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x94FBu: /* LDA ABS AD E1 04 */
    c->pc = 0x94FEu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x94FEu: /* CMP IMM C9 04 */
    c->pc = 0x9500u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9500u: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9502u ^ 0x9509u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9509u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9502u; } return 1;
case 0x9502u: /* LDA IMM A9 3F */
    c->pc = 0x9504u;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9504u: /* STA ABS 8D E1 04 */
    c->pc = 0x9507u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9507u: /* INC ZP E6 B1 */
    c->pc = 0x9509u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9509u: /* JSR ABS 20 A4 91 */
    push(c, 0x95u); push(c, 0x0Bu); c->pc = 0x91A4u; c->cpu_cycles += 6u; return 1;
case 0x950Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x951Du: /* LDA ZP A5 B8 */
    c->pc = 0x951Fu;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x951Fu: /* CMP IMM C9 30 */
    c->pc = 0x9521u;
    v = 0x30u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9521u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9523u ^ 0x9529u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9529u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9523u; } return 1;
case 0x9523u: /* LDA IMM A9 7D */
    c->pc = 0x9525u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9525u: /* STA ZP 85 B2 */
    c->pc = 0x9527u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9527u: /* INC ZP E6 B1 */
    c->pc = 0x9529u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9529u: /* LDA IMM A9 8B */
    c->pc = 0x952Bu;
    v = 0x8Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x952Bu: /* STA ABS 8D A7 05 */
    c->pc = 0x952Eu;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x952Eu: /* LDA IMM A9 60 */
    c->pc = 0x9530u;
    v = 0x60u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9530u: /* STA ABS 8D 21 06 */
    c->pc = 0x9533u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9533u: /* JSR ABS 20 63 95 */
    push(c, 0x95u); push(c, 0x35u); c->pc = 0x9563u; c->cpu_cycles += 6u; return 1;
case 0x9536u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9537u: /* LDA ZP A5 B8 */
    c->pc = 0x9539u;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9539u: /* CMP IMM C9 80 */
    c->pc = 0x953Bu;
    v = 0x80u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x953Bu: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x953Du ^ 0x9543u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9543u; }
    else { c->cpu_cycles += 2u; c->pc = 0x953Du; } return 1;
case 0x953Du: /* LDA IMM A9 7D */
    c->pc = 0x953Fu;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x953Fu: /* STA ZP 85 B2 */
    c->pc = 0x9541u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9541u: /* INC ZP E6 B1 */
    c->pc = 0x9543u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9543u: /* LDA IMM A9 CB */
    c->pc = 0x9545u;
    v = 0xCBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9545u: /* BNE REL D0 E4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9547u ^ 0x952Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x952Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9547u; } return 1;
case 0x9547u: /* LDA IMM A9 05 */
    c->pc = 0x9549u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9549u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x954Bu ^ 0x954Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x954Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x954Bu; } return 1;
case 0x954Bu: /* LDA IMM A9 03 */
    c->pc = 0x954Du;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x954Du: /* STA ZP 85 00 */
    c->pc = 0x954Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x954Fu: /* DEC ZP C6 B2 */
    c->pc = 0x9551u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9551u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9553u ^ 0x9557u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9557u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9553u; } return 1;
case 0x9553u: /* LDA ZP A5 00 */
    c->pc = 0x9555u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9555u: /* STA ZP 85 B1 */
    c->pc = 0x9557u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9557u: /* LDA IMM A9 00 */
    c->pc = 0x9559u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9559u: /* STA ABS 8D 01 06 */
    c->pc = 0x955Cu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x955Cu: /* STA ABS 8D 21 06 */
    c->pc = 0x955Fu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x955Fu: /* JSR ABS 20 63 95 */
    push(c, 0x95u); push(c, 0x61u); c->pc = 0x9563u; c->cpu_cycles += 6u; return 1;
case 0x9562u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9563u: /* DEC ABS CE E1 04 */
    c->pc = 0x9566u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9566u: /* BEQ REL F0 03 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9568u ^ 0x956Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x956Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9568u; } return 1;
case 0x9568u: /* JMP ABS 4C 13 96 */
    c->pc = 0x9613u; c->cpu_cycles += 3u; return 1;
case 0x956Bu: /* LDA IMM A9 3F */
    c->pc = 0x956Du;
    v = 0x3Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x956Du: /* STA ABS 8D E1 04 */
    c->pc = 0x9570u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9570u: /* JSR ABS 20 09 A2 */
    push(c, 0x95u); push(c, 0x72u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x9573u: /* LDA ZP A5 00 */
    c->pc = 0x9575u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9575u: /* CMP IMM C9 38 */
    c->pc = 0x9577u;
    v = 0x38u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9577u: /* BCC REL 90 4D */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9579u ^ 0x95C6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95C6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9579u; } return 1;
case 0x9579u: /* LDA IMM A9 69 */
    c->pc = 0x957Bu;
    v = 0x69u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x957Bu: /* JSR ABS 20 2D A2 */
    push(c, 0x95u); push(c, 0x7Du); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x957Eu: /* LDA IMM A9 01 */
    c->pc = 0x9580u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9580u: /* STA ABY 99 F0 04 */
    c->pc = 0x9583u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9583u: /* LDA IMM A9 02 */
    c->pc = 0x9585u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9585u: /* STA ZP 85 02 */
    c->pc = 0x9587u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9587u: /* LDA IMM A9 34 */
    c->pc = 0x9589u;
    v = 0x34u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9589u: /* STA ZP 85 00 */
    c->pc = 0x958Bu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x958Bu: /* LDY IMM A0 0F */
    c->pc = 0x958Du;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x958Du: /* JSR ABS 20 31 A2 */
    push(c, 0x95u); push(c, 0x8Fu); c->pc = 0xA231u; c->cpu_cycles += 6u; return 1;
case 0x9590u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9592u ^ 0x9599u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9599u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9592u; } return 1;
case 0x9592u: /* DEC ZP C6 02 */
    c->pc = 0x9594u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9594u: /* BEQ REL F0 7D */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9596u ^ 0x9613u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9613u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9596u; } return 1;
case 0x9596u: /* DEY IMP 88 */
    c->pc = 0x9597u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9597u: /* BPL REL 10 F4 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9599u ^ 0x958Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x958Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9599u; } return 1;
case 0x9599u: /* LDA IMM A9 34 */
    c->pc = 0x959Bu;
    v = 0x34u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x959Bu: /* LDX IMM A2 01 */
    c->pc = 0x959Du;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x959Du: /* JSR ABS 20 52 A3 */
    push(c, 0x95u); push(c, 0x9Fu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x95A0u: /* BCS REL B0 71 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x95A2u ^ 0x9613u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9613u; }
    else { c->cpu_cycles += 2u; c->pc = 0x95A2u; } return 1;
case 0x95A2u: /* LDA IMM A9 87 */
    c->pc = 0x95A4u;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95A4u: /* STA ABY 99 30 04 */
    c->pc = 0x95A7u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95A7u: /* CLC IMP 18 */
    c->pc = 0x95A8u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x95A8u: /* LDA ABY B9 B0 04 */
    c->pc = 0x95ABu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95ABu: /* ADC IMM 69 30 */
    c->pc = 0x95ADu;
    v = 0x30u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x95ADu: /* STA ABY 99 B0 04 */
    c->pc = 0x95B0u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95B0u: /* LDA IMM A9 C4 */
    c->pc = 0x95B2u;
    v = 0xC4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95B2u: /* STA ABY 99 30 06 */
    c->pc = 0x95B5u;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95B5u: /* LDA IMM A9 01 */
    c->pc = 0x95B7u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95B7u: /* STA ABY 99 10 06 */
    c->pc = 0x95BAu;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95BAu: /* LDA IMM A9 02 */
    c->pc = 0x95BCu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95BCu: /* STA ABY 99 50 06 */
    c->pc = 0x95BFu;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95BFu: /* LDA IMM A9 D4 */
    c->pc = 0x95C1u;
    v = 0xD4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95C1u: /* STA ABY 99 70 06 */
    c->pc = 0x95C4u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95C4u: /* BNE REL D0 4D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x95C6u ^ 0x9613u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9613u; }
    else { c->cpu_cycles += 2u; c->pc = 0x95C6u; } return 1;
case 0x95C6u: /* SEC IMP 38 */
    c->pc = 0x95C7u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x95C7u: /* LDA ZP A5 00 */
    c->pc = 0x95C9u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x95C9u: /* SBC IMM E9 10 */
    c->pc = 0x95CBu;
    v = 0x10u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x95CBu: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x95CDu ^ 0x95CFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x95CFu; }
    else { c->cpu_cycles += 2u; c->pc = 0x95CDu; } return 1;
case 0x95CDu: /* LDA IMM A9 00 */
    c->pc = 0x95CFu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95CFu: /* STA ZP 85 08 */
    c->pc = 0x95D1u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x95D1u: /* LDA IMM A9 00 */
    c->pc = 0x95D3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95D3u: /* ASL ZP 06 08 */
    c->pc = 0x95D5u;
    ea = 0x08u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x95D5u: /* ROL IMP 2A */
    c->pc = 0x95D6u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95D6u: /* ASL ZP 06 08 */
    c->pc = 0x95D8u;
    ea = 0x08u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x95D8u: /* ROL IMP 2A */
    c->pc = 0x95D9u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95D9u: /* ASL ZP 06 08 */
    c->pc = 0x95DBu;
    ea = 0x08u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x95DBu: /* ROL IMP 2A */
    c->pc = 0x95DCu;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95DCu: /* STA ZP 85 09 */
    c->pc = 0x95DEu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x95DEu: /* LDA IMM A9 69 */
    c->pc = 0x95E0u;
    v = 0x69u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95E0u: /* JSR ABS 20 2D A2 */
    push(c, 0x95u); push(c, 0xE2u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x95E3u: /* LDA IMM A9 00 */
    c->pc = 0x95E5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95E5u: /* STA ABY 99 F0 04 */
    c->pc = 0x95E8u;
    ea = (uint16_t)(0x04F0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95E8u: /* LDA IMM A9 35 */
    c->pc = 0x95EAu;
    v = 0x35u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95EAu: /* LDX IMM A2 01 */
    c->pc = 0x95ECu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x95ECu: /* JSR ABS 20 52 A3 */
    push(c, 0x95u); push(c, 0xEEu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x95EFu: /* BCS REL B0 22 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x95F1u ^ 0x9613u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9613u; }
    else { c->cpu_cycles += 2u; c->pc = 0x95F1u; } return 1;
case 0x95F1u: /* LDA IMM A9 85 */
    c->pc = 0x95F3u;
    v = 0x85u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x95F3u: /* STA ABY 99 30 04 */
    c->pc = 0x95F6u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95F6u: /* CLC IMP 18 */
    c->pc = 0x95F7u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x95F7u: /* LDA ABY B9 B0 04 */
    c->pc = 0x95FAu;
    ea = (uint16_t)(0x04B0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04B0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x95FAu: /* ADC IMM 69 10 */
    c->pc = 0x95FCu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x95FCu: /* STA ABY 99 B0 04 */
    c->pc = 0x95FFu;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x95FFu: /* LDA IMM A9 04 */
    c->pc = 0x9601u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9601u: /* STA ABY 99 50 06 */
    c->pc = 0x9604u;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9604u: /* LDA ZP A5 09 */
    c->pc = 0x9606u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9606u: /* STA ABY 99 10 06 */
    c->pc = 0x9609u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9609u: /* LDA ZP A5 08 */
    c->pc = 0x960Bu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x960Bu: /* STA ABY 99 30 06 */
    c->pc = 0x960Eu;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x960Eu: /* LDA IMM A9 01 */
    c->pc = 0x9610u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9610u: /* STA ABS 8D A1 06 */
    c->pc = 0x9613u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9613u: /* LDA ABS AD A1 06 */
    c->pc = 0x9616u;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9616u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9618u ^ 0x961Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x961Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9618u; } return 1;
case 0x9618u: /* STA ABS 8D 81 06 */
    c->pc = 0x961Bu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x961Bu: /* LDA IMM A9 0F */
    c->pc = 0x961Du;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x961Du: /* STA ABS 8D 66 03 */
    c->pc = 0x9620u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9620u: /* JSR ABS 20 9D A5 */
    push(c, 0x96u); push(c, 0x22u); c->pc = 0xA59Du; c->cpu_cycles += 6u; return 1;
case 0x9623u: /* BCC REL 90 23 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9625u ^ 0x9648u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9648u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9625u; } return 1;
case 0x9625u: /* LDA IMM A9 00 */
    c->pc = 0x9627u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9627u: /* STA ABS 8D 54 03 */
    c->pc = 0x962Au;
    ea = 0x0354u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x962Au: /* STA ABS 8D 55 03 */
    c->pc = 0x962Du;
    ea = 0x0355u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x962Du: /* LDA IMM A9 0D */
    c->pc = 0x962Fu;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x962Fu: /* STA ZP 85 B2 */
    c->pc = 0x9631u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9631u: /* LDA IMM A9 00 */
    c->pc = 0x9633u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9633u: /* STA ABS 8D 61 06 */
    c->pc = 0x9636u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9636u: /* STA ABS 8D 41 06 */
    c->pc = 0x9639u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9639u: /* STA ABS 8D 21 06 */
    c->pc = 0x963Cu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x963Cu: /* STA ABS 8D 01 06 */
    c->pc = 0x963Fu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x963Fu: /* INC ABS EE AA 05 */
    c->pc = 0x9642u;
    ea = 0x05AAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9642u: /* LDA IMM A9 07 */
    c->pc = 0x9644u;
    v = 0x07u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9644u: /* STA ZP 85 B1 */
    c->pc = 0x9646u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9646u: /* BNE REL D0 0B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9648u ^ 0x9653u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9653u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9648u; } return 1;
case 0x9648u: /* LDA ZP A5 02 */
    c->pc = 0x964Au;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x964Au: /* CMP IMM C9 01 */
    c->pc = 0x964Cu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x964Cu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x964Eu ^ 0x9653u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9653u; }
    else { c->cpu_cycles += 2u; c->pc = 0x964Eu; } return 1;
case 0x964Eu: /* LDA IMM A9 30 */
    c->pc = 0x9650u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9650u: /* STA ABS 8D 66 03 */
    c->pc = 0x9653u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9653u: /* LDA ABS AD A7 05 */
    c->pc = 0x9656u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9656u: /* STA ABS 8D 21 04 */
    c->pc = 0x9659u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9659u: /* JSR ABS 20 A4 91 */
    push(c, 0x96u); push(c, 0x5Bu); c->pc = 0x91A4u; c->cpu_cycles += 6u; return 1;
case 0x965Cu: /* LDA IMM A9 83 */
    c->pc = 0x965Eu;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x965Eu: /* STA ABS 8D 21 04 */
    c->pc = 0x9661u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9661u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x966Eu: /* DEX IMP CA */
    c->pc = 0x966Fu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x966Fu: /* LDA ABX BD BC 96 */
    c->pc = 0x9672u;
    ea = (uint16_t)(0x96BCu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x96BCu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9672u: /* STA ZP 85 08 */
    c->pc = 0x9674u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9674u: /* LDA ABX BD BE 96 */
    c->pc = 0x9677u;
    ea = (uint16_t)(0x96BEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x96BEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9677u: /* STA ZP 85 09 */
    c->pc = 0x9679u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9679u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x967Cu: /* JSR ABS 20 18 A1 */
    push(c, 0x96u); push(c, 0x7Eu); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x967Fu: /* LDA ABS AD C1 06 */
    c->pc = 0x9682u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9682u: /* CMP IMM C9 1C */
    c->pc = 0x9684u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9684u: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9686u ^ 0x9687u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9687u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9686u; } return 1;
case 0x9686u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9687u: /* LDA IMM A9 04 */
    c->pc = 0x9689u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9689u: /* STA ZP 85 02 */
    c->pc = 0x968Bu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x968Bu: /* LDA IMM A9 6D */
    c->pc = 0x968Du;
    v = 0x6Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x968Du: /* LDX IMM A2 01 */
    c->pc = 0x968Fu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x968Fu: /* JSR ABS 20 52 A3 */
    push(c, 0x96u); push(c, 0x91u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x9692u: /* LDX ZP A6 02 */
    c->pc = 0x9694u;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9694u: /* LDA ABX BD AD 96 */
    c->pc = 0x9697u;
    ea = (uint16_t)(0x96ADu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x96ADu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9697u: /* STA ABY 99 70 04 */
    c->pc = 0x969Au;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x969Au: /* LDA ABX BD B2 96 */
    c->pc = 0x969Du;
    ea = (uint16_t)(0x96B2u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x96B2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x969Du: /* STA ABY 99 B0 04 */
    c->pc = 0x96A0u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96A0u: /* LDA ABX BD B7 96 */
    c->pc = 0x96A3u;
    ea = (uint16_t)(0x96B7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x96B7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96A3u: /* STA ABY 99 30 04 */
    c->pc = 0x96A6u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96A6u: /* DEC ZP C6 02 */
    c->pc = 0x96A8u;
    ea = 0x02u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x96A8u: /* BPL REL 10 E1 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x96AAu ^ 0x968Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x968Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x96AAu; } return 1;
case 0x96AAu: /* INC ZP E6 B1 */
    c->pc = 0x96ACu;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x96ACu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x96C0u: /* DEX IMP CA */
    c->pc = 0x96C1u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96C1u: /* LDA ABX BD 1C 9B */
    c->pc = 0x96C4u;
    ea = (uint16_t)(0x9B1Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B1Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96C4u: /* STA ZP 85 08 */
    c->pc = 0x96C6u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96C6u: /* LDA ABX BD 23 9B */
    c->pc = 0x96C9u;
    ea = (uint16_t)(0x9B23u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9B23u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x96C9u: /* STA ZP 85 09 */
    c->pc = 0x96CBu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x96CBu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x96CEu: /* LDA IMM A9 00 */
    c->pc = 0x96D0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96D0u: /* STA ABS 8D 81 06 */
    c->pc = 0x96D3u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96D3u: /* LDA ABS AD E1 04 */
    c->pc = 0x96D6u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96D6u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x96D8u ^ 0x970Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x970Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x96D8u; } return 1;
case 0x96D8u: /* LDA IMM A9 02 */
    c->pc = 0x96DAu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96DAu: /* STA ABS 8D 54 03 */
    c->pc = 0x96DDu;
    ea = 0x0354u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96DDu: /* LDA IMM A9 04 */
    c->pc = 0x96DFu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96DFu: /* STA ABS 8D 55 03 */
    c->pc = 0x96E2u;
    ea = 0x0355u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96E2u: /* LDA IMM A9 B0 */
    c->pc = 0x96E4u;
    v = 0xB0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96E4u: /* STA ABS 8D A7 05 */
    c->pc = 0x96E7u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96E7u: /* LDA IMM A9 00 */
    c->pc = 0x96E9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96E9u: /* STA ABS 8D A9 05 */
    c->pc = 0x96ECu;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96ECu: /* STA ABS 8D 54 03 */
    c->pc = 0x96EFu;
    ea = 0x0354u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96EFu: /* STA ABS 8D 55 03 */
    c->pc = 0x96F2u;
    ea = 0x0355u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x96F2u: /* LDA IMM A9 0F */
    c->pc = 0x96F4u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96F4u: /* LDX IMM A2 0B */
    c->pc = 0x96F6u;
    v = 0x0Bu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96F6u: /* STA ABX 9D 5A 03 */
    c->pc = 0x96F9u;
    ea = (uint16_t)(0x035Au + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x96F9u: /* DEX IMP CA */
    c->pc = 0x96FAu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x96FAu: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x96FCu ^ 0x96F6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x96F6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x96FCu; } return 1;
case 0x96FCu: /* LDA IMM A9 15 */
    c->pc = 0x96FEu;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x96FEu: /* STA ABS 8D B6 03 */
    c->pc = 0x9701u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9701u: /* LDA IMM A9 A0 */
    c->pc = 0x9703u;
    v = 0xA0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9703u: /* STA ABS 8D B7 03 */
    c->pc = 0x9706u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9706u: /* LDA IMM A9 52 */
    c->pc = 0x9708u;
    v = 0x52u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9708u: /* STA ZP 85 B2 */
    c->pc = 0x970Au;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x970Au: /* INC ABS EE E1 04 */
    c->pc = 0x970Du;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x970Du: /* LDA ABS AD E1 04 */
    c->pc = 0x9710u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9710u: /* CMP IMM C9 01 */
    c->pc = 0x9712u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9712u: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9714u ^ 0x9730u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9730u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9714u; } return 1;
case 0x9714u: /* LDA IMM A9 08 */
    c->pc = 0x9716u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9716u: /* JSR ABS 20 F1 C5 */
    push(c, 0x97u); push(c, 0x18u); c->pc = 0xC5F1u; c->cpu_cycles += 6u; return 1;
case 0x9719u: /* DEC ZP C6 B2 */
    c->pc = 0x971Bu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x971Bu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x971Du ^ 0x971Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x971Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x971Du; } return 1;
case 0x971Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x971Eu: /* INC ABS EE E1 04 */
    c->pc = 0x9721u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9721u: /* LDA IMM A9 00 */
    c->pc = 0x9723u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9723u: /* STA ZP 85 B2 */
    c->pc = 0x9725u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9725u: /* LDA IMM A9 27 */
    c->pc = 0x9727u;
    v = 0x27u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9727u: /* STA ABS 8D B6 03 */
    c->pc = 0x972Au;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x972Au: /* LDA IMM A9 CB */
    c->pc = 0x972Cu;
    v = 0xCBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x972Cu: /* STA ABS 8D B7 03 */
    c->pc = 0x972Fu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x972Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9730u: /* CMP IMM C9 02 */
    c->pc = 0x9732u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9732u: /* BNE REL D0 17 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9734u ^ 0x974Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x974Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9734u; } return 1;
case 0x9734u: /* LDX ZP A6 B2 */
    c->pc = 0x9736u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9736u: /* CPX IMM E0 14 */
    c->pc = 0x9738u;
    v = 0x14u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9738u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x973Au ^ 0x973Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x973Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x973Au; } return 1;
case 0x973Au: /* JSR ABS 20 F8 97 */
    push(c, 0x97u); push(c, 0x3Cu); c->pc = 0x97F8u; c->cpu_cycles += 6u; return 1;
case 0x973Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x973Eu: /* INC ABS EE E1 04 */
    c->pc = 0x9741u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9741u: /* LDA IMM A9 00 */
    c->pc = 0x9743u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9743u: /* STA ZP 85 B2 */
    c->pc = 0x9745u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9745u: /* LDA IMM A9 5C */
    c->pc = 0x9747u;
    v = 0x5Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9747u: /* STA ABS 8D A7 05 */
    c->pc = 0x974Au;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x974Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x974Bu: /* LDX ZP A6 B2 */
    c->pc = 0x974Du;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x974Du: /* CPX IMM E0 0E */
    c->pc = 0x974Fu;
    v = 0x0Eu;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x974Fu: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9751u ^ 0x9755u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9755u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9751u; } return 1;
case 0x9751u: /* JSR ABS 20 D4 97 */
    push(c, 0x97u); push(c, 0x53u); c->pc = 0x97D4u; c->cpu_cycles += 6u; return 1;
case 0x9754u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9755u: /* CPX IMM E0 13 */
    c->pc = 0x9757u;
    v = 0x13u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9757u: /* BCS REL B0 1B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9759u ^ 0x9774u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9774u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9759u; } return 1;
case 0x9759u: /* LDA ZP A5 1C */
    c->pc = 0x975Bu;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x975Bu: /* AND IMM 29 03 */
    c->pc = 0x975Du;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x975Du: /* BNE REL D0 15 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x975Fu ^ 0x9774u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9774u; }
    else { c->cpu_cycles += 2u; c->pc = 0x975Fu; } return 1;
case 0x975Fu: /* LDA IMM A9 04 */
    c->pc = 0x9761u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9761u: /* LDY IMM A0 0B */
    c->pc = 0x9763u;
    v = 0x0Bu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9763u: /* LDX IMM A2 0F */
    c->pc = 0x9765u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9765u: /* JSR ABS 20 9B 97 */
    push(c, 0x97u); push(c, 0x67u); c->pc = 0x979Bu; c->cpu_cycles += 6u; return 1;
case 0x9768u: /* LDA IMM A9 18 */
    c->pc = 0x976Au;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x976Au: /* LDY IMM A0 13 */
    c->pc = 0x976Cu;
    v = 0x13u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x976Cu: /* LDX IMM A2 1F */
    c->pc = 0x976Eu;
    v = 0x1Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x976Eu: /* JSR ABS 20 9B 97 */
    push(c, 0x97u); push(c, 0x70u); c->pc = 0x979Bu; c->cpu_cycles += 6u; return 1;
case 0x9771u: /* INC ZP E6 B2 */
    c->pc = 0x9773u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9773u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9774u: /* JSR ABS 20 18 A1 */
    push(c, 0x97u); push(c, 0x76u); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x9777u: /* LDA ABS AD C1 06 */
    c->pc = 0x977Au;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x977Au: /* CMP IMM C9 1C */
    c->pc = 0x977Cu;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x977Cu: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x977Eu ^ 0x979Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x979Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x977Eu; } return 1;
case 0x977Eu: /* INC ZP E6 B1 */
    c->pc = 0x9780u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9780u: /* LDA IMM A9 56 */
    c->pc = 0x9782u;
    v = 0x56u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9782u: /* LDX IMM A2 01 */
    c->pc = 0x9784u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9784u: /* JSR ABS 20 52 A3 */
    push(c, 0x97u); push(c, 0x86u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x9787u: /* LDA IMM A9 AB */
    c->pc = 0x9789u;
    v = 0xABu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9789u: /* STA ABY 99 30 04 */
    c->pc = 0x978Cu;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x978Cu: /* LDA IMM A9 B0 */
    c->pc = 0x978Eu;
    v = 0xB0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x978Eu: /* STA ABY 99 70 04 */
    c->pc = 0x9791u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9791u: /* LDA IMM A9 80 */
    c->pc = 0x9793u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9793u: /* STA ABY 99 B0 04 */
    c->pc = 0x9796u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9796u: /* LDA IMM A9 3E */
    c->pc = 0x9798u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9798u: /* STA ZP 85 B2 */
    c->pc = 0x979Au;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x979Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x979Bu: /* STA ZP 85 00 */
    c->pc = 0x979Du;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x979Du: /* LDA ABX BD 56 03 */
    c->pc = 0x97A0u;
    ea = (uint16_t)(0x0356u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0356u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97A0u: /* CMP IMM C9 0F */
    c->pc = 0x97A2u;
    v = 0x0Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x97A2u: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x97A4u ^ 0x97ACu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97ACu; }
    else { c->cpu_cycles += 2u; c->pc = 0x97A4u; } return 1;
case 0x97A4u: /* LDA ABY B9 C0 97 */
    c->pc = 0x97A7u;
    ea = (uint16_t)(0x97C0u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x97C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97A7u: /* AND IMM 29 0F */
    c->pc = 0x97A9u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x97A9u: /* JMP ABS 4C B6 97 */
    c->pc = 0x97B6u; c->cpu_cycles += 3u; return 1;
case 0x97ACu: /* CLC IMP 18 */
    c->pc = 0x97ADu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x97ADu: /* ADC IMM 69 10 */
    c->pc = 0x97AFu;
    v = 0x10u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x97AFu: /* CMP ABY D9 C0 97 */
    c->pc = 0x97B2u;
    ea = (uint16_t)(0x97C0u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x97C0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97B2u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x97B4u ^ 0x97B6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97B6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97B4u; } return 1;
case 0x97B4u: /* BCS REL B0 03 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x97B6u ^ 0x97B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97B6u; } return 1;
case 0x97B6u: /* STA ABX 9D 56 03 */
    c->pc = 0x97B9u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97B9u: /* DEX IMP CA */
    c->pc = 0x97BAu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x97BAu: /* DEY IMP 88 */
    c->pc = 0x97BBu;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x97BBu: /* CPX ZP E4 00 */
    c->pc = 0x97BDu;
    ea = 0x00u;
    v = read8(c, ea);
    compare8(c, c->x, v);
    c->cpu_cycles += 3u; return 1;
case 0x97BDu: /* BNE REL D0 DE */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x97BFu ^ 0x979Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x979Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x97BFu; } return 1;
case 0x97BFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x97D4u: /* LDA ABX BD 8C 9A */
    c->pc = 0x97D7u;
    ea = (uint16_t)(0x9A8Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9A8Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97D7u: /* STA ABS 8D B6 03 */
    c->pc = 0x97DAu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97DAu: /* LDA ABX BD A2 9A */
    c->pc = 0x97DDu;
    ea = (uint16_t)(0x9AA2u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9AA2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97DDu: /* STA ABS 8D B7 03 */
    c->pc = 0x97E0u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97E0u: /* LDA ABX BD B8 9A */
    c->pc = 0x97E3u;
    ea = (uint16_t)(0x9AB8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9AB8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97E3u: /* STA ZP 85 47 */
    c->pc = 0x97E5u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x97E5u: /* LDY IMM A0 00 */
    c->pc = 0x97E7u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x97E7u: /* LDA ABS AD A7 05 */
    c->pc = 0x97EAu;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x97EAu: /* STA ABY 99 B8 03 */
    c->pc = 0x97EDu;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x97EDu: /* INC ABS EE A7 05 */
    c->pc = 0x97F0u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x97F0u: /* INY IMP C8 */
    c->pc = 0x97F1u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x97F1u: /* CPY ZP C4 47 */
    c->pc = 0x97F3u;
    ea = 0x47u;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x97F3u: /* BNE REL D0 F2 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x97F5u ^ 0x97E7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97E7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x97F5u; } return 1;
case 0x97F5u: /* INC ZP E6 B2 */
    c->pc = 0x97F7u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x97F7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x97F8u: /* LDY IMM A0 00 */
    c->pc = 0x97FAu;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x97FAu: /* LDA ABX BD CE 9A */
    c->pc = 0x97FDu;
    ea = (uint16_t)(0x9ACEu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9ACEu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x97FDu: /* STA ABY 99 B8 03 */
    c->pc = 0x9800u;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9800u: /* INX IMP E8 */
    c->pc = 0x9801u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9801u: /* INY IMP C8 */
    c->pc = 0x9802u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9802u: /* CPY IMM C0 05 */
    c->pc = 0x9804u;
    v = 0x05u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x9804u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9806u ^ 0x97FAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x97FAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9806u; } return 1;
case 0x9806u: /* STY ZP 84 47 */
    c->pc = 0x9808u;
    ea = 0x47u;
    write8(c, ea, c->y);
    c->cpu_cycles += 3u; return 1;
case 0x9808u: /* STX ZP 86 B2 */
    c->pc = 0x980Au;
    ea = 0xB2u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x980Au: /* CLC IMP 18 */
    c->pc = 0x980Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x980Bu: /* LDA ABS AD B7 03 */
    c->pc = 0x980Eu;
    ea = 0x03B7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x980Eu: /* ADC IMM 69 08 */
    c->pc = 0x9810u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9810u: /* STA ABS 8D B7 03 */
    c->pc = 0x9813u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9813u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9814u: /* LDA ABS AD 61 04 */
    c->pc = 0x9817u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9817u: /* CMP IMM C9 38 */
    c->pc = 0x9819u;
    v = 0x38u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9819u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x981Bu ^ 0x981Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x981Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x981Bu; } return 1;
case 0x981Bu: /* INC ZP E6 B1 */
    c->pc = 0x981Du;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x981Du: /* LDA IMM A9 83 */
    c->pc = 0x981Fu;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x981Fu: /* STA ABS 8D 21 04 */
    c->pc = 0x9822u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9822u: /* STA ABS 8D A7 05 */
    c->pc = 0x9825u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9825u: /* JSR ABS 20 10 9A */
    push(c, 0x98u); push(c, 0x27u); c->pc = 0x9A10u; c->cpu_cycles += 6u; return 1;
case 0x9828u: /* LDA IMM A9 83 */
    c->pc = 0x982Au;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x982Au: /* STA ABS 8D 21 04 */
    c->pc = 0x982Du;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x982Du: /* DEC ZP C6 B2 */
    c->pc = 0x982Fu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x982Fu: /* BNE REL D0 6B */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9831u ^ 0x989Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x989Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9831u; } return 1;
case 0x9831u: /* LDA IMM A9 3E */
    c->pc = 0x9833u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9833u: /* STA ZP 85 B2 */
    c->pc = 0x9835u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9835u: /* LDA ABS AD 61 04 */
    c->pc = 0x9838u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9838u: /* PHA IMP 48 */
    c->pc = 0x9839u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9839u: /* CLC IMP 18 */
    c->pc = 0x983Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x983Au: /* ADC IMM 69 28 */
    c->pc = 0x983Cu;
    v = 0x28u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x983Cu: /* STA ABS 8D 61 04 */
    c->pc = 0x983Fu;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x983Fu: /* JSR ABS 20 09 A2 */
    push(c, 0x98u); push(c, 0x41u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x9842u: /* PLA IMP 68 */
    c->pc = 0x9843u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9843u: /* STA ABS 8D 61 04 */
    c->pc = 0x9846u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9846u: /* LDA ZP A5 00 */
    c->pc = 0x9848u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9848u: /* STA ZP 85 0B */
    c->pc = 0x984Au;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x984Au: /* LDA IMM A9 1A */
    c->pc = 0x984Cu;
    v = 0x1Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x984Cu: /* STA ZP 85 0D */
    c->pc = 0x984Eu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x984Eu: /* LDA IMM A9 00 */
    c->pc = 0x9850u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9850u: /* STA ZP 85 0A */
    c->pc = 0x9852u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9852u: /* STA ZP 85 0C */
    c->pc = 0x9854u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9854u: /* JSR ABS 20 74 C8 */
    push(c, 0x98u); push(c, 0x56u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0x9857u: /* LDA IMM A9 6B */
    c->pc = 0x9859u;
    v = 0x6Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9859u: /* LDX IMM A2 01 */
    c->pc = 0x985Bu;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x985Bu: /* JSR ABS 20 52 A3 */
    push(c, 0x98u); push(c, 0x5Du); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x985Eu: /* BCS REL B0 3C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9860u ^ 0x989Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x989Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9860u; } return 1;
case 0x9860u: /* CLC IMP 18 */
    c->pc = 0x9861u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9861u: /* LDA ABS AD 61 04 */
    c->pc = 0x9864u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9864u: /* ADC IMM 69 28 */
    c->pc = 0x9866u;
    v = 0x28u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9866u: /* STA ABY 99 70 04 */
    c->pc = 0x9869u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9869u: /* CLC IMP 18 */
    c->pc = 0x986Au;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x986Au: /* LDA ABS AD A1 04 */
    c->pc = 0x986Du;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x986Du: /* ADC IMM 69 36 */
    c->pc = 0x986Fu;
    v = 0x36u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x986Fu: /* STA ABY 99 B0 04 */
    c->pc = 0x9872u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9872u: /* LDA ZP A5 0F */
    c->pc = 0x9874u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9874u: /* STA ABY 99 10 06 */
    c->pc = 0x9877u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9877u: /* LDA ZP A5 0E */
    c->pc = 0x9879u;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9879u: /* STA ABY 99 30 06 */
    c->pc = 0x987Cu;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x987Cu: /* LDA ZP A5 B1 */
    c->pc = 0x987Eu;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x987Eu: /* CMP IMM C9 04 */
    c->pc = 0x9880u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9880u: /* BCC REL 90 1A */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9882u ^ 0x989Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x989Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9882u; } return 1;
case 0x9882u: /* LDA ABY B9 30 04 */
    c->pc = 0x9885u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9885u: /* ORA IMM 09 04 */
    c->pc = 0x9887u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9887u: /* STA ABY 99 30 04 */
    c->pc = 0x988Au;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x988Au: /* LDA IMM A9 00 */
    c->pc = 0x988Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x988Cu: /* STA ABY 99 50 06 */
    c->pc = 0x988Fu;
    ea = (uint16_t)(0x0650u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x988Fu: /* STA ABY 99 70 06 */
    c->pc = 0x9892u;
    ea = (uint16_t)(0x0670u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9892u: /* LDA IMM A9 01 */
    c->pc = 0x9894u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9894u: /* STA ABY 99 10 06 */
    c->pc = 0x9897u;
    ea = (uint16_t)(0x0610u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9897u: /* LDA IMM A9 1E */
    c->pc = 0x9899u;
    v = 0x1Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9899u: /* STA ABY 99 30 06 */
    c->pc = 0x989Cu;
    ea = (uint16_t)(0x0630u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x989Cu: /* LDA IMM A9 83 */
    c->pc = 0x989Eu;
    v = 0x83u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x989Eu: /* STA ABS 8D 21 04 */
    c->pc = 0x98A1u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98A1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x98A2u: /* LDA ABS AD 61 04 */
    c->pc = 0x98A5u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98A5u: /* CMP IMM C9 98 */
    c->pc = 0x98A7u;
    v = 0x98u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x98A7u: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x98A9u ^ 0x98ABu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x98ABu; }
    else { c->cpu_cycles += 2u; c->pc = 0x98A9u; } return 1;
case 0x98A9u: /* DEC ZP C6 B1 */
    c->pc = 0x98ABu;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x98ABu: /* LDA IMM A9 C3 */
    c->pc = 0x98ADu;
    v = 0xC3u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98ADu: /* JMP ABS 4C 1F 98 */
    c->pc = 0x981Fu; c->cpu_cycles += 3u; return 1;
case 0x98B0u: /* JSR ABS 20 18 A1 */
    push(c, 0x98u); push(c, 0xB2u); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x98B3u: /* LDA IMM A9 00 */
    c->pc = 0x98B5u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98B5u: /* STA ABS 8D 81 06 */
    c->pc = 0x98B8u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98B8u: /* STA ABS 8D A1 06 */
    c->pc = 0x98BBu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98BBu: /* DEC ABS CE AB 05 */
    c->pc = 0x98BEu;
    ea = 0x05ABu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x98BEu: /* BNE REL D0 41 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x98C0u ^ 0x9901u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9901u; }
    else { c->cpu_cycles += 2u; c->pc = 0x98C0u; } return 1;
case 0x98C0u: /* LDA IMM A9 0C */
    c->pc = 0x98C2u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98C2u: /* STA ABS 8D AB 05 */
    c->pc = 0x98C5u;
    ea = 0x05ABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98C5u: /* LDA ZP A5 4A */
    c->pc = 0x98C7u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98C7u: /* STA ZP 85 01 */
    c->pc = 0x98C9u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98C9u: /* LDA IMM A9 18 */
    c->pc = 0x98CBu;
    v = 0x18u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98CBu: /* STA ZP 85 02 */
    c->pc = 0x98CDu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98CDu: /* JSR ABS 20 4E C8 */
    push(c, 0x98u); push(c, 0xCFu); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x98D0u: /* LDA ZP A5 04 */
    c->pc = 0x98D2u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98D2u: /* STA ZP 85 08 */
    c->pc = 0x98D4u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98D4u: /* LDA ZP A5 4A */
    c->pc = 0x98D6u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98D6u: /* STA ZP 85 01 */
    c->pc = 0x98D8u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98D8u: /* LDA IMM A9 30 */
    c->pc = 0x98DAu;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98DAu: /* STA ZP 85 02 */
    c->pc = 0x98DCu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98DCu: /* JSR ABS 20 4E C8 */
    push(c, 0x98u); push(c, 0xDEu); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x98DFu: /* LDA ZP A5 04 */
    c->pc = 0x98E1u;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98E1u: /* STA ZP 85 09 */
    c->pc = 0x98E3u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x98E3u: /* LDA IMM A9 6C */
    c->pc = 0x98E5u;
    v = 0x6Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x98E5u: /* LDX IMM A2 01 */
    c->pc = 0x98E7u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x98E7u: /* JSR ABS 20 52 A3 */
    push(c, 0x98u); push(c, 0xE9u); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x98EAu: /* BCS REL B0 15 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x98ECu ^ 0x9901u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9901u; }
    else { c->cpu_cycles += 2u; c->pc = 0x98ECu; } return 1;
case 0x98ECu: /* SEC IMP 38 */
    c->pc = 0x98EDu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x98EDu: /* LDA ABS AD A1 04 */
    c->pc = 0x98F0u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98F0u: /* SBC IMM E9 18 */
    c->pc = 0x98F2u;
    v = 0x18u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x98F2u: /* CLC IMP 18 */
    c->pc = 0x98F3u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x98F3u: /* ADC ZP 65 09 */
    c->pc = 0x98F5u;
    ea = 0x09u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x98F5u: /* STA ABY 99 B0 04 */
    c->pc = 0x98F8u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x98F8u: /* CLC IMP 18 */
    c->pc = 0x98F9u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x98F9u: /* LDA ABS AD 61 04 */
    c->pc = 0x98FCu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x98FCu: /* ADC ZP 65 08 */
    c->pc = 0x98FEu;
    ea = 0x08u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0x98FEu: /* STA ABY 99 70 04 */
    c->pc = 0x9901u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9901u: /* LDA ABS AD E1 04 */
    c->pc = 0x9904u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9904u: /* BNE REL D0 16 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9906u ^ 0x991Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x991Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9906u; } return 1;
case 0x9906u: /* LDA IMM A9 73 */
    c->pc = 0x9908u;
    v = 0x73u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9908u: /* STA ABS 8D 01 04 */
    c->pc = 0x990Bu;
    ea = 0x0401u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x990Bu: /* LDA IMM A9 27 */
    c->pc = 0x990Du;
    v = 0x27u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x990Du: /* STA ABS 8D B6 03 */
    c->pc = 0x9910u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9910u: /* LDA IMM A9 CB */
    c->pc = 0x9912u;
    v = 0xCBu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9912u: /* STA ABS 8D B7 03 */
    c->pc = 0x9915u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9915u: /* LDA IMM A9 14 */
    c->pc = 0x9917u;
    v = 0x14u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9917u: /* STA ZP 85 B2 */
    c->pc = 0x9919u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9919u: /* INC ABS EE E1 04 */
    c->pc = 0x991Cu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x991Cu: /* LDA ABS AD E1 04 */
    c->pc = 0x991Fu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x991Fu: /* CMP IMM C9 02 */
    c->pc = 0x9921u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9921u: /* BCS REL B0 16 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9923u ^ 0x9939u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9939u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9923u; } return 1;
case 0x9923u: /* LDX ZP A6 B2 */
    c->pc = 0x9925u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9925u: /* CPX IMM E0 28 */
    c->pc = 0x9927u;
    v = 0x28u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9927u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9929u ^ 0x992Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x992Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9929u; } return 1;
case 0x9929u: /* JSR ABS 20 F8 97 */
    push(c, 0x99u); push(c, 0x2Bu); c->pc = 0x97F8u; c->cpu_cycles += 6u; return 1;
case 0x992Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x992Du: /* LDA IMM A9 0E */
    c->pc = 0x992Fu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x992Fu: /* STA ZP 85 B2 */
    c->pc = 0x9931u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9931u: /* LDA IMM A9 00 */
    c->pc = 0x9933u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9933u: /* STA ABS 8D A9 05 */
    c->pc = 0x9936u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9936u: /* INC ABS EE E1 04 */
    c->pc = 0x9939u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9939u: /* LDX ZP A6 B2 */
    c->pc = 0x993Bu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x993Bu: /* CPX IMM E0 16 */
    c->pc = 0x993Du;
    v = 0x16u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x993Du: /* BCS REL B0 28 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x993Fu ^ 0x9967u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9967u; }
    else { c->cpu_cycles += 2u; c->pc = 0x993Fu; } return 1;
case 0x993Fu: /* LDA ABX BD 8C 9A */
    c->pc = 0x9942u;
    ea = (uint16_t)(0x9A8Cu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9A8Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9942u: /* STA ABS 8D B6 03 */
    c->pc = 0x9945u;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9945u: /* LDA ABX BD A2 9A */
    c->pc = 0x9948u;
    ea = (uint16_t)(0x9AA2u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9AA2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9948u: /* STA ABS 8D B7 03 */
    c->pc = 0x994Bu;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x994Bu: /* LDA ABX BD B8 9A */
    c->pc = 0x994Eu;
    ea = (uint16_t)(0x9AB8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9AB8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x994Eu: /* STA ZP 85 47 */
    c->pc = 0x9950u;
    ea = 0x47u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9950u: /* LDY IMM A0 00 */
    c->pc = 0x9952u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9952u: /* LDX ABS AE A9 05 */
    c->pc = 0x9955u;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9955u: /* LDA ABX BD F6 9A */
    c->pc = 0x9958u;
    ea = (uint16_t)(0x9AF6u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9AF6u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9958u: /* STA ABY 99 B8 03 */
    c->pc = 0x995Bu;
    ea = (uint16_t)(0x03B8u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x995Bu: /* INX IMP E8 */
    c->pc = 0x995Cu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x995Cu: /* INY IMP C8 */
    c->pc = 0x995Du;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x995Du: /* CPY ZP C4 47 */
    c->pc = 0x995Fu;
    ea = 0x47u;
    v = read8(c, ea);
    compare8(c, c->y, v);
    c->cpu_cycles += 3u; return 1;
case 0x995Fu: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9961u ^ 0x9955u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9955u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9961u; } return 1;
case 0x9961u: /* STX ABS 8E A9 05 */
    c->pc = 0x9964u;
    ea = 0x05A9u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9964u: /* INC ZP E6 B2 */
    c->pc = 0x9966u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9966u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9967u: /* LDA ABS AD C1 06 */
    c->pc = 0x996Au;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x996Au: /* CMP IMM C9 1C */
    c->pc = 0x996Cu;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x996Cu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x996Eu ^ 0x996Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x996Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0x996Eu; } return 1;
case 0x996Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x996Fu: /* INC ZP E6 B1 */
    c->pc = 0x9971u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9971u: /* LDA IMM A9 3E */
    c->pc = 0x9973u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9973u: /* STA ZP 85 B2 */
    c->pc = 0x9975u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9975u: /* LDA IMM A9 A3 */
    c->pc = 0x9977u;
    v = 0xA3u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9977u: /* STA ABS 8D 21 06 */
    c->pc = 0x997Au;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x997Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x997Bu: /* LDA ABS AD E1 04 */
    c->pc = 0x997Eu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x997Eu: /* BEQ REL F0 1C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9980u ^ 0x999Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x999Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9980u; } return 1;
case 0x9980u: /* LDA ABS AD A0 04 */
    c->pc = 0x9983u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9983u: /* CMP IMM C9 E0 */
    c->pc = 0x9985u;
    v = 0xE0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9985u: /* BCS REL B0 07 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9987u ^ 0x998Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x998Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9987u; } return 1;
case 0x9987u: /* INC ABS EE A0 04 */
    c->pc = 0x998Au;
    ea = 0x04A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x998Au: /* INC ABS EE A0 04 */
    c->pc = 0x998Du;
    ea = 0x04A0u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x998Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x998Eu: /* LDA IMM A9 00 */
    c->pc = 0x9990u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9990u: /* STA ABS 8D 20 04 */
    c->pc = 0x9993u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9993u: /* DEC ZP C6 B2 */
    c->pc = 0x9995u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9995u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9997u ^ 0x999Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x999Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9997u; } return 1;
case 0x9997u: /* LDA IMM A9 FF */
    c->pc = 0x9999u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9999u: /* STA ZP 85 B1 */
    c->pc = 0x999Bu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x999Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x999Cu: /* JSR ABS 20 82 93 */
    push(c, 0x99u); push(c, 0x9Eu); c->pc = 0x9382u; c->cpu_cycles += 6u; return 1;
case 0x999Fu: /* LDA ABS AD A1 04 */
    c->pc = 0x99A2u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99A2u: /* BEQ REL F0 16 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x99A4u ^ 0x99BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x99A4u; } return 1;
case 0x99A4u: /* SEC IMP 38 */
    c->pc = 0x99A5u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x99A5u: /* LDA ABS AD C1 04 */
    c->pc = 0x99A8u;
    ea = 0x04C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99A8u: /* SBC IMM E9 80 */
    c->pc = 0x99AAu;
    v = 0x80u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x99AAu: /* STA ABS 8D C1 04 */
    c->pc = 0x99ADu;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99ADu: /* LDA ABS AD A1 04 */
    c->pc = 0x99B0u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99B0u: /* SBC IMM E9 00 */
    c->pc = 0x99B2u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x99B2u: /* STA ABS 8D A1 04 */
    c->pc = 0x99B5u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99B5u: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x99B7u ^ 0x99BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x99B7u; } return 1;
case 0x99B7u: /* STA ABS 8D 21 04 */
    c->pc = 0x99BAu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x99BAu: /* LDA ZP A5 4A */
    c->pc = 0x99BCu;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99BCu: /* STA ZP 85 01 */
    c->pc = 0x99BEu;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99BEu: /* LDA IMM A9 20 */
    c->pc = 0x99C0u;
    v = 0x20u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99C0u: /* STA ZP 85 02 */
    c->pc = 0x99C2u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99C2u: /* JSR ABS 20 4E C8 */
    push(c, 0x99u); push(c, 0xC4u); c->pc = 0xC84Eu; c->cpu_cycles += 6u; return 1;
case 0x99C5u: /* LDA IMM A9 06 */
    c->pc = 0x99C7u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99C7u: /* LDX IMM A2 01 */
    c->pc = 0x99C9u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x99C9u: /* JSR ABS 20 52 A3 */
    push(c, 0x99u); push(c, 0xCBu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x99CCu: /* BCS REL B0 16 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x99CEu ^ 0x99E4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99E4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99CEu; } return 1;
case 0x99CEu: /* LDA ZP A5 4A */
    c->pc = 0x99D0u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99D0u: /* ASL IMP 0A */
    c->pc = 0x99D1u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D1u: /* LDA ZP A5 4A */
    c->pc = 0x99D3u;
    ea = 0x4Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99D3u: /* ROL IMP 2A */
    c->pc = 0x99D4u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D4u: /* ROL IMP 2A */
    c->pc = 0x99D5u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D5u: /* ROL IMP 2A */
    c->pc = 0x99D6u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D6u: /* ROL IMP 2A */
    c->pc = 0x99D7u;
    c->a = rol8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D7u: /* ORA IMM 09 08 */
    c->pc = 0x99D9u;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99D9u: /* STA ABY 99 70 04 */
    c->pc = 0x99DCu;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99DCu: /* CLC IMP 18 */
    c->pc = 0x99DDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x99DDu: /* LDA ZP A5 04 */
    c->pc = 0x99DFu;
    ea = 0x04u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99DFu: /* ADC IMM 69 C8 */
    c->pc = 0x99E1u;
    v = 0xC8u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x99E1u: /* STA ABY 99 B0 04 */
    c->pc = 0x99E4u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99E4u: /* INC ZP E6 B2 */
    c->pc = 0x99E6u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x99E6u: /* LDA ZP A5 B2 */
    c->pc = 0x99E8u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99E8u: /* CMP IMM C9 FD */
    c->pc = 0x99EAu;
    v = 0xFDu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x99EAu: /* BEQ REL F0 01 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x99ECu ^ 0x99EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x99ECu; } return 1;
case 0x99ECu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x99EDu: /* LDA IMM A9 0F */
    c->pc = 0x99EFu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99EFu: /* LDX IMM A2 10 */
    c->pc = 0x99F1u;
    v = 0x10u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x99F1u: /* STA ABX 9D 56 03 */
    c->pc = 0x99F4u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x99F4u: /* DEX IMP CA */
    c->pc = 0x99F5u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x99F5u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x99F7u ^ 0x99F1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x99F1u; }
    else { c->cpu_cycles += 2u; c->pc = 0x99F7u; } return 1;
case 0x99F7u: /* INC ABS EE E1 04 */
    c->pc = 0x99FAu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x99FAu: /* LDA IMM A9 0B */
    c->pc = 0x99FCu;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x99FCu: /* STA ZP 85 2C */
    c->pc = 0x99FEu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x99FEu: /* LDA IMM A9 00 */
    c->pc = 0x9A00u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A00u: /* STA ABS 8D A0 06 */
    c->pc = 0x9A03u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A03u: /* STA ABS 8D 80 06 */
    c->pc = 0x9A06u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A06u: /* LDA IMM A9 0C */
    c->pc = 0x9A08u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A08u: /* STA ABS 8D 00 04 */
    c->pc = 0x9A0Bu;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A0Bu: /* LDA IMM A9 3E */
    c->pc = 0x9A0Du;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A0Du: /* STA ZP 85 B2 */
    c->pc = 0x9A0Fu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A0Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9A10u: /* LDA IMM A9 0F */
    c->pc = 0x9A12u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A12u: /* STA ABS 8D 66 03 */
    c->pc = 0x9A15u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A15u: /* LDA ZP A5 B1 */
    c->pc = 0x9A17u;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A17u: /* CMP IMM C9 04 */
    c->pc = 0x9A19u;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A19u: /* BCS REL B0 0C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A1Bu ^ 0x9A27u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A27u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A1Bu; } return 1;
case 0x9A1Bu: /* LDA ZP A5 A9 */
    c->pc = 0x9A1Du;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A1Du: /* CMP IMM C9 02 */
    c->pc = 0x9A1Fu;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A1Fu: /* BEQ REL F0 0C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9A21u ^ 0x9A2Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A2Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A21u; } return 1;
case 0x9A21u: /* CMP IMM C9 05 */
    c->pc = 0x9A23u;
    v = 0x05u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A23u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9A25u ^ 0x9A2Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A2Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A25u; } return 1;
case 0x9A25u: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A27u ^ 0x9A35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A35u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A27u; } return 1;
case 0x9A27u: /* LDA ZP A5 A9 */
    c->pc = 0x9A29u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A29u: /* CMP IMM C9 01 */
    c->pc = 0x9A2Bu;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A2Bu: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A2Du ^ 0x9A35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A35u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A2Du; } return 1;
case 0x9A2Du: /* LDA ABS AD 21 04 */
    c->pc = 0x9A30u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A30u: /* ORA IMM 09 08 */
    c->pc = 0x9A32u;
    v = 0x08u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A32u: /* STA ABS 8D 21 04 */
    c->pc = 0x9A35u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A35u: /* JSR ABS 20 9D A5 */
    push(c, 0x9Au); push(c, 0x37u); c->pc = 0xA59Du; c->cpu_cycles += 6u; return 1;
case 0x9A38u: /* BCC REL 90 43 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9A3Au ^ 0x9A7Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A7Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A3Au; } return 1;
case 0x9A3Au: /* LDA ZP A5 B1 */
    c->pc = 0x9A3Cu;
    ea = 0xB1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A3Cu: /* CMP IMM C9 04 */
    c->pc = 0x9A3Eu;
    v = 0x04u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A3Eu: /* BCS REL B0 16 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A40u ^ 0x9A56u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A56u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A40u; } return 1;
case 0x9A40u: /* LDA IMM A9 04 */
    c->pc = 0x9A42u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A42u: /* STA ZP 85 B1 */
    c->pc = 0x9A44u;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A44u: /* LDA IMM A9 0C */
    c->pc = 0x9A46u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A46u: /* STA ABS 8D AB 05 */
    c->pc = 0x9A49u;
    ea = 0x05ABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A49u: /* LDA IMM A9 00 */
    c->pc = 0x9A4Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A4Bu: /* STA ABS 8D 01 06 */
    c->pc = 0x9A4Eu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A4Eu: /* STA ABS 8D 21 06 */
    c->pc = 0x9A51u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A51u: /* STA ABS 8D E1 04 */
    c->pc = 0x9A54u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A54u: /* BEQ REL F0 32 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9A56u ^ 0x9A88u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A88u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A56u; } return 1;
case 0x9A56u: /* LDA IMM A9 74 */
    c->pc = 0x9A58u;
    v = 0x74u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A58u: /* JSR ABS 20 0C A1 */
    push(c, 0x9Au); push(c, 0x5Au); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9A5Bu: /* CLC IMP 18 */
    c->pc = 0x9A5Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9A5Cu: /* LDA ABS AD 61 04 */
    c->pc = 0x9A5Fu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A5Fu: /* ADC IMM 69 28 */
    c->pc = 0x9A61u;
    v = 0x28u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A61u: /* STA ABS 8D 61 04 */
    c->pc = 0x9A64u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A64u: /* LDA IMM A9 57 */
    c->pc = 0x9A66u;
    v = 0x57u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A66u: /* STA ABS 8D A1 04 */
    c->pc = 0x9A69u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A69u: /* LDA IMM A9 00 */
    c->pc = 0x9A6Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A6Bu: /* STA ABS 8D E1 04 */
    c->pc = 0x9A6Eu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A6Eu: /* LDA IMM A9 56 */
    c->pc = 0x9A70u;
    v = 0x56u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A70u: /* JSR ABS 20 2D A2 */
    push(c, 0x9Au); push(c, 0x72u); c->pc = 0xA22Du; c->cpu_cycles += 6u; return 1;
case 0x9A73u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9A75u ^ 0x9A7Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A7Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A75u; } return 1;
case 0x9A75u: /* LDA IMM A9 00 */
    c->pc = 0x9A77u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A77u: /* STA ABY 99 30 04 */
    c->pc = 0x9A7Au;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9A7Au: /* JMP ABS 4C 25 96 */
    c->pc = 0x9625u; c->cpu_cycles += 3u; return 1;
case 0x9A7Du: /* LDA ZP A5 02 */
    c->pc = 0x9A7Fu;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9A7Fu: /* CMP IMM C9 01 */
    c->pc = 0x9A81u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9A81u: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9A83u ^ 0x9A88u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9A88u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9A83u; } return 1;
case 0x9A83u: /* LDA IMM A9 30 */
    c->pc = 0x9A85u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9A85u: /* STA ABS 8D 66 03 */
    c->pc = 0x9A88u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9A88u: /* JSR ABS 20 A4 91 */
    push(c, 0x9Au); push(c, 0x8Au); c->pc = 0x91A4u; c->cpu_cycles += 6u; return 1;
case 0x9A8Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9B2Au: /* DEX IMP CA */
    c->pc = 0x9B2Bu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B2Bu: /* LDA ABX BD BD 9F */
    c->pc = 0x9B2Eu;
    ea = (uint16_t)(0x9FBDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9FBDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B2Eu: /* STA ZP 85 08 */
    c->pc = 0x9B30u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B30u: /* LDA ABX BD C8 9F */
    c->pc = 0x9B33u;
    ea = (uint16_t)(0x9FC8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9FC8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B33u: /* STA ZP 85 09 */
    c->pc = 0x9B35u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B35u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x9B38u: /* LDA ABS AD E1 04 */
    c->pc = 0x9B3Bu;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B3Bu: /* BNE REL D0 20 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B3Du ^ 0x9B5Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B5Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B3Du; } return 1;
case 0x9B3Du: /* LDY IMM A0 0F */
    c->pc = 0x9B3Fu;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9B3Fu: /* LDX IMM A2 0E */
    c->pc = 0x9B41u;
    v = 0x0Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B41u: /* JSR ABS 20 E0 D3 */
    push(c, 0x9Bu); push(c, 0x43u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0x9B44u: /* LDA IMM A9 08 */
    c->pc = 0x9B46u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B46u: /* STA ABS 8D AE 04 */
    c->pc = 0x9B49u;
    ea = 0x04AEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B49u: /* LDA IMM A9 B4 */
    c->pc = 0x9B4Bu;
    v = 0xB4u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B4Bu: /* STA ABS 8D 6E 04 */
    c->pc = 0x9B4Eu;
    ea = 0x046Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B4Eu: /* LDA IMM A9 7D */
    c->pc = 0x9B50u;
    v = 0x7Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B50u: /* STA ZP 85 B2 */
    c->pc = 0x9B52u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9B52u: /* LDA IMM A9 00 */
    c->pc = 0x9B54u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B54u: /* STA ABS 8D 54 03 */
    c->pc = 0x9B57u;
    ea = 0x0354u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B57u: /* STA ABS 8D 55 03 */
    c->pc = 0x9B5Au;
    ea = 0x0355u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B5Au: /* INC ABS EE E1 04 */
    c->pc = 0x9B5Du;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9B5Du: /* LDA ABS AD E1 04 */
    c->pc = 0x9B60u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B60u: /* CMP IMM C9 02 */
    c->pc = 0x9B62u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B62u: /* BCS REL B0 31 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9B64u ^ 0x9B95u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B95u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B64u; } return 1;
case 0x9B64u: /* LDA ABS AD 2E 04 */
    c->pc = 0x9B67u;
    ea = 0x042Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B67u: /* BPL REL 10 14 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9B69u ^ 0x9B7Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B7Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B69u; } return 1;
case 0x9B69u: /* LDA ABS AD AE 04 */
    c->pc = 0x9B6Cu;
    ea = 0x04AEu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B6Cu: /* CMP IMM C9 90 */
    c->pc = 0x9B6Eu;
    v = 0x90u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B6Eu: /* BCC REL 90 0C */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9B70u ^ 0x9B7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B70u; } return 1;
case 0x9B70u: /* LDX IMM A2 83 */
    c->pc = 0x9B72u;
    v = 0x83u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B72u: /* STX ABS 8E 21 04 */
    c->pc = 0x9B75u;
    ea = 0x0421u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9B75u: /* CMP IMM C9 E0 */
    c->pc = 0x9B77u;
    v = 0xE0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B77u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9B79u ^ 0x9B7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B79u; } return 1;
case 0x9B79u: /* LSR ABS 4E 2E 04 */
    c->pc = 0x9B7Cu;
    ea = 0x042Eu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9B7Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9B7Du: /* DEC ZP C6 B2 */
    c->pc = 0x9B7Fu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9B7Fu: /* BNE REL D0 FB */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B81u ^ 0x9B7Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B7Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B81u; } return 1;
case 0x9B81u: /* LDX IMM A2 02 */
    c->pc = 0x9B83u;
    v = 0x02u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B83u: /* LDA ABX BD 50 9C */
    c->pc = 0x9B86u;
    ea = (uint16_t)(0x9C50u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9C50u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9B86u: /* STA ABX 9D 6F 03 */
    c->pc = 0x9B89u;
    ea = (uint16_t)(0x036Fu + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9B89u: /* DEX IMP CA */
    c->pc = 0x9B8Au;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9B8Au: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9B8Cu ^ 0x9B83u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B83u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B8Cu; } return 1;
case 0x9B8Cu: /* INC ABS EE E1 04 */
    c->pc = 0x9B8Fu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9B8Fu: /* LDA IMM A9 76 */
    c->pc = 0x9B91u;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9B91u: /* JSR ABS 20 0C A1 */
    push(c, 0x9Bu); push(c, 0x93u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9B94u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9B95u: /* BNE REL D0 3E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B97u ^ 0x9BD5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BD5u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B97u; } return 1;
case 0x9B97u: /* LDA ABS AD A1 06 */
    c->pc = 0x9B9Au;
    ea = 0x06A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9B9Au: /* CMP IMM C9 03 */
    c->pc = 0x9B9Cu;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9B9Cu: /* BNE REL D0 F6 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9B9Eu ^ 0x9B94u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9B94u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9B9Eu; } return 1;
case 0x9B9Eu: /* LDA IMM A9 00 */
    c->pc = 0x9BA0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9BA0u: /* STA ABS 8D 81 06 */
    c->pc = 0x9BA3u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BA3u: /* LDX IMM A2 0A */
    c->pc = 0x9BA5u;
    v = 0x0Au;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9BA5u: /* LDA ZP A5 B2 */
    c->pc = 0x9BA7u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9BA7u: /* CMP IMM C9 7D */
    c->pc = 0x9BA9u;
    v = 0x7Du;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BA9u: /* BCC REL 90 02 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9BABu ^ 0x9BADu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BADu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9BABu; } return 1;
case 0x9BABu: /* LDX IMM A2 12 */
    c->pc = 0x9BADu;
    v = 0x12u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9BADu: /* LDA ZP A5 B2 */
    c->pc = 0x9BAFu;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9BAFu: /* AND IMM 29 04 */
    c->pc = 0x9BB1u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9BB1u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9BB3u ^ 0x9BB8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BB8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9BB3u; } return 1;
case 0x9BB3u: /* TXA IMP 8A */
    c->pc = 0x9BB4u;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9BB4u: /* CLC IMP 18 */
    c->pc = 0x9BB5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9BB5u: /* ADC IMM 69 08 */
    c->pc = 0x9BB7u;
    v = 0x08u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BB7u: /* TAX IMP AA */
    c->pc = 0x9BB8u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9BB8u: /* LDY IMM A0 07 */
    c->pc = 0x9BBAu;
    v = 0x07u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9BBAu: /* LDA ABX BD 50 9C */
    c->pc = 0x9BBDu;
    ea = (uint16_t)(0x9C50u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9C50u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9BBDu: /* STA ABY 99 6E 03 */
    c->pc = 0x9BC0u;
    ea = (uint16_t)(0x036Eu + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9BC0u: /* DEX IMP CA */
    c->pc = 0x9BC1u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9BC1u: /* DEY IMP 88 */
    c->pc = 0x9BC2u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9BC2u: /* BPL REL 10 F6 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9BC4u ^ 0x9BBAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BBAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9BC4u; } return 1;
case 0x9BC4u: /* INC ZP E6 B2 */
    c->pc = 0x9BC6u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9BC6u: /* LDA ZP A5 B2 */
    c->pc = 0x9BC8u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9BC8u: /* CMP IMM C9 FD */
    c->pc = 0x9BCAu;
    v = 0xFDu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BCAu: /* BNE REL D0 08 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9BCCu ^ 0x9BD4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BD4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9BCCu; } return 1;
case 0x9BCCu: /* INC ABS EE E1 04 */
    c->pc = 0x9BCFu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9BCFu: /* LDA IMM A9 77 */
    c->pc = 0x9BD1u;
    v = 0x77u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9BD1u: /* JSR ABS 20 0C A1 */
    push(c, 0x9Bu); push(c, 0xD3u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9BD4u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9BD5u: /* LDA ABS AD 61 04 */
    c->pc = 0x9BD8u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BD8u: /* CMP IMM C9 D8 */
    c->pc = 0x9BDAu;
    v = 0xD8u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BDAu: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9BDCu ^ 0x9BEDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BEDu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9BDCu; } return 1;
case 0x9BDCu: /* CLC IMP 18 */
    c->pc = 0x9BDDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9BDDu: /* LDA ABS AD 81 04 */
    c->pc = 0x9BE0u;
    ea = 0x0481u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BE0u: /* ADC IMM 69 80 */
    c->pc = 0x9BE2u;
    v = 0x80u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BE2u: /* STA ABS 8D 81 04 */
    c->pc = 0x9BE5u;
    ea = 0x0481u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BE5u: /* LDA ABS AD 61 04 */
    c->pc = 0x9BE8u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BE8u: /* ADC IMM 69 00 */
    c->pc = 0x9BEAu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BEAu: /* STA ABS 8D 61 04 */
    c->pc = 0x9BEDu;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BEDu: /* JSR ABS 20 18 A1 */
    push(c, 0x9Bu); push(c, 0xEFu); c->pc = 0xA118u; c->cpu_cycles += 6u; return 1;
case 0x9BF0u: /* LDA ABS AD C1 06 */
    c->pc = 0x9BF3u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9BF3u: /* CMP IMM C9 1C */
    c->pc = 0x9BF5u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9BF5u: /* BNE REL D0 DD */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9BF7u ^ 0x9BD4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9BD4u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9BF7u; } return 1;
case 0x9BF7u: /* INC ZP E6 B1 */
    c->pc = 0x9BF9u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9BF9u: /* LDA IMM A9 0E */
    c->pc = 0x9BFBu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9BFBu: /* STA ZP 85 B2 */
    c->pc = 0x9BFDu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9BFDu: /* LDA IMM A9 3E */
    c->pc = 0x9BFFu;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9BFFu: /* STA ABS 8D A7 05 */
    c->pc = 0x9C02u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9C02u: /* LDA IMM A9 00 */
    c->pc = 0x9C04u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C04u: /* STA ABS 8D A9 05 */
    c->pc = 0x9C07u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9C07u: /* LDA IMM A9 30 */
    c->pc = 0x9C09u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C09u: /* STA ABS 8D 5F 03 */
    c->pc = 0x9C0Cu;
    ea = 0x035Fu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9C0Cu: /* LDA IMM A9 01 */
    c->pc = 0x9C0Eu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C0Eu: /* STA ZP 85 2B */
    c->pc = 0x9C10u;
    ea = 0x2Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C10u: /* LDX IMM A2 0C */
    c->pc = 0x9C12u;
    v = 0x0Cu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9C12u: /* STX ZP 86 02 */
    c->pc = 0x9C14u;
    ea = 0x02u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9C14u: /* LDA IMM A9 70 */
    c->pc = 0x9C16u;
    v = 0x70u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C16u: /* JSR ABS 20 59 A3 */
    push(c, 0x9Cu); push(c, 0x18u); c->pc = 0xA359u; c->cpu_cycles += 6u; return 1;
case 0x9C19u: /* LDX ZP A6 02 */
    c->pc = 0x9C1Bu;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9C1Bu: /* LDA ABX BD 36 9C */
    c->pc = 0x9C1Eu;
    ea = (uint16_t)(0x9C36u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9C36u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C1Eu: /* STA ABX 9D B0 04 */
    c->pc = 0x9C21u;
    ea = (uint16_t)(0x04B0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C21u: /* LDA ABX BD 43 9C */
    c->pc = 0x9C24u;
    ea = (uint16_t)(0x9C43u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9C43u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9C24u: /* PHA IMP 48 */
    c->pc = 0x9C25u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C25u: /* AND IMM 29 F0 */
    c->pc = 0x9C27u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C27u: /* ORA IMM 09 04 */
    c->pc = 0x9C29u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C29u: /* STA ABX 9D 70 04 */
    c->pc = 0x9C2Cu;
    ea = (uint16_t)(0x0470u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C2Cu: /* PLA IMP 68 */
    c->pc = 0x9C2Du;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9C2Du: /* AND IMM 29 0F */
    c->pc = 0x9C2Fu;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C2Fu: /* STA ABX 9D B0 06 */
    c->pc = 0x9C32u;
    ea = (uint16_t)(0x06B0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9C32u: /* DEX IMP CA */
    c->pc = 0x9C33u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9C33u: /* BPL REL 10 DD */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9C35u ^ 0x9C12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9C12u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9C35u; } return 1;
case 0x9C35u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9C6Bu: /* JSR ABS 20 D8 9C */
    push(c, 0x9Cu); push(c, 0x6Du); c->pc = 0x9CD8u; c->cpu_cycles += 6u; return 1;
case 0x9C6Eu: /* JSR ABS 20 46 A1 */
    push(c, 0x9Cu); push(c, 0x70u); c->pc = 0xA146u; c->cpu_cycles += 6u; return 1;
case 0x9C71u: /* LDX IMM A2 0F */
    c->pc = 0x9C73u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9C73u: /* LDA ZP A5 02 */
    c->pc = 0x9C75u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C75u: /* CMP IMM C9 01 */
    c->pc = 0x9C77u;
    v = 0x01u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C77u: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9C79u ^ 0x9C88u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9C88u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9C79u; } return 1;
case 0x9C79u: /* LDA ABS AD AA 05 */
    c->pc = 0x9C7Cu;
    ea = 0x05AAu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9C7Cu: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9C7Eu ^ 0x9C86u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9C86u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9C7Eu; } return 1;
case 0x9C7Eu: /* LDA IMM A9 00 */
    c->pc = 0x9C80u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9C80u: /* STA ABS 8D E1 04 */
    c->pc = 0x9C83u;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9C83u: /* INC ZP E6 B1 */
    c->pc = 0x9C85u;
    ea = 0xB1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9C85u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9C86u: /* LDX IMM A2 30 */
    c->pc = 0x9C88u;
    v = 0x30u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9C88u: /* STX ABS 8E 66 03 */
    c->pc = 0x9C8Bu;
    ea = 0x0366u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9C8Bu: /* CLC IMP 18 */
    c->pc = 0x9C8Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9C8Cu: /* LDA ZP A5 B7 */
    c->pc = 0x9C8Eu;
    ea = 0xB7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C8Eu: /* ADC IMM 69 60 */
    c->pc = 0x9C90u;
    v = 0x60u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C90u: /* STA ZP 85 B7 */
    c->pc = 0x9C92u;
    ea = 0xB7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C92u: /* LDA ZP A5 B8 */
    c->pc = 0x9C94u;
    ea = 0xB8u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C94u: /* ADC IMM 69 01 */
    c->pc = 0x9C96u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C96u: /* STA ZP 85 B8 */
    c->pc = 0x9C98u;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C98u: /* LDA ZP A5 B9 */
    c->pc = 0x9C9Au;
    ea = 0xB9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C9Au: /* ADC IMM 69 00 */
    c->pc = 0x9C9Cu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9C9Cu: /* STA ZP 85 B9 */
    c->pc = 0x9C9Eu;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9C9Eu: /* JSR ABS 20 09 A2 */
    push(c, 0x9Cu); push(c, 0xA0u); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x9CA1u: /* DEC ABS CE A7 05 */
    c->pc = 0x9CA4u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9CA4u: /* BNE REL D0 11 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9CA6u ^ 0x9CB7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9CB7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9CA6u; } return 1;
case 0x9CA6u: /* LDA IMM A9 3E */
    c->pc = 0x9CA8u;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CA8u: /* STA ABS 8D A7 05 */
    c->pc = 0x9CABu;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9CABu: /* LDA IMM A9 6F */
    c->pc = 0x9CADu;
    v = 0x6Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CADu: /* JSR ABS 20 52 A3 */
    push(c, 0x9Cu); push(c, 0xAFu); c->pc = 0xA352u; c->cpu_cycles += 6u; return 1;
case 0x9CB0u: /* BCS REL B0 05 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9CB2u ^ 0x9CB7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9CB7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9CB2u; } return 1;
case 0x9CB2u: /* LDA IMM A9 04 */
    c->pc = 0x9CB4u;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CB4u: /* JSR ABS 20 53 90 */
    push(c, 0x9Cu); push(c, 0xB6u); c->pc = 0x9053u; c->cpu_cycles += 6u; return 1;
case 0x9CB7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9CD8u: /* DEC ZP C6 B2 */
    c->pc = 0x9CDAu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9CDAu: /* BNE REL D0 07 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9CDCu ^ 0x9CE3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9CE3u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9CDCu; } return 1;
case 0x9CDCu: /* INC ABS EE A9 05 */
    c->pc = 0x9CDFu;
    ea = 0x05A9u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9CDFu: /* LDA IMM A9 1C */
    c->pc = 0x9CE1u;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CE1u: /* STA ZP 85 B2 */
    c->pc = 0x9CE3u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9CE3u: /* LDA ABS AD A9 05 */
    c->pc = 0x9CE6u;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9CE6u: /* PHA IMP 48 */
    c->pc = 0x9CE7u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9CE7u: /* AND IMM 29 07 */
    c->pc = 0x9CE9u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9CE9u: /* TAX IMP AA */
    c->pc = 0x9CEAu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9CEAu: /* LDA ABX BD B8 9C */
    c->pc = 0x9CEDu;
    ea = (uint16_t)(0x9CB8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CB8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CEDu: /* STA ABS 8D 61 06 */
    c->pc = 0x9CF0u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9CF0u: /* LDA ABX BD C0 9C */
    c->pc = 0x9CF3u;
    ea = (uint16_t)(0x9CC0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CC0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CF3u: /* STA ABS 8D 41 06 */
    c->pc = 0x9CF6u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9CF6u: /* LDA ABX BD C8 9C */
    c->pc = 0x9CF9u;
    ea = (uint16_t)(0x9CC8u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CC8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CF9u: /* STA ABS 8D 21 06 */
    c->pc = 0x9CFCu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9CFCu: /* LDA ABX BD D0 9C */
    c->pc = 0x9CFFu;
    ea = (uint16_t)(0x9CD0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9CD0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9CFFu: /* STA ABS 8D 01 06 */
    c->pc = 0x9D02u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D02u: /* LDX IMM A2 83 */
    c->pc = 0x9D04u;
    v = 0x83u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9D04u: /* PLA IMP 68 */
    c->pc = 0x9D05u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D05u: /* AND IMM 29 08 */
    c->pc = 0x9D07u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D07u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9D09u ^ 0x9D0Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D0Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D09u; } return 1;
case 0x9D09u: /* LDX IMM A2 C3 */
    c->pc = 0x9D0Bu;
    v = 0xC3u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9D0Bu: /* STX ABS 8E 21 04 */
    c->pc = 0x9D0Eu;
    ea = 0x0421u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9D0Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9D0Fu: /* LDX ABS AE E1 04 */
    c->pc = 0x9D12u;
    ea = 0x04E1u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9D12u: /* BNE REL D0 24 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9D14u ^ 0x9D38u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D38u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D14u; } return 1;
case 0x9D14u: /* LDA IMM A9 E0 */
    c->pc = 0x9D16u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D16u: /* STA ABS 8D B7 03 */
    c->pc = 0x9D19u;
    ea = 0x03B7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D19u: /* LDA IMM A9 0F */
    c->pc = 0x9D1Bu;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D1Bu: /* STA ABS 8D B6 03 */
    c->pc = 0x9D1Eu;
    ea = 0x03B6u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D1Eu: /* LDA IMM A9 00 */
    c->pc = 0x9D20u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D20u: /* STA ABS 8D A9 05 */
    c->pc = 0x9D23u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D23u: /* LDA IMM A9 94 */
    c->pc = 0x9D25u;
    v = 0x94u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D25u: /* STA ABS 8D A7 05 */
    c->pc = 0x9D28u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D28u: /* LDA IMM A9 80 */
    c->pc = 0x9D2Au;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D2Au: /* STA ZP 85 B2 */
    c->pc = 0x9D2Cu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D2Cu: /* INC ABS EE E1 04 */
    c->pc = 0x9D2Fu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9D2Fu: /* INX IMP E8 */
    c->pc = 0x9D30u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9D30u: /* LDA IMM A9 FF */
    c->pc = 0x9D32u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D32u: /* JSR ABS 20 51 C0 */
    push(c, 0x9Du); push(c, 0x34u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9D35u: /* LSR ABS 4E 21 04 */
    c->pc = 0x9D38u;
    ea = 0x0421u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9D38u: /* DEX IMP CA */
    c->pc = 0x9D39u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9D39u: /* LDA ABX BD CB 9F */
    c->pc = 0x9D3Cu;
    ea = (uint16_t)(0x9FCBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9FCBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9D3Cu: /* STA ZP 85 09 */
    c->pc = 0x9D3Eu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D3Eu: /* LDA ABX BD C0 9F */
    c->pc = 0x9D41u;
    ea = (uint16_t)(0x9FC0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9FC0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9D41u: /* STA ZP 85 08 */
    c->pc = 0x9D43u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D43u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x9D46u: /* LDA ZP A5 1C */
    c->pc = 0x9D48u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D48u: /* AND IMM 29 0F */
    c->pc = 0x9D4Au;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D4Au: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9D4Cu ^ 0x9D51u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D51u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D4Cu; } return 1;
case 0x9D4Cu: /* LDA IMM A9 2B */
    c->pc = 0x9D4Eu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D4Eu: /* JSR ABS 20 51 C0 */
    push(c, 0x9Du); push(c, 0x50u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9D51u: /* LDX IMM A2 10 */
    c->pc = 0x9D53u;
    v = 0x10u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9D53u: /* LDY IMM A0 0F */
    c->pc = 0x9D55u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9D55u: /* LDA ZP A5 1C */
    c->pc = 0x9D57u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D57u: /* AND IMM 29 04 */
    c->pc = 0x9D59u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D59u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9D5Bu ^ 0x9D5Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D5Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D5Bu; } return 1;
case 0x9D5Bu: /* LDY IMM A0 30 */
    c->pc = 0x9D5Du;
    v = 0x30u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9D5Du: /* TYA IMP 98 */
    c->pc = 0x9D5Eu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D5Eu: /* STA ABX 9D 56 03 */
    c->pc = 0x9D61u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9D61u: /* DEX IMP CA */
    c->pc = 0x9D62u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9D62u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9D64u ^ 0x9D5Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D5Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D64u; } return 1;
case 0x9D64u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9D65u: /* JSR ABS 20 46 9D */
    push(c, 0x9Du); push(c, 0x67u); c->pc = 0x9D46u; c->cpu_cycles += 6u; return 1;
case 0x9D68u: /* LDA ZP A5 B2 */
    c->pc = 0x9D6Au;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D6Au: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9D6Cu ^ 0x9D74u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D74u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D6Cu; } return 1;
case 0x9D6Cu: /* LDA IMM A9 08 */
    c->pc = 0x9D6Eu;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D6Eu: /* JSR ABS 20 F1 C5 */
    push(c, 0x9Du); push(c, 0x70u); c->pc = 0xC5F1u; c->cpu_cycles += 6u; return 1;
case 0x9D71u: /* DEC ZP C6 B2 */
    c->pc = 0x9D73u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9D73u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9D74u: /* INC ABS EE E1 04 */
    c->pc = 0x9D77u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9D77u: /* LDA IMM A9 00 */
    c->pc = 0x9D79u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D79u: /* STA ZP 85 FD */
    c->pc = 0x9D7Bu;
    ea = 0xFDu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D7Bu: /* LDA IMM A9 0F */
    c->pc = 0x9D7Du;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D7Du: /* STA ZP 85 FE */
    c->pc = 0x9D7Fu;
    ea = 0xFEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D7Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9D80u: /* JSR ABS 20 46 9D */
    push(c, 0x9Du); push(c, 0x82u); c->pc = 0x9D46u; c->cpu_cycles += 6u; return 1;
case 0x9D83u: /* LDA ZP A5 FD */
    c->pc = 0x9D85u;
    ea = 0xFDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D85u: /* CMP IMM C9 60 */
    c->pc = 0x9D87u;
    v = 0x60u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9D87u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9D89u ^ 0x9D8Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9D8Du; }
    else { c->cpu_cycles += 2u; c->pc = 0x9D89u; } return 1;
case 0x9D89u: /* JSR ABS 20 0C CB */
    push(c, 0x9Du); push(c, 0x8Bu); c->pc = 0xCB0Cu; c->cpu_cycles += 6u; return 1;
case 0x9D8Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9D8Du: /* INC ABS EE E1 04 */
    c->pc = 0x9D90u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9D90u: /* LDA IMM A9 00 */
    c->pc = 0x9D92u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D92u: /* STA ABS 8D A7 05 */
    c->pc = 0x9D95u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D95u: /* LDA IMM A9 8D */
    c->pc = 0x9D97u;
    v = 0x8Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D97u: /* STA ABS 8D A9 05 */
    c->pc = 0x9D9Au;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9D9Au: /* LDA IMM A9 00 */
    c->pc = 0x9D9Cu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9D9Cu: /* STA ZP 85 1A */
    c->pc = 0x9D9Eu;
    ea = 0x1Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9D9Eu: /* STA ZP 85 1B */
    c->pc = 0x9DA0u;
    ea = 0x1Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DA0u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9DA2u ^ 0x9DACu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9DACu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DA2u; } return 1;
case 0x9DA2u: /* JSR ABS 20 46 9D */
    push(c, 0x9Du); push(c, 0xA4u); c->pc = 0x9D46u; c->cpu_cycles += 6u; return 1;
case 0x9DA5u: /* LDA ABS AD A7 05 */
    c->pc = 0x9DA8u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9DA8u: /* AND IMM 29 3F */
    c->pc = 0x9DAAu;
    v = 0x3Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DAAu: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9DACu ^ 0x9DC7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9DC7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DACu; } return 1;
case 0x9DACu: /* LDA IMM A9 0C */
    c->pc = 0x9DAEu;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DAEu: /* STA ZP 85 2A */
    c->pc = 0x9DB0u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DB0u: /* LDA ABS AD A7 05 */
    c->pc = 0x9DB3u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9DB3u: /* STA ZP 85 08 */
    c->pc = 0x9DB5u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DB5u: /* LDA ABS AD A9 05 */
    c->pc = 0x9DB8u;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9DB8u: /* STA ZP 85 09 */
    c->pc = 0x9DBAu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DBAu: /* JSR ABS 20 0B CA */
    push(c, 0x9Du); push(c, 0xBCu); c->pc = 0xCA0Bu; c->cpu_cycles += 6u; return 1;
case 0x9DBDu: /* LDA IMM A9 0D */
    c->pc = 0x9DBFu;
    v = 0x0Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DBFu: /* STA ZP 85 2A */
    c->pc = 0x9DC1u;
    ea = 0x2Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DC1u: /* INC ABS EE A7 05 */
    c->pc = 0x9DC4u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9DC4u: /* INC ZP E6 1A */
    c->pc = 0x9DC6u;
    ea = 0x1Au; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9DC6u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9DC7u: /* INC ABS EE E1 04 */
    c->pc = 0x9DCAu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9DCAu: /* INC ZP E6 20 */
    c->pc = 0x9DCCu;
    ea = 0x20u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9DCCu: /* INC ABS EE 40 04 */
    c->pc = 0x9DCFu;
    ea = 0x0440u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9DCFu: /* INC ABS EE 41 04 */
    c->pc = 0x9DD2u;
    ea = 0x0441u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9DD2u: /* LDA IMM A9 00 */
    c->pc = 0x9DD4u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DD4u: /* STA ZP 85 B8 */
    c->pc = 0x9DD6u;
    ea = 0xB8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DD6u: /* STA ZP 85 B9 */
    c->pc = 0x9DD8u;
    ea = 0xB9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9DD8u: /* LDX IMM A2 10 */
    c->pc = 0x9DDAu;
    v = 0x10u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9DDAu: /* LDA ABX BD 30 9E */
    c->pc = 0x9DDDu;
    ea = (uint16_t)(0x9E30u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9E30u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9DDDu: /* STA ABX 9D 56 03 */
    c->pc = 0x9DE0u;
    ea = (uint16_t)(0x0356u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9DE0u: /* DEX IMP CA */
    c->pc = 0x9DE1u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9DE1u: /* BPL REL 10 F7 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9DE3u ^ 0x9DDAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9DDAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9DE3u; } return 1;
case 0x9DE3u: /* LDY IMM A0 10 */
    c->pc = 0x9DE5u;
    v = 0x10u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9DE5u: /* LDX IMM A2 0E */
    c->pc = 0x9DE7u;
    v = 0x0Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9DE7u: /* JSR ABS 20 E0 D3 */
    push(c, 0x9Du); push(c, 0xE9u); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0x9DEAu: /* LDA IMM A9 80 */
    c->pc = 0x9DECu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DECu: /* STA ABS 8D 2E 04 */
    c->pc = 0x9DEFu;
    ea = 0x042Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9DEFu: /* LDA IMM A9 A7 */
    c->pc = 0x9DF1u;
    v = 0xA7u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DF1u: /* STA ABS 8D AE 04 */
    c->pc = 0x9DF4u;
    ea = 0x04AEu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9DF4u: /* LDA IMM A9 E0 */
    c->pc = 0x9DF6u;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9DF6u: /* STA ABS 8D 6E 04 */
    c->pc = 0x9DF9u;
    ea = 0x046Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9DF9u: /* LDY IMM A0 11 */
    c->pc = 0x9DFBu;
    v = 0x11u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9DFBu: /* LDX IMM A2 0D */
    c->pc = 0x9DFDu;
    v = 0x0Du;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9DFDu: /* JSR ABS 20 E0 D3 */
    push(c, 0x9Du); push(c, 0xFFu); c->pc = 0xD3E0u; c->cpu_cycles += 6u; return 1;
case 0x9E00u: /* LDA IMM A9 80 */
    c->pc = 0x9E02u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E02u: /* STA ABS 8D 6D 04 */
    c->pc = 0x9E05u;
    ea = 0x046Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E05u: /* LDA IMM A9 37 */
    c->pc = 0x9E07u;
    v = 0x37u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E07u: /* STA ABS 8D AD 04 */
    c->pc = 0x9E0Au;
    ea = 0x04ADu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E0Au: /* LDA IMM A9 80 */
    c->pc = 0x9E0Cu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E0Cu: /* STA ABS 8D 21 04 */
    c->pc = 0x9E0Fu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E0Fu: /* LDA IMM A9 80 */
    c->pc = 0x9E11u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E11u: /* STA ABS 8D A1 04 */
    c->pc = 0x9E14u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E14u: /* LDA IMM A9 D8 */
    c->pc = 0x9E16u;
    v = 0xD8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E16u: /* STA ABS 8D 61 04 */
    c->pc = 0x9E19u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E19u: /* LDA IMM A9 0E */
    c->pc = 0x9E1Bu;
    v = 0x0Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E1Bu: /* STA ZP 85 B2 */
    c->pc = 0x9E1Du;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E1Du: /* LDA IMM A9 00 */
    c->pc = 0x9E1Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E1Fu: /* STA ABS 8D A9 05 */
    c->pc = 0x9E22u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E22u: /* STA ABS 8D AB 05 */
    c->pc = 0x9E25u;
    ea = 0x05ABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E25u: /* LDA IMM A9 78 */
    c->pc = 0x9E27u;
    v = 0x78u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E27u: /* JSR ABS 20 0C A1 */
    push(c, 0x9Eu); push(c, 0x29u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9E2Au: /* LDA IMM A9 2A */
    c->pc = 0x9E2Cu;
    v = 0x2Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E2Cu: /* JSR ABS 20 51 C0 */
    push(c, 0x9Eu); push(c, 0x2Eu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9E2Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9E41u: /* JSR ABS 20 6D 9E */
    push(c, 0x9Eu); push(c, 0x43u); c->pc = 0x9E6Du; c->cpu_cycles += 6u; return 1;
case 0x9E44u: /* LDA ABS AD A9 05 */
    c->pc = 0x9E47u;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E47u: /* CMP IMM C9 24 */
    c->pc = 0x9E49u;
    v = 0x24u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9E49u: /* BEQ REL F0 09 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9E4Bu ^ 0x9E54u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E54u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E4Bu; } return 1;
case 0x9E4Bu: /* JSR ABS 20 D8 9C */
    push(c, 0x9Eu); push(c, 0x4Du); c->pc = 0x9CD8u; c->cpu_cycles += 6u; return 1;
case 0x9E4Eu: /* STX ZP 86 03 */
    c->pc = 0x9E50u;
    ea = 0x03u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9E50u: /* JSR ABS 20 57 A1 */
    push(c, 0x9Eu); push(c, 0x52u); c->pc = 0xA157u; c->cpu_cycles += 6u; return 1;
case 0x9E53u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9E54u: /* LDA IMM A9 84 */
    c->pc = 0x9E56u;
    v = 0x84u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E56u: /* STA ABS 8D 21 04 */
    c->pc = 0x9E59u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E59u: /* LDA IMM A9 00 */
    c->pc = 0x9E5Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E5Bu: /* STA ZP 85 B2 */
    c->pc = 0x9E5Du;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E5Du: /* STA ABS 8D 01 06 */
    c->pc = 0x9E60u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E60u: /* STA ABS 8D 21 06 */
    c->pc = 0x9E63u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E63u: /* STA ABS 8D 41 06 */
    c->pc = 0x9E66u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E66u: /* STA ABS 8D 61 06 */
    c->pc = 0x9E69u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9E69u: /* INC ABS EE E1 04 */
    c->pc = 0x9E6Cu;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9E6Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9E6Du: /* LDX IMM A2 2C */
    c->pc = 0x9E6Fu;
    v = 0x2Cu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9E6Fu: /* LDA ZP A5 1C */
    c->pc = 0x9E71u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E71u: /* AND IMM 29 04 */
    c->pc = 0x9E73u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E73u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9E75u ^ 0x9E77u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9E77u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9E75u; } return 1;
case 0x9E75u: /* LDX IMM A2 00 */
    c->pc = 0x9E77u;
    v = 0x00u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9E77u: /* STX ABS 8E 70 03 */
    c->pc = 0x9E7Au;
    ea = 0x0370u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9E7Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9E8Fu: /* JSR ABS 20 6D 9E */
    push(c, 0x9Eu); push(c, 0x91u); c->pc = 0x9E6Du; c->cpu_cycles += 6u; return 1;
case 0x9E92u: /* LDA IMM A9 80 */
    c->pc = 0x9E94u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E94u: /* STA ZP 85 03 */
    c->pc = 0x9E96u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E96u: /* JSR ABS 20 57 A1 */
    push(c, 0x9Eu); push(c, 0x98u); c->pc = 0xA157u; c->cpu_cycles += 6u; return 1;
case 0x9E99u: /* LDA IMM A9 04 */
    c->pc = 0x9E9Bu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9E9Bu: /* STA ZP 85 01 */
    c->pc = 0x9E9Du;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E9Du: /* STA ZP 85 02 */
    c->pc = 0x9E9Fu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9E9Fu: /* JSR ABS 20 49 A2 */
    push(c, 0x9Eu); push(c, 0xA1u); c->pc = 0xA249u; c->cpu_cycles += 6u; return 1;
case 0x9EA2u: /* LDA ZP A5 00 */
    c->pc = 0x9EA4u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9EA4u: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9EA6u ^ 0x9EBAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EBAu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EA6u; } return 1;
case 0x9EA6u: /* LDX ZP A6 B2 */
    c->pc = 0x9EA8u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0x9EA8u: /* CPX IMM E0 02 */
    c->pc = 0x9EAAu;
    v = 0x02u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9EAAu: /* BEQ REL F0 0F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9EACu ^ 0x9EBBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EBBu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EACu; } return 1;
case 0x9EACu: /* LDA ABX BD EF 9E */
    c->pc = 0x9EAFu;
    ea = (uint16_t)(0x9EEFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9EEFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9EAFu: /* STA ABS 8D 61 06 */
    c->pc = 0x9EB2u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EB2u: /* LDA ABX BD F1 9E */
    c->pc = 0x9EB5u;
    ea = (uint16_t)(0x9EF1u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9EF1u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9EB5u: /* STA ABS 8D 41 06 */
    c->pc = 0x9EB8u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EB8u: /* INC ZP E6 B2 */
    c->pc = 0x9EBAu;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9EBAu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9EBBu: /* LSR ABS 4E 2E 04 */
    c->pc = 0x9EBEu;
    ea = 0x042Eu; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9EBEu: /* LDA IMM A9 79 */
    c->pc = 0x9EC0u;
    v = 0x79u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EC0u: /* JSR ABS 20 0C A1 */
    push(c, 0x9Eu); push(c, 0xC2u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9EC3u: /* LDA IMM A9 A7 */
    c->pc = 0x9EC5u;
    v = 0xA7u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EC5u: /* STA ABS 8D A1 04 */
    c->pc = 0x9EC8u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EC8u: /* LDA IMM A9 E0 */
    c->pc = 0x9ECAu;
    v = 0xE0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9ECAu: /* STA ABS 8D 61 04 */
    c->pc = 0x9ECDu;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9ECDu: /* LDA IMM A9 3E */
    c->pc = 0x9ECFu;
    v = 0x3Eu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9ECFu: /* STA ZP 85 B2 */
    c->pc = 0x9ED1u;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9ED1u: /* LDA IMM A9 00 */
    c->pc = 0x9ED3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9ED3u: /* STA ABS 8D A7 05 */
    c->pc = 0x9ED6u;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9ED6u: /* INC ABS EE E1 04 */
    c->pc = 0x9ED9u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9ED9u: /* LSR ABS 4E 2D 04 */
    c->pc = 0x9EDCu;
    ea = 0x042Du; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9EDCu: /* LDX IMM A2 0F */
    c->pc = 0x9EDEu;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9EDEu: /* LSR ABX 5E 30 04 */
    c->pc = 0x9EE1u;
    ea = (uint16_t)(0x0430u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0x9EE1u: /* DEX IMP CA */
    c->pc = 0x9EE2u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9EE2u: /* BPL REL 10 FA */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0x9EE4u ^ 0x9EDEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9EDEu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EE4u; } return 1;
case 0x9EE4u: /* LDA IMM A9 30 */
    c->pc = 0x9EE6u;
    v = 0x30u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EE6u: /* STA ABS 8D 74 03 */
    c->pc = 0x9EE9u;
    ea = 0x0374u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EE9u: /* LDA IMM A9 15 */
    c->pc = 0x9EEBu;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EEBu: /* STA ABS 8D 75 03 */
    c->pc = 0x9EEEu;
    ea = 0x0375u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9EEEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9EF3u: /* LDA ZP A5 B2 */
    c->pc = 0x9EF5u;
    ea = 0xB2u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9EF5u: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9EF7u ^ 0x9F12u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F12u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EF7u; } return 1;
case 0x9EF7u: /* LDA ZP A5 1C */
    c->pc = 0x9EF9u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9EF9u: /* AND IMM 29 07 */
    c->pc = 0x9EFBu;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EFBu: /* BNE REL D0 05 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9EFDu ^ 0x9F02u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F02u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9EFDu; } return 1;
case 0x9EFDu: /* LDA IMM A9 2B */
    c->pc = 0x9EFFu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9EFFu: /* JSR ABS 20 51 C0 */
    push(c, 0x9Fu); push(c, 0x01u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9F02u: /* LDX IMM A2 0F */
    c->pc = 0x9F04u;
    v = 0x0Fu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F04u: /* LDA ZP A5 1C */
    c->pc = 0x9F06u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F06u: /* AND IMM 29 04 */
    c->pc = 0x9F08u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F08u: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F0Au ^ 0x9F0Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F0Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F0Au; } return 1;
case 0x9F0Au: /* LDX IMM A2 30 */
    c->pc = 0x9F0Cu;
    v = 0x30u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F0Cu: /* STX ABS 8E 66 03 */
    c->pc = 0x9F0Fu;
    ea = 0x0366u;
    write8(c, ea, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9F0Fu: /* DEC ZP C6 B2 */
    c->pc = 0x9F11u;
    ea = 0xB2u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0x9F11u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9F12u: /* LDA IMM A9 0F */
    c->pc = 0x9F14u;
    v = 0x0Fu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F14u: /* STA ABS 8D 66 03 */
    c->pc = 0x9F17u;
    ea = 0x0366u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F17u: /* INC ABS EE A7 05 */
    c->pc = 0x9F1Au;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9F1Au: /* LDA ABS AD A7 05 */
    c->pc = 0x9F1Du;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F1Du: /* CMP IMM C9 41 */
    c->pc = 0x9F1Fu;
    v = 0x41u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9F1Fu: /* BEQ REL F0 14 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9F21u ^ 0x9F35u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F35u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F21u; } return 1;
case 0x9F21u: /* LSR IMP 4A */
    c->pc = 0x9F22u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F22u: /* LSR IMP 4A */
    c->pc = 0x9F23u;
    c->a = lsr8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F23u: /* AND IMM 29 1C */
    c->pc = 0x9F25u;
    v = 0x1Cu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F25u: /* TAX IMP AA */
    c->pc = 0x9F26u;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F26u: /* LDY IMM A0 00 */
    c->pc = 0x9F28u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9F28u: /* LDA ABX BD 7B 9E */
    c->pc = 0x9F2Bu;
    ea = (uint16_t)(0x9E7Bu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x9E7Bu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9F2Bu: /* STA ABY 99 62 03 */
    c->pc = 0x9F2Eu;
    ea = (uint16_t)(0x0362u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0x9F2Eu: /* INX IMP E8 */
    c->pc = 0x9F2Fu;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9F2Fu: /* INY IMP C8 */
    c->pc = 0x9F30u;
    c->y = (uint8_t)(c->y + 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0x9F30u: /* CPY IMM C0 04 */
    c->pc = 0x9F32u;
    v = 0x04u;
    compare8(c, c->y, v);
    c->cpu_cycles += 2u; return 1;
case 0x9F32u: /* BNE REL D0 F4 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F34u ^ 0x9F28u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F28u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F34u; } return 1;
case 0x9F34u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9F35u: /* INC ABS EE E1 04 */
    c->pc = 0x9F38u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9F38u: /* LDA IMM A9 7A */
    c->pc = 0x9F3Au;
    v = 0x7Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F3Au: /* JSR ABS 20 0C A1 */
    push(c, 0x9Fu); push(c, 0x3Cu); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9F3Du: /* LDA IMM A9 84 */
    c->pc = 0x9F3Fu;
    v = 0x84u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F3Fu: /* STA ABS 8D 21 04 */
    c->pc = 0x9F42u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F42u: /* LDA IMM A9 50 */
    c->pc = 0x9F44u;
    v = 0x50u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F44u: /* STA ABS 8D 21 06 */
    c->pc = 0x9F47u;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F47u: /* LDA IMM A9 00 */
    c->pc = 0x9F49u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F49u: /* STA ABS 8D 01 06 */
    c->pc = 0x9F4Cu;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F4Cu: /* LDA IMM A9 53 */
    c->pc = 0x9F4Eu;
    v = 0x53u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F4Eu: /* STA ABS 8D 61 06 */
    c->pc = 0x9F51u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F51u: /* LDA IMM A9 06 */
    c->pc = 0x9F53u;
    v = 0x06u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F53u: /* STA ABS 8D 41 06 */
    c->pc = 0x9F56u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F56u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9F57u: /* LDA IMM A9 84 */
    c->pc = 0x9F59u;
    v = 0x84u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F59u: /* STA ZP 85 03 */
    c->pc = 0x9F5Bu;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F5Bu: /* JSR ABS 20 57 A1 */
    push(c, 0x9Fu); push(c, 0x5Du); c->pc = 0xA157u; c->cpu_cycles += 6u; return 1;
case 0x9F5Eu: /* LDA IMM A9 0C */
    c->pc = 0x9F60u;
    v = 0x0Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F60u: /* STA ZP 85 01 */
    c->pc = 0x9F62u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F62u: /* STA ZP 85 02 */
    c->pc = 0x9F64u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F64u: /* JSR ABS 20 49 A2 */
    push(c, 0x9Fu); push(c, 0x66u); c->pc = 0xA249u; c->cpu_cycles += 6u; return 1;
case 0x9F67u: /* LDA ZP A5 00 */
    c->pc = 0x9F69u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9F69u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9F6Bu ^ 0x9F6Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F6Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F6Bu; } return 1;
case 0x9F6Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9F6Cu: /* LDA ABS AD 20 04 */
    c->pc = 0x9F6Fu;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F6Fu: /* AND IMM 29 BF */
    c->pc = 0x9F71u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F71u: /* LDX ABS AE 60 04 */
    c->pc = 0x9F74u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 4u; return 1;
case 0x9F74u: /* CPX IMM E0 B0 */
    c->pc = 0x9F76u;
    v = 0xB0u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0x9F76u: /* BCS REL B0 02 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0x9F78u ^ 0x9F7Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9F7Au; }
    else { c->cpu_cycles += 2u; c->pc = 0x9F78u; } return 1;
case 0x9F78u: /* ORA IMM 09 40 */
    c->pc = 0x9F7Au;
    v = 0x40u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F7Au: /* STA ABS 8D 20 04 */
    c->pc = 0x9F7Du;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F7Du: /* LDA IMM A9 7B */
    c->pc = 0x9F7Fu;
    v = 0x7Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F7Fu: /* JSR ABS 20 0C A1 */
    push(c, 0x9Fu); push(c, 0x81u); c->pc = 0xA10Cu; c->cpu_cycles += 6u; return 1;
case 0x9F82u: /* INC ABS EE E1 04 */
    c->pc = 0x9F85u;
    ea = 0x04E1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9F85u: /* LDA IMM A9 FD */
    c->pc = 0x9F87u;
    v = 0xFDu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F87u: /* STA ABS 8D A7 05 */
    c->pc = 0x9F8Au;
    ea = 0x05A7u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F8Au: /* LDA IMM A9 80 */
    c->pc = 0x9F8Cu;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F8Cu: /* STA ABS 8D A9 05 */
    c->pc = 0x9F8Fu;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F8Fu: /* LDA IMM A9 02 */
    c->pc = 0x9F91u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F91u: /* STA ABS 8D AB 05 */
    c->pc = 0x9F94u;
    ea = 0x05ABu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9F94u: /* LDA IMM A9 16 */
    c->pc = 0x9F96u;
    v = 0x16u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9F96u: /* JSR ABS 20 51 C0 */
    push(c, 0x9Fu); push(c, 0x98u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0x9F99u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9F9Au: /* JSR ABS 20 09 A2 */
    push(c, 0x9Fu); push(c, 0x9Cu); c->pc = 0xA209u; c->cpu_cycles += 6u; return 1;
case 0x9F9Du: /* LDA ABS AD A7 05 */
    c->pc = 0x9FA0u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FA0u: /* BEQ REL F0 04 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0x9FA2u ^ 0x9FA6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FA6u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FA2u; } return 1;
case 0x9FA2u: /* DEC ABS CE A7 05 */
    c->pc = 0x9FA5u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9FA5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9FA6u: /* LDA IMM A9 00 */
    c->pc = 0x9FA8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FA8u: /* STA ABS 8D A1 06 */
    c->pc = 0x9FABu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FABu: /* STA ABS 8D 81 06 */
    c->pc = 0x9FAEu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FAEu: /* DEC ABS CE A9 05 */
    c->pc = 0x9FB1u;
    ea = 0x05A9u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9FB1u: /* BNE REL D0 09 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FB3u ^ 0x9FBCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FBCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FB3u; } return 1;
case 0x9FB3u: /* DEC ABS CE AB 05 */
    c->pc = 0x9FB6u;
    ea = 0x05ABu; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0x9FB6u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FB8u ^ 0x9FBCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FBCu; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FB8u; } return 1;
case 0x9FB8u: /* LDA IMM A9 FF */
    c->pc = 0x9FBAu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FBAu: /* STA ZP 85 B1 */
    c->pc = 0x9FBCu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FBCu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0x9FD3u: /* SEC IMP 38 */
    c->pc = 0x9FD4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0x9FD4u: /* LDA ZP A5 B3 */
    c->pc = 0x9FD6u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FD6u: /* SBC IMM E9 08 */
    c->pc = 0x9FD8u;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0x9FD8u: /* BCC REL 90 0E */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9FDAu ^ 0x9FE8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FE8u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FDAu; } return 1;
case 0x9FDAu: /* TAX IMP AA */
    c->pc = 0x9FDBu;
    c->x = c->a; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0x9FDBu: /* LDA ABX BD 00 A1 */
    c->pc = 0x9FDEu;
    ea = (uint16_t)(0xA100u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA100u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FDEu: /* STA ZP 85 08 */
    c->pc = 0x9FE0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FE0u: /* LDA ABX BD 06 A1 */
    c->pc = 0x9FE3u;
    ea = (uint16_t)(0xA106u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA106u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0x9FE3u: /* STA ZP 85 09 */
    c->pc = 0x9FE5u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0x9FE5u: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0x9FE8u: /* LDA IMM A9 00 */
    c->pc = 0x9FEAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FEAu: /* STA ABS 8D 81 06 */
    c->pc = 0x9FEDu;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FEDu: /* LDA ABS AD A7 05 */
    c->pc = 0x9FF0u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FF0u: /* CMP IMM C9 10 */
    c->pc = 0x9FF2u;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0x9FF2u: /* BCC REL 90 03 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0x9FF4u ^ 0x9FF7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0x9FF7u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FF4u; } return 1;
case 0x9FF4u: /* JMP ABS 4C 8B A0 */
    c->pc = 0xA08Bu; c->cpu_cycles += 3u; return 1;
case 0x9FF7u: /* AND IMM 29 01 */
    c->pc = 0x9FF9u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0x9FF9u: /* BNE REL D0 3C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0x9FFBu ^ 0xA037u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA037u; }
    else { c->cpu_cycles += 2u; c->pc = 0x9FFBu; } return 1;
case 0x9FFBu: /* LDA ABS AD A7 05 */
    c->pc = 0x9FFEu;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0x9FFEu: /* AND IMM 29 07 */
    c->pc = 0xA000u;
    v = 0x07u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA000u: /* STA ZP 85 02 */
    c->pc = 0xA002u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA002u: /* LDX IMM A2 01 */
    c->pc = 0xA004u;
    v = 0x01u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA004u: /* STX ZP 86 01 */
    c->pc = 0xA006u;
    ea = 0x01u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA006u: /* LDA IMM A9 60 */
    c->pc = 0xA008u;
    v = 0x60u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA008u: /* JSR ABS 20 59 A3 */
    push(c, 0xA0u); push(c, 0x0Au); c->pc = 0xA359u; c->cpu_cycles += 6u; return 1;
case 0xA00Bu: /* LDX ZP A6 02 */
    c->pc = 0xA00Du;
    ea = 0x02u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA00Du: /* CLC IMP 18 */
    c->pc = 0xA00Eu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA00Eu: /* LDA ABS AD 61 04 */
    c->pc = 0xA011u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA011u: /* ADC ABX 7D E0 C1 */
    c->pc = 0xA014u;
    ea = (uint16_t)(0xC1E0u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xC1E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA014u: /* STA ABY 99 70 04 */
    c->pc = 0xA017u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA017u: /* LDA ABS AD 41 04 */
    c->pc = 0xA01Au;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA01Au: /* ADC ABX 7D E8 C1 */
    c->pc = 0xA01Du;
    ea = (uint16_t)(0xC1E8u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xC1E8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA01Du: /* STA ABY 99 50 04 */
    c->pc = 0xA020u;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA020u: /* CLC IMP 18 */
    c->pc = 0xA021u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA021u: /* LDA ABS AD A1 04 */
    c->pc = 0xA024u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA024u: /* ADC ABX 7D D8 C1 */
    c->pc = 0xA027u;
    ea = (uint16_t)(0xC1D8u + c->x);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xC1D8u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA027u: /* STA ABY 99 B0 04 */
    c->pc = 0xA02Au;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA02Au: /* LDA IMM A9 01 */
    c->pc = 0xA02Cu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA02Cu: /* STA ABY 99 B0 06 */
    c->pc = 0xA02Fu;
    ea = (uint16_t)(0x06B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA02Fu: /* INX IMP E8 */
    c->pc = 0xA030u;
    c->x = (uint8_t)(c->x + 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA030u: /* STX ZP 86 02 */
    c->pc = 0xA032u;
    ea = 0x02u;
    write8(c, ea, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA032u: /* LDX ZP A6 01 */
    c->pc = 0xA034u;
    ea = 0x01u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA034u: /* DEX IMP CA */
    c->pc = 0xA035u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA035u: /* BPL REL 10 CD */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA037u ^ 0xA004u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA004u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA037u; } return 1;
case 0xA037u: /* INC ABS EE A7 05 */
    c->pc = 0xA03Au;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA03Au: /* LDA ABS AD A7 05 */
    c->pc = 0xA03Du;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA03Du: /* CMP IMM C9 10 */
    c->pc = 0xA03Fu;
    v = 0x10u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA03Fu: /* BNE REL D0 49 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA041u ^ 0xA08Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA08Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA041u; } return 1;
case 0xA041u: /* LDX IMM A2 1B */
    c->pc = 0xA043u;
    v = 0x1Bu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA043u: /* LDA ABS AD 61 04 */
    c->pc = 0xA046u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA046u: /* STA ZP 85 08 */
    c->pc = 0xA048u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA048u: /* LDA ABS AD 41 04 */
    c->pc = 0xA04Bu;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA04Bu: /* STA ZP 85 09 */
    c->pc = 0xA04Du;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA04Du: /* LDA ABS AD A1 04 */
    c->pc = 0xA050u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA050u: /* STA ZP 85 0A */
    c->pc = 0xA052u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA052u: /* LDA IMM A9 60 */
    c->pc = 0xA054u;
    v = 0x60u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA054u: /* STA ZP 85 0B */
    c->pc = 0xA056u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA056u: /* JSR ABS 20 A8 C3 */
    push(c, 0xA0u); push(c, 0x58u); c->pc = 0xC3A8u; c->cpu_cycles += 6u; return 1;
case 0xA059u: /* LDA IMM A9 41 */
    c->pc = 0xA05Bu;
    v = 0x41u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA05Bu: /* JSR ABS 20 51 C0 */
    push(c, 0xA0u); push(c, 0x5Du); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA05Eu: /* LDA IMM A9 FF */
    c->pc = 0xA060u;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA060u: /* JSR ABS 20 51 C0 */
    push(c, 0xA0u); push(c, 0x62u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA063u: /* LDA ZP A5 2A */
    c->pc = 0xA065u;
    ea = 0x2Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA065u: /* CMP IMM C9 0C */
    c->pc = 0xA067u;
    v = 0x0Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA067u: /* BNE REL D0 21 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA069u ^ 0xA08Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA08Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA069u; } return 1;
case 0xA069u: /* LDA IMM A9 76 */
    c->pc = 0xA06Bu;
    v = 0x76u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA06Bu: /* LDX IMM A2 0E */
    c->pc = 0xA06Du;
    v = 0x0Eu;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA06Du: /* JSR ABS 20 59 A3 */
    push(c, 0xA0u); push(c, 0x6Fu); c->pc = 0xA359u; c->cpu_cycles += 6u; return 1;
case 0xA070u: /* LDA IMM A9 02 */
    c->pc = 0xA072u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA072u: /* STA ABS 8D 5E 06 */
    c->pc = 0xA075u;
    ea = 0x065Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA075u: /* LDA IMM A9 85 */
    c->pc = 0xA077u;
    v = 0x85u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA077u: /* STA ABS 8D 3E 04 */
    c->pc = 0xA07Au;
    ea = 0x043Eu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA07Au: /* INC ABS EE FE 04 */
    c->pc = 0xA07Du;
    ea = 0x04FEu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA07Du: /* LDA ZP A5 BC */
    c->pc = 0xA07Fu;
    ea = 0xBCu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA07Fu: /* CMP IMM C9 FF */
    c->pc = 0xA081u;
    v = 0xFFu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA081u: /* BEQ REL F0 07 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA083u ^ 0xA08Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA08Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA083u; } return 1;
case 0xA083u: /* LSR ABS 4E 21 04 */
    c->pc = 0xA086u;
    ea = 0x0421u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA086u: /* LDA IMM A9 00 */
    c->pc = 0xA088u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA088u: /* STA ZP 85 B1 */
    c->pc = 0xA08Au;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA08Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA08Bu: /* LSR ABS 4E 21 04 */
    c->pc = 0xA08Eu;
    ea = 0x0421u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA08Eu: /* LDA ABS AD A7 05 */
    c->pc = 0xA091u;
    ea = 0x05A7u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA091u: /* CMP IMM C9 FD */
    c->pc = 0xA093u;
    v = 0xFDu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA093u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA095u ^ 0xA099u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA099u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA095u; } return 1;
case 0xA095u: /* INC ABS EE A7 05 */
    c->pc = 0xA098u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA098u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA099u: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA09Bu ^ 0xA0A9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0A9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA09Bu; } return 1;
case 0xA09Bu: /* INC ABS EE A7 05 */
    c->pc = 0xA09Eu;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA09Eu: /* LDA IMM A9 FD */
    c->pc = 0xA0A0u;
    v = 0xFDu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0A0u: /* STA ABS 8D A9 05 */
    c->pc = 0xA0A3u;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0A3u: /* LDA IMM A9 15 */
    c->pc = 0xA0A5u;
    v = 0x15u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0A5u: /* JSR ABS 20 51 C0 */
    push(c, 0xA0u); push(c, 0xA7u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA0A8u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA0A9u: /* CMP IMM C9 FE */
    c->pc = 0xA0ABu;
    v = 0xFEu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0ABu: /* BNE REL D0 0D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0ADu ^ 0xA0BAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0BAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0ADu; } return 1;
case 0xA0ADu: /* DEC ABS CE A9 05 */
    c->pc = 0xA0B0u;
    ea = 0x05A9u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA0B0u: /* BNE REL D0 4D */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0B2u ^ 0xA0FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0B2u; } return 1;
case 0xA0B2u: /* INC ABS EE A7 05 */
    c->pc = 0xA0B5u;
    ea = 0x05A7u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA0B5u: /* LDA IMM A9 D0 */
    c->pc = 0xA0B7u;
    v = 0xD0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0B7u: /* STA ABS 8D A9 05 */
    c->pc = 0xA0BAu;
    ea = 0x05A9u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0BAu: /* LDA ABS AD A9 05 */
    c->pc = 0xA0BDu;
    ea = 0x05A9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0BDu: /* CMP IMM C9 40 */
    c->pc = 0xA0BFu;
    v = 0x40u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0BFu: /* BCC REL 90 1B */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA0C1u ^ 0xA0DCu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0DCu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0C1u; } return 1;
case 0xA0C1u: /* BNE REL D0 33 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0C3u ^ 0xA0F6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0F6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0C3u; } return 1;
case 0xA0C3u: /* DEC ABS CE A9 05 */
    c->pc = 0xA0C6u;
    ea = 0x05A9u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA0C6u: /* LDA IMM A9 26 */
    c->pc = 0xA0C8u;
    v = 0x26u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0C8u: /* STA ABS 8D 00 04 */
    c->pc = 0xA0CBu;
    ea = 0x0400u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0CBu: /* LDA IMM A9 00 */
    c->pc = 0xA0CDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0CDu: /* STA ABS 8D A0 06 */
    c->pc = 0xA0D0u;
    ea = 0x06A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0D0u: /* STA ABS 8D 80 06 */
    c->pc = 0xA0D3u;
    ea = 0x0680u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0D3u: /* LDA IMM A9 0B */
    c->pc = 0xA0D5u;
    v = 0x0Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0D5u: /* STA ZP 85 2C */
    c->pc = 0xA0D7u;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0D7u: /* LDA IMM A9 3A */
    c->pc = 0xA0D9u;
    v = 0x3Au;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0D9u: /* JSR ABS 20 51 C0 */
    push(c, 0xA0u); push(c, 0xDBu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA0DCu: /* LDA ABS AD A0 06 */
    c->pc = 0xA0DFu;
    ea = 0x06A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0DFu: /* CMP IMM C9 03 */
    c->pc = 0xA0E1u;
    v = 0x03u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0E1u: /* BNE REL D0 1C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0E3u ^ 0xA0FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0E3u; } return 1;
case 0xA0E3u: /* LDA ABS AD 20 04 */
    c->pc = 0xA0E6u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0E6u: /* BPL REL 10 0E */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA0E8u ^ 0xA0F6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0F6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0E8u; } return 1;
case 0xA0E8u: /* SEC IMP 38 */
    c->pc = 0xA0E9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA0E9u: /* LDA ABS AD A0 04 */
    c->pc = 0xA0ECu;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0ECu: /* SBC IMM E9 08 */
    c->pc = 0xA0EEu;
    v = 0x08u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA0EEu: /* STA ABS 8D A0 04 */
    c->pc = 0xA0F1u;
    ea = 0x04A0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA0F1u: /* BCS REL B0 0C */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA0F3u ^ 0xA0FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0F3u; } return 1;
case 0xA0F3u: /* LSR ABS 4E 20 04 */
    c->pc = 0xA0F6u;
    ea = 0x0420u; v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA0F6u: /* DEC ABS CE A9 05 */
    c->pc = 0xA0F9u;
    ea = 0x05A9u; v = read8(c, ea);
    v = (uint8_t)(v - 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA0F9u: /* BNE REL D0 04 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA0FBu ^ 0xA0FFu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA0FFu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA0FBu; } return 1;
case 0xA0FBu: /* LDA IMM A9 FF */
    c->pc = 0xA0FDu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA0FDu: /* STA ZP 85 B1 */
    c->pc = 0xA0FFu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA0FFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA10Cu: /* STA ABS 8D 01 04 */
    c->pc = 0xA10Fu;
    ea = 0x0401u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA10Fu: /* LDA IMM A9 00 */
    c->pc = 0xA111u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA111u: /* STA ABS 8D 81 06 */
    c->pc = 0xA114u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA114u: /* STA ABS 8D A1 06 */
    c->pc = 0xA117u;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA117u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA118u: /* LDA ZP A5 1C */
    c->pc = 0xA11Au;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA11Au: /* AND IMM 29 03 */
    c->pc = 0xA11Cu;
    v = 0x03u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA11Cu: /* BNE REL D0 0F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA11Eu ^ 0xA12Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA12Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA11Eu; } return 1;
case 0xA11Eu: /* LDA ABS AD C1 06 */
    c->pc = 0xA121u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA121u: /* CMP IMM C9 1C */
    c->pc = 0xA123u;
    v = 0x1Cu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA123u: /* BEQ REL F0 08 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA125u ^ 0xA12Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA12Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA125u; } return 1;
case 0xA125u: /* INC ABS EE C1 06 */
    c->pc = 0xA128u;
    ea = 0x06C1u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA128u: /* LDA IMM A9 28 */
    c->pc = 0xA12Au;
    v = 0x28u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA12Au: /* JSR ABS 20 51 C0 */
    push(c, 0xA1u); push(c, 0x2Cu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA12Du: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA12Eu: /* LDA ABS AD 21 04 */
    c->pc = 0xA131u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA131u: /* EOR IMM 49 40 */
    c->pc = 0xA133u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA133u: /* STA ABS 8D 21 04 */
    c->pc = 0xA136u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA136u: /* JSR ABS 20 D4 A2 */
    push(c, 0xA1u); push(c, 0x38u); c->pc = 0xA2D4u; c->cpu_cycles += 6u; return 1;
case 0xA139u: /* LDA ABS AD 21 04 */
    c->pc = 0xA13Cu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA13Cu: /* STA ZP 85 03 */
    c->pc = 0xA13Eu;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA13Eu: /* EOR IMM 49 40 */
    c->pc = 0xA140u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA140u: /* STA ABS 8D 21 04 */
    c->pc = 0xA143u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA143u: /* JMP ABS 4C 54 A1 */
    c->pc = 0xA154u; c->cpu_cycles += 3u; return 1;
case 0xA146u: /* JSR ABS 20 9D A5 */
    push(c, 0xA1u); push(c, 0x48u); c->pc = 0xA59Du; c->cpu_cycles += 6u; return 1;
case 0xA149u: /* BCC REL 90 04 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA14Bu ^ 0xA14Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA14Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA14Bu; } return 1;
case 0xA14Bu: /* INC ABS EE AA 05 */
    c->pc = 0xA14Eu;
    ea = 0x05AAu; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 6u; return 1;
case 0xA14Eu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA14Fu: /* LDA ABS AD 21 04 */
    c->pc = 0xA152u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA152u: /* STA ZP 85 03 */
    c->pc = 0xA154u;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA154u: /* JSR ABS 20 2D A5 */
    push(c, 0xA1u); push(c, 0x56u); c->pc = 0xA52Du; c->cpu_cycles += 6u; return 1;
case 0xA157u: /* SEC IMP 38 */
    c->pc = 0xA158u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA158u: /* LDA ABS AD C1 04 */
    c->pc = 0xA15Bu;
    ea = 0x04C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA15Bu: /* SBC ABS ED 61 06 */
    c->pc = 0xA15Eu;
    ea = 0x0661u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA15Eu: /* STA ABS 8D C1 04 */
    c->pc = 0xA161u;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA161u: /* LDA ABS AD A1 04 */
    c->pc = 0xA164u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA164u: /* SBC ABS ED 41 06 */
    c->pc = 0xA167u;
    ea = 0x0641u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA167u: /* STA ABS 8D A1 04 */
    c->pc = 0xA16Au;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA16Au: /* CMP IMM C9 F0 */
    c->pc = 0xA16Cu;
    v = 0xF0u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA16Cu: /* BCC REL 90 05 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA16Eu ^ 0xA173u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA173u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA16Eu; } return 1;
case 0xA16Eu: /* LDA IMM A9 F0 */
    c->pc = 0xA170u;
    v = 0xF0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA170u: /* STA ABS 8D A1 04 */
    c->pc = 0xA173u;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA173u: /* LDA ABS AD 21 04 */
    c->pc = 0xA176u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA176u: /* AND IMM 29 04 */
    c->pc = 0xA178u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA178u: /* BEQ REL F0 11 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA17Au ^ 0xA18Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA18Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA17Au; } return 1;
case 0xA17Au: /* CLC IMP 18 */
    c->pc = 0xA17Bu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA17Bu: /* LDA ABS AD 61 06 */
    c->pc = 0xA17Eu;
    ea = 0x0661u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA17Eu: /* SBC ZP E5 30 */
    c->pc = 0xA180u;
    ea = 0x30u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA180u: /* STA ABS 8D 61 06 */
    c->pc = 0xA183u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA183u: /* LDA ABS AD 41 06 */
    c->pc = 0xA186u;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA186u: /* SBC ZP E5 31 */
    c->pc = 0xA188u;
    ea = 0x31u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA188u: /* STA ABS 8D 41 06 */
    c->pc = 0xA18Bu;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA18Bu: /* LDA ZP A5 03 */
    c->pc = 0xA18Du;
    ea = 0x03u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA18Du: /* AND IMM 29 40 */
    c->pc = 0xA18Fu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA18Fu: /* BNE REL D0 3C */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA191u ^ 0xA1CDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1CDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA191u; } return 1;
case 0xA191u: /* SEC IMP 38 */
    c->pc = 0xA192u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA192u: /* LDA ABS AD 81 04 */
    c->pc = 0xA195u;
    ea = 0x0481u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA195u: /* SBC ABS ED 21 06 */
    c->pc = 0xA198u;
    ea = 0x0621u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA198u: /* STA ABS 8D 81 04 */
    c->pc = 0xA19Bu;
    ea = 0x0481u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA19Bu: /* LDA ABS AD 61 04 */
    c->pc = 0xA19Eu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA19Eu: /* SBC ABS ED 01 06 */
    c->pc = 0xA1A1u;
    ea = 0x0601u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA1A1u: /* STA ABS 8D 61 04 */
    c->pc = 0xA1A4u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1A4u: /* LDA ABS AD 41 04 */
    c->pc = 0xA1A7u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1A7u: /* SBC IMM E9 00 */
    c->pc = 0xA1A9u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1A9u: /* STA ABS 8D 41 04 */
    c->pc = 0xA1ACu;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1ACu: /* SEC IMP 38 */
    c->pc = 0xA1ADu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1ADu: /* LDA ABS AD 61 04 */
    c->pc = 0xA1B0u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1B0u: /* SBC ZP E5 1F */
    c->pc = 0xA1B2u;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA1B2u: /* STA ZP 85 08 */
    c->pc = 0xA1B4u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1B4u: /* LDA ABS AD 41 04 */
    c->pc = 0xA1B7u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1B7u: /* SBC ZP E5 20 */
    c->pc = 0xA1B9u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA1B9u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1BBu ^ 0xA1C1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1C1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1BBu; } return 1;
case 0xA1BBu: /* LDA ZP A5 08 */
    c->pc = 0xA1BDu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1BDu: /* CMP IMM C9 08 */
    c->pc = 0xA1BFu;
    v = 0x08u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1BFu: /* BCS REL B0 46 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA1C1u ^ 0xA207u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA207u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1C1u; } return 1;
case 0xA1C1u: /* LDA ZP A5 20 */
    c->pc = 0xA1C3u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1C3u: /* STA ABS 8D 40 04 */
    c->pc = 0xA1C6u;
    ea = 0x0440u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1C6u: /* LDA IMM A9 08 */
    c->pc = 0xA1C8u;
    v = 0x08u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA1C8u: /* STA ABS 8D 61 04 */
    c->pc = 0xA1CBu;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1CBu: /* BNE REL D0 3A */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1CDu ^ 0xA207u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA207u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1CDu; } return 1;
case 0xA1CDu: /* CLC IMP 18 */
    c->pc = 0xA1CEu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1CEu: /* LDA ABS AD 81 04 */
    c->pc = 0xA1D1u;
    ea = 0x0481u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1D1u: /* ADC ABS 6D 21 06 */
    c->pc = 0xA1D4u;
    ea = 0x0621u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA1D4u: /* STA ABS 8D 81 04 */
    c->pc = 0xA1D7u;
    ea = 0x0481u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1D7u: /* LDA ABS AD 61 04 */
    c->pc = 0xA1DAu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1DAu: /* ADC ABS 6D 01 06 */
    c->pc = 0xA1DDu;
    ea = 0x0601u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA1DDu: /* STA ABS 8D 61 04 */
    c->pc = 0xA1E0u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1E0u: /* LDA ABS AD 41 04 */
    c->pc = 0xA1E3u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1E3u: /* ADC IMM 69 00 */
    c->pc = 0xA1E5u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1E5u: /* STA ABS 8D 41 04 */
    c->pc = 0xA1E8u;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1E8u: /* SEC IMP 38 */
    c->pc = 0xA1E9u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA1E9u: /* LDA ABS AD 61 04 */
    c->pc = 0xA1ECu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1ECu: /* SBC ZP E5 1F */
    c->pc = 0xA1EEu;
    ea = 0x1Fu;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA1EEu: /* STA ZP 85 08 */
    c->pc = 0xA1F0u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1F0u: /* LDA ABS AD 41 04 */
    c->pc = 0xA1F3u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA1F3u: /* SBC ZP E5 20 */
    c->pc = 0xA1F5u;
    ea = 0x20u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA1F5u: /* BNE REL D0 06 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA1F7u ^ 0xA1FDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA1FDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1F7u; } return 1;
case 0xA1F7u: /* LDA ZP A5 08 */
    c->pc = 0xA1F9u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1F9u: /* CMP IMM C9 F8 */
    c->pc = 0xA1FBu;
    v = 0xF8u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA1FBu: /* BCC REL 90 0A */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA1FDu ^ 0xA207u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA207u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA1FDu; } return 1;
case 0xA1FDu: /* LDA ZP A5 20 */
    c->pc = 0xA1FFu;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA1FFu: /* STA ABS 8D 41 04 */
    c->pc = 0xA202u;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA202u: /* LDA IMM A9 F8 */
    c->pc = 0xA204u;
    v = 0xF8u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA204u: /* STA ABS 8D 61 04 */
    c->pc = 0xA207u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA207u: /* CLC IMP 18 */
    c->pc = 0xA208u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA208u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA209u: /* LDA ABS AD 21 04 */
    c->pc = 0xA20Cu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA20Cu: /* AND IMM 29 BF */
    c->pc = 0xA20Eu;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA20Eu: /* STA ABS 8D 21 04 */
    c->pc = 0xA211u;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA211u: /* SEC IMP 38 */
    c->pc = 0xA212u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA212u: /* LDA ABS AD 61 04 */
    c->pc = 0xA215u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA215u: /* SBC ABS ED 60 04 */
    c->pc = 0xA218u;
    ea = 0x0460u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA218u: /* STA ZP 85 00 */
    c->pc = 0xA21Au;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA21Au: /* BCS REL B0 10 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA21Cu ^ 0xA22Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA22Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA21Cu; } return 1;
case 0xA21Cu: /* LDA ZP A5 00 */
    c->pc = 0xA21Eu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA21Eu: /* EOR IMM 49 FF */
    c->pc = 0xA220u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA220u: /* ADC IMM 69 01 */
    c->pc = 0xA222u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA222u: /* STA ZP 85 00 */
    c->pc = 0xA224u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA224u: /* LDA IMM A9 40 */
    c->pc = 0xA226u;
    v = 0x40u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA226u: /* ORA ABS 0D 21 04 */
    c->pc = 0xA229u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA229u: /* STA ABS 8D 21 04 */
    c->pc = 0xA22Cu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA22Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA22Du: /* STA ZP 85 00 */
    c->pc = 0xA22Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA22Fu: /* LDY IMM A0 0F */
    c->pc = 0xA231u;
    v = 0x0Fu;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA231u: /* LDA ZP A5 00 */
    c->pc = 0xA233u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA233u: /* CMP ABY D9 10 04 */
    c->pc = 0xA236u;
    ea = (uint16_t)(0x0410u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0x0410u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA236u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA238u ^ 0xA23Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA23Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA238u; } return 1;
case 0xA238u: /* DEY IMP 88 */
    c->pc = 0xA239u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA239u: /* BPL REL 10 F8 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA23Bu ^ 0xA233u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA233u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA23Bu; } return 1;
case 0xA23Bu: /* SEC IMP 38 */
    c->pc = 0xA23Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA23Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA23Du: /* LDA ABY B9 30 04 */
    c->pc = 0xA240u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA240u: /* BMI REL 30 05 */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xA242u ^ 0xA247u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA247u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA242u; } return 1;
case 0xA242u: /* DEY IMP 88 */
    c->pc = 0xA243u;
    c->y = (uint8_t)(c->y - 1u); set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA243u: /* BPL REL 10 EC */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA245u ^ 0xA231u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA231u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA245u; } return 1;
case 0xA245u: /* SEC IMP 38 */
    c->pc = 0xA246u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA246u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA247u: /* CLC IMP 18 */
    c->pc = 0xA248u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA248u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA249u: /* LDA IMM A9 00 */
    c->pc = 0xA24Bu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA24Bu: /* STA ZP 85 0B */
    c->pc = 0xA24Du;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA24Du: /* LDA ABS AD 41 06 */
    c->pc = 0xA250u;
    ea = 0x0641u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA250u: /* PHP IMP 08 */
    c->pc = 0xA251u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xA251u: /* BPL REL 10 09 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA253u ^ 0xA25Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA25Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA253u; } return 1;
case 0xA253u: /* CLC IMP 18 */
    c->pc = 0xA254u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA254u: /* LDA ABS AD A1 04 */
    c->pc = 0xA257u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA257u: /* ADC ZP 65 02 */
    c->pc = 0xA259u;
    ea = 0x02u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA259u: /* JMP ABS 4C 62 A2 */
    c->pc = 0xA262u; c->cpu_cycles += 3u; return 1;
case 0xA25Cu: /* SEC IMP 38 */
    c->pc = 0xA25Du;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA25Du: /* LDA ABS AD A1 04 */
    c->pc = 0xA260u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA260u: /* SBC ZP E5 02 */
    c->pc = 0xA262u;
    ea = 0x02u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA262u: /* STA ZP 85 0A */
    c->pc = 0xA264u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA264u: /* CLC IMP 18 */
    c->pc = 0xA265u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA265u: /* LDA ABS AD 61 04 */
    c->pc = 0xA268u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA268u: /* ADC ZP 65 01 */
    c->pc = 0xA26Au;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA26Au: /* STA ZP 85 08 */
    c->pc = 0xA26Cu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA26Cu: /* LDA ABS AD 41 04 */
    c->pc = 0xA26Fu;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA26Fu: /* ADC IMM 69 00 */
    c->pc = 0xA271u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA271u: /* STA ZP 85 09 */
    c->pc = 0xA273u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA273u: /* JSR ABS 20 63 CC */
    push(c, 0xA2u); push(c, 0x75u); c->pc = 0xCC63u; c->cpu_cycles += 6u; return 1;
case 0xA276u: /* LDY ZP A4 00 */
    c->pc = 0xA278u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA278u: /* LDA ABY B9 49 A3 */
    c->pc = 0xA27Bu;
    ea = (uint16_t)(0xA349u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA349u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA27Bu: /* STA ZP 85 02 */
    c->pc = 0xA27Du;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA27Du: /* SEC IMP 38 */
    c->pc = 0xA27Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA27Eu: /* LDA ABS AD 61 04 */
    c->pc = 0xA281u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA281u: /* SBC ZP E5 01 */
    c->pc = 0xA283u;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA283u: /* STA ZP 85 08 */
    c->pc = 0xA285u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA285u: /* LDA ABS AD 41 04 */
    c->pc = 0xA288u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA288u: /* SBC IMM E9 00 */
    c->pc = 0xA28Au;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA28Au: /* STA ZP 85 09 */
    c->pc = 0xA28Cu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA28Cu: /* JSR ABS 20 63 CC */
    push(c, 0xA2u); push(c, 0x8Eu); c->pc = 0xCC63u; c->cpu_cycles += 6u; return 1;
case 0xA28Fu: /* LDY ZP A4 00 */
    c->pc = 0xA291u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA291u: /* LDA ABY B9 49 A3 */
    c->pc = 0xA294u;
    ea = (uint16_t)(0xA349u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA349u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA294u: /* ORA ZP 05 02 */
    c->pc = 0xA296u;
    ea = 0x02u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA296u: /* STA ZP 85 00 */
    c->pc = 0xA298u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA298u: /* BEQ REL F0 38 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA29Au ^ 0xA2D2u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2D2u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA29Au; } return 1;
case 0xA29Au: /* PLP IMP 28 */
    c->pc = 0xA29Bu;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA29Bu: /* BMI REL 30 0D */
    if ((c->p & MM2_FLAG_N) != 0u) { c->cpu_cycles += 3u + ((((0xA29Du ^ 0xA2AAu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2AAu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA29Du; } return 1;
case 0xA29Du: /* LDA ZP A5 0A */
    c->pc = 0xA29Fu;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA29Fu: /* AND IMM 29 0F */
    c->pc = 0xA2A1u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2A1u: /* EOR IMM 49 0F */
    c->pc = 0xA2A3u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2A3u: /* SEC IMP 38 */
    c->pc = 0xA2A4u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA2A4u: /* ADC ABS 6D A1 04 */
    c->pc = 0xA2A7u;
    ea = 0x04A1u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA2A7u: /* JMP ABS 4C B8 A2 */
    c->pc = 0xA2B8u; c->cpu_cycles += 3u; return 1;
case 0xA2AAu: /* LDA ABS AD A1 04 */
    c->pc = 0xA2ADu;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2ADu: /* PHA IMP 48 */
    c->pc = 0xA2AEu;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2AEu: /* LDA ZP A5 0A */
    c->pc = 0xA2B0u;
    ea = 0x0Au;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2B0u: /* AND IMM 29 0F */
    c->pc = 0xA2B2u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2B2u: /* STA ZP 85 02 */
    c->pc = 0xA2B4u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2B4u: /* PLA IMP 68 */
    c->pc = 0xA2B5u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2B5u: /* SEC IMP 38 */
    c->pc = 0xA2B6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA2B6u: /* SBC ZP E5 02 */
    c->pc = 0xA2B8u;
    ea = 0x02u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA2B8u: /* STA ABS 8D A1 04 */
    c->pc = 0xA2BBu;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2BBu: /* LDA IMM A9 00 */
    c->pc = 0xA2BDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2BDu: /* STA ABS 8D C1 04 */
    c->pc = 0xA2C0u;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2C0u: /* LDA ABS AD 21 04 */
    c->pc = 0xA2C3u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2C3u: /* AND IMM 29 04 */
    c->pc = 0xA2C5u;
    v = 0x04u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2C5u: /* BEQ REL F0 0A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA2C7u ^ 0xA2D1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2D1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA2C7u; } return 1;
case 0xA2C7u: /* LDA IMM A9 C0 */
    c->pc = 0xA2C9u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2C9u: /* STA ABS 8D 61 06 */
    c->pc = 0xA2CCu;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2CCu: /* LDA IMM A9 FF */
    c->pc = 0xA2CEu;
    v = 0xFFu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2CEu: /* STA ABS 8D 41 06 */
    c->pc = 0xA2D1u;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2D1u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA2D2u: /* PLP IMP 28 */
    c->pc = 0xA2D3u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA2D3u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA2D4u: /* LDA ABS AD A1 04 */
    c->pc = 0xA2D7u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2D7u: /* STA ZP 85 0A */
    c->pc = 0xA2D9u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2D9u: /* LDA IMM A9 00 */
    c->pc = 0xA2DBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2DBu: /* STA ZP 85 0B */
    c->pc = 0xA2DDu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2DDu: /* LDA ABS AD 21 04 */
    c->pc = 0xA2E0u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2E0u: /* AND IMM 29 40 */
    c->pc = 0xA2E2u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA2E2u: /* PHP IMP 08 */
    c->pc = 0xA2E3u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xA2E3u: /* BEQ REL F0 10 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA2E5u ^ 0xA2F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA2F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA2E5u; } return 1;
case 0xA2E5u: /* SEC IMP 38 */
    c->pc = 0xA2E6u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA2E6u: /* LDA ABS AD 61 04 */
    c->pc = 0xA2E9u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2E9u: /* ADC ZP 65 01 */
    c->pc = 0xA2EBu;
    ea = 0x01u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA2EBu: /* STA ZP 85 08 */
    c->pc = 0xA2EDu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2EDu: /* LDA ABS AD 41 04 */
    c->pc = 0xA2F0u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2F0u: /* ADC IMM 69 00 */
    c->pc = 0xA2F2u;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA2F2u: /* JMP ABS 4C 02 A3 */
    c->pc = 0xA302u; c->cpu_cycles += 3u; return 1;
case 0xA2F5u: /* CLC IMP 18 */
    c->pc = 0xA2F6u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA2F6u: /* LDA ABS AD 61 04 */
    c->pc = 0xA2F9u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA2F9u: /* SBC ZP E5 01 */
    c->pc = 0xA2FBu;
    ea = 0x01u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA2FBu: /* STA ZP 85 08 */
    c->pc = 0xA2FDu;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA2FDu: /* LDA ABS AD 41 04 */
    c->pc = 0xA300u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA300u: /* SBC IMM E9 00 */
    c->pc = 0xA302u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA302u: /* STA ZP 85 09 */
    c->pc = 0xA304u;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA304u: /* JSR ABS 20 63 CC */
    push(c, 0xA3u); push(c, 0x06u); c->pc = 0xCC63u; c->cpu_cycles += 6u; return 1;
case 0xA307u: /* LDY ZP A4 00 */
    c->pc = 0xA309u;
    ea = 0x00u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA309u: /* LDA ABY B9 49 A3 */
    c->pc = 0xA30Cu;
    ea = (uint16_t)(0xA349u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA349u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA30Cu: /* STA ZP 85 03 */
    c->pc = 0xA30Eu;
    ea = 0x03u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA30Eu: /* BEQ REL F0 35 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA310u ^ 0xA345u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA345u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA310u; } return 1;
case 0xA310u: /* PLP IMP 28 */
    c->pc = 0xA311u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA311u: /* BEQ REL F0 1A */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA313u ^ 0xA32Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA32Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA313u; } return 1;
case 0xA313u: /* LDA ZP A5 08 */
    c->pc = 0xA315u;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA315u: /* AND IMM 29 0F */
    c->pc = 0xA317u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA317u: /* STA ZP 85 00 */
    c->pc = 0xA319u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA319u: /* SEC IMP 38 */
    c->pc = 0xA31Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA31Au: /* LDA ABS AD 61 04 */
    c->pc = 0xA31Du;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA31Du: /* SBC ZP E5 00 */
    c->pc = 0xA31Fu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA31Fu: /* STA ABS 8D 61 04 */
    c->pc = 0xA322u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA322u: /* LDA ABS AD 41 04 */
    c->pc = 0xA325u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA325u: /* SBC IMM E9 00 */
    c->pc = 0xA327u;
    v = 0x00u;
    sbc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA327u: /* STA ABS 8D 41 04 */
    c->pc = 0xA32Au;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA32Au: /* JMP ABS 4C 49 A2 */
    c->pc = 0xA249u; c->cpu_cycles += 3u; return 1;
case 0xA32Du: /* LDA ZP A5 08 */
    c->pc = 0xA32Fu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA32Fu: /* AND IMM 29 0F */
    c->pc = 0xA331u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA331u: /* EOR IMM 49 0F */
    c->pc = 0xA333u;
    v = 0x0Fu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA333u: /* SEC IMP 38 */
    c->pc = 0xA334u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA334u: /* ADC ABS 6D 61 04 */
    c->pc = 0xA337u;
    ea = 0x0461u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA337u: /* STA ABS 8D 61 04 */
    c->pc = 0xA33Au;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA33Au: /* LDA ABS AD 41 04 */
    c->pc = 0xA33Du;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA33Du: /* ADC IMM 69 00 */
    c->pc = 0xA33Fu;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA33Fu: /* STA ABS 8D 41 04 */
    c->pc = 0xA342u;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA342u: /* JMP ABS 4C 49 A2 */
    c->pc = 0xA249u; c->cpu_cycles += 3u; return 1;
case 0xA345u: /* PLP IMP 28 */
    c->pc = 0xA346u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA346u: /* JMP ABS 4C 49 A2 */
    c->pc = 0xA249u; c->cpu_cycles += 3u; return 1;
case 0xA352u: /* PHA IMP 48 */
    c->pc = 0xA353u;
    push(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA353u: /* JSR ABS 20 43 DA */
    push(c, 0xA3u); push(c, 0x55u); c->pc = 0xDA43u; c->cpu_cycles += 6u; return 1;
case 0xA356u: /* BCS REL B0 31 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA358u ^ 0xA389u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA389u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA358u; } return 1;
case 0xA358u: /* PLA IMP 68 */
    c->pc = 0xA359u;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA359u: /* JSR ABS 20 7C D7 */
    push(c, 0xA3u); push(c, 0x5Bu); c->pc = 0xD77Cu; c->cpu_cycles += 6u; return 1;
case 0xA35Cu: /* TXA IMP 8A */
    c->pc = 0xA35Du;
    c->a = c->x; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA35Du: /* TAY IMP A8 */
    c->pc = 0xA35Eu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA35Eu: /* LDA ABS AD 21 04 */
    c->pc = 0xA361u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA361u: /* AND IMM 29 40 */
    c->pc = 0xA363u;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA363u: /* ORA ABY 19 30 04 */
    c->pc = 0xA366u;
    ea = (uint16_t)(0x0430u + c->y);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0430u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA366u: /* STA ABY 99 30 04 */
    c->pc = 0xA369u;
    ea = (uint16_t)(0x0430u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA369u: /* LDA ABS AD 81 04 */
    c->pc = 0xA36Cu;
    ea = 0x0481u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA36Cu: /* STA ABY 99 90 04 */
    c->pc = 0xA36Fu;
    ea = (uint16_t)(0x0490u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA36Fu: /* LDA ABS AD 61 04 */
    c->pc = 0xA372u;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA372u: /* STA ABY 99 70 04 */
    c->pc = 0xA375u;
    ea = (uint16_t)(0x0470u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA375u: /* LDA ABS AD 41 04 */
    c->pc = 0xA378u;
    ea = 0x0441u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA378u: /* STA ABY 99 50 04 */
    c->pc = 0xA37Bu;
    ea = (uint16_t)(0x0450u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA37Bu: /* LDA ABS AD C1 04 */
    c->pc = 0xA37Eu;
    ea = 0x04C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA37Eu: /* STA ABY 99 D0 04 */
    c->pc = 0xA381u;
    ea = (uint16_t)(0x04D0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA381u: /* LDA ABS AD A1 04 */
    c->pc = 0xA384u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA384u: /* STA ABY 99 B0 04 */
    c->pc = 0xA387u;
    ea = (uint16_t)(0x04B0u + c->y);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA387u: /* CLC IMP 18 */
    c->pc = 0xA388u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA388u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA389u: /* PLA IMP 68 */
    c->pc = 0xA38Au;
    c->a = pull(c); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA38Au: /* SEC IMP 38 */
    c->pc = 0xA38Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA38Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA38Cu: /* LDY IMM A0 40 */
    c->pc = 0xA38Eu;
    v = 0x40u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA38Eu: /* SEC IMP 38 */
    c->pc = 0xA38Fu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA38Fu: /* LDA ABS AD 60 04 */
    c->pc = 0xA392u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA392u: /* SBC ABX FD 60 04 */
    c->pc = 0xA395u;
    ea = (uint16_t)(0x0460u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x0460u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA395u: /* STA ZP 85 00 */
    c->pc = 0xA397u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA397u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA399u ^ 0xA3A3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3A3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA399u; } return 1;
case 0xA399u: /* LDA ZP A5 00 */
    c->pc = 0xA39Bu;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA39Bu: /* EOR IMM 49 FF */
    c->pc = 0xA39Du;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA39Du: /* ADC IMM 69 01 */
    c->pc = 0xA39Fu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA39Fu: /* LDY IMM A0 00 */
    c->pc = 0xA3A1u;
    v = 0x00u;
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA3A1u: /* STA ZP 85 00 */
    c->pc = 0xA3A3u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3A3u: /* LDA ABX BD 20 04 */
    c->pc = 0xA3A6u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3A6u: /* AND IMM 29 BF */
    c->pc = 0xA3A8u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3A8u: /* STA ABX 9D 20 04 */
    c->pc = 0xA3ABu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3ABu: /* TYA IMP 98 */
    c->pc = 0xA3ACu;
    c->a = c->y; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3ACu: /* ORA ABX 1D 20 04 */
    c->pc = 0xA3AFu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3AFu: /* STA ABX 9D 20 04 */
    c->pc = 0xA3B2u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3B2u: /* SEC IMP 38 */
    c->pc = 0xA3B3u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA3B3u: /* LDA ABS AD A0 04 */
    c->pc = 0xA3B6u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA3B6u: /* SBC ABX FD A0 04 */
    c->pc = 0xA3B9u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA3B9u: /* PHP IMP 08 */
    c->pc = 0xA3BAu;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xA3BAu: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA3BCu ^ 0xA3C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA3C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3BCu; } return 1;
case 0xA3BCu: /* EOR IMM 49 FF */
    c->pc = 0xA3BEu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3BEu: /* ADC IMM 69 01 */
    c->pc = 0xA3C0u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA3C0u: /* STA ZP 85 01 */
    c->pc = 0xA3C2u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3C2u: /* CMP ZP C5 00 */
    c->pc = 0xA3C4u;
    ea = 0x00u;
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 3u; return 1;
case 0xA3C4u: /* BCS REL B0 3B */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA3C6u ^ 0xA401u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA401u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA3C6u; } return 1;
case 0xA3C6u: /* LDA ZP A5 09 */
    c->pc = 0xA3C8u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3C8u: /* STA ZP 85 0D */
    c->pc = 0xA3CAu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3CAu: /* STA ABX 9D 00 06 */
    c->pc = 0xA3CDu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3CDu: /* LDA ZP A5 08 */
    c->pc = 0xA3CFu;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3CFu: /* STA ZP 85 0C */
    c->pc = 0xA3D1u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3D1u: /* STA ABX 9D 20 06 */
    c->pc = 0xA3D4u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3D4u: /* LDA ZP A5 00 */
    c->pc = 0xA3D6u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3D6u: /* STA ZP 85 0B */
    c->pc = 0xA3D8u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3D8u: /* LDA IMM A9 00 */
    c->pc = 0xA3DAu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3DAu: /* STA ZP 85 0A */
    c->pc = 0xA3DCu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3DCu: /* JSR ABS 20 74 C8 */
    push(c, 0xA3u); push(c, 0xDEu); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xA3DFu: /* LDA ZP A5 0F */
    c->pc = 0xA3E1u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E1u: /* STA ZP 85 0D */
    c->pc = 0xA3E3u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E3u: /* LDA ZP A5 0E */
    c->pc = 0xA3E5u;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E5u: /* STA ZP 85 0C */
    c->pc = 0xA3E7u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E7u: /* LDA ZP A5 01 */
    c->pc = 0xA3E9u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3E9u: /* STA ZP 85 0B */
    c->pc = 0xA3EBu;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3EBu: /* LDA IMM A9 00 */
    c->pc = 0xA3EDu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA3EDu: /* STA ZP 85 0A */
    c->pc = 0xA3EFu;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3EFu: /* JSR ABS 20 74 C8 */
    push(c, 0xA3u); push(c, 0xF1u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xA3F2u: /* LDX ZP A6 2B */
    c->pc = 0xA3F4u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA3F4u: /* LDA ZP A5 0F */
    c->pc = 0xA3F6u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3F6u: /* STA ABX 9D 40 06 */
    c->pc = 0xA3F9u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3F9u: /* LDA ZP A5 0E */
    c->pc = 0xA3FBu;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA3FBu: /* STA ABX 9D 60 06 */
    c->pc = 0xA3FEu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA3FEu: /* JMP ABS 4C 39 A4 */
    c->pc = 0xA439u; c->cpu_cycles += 3u; return 1;
case 0xA401u: /* LDA ZP A5 09 */
    c->pc = 0xA403u;
    ea = 0x09u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA403u: /* STA ZP 85 0D */
    c->pc = 0xA405u;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA405u: /* STA ABX 9D 40 06 */
    c->pc = 0xA408u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA408u: /* LDA ZP A5 08 */
    c->pc = 0xA40Au;
    ea = 0x08u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA40Au: /* STA ZP 85 0C */
    c->pc = 0xA40Cu;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA40Cu: /* STA ABX 9D 60 06 */
    c->pc = 0xA40Fu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA40Fu: /* LDA ZP A5 01 */
    c->pc = 0xA411u;
    ea = 0x01u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA411u: /* STA ZP 85 0B */
    c->pc = 0xA413u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA413u: /* LDA IMM A9 00 */
    c->pc = 0xA415u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA415u: /* STA ZP 85 0A */
    c->pc = 0xA417u;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA417u: /* JSR ABS 20 74 C8 */
    push(c, 0xA4u); push(c, 0x19u); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xA41Au: /* LDA ZP A5 0F */
    c->pc = 0xA41Cu;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA41Cu: /* STA ZP 85 0D */
    c->pc = 0xA41Eu;
    ea = 0x0Du;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA41Eu: /* LDA ZP A5 0E */
    c->pc = 0xA420u;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA420u: /* STA ZP 85 0C */
    c->pc = 0xA422u;
    ea = 0x0Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA422u: /* LDA ZP A5 00 */
    c->pc = 0xA424u;
    ea = 0x00u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA424u: /* STA ZP 85 0B */
    c->pc = 0xA426u;
    ea = 0x0Bu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA426u: /* LDA IMM A9 00 */
    c->pc = 0xA428u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA428u: /* STA ZP 85 0A */
    c->pc = 0xA42Au;
    ea = 0x0Au;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA42Au: /* JSR ABS 20 74 C8 */
    push(c, 0xA4u); push(c, 0x2Cu); c->pc = 0xC874u; c->cpu_cycles += 6u; return 1;
case 0xA42Du: /* LDX ZP A6 2B */
    c->pc = 0xA42Fu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA42Fu: /* LDA ZP A5 0F */
    c->pc = 0xA431u;
    ea = 0x0Fu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA431u: /* STA ABX 9D 00 06 */
    c->pc = 0xA434u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA434u: /* LDA ZP A5 0E */
    c->pc = 0xA436u;
    ea = 0x0Eu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA436u: /* STA ABX 9D 20 06 */
    c->pc = 0xA439u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA439u: /* PLP IMP 28 */
    c->pc = 0xA43Au;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA43Au: /* BCC REL 90 14 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA43Cu ^ 0xA450u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA450u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA43Cu; } return 1;
case 0xA43Cu: /* LDA ABX BD 60 06 */
    c->pc = 0xA43Fu;
    ea = (uint16_t)(0x0660u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0660u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA43Fu: /* EOR IMM 49 FF */
    c->pc = 0xA441u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA441u: /* ADC IMM 69 01 */
    c->pc = 0xA443u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA443u: /* STA ABX 9D 60 06 */
    c->pc = 0xA446u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA446u: /* LDA ABX BD 40 06 */
    c->pc = 0xA449u;
    ea = (uint16_t)(0x0640u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0640u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA449u: /* EOR IMM 49 FF */
    c->pc = 0xA44Bu;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA44Bu: /* ADC IMM 69 00 */
    c->pc = 0xA44Du;
    v = 0x00u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA44Du: /* STA ABX 9D 40 06 */
    c->pc = 0xA450u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA450u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA451u: /* LDX ZP A6 B3 */
    c->pc = 0xA453u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA453u: /* LDA ZP A5 20 */
    c->pc = 0xA455u;
    ea = 0x20u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA455u: /* STA ABS 8D 41 04 */
    c->pc = 0xA458u;
    ea = 0x0441u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA458u: /* LDA ABX BD AF A4 */
    c->pc = 0xA45Bu;
    ea = (uint16_t)(0xA4AFu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA4AFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA45Bu: /* STA ABS 8D 21 04 */
    c->pc = 0xA45Eu;
    ea = 0x0421u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA45Eu: /* LDA ABX BD BD A4 */
    c->pc = 0xA461u;
    ea = (uint16_t)(0xA4BDu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA4BDu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA461u: /* STA ABS 8D 61 04 */
    c->pc = 0xA464u;
    ea = 0x0461u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA464u: /* LDA ABX BD CB A4 */
    c->pc = 0xA467u;
    ea = (uint16_t)(0xA4CBu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA4CBu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA467u: /* STA ABS 8D A1 04 */
    c->pc = 0xA46Au;
    ea = 0x04A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA46Au: /* LDA ABX BD D9 A4 */
    c->pc = 0xA46Du;
    ea = (uint16_t)(0xA4D9u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA4D9u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA46Du: /* STA ABS 8D 01 04 */
    c->pc = 0xA470u;
    ea = 0x0401u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA470u: /* LDA ABX BD E7 A4 */
    c->pc = 0xA473u;
    ea = (uint16_t)(0xA4E7u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA4E7u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA473u: /* STA ABS 8D E1 06 */
    c->pc = 0xA476u;
    ea = 0x06E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA476u: /* LDA ABX BD F5 A4 */
    c->pc = 0xA479u;
    ea = (uint16_t)(0xA4F5u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA4F5u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA479u: /* STA ABS 8D 21 06 */
    c->pc = 0xA47Cu;
    ea = 0x0621u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA47Cu: /* LDA ABX BD 03 A5 */
    c->pc = 0xA47Fu;
    ea = (uint16_t)(0xA503u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA503u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA47Fu: /* STA ABS 8D 01 06 */
    c->pc = 0xA482u;
    ea = 0x0601u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA482u: /* LDA ABX BD 11 A5 */
    c->pc = 0xA485u;
    ea = (uint16_t)(0xA511u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA511u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA485u: /* STA ABS 8D 61 06 */
    c->pc = 0xA488u;
    ea = 0x0661u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA488u: /* LDA ABX BD 1F A5 */
    c->pc = 0xA48Bu;
    ea = (uint16_t)(0xA51Fu + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA51Fu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA48Bu: /* STA ABS 8D 41 06 */
    c->pc = 0xA48Eu;
    ea = 0x0641u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA48Eu: /* LDA IMM A9 00 */
    c->pc = 0xA490u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA490u: /* STA ABS 8D C1 04 */
    c->pc = 0xA493u;
    ea = 0x04C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA493u: /* STA ABS 8D 81 04 */
    c->pc = 0xA496u;
    ea = 0x0481u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA496u: /* STA ABS 8D 81 06 */
    c->pc = 0xA499u;
    ea = 0x0681u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA499u: /* STA ABS 8D A1 06 */
    c->pc = 0xA49Cu;
    ea = 0x06A1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA49Cu: /* STA ABS 8D E1 04 */
    c->pc = 0xA49Fu;
    ea = 0x04E1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA49Fu: /* STA ABS 8D C1 06 */
    c->pc = 0xA4A2u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA4A2u: /* STA ABS 8D A8 05 */
    c->pc = 0xA4A5u;
    ea = 0x05A8u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA4A5u: /* STA ABS 8D AA 05 */
    c->pc = 0xA4A8u;
    ea = 0x05AAu;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA4A8u: /* STA ZP 85 B2 */
    c->pc = 0xA4AAu;
    ea = 0xB2u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4AAu: /* LDA IMM A9 01 */
    c->pc = 0xA4ACu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA4ACu: /* STA ZP 85 B1 */
    c->pc = 0xA4AEu;
    ea = 0xB1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA4AEu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA52Du: /* LDA IMM A9 00 */
    c->pc = 0xA52Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA52Fu: /* STA ZP 85 01 */
    c->pc = 0xA531u;
    ea = 0x01u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA531u: /* LDA ZP A5 2C */
    c->pc = 0xA533u;
    ea = 0x2Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA533u: /* BEQ REL F0 67 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA535u ^ 0xA59Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA59Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA535u; } return 1;
case 0xA535u: /* LDA ZP A5 BD */
    c->pc = 0xA537u;
    ea = 0xBDu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA537u: /* BNE REL D0 63 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA539u ^ 0xA59Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA59Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA539u; } return 1;
case 0xA539u: /* LDA ZP A5 F9 */
    c->pc = 0xA53Bu;
    ea = 0xF9u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA53Bu: /* BNE REL D0 5F */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA53Du ^ 0xA59Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA59Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA53Du; } return 1;
case 0xA53Du: /* SEC IMP 38 */
    c->pc = 0xA53Eu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA53Eu: /* LDA ABS AD 60 04 */
    c->pc = 0xA541u;
    ea = 0x0460u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA541u: /* SBC ABS ED 61 04 */
    c->pc = 0xA544u;
    ea = 0x0461u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA544u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA546u ^ 0xA54Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA54Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA546u; } return 1;
case 0xA546u: /* EOR IMM 49 FF */
    c->pc = 0xA548u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA548u: /* ADC IMM 69 01 */
    c->pc = 0xA54Au;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA54Au: /* LDY ABS AC E1 06 */
    c->pc = 0xA54Du;
    ea = 0x06E1u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u; return 1;
case 0xA54Du: /* CMP ABY D9 E4 D4 */
    c->pc = 0xA550u;
    ea = (uint16_t)(0xD4E4u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD4E4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA550u: /* BCS REL B0 4A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA552u ^ 0xA59Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA59Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA552u; } return 1;
case 0xA552u: /* SEC IMP 38 */
    c->pc = 0xA553u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA553u: /* LDA ABS AD A0 04 */
    c->pc = 0xA556u;
    ea = 0x04A0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA556u: /* SBC ABS ED A1 04 */
    c->pc = 0xA559u;
    ea = 0x04A1u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA559u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA55Bu ^ 0xA55Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA55Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA55Bu; } return 1;
case 0xA55Bu: /* EOR IMM 49 FF */
    c->pc = 0xA55Du;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA55Du: /* ADC IMM 69 01 */
    c->pc = 0xA55Fu;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA55Fu: /* CMP ABY D9 84 D5 */
    c->pc = 0xA562u;
    ea = (uint16_t)(0xD584u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD584u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA562u: /* BCS REL B0 38 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA564u ^ 0xA59Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA59Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA564u; } return 1;
case 0xA564u: /* LDA ZP A5 4B */
    c->pc = 0xA566u;
    ea = 0x4Bu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA566u: /* BNE REL D0 34 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA568u ^ 0xA59Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA59Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA568u; } return 1;
case 0xA568u: /* LDY ZP A4 B3 */
    c->pc = 0xA56Au;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA56Au: /* SEC IMP 38 */
    c->pc = 0xA56Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA56Bu: /* LDA ABS AD C0 06 */
    c->pc = 0xA56Eu;
    ea = 0x06C0u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA56Eu: /* SBC ABY F9 B2 A9 */
    c->pc = 0xA571u;
    ea = (uint16_t)(0xA9B2u + c->y);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0xA9B2u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA571u: /* STA ABS 8D C0 06 */
    c->pc = 0xA574u;
    ea = 0x06C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA574u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA576u ^ 0xA578u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA578u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA576u; } return 1;
case 0xA576u: /* BCS REL B0 0A */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA578u ^ 0xA582u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA582u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA578u; } return 1;
case 0xA578u: /* LDA IMM A9 00 */
    c->pc = 0xA57Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA57Au: /* STA ZP 85 2C */
    c->pc = 0xA57Cu;
    ea = 0x2Cu;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA57Cu: /* STA ABS 8D C0 06 */
    c->pc = 0xA57Fu;
    ea = 0x06C0u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA57Fu: /* JMP ABS 4C 0B C1 */
    c->pc = 0xC10Bu; c->cpu_cycles += 3u; return 1;
case 0xA582u: /* LDA ABS AD 20 04 */
    c->pc = 0xA585u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA585u: /* AND IMM 29 BF */
    c->pc = 0xA587u;
    v = 0xBFu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA587u: /* STA ABS 8D 20 04 */
    c->pc = 0xA58Au;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA58Au: /* LDA ABS AD 21 04 */
    c->pc = 0xA58Du;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA58Du: /* AND IMM 29 40 */
    c->pc = 0xA58Fu;
    v = 0x40u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA58Fu: /* EOR IMM 49 40 */
    c->pc = 0xA591u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA591u: /* ORA ABS 0D 20 04 */
    c->pc = 0xA594u;
    ea = 0x0420u;
    v = read8(c, ea);
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA594u: /* STA ABS 8D 20 04 */
    c->pc = 0xA597u;
    ea = 0x0420u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA597u: /* JSR ABS 20 32 D3 */
    push(c, 0xA5u); push(c, 0x99u); c->pc = 0xD332u; c->cpu_cycles += 6u; return 1;
case 0xA59Au: /* INC ZP E6 01 */
    c->pc = 0xA59Cu;
    ea = 0x01u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA59Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA59Du: /* LDX IMM A2 09 */
    c->pc = 0xA59Fu;
    v = 0x09u;
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA59Fu: /* LDA ZP A5 1C */
    c->pc = 0xA5A1u;
    ea = 0x1Cu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5A1u: /* AND IMM 29 01 */
    c->pc = 0xA5A3u;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5A3u: /* BNE REL D0 01 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5A5u ^ 0xA5A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5A5u; } return 1;
case 0xA5A5u: /* DEX IMP CA */
    c->pc = 0xA5A6u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA5A6u: /* LDA ABX BD 20 04 */
    c->pc = 0xA5A9u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5A9u: /* BPL REL 10 33 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA5ABu ^ 0xA5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5ABu; } return 1;
case 0xA5ABu: /* AND IMM 29 01 */
    c->pc = 0xA5ADu;
    v = 0x01u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5ADu: /* BEQ REL F0 2F */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA5AFu ^ 0xA5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5AFu; } return 1;
case 0xA5AFu: /* CLC IMP 18 */
    c->pc = 0xA5B0u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5B0u: /* LDY ABX BC 90 05 */
    c->pc = 0xA5B3u;
    ea = (uint16_t)(0x0590u + c->x);
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 4u + ((((0x0590u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5B3u: /* LDA ABY B9 DF D4 */
    c->pc = 0xA5B6u;
    ea = (uint16_t)(0xD4DFu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xD4DFu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5B6u: /* ADC ABS 6D E1 06 */
    c->pc = 0xA5B9u;
    ea = 0x06E1u;
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u; return 1;
case 0xA5B9u: /* TAY IMP A8 */
    c->pc = 0xA5BAu;
    c->y = c->a; set_nz(c, c->y);
    c->cpu_cycles += 2u; return 1;
case 0xA5BAu: /* SEC IMP 38 */
    c->pc = 0xA5BBu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5BBu: /* LDA ABS AD 61 04 */
    c->pc = 0xA5BEu;
    ea = 0x0461u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA5BEu: /* SBC ABX FD E0 06 */
    c->pc = 0xA5C1u;
    ea = (uint16_t)(0x06E0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x06E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5C1u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA5C3u ^ 0xA5C7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5C7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5C3u; } return 1;
case 0xA5C3u: /* EOR IMM 49 FF */
    c->pc = 0xA5C5u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5C5u: /* ADC IMM 69 01 */
    c->pc = 0xA5C7u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5C7u: /* CMP ABY D9 E4 D4 */
    c->pc = 0xA5CAu;
    ea = (uint16_t)(0xD4E4u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD4E4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5CAu: /* BCS REL B0 12 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA5CCu ^ 0xA5DEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5DEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5CCu; } return 1;
case 0xA5CCu: /* SEC IMP 38 */
    c->pc = 0xA5CDu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5CDu: /* LDA ABS AD A1 04 */
    c->pc = 0xA5D0u;
    ea = 0x04A1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA5D0u: /* SBC ABX FD A0 04 */
    c->pc = 0xA5D3u;
    ea = (uint16_t)(0x04A0u + c->x);
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 4u + ((((0x04A0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5D3u: /* BCS REL B0 04 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA5D5u ^ 0xA5D9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5D9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5D5u; } return 1;
case 0xA5D5u: /* EOR IMM 49 FF */
    c->pc = 0xA5D7u;
    v = 0xFFu;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5D7u: /* ADC IMM 69 01 */
    c->pc = 0xA5D9u;
    v = 0x01u;
    adc8(c, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5D9u: /* CMP ABY D9 84 D5 */
    c->pc = 0xA5DCu;
    ea = (uint16_t)(0xD584u + c->y);
    v = read8(c, ea);
    compare8(c, c->a, v);
    c->cpu_cycles += 4u + ((((0xD584u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5DCu: /* BCC REL 90 10 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA5DEu ^ 0xA5EEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5EEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5DEu; } return 1;
case 0xA5DEu: /* DEX IMP CA */
    c->pc = 0xA5DFu;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA5DFu: /* DEX IMP CA */
    c->pc = 0xA5E0u;
    c->x = (uint8_t)(c->x - 1u); set_nz(c, c->x);
    c->cpu_cycles += 2u; return 1;
case 0xA5E0u: /* CPX IMM E0 02 */
    c->pc = 0xA5E2u;
    v = 0x02u;
    compare8(c, c->x, v);
    c->cpu_cycles += 2u; return 1;
case 0xA5E2u: /* BCS REL B0 C2 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA5E4u ^ 0xA5A6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5A6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5E4u; } return 1;
case 0xA5E4u: /* LDX ZP A6 2B */
    c->pc = 0xA5E6u;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA5E6u: /* LDA IMM A9 00 */
    c->pc = 0xA5E8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA5E8u: /* STA ZP 85 B4 */
    c->pc = 0xA5EAu;
    ea = 0xB4u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5EAu: /* STA ZP 85 02 */
    c->pc = 0xA5ECu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5ECu: /* CLC IMP 18 */
    c->pc = 0xA5EDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA5EDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA5EEu: /* LDA ZP A5 B4 */
    c->pc = 0xA5F0u;
    ea = 0xB4u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5F0u: /* BNE REL D0 FA */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA5F2u ^ 0xA5ECu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA5ECu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA5F2u; } return 1;
case 0xA5F2u: /* LDY ZP A4 A9 */
    c->pc = 0xA5F4u;
    ea = 0xA9u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA5F4u: /* LDA ABY B9 30 A9 */
    c->pc = 0xA5F7u;
    ea = (uint16_t)(0xA930u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA930u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5F7u: /* STA ZP 85 08 */
    c->pc = 0xA5F9u;
    ea = 0x08u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5F9u: /* LDA ABY B9 39 A9 */
    c->pc = 0xA5FCu;
    ea = (uint16_t)(0xA939u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA939u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA5FCu: /* STA ZP 85 09 */
    c->pc = 0xA5FEu;
    ea = 0x09u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA5FEu: /* JMP IND 6C 08 00 */
    c->pc = read16_jmp_bug(c, 0x0008u); c->cpu_cycles += 5u; return 1;
case 0xA601u: /* LDA ABS AD 21 04 */
    c->pc = 0xA604u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA604u: /* AND IMM 29 08 */
    c->pc = 0xA606u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA606u: /* BNE REL D0 35 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA608u ^ 0xA63Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA63Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA608u; } return 1;
case 0xA608u: /* LDY ZP A4 B3 */
    c->pc = 0xA60Au;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA60Au: /* LDA ABY B9 42 A9 */
    c->pc = 0xA60Du;
    ea = (uint16_t)(0xA942u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA942u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA60Du: /* STA ZP 85 00 */
    c->pc = 0xA60Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA60Fu: /* BEQ REL F0 2C */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA611u ^ 0xA63Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA63Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA611u; } return 1;
case 0xA611u: /* PHP IMP 08 */
    c->pc = 0xA612u;
    push(c, (uint8_t)(c->p | MM2_FLAG_B | MM2_FLAG_U));
    c->cpu_cycles += 3u; return 1;
case 0xA612u: /* LSR ABX 5E 20 04 */
    c->pc = 0xA615u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA615u: /* PLP IMP 28 */
    c->pc = 0xA616u;
    c->p = (uint8_t)((pull(c) & (uint8_t)~MM2_FLAG_B) | MM2_FLAG_U);
    c->cpu_cycles += 4u; return 1;
case 0xA616u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA618u ^ 0xA61Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA61Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA618u; } return 1;
case 0xA618u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA61Bu: /* JSR ABS 20 29 A9 */
    push(c, 0xA6u); push(c, 0x1Du); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA61Eu: /* LDA IMM A9 2B */
    c->pc = 0xA620u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA620u: /* JSR ABS 20 51 C0 */
    push(c, 0xA6u); push(c, 0x22u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA623u: /* LDA IMM A9 01 */
    c->pc = 0xA625u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA625u: /* STA ZP 85 02 */
    c->pc = 0xA627u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA627u: /* INC ZP E6 B4 */
    c->pc = 0xA629u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA629u: /* SEC IMP 38 */
    c->pc = 0xA62Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA62Au: /* LDA ABS AD C1 06 */
    c->pc = 0xA62Du;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA62Du: /* SBC ZP E5 00 */
    c->pc = 0xA62Fu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA62Fu: /* STA ABS 8D C1 06 */
    c->pc = 0xA632u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA632u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA634u ^ 0xA636u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA636u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA634u; } return 1;
case 0xA634u: /* BCS REL B0 22 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA636u ^ 0xA658u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA658u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA636u; } return 1;
case 0xA636u: /* LDA IMM A9 00 */
    c->pc = 0xA638u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA638u: /* STA ABS 8D C1 06 */
    c->pc = 0xA63Bu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA63Bu: /* SEC IMP 38 */
    c->pc = 0xA63Cu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA63Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA63Du: /* LDA ABX BD 20 04 */
    c->pc = 0xA640u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA640u: /* EOR IMM 49 40 */
    c->pc = 0xA642u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA642u: /* AND IMM 29 FE */
    c->pc = 0xA644u;
    v = 0xFEu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA644u: /* STA ABX 9D 20 04 */
    c->pc = 0xA647u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA647u: /* LDA IMM A9 05 */
    c->pc = 0xA649u;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA649u: /* STA ABX 9D 40 06 */
    c->pc = 0xA64Cu;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA64Cu: /* STA ABX 9D 00 06 */
    c->pc = 0xA64Fu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA64Fu: /* LDA IMM A9 2D */
    c->pc = 0xA651u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA651u: /* JSR ABS 20 51 C0 */
    push(c, 0xA6u); push(c, 0x53u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA654u: /* LDA IMM A9 02 */
    c->pc = 0xA656u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA656u: /* STA ZP 85 02 */
    c->pc = 0xA658u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA658u: /* CLC IMP 18 */
    c->pc = 0xA659u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA659u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA65Au: /* LDA ZP A5 B3 */
    c->pc = 0xA65Cu;
    ea = 0xB3u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA65Cu: /* CMP IMM C9 00 */
    c->pc = 0xA65Eu;
    v = 0x00u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA65Eu: /* BNE REL D0 03 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA660u ^ 0xA663u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA663u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA660u; } return 1;
case 0xA660u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA663u: /* LDA ABS AD 21 04 */
    c->pc = 0xA666u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA666u: /* AND IMM 29 08 */
    c->pc = 0xA668u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA668u: /* BNE REL D0 4E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA66Au ^ 0xA6B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA66Au; } return 1;
case 0xA66Au: /* LDY ZP A4 B3 */
    c->pc = 0xA66Cu;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA66Cu: /* LDA ABY B9 50 A9 */
    c->pc = 0xA66Fu;
    ea = (uint16_t)(0xA950u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA950u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA66Fu: /* BEQ REL F0 47 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA671u ^ 0xA6B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA671u; } return 1;
case 0xA671u: /* LDA ABX BD E0 04 */
    c->pc = 0xA674u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA674u: /* CMP IMM C9 02 */
    c->pc = 0xA676u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA676u: /* BCC REL 90 12 */
    if ((c->p & MM2_FLAG_C) == 0u) { c->cpu_cycles += 3u + ((((0xA678u ^ 0xA68Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA68Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA678u; } return 1;
case 0xA678u: /* BEQ REL F0 05 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA67Au ^ 0xA67Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA67Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA67Au; } return 1;
case 0xA67Au: /* LDA ABY B9 50 A9 */
    c->pc = 0xA67Du;
    ea = (uint16_t)(0xA950u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA950u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA67Du: /* BNE REL D0 0E */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA67Fu ^ 0xA68Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA68Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA67Fu; } return 1;
case 0xA67Fu: /* CLC IMP 18 */
    c->pc = 0xA680u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA680u: /* LDA ABY B9 42 A9 */
    c->pc = 0xA683u;
    ea = (uint16_t)(0xA942u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA942u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA683u: /* ASL IMP 0A */
    c->pc = 0xA684u;
    c->a = asl8(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA684u: /* ADC ABY 79 42 A9 */
    c->pc = 0xA687u;
    ea = (uint16_t)(0xA942u + c->y);
    v = read8(c, ea);
    adc8(c, v);
    c->cpu_cycles += 4u + ((((0xA942u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA687u: /* JMP ABS 4C 8D A6 */
    c->pc = 0xA68Du; c->cpu_cycles += 3u; return 1;
case 0xA68Au: /* LDA ABY B9 42 A9 */
    c->pc = 0xA68Du;
    ea = (uint16_t)(0xA942u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA942u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA68Du: /* STA ZP 85 00 */
    c->pc = 0xA68Fu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA68Fu: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA691u ^ 0xA6B8u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6B8u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA691u; } return 1;
case 0xA691u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA693u ^ 0xA696u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA696u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA693u; } return 1;
case 0xA693u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA696u: /* JSR ABS 20 29 A9 */
    push(c, 0xA6u); push(c, 0x98u); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA699u: /* LDA IMM A9 2B */
    c->pc = 0xA69Bu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA69Bu: /* JSR ABS 20 51 C0 */
    push(c, 0xA6u); push(c, 0x9Du); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA69Eu: /* LDA IMM A9 01 */
    c->pc = 0xA6A0u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6A0u: /* STA ZP 85 02 */
    c->pc = 0xA6A2u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6A2u: /* INC ZP E6 B4 */
    c->pc = 0xA6A4u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA6A4u: /* SEC IMP 38 */
    c->pc = 0xA6A5u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA6A5u: /* LDA ABS AD C1 06 */
    c->pc = 0xA6A8u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6A8u: /* SBC ZP E5 00 */
    c->pc = 0xA6AAu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA6AAu: /* STA ABS 8D C1 06 */
    c->pc = 0xA6ADu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6ADu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6AFu ^ 0xA6B1u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6B1u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6AFu; } return 1;
case 0xA6AFu: /* BCS REL B0 16 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA6B1u ^ 0xA6C7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6C7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6B1u; } return 1;
case 0xA6B1u: /* LDA IMM A9 00 */
    c->pc = 0xA6B3u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6B3u: /* STA ABS 8D C1 06 */
    c->pc = 0xA6B6u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6B6u: /* SEC IMP 38 */
    c->pc = 0xA6B7u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA6B7u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA6B8u: /* LDA IMM A9 2D */
    c->pc = 0xA6BAu;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6BAu: /* JSR ABS 20 51 C0 */
    push(c, 0xA6u); push(c, 0xBCu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA6BDu: /* LDA IMM A9 02 */
    c->pc = 0xA6BFu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6BFu: /* STA ZP 85 02 */
    c->pc = 0xA6C1u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6C1u: /* LSR ABX 5E 20 04 */
    c->pc = 0xA6C4u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA6C4u: /* JMP ABS 4C CC A6 */
    c->pc = 0xA6CCu; c->cpu_cycles += 3u; return 1;
case 0xA6C7u: /* LDA IMM A9 00 */
    c->pc = 0xA6C9u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6C9u: /* STA ABX 9D 20 04 */
    c->pc = 0xA6CCu;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA6CCu: /* CLC IMP 18 */
    c->pc = 0xA6CDu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA6CDu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA6CEu: /* LDA ABS AD 21 04 */
    c->pc = 0xA6D1u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6D1u: /* AND IMM 29 08 */
    c->pc = 0xA6D3u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6D3u: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA6D5u ^ 0xA705u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA705u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6D5u; } return 1;
case 0xA6D5u: /* LDY ZP A4 B3 */
    c->pc = 0xA6D7u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA6D7u: /* LDA ABY B9 5E A9 */
    c->pc = 0xA6DAu;
    ea = (uint16_t)(0xA95Eu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA95Eu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA6DAu: /* STA ZP 85 00 */
    c->pc = 0xA6DCu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6DCu: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6DEu ^ 0xA705u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA705u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6DEu; } return 1;
case 0xA6DEu: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA6E0u ^ 0xA6E3u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6E3u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6E0u; } return 1;
case 0xA6E0u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA6E3u: /* JSR ABS 20 29 A9 */
    push(c, 0xA6u); push(c, 0xE5u); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA6E6u: /* LDA IMM A9 2B */
    c->pc = 0xA6E8u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6E8u: /* JSR ABS 20 51 C0 */
    push(c, 0xA6u); push(c, 0xEAu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA6EBu: /* LDA IMM A9 01 */
    c->pc = 0xA6EDu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA6EDu: /* STA ZP 85 02 */
    c->pc = 0xA6EFu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA6EFu: /* INC ZP E6 B4 */
    c->pc = 0xA6F1u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA6F1u: /* SEC IMP 38 */
    c->pc = 0xA6F2u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA6F2u: /* LDA ABS AD C1 06 */
    c->pc = 0xA6F5u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6F5u: /* SBC ZP E5 00 */
    c->pc = 0xA6F7u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA6F7u: /* STA ABS 8D C1 06 */
    c->pc = 0xA6FAu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA6FAu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA6FCu ^ 0xA6FEu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6FEu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6FCu; } return 1;
case 0xA6FCu: /* BCS REL B0 C9 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA6FEu ^ 0xA6C7u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA6C7u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA6FEu; } return 1;
case 0xA6FEu: /* LDA IMM A9 00 */
    c->pc = 0xA700u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA700u: /* STA ABS 8D C1 06 */
    c->pc = 0xA703u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA703u: /* SEC IMP 38 */
    c->pc = 0xA704u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA704u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA705u: /* LDA IMM A9 2D */
    c->pc = 0xA707u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA707u: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0x09u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA70Au: /* LDA IMM A9 02 */
    c->pc = 0xA70Cu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA70Cu: /* STA ZP 85 02 */
    c->pc = 0xA70Eu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA70Eu: /* LDA ABX BD 20 04 */
    c->pc = 0xA711u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA711u: /* AND IMM 29 FE */
    c->pc = 0xA713u;
    v = 0xFEu;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA713u: /* STA ABX 9D 20 04 */
    c->pc = 0xA716u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA716u: /* LDA IMM A9 3D */
    c->pc = 0xA718u;
    v = 0x3Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA718u: /* STA ABX 9D 00 04 */
    c->pc = 0xA71Bu;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA71Bu: /* LDA IMM A9 00 */
    c->pc = 0xA71Du;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA71Du: /* STA ABX 9D A0 06 */
    c->pc = 0xA720u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA720u: /* STA ABX 9D 80 06 */
    c->pc = 0xA723u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA723u: /* CLC IMP 18 */
    c->pc = 0xA724u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA724u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA725u: /* LDA ABS AD 21 04 */
    c->pc = 0xA728u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA728u: /* AND IMM 29 08 */
    c->pc = 0xA72Au;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA72Au: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA72Cu ^ 0xA75Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA75Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA72Cu; } return 1;
case 0xA72Cu: /* LDY ZP A4 B3 */
    c->pc = 0xA72Eu;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA72Eu: /* LDA ABY B9 6C A9 */
    c->pc = 0xA731u;
    ea = (uint16_t)(0xA96Cu + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA96Cu ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA731u: /* STA ZP 85 00 */
    c->pc = 0xA733u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA733u: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA735u ^ 0xA75Cu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA75Cu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA735u; } return 1;
case 0xA735u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA737u ^ 0xA73Au) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA73Au; }
    else { c->cpu_cycles += 2u; c->pc = 0xA737u; } return 1;
case 0xA737u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA73Au: /* JSR ABS 20 29 A9 */
    push(c, 0xA7u); push(c, 0x3Cu); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA73Du: /* LDA IMM A9 2B */
    c->pc = 0xA73Fu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA73Fu: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0x41u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA742u: /* LDA IMM A9 01 */
    c->pc = 0xA744u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA744u: /* STA ZP 85 02 */
    c->pc = 0xA746u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA746u: /* INC ZP E6 B4 */
    c->pc = 0xA748u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA748u: /* SEC IMP 38 */
    c->pc = 0xA749u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA749u: /* LDA ABS AD C1 06 */
    c->pc = 0xA74Cu;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA74Cu: /* SBC ZP E5 00 */
    c->pc = 0xA74Eu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA74Eu: /* STA ABS 8D C1 06 */
    c->pc = 0xA751u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA751u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA753u ^ 0xA755u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA755u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA753u; } return 1;
case 0xA753u: /* BCS REL B0 2D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA755u ^ 0xA782u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA782u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA755u; } return 1;
case 0xA755u: /* LDA IMM A9 00 */
    c->pc = 0xA757u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA757u: /* STA ABS 8D C1 06 */
    c->pc = 0xA75Au;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA75Au: /* SEC IMP 38 */
    c->pc = 0xA75Bu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA75Bu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA75Cu: /* LDA IMM A9 2D */
    c->pc = 0xA75Eu;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA75Eu: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0x60u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA761u: /* LDA IMM A9 02 */
    c->pc = 0xA763u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA763u: /* STA ZP 85 02 */
    c->pc = 0xA765u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA765u: /* LDA ABX BD 20 04 */
    c->pc = 0xA768u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA768u: /* AND IMM 29 F2 */
    c->pc = 0xA76Au;
    v = 0xF2u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA76Au: /* STA ABX 9D 20 04 */
    c->pc = 0xA76Du;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA76Du: /* LDA IMM A9 3B */
    c->pc = 0xA76Fu;
    v = 0x3Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA76Fu: /* STA ABX 9D 00 04 */
    c->pc = 0xA772u;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA772u: /* LDA IMM A9 00 */
    c->pc = 0xA774u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA774u: /* STA ABX 9D A0 06 */
    c->pc = 0xA777u;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA777u: /* STA ABX 9D 80 06 */
    c->pc = 0xA77Au;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA77Au: /* STA ABX 9D E0 04 */
    c->pc = 0xA77Du;
    ea = (uint16_t)(0x04E0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA77Du: /* STA ABX 9D C0 06 */
    c->pc = 0xA780u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA780u: /* CLC IMP 18 */
    c->pc = 0xA781u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA781u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA782u: /* LDA IMM A9 00 */
    c->pc = 0xA784u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA784u: /* STA ABX 9D 20 04 */
    c->pc = 0xA787u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA787u: /* BEQ REL F0 F7 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA789u ^ 0xA780u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA780u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA789u; } return 1;
case 0xA789u: /* LDA ABS AD 21 04 */
    c->pc = 0xA78Cu;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA78Cu: /* AND IMM 29 08 */
    c->pc = 0xA78Eu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA78Eu: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA790u ^ 0xA7C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA790u; } return 1;
case 0xA790u: /* LDY ZP A4 B3 */
    c->pc = 0xA792u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA792u: /* LDA ABY B9 7A A9 */
    c->pc = 0xA795u;
    ea = (uint16_t)(0xA97Au + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA97Au ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA795u: /* STA ZP 85 00 */
    c->pc = 0xA797u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA797u: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA799u ^ 0xA7C0u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7C0u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA799u; } return 1;
case 0xA799u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA79Bu ^ 0xA79Eu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA79Eu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA79Bu; } return 1;
case 0xA79Bu: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA79Eu: /* JSR ABS 20 29 A9 */
    push(c, 0xA7u); push(c, 0xA0u); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA7A1u: /* LDA IMM A9 2B */
    c->pc = 0xA7A3u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7A3u: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0xA5u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA7A6u: /* LDA IMM A9 01 */
    c->pc = 0xA7A8u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7A8u: /* STA ZP 85 02 */
    c->pc = 0xA7AAu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7AAu: /* INC ZP E6 B4 */
    c->pc = 0xA7ACu;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA7ACu: /* SEC IMP 38 */
    c->pc = 0xA7ADu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA7ADu: /* LDA ABS AD C1 06 */
    c->pc = 0xA7B0u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7B0u: /* SBC ZP E5 00 */
    c->pc = 0xA7B2u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA7B2u: /* STA ABS 8D C1 06 */
    c->pc = 0xA7B5u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7B5u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA7B7u ^ 0xA7B9u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7B9u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7B7u; } return 1;
case 0xA7B7u: /* BCS REL B0 C9 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA7B9u ^ 0xA782u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA782u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7B9u; } return 1;
case 0xA7B9u: /* LDA IMM A9 00 */
    c->pc = 0xA7BBu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7BBu: /* STA ABS 8D C1 06 */
    c->pc = 0xA7BEu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7BEu: /* SEC IMP 38 */
    c->pc = 0xA7BFu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA7BFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA7C0u: /* LDA IMM A9 00 */
    c->pc = 0xA7C2u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7C2u: /* STA ABX 9D 00 06 */
    c->pc = 0xA7C5u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7C5u: /* STA ABX 9D 20 06 */
    c->pc = 0xA7C8u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7C8u: /* STA ABX 9D 60 06 */
    c->pc = 0xA7CBu;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7CBu: /* LDA IMM A9 04 */
    c->pc = 0xA7CDu;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7CDu: /* STA ABX 9D 40 06 */
    c->pc = 0xA7D0u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7D0u: /* LDA IMM A9 80 */
    c->pc = 0xA7D2u;
    v = 0x80u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7D2u: /* STA ABX 9D 20 04 */
    c->pc = 0xA7D5u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA7D5u: /* LDA IMM A9 2D */
    c->pc = 0xA7D7u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7D7u: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0xD9u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA7DAu: /* LDA IMM A9 02 */
    c->pc = 0xA7DCu;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7DCu: /* STA ZP 85 02 */
    c->pc = 0xA7DEu;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7DEu: /* CLC IMP 18 */
    c->pc = 0xA7DFu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA7DFu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA7E0u: /* LDA ABS AD 21 04 */
    c->pc = 0xA7E3u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA7E3u: /* AND IMM 29 08 */
    c->pc = 0xA7E5u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7E5u: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA7E7u ^ 0xA817u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA817u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7E7u; } return 1;
case 0xA7E7u: /* LDY ZP A4 B3 */
    c->pc = 0xA7E9u;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA7E9u: /* LDA ABY B9 88 A9 */
    c->pc = 0xA7ECu;
    ea = (uint16_t)(0xA988u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA988u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA7ECu: /* STA ZP 85 00 */
    c->pc = 0xA7EEu;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA7EEu: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA7F0u ^ 0xA817u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA817u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7F0u; } return 1;
case 0xA7F0u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA7F2u ^ 0xA7F5u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA7F5u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA7F2u; } return 1;
case 0xA7F2u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA7F5u: /* JSR ABS 20 29 A9 */
    push(c, 0xA7u); push(c, 0xF7u); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA7F8u: /* LDA IMM A9 2B */
    c->pc = 0xA7FAu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7FAu: /* JSR ABS 20 51 C0 */
    push(c, 0xA7u); push(c, 0xFCu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA7FDu: /* LDA IMM A9 01 */
    c->pc = 0xA7FFu;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA7FFu: /* STA ZP 85 02 */
    c->pc = 0xA801u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA801u: /* INC ZP E6 B4 */
    c->pc = 0xA803u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA803u: /* SEC IMP 38 */
    c->pc = 0xA804u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA804u: /* LDA ABS AD C1 06 */
    c->pc = 0xA807u;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA807u: /* SBC ZP E5 00 */
    c->pc = 0xA809u;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA809u: /* STA ABS 8D C1 06 */
    c->pc = 0xA80Cu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA80Cu: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA80Eu ^ 0xA810u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA810u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA80Eu; } return 1;
case 0xA80Eu: /* BCS REL B0 3D */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA810u ^ 0xA84Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA84Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA810u; } return 1;
case 0xA810u: /* LDA IMM A9 00 */
    c->pc = 0xA812u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA812u: /* STA ABS 8D C1 06 */
    c->pc = 0xA815u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA815u: /* SEC IMP 38 */
    c->pc = 0xA816u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA816u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA817u: /* LDA IMM A9 3C */
    c->pc = 0xA819u;
    v = 0x3Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA819u: /* STA ABX 9D 00 04 */
    c->pc = 0xA81Cu;
    ea = (uint16_t)(0x0400u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA81Cu: /* LDA ABX BD 20 04 */
    c->pc = 0xA81Fu;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA81Fu: /* AND IMM 29 C0 */
    c->pc = 0xA821u;
    v = 0xC0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA821u: /* EOR IMM 49 40 */
    c->pc = 0xA823u;
    v = 0x40u;
    c->a = (uint8_t)(c->a ^ v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA823u: /* ORA IMM 09 04 */
    c->pc = 0xA825u;
    v = 0x04u;
    c->a = (uint8_t)(c->a | v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA825u: /* STA ABX 9D 20 04 */
    c->pc = 0xA828u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA828u: /* LDA IMM A9 00 */
    c->pc = 0xA82Au;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA82Au: /* STA ABX 9D A0 06 */
    c->pc = 0xA82Du;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA82Du: /* STA ABX 9D 80 06 */
    c->pc = 0xA830u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA830u: /* STA ABX 9D 00 06 */
    c->pc = 0xA833u;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA833u: /* STA ABX 9D 60 06 */
    c->pc = 0xA836u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA836u: /* LDA IMM A9 C0 */
    c->pc = 0xA838u;
    v = 0xC0u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA838u: /* STA ABX 9D 20 06 */
    c->pc = 0xA83Bu;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA83Bu: /* LDA IMM A9 04 */
    c->pc = 0xA83Du;
    v = 0x04u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA83Du: /* STA ABX 9D 40 06 */
    c->pc = 0xA840u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA840u: /* LDA IMM A9 2D */
    c->pc = 0xA842u;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA842u: /* JSR ABS 20 51 C0 */
    push(c, 0xA8u); push(c, 0x44u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA845u: /* LDA IMM A9 02 */
    c->pc = 0xA847u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA847u: /* STA ZP 85 02 */
    c->pc = 0xA849u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA849u: /* LDX ZP A6 2B */
    c->pc = 0xA84Bu;
    ea = 0x2Bu;
    v = read8(c, ea);
    c->x = v; set_nz(c, c->x);
    c->cpu_cycles += 3u; return 1;
case 0xA84Bu: /* CLC IMP 18 */
    c->pc = 0xA84Cu;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA84Cu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA84Du: /* LDA IMM A9 00 */
    c->pc = 0xA84Fu;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA84Fu: /* STA ABX 9D 20 04 */
    c->pc = 0xA852u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA852u: /* BEQ REL F0 F5 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA854u ^ 0xA849u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA849u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA854u; } return 1;
case 0xA854u: /* LDA ABS AD 21 04 */
    c->pc = 0xA857u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA857u: /* AND IMM 29 08 */
    c->pc = 0xA859u;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA859u: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA85Bu ^ 0xA88Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA88Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA85Bu; } return 1;
case 0xA85Bu: /* LDY ZP A4 B3 */
    c->pc = 0xA85Du;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA85Du: /* LDA ABY B9 96 A9 */
    c->pc = 0xA860u;
    ea = (uint16_t)(0xA996u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA996u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA860u: /* STA ZP 85 00 */
    c->pc = 0xA862u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA862u: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA864u ^ 0xA88Bu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA88Bu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA864u; } return 1;
case 0xA864u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA866u ^ 0xA869u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA869u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA866u; } return 1;
case 0xA866u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA869u: /* JSR ABS 20 29 A9 */
    push(c, 0xA8u); push(c, 0x6Bu); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA86Cu: /* LDA IMM A9 2B */
    c->pc = 0xA86Eu;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA86Eu: /* JSR ABS 20 51 C0 */
    push(c, 0xA8u); push(c, 0x70u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA871u: /* LDA IMM A9 01 */
    c->pc = 0xA873u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA873u: /* STA ZP 85 02 */
    c->pc = 0xA875u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA875u: /* INC ZP E6 B4 */
    c->pc = 0xA877u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA877u: /* SEC IMP 38 */
    c->pc = 0xA878u;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA878u: /* LDA ABS AD C1 06 */
    c->pc = 0xA87Bu;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA87Bu: /* SBC ZP E5 00 */
    c->pc = 0xA87Du;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA87Du: /* STA ABS 8D C1 06 */
    c->pc = 0xA880u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA880u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA882u ^ 0xA884u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA884u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA882u; } return 1;
case 0xA882u: /* BCS REL B0 C9 */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA884u ^ 0xA84Du) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA84Du; }
    else { c->cpu_cycles += 2u; c->pc = 0xA884u; } return 1;
case 0xA884u: /* LDA IMM A9 00 */
    c->pc = 0xA886u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA886u: /* STA ABS 8D C1 06 */
    c->pc = 0xA889u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA889u: /* SEC IMP 38 */
    c->pc = 0xA88Au;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA88Au: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA88Bu: /* LDA ABX BD 00 04 */
    c->pc = 0xA88Eu;
    ea = (uint16_t)(0x0400u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0400u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA88Eu: /* CMP IMM C9 2F */
    c->pc = 0xA890u;
    v = 0x2Fu;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA890u: /* BEQ REL F0 22 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA892u ^ 0xA8B4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8B4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA892u; } return 1;
case 0xA892u: /* LDA ABX BD E0 04 */
    c->pc = 0xA895u;
    ea = (uint16_t)(0x04E0u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x04E0u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA895u: /* CMP IMM C9 02 */
    c->pc = 0xA897u;
    v = 0x02u;
    compare8(c, c->a, v);
    c->cpu_cycles += 2u; return 1;
case 0xA897u: /* BEQ REL F0 1B */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA899u ^ 0xA8B4u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8B4u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA899u; } return 1;
case 0xA899u: /* LDA IMM A9 05 */
    c->pc = 0xA89Bu;
    v = 0x05u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA89Bu: /* STA ABX 9D A0 06 */
    c->pc = 0xA89Eu;
    ea = (uint16_t)(0x06A0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA89Eu: /* LDA IMM A9 00 */
    c->pc = 0xA8A0u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8A0u: /* STA ABX 9D 80 06 */
    c->pc = 0xA8A3u;
    ea = (uint16_t)(0x0680u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8A3u: /* LDA IMM A9 38 */
    c->pc = 0xA8A5u;
    v = 0x38u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8A5u: /* STA ABX 9D C0 06 */
    c->pc = 0xA8A8u;
    ea = (uint16_t)(0x06C0u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8A8u: /* INC ABX FE E0 04 */
    c->pc = 0xA8ABu;
    ea = (uint16_t)(0x04E0u + c->x); v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA8ABu: /* LDA IMM A9 2D */
    c->pc = 0xA8ADu;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8ADu: /* JSR ABS 20 51 C0 */
    push(c, 0xA8u); push(c, 0xAFu); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA8B0u: /* LDA IMM A9 01 */
    c->pc = 0xA8B2u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8B2u: /* STA ZP 85 02 */
    c->pc = 0xA8B4u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA8B4u: /* CLC IMP 18 */
    c->pc = 0xA8B5u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA8B5u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8B6u: /* LDA ABS AD 21 04 */
    c->pc = 0xA8B9u;
    ea = 0x0421u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA8B9u: /* AND IMM 29 08 */
    c->pc = 0xA8BBu;
    v = 0x08u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8BBu: /* BNE REL D0 30 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA8BDu ^ 0xA8EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8BDu; } return 1;
case 0xA8BDu: /* LDY ZP A4 B3 */
    c->pc = 0xA8BFu;
    ea = 0xB3u;
    v = read8(c, ea);
    c->y = v; set_nz(c, c->y);
    c->cpu_cycles += 3u; return 1;
case 0xA8BFu: /* LDA ABY B9 A4 A9 */
    c->pc = 0xA8C2u;
    ea = (uint16_t)(0xA9A4u + c->y);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0xA9A4u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA8C2u: /* STA ZP 85 00 */
    c->pc = 0xA8C4u;
    ea = 0x00u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA8C4u: /* BEQ REL F0 27 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA8C6u ^ 0xA8EDu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8EDu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8C6u; } return 1;
case 0xA8C6u: /* BPL REL 10 03 */
    if ((c->p & MM2_FLAG_N) == 0u) { c->cpu_cycles += 3u + ((((0xA8C8u ^ 0xA8CBu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8CBu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8C8u; } return 1;
case 0xA8C8u: /* JMP ABS 4C 1B A9 */
    c->pc = 0xA91Bu; c->cpu_cycles += 3u; return 1;
case 0xA8CBu: /* JSR ABS 20 29 A9 */
    push(c, 0xA8u); push(c, 0xCDu); c->pc = 0xA929u; c->cpu_cycles += 6u; return 1;
case 0xA8CEu: /* LDA IMM A9 2B */
    c->pc = 0xA8D0u;
    v = 0x2Bu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8D0u: /* JSR ABS 20 51 C0 */
    push(c, 0xA8u); push(c, 0xD2u); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA8D3u: /* LDA IMM A9 01 */
    c->pc = 0xA8D5u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8D5u: /* STA ZP 85 02 */
    c->pc = 0xA8D7u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA8D7u: /* INC ZP E6 B4 */
    c->pc = 0xA8D9u;
    ea = 0xB4u; v = read8(c, ea);
    v = (uint8_t)(v + 1u); set_nz(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA8D9u: /* SEC IMP 38 */
    c->pc = 0xA8DAu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA8DAu: /* LDA ABS AD C1 06 */
    c->pc = 0xA8DDu;
    ea = 0x06C1u;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA8DDu: /* SBC ZP E5 00 */
    c->pc = 0xA8DFu;
    ea = 0x00u;
    v = read8(c, ea);
    sbc8(c, v);
    c->cpu_cycles += 3u; return 1;
case 0xA8DFu: /* STA ABS 8D C1 06 */
    c->pc = 0xA8E2u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA8E2u: /* BEQ REL F0 02 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA8E4u ^ 0xA8E6u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA8E6u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8E4u; } return 1;
case 0xA8E4u: /* BCS REL B0 2E */
    if ((c->p & MM2_FLAG_C) != 0u) { c->cpu_cycles += 3u + ((((0xA8E6u ^ 0xA914u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA914u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA8E6u; } return 1;
case 0xA8E6u: /* LDA IMM A9 00 */
    c->pc = 0xA8E8u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8E8u: /* STA ABS 8D C1 06 */
    c->pc = 0xA8EBu;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA8EBu: /* SEC IMP 38 */
    c->pc = 0xA8ECu;
    c->p = (uint8_t)(c->p | MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA8ECu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA8EDu: /* LDA IMM A9 03 */
    c->pc = 0xA8EFu;
    v = 0x03u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8EFu: /* STA ABX 9D 40 06 */
    c->pc = 0xA8F2u;
    ea = (uint16_t)(0x0640u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8F2u: /* LDA IMM A9 B2 */
    c->pc = 0xA8F4u;
    v = 0xB2u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8F4u: /* STA ABX 9D 60 06 */
    c->pc = 0xA8F7u;
    ea = (uint16_t)(0x0660u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8F7u: /* LDA IMM A9 01 */
    c->pc = 0xA8F9u;
    v = 0x01u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8F9u: /* STA ABX 9D 00 06 */
    c->pc = 0xA8FCu;
    ea = (uint16_t)(0x0600u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA8FCu: /* LDA IMM A9 87 */
    c->pc = 0xA8FEu;
    v = 0x87u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA8FEu: /* STA ABX 9D 20 06 */
    c->pc = 0xA901u;
    ea = (uint16_t)(0x0620u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA901u: /* LDA ABX BD 20 04 */
    c->pc = 0xA904u;
    ea = (uint16_t)(0x0420u + c->x);
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 4u + ((((0x0420u ^ ea) & 0xFF00u) != 0u) ? 1u : 0u); return 1;
case 0xA904u: /* AND IMM 29 F0 */
    c->pc = 0xA906u;
    v = 0xF0u;
    c->a = (uint8_t)(c->a & v); set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA906u: /* STA ABX 9D 20 04 */
    c->pc = 0xA909u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA909u: /* LDA IMM A9 2D */
    c->pc = 0xA90Bu;
    v = 0x2Du;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA90Bu: /* JSR ABS 20 51 C0 */
    push(c, 0xA9u); push(c, 0x0Du); c->pc = 0xC051u; c->cpu_cycles += 6u; return 1;
case 0xA90Eu: /* LDA IMM A9 02 */
    c->pc = 0xA910u;
    v = 0x02u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA910u: /* STA ZP 85 02 */
    c->pc = 0xA912u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA912u: /* CLC IMP 18 */
    c->pc = 0xA913u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA913u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA914u: /* LDA IMM A9 00 */
    c->pc = 0xA916u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA916u: /* STA ABX 9D 20 04 */
    c->pc = 0xA919u;
    ea = (uint16_t)(0x0420u + c->x);
    write8(c, ea, c->a);
    c->cpu_cycles += 5u; return 1;
case 0xA919u: /* BEQ REL F0 F7 */
    if ((c->p & MM2_FLAG_Z) != 0u) { c->cpu_cycles += 3u + ((((0xA91Bu ^ 0xA912u) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA912u; }
    else { c->cpu_cycles += 2u; c->pc = 0xA91Bu; } return 1;
case 0xA91Bu: /* LDA IMM A9 1C */
    c->pc = 0xA91Du;
    v = 0x1Cu;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA91Du: /* STA ABS 8D C1 06 */
    c->pc = 0xA920u;
    ea = 0x06C1u;
    write8(c, ea, c->a);
    c->cpu_cycles += 4u; return 1;
case 0xA920u: /* LDA IMM A9 00 */
    c->pc = 0xA922u;
    v = 0x00u;
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 2u; return 1;
case 0xA922u: /* STA ZP 85 02 */
    c->pc = 0xA924u;
    ea = 0x02u;
    write8(c, ea, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA924u: /* LSR ABX 5E 20 04 */
    c->pc = 0xA927u;
    ea = (uint16_t)(0x0420u + c->x); v = read8(c, ea);
    v = lsr8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 7u; return 1;
case 0xA927u: /* CLC IMP 18 */
    c->pc = 0xA928u;
    c->p = (uint8_t)(c->p & (uint8_t)~MM2_FLAG_C);
    c->cpu_cycles += 2u; return 1;
case 0xA928u: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
case 0xA929u: /* LDA ZP A5 CB */
    c->pc = 0xA92Bu;
    ea = 0xCBu;
    v = read8(c, ea);
    c->a = v; set_nz(c, c->a);
    c->cpu_cycles += 3u; return 1;
case 0xA92Bu: /* BNE REL D0 02 */
    if ((c->p & MM2_FLAG_Z) == 0u) { c->cpu_cycles += 3u + ((((0xA92Du ^ 0xA92Fu) & 0xFF00u) != 0u) ? 1u : 0u); c->pc = 0xA92Fu; }
    else { c->cpu_cycles += 2u; c->pc = 0xA92Du; } return 1;
case 0xA92Du: /* ASL ZP 06 00 */
    c->pc = 0xA92Fu;
    ea = 0x00u; v = read8(c, ea);
    v = asl8(c, v);
    write8(c, ea, v);
    c->cpu_cycles += 5u; return 1;
case 0xA92Fu: /* RTS IMP 60 */
    ea = pull(c);
    ea = (uint16_t)(ea | ((uint16_t)pull(c) << 8));
    c->pc = (uint16_t)(ea + 1u); c->cpu_cycles += 6u; return 1;
    }
    return 0;
}
