#include "engine.h"
#include "m2c.h"

M2C_UNK func_020be3e8(void);
void func_020beaa4(M2C_UNK);

extern M2C_UNK data_0216eeec;

s32 func_020be7a0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_020be3e8() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0216eeec, s32 *, 0x20) = arg2;
    M2C_FIELD(&data_0216eeec, s32 *, 0x24) = arg3;
    func_020beaa4((u8) arg0 | 0x02006400);
    func_020beaa4(0x01010000 | (u16) arg1);
    return 0;
}
