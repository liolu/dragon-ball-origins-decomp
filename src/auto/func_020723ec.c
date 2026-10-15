#include "m2c.h"

M2C_UNK func_02072758(void *);                      /* extern */
M2C_UNK func_0207280c(void *);                      /* extern */

void func_020723ec(void *arg0) {
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x10) & 8) == 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02072758(arg0);
    func_0207280c(arg0);
}
