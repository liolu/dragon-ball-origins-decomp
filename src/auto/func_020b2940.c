#include "m2c.h"

M2C_UNK func_020ae21c(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
extern M2C_UNK data_0216bf7c;

void func_020b2940(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020ba034();
    func_020ae21c(&data_0216bf7c, arg0);
    func_020ba048(temp_r4);
}
