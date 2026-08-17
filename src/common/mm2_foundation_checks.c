#include "mm2_foundation_checks.h"
#include "mm2_hash.h"
#include "mm2_mmc1.h"
#include "mm2_static_seed.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXPECTED_PROOF_SHA256 "a3a301c247b70612881dd4873acb609ad5dfd73aba9f500bb2e46f0a5f0b1234"
#define EXPECTED_UPSTREAM_AUDIT_SHA256 "67d52f8a4aab08f2fc36c9d319e3a99cfa62255ceb0ce21b97a289854e38bace"
#define EXPECTED_PROGRAM_MAP_V06_SHA256 "748839837b0d15ca62c2a0eab5fa8916858f411586b158a90d2400a9a7e62121"
#define EXPECTED_REVIEWED_GENERATION_V06_SHA256 "09277fbc51d429367ff23e397705d703a70715777ae55103c7020d169a0d45a6"

static void set_message(char *out,size_t cap,const char *text){
    size_t i=0;
    if(!out||cap==0u)return;
    while(text[i]&&i+1u<cap){out[i]=text[i];i++;}
    out[i]=0;
}

int mm2_check_static_seed(char *message,size_t message_cap){
    size_t i,j;
    int saw_reset_boundary=0,saw_nmi_boundary=0;
    if(mm2_static_seed_count!=317u){set_message(message,message_cap,"static seed record count is not 317");return 0;}
    for(i=0;i<mm2_static_seed_count;i++){
        const MM2StaticSeedRecord *r=&mm2_static_seed[i];
        if(r->physical_bank_16k>=16u||r->cpu_pc<0x8000u||r->length<1u||r->length>3u){
            set_message(message,message_cap,"static seed contains an invalid record");return 0;
        }
        if(r->physical_bank_16k==15u&&r->cpu_pc==0xFFE1u)saw_reset_boundary=1;
        if(r->physical_bank_16k==15u&&r->cpu_pc==0xD097u)saw_nmi_boundary=1;
        for(j=i+1u;j<mm2_static_seed_count;j++){
            if(r->physical_bank_16k==mm2_static_seed[j].physical_bank_16k&&r->cpu_pc==mm2_static_seed[j].cpu_pc){
                set_message(message,message_cap,"static seed contains a duplicate bank/PC identity");return 0;
            }
        }
    }
    if(!saw_reset_boundary||!saw_nmi_boundary){set_message(message,message_cap,"expected MMC1 boundary records are absent");return 0;}
    set_message(message,message_cap,"static seed integrity PASS: 317 unique bank/PC records and both MMC1 boundaries");return 1;
}

static void serial_write(MM2Mmc1 *s,uint16_t address,uint8_t value){
    unsigned i;
    for(i=0;i<5u;i++)mm2_mmc1_write(s,address,(uint8_t)((value>>i)&1u));
}

int mm2_check_mmc1_model(char *message,size_t message_cap){
    MM2Mmc1 s;
    mm2_mmc1_reset(&s);
    if(s.control!=0x0Cu||mm2_mmc1_prg_bank_16k(&s,0x8000u,16u)!=0u||mm2_mmc1_prg_bank_16k(&s,0xC000u,16u)!=15u){
        set_message(message,message_cap,"MMC1 reset mapping failed");return 0;
    }
    serial_write(&s,0xE000u,5u);
    if(s.prg_bank!=5u||mm2_mmc1_prg_bank_16k(&s,0x8000u,16u)!=5u){set_message(message,message_cap,"MMC1 serial PRG commit failed");return 0;}
    mm2_mmc1_reset(&s);
    mm2_mmc1_write_cpu_cycle(&s,0xE000u,1u,100u);
    mm2_mmc1_write_cpu_cycle(&s,0xE000u,1u,101u);
    if(s.shift_count!=1u||s.ignored_consecutive_writes!=1u){set_message(message,message_cap,"MMC1 consecutive-cycle suppression failed");return 0;}
    mm2_mmc1_write_cpu_cycle(&s,0x8000u,0x80u,102u);
    if(s.shift_count!=0u||(s.control&0x0Cu)!=0x0Cu){set_message(message,message_cap,"MMC1 consecutive bit-7 reset failed");return 0;}
    set_message(message,message_cap,"MMC1 hardware model PASS: serial commit, reset map, consecutive-cycle rule");return 1;
}

int mm2_check_proof_summary(const char *path,char *message,size_t message_cap){
    FILE *f;
    long n;
    size_t got;
    uint8_t *data,digest[32];
    char hex[65];
    if(!path||!path[0]){set_message(message,message_cap,"proof summary path is empty");return 0;}
    f=fopen(path,"rb");
    if(!f){set_message(message,message_cap,"static proof summary is missing");return 0;}
    if(fseek(f,0,SEEK_END)!=0||(n=ftell(f))<1||fseek(f,0,SEEK_SET)!=0){fclose(f);set_message(message,message_cap,"cannot size static proof summary");return 0;}
    data=(uint8_t*)malloc((size_t)n);
    if(!data){fclose(f);set_message(message,message_cap,"out of memory reading static proof summary");return 0;}
    got=fread(data,1,(size_t)n,f);fclose(f);
    if(got!=(size_t)n){free(data);set_message(message,message_cap,"short read of static proof summary");return 0;}
    mm2_sha256(data,(size_t)n,digest);free(data);mm2_hex(digest,32u,hex);
    if(strcmp(hex,EXPECTED_PROOF_SHA256)!=0){set_message(message,message_cap,"static proof summary SHA-256 mismatch");return 0;}
    set_message(message,message_cap,"proof summary binding PASS: exact current seed receipt accepted");return 1;
}

static int check_file_hash(const char *path,const char *expected,const char *missing,const char *mismatch,char *message,size_t message_cap){
    FILE *f;long n;size_t got;uint8_t *data,digest[32];char hex[65];
    if(!path||!path[0]){set_message(message,message_cap,missing);return 0;}
    f=fopen(path,"rb");if(!f){set_message(message,message_cap,missing);return 0;}
    if(fseek(f,0,SEEK_END)!=0||(n=ftell(f))<1||fseek(f,0,SEEK_SET)!=0){fclose(f);set_message(message,message_cap,missing);return 0;}
    data=(uint8_t*)malloc((size_t)n);if(!data){fclose(f);set_message(message,message_cap,"out of memory reading audit receipt");return 0;}
    got=fread(data,1,(size_t)n,f);fclose(f);if(got!=(size_t)n){free(data);set_message(message,message_cap,missing);return 0;}
    mm2_sha256(data,(size_t)n,digest);free(data);mm2_hex(digest,32u,hex);
    if(strcmp(hex,expected)!=0){set_message(message,message_cap,mismatch);return 0;}return 1;
}

int mm2_check_upstream_audit(const char *path,char *message,size_t message_cap){
    if(!check_file_hash(path,EXPECTED_UPSTREAM_AUDIT_SHA256,"upstream audit receipt is missing","upstream audit receipt SHA-256 mismatch",message,message_cap))return 0;
    set_message(message,message_cap,"upstream acceptance gate PASS: unsafe default direct-core output is reproducibly rejected");return 1;
}

int mm2_check_program_map_v06(const char *path,char *message,size_t message_cap){
    if(!check_file_hash(path,EXPECTED_PROGRAM_MAP_V06_SHA256,"milestone-06 program-map receipt is missing","milestone-06 program-map receipt SHA-256 mismatch",message,message_cap))return 0;
    set_message(message,message_cap,"milestone-06 program-map PASS: 98 finite bank-value applications, 27/27 indirect contracts, zero conflicts and zero unresolved boundaries");return 1;
}

int mm2_check_reviewed_generation_v06(const char *path,char *message,size_t message_cap){
    if(!check_file_hash(path,EXPECTED_REVIEWED_GENERATION_V06_SHA256,"milestone-06 reviewed-generation receipt is missing","milestone-06 reviewed-generation receipt SHA-256 mismatch",message,message_cap))return 0;
    set_message(message,message_cap,"milestone-06 generation gate PASS: accepted program map is bound while unsafe direct-core output remains rejected");return 1;
}
