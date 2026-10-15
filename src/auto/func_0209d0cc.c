#include "m2c.h"

M2C_UNK func_0209dc28(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_0209dd50(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_02160404;

void func_0209d0cc(void *arg0) {
    func_0209dc28(&data_02160404, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0209dd50(&data_02160404, M2C_FIELD(arg0, s32 *, 0x20), 2);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
