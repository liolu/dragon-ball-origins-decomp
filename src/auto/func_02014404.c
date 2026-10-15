#include "m2c.h"

M2C_UNK func_020114ec(void *, s32, s32);            /* extern */

void func_02014404(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 == 4) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x770) > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x5B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x5B0) + 1);
    }
    func_020114ec(arg0, M2C_FIELD(arg0, s32 *, 0x610), 0xFFFE);
}
