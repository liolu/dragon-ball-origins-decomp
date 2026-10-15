#include "m2c.h"

M2C_UNK func_020b87e4(s32, M2C_UNK *, s32, s32);    /* extern */
extern s32 data_020e0194;
extern M2C_UNK data_020e0198;
extern M2C_UNK data_020e01d4;

s32 func_0204fb48(s32 arg0) {
    s32 temp_r2;

    temp_r2 = *((M2C_UNK *) ((s8 *) &data_020e0198 + (data_020e0194 * 4)));
    func_020b87e4(arg0, &data_020e01d4, temp_r2, temp_r2);
    return arg0;
}
