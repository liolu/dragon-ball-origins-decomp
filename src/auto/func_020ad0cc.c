/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

M2C_UNK func_020b963c(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020c22c0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02167700;
extern M2C_UNK func_020ade54;

s32 func_020ad0cc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020b963c(&data_02167700, 0x60);
    if (func_020c22c0(&func_020ade54, arg2, arg0, arg1, 0xFFFF, 0xE, 2) != 2) {
        return 0;
    }
    return 1;
}
