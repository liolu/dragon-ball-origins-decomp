#include "m2c.h"

s32 func_0209a4ec(s32, s32, s32);                   /* extern */

s32 func_0209a4b8(void *arg0, s32 arg1) {
    if ((arg1 != 0x20) && (arg1 != 0x8140)) {
        return func_0209a4ec(arg1, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x20));
    }
    return -1;
}
