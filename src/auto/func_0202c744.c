#include "m2c.h"

void func_0202c744(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x54)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (M2C_FIELD(arg0, s32 *, 0x94) | 1);
}
