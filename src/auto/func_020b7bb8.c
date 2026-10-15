#include "engine.h"
#include "m2c.h"

void func_020b5dc8(M2C_UNK);
void func_020ba4d8(M2C_UNK);

extern s32 data_020e79f4;
extern M2C_UNK data_0216ce00;

void func_020b7bb8(void) {
    if (data_020e79f4 != -1) {
        func_020ba4d8(data_020e79f4);
    }
    func_020b5dc8(M2C_FIELD(&data_0216ce00, s32 *, 0x14));
    M2C_FIELD(&data_0216ce00, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0216ce00, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0216ce00, s32 *, 0xC)  = 0;
}
