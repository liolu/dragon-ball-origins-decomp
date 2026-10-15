#include "m2c.h"

M2C_UNK func_0209dc28(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK data_02160404;

void func_0209b680(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)    = 0x100;
    M2C_FIELD(arg0, s32 *, 8)    = 0xC0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    func_0209dc28(&data_02160404, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
