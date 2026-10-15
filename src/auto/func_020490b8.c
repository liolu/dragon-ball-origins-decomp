#include "m2c.h"

s32 func_0200a5dc(s32, M2C_UNK);                    /* extern */
s32 func_0200a5e8(s32, M2C_UNK);                    /* extern */
s32 func_02047c7c();                                /* extern */
void *func_02048e70(s32);                           /* extern */

void func_020490b8(s32 arg0, s32 arg1) {
    void *temp_r0;

    if (func_02047c7c() != 0) {
        return;
    }
    temp_r0                         = func_02048e70(arg1);
    M2C_FIELD(temp_r0, s32 *, 0)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 1;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x40) = func_0200a5dc(arg1, 0);
    M2C_FIELD(temp_r0, s32 *, 0x44) = func_0200a5e8(M2C_FIELD(temp_r0, s32 *, 8), 0);
    M2C_FIELD(temp_r0, s32 *, 0x4C) = 0;
}
