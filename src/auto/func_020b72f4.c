#include "engine.h"
#include "m2c.h"

void func_020ba3d4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ba6bc(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020e79f4;

void func_020b72f4(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020e79f4 != -1) && ((u32) arg2 > 0x1CU)) {
        func_020ba3d4(data_020e79f4, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_020ba6bc(arg0, arg1 + 0x05000600, arg2);
}
