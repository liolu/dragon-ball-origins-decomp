#include "m2c.h"

void func_0203cf14(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x11C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x120) = arg1;
        M2C_FIELD(arg0, s32 *, 0x118) = 1;
    }
}
