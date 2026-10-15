#include "engine.h"
#include "m2c.h"

M2C_UNK func_020995fc(M2C_UNK);

s32 func_0206b8d8(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg0;
    if (arg1 > var_r4) {
        var_r4 = (s32) (s16) (var_r4 + func_020995fc((s32) (s16) (arg1 - var_r4)));
    }
    return var_r4;
}
