/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020ce2cc;
extern M2C_UNK data_020ce2f8;
extern M2C_UNK data_020ce324;
extern M2C_UNK data_02136e44;

s32 func_0203f3a0(s32 arg0, s32 arg1) {
    s32 var_r1;
    u32 var_ip;

    var_r1 = arg1;
    var_ip = 0;
loop_1:
    if (var_r1 == *((M2C_UNK *) ((s8 *) &data_020ce2f8 + (var_ip * 4)))) {
        if ((u32) ((u8 *) &data_02136e44)[*((M2C_UNK *) ((s8 *) &data_020ce2cc + (var_ip * 4)))] <
            (u32) * ((M2C_UNK *) ((s8 *) &data_020ce324 + (var_ip * 4)))) {
            var_r1 = 0x122;
        }
    } else {
        var_ip += 1;
        if (var_ip < 0xBU) {
            goto loop_1;
        }
    }
    return var_r1;
}
