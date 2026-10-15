#include "m2c.h"

M2C_UNK func_020c0f94(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c1004(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020c114c();                                /* extern */

s32 func_020c1b54(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020c114c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c0f94(1, arg0);
    var_r0 = func_020c1004(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
