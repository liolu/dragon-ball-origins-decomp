#include "m2c.h"

void func_0209b808(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) && (M2C_FIELD(arg0, s32 *, 0x20) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 1);
}
