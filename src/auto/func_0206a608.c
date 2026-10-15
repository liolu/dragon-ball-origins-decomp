#include "m2c.h"

s32 func_0206a608(void *arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x7C0);
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r0_2 = *M2C_FIELD(temp_r0, s32 **, 8);
    if ((temp_r0_2 >= 0x15) && (temp_r0_2 <= 0x15)) {
        return 1;
    }
    return 0;
}
