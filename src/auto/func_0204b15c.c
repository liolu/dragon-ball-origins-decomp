#include "m2c.h"

M2C_UNK func_02001684(s32, M2C_UNK);                /* extern */
M2C_UNK func_020016b8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020ba734(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0204b15c(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_020016b8(arg0 + 4, 0x680, 4);
    }
    func_020016b8(arg0 + 0x10, 0x1800, 4);
    func_02001684(arg0 + 0x1C, 0x100);
    func_02001684(arg0 + 0x34, 0x80);
    func_02001684(arg0 + 0x28, 0x80);
    func_020ba734(0, M2C_FIELD(arg0, s32 *, 0x2C), 0x80);
}
