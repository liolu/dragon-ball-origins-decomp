#include "m2c.h"

M2C_UNK func_02073f20(s32, s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_020e6588;
extern M2C_UNK func_02073044;

void func_02081d14(s32 arg0, s32 arg1) {
    func_02073f20(arg0, arg0 + 0x414, *((M2C_UNK *) ((s8 *) &data_020e6588 + (arg1 * 4))), &func_02073044, 1);
}
