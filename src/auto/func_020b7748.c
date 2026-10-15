#include "m2c.h"

s32 func_020b6968();                                /* extern */
M2C_UNK func_020ba3d4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020ba6bc(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020e79f4;

void func_020b7748(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020b6968();
    if ((data_020e79f4 != -1) && (arg2 > 0x1CU)) {
        func_020ba3d4(data_020e79f4, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020ba6bc(arg0, temp_ip + arg1, arg2);
}
