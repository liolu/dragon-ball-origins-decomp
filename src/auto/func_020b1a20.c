#include "m2c.h"

M2C_UNK func_020baf08(s32, s32);                    /* extern */
M2C_UNK func_020bbd1c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020bbd50(M2C_UNK, M2C_UNK);                /* extern */

void func_020b1a20(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_020bbd50(arg2, arg3)) {
        func_020bbd1c(arg2, arg3, 0);
    }
    func_020baf08(arg0, arg0 + arg1);
}
