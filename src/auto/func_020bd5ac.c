#include "m2c.h"

M2C_UNK func_020bd3c4(M2C_UNK *);                   /* extern */
s32 func_020bd3ec(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020bd5ac(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_020bd3c4(sp0);
    if (func_020bd3ec(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
