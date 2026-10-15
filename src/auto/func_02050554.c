#include "m2c.h"

M2C_UNK func_020143f8(s32);                         /* extern */
M2C_UNK func_020256c0(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020f6268;

void func_02050554(s32 arg0, s32 arg1) {
    func_020143f8(arg0 + 0x12F4);
    if (arg1 == 0) {
        return;
    }
    func_020256c0(&data_020f6268, 3, arg0 + 0x12F4);
}
