#include "m2c.h"

M2C_UNK func_02056b8c();                            /* extern */
extern s32 data_0213dff0;

void func_0205b360(void *arg0) {
    s32 var_r0;

    func_02056b8c();
    M2C_FIELD(arg0, s32 *, 0x24)  = (s32) data_0213dff0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 3;
    var_r0                        = M2C_FIELD(arg0, s32 *, 0x1C4);
    if (var_r0 == 3) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1C8);
    }
    M2C_FIELD(arg0, s32 *, 0x1C8) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 3;
    M2C_FIELD(arg0, s32 *, 0x174) = 5;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 5;
}
