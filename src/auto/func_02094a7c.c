#include "m2c.h"

M2C_UNK func_020942fc(void *, s32);                 /* extern */
M2C_UNK func_02094d90(void *);                      /* extern */

void func_02094a7c(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 == 0) {
        return;
    }
    var_r1 = arg1 + M2C_FIELD(arg0, s32 *, 0x800);
    if (var_r1 > 0xB0) {
        var_r1 = 0xB0;
    } else if (var_r1 < 0x40) {
        var_r1 = 0x40;
    }
    func_020942fc(arg0, var_r1);
    func_02094d90(arg0);
}
