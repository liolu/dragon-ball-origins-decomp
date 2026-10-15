#include "m2c.h"

extern M2C_UNK data_0212a6cc;
extern M2C_UNK data_0212ad28;

s32 func_0204cee0(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_0212a6cc + (((u8 *) &data_0212ad28)[arg0] * 0x98))) != 0) {
        return 1;
    }
    return 0;
}
