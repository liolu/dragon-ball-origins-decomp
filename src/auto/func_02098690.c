/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_0204e908(s32);                             /* extern */
extern M2C_UNK data_020cfe50;

s32 func_02098690(void) {
    s8 var_r5;

    var_r5 = 4;
loop_1:
    if (func_0204e908(M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cfe50 + (var_r5 * 4))), s32 *, -4)) != 0) {
        return *((M2C_UNK *) ((s8 *) &data_020cfe50 + ((var_r5 - 1) * 4)));
    }
    var_r5 -= 1;
    if ((s32) var_r5 <= 0) {
        return 0;
    }
    goto loop_1;
}
