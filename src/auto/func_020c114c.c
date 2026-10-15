#include "m2c.h"

M2C_UNK func_020b9604(u16 *, M2C_UNK);              /* extern */
s32 func_020c1130();                                /* extern */
extern M2C_UNK data_0216f8a0;

s32 func_020c114c(void) {
    s32 temp_r0;

    temp_r0 = func_020c1130();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020b9604(M2C_FIELD(M2C_FIELD(&data_0216f8a0, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_0216f8a0, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
