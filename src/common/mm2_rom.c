#include "mm2_rom.h"
#include "mm2_hash.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEGACY_SNAPSHOT_SHA "49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
#define EXPECTED_PAYLOAD_SHA "1e588d435e75d80c5c0b578b4fa8d196f2cf4346c11c9a7b7e435d768828ad01"
#define EXPECTED_PRG_SIZE 262144u
#define INES_HEADER_SIZE 16u
static void seterr(char *out, size_t cap, const char *msg) { size_t i=0; if(!out||!cap)return; while(msg[i]&&i+1<cap){out[i]=msg[i];i++;} out[i]=0; }

static int rom_size(uint8_t low, unsigned high, size_t unit, size_t *size) {
    if (high == 0xFu) {
        unsigned exponent = low >> 2;
        size_t multiplier = 2u * (low & 3u) + 1u;
        if (exponent >= sizeof(size_t) * 8u || multiplier > (SIZE_MAX >> exponent))
            return 0;
        *size = multiplier << exponent;
    } else {
        *size = ((high << 8) | low) * unit;
    }
    return 1;
}

static int load_open_rom(FILE *f, MM2Rom *rom, char *error, size_t error_cap) {
    long n; size_t got, off = 0u; uint8_t digest[32];
    if (!rom) { seterr(error,error_cap,"ROM output pointer is null"); return 0; }
    memset(rom,0,sizeof(*rom));
    if(!f){seterr(error,error_cap,"cannot open ROM");return 0;}
    if(fseek(f,0,SEEK_END)!=0||(n=ftell(f))<16||fseek(f,0,SEEK_SET)!=0){fclose(f);seterr(error,error_cap,"cannot size ROM");return 0;}
    rom->file_data=(uint8_t*)malloc((size_t)n); if(!rom->file_data){fclose(f);seterr(error,error_cap,"out of memory");return 0;}
    got=fread(rom->file_data,1,(size_t)n,f); fclose(f); if(got!=(size_t)n){mm2_rom_free(rom);seterr(error,error_cap,"short ROM read");return 0;}
    rom->file_size=(size_t)n;
    if (memcmp(rom->file_data, "NES\x1a", 4) == 0) {
        const uint8_t *header = rom->file_data;
        unsigned size_high;
        rom->headered = 1;
        rom->trainer = (header[6] & 4u) != 0;
        rom->battery = (header[6] & 2u) != 0;
        rom->mapper = (header[6] >> 4) | (header[7] & 0xF0u);
        rom->mirroring_vertical = (header[6] & 1u) != 0;
        rom->four_screen = (header[6] & 8u) != 0;
        rom->ines2 = (header[7] & 0x0Cu) == 0x08u;
        if (rom->ines2) rom->mapper |= (header[8] & 0x0Fu) << 8;
        size_high = rom->ines2 ? header[9] : 0u;
        if (!rom_size(header[4], size_high & 0xFu, 16384u, &rom->prg_size) ||
            !rom_size(header[5], size_high >> 4, 8192u, &rom->chr_size)) {
            mm2_rom_free(rom);
            seterr(error, error_cap, "invalid NES 2.0 PRG/CHR size");
            return 0;
        }
        off = INES_HEADER_SIZE + (rom->trainer ? 512u : 0u);
    } else if (rom->file_size == EXPECTED_PRG_SIZE) {
        /* A raw dump has no board metadata. Its exact payload hash is required. */
        rom->prg_size = EXPECTED_PRG_SIZE;
        rom->mapper = 1;
    } else {
        mm2_rom_free(rom);
        seterr(error, error_cap, "not an iNES ROM or a 256 KiB raw NES dump");
        return 0;
    }
    if (off > rom->file_size || rom->prg_size > rom->file_size - off ||
        rom->chr_size > rom->file_size - off - rom->prg_size) {
        mm2_rom_free(rom);
        seterr(error, error_cap, "truncated PRG/CHR payload");
        return 0;
    }
    rom->prg=rom->file_data+off; rom->chr=rom->prg+rom->prg_size; rom->payload_size=rom->prg_size+rom->chr_size;
    if(rom->prg_size<6){mm2_rom_free(rom);seterr(error,error_cap,"PRG too small for vectors");return 0;}
    rom->nmi_vector=(uint16_t)(rom->prg[rom->prg_size-6]|((uint16_t)rom->prg[rom->prg_size-5]<<8));
    rom->reset_vector=(uint16_t)(rom->prg[rom->prg_size-4]|((uint16_t)rom->prg[rom->prg_size-3]<<8));
    rom->irq_vector=(uint16_t)(rom->prg[rom->prg_size-2]|((uint16_t)rom->prg[rom->prg_size-1]<<8));
    mm2_sha256(rom->file_data,rom->file_size,digest); mm2_hex(digest,32,rom->sha256);
    mm2_sha256(rom->prg, rom->payload_size, digest);
    mm2_hex(digest, 32, rom->payload_sha256);
    rom->payload_crc32=mm2_crc32(rom->prg,rom->payload_size); seterr(error,error_cap,""); return 1;
}
int mm2_rom_load(const char *path, MM2Rom *rom, char *error, size_t error_cap) {
    return load_open_rom(rom && path ? fopen(path,"rb") : NULL, rom, error, error_cap);
}
#ifdef _WIN32
int mm2_rom_load_wide(const wchar_t *path, MM2Rom *rom, char *error, size_t error_cap) {
    return load_open_rom(rom && path ? _wfopen(path,L"rb") : NULL, rom, error, error_cap);
}
#endif
void mm2_rom_free(MM2Rom *rom){if(rom&&rom->file_data)free(rom->file_data);if(rom)memset(rom,0,sizeof(*rom));}
int mm2_rom_is_expected(const MM2Rom *r, char *reason, size_t cap){
    if(!r){seterr(reason,cap,"ROM is null");return 0;}
    if(r->mapper!=1){seterr(reason,cap,"ROM is not mapper 1/MMC1");return 0;}
    if(r->prg_size!=EXPECTED_PRG_SIZE||r->chr_size!=0u){seterr(reason,cap,"unexpected PRG or CHR size");return 0;}
    if(r->trainer||r->battery||r->four_screen){seterr(reason,cap,"unexpected iNES trainer, battery, or four-screen flag");return 0;}
    if (r->headered && (!r->file_data || (r->file_data[7] & 3u) != 0u)) {
        seterr(reason, cap, "unsupported NES console type");
        return 0;
    }
    if (r->file_size != EXPECTED_PRG_SIZE + (r->headered ? INES_HEADER_SIZE : 0u)) {
        seterr(reason, cap, "unexpected data after the ROM payload");
        return 0;
    }
    if (strcmp(r->payload_sha256, EXPECTED_PAYLOAD_SHA) != 0) {
        seterr(reason, cap, "game payload SHA-256 does not match Mega Man 2 (USA)");
        return 0;
    }
    seterr(reason,cap,"exact expected Mega Man 2 (USA) ROM"); return 1;
}
const char *mm2_rom_snapshot_sha256(const MM2Rom *rom) {
    /* Keep version 1 snapshots readable in both directions across packaging variants. */
    if (!rom) return "";
    return mm2_rom_is_expected(rom, NULL, 0u) ? LEGACY_SNAPSHOT_SHA : rom->sha256;
}
int mm2_rom_write_json(const MM2Rom *r,const char *path){
    FILE*f=fopen(path,"wb"); char reason[160]; int expected;
    if(!f)return 0;
    expected=mm2_rom_is_expected(r,reason,sizeof(reason));
    fprintf(f,"{\n  \"format\": \"mega-man-2-rom-audit-v1\",\n  \"file_size\": %llu,\n  \"sha256\": \"%s\",\n  \"payload_crc32\": \"%08X\",\n  \"payload_sha256\": \"%s\",\n  \"mapper\": %d,\n  \"board_family\": \"MMC1/SxROM\",\n  \"prg_bytes\": %llu,\n  \"chr_rom_bytes\": %llu,\n  \"chr_ram_bytes\": 8192,\n  \"nmi_vector\": \"%04X\",\n  \"reset_vector\": \"%04X\",\n  \"irq_vector\": \"%04X\",\n  \"expected\": %s,\n  \"reason\": \"%s\"\n}\n",(unsigned long long)r->file_size,r->sha256,r->payload_crc32,r->payload_sha256,r->mapper,(unsigned long long)r->prg_size,(unsigned long long)r->chr_size,r->nmi_vector,r->reset_vector,r->irq_vector,expected?"true":"false",reason);
    fclose(f);return 1;
}
