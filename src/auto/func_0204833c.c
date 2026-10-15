#include "m2c.h"

s32 func_0204833c(void *arg0, void *arg1) {
    s32 temp_r2;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_r3 < (s32) M2C_FIELD(arg1, s32 *, 0)) || (temp_r3 >= (s32) M2C_FIELD(arg1, s32 *, 8))) {
        return 0;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r2 < (s32) M2C_FIELD(arg1, s32 *, 4)) || (temp_r2 >= (s32) M2C_FIELD(arg1, s32 *, 0xC))) {
        return 0;
    }
    return 1;
}
