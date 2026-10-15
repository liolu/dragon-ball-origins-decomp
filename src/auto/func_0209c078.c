#include "m2c.h"

s32 func_0209c078(u8 *arg0) {
    s32 var_r2;
    u8 *var_r0;
    u8 temp_r1;
    u8 temp_r1_2;

    var_r0 = arg0;
    var_r2 = 0;
    if (var_r0 != NULL) {
    loop_1:
        temp_r1 = *var_r0;
        var_r0 += 1;
        if (temp_r1 != 0) {
            if (temp_r1 != 0xA) {
                if (temp_r1 == 0x24) {
                    temp_r1_2 = *var_r0;
                    var_r0 += 1;
                    if (temp_r1_2 == 0x43) {
                        var_r0 += 1;
                    } else if (temp_r1_2 == 0x46) {
                        var_r0 += 1;
                    } else {
                        goto block_14;
                    }
                } else {
                    if (((s32) temp_r1 >= 0xC0) && ((s32) temp_r1 <= 0xDF)) {
                        var_r0 += 1;
                    } else if (((s32) temp_r1 >= 0xE0) && ((s32) temp_r1 <= 0xEF)) {
                        var_r0 += 2;
                    }
                block_14:
                    var_r2 += 1;
                }
            }
            goto loop_1;
        }
    }
    return var_r2;
}
