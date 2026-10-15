#include "m2c.h"

s32 func_02043d84(void *arg0, s32 arg1) {
    s32 var_r2;

    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if ((var_r2 != 0) && (M2C_FIELD(arg0, s32 *, 0x20) == arg1)) {
        return 1;
    }
    return 0;
}
