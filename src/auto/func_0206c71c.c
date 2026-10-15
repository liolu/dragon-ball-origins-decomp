#include "m2c.h"

s32 func_02001684(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0204b15c(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0204bb98(s32, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020ba6f0(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_021267b0;

void func_0206c71c(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xD04) = -1;
    func_020ba6f0(0, arg0 + 4, 4);
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    func_0204b15c(&data_021267b0, 1);
    temp_r0 = func_02001684(arg0 + 8, 0x1000);
    sp0     = M2C_FIELD(arg0, s32 *, 0x10);
    func_0204bb98(temp_r0, &sp0, 0xE, arg1);
    M2C_FIELD(arg0, s32 *, 0x254) = 0;
    M2C_FIELD(arg0, s32 *, 0x258) = 0;
}
