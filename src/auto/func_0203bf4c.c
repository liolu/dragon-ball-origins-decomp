#include "engine.h"
#include "m2c.h"

M2C_UNK func_02002c10(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0203bf4c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 + 0xC;
    if (M2C_FIELD(arg0, s32 *, 0x6A4) == 0) {
        func_02002c10(temp_r0, 0x2A, 0);
        func_02002c10(arg0 + 0x34, 0x2B, 0);
        return;
    }
    func_02002c10(temp_r0, 0x29, 0);
    func_02002c10(arg0 + 0x34, 0x2C, 0);
}
