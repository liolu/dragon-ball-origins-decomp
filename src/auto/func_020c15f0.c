#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);

extern M2C_UNK data_0216f8a0;

s32 func_020c15f0(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_020ba034();
    if (M2C_FIELD(&data_0216f8a0, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_0216f8a0, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_020ba048(temp_r0);
    return (s32) var_r4;
}
