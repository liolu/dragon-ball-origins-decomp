#include "m2c.h"

extern M2C_UNK data_0215f2a4;

u16 func_020995a8(s32 arg0) {
    u32 temp_r2;
    u32 var_r0;

    temp_r2 =
        (M2C_FIELD(&data_0215f2a4, s32 *, 4) * M2C_FIELD(&data_0215f2a4, u32 *, 0)) + M2C_FIELD(&data_0215f2a4, s32 *, 8);
    M2C_FIELD(&data_0215f2a4, u32 *, 0) = temp_r2;
    if (arg0 == 0) {
        var_r0 = temp_r2 >> 0x10;
    } else {
        var_r0 = (u32) ((temp_r2 >> 0x10) * arg0) >> 0x10;
    }
    return (u16) var_r0;
}
