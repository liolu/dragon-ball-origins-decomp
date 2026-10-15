#include "m2c.h"

void *func_0204cc08(s32, s32);                      /* extern */

s32 func_02014268(void *arg0) {
    s32 var_r0;
    s32 var_r4;

    var_r4 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x788) > 0) {
        if (M2C_FIELD(func_0204cc08(M2C_FIELD(arg0, s32 *, 0xAC), M2C_FIELD(arg0, s32 *, 0x5C4)), s32 *, 0x20) & 0x2000) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            var_r4 = 0;
        }
    }
    return var_r4;
}
