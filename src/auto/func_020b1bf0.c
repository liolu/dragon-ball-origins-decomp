#include "m2c.h"

void *func_020b09d0(s32);                           /* extern */
s32 func_020b1cb8(M2C_UNK, u8, u16, u8, void *, s32); /* extern */

s32 func_020b1bf0(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_020b09d0(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020b1cb8(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0,
                         arg1);
}
