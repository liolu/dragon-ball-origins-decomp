#include "m2c.h"

void func_0202c794(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x58) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (M2C_FIELD(arg0, s32 *, 0x94) | 1);
}
