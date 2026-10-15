#include "m2c.h"

extern M2C_UNK data_02136b24;

void func_0204e6d0(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0x066FF2FFU) {
        var_r0 = 0x066FF2FF;
    }
    M2C_FIELD(&data_02136b24, u32 *, 0xD8) = var_r0;
}
