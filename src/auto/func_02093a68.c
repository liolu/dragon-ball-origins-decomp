#include "m2c.h"

M2C_UNK *func_0204dca0(s32);                        /* extern */
extern M2C_UNK data_020e6e3c;

M2C_UNK *func_02093a68(s32 arg0, s32 arg1) {
    if (arg1 == -1) {
        return &data_020e6e3c;
    }
    return func_0204dca0(arg1 + 0x10);
}
