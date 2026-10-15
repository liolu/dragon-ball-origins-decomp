#include "m2c.h"

M2C_UNK func_020b4f7c(s32, s32, s32);               /* extern */

void func_020831e4(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    func_020b4f7c(arg0 + 0x3CC, arg1 + 0xC, arg0 + 0x3CC);
}
