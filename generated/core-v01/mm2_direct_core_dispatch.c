/* Generated bank dispatch index. Do not edit. */
#include "internal/mm2_direct_core_internal.h"

int mm2_direct_core_bank_09(MM2DirectCore *c, uint16_t pc);
int mm2_direct_core_bank_0b(MM2DirectCore *c, uint16_t pc);
int mm2_direct_core_bank_0c(MM2DirectCore *c, uint16_t pc);
int mm2_direct_core_bank_0d(MM2DirectCore *c, uint16_t pc);
int mm2_direct_core_bank_0e(MM2DirectCore *c, uint16_t pc);
int mm2_direct_core_bank_0f(MM2DirectCore *c, uint16_t pc);

int mm2_direct_core_dispatch(MM2DirectCore *c, uint8_t bank,
                             uint16_t pc) {
    switch (bank) {
    case 0x09u: return mm2_direct_core_bank_09(c, pc);
    case 0x0Bu: return mm2_direct_core_bank_0b(c, pc);
    case 0x0Cu: return mm2_direct_core_bank_0c(c, pc);
    case 0x0Du: return mm2_direct_core_bank_0d(c, pc);
    case 0x0Eu: return mm2_direct_core_bank_0e(c, pc);
    case 0x0Fu: return mm2_direct_core_bank_0f(c, pc);
    }
    return 0;
}
