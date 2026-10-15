#include "m2c.h"

s32 func_01ffe710(s32, M2C_UNK);                    /* extern */

void func_020a6ebc(s32 *arg0, void *arg1, s32 arg2, M2C_UNK arg3) {
    *arg0 = func_01ffe710(M2C_FIELD(arg1, s32 *, 8) + arg2, arg3);
}
