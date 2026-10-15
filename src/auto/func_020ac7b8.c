#include "m2c.h"

M2C_UNK func_020ba820(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020ba8dc(M2C_UNK, M2C_UNK *, u32);     /* extern */
extern M2C_UNK data_021676d0;

void func_020ac7b8(M2C_UNK arg0, u32 arg1) {
    u32 var_r4;

    var_r4 = arg1;
    if (var_r4 > 0x18U) {
        var_r4 = 0x18;
    }
    func_020ba820(&data_021676d0, 0, 0x18);
    func_020ba8dc(arg0, &data_021676d0, var_r4);
}
