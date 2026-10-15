#include "m2c.h"

extern M2C_UNK data_0212ae52;

u16 func_0204de04(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0212ae52 + ((arg0 - 0xE0) * 0x10)));
}
