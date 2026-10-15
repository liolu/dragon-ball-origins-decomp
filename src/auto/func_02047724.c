#include "m2c.h"

s32 func_02047b48(M2C_UNK, s32, s32);               /* extern */
s32 func_02047c7c(M2C_UNK);                         /* extern */
extern M2C_UNK data_02125088;
extern M2C_UNK data_0212508c;
extern M2C_UNK data_02125090;
extern M2C_UNK data_02125094;
extern M2C_UNK data_02125098;

void func_02047724(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r4;

    if (func_02047c7c(arg1) != 0) {
        return;
    }
    temp_r4                                          = arg2 * 0x18;
    *((M2C_UNK *) ((s8 *) &data_02125088 + temp_r4)) = 1;
    *((M2C_UNK *) ((s8 *) &data_02125098 + temp_r4)) =
        func_02047b48(arg0, M2C_FIELD(arg3, s32 *, 4), M2C_FIELD(arg3, s32 *, 8));
    *((M2C_UNK *) ((s8 *) &data_0212508c + temp_r4)) = M2C_FIELD(arg3, s32 *, 0xC);
    *((M2C_UNK *) ((s8 *) &data_02125090 + temp_r4)) = M2C_FIELD(arg3, s32 *, 0x10);
    *((M2C_UNK *) ((s8 *) &data_02125094 + temp_r4)) = M2C_FIELD(arg3, s32 *, 0x14);
}
