#include "m2c.h"

M2C_UNK func_0200da3c(void *, M2C_UNK);             /* extern */
s32 func_0205ad08(s32, M2C_UNK);                    /* extern */

void func_02059c70(void *arg0) {
    s32 var_r1;
    void *temp_r0;

    if (func_0205ad08(M2C_FIELD(arg0, s32 *, 0x24), 1) == 1) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
        M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
        M2C_FIELD(arg0, s32 *, 8)     = 0x13;
        M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x20);
    if (M2C_FIELD(temp_r0, s32 *, 0x62C) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
        M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
        M2C_FIELD(arg0, s32 *, 8)     = 0x13;
        M2C_FIELD(arg0, s32 *, 0xC)   = 0x13;
        M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
        return;
    }
    func_0200da3c(temp_r0, 0);
}
