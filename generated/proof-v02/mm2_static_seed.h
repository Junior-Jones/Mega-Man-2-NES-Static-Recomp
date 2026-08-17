#ifndef MM2_STATIC_SEED_H
#define MM2_STATIC_SEED_H
#include <stddef.h>
#include <stdint.h>
typedef struct MM2StaticSeedRecord { uint8_t physical_bank_16k; uint16_t cpu_pc; uint32_t prg_offset; uint8_t opcode; uint8_t length; uint8_t base_cycles; } MM2StaticSeedRecord;
extern const MM2StaticSeedRecord mm2_static_seed[];
extern const size_t mm2_static_seed_count;
#endif
