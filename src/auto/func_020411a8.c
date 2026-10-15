#include "m2c.h"

void func_020411a8(void *arg0, s32 arg1, s32 arg2) {
    if ((M2C_FIELD(arg0, s32 *, 0x508) == 1) && (M2C_FIELD(arg0, s32 *, 0x510) == arg1) &&
        (M2C_FIELD(arg0, s32 *, 0x514) == arg2)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x508) = 1;
    M2C_FIELD(arg0, s32 *, 0x50C) = 1;
    M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    M2C_FIELD(arg0, s32 *, 0x514) = arg2;
}
