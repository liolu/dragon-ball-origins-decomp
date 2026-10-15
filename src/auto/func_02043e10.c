#include "m2c.h"

s32 func_02044948(void *);                          /* extern */

void func_02043e10(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    do {

    } while (func_02044948(arg0) != 0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
