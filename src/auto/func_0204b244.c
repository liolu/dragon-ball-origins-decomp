#include "m2c.h"

M2C_UNK func_0204b3d8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204b68c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204b710(void *);                      /* extern */
M2C_UNK func_0209bff0(void *, s32, M2C_UNK, s32);   /* extern */

void func_0204b244(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x2D0) = (s32) (arg1 & 4);
    M2C_FIELD(arg0, s32 *, 0x2DC) = (s32) (arg1 & 3);
    M2C_FIELD(arg0, s32 *, 0x2E0) = 0;
    func_0204b3d8(arg0, arg2);
    func_0204b68c(arg0, 0);
    func_0204b710(arg0);
    temp_r3 = (M2C_FIELD(arg0, s32 *, 0x2E0) * 0xC) + (s32) (arg0 + 0x210);
    func_0209bff0(arg0 + 0x70, M2C_FIELD(temp_r3, s32 *, 0), 0, M2C_FIELD(temp_r3, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x2EC) = 0;
}
