#include "m2c.h"

M2C_UNK func_0202c21c(s32, u16);                    /* extern */
M2C_UNK func_0202c248(s32, M2C_UNK);                /* extern */

void func_02072048(void *arg0, s8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x3B4) != 0) && (M2C_FIELD(arg0, s8 *, 0x3FF) != arg1)) {
        if ((arg4 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x400) < arg2)) {
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x3FF)  = arg1;
        M2C_FIELD(arg0, s32 *, 0xC)   = 0;
        M2C_FIELD(arg0, s32 *, 0x400) = arg2;
        temp_r0                       = M2C_FIELD(arg0, s32 *, 0x10);
        if (arg3 != 0) {
            var_r0 = temp_r0 | 0x400;
        } else {
            var_r0 = temp_r0 & ~0x400;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
        if (M2C_FIELD(arg0, s32 *, 0x3B4) == 0) {
            return;
        }
        func_0202c248(M2C_FIELD(arg0, s32 *, 0x18), 0);
        func_0202c21c(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3B4) + (arg1 * 2)), u16 *, 0x44));
        if (M2C_FIELD(arg0, s32 *, 0x3BC) == 0) {
            return;
        }
        func_0202c248(M2C_FIELD(arg0, s32 *, 0x20), 0);
        func_0202c21c(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3BC) + (arg1 * 2)), u16 *, 0x44));
    }
}
