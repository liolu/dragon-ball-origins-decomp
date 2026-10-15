#include "m2c.h"

M2C_UNK func_02021020();                            /* extern */
M2C_UNK func_02051c3c(s32);                         /* extern */

void func_0202a3d0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) == 0) {
        func_02021020();
    }
    func_02051c3c(M2C_FIELD(arg0, s32 *, 0x4C));
}
