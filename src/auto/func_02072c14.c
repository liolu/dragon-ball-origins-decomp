#include "m2c.h"

void func_02072c14(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) | 2);
    M2C_FIELD(arg0, s8 *, 0x3FE) = 0;
}
