#include "engine.h"
#include "m2c.h"

void func_020b5f74(M2C_UNK);
void func_020ba4d8(M2C_UNK);

extern s32 data_020e79f4;
extern M2C_UNK data_0216ce1c;

void func_020b7e58(void) {
    if (data_020e79f4 != -1) {
        func_020ba4d8(data_020e79f4);
    }
    func_020b5f74(M2C_FIELD(&data_0216ce1c, s32 *, 0x14));
    M2C_FIELD(&data_0216ce1c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0216ce1c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0216ce1c, s32 *, 4)    = 0;
    M2C_FIELD(&data_0216ce1c, s32 *, 0x14) = 0;
}
