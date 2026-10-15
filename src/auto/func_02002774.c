#include "m2c.h"

M2C_UNK func_02099bb4();                            /* extern */
extern M2C_UNK data_020ed9e0;

void func_02002774(void) {
    if (M2C_FIELD(&data_020ed9e0, s32 *, 0) != 0) {
        func_02099bb4();
        M2C_FIELD(&data_020ed9e0, s32 *, 0) = 0;
    }
    M2C_FIELD(&data_020ed9e0, s32 *, 4) = 0;
}
