#include "m2c.h"

M2C_UNK func_02050330(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020c35e8(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020e23b0;

void func_020502fc(M2C_UNK arg0, s32 arg1) {
    u8 sp0[128];

    func_020c35e8(sp0, *((M2C_UNK *) ((s8 *) &data_020e23b0 + (arg1 * 4))));
    func_02050330(arg0, sp0);
}
