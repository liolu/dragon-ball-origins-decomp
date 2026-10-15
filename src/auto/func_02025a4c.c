#include "m2c.h"

s32 func_0205221c();                                /* extern */

s32 func_02025a4c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x70) != 2) {
        return 1;
    }
    return func_0205221c();
}
