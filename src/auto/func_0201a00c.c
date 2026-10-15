#include "m2c.h"

void *func_0202c83c(M2C_UNK);                       /* extern */

void func_0201a00c(void *arg0, M2C_UNK arg1) {
    void *temp_r0;

    temp_r0                   = func_0202c83c(arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
}
