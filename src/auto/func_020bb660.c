#include "m2c.h"

s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
M2C_UNK func_020bb814(M2C_UNK);                     /* extern */

void func_020bb660(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020ba034();
    func_020bb814(arg1);
    func_020ba048(temp_r4);
}
