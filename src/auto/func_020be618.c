#include "engine.h"
#include "m2c.h"

M2C_UNK func_020be3e8(void);
void func_020beaa4(M2C_UNK);
void func_020bed10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0216eeec;

s32 func_020be618(s32 arg0, s32 arg1) {
    if (func_020be3e8() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0216eeec, volatile s32 *, 4) = 0;
    func_020beaa4(0x03006000);
    do {

    } while (M2C_FIELD(&data_0216eeec, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_0216eeec, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_0216eeec, volatile s32 *, 8) = 0;
    func_020bed10(0, 2, 0, 1);
    func_020beaa4((u8) arg0 | 0x02006100);
    func_020beaa4(0x01010000 | (u16) arg1);
    return 0;
}
