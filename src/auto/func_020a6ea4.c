#include "m2c.h"

M2C_UNK func_01ffe844(s32, M2C_UNK);                /* extern */

void func_020a6ea4(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_01ffe844(M2C_FIELD(arg0, s32 *, 8) + arg1, arg2);
}
