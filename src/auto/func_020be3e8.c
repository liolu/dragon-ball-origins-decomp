#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);

extern M2C_UNK data_0216eeec;

s32 func_020be3e8(void) {
    s32 temp_r0;

    temp_r0 = func_020ba034();
    if (M2C_FIELD(&data_0216eeec, s32 *, 0x1C) != 0) {
        func_020ba048(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_0216eeec, s32 *, 0x1C) = 1;
    func_020ba048(temp_r0);
    return 1;
}
