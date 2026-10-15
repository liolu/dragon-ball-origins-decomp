#include "m2c.h"

s32 func_02095eac(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_0215db08;

s32 func_02096058(void *arg0) {
    s32 temp_r0;

    temp_r0                   = func_02095eac(&data_0215db08, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (temp_r0 > 0) {
        return 1;
    }
    return 0;
}
