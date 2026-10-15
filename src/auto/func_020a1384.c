#include "m2c.h"

extern M2C_UNK data_027e0064;

M2C_UNK *func_020a1384(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x34);
    if (temp_r2 < 0) {
        return &data_027e0064;
    }
    return (M2C_UNK *) ((temp_r2 * 0x30) + M2C_FIELD(arg0, s32 *, 0));
}
