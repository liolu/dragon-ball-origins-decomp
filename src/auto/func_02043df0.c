#include "m2c.h"

s32 func_02043df0(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        return M2C_FIELD(arg0, s32 *, 0x20);
    }
    return -1;
}
