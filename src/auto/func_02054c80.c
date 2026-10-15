#include "m2c.h"

s32 *func_0202c83c(M2C_UNK);                        /* extern */

s32 func_02054c80(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r6;

    if ((s32) *func_0202c83c(arg1) < (s32) M2C_FIELD(arg0, s32 *, 0x198)) {
        return 0;
    }
    if ((s32) *func_0202c83c(arg1) > (s32) M2C_FIELD(arg0, s32 *, 0x1A4)) {
        return 0;
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x1A0);
    if ((s32) M2C_FIELD(func_0202c83c(arg1), s32 *, 8) < temp_r6) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1AC);
    if ((s32) M2C_FIELD(func_0202c83c(arg1), s32 *, 8) <= temp_r4) {
        return 1;
    }
    return 0;
}
