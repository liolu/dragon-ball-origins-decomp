#include "m2c.h"

s32 func_02099ba8(M2C_UNK *);                       /* extern */
M2C_UNK func_02099bb4(s32);                         /* extern */
M2C_UNK func_02099c0c(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020e00e4;
extern M2C_UNK data_02128aec;

void func_0204cc80(void) {
    u8 sp0[16];
    s32 temp_r0;

    temp_r0 = func_02099ba8(&data_020e00e4);
    if (temp_r0 == 0) {
        return;
    }
    func_02099c0c(temp_r0, sp0, 0x10);
    func_02099c0c(temp_r0, &data_02128aec, 0x13F8);
    func_02099bb4(temp_r0);
}
