#include "m2c.h"

M2C_UNK func_02002b84(s32, M2C_UNK);                /* extern */
M2C_UNK func_020089c8(void *);                      /* extern */
M2C_UNK func_02009c0c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020cd3f8;
extern M2C_UNK data_020cd4d0;

void func_02008938(void *arg0, s32 arg1) {
    func_02002b84(arg0 + 0x78, 0x11);
    func_020089c8(arg0);
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x1674) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x166C) = (s32) * ((M2C_UNK *) ((s8 *) &data_020cd3f8 + (M2C_FIELD(arg0, s32 *, 0x1674) * 4)));
    M2C_FIELD(arg0, s32 *, 0x1670) = (s32) * ((M2C_UNK *) ((s8 *) &data_020cd4d0 + (M2C_FIELD(arg0, s32 *, 0x1674) * 4)));
    func_02009c0c(arg0, 0);
}
