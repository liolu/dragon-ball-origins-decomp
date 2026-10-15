#include "m2c.h"

void func_0202c7f4(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + arg1);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (M2C_FIELD(arg0, s32 *, 0x94) | 1);
}
