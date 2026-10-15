#include "m2c.h"

void func_0202a9fc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) | 1);
}
