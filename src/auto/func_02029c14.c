/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_02029cf4(void *, M2C_UNK, void *, s32);    /* extern */
M2C_UNK func_0202be80(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021098fc;

void func_02029c14(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    void *temp_r2;

    if (func_02029cf4(arg0, arg1, arg3, arg3 + 8) != 0) {
        return;
    }
    var_r7 = M2C_FIELD(arg3, s32 *, 0x10);
    if (var_r7 < 0) {
        var_r6 = M2C_FIELD(arg3, s32 *, 0x14);
        if (var_r7 >= 0) {
            return;
        }
        var_r8 = var_r6 * 0x10;
        do {
            temp_r2 = M2C_FIELD(arg0, s32 *, 0x3A0) + var_r8;
            if (func_02029cf4(arg0, arg1, temp_r2, temp_r2 + 8) == 0) {
                func_0202be80(((M2C_FIELD((arg0 + (var_r6 * 4)), s32 *, 0x3A4) + 8) * 0x98) + (s32) &data_021098fc, 0);
            }
            var_r7 += 1;
            var_r8 += 0x10;
            var_r6 += 1;
        } while (var_r7 < 0);
        return;
    }
    var_r4 = 0;
    if (var_r7 <= 0) {
        return;
    }
    do {
        func_02029c14(arg0, arg1, arg2, (M2C_FIELD((arg3 + (var_r4 * 2)), u16 *, 0x14) * 0x1C) + arg2);
        var_r4 += 1;
    } while (var_r4 < (s32) M2C_FIELD(arg3, s32 *, 0x10));
}
