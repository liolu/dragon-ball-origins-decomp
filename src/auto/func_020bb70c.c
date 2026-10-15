#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);

extern M2C_UNK data_0216d260;

s32 func_020bb70c(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_020ba034();
    temp_r4 = M2C_FIELD(&data_0216d260, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_020ba048(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_0216d260, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_0216d260, s32 *, 0x10) = 0;
    }
    func_020ba048(temp_r0);
    return (s32) temp_r4;
}
