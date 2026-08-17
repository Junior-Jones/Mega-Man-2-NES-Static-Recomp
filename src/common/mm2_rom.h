#ifndef MM2_ROM_H
#define MM2_ROM_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct MM2Rom {
    uint8_t *file_data;
    size_t file_size;
    uint8_t *prg;
    uint8_t *chr;
    size_t prg_size;
    size_t chr_size;
    size_t payload_size;
    int mapper;
    int trainer;
    int battery;
    int mirroring_vertical;
    int four_screen;
    int ines2;
    uint16_t nmi_vector;
    uint16_t reset_vector;
    uint16_t irq_vector;
    char sha256[65];
    uint32_t payload_crc32;
} MM2Rom;
int mm2_rom_load(const char *path, MM2Rom *rom, char *error, size_t error_cap);
void mm2_rom_free(MM2Rom *rom);
int mm2_rom_is_expected(const MM2Rom *rom, char *reason, size_t reason_cap);
int mm2_rom_write_json(const MM2Rom *rom, const char *path);
#ifdef __cplusplus
}
#endif
#endif
