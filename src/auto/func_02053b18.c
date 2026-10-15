#include "m2c.h"

M2C_UNK func_0200da3c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02053120();                            /* extern */
M2C_UNK func_02053174();                            /* extern */

void func_02053b18(void *arg0) {
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r1;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r3 == 0x13) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x138) >= (s32) M2C_FIELD(arg0, s32 *, 0x134)) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        M2C_FIELD(arg0, s32 *, 8) = temp_r3;
        if (var_r1 != 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_02053120();
            return;
        case 1:
            func_02053174();
            return;
        default:
            func_0200da3c(M2C_FIELD(arg0, s32 *, 0x20), 0);
            return;
    }
}
