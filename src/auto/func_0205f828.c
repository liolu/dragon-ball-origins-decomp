#include "m2c.h"

M2C_UNK func_0202ba78(M2C_UNK, s32);                /* extern */
s32 func_0205f654(M2C_UNK, s32, s32);               /* extern */

s32 func_0205f828(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 temp_r0;

    temp_r0 = func_0205f654(arg0, arg2, arg4);
    *arg3 -= temp_r0;
    func_0202ba78(arg1, arg2);
    return arg2 + temp_r0;
}
