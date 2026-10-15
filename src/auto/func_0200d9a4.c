#include "m2c.h"

M2C_UNK func_02001ef4(s32, M2C_UNK);                /* extern */

void func_0200d9a4(void *arg0) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x664);
    if (temp_r0 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        return;
    }
    func_02001ef4(temp_r0, 0);
    M2C_FIELD(arg0, s32 *, 0x664) = 0;
}
