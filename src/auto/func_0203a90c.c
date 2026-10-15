#include "engine.h"
#include "m2c.h"

void func_0203b66c(M2C_UNK);
M2C_UNK func_0203be34(M2C_UNK);
void func_0203bed0(M2C_UNK);

extern M2C_UNK data_02123784;

void func_0203a90c(s32 arg0) {
    s32 var_r0;

    if (M2C_FIELD(&data_02123784, s32 *, 0x6FC) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x6A0) == 3) {
        func_0203bed0(arg0);
        return;
    }
    if ((func_0203be34(arg0) == 0) && (M2C_FIELD(arg0, s32 *, 0x6A4) == 1)) {
        func_0203b66c(arg0);
    }
}
