#include "m2c.h"

s32 func_0208e580(void *, M2C_UNK);                 /* extern */

void func_0208c2a8(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    u32 var_r7;
    void *var_r8;

    if (M2C_FIELD(arg0, s32 *, 8) == 0xD) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    var_r7 = 0;
    var_r8 = arg0 + 0x48;
    do {
        temp_r0 = M2C_FIELD(var_r8, s32 *, 0);
        var_r1  = 0;
        var_r2  = 1;
        if ((temp_r0 != -1) && (temp_r0 <= 0)) {
            var_r2 = 0;
        }
        if ((var_r2 != 0) && (M2C_FIELD(var_r8, u16 *, 0x18) != 0)) {
            var_r1 = 1;
        }
        if ((var_r1 != 0) && (func_0208e580(var_r8, arg1) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
        }
        var_r7 += 1;
        var_r8 += 0xD8;
    } while (var_r7 < 4U);
}
