#include "m2c.h"

M2C_UNK func_02084df4(void *);                      /* extern */

void func_02085294(void *arg0) {
    u32 var_r4;
    void *var_r5;

    var_r4                    = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    var_r5                    = arg0 + 4;
    do {
        func_02084df4(var_r5);
        var_r4 += 1;
        var_r5 += 0xF0;
    } while (var_r4 < 0x14U);
    M2C_FIELD(arg0, s32 *, 0x12C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C8) = -1;
}
