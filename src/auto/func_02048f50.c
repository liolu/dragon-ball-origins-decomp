#include "engine.h"
#include "m2c.h"

M2C_UNK func_02047c7c(void);
M2C_UNK func_02048e70(M2C_UNK);
void func_02049118(M2C_UNK);
M2C_UNK func_02049208(M2C_UNK);

void func_02048f50(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    void *temp_r0;

    if (func_02047c7c() != 0) {
        return;
    }
    temp_r0                         = (void *) func_02048e70(arg1);
    M2C_FIELD(temp_r0, s32 *, 0)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 2;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    temp_r1                         = arg3 + 1;
    M2C_FIELD(temp_r0, s32 *, 0x40) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x44) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x48) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, u32 *, 0x4C) = temp_r1;
    if (temp_r1 > 1U) {
        return;
    }
    func_02049118((s32) temp_r0);
    func_02049208((s32) temp_r0);
}
