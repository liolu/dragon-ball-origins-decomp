#include "m2c.h"

M2C_UNK func_020b920c(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_020b9604(s32, s32);                    /* extern */
extern M2C_UNK data_0216b934;
extern M2C_UNK data_0216b93c;
extern M2C_UNK data_0216b9d0;

void func_020b05e4(void *arg0) {
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    void *temp_r1;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r2 = temp_r6 * M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC) + temp_r2;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10) + temp_r2;
    if (M2C_FIELD(&data_0216b934, s32 *, 0) != 0) {
        temp_r3                                          = M2C_FIELD(&data_0216b934, s32 *, 4) * 0x14;
        *((M2C_UNK *) ((s8 *) &data_0216b9d0 + temp_r3)) = arg0;
        temp_r1                                          = (M2C_UNK *) ((s8 *) &data_0216b9d0 + temp_r3);
        M2C_FIELD(temp_r1, s32 *, 4)                     = temp_r6;
        M2C_FIELD(temp_r1, s32 *, 8)                     = temp_r2;
        M2C_FIELD(temp_r1, s32 *, 0xC)                   = temp_r4;
        M2C_FIELD(temp_r1, s32 *, 0x10)                  = temp_r5;
        func_020b920c(&data_0216b93c, temp_r1, 0);
        temp_r1_2                           = M2C_FIELD(&data_0216b934, s32 *, 4) + 1;
        M2C_FIELD(&data_0216b934, s32 *, 4) = temp_r1_2;
        if (temp_r1_2 >= 8) {
            M2C_FIELD(&data_0216b934, s32 *, 4) = 0;
        }
    } else {
        func_020b9604(temp_r4, temp_r6);
        func_020b9604(temp_r5, temp_r6);
        M2C_FIELD(arg0, M2C_UNK(**)(s32, s32, s32, s32, s32), 0x34)(temp_r4, temp_r5, temp_r6, M2C_FIELD(arg0, s32 *, 8),
                                                                    M2C_FIELD(arg0, s32 *, 0x38));
    }
    temp_r1_3                    = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r1_3;
    if (temp_r1_3 >= (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
