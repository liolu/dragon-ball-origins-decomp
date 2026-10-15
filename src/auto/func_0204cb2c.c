#include "m2c.h"

s32 func_0204cb08();                                /* extern */

s32 func_0204cb2c(s32 arg0, s32 arg1, s32 arg2) {
    return M2C_FIELD((func_0204cb08() + (arg2 * 4)), s32 *, 0x18);
}
