#include "m2c.h"

s32 func_0204d048(M2C_UNK);                         /* extern */
M2C_UNK func_0204d2b8(M2C_UNK, s32);                /* extern */
s32 func_0204de04(M2C_UNK);                         /* extern */

void func_0204d9bc(void) {
    s32 temp_r4;

    temp_r4 = func_0204de04(0xE3);
    func_0204d2b8(1, temp_r4 + func_0204d048(1));
}
