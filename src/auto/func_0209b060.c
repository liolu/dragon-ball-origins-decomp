#include "m2c.h"

s32 func_0209afb0(s32 *, s32);                      /* extern */

s32 func_0209b060(s32 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return func_0209afb0(arg0, arg1 + ((u32) (*arg0 << 7) >> 0x17));
}
