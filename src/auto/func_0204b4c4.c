#include "m2c.h"

s8 *func_0204b50c(s8 *, M2C_UNK *, s32 *);          /* extern */

s32 func_0204b4c4(s8 *arg0) {
    M2C_UNK sp4;
    s32 sp0;
    s8 *var_r0;

    var_r0 = arg0;
    sp0    = 0;
    if (*var_r0 != 0) {
        do {
            var_r0 = func_0204b50c(var_r0, &sp4, &sp0);
        } while (*var_r0 != 0);
    }
    return sp0;
}
