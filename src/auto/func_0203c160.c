#include "engine.h"
#include "m2c.h"

void func_0203c83c(M2C_UNK);
M2C_UNK func_0203c9e4(M2C_UNK);
void func_0203ca80(M2C_UNK);

extern M2C_UNK data_02123784;

void func_0203c160(s32 arg0) {
    s32 var_r0;

    if (M2C_FIELD(&data_02123784, s32 *, 0x7C0) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x670) == 2) {
        func_0203ca80(arg0);
        return;
    }
    if ((func_0203c9e4(arg0) == 0) && (M2C_FIELD(arg0, s32 *, 0x674) == 1)) {
        func_0203c83c(arg0);
    }
}
