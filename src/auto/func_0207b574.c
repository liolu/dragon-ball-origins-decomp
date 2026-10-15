#include "m2c.h"

M2C_UNK func_02077bb0();                            /* extern */

void func_0207b574(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x79C) = (s32) * *M2C_FIELD(arg1, s32 ***, 8);
    if (**M2C_FIELD(arg1, s32 ***, 8) != 0x13) {
        return;
    }
    func_02077bb0(arg0);
}
