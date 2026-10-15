#include "m2c.h"

s32 func_02024ea8(M2C_UNK *, s32, s32);             /* extern */
s32 func_02024f38(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK data_020f6268;

s32 func_02033e30(void *arg0, void *arg1, void *arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r4;
    s32 var_r5;

    var_r4  = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r1 = M2C_FIELD(arg1, s32 *, 0);
    var_r5  = var_r4;
    if (temp_r1 < (s32) M2C_FIELD(arg2, s32 *, 0)) {
        var_r4 *= -1;
    }
    temp_r2 = M2C_FIELD(arg2, s32 *, 8);
    if ((s32) M2C_FIELD(arg1, s32 *, 8) < temp_r2) {
        var_r5 *= -1;
    }
    if (func_02024ea8(&data_020f6268, var_r4 + temp_r1, var_r5 + temp_r2) != 0) {
        return 1;
    }
    if (func_02024ea8(&data_020f6268, var_r4 + M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg2, s32 *, 8) - var_r5) != 0) {
        return 1;
    }
    if (func_02024ea8(&data_020f6268, var_r4 + M2C_FIELD(arg2, s32 *, 0), var_r5 + M2C_FIELD(arg1, s32 *, 8)) != 0) {
        return 1;
    }
    if (func_02024ea8(&data_020f6268, M2C_FIELD(arg2, s32 *, 0) - var_r4, var_r5 + M2C_FIELD(arg1, s32 *, 8)) != 0) {
        return 1;
    }
    temp_r0 = func_02024f38(&data_020f6268, var_r4 + M2C_FIELD(arg1, s32 *, 0), var_r5 + M2C_FIELD(arg2, s32 *, 8));
    if (((s32) (temp_r0 * 0x6400) > (s32) M2C_FIELD(arg2, s32 *, 4)) && (temp_r0 > -2)) {
        return 1;
    }
    temp_r0_2 = func_02024f38(&data_020f6268, var_r4 + M2C_FIELD(arg2, s32 *, 0), var_r5 + M2C_FIELD(arg1, s32 *, 8));
    if (((s32) (temp_r0_2 * 0x6400) > (s32) M2C_FIELD(arg2, s32 *, 4)) && (temp_r0_2 > -2)) {
        return 1;
    }
    temp_r0_3 = func_02024f38(&data_020f6268, var_r4 + M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg2, s32 *, 8) - var_r5);
    if (((s32) (temp_r0_3 * 0x6400) > (s32) M2C_FIELD(arg2, s32 *, 4)) && (temp_r0_3 > -2)) {
        return 1;
    }
    temp_r0_4 = func_02024f38(&data_020f6268, M2C_FIELD(arg2, s32 *, 0) - var_r4, var_r5 + M2C_FIELD(arg1, s32 *, 8));
    if (((s32) (temp_r0_4 * 0x6400) > (s32) M2C_FIELD(arg2, s32 *, 4)) && (temp_r0_4 > -2)) {
        return 1;
    }
    return 0;
}
