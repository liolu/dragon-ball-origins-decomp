#include "m2c.h"

M2C_UNK func_0204d24c(M2C_UNK, u32);                /* extern */
M2C_UNK func_0204fdc0(M2C_UNK, M2C_UNK);            /* extern */

void func_02051a1c(u32 arg0, M2C_UNK arg1) {
    M2C_UNK var_r0;

    func_0204d24c(1, arg0);
    var_r0 = 0xD;
    switch (arg0) {
        default:
            break;
        case 1:
            var_r0 = 2;
            break;
        case 0:
            var_r0 = 3;
            break;
        case 2:
            var_r0 = 4;
            break;
        case 3:
            var_r0 = 5;
            break;
        case 4:
            var_r0 = 6;
            break;
        case 5:
            var_r0 = 7;
            break;
        case 6:
            var_r0 = 8;
            break;
        case 7:
            var_r0 = 3;
            break;
    }
    func_0204fdc0(var_r0, arg1);
}
