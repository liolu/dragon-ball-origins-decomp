#include "m2c.h"

void func_020399dc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x750) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x754) = arg1;
        M2C_FIELD(arg0, s32 *, 0x758) = 2;
    }
}
