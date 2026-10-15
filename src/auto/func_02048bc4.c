#include "m2c.h"

M2C_UNK func_0202c7b4(void *, s32);                 /* extern */
M2C_UNK func_0202c7f4(void *, s32);                 /* extern */
s32 func_02047c7c(s32);                             /* extern */
s32 func_020c4a58(s32, u32);                        /* extern */

s32 func_02048bc4(void *arg0) {
    s32 var_r0;
    void *temp_r5;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xC) <= 1U) || (func_02047c7c(M2C_FIELD(arg0, s32 *, 0)) != 0)) {
        func_0202c7b4(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, s32 *, 8));
        return 1;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 4);
    var_r0  = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(temp_r5, s32 *, 0x5C);
    if (var_r0 >= 0x8000) {
        var_r0 -= 0x10000;
    }
    if (var_r0 < -0x8000) {
        var_r0 += 0x10000;
    }
    func_0202c7f4(temp_r5, func_020c4a58(var_r0, M2C_FIELD(arg0, u32 *, 0xC)));
    M2C_FIELD(arg0, u32 *, 0xC) = (u32) (M2C_FIELD(arg0, u32 *, 0xC) - 1);
    return 0;
}
