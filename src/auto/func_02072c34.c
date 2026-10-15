#include "m2c.h"

void func_02072c34(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
}
