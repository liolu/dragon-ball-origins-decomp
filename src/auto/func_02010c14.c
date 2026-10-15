#include "m2c.h"

void func_02010c14(void *arg0) {
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x668) = 0x7FFF;
    if (M2C_FIELD(arg0, s32 *, 0x630) & 0x100) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x630) = (s32) (M2C_FIELD(arg0, s32 *, 0x630) & ~0x100);
    M2C_FIELD(arg0, s32 *, 0x62C) = (s32) (M2C_FIELD(arg0, s32 *, 0x62C) & ~0x43000000);
    M2C_FIELD(arg0, s32 *, 0x630) = (s32) (M2C_FIELD(arg0, s32 *, 0x630) & 0xFFFFFD76);
}
