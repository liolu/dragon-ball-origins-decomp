#include "m2c.h"

s32 func_0204b4c4(s32);                             /* extern */
M2C_UNK func_0209b868(void *, s32);                 /* extern */
M2C_UNK func_0209bff0(void *, s32, M2C_UNK, s32);   /* extern */
M2C_UNK func_020b87e4(s32, s32, s32);               /* extern */
extern M2C_UNK data_020ceb64;

void func_0204b710(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x208) = 1;
    temp_r5                       = (M2C_FIELD(arg0, s32 *, 0x2E0) * 0xC) + (s32) (arg0 + 0x210);
    if (M2C_FIELD(temp_r5, s32 *, 8) != 0) {
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x38);
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x2C);
        func_020b87e4(temp_r6, M2C_FIELD(temp_r5, s32 *, 0), temp_r7);
        M2C_FIELD(temp_r5, s32 *, 0) = temp_r6;
        M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(temp_r5, s32 *, 4) + func_0204b4c4(temp_r7));
    }
    func_0209bff0(arg0 + 0x70, M2C_FIELD(temp_r5, s32 *, 0), 0, M2C_FIELD(arg0, s32 *, 0x2E4));
    temp_r5_2 = *((M2C_UNK *) ((s8 *) &data_020ceb64 + (M2C_FIELD(arg0, s32 *, 0x2DC) * 4)));
    if (M2C_FIELD(arg0, s32 *, 0x98) == 0) {
        var_r1 = 4;
    } else {
        var_r1 = 9;
    }
    func_0209b868(arg0 + 0x70, temp_r5_2 + var_r1);
    func_0209b868(arg0 + 0xA0, temp_r5_2 + 0x26);
    if (M2C_FIELD(arg0, s32 *, 0x20C) != 0) {
        func_0209b868(arg0 + 0x40, temp_r5_2 - 8);
        func_0209b868((void *) ((M2C_FIELD(arg0, s32 *, 0x2D8) * 0x28) + (s32) (arg0 + 0xC8)), temp_r5_2 - 9);
        func_0209b868(arg0 + 0x1B8, temp_r5_2);
        return;
    }
    func_0209b868(arg0 + 0x1E0, temp_r5_2);
}
