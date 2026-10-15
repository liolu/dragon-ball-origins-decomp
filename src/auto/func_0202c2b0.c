#include "m2c.h"

s32 func_0202c2b0(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = (arg1 * 0xC) + M2C_FIELD(arg0, s32 *, 0x9C);
    return (M2C_FIELD(temp_r0, s16 *, 0xA) - M2C_FIELD(temp_r0, s16 *, 8)) + 1;
}
