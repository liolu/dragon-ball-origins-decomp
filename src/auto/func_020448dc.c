/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

extern M2C_UNK data_02125054;
extern M2C_UNK data_02125058;

void func_020448dc(s32 arg0, s32 arg1) {
    u32 var_ip;

    var_ip = 0;
loop_1:
    if (*((M2C_UNK *) ((s8 *) &data_02125054 + (var_ip * 8))) == 0) {
        *((M2C_UNK *) ((s8 *) &data_02125054 + (var_ip * 8))) = arg0;
        *((M2C_UNK *) ((s8 *) &data_02125058 + (var_ip * 8))) = arg1;
        return;
    }
    var_ip += 1;
    if (var_ip >= 6U) {
        return;
    }
    goto loop_1;
}
