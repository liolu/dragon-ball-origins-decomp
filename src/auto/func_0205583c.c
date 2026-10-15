#include "m2c.h"

s32 func_02055eb8(void *, s32);                     /* extern */
extern s32 data_0213dff0;

void func_0205583c(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r1_2;

    M2C_FIELD(arg0, s32 *, 0x138) = func_02055eb8(arg0, M2C_FIELD(arg0, s32 *, 0x20));
    temp_r5                       = M2C_FIELD(arg0, s32 *, 0x134);
    if ((s32) (func_02055eb8(arg0, data_0213dff0) + 1) > (s32) (temp_r5 - 1)) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x134) - 1;
    } else {
        var_r1 = func_02055eb8(arg0, data_0213dff0) + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1B0) = var_r1;
    var_r1_2                      = var_r1 + 1;
    temp_r0                       = M2C_FIELD(arg0, s32 *, 0x134) - 1;
    if (var_r1_2 > temp_r0) {
        var_r1_2 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x1B0) = var_r1_2;
}
