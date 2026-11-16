/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_020ac674();                                /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
s32 func_020c2c44(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02166ea0;

s32 func_020ad080(void) {
    if (func_020ac674() == 6) {
        return 1;
    }
    if (func_020ac674() != 4) {
        return 0;
    }
    func_020ac694(6);
    if (func_020c2c44(&data_02166ea0, 0xD) != 0) {
        return 0;
    }
    return 1;
}
