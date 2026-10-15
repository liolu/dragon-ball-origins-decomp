#include "engine.h"
#include "m2c.h"

void func_020ba364(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ba70c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020e79f4;

void func_020b734c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020e79f4 != -1) && ((u32) arg2 > 0x30U)) {
        func_020ba364(data_020e79f4, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_020ba70c(arg0, arg1 + 0x07000000, arg2);
}
