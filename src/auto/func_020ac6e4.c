/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_021676c0;

void func_020ac6e4(void) {
    s8 *var_r2;
    u32 var_r1;

    var_r2 = &data_021676c0;
    var_r1 = 0;
    do {
        var_r1 += 1;
        *var_r2 = -1;
        var_r2 += 1;
    } while (var_r1 < 0x10U);
}
