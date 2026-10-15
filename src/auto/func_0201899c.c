#include "m2c.h"

s32 func_0201899c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg1 < arg3) {
        return 0;
    }
    if (arg1 > arg4) {
        return 0;
    }
    if (arg2 < arg5) {
        return 0;
    }
    if (arg2 <= arg6) {
        return 1;
    }
    return 0;
}
