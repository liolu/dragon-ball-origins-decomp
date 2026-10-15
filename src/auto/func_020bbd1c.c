#include "m2c.h"

M2C_UNK func_020b9620(s32, M2C_UNK);                /* extern */
M2C_UNK func_020bb05c();                            /* extern */
M2C_UNK func_020bb070();                            /* extern */

void func_020bbd1c(s32 arg0, s32 arg1, s32 arg2) {
    func_020bb05c();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020b9620(arg0 + 0x3C + (arg1 * 4), 4);
    func_020bb070();
}
