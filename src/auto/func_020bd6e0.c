#include "m2c.h"

M2C_UNK func_020b8e3c(void *);                      /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
s32 func_020bcf70(void *);                          /* extern */

s32 func_020bd6e0(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = func_020ba034();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x44)) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 4);
            do {
                func_020b8e3c(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x40));
        } else {
            do {
                func_020b8e3c(arg0 + 0x18);
                if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    func_020ba048(temp_r4);
    if (var_r5 != 0) {
        return func_020bcf70(arg0);
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
