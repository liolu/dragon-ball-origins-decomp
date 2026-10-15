#include "m2c.h"

u16 func_01ff8000(u16, u16, s32);                   /* extern */
M2C_UNK func_020267a8(M2C_UNK *, u16);              /* extern */
s32 func_02047c7c(s32);                             /* extern */
s32 func_020c4c64(M2C_UNK, u32);                    /* extern */
extern M2C_UNK data_020f6268;
extern M2C_UNK data_020f6368;

s32 func_0204a4c8(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 4) <= 1U) || (func_02047c7c(M2C_FIELD(arg0, s32 *, 0)) != 0)) {
        func_020267a8(&data_020f6268, M2C_FIELD(arg0, u16 *, 8));
        return 1;
    }
    func_020267a8(&data_020f6268, func_01ff8000(M2C_FIELD(&data_020f6368, u16 *, 0x90), M2C_FIELD(arg0, u16 *, 8),
                                                func_020c4c64(0x1000, M2C_FIELD(arg0, u32 *, 4))));
    M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) - 1);
    return 0;
}
