#include "m2c.h"

M2C_UNK func_02002c50();        /* extern */
s32 func_0204ec84();           /* extern */
M2C_UNK func_020b87e4(); /* extern */
extern M2C_UNK data_020d9350;
extern M2C_UNK data_020d935c;
extern M2C_UNK data_02137b18;

void func_020422d0(s32 arg0, M2C_UNK arg1, void *arg2) {
    u8 spC[64];
    s32 sp8;
    s32 sp4;
    s32 temp_r0;

    temp_r0                           = func_0204ec84(arg1, &sp8, &sp4);
    M2C_FIELD(arg2, s32 *, 4)         = 0xC;
    M2C_FIELD(arg2, s32 *, 8)         = 0x8C;
    M2C_FIELD(arg2, s32 *, 0xC)       = 0x80;
    M2C_FIELD(arg2, s32 *, 0x10)      = 0x10;
    M2C_FIELD(arg2, M2C_UNK **, 0x14) = (M2C_UNK *) (M2C_FIELD(&data_02137b18, s32 *, 0x14) +
                                                     M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x18));
    func_02002c50(arg0 + 0x15C, arg2, 1);
    M2C_FIELD(arg2, s32 *, 4) = 0x7C;
    if (sp4 == 0) {
        func_020b87e4(spC, &data_020d9350);
    } else {
        func_020b87e4(spC, &data_020d935c, temp_r0, sp8, sp4);
    }
    M2C_FIELD(arg2, M2C_UNK **, 0x14) = spC;
    func_02002c50(arg0 + 0x18C, arg2, 1);
}
