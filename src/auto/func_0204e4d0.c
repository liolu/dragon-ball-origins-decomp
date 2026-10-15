#include "m2c.h"

s32 func_02099ba8(M2C_UNK *);                       /* extern */
M2C_UNK func_02099bb4(s32);                         /* extern */
M2C_UNK func_02099c0c(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020e0138;
extern M2C_UNK data_021356d4;

void func_0204e4d0(void) {
    u8 sp0[16];
    s32 temp_r0;

    temp_r0 = func_02099ba8(&data_020e0138);
    if (temp_r0 == 0) {
        return;
    }
    func_02099c0c(temp_r0, sp0, 0x10);
    func_02099c0c(temp_r0, &data_021356d4, 0x1450);
    func_02099bb4(temp_r0);
}
