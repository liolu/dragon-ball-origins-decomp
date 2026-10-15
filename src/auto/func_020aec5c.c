#include "m2c.h"

void *func_020aeac4(void *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_020aec5c(void *arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r0 = func_020aeac4(arg0 + 0x24, 0x10, 4);
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 0)     = arg1;
    M2C_FIELD(temp_r0, s32 *, 4)     = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_r0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    M2C_FIELD(arg0, void **, 0x2C)   = temp_r0;
    return 1;
}
