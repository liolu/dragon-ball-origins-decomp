#include "m2c.h"

M2C_UNK func_01fff40c(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020b82b4(M2C_UNK, M2C_UNK (*)(s32), s32); /* extern */
M2C_UNK func_020ba4d8(M2C_UNK);                     /* extern */
M2C_UNK func_020ba640(M2C_UNK, M2C_UNK, u32, M2C_UNK); /* extern */

void func_020ba440(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    func_020ba640(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_020ba4d8(arg0);
    if (arg4 != NULL) {
        func_020b82b4(arg0, arg4, arg5);
        func_01fff40c(arg0, arg1, arg2, (arg3 >> 2) | 0xC4000000);
        return;
    }
    func_01fff40c(arg0, arg1, arg2, (arg3 >> 2) | 0x84000000);
}
