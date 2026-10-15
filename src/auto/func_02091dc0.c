#include "m2c.h"

void func_02091dc0(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x10) != -1) && (M2C_FIELD(arg0, s32 *, 0xC) != 7)) {
        M2C_FIELD(arg0, s32 *, 0x5D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x5D4) = -1;
        M2C_FIELD(arg0, s32 *, 0xC)   = 7;
    }
}
