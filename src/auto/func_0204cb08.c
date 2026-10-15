#include "m2c.h"

extern M2C_UNK data_02126da0;
extern M2C_UNK data_021286c8;

s32 func_0204cb08(s32 arg0, s32 arg1) {
    return M2C_FIELD((*((M2C_UNK *) ((s8 *) &data_02126da0 + (((u8 *) &data_021286c8)[arg0] * 4))) + (arg1 * 4)), s32 *, 0x30);
}
