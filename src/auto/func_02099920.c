#include "m2c.h"

M2C_UNK func_020998d8(M2C_UNK);                     /* extern */
M2C_UNK func_0209995c();                            /* extern */
M2C_UNK func_020bdda8();                            /* extern */
s32 func_020bde20(M2C_UNK *);                       /* extern */
M2C_UNK func_020bdeb4(M2C_UNK *);                   /* extern */

void func_02099920(M2C_UNK arg0) {
    u8 sp0[8];

    func_0209995c();
    func_020bdda8();
    if (func_020bde20(sp0) != 0) {
        func_020bdeb4(sp0);
    }
    func_020998d8(arg0);
}
