#include "engine.h"
#include "m2c.h"

void func_02002bc4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0204310c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 8) = arg1;
    temp_r0                   = arg0 + 0xC;
    temp_r2                   = arg0 + 0xA8;
    if (arg1 == 0) {
        func_02002bc4(temp_r0, 6, temp_r2);
        return;
    }
    func_02002bc4(temp_r0, 7, temp_r2);
}
