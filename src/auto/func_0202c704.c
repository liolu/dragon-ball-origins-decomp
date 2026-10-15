#include "m2c.h"

void func_0202c704(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x4C)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (M2C_FIELD(arg0, s32 *, 0x94) | 1);
}
