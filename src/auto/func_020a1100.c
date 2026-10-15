#include "m2c.h"

M2C_UNK func_020b7cbc();                            /* extern */
M2C_UNK func_020b7d18(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_020b7e58();                            /* extern */
M2C_UNK func_020b963c(M2C_UNK, s32);                /* extern */

s32 func_020a1100(s32 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = *arg0;
    func_020b963c(arg1, arg2);
    func_020b7cbc();
    func_020b7d18(arg1, *arg0, arg2);
    func_020b7e58();
    *arg0 += arg2;
    return temp_r4;
}
