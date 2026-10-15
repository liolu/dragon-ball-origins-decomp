#include "m2c.h"

M2C_UNK func_020b87e4(M2C_UNK, M2C_UNK *, s32);     /* extern */
s32 func_020c367c(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_020e6a8c;
extern M2C_UNK data_020e6ab8;

void func_020872fc(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = arg2;
    temp_r0 = func_020c367c(var_r4, &data_020e6a8c);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 1;
    }
    func_020b87e4(arg1, &data_020e6ab8, var_r4);
}
