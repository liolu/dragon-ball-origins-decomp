#include "m2c.h"

extern s16 data_020e79f0;
extern s16 data_0216cde0;

void func_020b575c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020e79f0       = 0;
    data_0216cde0       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
