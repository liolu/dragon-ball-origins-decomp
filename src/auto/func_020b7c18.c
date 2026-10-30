#include "m2c.h"

M2C_UNK func_020ba440(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_020ba70c(M2C_UNK, s32);                /* extern */
extern s32 data_020e79f4;

void func_020b7c18(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (data_020e79f4 != -1) {
        func_020ba440(data_020e79f4, arg0, arg1 + 0x06898000, arg2, 0, 0);
        return;
    }
    func_020ba70c(arg0, arg1 + 0x06898000);
}
