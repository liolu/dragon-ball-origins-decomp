#include "m2c.h"

M2C_UNK func_0200a468(void *, M2C_UNK);             /* extern */
M2C_UNK func_0200a52c(void *, M2C_UNK);             /* extern */

s32 func_0200e200(void *arg0, s32 arg1) {
    M2C_UNK var_r4;

    var_r4 = 0x2B;
    if (M2C_FIELD(arg0, s32 *, 0xA4) == 0x2B) {
        var_r4 = 0x2C;
    }
    func_0200a468(arg0, var_r4);
    func_0200a52c(arg0, var_r4);
    return arg1 + 4;
}
