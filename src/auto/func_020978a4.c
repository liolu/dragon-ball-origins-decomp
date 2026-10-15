#include "m2c.h"

M2C_UNK func_0209b854(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
extern M2C_UNK data_0215f104;

void func_020978a4(void *arg0) {
    s32 temp_r0;
    s32 temp_r1_2;
    u8 temp_r1;
    void *temp_r0_2;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xDDC), u8 *, 6);
    if (temp_r1 == 0) {
        func_0209b854(arg0 + 0x794, 0x100);
        M2C_FIELD(&data_0215f104, s32 *, 0x108) = 0;
        return;
    }
    temp_r1_2 = temp_r1 - 1;
    if (temp_r1_2 <= (s32) M2C_FIELD(arg0, s8 *, 0xE18)) {
        M2C_FIELD(arg0, s8 *, 0xE18) = (s8) temp_r1_2;
    }
    temp_r0 = ((M2C_FIELD(arg0, s8 *, 0xE18) + 3) * 0x90) + (s32) (arg0 + 0x9C);
    func_0209b87c(arg0 + 0x794, M2C_FIELD(temp_r0, s32 *, 0x2C), M2C_FIELD(temp_r0, s32 *, 0x30));
    temp_r0_2 = M2C_FIELD(arg0, void **, 0xDDC);
    M2C_FIELD(M2C_FIELD(temp_r0_2, void **, 0), M2C_UNK(**)(void *, s8), 0xC)(temp_r0_2, M2C_FIELD(arg0, s8 *, 0xE18));
}
