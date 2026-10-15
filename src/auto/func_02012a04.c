#include "m2c.h"

M2C_UNK func_020530a4(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020b4fb0(void *, void *, M2C_UNK *);   /* extern */

void func_02012a04(void *arg0, void *arg1, void *arg2) {
    u8 sp10[12];

    M2C_FIELD(arg0, s32 *, 0x198) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) M2C_FIELD(arg2, s32 *, 8);
    func_020b4fb0(arg0 + 0x1A4, arg0 + 0x198, sp10);
    func_020530a4(arg0, 0, 0, 0, arg0 + 0x198, sp10, 2, 1);
}
