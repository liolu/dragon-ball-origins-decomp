#include "engine.h"
#include "m2c.h"

void func_020a05dc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;
extern s8 data_02162c84;

void func_0202a84c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    var_r3                       = arg3;
    M2C_FIELD(arg0, s32 *, 4)    = 2;
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) arg1;
    if (var_r3 > 0x1F) {
        var_r3 = 0x1F;
    }
    M2C_FIELD(arg0, s32 *, 8)    = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = var_r3;
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    func_020a05dc((s32) &data_020e7ddc, arg1, arg2, var_r3);
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    data_02162c84 = 1;
}
