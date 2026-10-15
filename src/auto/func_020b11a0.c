#include "m2c.h"

M2C_UNK func_020ae21c(void *, s32);                 /* extern */
s32 func_020aebfc(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020b115c();                            /* extern */

s32 func_020b11a0(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020aebfc(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020b115c();
    func_020ae21c(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
