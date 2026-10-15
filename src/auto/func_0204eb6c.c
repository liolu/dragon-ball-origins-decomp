#include "m2c.h"

M2C_UNK func_0204e80c(s32);                         /* extern */
M2C_UNK func_0204ed68();                            /* extern */
extern M2C_UNK data_02136b24;

void func_0204eb6c(s32 arg0) {
    s32 var_r4;

    M2C_FIELD(&data_02136b24, s32 *, 0x33C) = arg0;
    M2C_FIELD(&data_02136b24, s32 *, 0x340) = 0;
    func_0204ed68();
    var_r4 = 8;
    do {
        func_0204e80c(var_r4);
        var_r4 += 1;
    } while (var_r4 < 0x10);
}
