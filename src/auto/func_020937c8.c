#include "m2c.h"

void func_020937c8(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    if (arg1 != M2C_FIELD(arg0, s32 *, 0x44)) {
        M2C_FIELD(arg0, s32 *, 0x6D4) = arg1;
        M2C_FIELD(arg0, s32 *, 0x6D8) = arg2;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
        M2C_FIELD(arg0, u32 *, 0x6E0) = arg3;
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) == -1) {
        return;
    }
    if (arg3 <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x40) = 1;
        return;
    }
    if ((u32) (arg3 - 2) <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x40) = 3;
        return;
    }
    if ((u32) (arg3 - 4) <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x40) = 5;
    }
}
