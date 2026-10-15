#include "m2c.h"

M2C_UNK func_020bae5c(s32, M2C_UNK);                /* extern */

void func_020afb50(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 > (s32) (M2C_FIELD(arg0, s32 *, 0x48) - 1)) {
        return;
    }
    func_020bae5c(1 << M2C_FIELD((arg0 + arg1), u8 *, 0x4C), arg2);
}
