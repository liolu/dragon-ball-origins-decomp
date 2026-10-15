#include "m2c.h"

M2C_UNK func_02099bf0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02099c0c(s32, s32, s32);               /* extern */
extern M2C_UNK data_020ed9e0;

s32 func_0200345c(s32 arg0, void *arg1) {
    s32 var_r5;

    var_r5 = arg0;
    if (M2C_FIELD(arg1, s32 *, 0x2C) != 0) {
        func_02099bf0(M2C_FIELD(&data_020ed9e0, s32 *, 0),
                      M2C_FIELD(arg1, s32 *, 0x28) + M2C_FIELD(&data_020ed9e0, s32 *, 0x74), 0);
        func_02099c0c(M2C_FIELD(&data_020ed9e0, s32 *, 0), var_r5, M2C_FIELD(arg1, s32 *, 0x2C));
        M2C_FIELD(arg1, s32 *, 0x28) = var_r5;
        var_r5 += M2C_FIELD(arg1, s32 *, 0x2C);
    }
    if (M2C_FIELD(arg1, s32 *, 0x34) != 0) {
        func_02099bf0(M2C_FIELD(&data_020ed9e0, s32 *, 0),
                      M2C_FIELD(arg1, s32 *, 0x30) + M2C_FIELD(&data_020ed9e0, s32 *, 0x7C), 0);
        func_02099c0c(M2C_FIELD(&data_020ed9e0, s32 *, 0), var_r5, M2C_FIELD(arg1, s32 *, 0x34));
        M2C_FIELD(arg1, s32 *, 0x30) = var_r5;
        var_r5 += M2C_FIELD(arg1, s32 *, 0x34);
    }
    if (M2C_FIELD(arg1, s32 *, 0x3C) != 0) {
        func_02099bf0(M2C_FIELD(&data_020ed9e0, s32 *, 0),
                      M2C_FIELD(arg1, s32 *, 0x38) + M2C_FIELD(&data_020ed9e0, s32 *, 0x84), 0);
        func_02099c0c(M2C_FIELD(&data_020ed9e0, s32 *, 0), var_r5, M2C_FIELD(arg1, s32 *, 0x3C));
        M2C_FIELD(arg1, s32 *, 0x38) = var_r5;
        var_r5 += M2C_FIELD(arg1, s32 *, 0x3C);
    }
    return var_r5;
}
