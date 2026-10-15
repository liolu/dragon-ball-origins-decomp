#include "m2c.h"

M2C_UNK func_0202bec0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02072998(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_r3;
    void *temp_r0;
    void *temp_r3;

    if (arg3 == 0) {
        return;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x10) & 0x20) == 0x20) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if (var_r3 != 0) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x3A8);
        if (temp_r0 != NULL) {
            temp_r3 = M2C_FIELD(temp_r0, void **, 4);
            if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x148) != 0)) {
                func_0202bec0(temp_r0, arg1, arg2, 0);
            }
        }
    }
}
