#include "m2c.h"

M2C_UNK func_020ad41c();                            /* extern */
M2C_UNK func_020ba0a4(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e7c00;
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;
extern M2C_UNK data_027e0000;

void func_0200140c(void) {
    if ((s32) * (u16 *) 0x04000006 <= 0xC1) {
        if (!(data_020e7dcc & 1)) {
            data_020e7dcc |= 1;
        }
        if (M2C_FIELD(&data_020e7ddc, u8 *, 0x1F0) != 0) {
            func_020ba0a4(0x310);
        }
    }
    M2C_FIELD(&data_020e7c00, s32 *, 0xC)    = (s32) (M2C_FIELD(&data_020e7c00, s32 *, 0xC) + 1);
    M2C_FIELD(&data_020e7c00, s32 *, 4)      = (s32) (M2C_FIELD(&data_020e7c00, s32 *, 4) + 1);
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 1);
    func_020ad41c();
}
