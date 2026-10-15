#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204310c(void *, M2C_UNK);             /* extern */

void func_020430d8(void *arg0) {
    M2C_UNK var_r1;

    func_02001c08(0, 0xF, 0);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0204310c(arg0, var_r1);
}
