#include "m2c.h"

extern M2C_UNK data_020e7614;

M2C_UNK *func_020a1318(void *arg0) {
    s32 temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r2 = M2C_FIELD(temp_r3, s32 *, 0x30);
    if (temp_r2 < 0) {
        return &data_020e7614;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xC) + M2C_FIELD(((temp_r2 * 0x14) + M2C_FIELD(temp_r3, s32 *, 0x14)), s32 *, 8);
}
