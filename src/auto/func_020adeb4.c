#include "m2c.h"

M2C_UNK func_020adeec();                            /* extern */
s32 func_020ae19c();                                /* extern */
M2C_UNK func_020ae1c0(s32);                         /* extern */
s32 func_020c012c(M2C_UNK);                         /* extern */
extern s32 data_02168b60;

s32 func_020adeb4(M2C_UNK arg0) {
    s32 temp_r4;

    func_020adeec();
    temp_r4       = func_020ae19c();
    data_02168b60 = func_020c012c(arg0);
    func_020ae1c0(temp_r4);
    return 1;
}
