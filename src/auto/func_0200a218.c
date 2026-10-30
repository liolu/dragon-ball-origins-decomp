/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

extern M2C_UNK data_020d5584;

u32 func_0200a218(s32 arg0) {
    u32 var_lr;

    var_lr = 0;
loop_1:
    if (arg0 == M2C_FIELD(((var_lr * 0x28) + (s32) &data_020d5584), s32 *, 0x20)) {
        return var_lr;
    }
    var_lr += 1;
    if (var_lr >= 0x101U) {
        return 0x101U;
    }
    goto loop_1;
}
