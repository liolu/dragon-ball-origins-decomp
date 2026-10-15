#include "m2c.h"

s32 func_0209b1f4();                                /* extern */

s32 func_0209b204(void *arg0, s32 arg1) {
    if (arg1 == func_0209b1f4()) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & ~0xF000) | (u16) (arg1 << 0xC));
    return 1;
}
