#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);

extern M2C_UNK data_0216d260;

s32 func_020bb550(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020ba034();
    if (M2C_FIELD(&data_0216d260, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_0216d260, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_0216d260, s32 *, 0x20);
    }
    func_020ba048(temp_r0);
    return var_r4;
}
