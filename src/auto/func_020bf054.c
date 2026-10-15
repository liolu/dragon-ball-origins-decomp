#include "m2c.h"

s32 func_020befe0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020bf65c();                            /* extern */
extern M2C_UNK data_0216ef58;
extern M2C_UNK func_020bf64c;

s32 func_020bf054(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_020befe0(arg0, &func_020bf64c, 0);
    M2C_FIELD(&data_0216ef58, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_020bf65c();
    }
    return M2C_FIELD(&data_0216ef58, s32 *, 0x2C);
}
