#include "m2c.h"

s32 func_020201dc();                                /* extern */

void *func_0201c258(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s16 *, 8) == func_020201dc()) {
        return arg1 + 0xC;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
