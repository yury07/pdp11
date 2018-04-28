#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "load_inst.h"

//#define N_mem 1
char mem[200000];
int16_t R[7];
int16_t pc;

int main() {
    mem[0] = 0x05;
    mem[1] = 0x61;
    int16_t x = 0x0;
    //x = *mem;

    x = *(int16_t*)(mem);
    printf("%x\n", mem[0]);
    printf("%x\n", mem[1]);
    printf("%x\n", x);
    return 0;
}