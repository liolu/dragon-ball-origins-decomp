#include "m2c.h"

u32 func_0204e524();                                /* extern */
M2C_UNK func_020974e8(M2C_UNK *, s32);              /* extern */
s32 func_02097ff4(M2C_UNK);                         /* extern */
extern M2C_UNK data_0215dbb8;

s32 func_02098180(M2C_UNK arg0) {
    if (func_0204e524() < 8U) {
        return func_02097ff4(arg0);
    }
    func_020974e8(&data_0215dbb8, 0x1CE);
    return 0;
}
