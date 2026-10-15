#include "m2c.h"

void func_0203ca68(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x674) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x678) = arg1;
        M2C_FIELD(arg0, s32 *, 0x670) = 2;
    }
}
