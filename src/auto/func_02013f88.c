#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204cc08(M2C_UNK, M2C_UNK);
M2C_UNK func_020995dc(M2C_UNK, M2C_UNK);

s32 func_02013f88(s32 arg0) {
    u16 temp_r0;
    u16 temp_r1;
    void *temp_r0_2;

    temp_r0_2 = (void *) func_0204cc08(M2C_FIELD(arg0, s32 *, 0xAC), M2C_FIELD(arg0, s32 *, 0x5C4));
    temp_r1   = M2C_FIELD(temp_r0_2, u16 *, 2);
    temp_r0   = M2C_FIELD(temp_r0_2, u16 *, 0);
    if (temp_r1 == 0) {
        return (s32) temp_r0;
    }
    return func_020995dc((s32) temp_r0, (s32) temp_r1);
}
