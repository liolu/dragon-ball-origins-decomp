#include "m2c.h"

void func_0209db10(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0xC)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 1);
}
