#include "m2c.h"

M2C_UNK func_020016f4();                            /* extern */
s32 func_0209979c(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_020ed8e0;

s32 func_02001684(void *arg0, s32 arg1) {
    s32 temp_r0;

    func_020016f4();
    temp_r0                   = func_0209979c(&data_020ed8e0, arg1);
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
    }
    return M2C_FIELD(arg0, s32 *, 4);
}
