#include "m2c.h"

s32 func_0202c83c();                                /* extern */
M2C_UNK func_0206bb1c(void *, M2C_UNK, M2C_UNK, void *, s32, s32, s32); /* extern */

void func_0207b200(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x5C);
    func_0206bb1c(arg0 + 0x824, 5, 0, arg0 + 0x1C, temp_r4, func_0202c83c(), 0);
}
