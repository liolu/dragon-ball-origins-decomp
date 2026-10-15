#include "m2c.h"

M2C_UNK func_02001f58(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020114cc(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x664);
    if (temp_r0 == 0) {
        return;
    }
    func_02001f58(temp_r0, 0x7F, 0);
}
