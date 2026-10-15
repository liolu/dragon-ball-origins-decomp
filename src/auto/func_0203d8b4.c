#include "m2c.h"

M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
extern M2C_UNK data_02124d74;

void func_0203d8b4(void *arg0) {
    s32 temp_r2;

    temp_r2                       = (M2C_FIELD(&data_02124d74, s32 *, 8) * 0x38) + (arg0 + 0x40C);
    M2C_FIELD(arg0, s32 *, 0x504) = (s32) M2C_FIELD(&data_02124d74, s32 *, 8);
    func_0209b87c(arg0 + 0x4DC, M2C_FIELD(temp_r2, s32 *, 4), M2C_FIELD(temp_r2, s32 *, 8));
}
