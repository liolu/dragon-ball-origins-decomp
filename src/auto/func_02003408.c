#include "m2c.h"

M2C_UNK func_02099bf0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02099c0c(s32, void *, M2C_UNK);        /* extern */
extern M2C_UNK data_020ed9e0;

s32 func_02003408(s32 arg0, void *arg1) {
    func_02099bf0(M2C_FIELD(&data_020ed9e0, s32 *, 0), M2C_FIELD(&data_020ed9e0, s32 *, 0x34) + (arg0 << 6), 0);
    func_02099c0c(M2C_FIELD(&data_020ed9e0, s32 *, 0), arg1, 0x40);
    return M2C_FIELD(arg1, s32 *, 0x3C) + (M2C_FIELD(arg1, s32 *, 0x2C) + M2C_FIELD(arg1, s32 *, 0x34));
}
