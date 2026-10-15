#include "m2c.h"

void *func_0200dbd8(void *arg0, void *arg1) {
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x5A8) + 1) >= (s32) M2C_FIELD(arg0, s32 *, 0x5AC)) {
        return arg1 + 8;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
