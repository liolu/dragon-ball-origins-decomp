#include "m2c.h"

s32 func_0202c274(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    return (M2C_FIELD(temp_r0, s16 *, 0x20) - M2C_FIELD(temp_r0, s16 *, 0x1E)) + 1;
}
