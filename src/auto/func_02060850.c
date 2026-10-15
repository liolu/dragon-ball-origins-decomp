#include "m2c.h"

void func_02060850(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0x44414244) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x58)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (arg1 + 8);
}
