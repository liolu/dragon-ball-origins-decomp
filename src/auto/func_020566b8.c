#include "m2c.h"

s32 func_0204cf34(s32);                             /* extern */
M2C_UNK func_02053cbc();                            /* extern */
extern s32 data_0213dff0;

void func_020566b8(void *arg0, void *arg1) {
    func_02053cbc();
    M2C_FIELD(arg0, s32 *, 0x24)  = (s32) data_0213dff0;
    M2C_FIELD(arg0, s32 *, 0x1B4) = func_0204cf34(M2C_FIELD(arg1, s32 *, 0xB0));
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
}
