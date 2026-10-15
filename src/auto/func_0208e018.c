#include "m2c.h"

void func_0208e018(void *arg0, s16 arg1, void *arg2) {
    u16 temp_r1;
    void *temp_r2;

    temp_r2                   = M2C_FIELD(arg2, void **, 0xC);
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    temp_r1                   = M2C_FIELD(temp_r2, u16 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) temp_r1;
    if (temp_r1 == 6) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r2, u16 *, 2);
    }
}
