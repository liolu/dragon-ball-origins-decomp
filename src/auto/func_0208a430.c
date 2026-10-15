#include "engine.h"
#include "m2c.h"

void func_0208d7d8(M2C_UNK);
M2C_UNK func_02096058(M2C_UNK);

extern s32 data_0215b09c;
extern M2C_UNK data_0215db88;

void func_0208a430(s32 arg0) {
    s32 var_r0;

    data_0215b09c = 0;
    func_0208d7d8((s32) &data_0215b09c);
    if (func_02096058((s32) &data_0215db88) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 2;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
}
