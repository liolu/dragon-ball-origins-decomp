#include "m2c.h"

extern M2C_UNK data_0212ae50;

u16 func_0204ddec(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0212ae50 + ((arg0 - 0xE0) * 0x10)));
}
