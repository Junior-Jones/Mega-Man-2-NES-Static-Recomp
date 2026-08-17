#include "mm2_mmc1.h"
#include <string.h>
void mm2_mmc1_reset(MM2Mmc1 *s){ if(!s)return; memset(s,0,sizeof(*s)); s->control=0x0Cu; }
static void commit(MM2Mmc1 *s,uint16_t address,uint8_t value){
    if(address<0xA000u)s->control=(uint8_t)(value&0x1Fu);
    else if(address<0xC000u)s->chr_bank0=(uint8_t)(value&0x1Fu);
    else if(address<0xE000u)s->chr_bank1=(uint8_t)(value&0x1Fu);
    else s->prg_bank=(uint8_t)(value&0x1Fu);
    s->commit_count++;
}
void mm2_mmc1_write_cpu_cycle(MM2Mmc1 *s,uint16_t address,uint8_t value,uint64_t cpu_cycle){
    int consecutive;
    if(!s||address<0x8000u)return;
    s->write_count++;
    consecutive=s->has_last_cpu_write_cycle&&cpu_cycle==s->last_cpu_write_cycle+1u;
    s->last_cpu_write_cycle=cpu_cycle;
    s->has_last_cpu_write_cycle=1u;
    if(value&0x80u){s->shift=0;s->shift_count=0;s->control=(uint8_t)(s->control|0x0Cu);return;}
    if(consecutive){s->ignored_consecutive_writes++;return;}
    s->shift=(uint8_t)(s->shift|((value&1u)<<s->shift_count)); s->shift_count++;
    if(s->shift_count==5u){commit(s,address,s->shift);s->shift=0;s->shift_count=0;}
}
void mm2_mmc1_write(MM2Mmc1 *s,uint16_t address,uint8_t value){
    uint64_t cycle;
    if(!s)return;
    cycle=s->has_last_cpu_write_cycle?s->last_cpu_write_cycle+2u:0u;
    mm2_mmc1_write_cpu_cycle(s,address,value,cycle);
}
unsigned mm2_mmc1_prg_bank_16k(const MM2Mmc1 *s,uint16_t address,unsigned bank_count){
    unsigned mode, selected, even_bank;
    if(!s||bank_count==0u||address<0x8000u)return 0u;
    mode=(unsigned)((s->control>>2)&3u); selected=(unsigned)(s->prg_bank&0x0Fu)%bank_count;
    if(mode<=1u){even_bank=selected&~1u; return (address<0xC000u?even_bank:even_bank+1u)%bank_count;}
    if(mode==2u)return address<0xC000u?0u:selected;
    return address<0xC000u?selected:bank_count-1u;
}
uint32_t mm2_mmc1_prg_offset(const MM2Mmc1 *s,uint16_t address,unsigned bank_count){
    unsigned bank=mm2_mmc1_prg_bank_16k(s,address,bank_count); return (uint32_t)(bank*0x4000u+(address&0x3FFFu));
}
uint32_t mm2_mmc1_chr_offset(const MM2Mmc1 *s,uint16_t address,unsigned chr_bytes){
    unsigned bank_count_4k, mode, bank;
    if(!s||address>=0x2000u||chr_bytes==0u)return (uint32_t)(address&0x1FFFu);
    bank_count_4k=chr_bytes/0x1000u; if(bank_count_4k==0u)bank_count_4k=1u; mode=(unsigned)((s->control>>4)&1u);
    if(mode==0u){bank=((unsigned)s->chr_bank0&0x1Eu)%bank_count_4k; if(address>=0x1000u)bank=(bank+1u)%bank_count_4k;}
    else bank=(address<0x1000u?(unsigned)s->chr_bank0:(unsigned)s->chr_bank1)%bank_count_4k;
    return (uint32_t)(bank*0x1000u+(address&0x0FFFu));
}
MM2MirrorMode mm2_mmc1_mirroring(const MM2Mmc1 *s){return s?(MM2MirrorMode)(s->control&3u):MM2_MIRROR_ONE_LOW;}
