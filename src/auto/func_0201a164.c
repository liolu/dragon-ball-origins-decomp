#include "m2c.h"

M2C_UNK func_020171ac();                            /* extern */
extern M2C_UNK data_020d88a4;

void *func_0201a164(void *arg0) {
    func_020171ac();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d88a4;
    M2C_FIELD(arg0, s32 *, 0x84C)  = 1;
    M2C_FIELD(arg0, s32 *, 0x850)  = 0;
    M2C_FIELD(arg0, s32 *, 0x848)  = 0;
    M2C_FIELD(arg0, s32 *, 0x920)  = 0x2080;
    M2C_FIELD(arg0, s32 *, 0x928)  = 0x2080;
    M2C_FIELD(arg0, s32 *, 0x92C)  = -1;
    return arg0;
}
