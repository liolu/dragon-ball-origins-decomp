#include "m2c.h"

M2C_UNK func_02002c10(void *, s32, M2C_UNK);        /* extern */
s32 func_0204dca0(s32);                             /* extern */
s32 func_0204dcfc(s32);                             /* extern */
M2C_UNK func_0209b87c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0209bfc8(void *, s32);                 /* extern */

void func_02040ffc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC0) = arg1;
    if (arg1 < 0) {
        return;
    }
    if (arg1 >= 8) {
        return;
    }
    func_02002c10(arg0 + 4, arg1 + 0xAD, 1);
    func_0209b87c(arg0 + 4, 0xC, 0x58);
    func_0209bfc8(arg0 + 0x54, func_0204dca0(arg1));
    func_0209bfc8(arg0 + 0x84, func_0204dcfc(arg1));
}
