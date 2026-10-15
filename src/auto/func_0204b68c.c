#include "m2c.h"

M2C_UNK func_0209bfc8(void *, s8 *);                /* extern */

void func_0204b68c(void *arg0, s8 *arg1) {
    s32 var_r1_2;
    s32 var_r3;
    s8 *var_r1;
    s8 var_r2;
    u32 var_r2_2;

    var_r1                        = arg1;
    M2C_FIELD(arg0, s8 **, 0x20C) = var_r1;
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        if (var_r2 != 0) {
            var_r3 = 0;
            if (var_r2 != 0) {
                do {
                    if (var_r2 == 0x24) {
                        var_r1 += 1;
                        if (*var_r1 == 0x43) {
                            var_r1 += 1;
                            var_r3 -= 1;
                        }
                    }
                    var_r1 += 1;
                    var_r2 = *var_r1;
                    var_r3 += 1;
                } while (var_r2 != 0);
            }
            M2C_FIELD(arg0, u32 *, 0x2D8) = 5U;
            var_r1_2                      = 8;
            var_r2_2                      = 0;
        loop_10:
            if (var_r1_2 >= var_r3) {
                M2C_FIELD(arg0, u32 *, 0x2D8) = var_r2_2;
            } else {
                var_r2_2 += 1;
                var_r1_2 += 4;
                if (var_r2_2 < 6U) {
                    goto loop_10;
                }
            }
            func_0209bfc8(arg0 + 0x40, M2C_FIELD(arg0, s8 **, 0x20C));
        }
    }
}
