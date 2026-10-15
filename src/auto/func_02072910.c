#include "m2c.h"

M2C_UNK func_0202bec0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02072998(void *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_02072910(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 var_r0;
    s8 temp_r1;

    if (arg3 != 0) {
        temp_r1 = M2C_FIELD(arg0, s8 *, 0x3FD);
        if ((temp_r1 != -1) && ((s32) temp_r1 < 0x2D)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            func_0202bec0(M2C_FIELD(arg0, s32 *, 0x20), arg1, arg2, 0);
        } else {
            goto block_7;
        }
    } else {
    block_7:
        func_0202bec0(M2C_FIELD(arg0, s32 *, 0x18), arg1, arg2, 0);
    }
    func_02072998(arg0, arg1, arg2, arg4);
}
