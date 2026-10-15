#include "m2c.h"

M2C_UNK func_020b8a20();                            /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */

void func_020b8ef4(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020ba034();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020b8a20();
    func_020ba048(temp_r4);
}
