#include "m2c.h"

void *func_0202c83c(s32);                           /* extern */

void *func_02024e88(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x194);
    if (temp_r1 == 0) {
        return arg0 + 0x198;
    }
    return func_0202c83c(temp_r1);
}
