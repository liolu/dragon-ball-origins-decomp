#include "m2c.h"

void func_02093830(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    if (arg1 != M2C_FIELD(arg0, s32 *, 0x6F8)) {
        M2C_FIELD(arg0, s32 *, 0xD88) = arg1;
        M2C_FIELD(arg0, s32 *, 0xD8C) = arg2;
        M2C_FIELD(arg0, s32 *, 0xD90) = 0;
        M2C_FIELD(arg0, u32 *, 0xD94) = arg3;
    }
    if (M2C_FIELD(arg0, s32 *, 0x6F8) == -1) {
        return;
    }
    if (arg3 <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x6F4) = 1;
        return;
    }
    if ((u32) (arg3 - 2) <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x6F4) = 3;
        return;
    }
    if ((u32) (arg3 - 4) <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x6F4) = 5;
    }
}
