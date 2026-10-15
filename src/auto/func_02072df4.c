#include "m2c.h"

M2C_UNK func_020715b8(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_020b4f7c(s32, s32, s32);               /* extern */

void func_02072df4(s32 arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;

    if (arg1 == NULL) {
        return;
    }
    temp_r0 = arg0 + 0x3CC;
    func_020b4f7c(temp_r0, arg1 + 0xC, temp_r0);
    temp_r0_2 = M2C_FIELD(arg1, s32 *, 8);
    var_r1    = -1;
    switch (temp_r0_2) {                            /* irregular */
        case 1:
            var_r1 = 0x16;
            break;
        case 0:
            var_r1 = 4;
            break;
    }
    if (var_r1 == -1) {
        return;
    }
    func_020715b8(arg0, var_r1, var_r1, 1);
}
