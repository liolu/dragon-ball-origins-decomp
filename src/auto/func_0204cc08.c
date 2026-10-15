#include "m2c.h"

extern M2C_UNK data_02126d90;
extern M2C_UNK data_02128780;

s32 func_0204cc08(s32 arg0, s32 arg1) {
    return (arg1 * 0x24) + M2C_FIELD((M2C_FIELD(&data_02126d90, s32 *, 8) + (((s8 *) &data_02128780)[arg0] * 8)), s32 *, 4);
}
