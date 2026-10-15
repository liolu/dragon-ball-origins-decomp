#include "m2c.h"

M2C_UNK func_02056b8c();                            /* extern */
s32 func_0205b1fc();                     /* extern */
extern s32 data_0213dff0;

void func_0205aef0(void *arg0) {
    func_02056b8c();
    M2C_FIELD(arg0, s32 *, 0x24)  = (s32) data_0213dff0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = func_0205b1fc(arg0);
    M2C_FIELD(arg0, s32 *, 0x1CC) = func_0205b1fc(arg0, M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
}
