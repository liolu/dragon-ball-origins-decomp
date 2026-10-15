#include "m2c.h"

M2C_UNK func_020ae1d8(s32, M2C_UNK);                /* extern */
s32 func_020b11a0(s32 *);                           /* extern */

s32 func_020b116c(s32 *arg0, s32 arg1) {
    func_020ae1d8(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_020b11a0(arg0) != 0) {
        return 1;
    }
    return 0;
}
