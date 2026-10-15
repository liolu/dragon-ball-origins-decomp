#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba034(void);
void func_020ba048(M2C_UNK);
M2C_UNK func_020bf674(void);

extern M2C_UNK data_0216ef58;

s32 func_020befe0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_020ba034();
    if (M2C_FIELD(&data_0216ef58, s32 *, 0xC) != 0) {
        func_020ba048(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_0216ef58, s32 *, 0xC) = 1;
    func_020ba048(temp_r0);
    M2C_FIELD(&data_0216ef58, s32 *, 0x20) = 1;
    M2C_FIELD(&data_0216ef58, s32 *, 0x24) = 0;
    M2C_FIELD(&data_0216ef58, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_0216ef58, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_0216ef58, s32 *, 0x1C) = arg2;
    if (func_020bf674() != 0) {
        return 0;
    }
    return 3;
}
