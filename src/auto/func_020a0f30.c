#include "m2c.h"

M2C_UNK func_020a0f68(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020a0f30(void *arg0) {
    s32 temp_r1;
    s32 var_ip;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x8C0);
    if (temp_r1 == 2) {
        var_ip = 0;
    } else {
        var_ip = temp_r1 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x8C0)                            = var_ip;
    M2C_FIELD(((var_ip * 0x244) + (s32) arg0), s32 *, 0x434) = 0;
    func_020a0f68(arg0, 0x1F, 0x1F);
}
