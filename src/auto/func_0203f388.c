#include "m2c.h"

extern M2C_UNK data_020ce238;

s32 func_0203f388(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 >= 0) {
        var_r1 = *((M2C_UNK *) ((s8 *) &data_020ce238 + (var_r1 * 4)));
    }
    return var_r1;
}
