#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209a6f8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209b59c(M2C_UNK, M2C_UNK);
void func_0209bbb4(M2C_UNK, M2C_UNK);

void func_0209b638(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;

    func_0209b59c(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    temp_r2                      = M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r2;
    if (temp_r2 == 0) {
        return;
    }
    func_0209bbb4(arg0, func_0209a6f8(arg2, 0, temp_r2));
}
