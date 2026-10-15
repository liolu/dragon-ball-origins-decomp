#include "m2c.h"

M2C_UNK func_0207c07c(s32, s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_0207c4a4(s32, s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_020e4c14;
extern M2C_UNK data_020e4cd4;
extern M2C_UNK func_02073044;
extern M2C_UNK func_02081428;

void func_0207c018(s32 arg0, s32 arg1) {
    func_0207c4a4(arg0, arg0 + 0x4EC, *((M2C_UNK *) ((s8 *) &data_020e4c14 + (arg1 * 4))), &func_02073044, 1);
    func_0207c07c(arg0, arg0 + 0x4F8, *((M2C_UNK *) ((s8 *) &data_020e4cd4 + (arg1 * 4))), &func_02081428, 0x1C);
}
