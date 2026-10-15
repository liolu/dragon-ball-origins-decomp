#include "m2c.h"

M2C_UNK func_02001af8(M2C_UNK, M2C_UNK);            /* extern */

void func_0206e8b4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02001af8(0x7F, 4);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
