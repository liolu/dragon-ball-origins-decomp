#include "m2c.h"

M2C_UNK func_0202be80(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090e4c(void *);                      /* extern */

void func_02090df0(void *arg0) {
    s32 var_r6;
    void *var_r7;

    if (M2C_FIELD(arg0, s32 *, 0x10) == -1) {
        return;
    }
    var_r6 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
        var_r7 = arg0;
        do {
            func_0202be80(M2C_FIELD(var_r7, s32 *, 0x30), 0);
            var_r6 += 1;
            var_r7 += 0x1D4;
        } while (var_r6 < (s32) M2C_FIELD(arg0, s32 *, 0x1C));
    }
    func_02090e4c(arg0);
}
