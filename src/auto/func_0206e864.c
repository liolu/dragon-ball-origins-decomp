#include "m2c.h"

M2C_UNK func_02001af8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0206e864(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 == -1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = temp_r2;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    if (M2C_FIELD(arg0, s32 *, 4) != 2) {
        return;
    }
    func_02001c08(0, 6, 0);
    func_02001af8(0x58, 4);
}
