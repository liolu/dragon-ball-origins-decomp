/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0202be80(s32, s32);                    /* extern */
M2C_UNK func_02083e3c(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02084c20(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5_2;
    u32 var_r5;
    void *var_r6;

    if ((M2C_FIELD(arg0, s32 *, 8) & 2) == 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    var_r5 = 0;
    var_r6 = arg0 + 0x58;
    do {
        if ((M2C_FIELD(var_r6, s32 *, 0) & 1) == 1) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            if ((arg3 == 0) && (temp_r0 = M2C_FIELD(var_r6, s32 *, 4), (temp_r0 != 0)) && (temp_r0 != 1)) {

            } else {
                func_02083e3c(var_r6, arg1, arg2);
            }
        }
        var_r5 += 1;
        var_r6 += 0x18;
    } while (var_r5 < 0x20U);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0_2 != 0) {
        func_0202be80(temp_r0_2, 0);
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x358);
    if ((temp_r0_3 >= 0) && ((u32) temp_r0_3 < 6U)) {
        temp_r0_4 = M2C_FIELD((arg0 + (temp_r0_3 * 4)), s32 *, 0x10);
        if (temp_r0_4 != 0) {
            func_0202be80(temp_r0_4, 0);
        }
    }
    var_r5_2 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40) <= 0) {
        return;
    }
    do {
        temp_r0_5 = M2C_FIELD((arg0 + (var_r5_2 * 4)), s32 *, 0x44);
        if (temp_r0_5 != 0) {
            func_0202be80(temp_r0_5, 0);
        }
        var_r5_2 += 1;
    } while (var_r5_2 < (s32) M2C_FIELD(arg0, s32 *, 0x40));
}
