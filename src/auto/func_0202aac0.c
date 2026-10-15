#include "m2c.h"

void func_0202aac0(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x10)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) | 1);
}
