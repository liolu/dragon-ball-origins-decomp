#include "m2c.h"

void func_0202c1f0(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 <= 0) && (M2C_FIELD(arg0, s32 *, 0x94) & 2)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (M2C_FIELD(arg0, s32 *, 0x94) | 2);
}
