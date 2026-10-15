#include "m2c.h"

s32 func_0201bc44(void *arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 1;
    if (!(M2C_FIELD(arg0, s32 *, 0x630) & (1 << arg1))) {
        var_r0 = 0;
    }
    return var_r0;
}
