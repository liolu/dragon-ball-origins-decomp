#include "m2c.h"

M2C_UNK func_0209bfc8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020b87e4(M2C_UNK *, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_020d907c;
extern void *data_0213dff0;

void func_02036ab8(s32 arg0) {
    u8 sp8[64];

    func_020b87e4(sp8, &data_020d907c, M2C_FIELD(data_0213dff0, s32 *, 0x2FC), M2C_FIELD(data_0213dff0, s32 *, 0x300),
                  M2C_FIELD(data_0213dff0, s32 *, 0x780), M2C_FIELD(data_0213dff0, s32 *, 0x784));
    func_0209bfc8(arg0 + 0x1D4, sp8);
}
