#include "m2c.h"

s32 func_02047c7c();                                /* extern */
void *func_02048e70(s32);                           /* extern */
M2C_UNK func_02049208();                            /* extern */

void func_02048f00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    if (func_02047c7c() != 0) {
        return;
    }
    temp_r0                         = func_02048e70(arg1);
    M2C_FIELD(temp_r0, s32 *, 0)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 1;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x40) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x44) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x4C) = (s32) (arg4 + 1);
    func_02049208();
}
