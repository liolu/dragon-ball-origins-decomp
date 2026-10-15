#include "m2c.h"

M2C_UNK func_02010c14();                            /* extern */

void func_02014da8(void *arg0) {
    s32 var_r0;

    func_02010c14();
    if (M2C_FIELD(arg0, volatile s32 *, 0x62C) & 0x40000) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x62C) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x62C) | 0x02000000);
    }
}
