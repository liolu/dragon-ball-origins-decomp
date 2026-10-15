#include "m2c.h"

extern M2C_UNK data_02126064;

void func_02048204(s32 arg0, s32 arg1) {
    M2C_UNK *var_r3;
    u32 var_ip;

    var_r3 = &data_02126064;
    var_ip = 0;
    do {
        if (((s32) M2C_FIELD(var_r3, s32 *, 8) >= 0) && (M2C_FIELD(var_r3, s32 *, 4) == arg0)) {
            M2C_FIELD(var_r3, s32 *, 0x70) = arg1;
        }
        var_ip += 1;
        var_r3 = (M2C_UNK *) ((s8 *) var_r3 + 0x74);
    } while (var_ip < 0x10U);
}
