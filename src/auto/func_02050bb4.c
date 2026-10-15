#include "m2c.h"

M2C_UNK func_0200ab58(void *, M2C_UNK, u32);        /* extern */
M2C_UNK func_0202c764(void *, s32, s32, s32);       /* extern */
M2C_UNK func_0202c844(void *, M2C_UNK);             /* extern */

u32 func_02050bb4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    u32 var_r4;
    void *var_r7;

    var_r7 = arg0;
    var_r4 = 0;
loop_1:
    if (M2C_FIELD(var_r7, s32 *, 0x274) == 0) {
        func_0200ab58(var_r7, arg1, var_r4);
        func_0202c844(var_r7, arg2);
        func_0202c764(var_r7, M2C_FIELD(arg3, s32 *, 0), M2C_FIELD(arg3, s32 *, 4), M2C_FIELD(arg3, s32 *, 8));
        return var_r4;
    }
    var_r4 += 1;
    var_r7 += 0x2FC;
    if (var_r4 >= 8U) {
        return 8U;
    }
    goto loop_1;
}
