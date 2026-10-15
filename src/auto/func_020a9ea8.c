#include "m2c.h"

M2C_UNK func_020a30c4();                       /* extern */

void func_020a9ea8(void *arg0, s32 arg1) {
    s32 var_r3;
    s32 var_r4;
    void *var_r4_2;

    if (arg1 < 0) {
        var_r4 = 0;
    } else {
        var_r4_2 = arg0;
        var_r3   = 0;
    loop_3:
        if (arg1 == M2C_FIELD(var_r4_2, s32 *, 0x4C44)) {
            var_r4 = (var_r3 * 0x48) + (s32) (arg0 + 0x4C44);
        } else {
            var_r3 += 1;
            var_r4_2 += 0x48;
            if (var_r3 >= 0x10) {
                var_r4 = 0;
            } else {
                goto loop_3;
            }
        }
    }
    if (var_r4 == 0) {
        return;
    }
    func_020a30c4((s32 *) var_r4);
    *(M2C_UNK *) var_r4 = -1;
}
