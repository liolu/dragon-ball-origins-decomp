#include "m2c.h"

M2C_UNK func_0208430c(void *);                      /* extern */
M2C_UNK func_02084418(void *);                      /* extern */

void func_020842b8(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    if ((M2C_FIELD(arg0, s32 *, 8) & 4) == 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_0208430c(arg0);
    }
    if ((M2C_FIELD(arg0, s32 *, 8) & 8) == 8) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 == 0) {
        return;
    }
    func_02084418(arg0);
}
