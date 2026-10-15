#include "m2c.h"

s32 func_02046908(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return 0;
    }
    temp_r1_2                    = temp_r1 - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r1_2;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD((arg0 + (temp_r1_2 * 4)), s32 *, 0x2C);
    return 1;
}
