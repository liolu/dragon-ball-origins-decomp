#include "m2c.h"

s32 func_020b09a8(s32);                             /* extern */
s32 func_020b0e28(M2C_UNK);                         /* extern */
M2C_UNK func_020b0e50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */

void func_020b1920(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020ba034();
    temp_r4 = func_020b09a8(arg1);
    if (arg0 == func_020b0e28(arg2)) {
        func_020b0e50(arg2, 0);
    }
    func_020b09a8(temp_r4);
    func_020ba048(temp_r5);
}
