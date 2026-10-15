#include "m2c.h"

s32 func_020ac674();                                /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c2258(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK data_02167700;
extern M2C_UNK data_02167760;
extern M2C_UNK func_020ad9ec;

s32 func_020ace38(void) {
    if ((func_020ac674() == 4) || (func_020ac674() == 6) || (func_020ac674() == 5)) {
        return 1;
    }
    func_020ac694(3);
    if (func_020c2258(&func_020ad9ec, &data_02167760, 0x100, &data_02167700, 0x60, 1) == 2) {
        return 1;
    }
    func_020ac6a4();
    return 0;
}
