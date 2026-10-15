#include "m2c.h"

M2C_UNK func_0203e728(M2C_UNK);                     /* extern */
M2C_UNK func_0203e788(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0203e804(M2C_UNK);                     /* extern */
s32 func_0204f270(M2C_UNK *);                       /* extern */

void func_0203e60c(M2C_UNK arg0) {
    u8 sp0[36];
    s32 temp_r0;

    temp_r0 = func_0204f270(sp0);
    switch (temp_r0) {                              /* irregular */
        case -1:
            func_0203e728(arg0);
            return;
        case 0:
            func_0203e788(arg0, sp0);
            return;
        default:
            func_0203e804(arg0);
            return;
    }
}
