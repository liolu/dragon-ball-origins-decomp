#include "m2c.h"

M2C_UNK func_0205d880(void *);                      /* extern */

void func_0205e5a0(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        if (M2C_FIELD(var_r5, s32 *, 0xC0) != 0) {
            func_0205d880(var_r5);
        }
        var_r4 += 1;
        var_r5 += 0xD4;
    } while (var_r4 < 0x10);
}
