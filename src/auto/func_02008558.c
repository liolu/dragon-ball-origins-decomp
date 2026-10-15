#include "m2c.h"

void func_02008558(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0xA) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) == arg1) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 8)    = 0xA;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) != arg1) {
        M2C_FIELD(arg0, s32 *, 8)    = 0xA;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    }
}
