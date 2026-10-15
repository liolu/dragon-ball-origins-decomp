#include "m2c.h"

M2C_UNK func_020016f4(s32);                         /* extern */
M2C_UNK func_02001ef4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200a438(void *);                      /* extern */
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_0200ac68(void *arg0) {
    s32 temp_r0;
    s32 var_r2;

    func_020016f4(arg0 + 0x470);
    var_r2                        = 0;
    M2C_FIELD(arg0, s32 *, 0x468) = 0;
    M2C_FIELD(arg0, s32 *, 0x480) = -1;
    M2C_FIELD(arg0, s32 *, 0x488) = 0;
    M2C_FIELD(arg0, s32 *, 0x47C) = 0x1F9;
    M2C_FIELD(arg0, s32 *, 0x4A4) = -1;
    M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4A0) = 0x1F9;
    temp_r0                       = M2C_FIELD(arg0, s32 *, 0x664);
    if (temp_r0 != 0) {
        var_r2 = 1;
    }
    if (var_r2 != 0) {
        func_02001ef4(temp_r0, 0);
        M2C_FIELD(arg0, s32 *, 0x664) = 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x75C) != 0) && (M2C_FIELD(arg0, s32 *, 0x758) != 0)) {
        if (!(data_020e7dcc & 1)) {
            data_020e7dcc |= 1;
        }
        M2C_FIELD(*M2C_FIELD(&data_020e7ddc, void ***, 0x10), M2C_UNK(**)(void **, s32),
                  4)(M2C_FIELD(&data_020e7ddc, void ***, 0x10), M2C_FIELD(arg0, s32 *, 0x758));
        M2C_FIELD(arg0, s32 *, 0x758) = 0;
    }
    func_0200a438(arg0);
}
