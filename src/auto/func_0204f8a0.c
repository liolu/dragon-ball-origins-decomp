#include "m2c.h"

s32 func_0204f9ac(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_020adf00(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_020ba8dc(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020cebd8;

s32 func_0204f8a0(s32 arg0) {
    s32 var_r4;

    if (func_020adf00(0x17E0, arg0, 0x7F0) == 0) {
        return -1;
    }
    var_r4 = func_0204f9ac(arg0, &data_020cebd8, 0, 4);
    if ((var_r4 != -3) && (var_r4 != 1)) {

    } else {
        var_r4 = func_0204f9ac(arg0 + 0x2D0, &data_020cebd8, 0, 4);
        if (var_r4 == 0) {
            func_020ba8dc(arg0 + 0x2D0, arg0, 0x2D0);
        }
    }
    return var_r4;
}
