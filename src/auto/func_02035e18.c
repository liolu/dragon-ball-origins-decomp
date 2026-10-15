#include "m2c.h"

M2C_UNK func_0209d19c(void *, s32);                 /* extern */
s32 func_020c4a58(s32, M2C_UNK);                    /* extern */

void func_02035e18(s32 arg0, s32 arg1, M2C_UNK arg2, void *arg3, void *arg4) {
    s32 var_r4;

    var_r4 = func_020c4a58(arg1 * M2C_FIELD(arg3, s32 *, 0xC), arg2);
    if ((var_r4 <= 0) && (arg1 > 0)) {
        var_r4 = 1;
    }
    func_0209d19c(arg3, var_r4);
    if ((s32) M2C_FIELD(arg4, s32 *, 0x24) > var_r4) {
        return;
    }
    func_0209d19c(arg4, var_r4);
}
