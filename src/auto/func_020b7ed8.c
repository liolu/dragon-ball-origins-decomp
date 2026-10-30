#include "m2c.h"
M2C_UNK func_020ba440(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020ba70c(M2C_UNK, s32, s32);
extern s32 data_020e79f4;
extern M2C_UNK data_0216ce1c;
void func_020b7ed8(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 off = M2C_FIELD(&data_0216ce1c, s32 *, 8) + arg1;
    if (data_020e79f4 != -1) {
        func_020ba440(data_020e79f4, arg0, off, arg2, 0, 0);
        return;
    }
    func_020ba70c(arg0, off, arg2);
}
