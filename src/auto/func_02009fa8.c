#include "m2c.h"

M2C_UNK func_02001724(M2C_UNK);                     /* extern */
M2C_UNK func_02001f94(M2C_UNK);                     /* extern */
s32 func_02001fc4();                                /* extern */
M2C_UNK func_02001ff0(M2C_UNK);                     /* extern */
s32 func_0204fb80(s32);                             /* extern */
M2C_UNK func_02087728(M2C_UNK *, s32, s32, M2C_UNK, s32); /* extern */
extern s32 data_020e7dd4;
extern s32 data_020e7dd8;
extern M2C_UNK data_0215a16c;

void func_02009fa8(void *arg0, s32 arg1) {
    s32 var_r6;

    if (arg1 == 0xE) {
        func_02001724(1);
        func_02001f94(0);
    }
    if (!(data_020e7dd8 & 1)) {
        data_020e7dd4 = 0;
        data_020e7dd8 |= 1;
    }
    if (arg1 != 0xE) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    func_02087728(&data_0215a16c, arg1, func_0204fb80(data_020e7dd4), 0, var_r6);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (arg1 != 0xE) {
        return;
    }
    do {

    } while (func_02001fc4() == 0);
    func_02001ff0(0);
}
