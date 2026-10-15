#include "m2c.h"

M2C_UNK func_0202c21c(s32, u16);                    /* extern */

void func_020752cc(void *arg0, s32 arg1) {
    s32 temp_r2;

    if ((M2C_FIELD(arg0, s32 *, 0x8D4) != 0) && (M2C_FIELD(arg0, s32 *, 0x5D0) != arg1)) {
        M2C_FIELD(arg0, s32 *, 0x5D0) = arg1;
        M2C_FIELD(arg0, s32 *, 0x5D4) = 0;
        temp_r2                       = M2C_FIELD(arg0, s32 *, 0x8D4);
        if (temp_r2 == 0) {
            return;
        }
        func_0202c21c(M2C_FIELD(arg0, s32 *, 0x40C), M2C_FIELD((temp_r2 + (arg1 * 2)), u16 *, 0x44));
    }
}
