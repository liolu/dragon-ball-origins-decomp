#include "m2c.h"

extern M2C_UNK data_02136b24;

void func_0204ebb4(void) {
    if ((u32) M2C_FIELD(&data_02136b24, u32 *, 0x340) < 0x066FF2FFU) {
        M2C_FIELD(&data_02136b24, u32 *, 0x340) = (u32) (M2C_FIELD(&data_02136b24, u32 *, 0x340) + 1);
    }
}
