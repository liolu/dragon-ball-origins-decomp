#include "m2c.h"

void *func_0202c83c(void *);                        /* extern */
M2C_UNK func_0202c858(void *, s32, s32, s32);       /* extern */

s32 func_0202e324(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    void *temp_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x9C) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xA0) <= 0)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return 0;
    }
    temp_r0 = func_0202c83c(arg0);
    func_0202c858(arg0, M2C_FIELD(temp_r0, s32 *, 0), M2C_FIELD(temp_r0, s32 *, 4) + 0x3200, M2C_FIELD(temp_r0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
    M2C_FIELD(arg0, s32 *, 0xA0) = arg2;
    return 1;
}
