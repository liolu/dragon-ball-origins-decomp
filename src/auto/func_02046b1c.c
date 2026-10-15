#include "engine.h"
#include "m2c.h"

void func_02025fcc(M2C_UNK);
void func_02026014(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020f6268;

void func_02046b1c(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4);
    if (temp_r1 < 0) {
        func_02025fcc((s32) &data_020f6268);
        return;
    }
    func_02026014((s32) &data_020f6268, temp_r1);
}
