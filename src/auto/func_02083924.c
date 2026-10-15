#include "m2c.h"

M2C_UNK func_0202c248(s32, s32);                    /* extern */
M2C_UNK func_0202c818(s32, s32);                    /* extern */
M2C_UNK func_02072358();                            /* extern */

void func_02083924(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_02072358();
    func_0202c248(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0xC));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40C) > 1U) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x41C);
    if (temp_r0 < 0) {
        return;
    }
    if (temp_r0 < 3) {
        M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 0x38E);
    } else if (temp_r0 >= 0xD) {
        temp_r0_2                     = M2C_FIELD(arg0, s32 *, 0x420) - 0xB6;
        M2C_FIELD(arg0, s32 *, 0x420) = temp_r0_2;
        if (temp_r0_2 < 0) {
            M2C_FIELD(arg0, s32 *, 0x41C) = -1;
            M2C_FIELD(arg0, s32 *, 0x420) = 0;
        }
    }
    func_0202c818(M2C_FIELD(arg0, s32 *, 0x18), 0 - (u16) (M2C_FIELD(arg0, s32 *, 0x420) * arg1));
    M2C_FIELD(arg0, s32 *, 0x41C) = (s32) (M2C_FIELD(arg0, s32 *, 0x41C) + 1);
}
