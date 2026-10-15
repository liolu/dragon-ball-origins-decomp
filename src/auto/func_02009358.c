#include "m2c.h"

M2C_UNK func_0209cb88(s32);                         /* extern */

void func_02009358(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x14D4;
    var_r4 = 0;
    do {
        func_0209cb88(var_r5);
        var_r4 += 1;
        var_r5 += 0x68;
    } while (var_r4 < 3);
    func_0209cb88(arg0 + 0x1634);
}
