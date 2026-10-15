#include "m2c.h"

M2C_UNK func_020b7ea4();                            /* extern */
M2C_UNK func_020b7ed8(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_020b7f44();                            /* extern */

s32 func_020a11d4(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_r5_2 != 0) && (arg2 == 8)) {
        func_020b7ea4();
        func_020b7ed8(arg1, temp_r5_2, arg2);
        func_020b7f44();
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        return temp_r5_2;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_020b7ea4();
    func_020b7ed8(arg1, temp_r5, arg2);
    func_020b7f44();
    temp_r0                   = M2C_FIELD(arg0, s32 *, 8) + arg2;
    M2C_FIELD(arg0, s32 *, 8) = temp_r0;
    if (temp_r0 & 0xF) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
        M2C_FIELD(arg0, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 8) + 8);
    }
    return temp_r5;
}
