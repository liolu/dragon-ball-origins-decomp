#include "m2c.h"

extern M2C_UNK data_02136b24;

void func_0204e6f0(void) {
    if ((u32) M2C_FIELD(&data_02136b24, u32 *, 0xD8) < 0x066FF2FFU) {
        M2C_FIELD(&data_02136b24, u32 *, 0xD8) = (u32) (M2C_FIELD(&data_02136b24, u32 *, 0xD8) + 1);
    }
}
