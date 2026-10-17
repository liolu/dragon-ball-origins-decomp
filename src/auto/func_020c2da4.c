#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020b8734();                                /* extern */
extern M2C_UNK data_02170340;
extern M2C_UNK data_02170344;

void func_020c2da4(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_02170344, 0x05000001);
    M2C_FIELD(&data_02170340, s16 *, 6) = func_020b8734();
}
