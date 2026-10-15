#include "m2c.h"

extern M2C_UNK data_02136b24;

void func_0204e714(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r2 = 0xF423F;
    var_r1 = arg0 + M2C_FIELD(&data_02136b24, s32 *, 0x15C);
    if (var_r1 < 0xF423F) {
        var_r2 = var_r1;
    }
    if (var_r2 <= 0) {
        var_r1 = 0;
    } else if (var_r1 >= 0xF423F) {
        var_r1 = 0xF423F;
    }
    if ((u32) var_r1 > 0xF423FU) {
        var_r1 = 0xF423F;
    }
    M2C_FIELD(&data_02136b24, s32 *, 0x15C) = var_r1;
}
