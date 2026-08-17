#include "mm2_rom.h"
#include "mm2_hash.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXPECTED_SHA "49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
#define EXPECTED_CRC 0x0FCFC04Du
static void seterr(char *out, size_t cap, const char *msg) { size_t i=0; if(!out||!cap)return; while(msg[i]&&i+1<cap){out[i]=msg[i];i++;} out[i]=0; }
int mm2_rom_load(const char *path, MM2Rom *rom, char *error, size_t error_cap) {
    FILE *f; long n; size_t got, off; uint8_t digest[32];
    if (!rom) { seterr(error,error_cap,"ROM output pointer is null"); return 0; }
    memset(rom,0,sizeof(*rom));
    f=fopen(path,"rb"); if(!f){seterr(error,error_cap,"cannot open ROM");return 0;}
    if(fseek(f,0,SEEK_END)!=0||(n=ftell(f))<16||fseek(f,0,SEEK_SET)!=0){fclose(f);seterr(error,error_cap,"cannot size ROM");return 0;}
    rom->file_data=(uint8_t*)malloc((size_t)n); if(!rom->file_data){fclose(f);seterr(error,error_cap,"out of memory");return 0;}
    got=fread(rom->file_data,1,(size_t)n,f); fclose(f); if(got!=(size_t)n){mm2_rom_free(rom);seterr(error,error_cap,"short ROM read");return 0;}
    rom->file_size=(size_t)n;
    if(memcmp(rom->file_data,"NES\x1a",4)!=0){mm2_rom_free(rom);seterr(error,error_cap,"not an iNES ROM");return 0;}
    rom->trainer=(rom->file_data[6]&4)?1:0; rom->battery=(rom->file_data[6]&2)?1:0;
    rom->mapper=(rom->file_data[6]>>4)|(rom->file_data[7]&0xf0);
    rom->mirroring_vertical=(rom->file_data[6]&1)?1:0; rom->four_screen=(rom->file_data[6]&8)?1:0;
    rom->ines2=((rom->file_data[7]&0x0c)==0x08)?1:0;
    rom->prg_size=(size_t)rom->file_data[4]*16384u; rom->chr_size=(size_t)rom->file_data[5]*8192u;
    off=16u+(rom->trainer?512u:0u);
    if(off+rom->prg_size+rom->chr_size>rom->file_size){mm2_rom_free(rom);seterr(error,error_cap,"truncated PRG/CHR payload");return 0;}
    rom->prg=rom->file_data+off; rom->chr=rom->prg+rom->prg_size; rom->payload_size=rom->prg_size+rom->chr_size;
    if(rom->prg_size<6){mm2_rom_free(rom);seterr(error,error_cap,"PRG too small for vectors");return 0;}
    rom->nmi_vector=(uint16_t)(rom->prg[rom->prg_size-6]|((uint16_t)rom->prg[rom->prg_size-5]<<8));
    rom->reset_vector=(uint16_t)(rom->prg[rom->prg_size-4]|((uint16_t)rom->prg[rom->prg_size-3]<<8));
    rom->irq_vector=(uint16_t)(rom->prg[rom->prg_size-2]|((uint16_t)rom->prg[rom->prg_size-1]<<8));
    mm2_sha256(rom->file_data,rom->file_size,digest); mm2_hex(digest,32,rom->sha256);
    rom->payload_crc32=mm2_crc32(rom->prg,rom->payload_size); seterr(error,error_cap,""); return 1;
}
void mm2_rom_free(MM2Rom *rom){if(rom&&rom->file_data)free(rom->file_data);if(rom)memset(rom,0,sizeof(*rom));}
int mm2_rom_is_expected(const MM2Rom *r, char *reason, size_t cap){
    if(!r){seterr(reason,cap,"ROM is null");return 0;}
    if(strcmp(r->sha256,EXPECTED_SHA)!=0){seterr(reason,cap,"full-file SHA-256 does not match Mega Man 2 (USA)");return 0;}
    if(r->payload_crc32!=EXPECTED_CRC){seterr(reason,cap,"PRG payload CRC32 mismatch");return 0;}
    if(r->mapper!=1){seterr(reason,cap,"ROM is not mapper 1/MMC1");return 0;}
    if(r->prg_size!=262144u||r->chr_size!=0u){seterr(reason,cap,"unexpected PRG or CHR size");return 0;}
    if(r->trainer||r->battery||r->four_screen){seterr(reason,cap,"unexpected iNES trainer, battery, or four-screen flag");return 0;}
    if(r->nmi_vector!=0xCFF0u||r->reset_vector!=0xFFE0u||r->irq_vector!=0xFFE0u){seterr(reason,cap,"interrupt vectors do not match expected ROM");return 0;}
    seterr(reason,cap,"exact expected Mega Man 2 (USA) ROM"); return 1;
}
int mm2_rom_write_json(const MM2Rom *r,const char *path){
    FILE*f=fopen(path,"wb"); char reason[160]; int expected;
    if(!f)return 0;
    expected=mm2_rom_is_expected(r,reason,sizeof(reason));
    fprintf(f,"{\n  \"format\": \"mega-man-2-rom-audit-v1\",\n  \"file_size\": %llu,\n  \"sha256\": \"%s\",\n  \"payload_crc32\": \"%08X\",\n  \"mapper\": %d,\n  \"board_family\": \"MMC1/SxROM\",\n  \"prg_bytes\": %llu,\n  \"chr_rom_bytes\": %llu,\n  \"chr_ram_bytes\": 8192,\n  \"nmi_vector\": \"%04X\",\n  \"reset_vector\": \"%04X\",\n  \"irq_vector\": \"%04X\",\n  \"expected\": %s,\n  \"reason\": \"%s\"\n}\n",(unsigned long long)r->file_size,r->sha256,r->payload_crc32,r->mapper,(unsigned long long)r->prg_size,(unsigned long long)r->chr_size,r->nmi_vector,r->reset_vector,r->irq_vector,expected?"true":"false",reason);
    fclose(f);return 1;
}
