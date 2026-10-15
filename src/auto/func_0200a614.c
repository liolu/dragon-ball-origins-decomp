#include "m2c.h"

void func_0200a614(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x2EC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2DC)                = 1;
}
