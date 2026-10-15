#include "m2c.h"

void *func_02095c50();                              /* extern */

s32 func_02095ca4(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_r0;

    temp_r0 = func_02095c50();
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(temp_r0, u16 *, 0xC) - M2C_FIELD(temp_r0, u16 *, 2);
    }
    return (M2C_FIELD(temp_r0, u16 *, 2) * 0x54) + M2C_FIELD(arg0, s32 *, 0x28);
}
