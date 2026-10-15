#include "m2c.h"

M2C_UNK func_0209cbc4(void *);                      /* extern */

void func_02070a6c(s32 arg0) {
    u32 var_r4;
    void *var_r5;

    var_r5 = arg0 + 0x4B8;
    var_r4 = 0;
    do {
        M2C_FIELD(var_r5, s32 *, 0x34) = (s32) (M2C_FIELD(var_r5, s32 *, 0x34) & ~8);
        func_0209cbc4(var_r5);
        var_r4 += 1;
        var_r5 += 0x68;
    } while (var_r4 < 3U);
}
