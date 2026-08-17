#ifndef MM2_MMC1_H
#define MM2_MMC1_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef enum MM2MirrorMode { MM2_MIRROR_ONE_LOW=0, MM2_MIRROR_ONE_HIGH=1, MM2_MIRROR_VERTICAL=2, MM2_MIRROR_HORIZONTAL=3 } MM2MirrorMode;
typedef struct MM2Mmc1 {
    uint8_t shift;
    uint8_t shift_count;
    uint8_t control;
    uint8_t chr_bank0;
    uint8_t chr_bank1;
    uint8_t prg_bank;
    uint64_t write_count;
    uint64_t ignored_consecutive_writes;
    uint64_t commit_count;
    uint64_t last_cpu_write_cycle;
    uint8_t has_last_cpu_write_cycle;
} MM2Mmc1;
void mm2_mmc1_reset(MM2Mmc1 *state);
void mm2_mmc1_write(MM2Mmc1 *state, uint16_t address, uint8_t value);
void mm2_mmc1_write_cpu_cycle(MM2Mmc1 *state, uint16_t address, uint8_t value, uint64_t cpu_cycle);
unsigned mm2_mmc1_prg_bank_16k(const MM2Mmc1 *state, uint16_t address, unsigned bank_count);
uint32_t mm2_mmc1_prg_offset(const MM2Mmc1 *state, uint16_t address, unsigned bank_count);
uint32_t mm2_mmc1_chr_offset(const MM2Mmc1 *state, uint16_t address, unsigned chr_bytes);
MM2MirrorMode mm2_mmc1_mirroring(const MM2Mmc1 *state);
#ifdef __cplusplus
}
#endif
#endif
