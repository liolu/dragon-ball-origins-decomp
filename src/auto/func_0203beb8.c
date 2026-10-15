#include "m2c.h"

void func_0203beb8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x6A4) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x6A8) = arg1;
        M2C_FIELD(arg0, s32 *, 0x6A0) = 3;
    }
}
