#include "m2c.h"

M2C_UNK func_0202643c(M2C_UNK *, M2C_UNK, s32, s32); /* extern */
s32 func_02047b48();                                /* extern */
extern M2C_UNK data_020f6268;

void func_02046940(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;

    if (arg2 < 0) {
        temp_r0 = func_02047b48();
        if (temp_r0 == 0) {
            return;
        }
        func_0202643c(&data_020f6268, arg1, arg2, temp_r0);
        return;
    }
    func_0202643c(&data_020f6268, arg1, arg2, 0);
}
