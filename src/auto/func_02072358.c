#include "m2c.h"

M2C_UNK func_02072380();                            /* extern */

void func_02072358(void *arg0, s32 arg1) {
    s32 var_r2;

    if ((M2C_FIELD(arg0, s32 *, 0x10) & 8) == 8) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return;
    }
    func_02072380(arg0, arg1);
}
