#include "engine.h"
#include "m2c.h"

M2C_UNK func_020224dc(M2C_UNK);
void func_020226a8(M2C_UNK);

void func_02022448(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    if (func_020224dc(arg0) != 0) {
        return;
    }
    func_020226a8(arg0);
}
