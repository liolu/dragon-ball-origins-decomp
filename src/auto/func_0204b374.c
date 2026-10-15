#include "m2c.h"

s32 func_0204b998();                                /* extern */

s32 func_0204b374(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x208);
    if (temp_r0 == 0) {
        return 1;
    }
    if ((temp_r0 == 2) && (func_0204b998() != 0) &&
        ((u32) (M2C_FIELD(arg0, s32 *, 0x2E0) + 1) >= (u32) M2C_FIELD(arg0, u32 *, 0x2D4))) {
        return 1;
    }
    return 0;
}
