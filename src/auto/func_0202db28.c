#include "m2c.h"

void *func_020a0430(M2C_UNK);                       /* extern */
s32 func_020a04a8(M2C_UNK *, s32, M2C_UNK);         /* extern */
M2C_UNK func_020a06ec(M2C_UNK *, void *, s32);      /* extern */
extern M2C_UNK data_020d84d4;
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_0202db28(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7) {
    s32 var_r2;
    void *temp_r0;

    temp_r0 = func_020a0430(0x5C);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_020d84d4;
        M2C_FIELD(temp_r0, s32 *, 0x44)   = 0;
    }
    M2C_FIELD(temp_r0, s32 *, 4)      = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 8)      = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0xC)    = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x10)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(temp_r0, s32 *, 0x14)   = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(temp_r0, s32 *, 0x18)   = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_r0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(temp_r0, s32 *, 0x20)   = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_r0, s32 *, 0x24)   = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(temp_r0, s32 *, 0x28)   = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(temp_r0, s32 *, 0x2C)   = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_r0, s32 *, 0x30)   = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(temp_r0, s32 *, 0x3C)   = arg1;
    M2C_FIELD(temp_r0, void **, 0x40) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x50)   = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x54)   = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x4C)   = arg5;
    M2C_FIELD(temp_r0, u8 *, 0x58)    = arg6;
    M2C_FIELD(temp_r0, u8 *, 0x59)    = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x38)   = 0;
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    M2C_FIELD(temp_r0, s32 *, 0x44) =
        func_020a04a8(&data_020e7ddc, M2C_FIELD(M2C_FIELD(arg2, void **, 0x74), s16 *, 0x22) * 0x30, 4);
    if (arg6 != 0) {
        var_r2 = 0xF0000000;
    } else {
        if (!(data_020e7dcc & 1)) {
            data_020e7dcc |= 1;
        }
        var_r2 = M2C_FIELD(&data_020e7ddc, s32 *, 0x138);
    }
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    func_020a06ec(&data_020e7ddc, temp_r0, var_r2);
}
