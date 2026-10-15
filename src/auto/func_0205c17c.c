#include "m2c.h"

M2C_UNK func_02056b8c();                            /* extern */
extern s32 data_0213dff0;

void func_0205c17c(void *arg0) {
    func_02056b8c();
    M2C_FIELD(arg0, s32 *, 0x1C4) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x24)  = (s32) data_0213dff0;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
}
