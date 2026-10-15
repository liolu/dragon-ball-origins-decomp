#include "m2c.h"

void func_0202aae0(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x14)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) | 1);
}
