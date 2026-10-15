#include "engine.h"
#include "m2c.h"

M2C_UNK func_02023680(M2C_UNK);
void func_02023778(M2C_UNK);

void func_020235ec(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    if (func_02023680(arg0) != 0) {
        return;
    }
    func_02023778(arg0);
}
