/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_020ac674();                                /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
s32 func_020acac8();                                /* extern */
s32 func_020c2c60(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02166ea0;

s32 func_020aca80(void) {
    if (func_020ac674() != 6) {
        return 0;
    }
    func_020ac694(3);
    if (func_020c2c60(&data_02166ea0) != 0) {
        return 0;
    }
    if (func_020acac8() == 0) {
        return 0;
    }
    return 1;
}
