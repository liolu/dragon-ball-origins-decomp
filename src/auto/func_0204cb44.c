#include "m2c.h"

extern M2C_UNK data_02126da0;
extern M2C_UNK data_021286c8;

s32 func_0204cb44(s32 arg0) {
    void *temp_r1;

    temp_r1 = *((M2C_UNK *) ((s8 *) &data_02126da0 + (((u8 *) &data_021286c8)[arg0] * 4)));
    return M2C_FIELD((temp_r1 + (M2C_FIELD(temp_r1, u16 *, 0x12) * 4)), s32 *, 0x30);
}
