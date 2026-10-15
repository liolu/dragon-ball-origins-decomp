#include "m2c.h"

M2C_UNK func_0209bfc8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020b87e4(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK data_020d9030;
extern M2C_UNK data_0213f2e4;

void func_020367d8(s32 arg0) {
    u8 sp0[64];

    func_020b87e4(sp0, &data_020d9030, M2C_FIELD(&data_0213f2e4, s32 *, 0x2FC), M2C_FIELD(&data_0213f2e4, s32 *, 0x300));
    func_0209bfc8(arg0 + 0x1D4, sp0);
}
