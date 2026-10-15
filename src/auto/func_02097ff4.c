#include "m2c.h"

u32 func_0204dd14(s32);                             /* extern */
u32 func_0204e550(s32);                             /* extern */
M2C_UNK func_020974e8(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_0215dbb8;

s32 func_02097ff4(void *arg0) {
    u32 temp_r4;

    temp_r4 = func_0204dd14(M2C_FIELD(arg0, s32 *, 0x154));
    if (temp_r4 > func_0204e550(M2C_FIELD(arg0, s32 *, 0x154))) {
        return 1;
    }
    func_020974e8(&data_0215dbb8, 0x1DD);
    return 0;
}
