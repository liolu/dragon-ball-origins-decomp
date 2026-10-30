/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0213b468;

void func_020523d4(void) {
    s32 var_r2;

    var_r2 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_0213b468 + (var_r2 * 4))) = 0;
        var_r2 += 1;
    } while (var_r2 < 0x1A);
}
