#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b83a0(M2C_UNK);
void func_020b9dec(M2C_UNK);

extern M2C_UNK data_0216d208;

void func_020b9f98(void) {
    if (M2C_FIELD(&data_0216d208, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0216d208, u16 *, 0) = 1U;
    func_020b9dec(1);
    M2C_FIELD(&data_0216d208, s32 *, 4) = 0;
    M2C_FIELD(&data_0216d208, s32 *, 8) = 0;
    func_020b83a0(0x10);
}
