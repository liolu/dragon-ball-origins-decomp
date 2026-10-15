#include "m2c.h"

M2C_UNK func_020b1920(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020baee8(s32, s32);                    /* extern */
M2C_UNK func_020bba64(s32);                         /* extern */

void func_020b19a0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020b1920(arg0, arg2, arg3);
    func_020baee8(arg0, arg0 + arg1);
    func_020bba64(arg0);
}
