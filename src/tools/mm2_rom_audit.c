#include "mm2_rom.h"
#include <stdio.h>
int main(int argc,char**argv){MM2Rom r;char error[256],reason[256];int ok;if(argc!=3){fprintf(stderr,"usage: %s ROM OUTPUT.json\n",argv[0]);return 2;}if(!mm2_rom_load(argv[1],&r,error,sizeof(error))){fprintf(stderr,"ROM load failed: %s\n",error);return 3;}ok=mm2_rom_is_expected(&r,reason,sizeof(reason));if(!mm2_rom_write_json(&r,argv[2])){fprintf(stderr,"cannot write %s\n",argv[2]);mm2_rom_free(&r);return 4;}printf("%s\n",reason);mm2_rom_free(&r);return ok?0:5;}
