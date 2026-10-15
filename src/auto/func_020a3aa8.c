#include "m2c.h"

M2C_UNK func_01ffe97c(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_020a3aa8(M2C_UNK arg0, void *arg1, s32 arg2, M2C_UNK arg3) {
    func_01ffe97c(arg0, M2C_FIELD(arg1, s32 *, 8) + arg2, arg3);
}
