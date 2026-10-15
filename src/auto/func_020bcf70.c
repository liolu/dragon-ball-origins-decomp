#include "m2c.h"

M2C_UNK func_020bc0a8(void *, s32);                 /* extern */
s32 func_020bc104(void *, s32);                     /* extern */
s32 func_020bccc8(s32);                             /* extern */
M2C_UNK func_020bcedc();                            /* extern */

s32 func_020bcf70(void *arg0) {
    func_020bc0a8(arg0, func_020bc104(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020bccc8(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020bcedc();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
