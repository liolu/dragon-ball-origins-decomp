#include "m2c.h"

M2C_UNK func_0202bec0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02083e3c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        return;
    }
    func_0202bec0(temp_r0, arg1, arg2, 0);
}
