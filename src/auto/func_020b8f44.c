#include "m2c.h"

M2C_UNK func_020b8a20();                            /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */

void func_020b8f44(void) {
    s32 temp_r4;

    temp_r4 = func_020ba034();
    func_020b8a20();
    func_020ba048(temp_r4);
}
