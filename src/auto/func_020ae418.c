#include "m2c.h"

s32 func_020ae3b0(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02168b68;

M2C_UNK *func_020ae418(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_02168b68;
    temp_r0 = func_020ae3b0(&data_02168b68, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
