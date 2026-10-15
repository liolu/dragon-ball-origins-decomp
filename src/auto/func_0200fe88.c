#include "m2c.h"

s32 func_0200fe88(void *arg0, s32 arg1) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0x62C) = (s32) (M2C_FIELD(arg0, s32 *, 0x62C) & ~0x10000000);
    temp_r2                       = M2C_FIELD(arg0, s32 *, 0x764);
    if (temp_r2 > 0) {
        M2C_FIELD(arg0, s32 *, 0x764) = (s32) (temp_r2 - 1);
    }
    return arg1 + 4;
}
