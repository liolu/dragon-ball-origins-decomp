#include "m2c.h"

M2C_UNK func_020c0f94(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c1004(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020c1194(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020c1ef4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020c1194(1, 5);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c0f94(0xB, arg0);
    var_r0 = func_020c1004(0xB, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
