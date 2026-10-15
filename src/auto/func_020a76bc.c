#include "m2c.h"

void func_020a76bc(s32 *arg0, void *arg1, s32 arg2) {
    *arg0 = M2C_FIELD(((arg2 * 0x14) + M2C_FIELD(arg1, s32 *, 0x28)), s32 *, 0x10);
}
