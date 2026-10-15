#include "m2c.h"

M2C_UNK func_0209ae78(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e33c(s32, M2C_UNK, s32);           /* extern */

void func_0209de5c(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0209ae78(arg1, arg0 + 0x105C + (arg2 << 0xA), 0, 0x400);
    if (M2C_FIELD((arg0 + (arg2 * 4)), s32 *, 0x286C) == 0) {
        return;
    }
    func_0209e33c(arg0, arg1, arg2);
}
