/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020f576c;

void func_02021194(s32 arg0) {
    M2C_UNK *var_ip;
    u32 var_r3;

    var_ip = &data_020f576c;
    var_r3 = 0;
    do {
        var_r3 += 1;
        if (arg0 == M2C_FIELD(var_ip, s32 *, 0x5C)) {
            M2C_FIELD(var_ip, s32 *, 0x5C) = -1;
        }
        var_ip = (M2C_UNK *) ((s8 *) var_ip + 0x64);
    } while (var_r3 < 5U);
}
