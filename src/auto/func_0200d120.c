#include "m2c.h"

void *func_0200d120(void *arg0) {
    s32 var_r1;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x5A0) < 0xFFFFU) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        return arg0 + 0x468;
    }
    return NULL;
}
