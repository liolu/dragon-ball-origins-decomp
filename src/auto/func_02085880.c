#include "m2c.h"

void func_02085880(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x18) == 3) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        }
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 5;
}
