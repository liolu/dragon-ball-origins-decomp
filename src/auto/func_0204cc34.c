#include "m2c.h"

extern s32 data_02126d90;
extern M2C_UNK data_02128838;

s32 func_0204cc34(s32 arg0, s32 arg1) {
    return M2C_FIELD((data_02126d90 + (((s8 *) &data_02128838)[arg0] * 8)), s32 *, 4) + (arg1 * 0x10);
}
