#include "engine.h"
#include "m2c.h"

void func_0203ed88(M2C_UNK);
M2C_UNK func_0203ee04(M2C_UNK);

void func_0203d92c(s32 arg0) {
    if (func_0203ee04(arg0 + 0x508) == 0) {
        return;
    }
    func_0203ed88(arg0 + 0x508);
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
}
