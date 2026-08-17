#include "mm2_foundation_checks.h"
#include "mm2_static_seed.h"
#include <stdio.h>
#include <string.h>
int main(int argc,char**argv){size_t i;unsigned long sum=0;char message[256];if(argc==2&&strcmp(argv[1],"--self-test")==0){
 if(!mm2_check_static_seed(message,sizeof(message))){fprintf(stderr,"%s\n",message);return 1;}
 for(i=0;i<mm2_static_seed_count;i++)sum+=mm2_static_seed[i].opcode;
 printf("PASS static-seed-link records=%zu opcode_sum=%lu\n",mm2_static_seed_count,sum);return 0;}
fprintf(stderr,"usage: %s --self-test\n",argv[0]);return 2;}
