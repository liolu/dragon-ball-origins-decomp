/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020ba734(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020c370c(s32, s32);                    /* extern */

s32 func_02007a44(void *arg0, s32 arg1) {
    s16 temp_r1;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r4;

    func_020ba734(0, arg1, 4);
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0) {
        do {
            temp_r1 = M2C_FIELD((arg0 + (var_r4 * 2)), s16 *, 0x1CC8);
            temp_r8 = M2C_FIELD(arg0, s32 *, 0x44);
            temp_r7 = temp_r1 * 4;
            func_020c370c(arg1, temp_r8 + (temp_r1 * 4));
            if (*(s8 *) (temp_r8 + temp_r7) == 0x24) {
                func_020c370c(arg1, temp_r8 + temp_r7);
            }
            var_r4 += 1;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0x18));
    }
    return arg1;
}