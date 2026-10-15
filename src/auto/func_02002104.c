#include "m2c.h"

s32 func_0209a1b8(M2C_UNK *, u32);                  /* extern */
extern M2C_UNK data_0215fcc8;

u32 func_02002104(void) {
    u32 var_r5;

    var_r5 = 0;
loop_1:
    if (func_0209a1b8(&data_0215fcc8, var_r5) == 0) {
        return var_r5;
    }
    var_r5 += 1;
    if (var_r5 >= 2U) {
        return 0U;
    }
    goto loop_1;
}
