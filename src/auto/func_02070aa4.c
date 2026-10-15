#include "m2c.h"

M2C_UNK func_0209cbc4(void *);                      /* extern */

void func_02070aa4(void *arg0) {
    u32 var_r5;
    u32 var_r5_2;
    void *var_r6;
    void *var_r6_2;

    M2C_FIELD(arg0, s32 *, 0x244) = (s32) (M2C_FIELD(arg0, s32 *, 0x244) & ~8);
    func_0209cbc4(arg0 + 0x210);
    var_r6 = arg0 + 0x2C8;
    var_r5 = 0;
    do {
        M2C_FIELD(var_r6, s32 *, 0x34) = (s32) (M2C_FIELD(var_r6, s32 *, 0x34) & ~8);
        func_0209cbc4(var_r6);
        var_r5 += 1;
        var_r6 += 0x38;
    } while (var_r5 < 2U);
    var_r6_2 = arg0 + 0x3E8;
    var_r5_2 = 0;
    do {
        M2C_FIELD(var_r6_2, s32 *, 0x34) = (s32) (M2C_FIELD(var_r6_2, s32 *, 0x34) & ~8);
        func_0209cbc4(var_r6_2);
        var_r5_2 += 1;
        var_r6_2 += 0x38;
    } while (var_r5_2 < 2U);
    M2C_FIELD(arg0, s32 *, 0x64C) = (s32) (M2C_FIELD(arg0, s32 *, 0x64C) & ~8);
    func_0209cbc4(arg0 + 0x618);
}
