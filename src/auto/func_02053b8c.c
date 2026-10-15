#include "m2c.h"

M2C_UNK func_0200da3c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02053174();                            /* extern */

void func_02053b8c(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0x13) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x138) >= (s32) M2C_FIELD(arg0, s32 *, 0x134)) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            M2C_FIELD(arg0, s32 *, 0x138) = 0;
        }
        M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        func_02053174();
        return;
    }
    func_0200da3c(M2C_FIELD(arg0, s32 *, 0x20), 0);
}
