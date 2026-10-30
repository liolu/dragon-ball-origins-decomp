/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020cfe50;

void func_02098c2c(void *arg0, s32 arg1) {
    s8 var_ip;

    var_ip = 4;
loop_1:
    if (arg1 >= (s32) M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cfe50 + (var_ip * 4))), s32 *, -4)) {
        M2C_FIELD(arg0, s8 *, 6) = var_ip;
        return;
    }
    var_ip -= 1;
    if ((s32) var_ip <= 0) {
        return;
    }
    goto loop_1;
}
