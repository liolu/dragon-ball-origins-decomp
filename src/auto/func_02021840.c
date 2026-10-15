#include "m2c.h"

M2C_UNK func_020019f8(M2C_UNK);                     /* extern */
s32 func_020218d4();                                /* extern */
M2C_UNK func_0204b244(M2C_UNK *, M2C_UNK, s32);     /* extern */
s32 func_0204f710(s32);                             /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_02136be0;
extern M2C_UNK data_02137b18;

void func_02021840(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020218d4();
    if ((temp_r0 != -1) && (temp_r0 != -2)) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) (temp_r0 + 2);
        M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x1B0) != 2) {
            return;
        }
        if (func_0204f710(M2C_FIELD(&data_02136be0, s32 *, 0x18)) == 0) {
            return;
        }
        func_0204b244(&data_021267b0, 1,
                      M2C_FIELD(&data_02137b18, s32 *, 0x14) +
                          M2C_FIELD(M2C_FIELD(&data_02137b18, void **, 0x10), u16 *, 0x276));
        M2C_FIELD(arg0, s32 *, 0x1B0) = 6;
        func_020019f8(0);
    }
}
