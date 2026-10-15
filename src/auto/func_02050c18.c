#include "m2c.h"

M2C_UNK func_0200ab78(s32);                         /* extern */
M2C_UNK func_020256c0(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020f6268;

void func_02050c18(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x2FC;
    func_0200ab78(arg0 + temp_r4);
    if (arg2 == 0) {
        return;
    }
    func_020256c0(&data_020f6268, 3, arg0 + temp_r4);
}
