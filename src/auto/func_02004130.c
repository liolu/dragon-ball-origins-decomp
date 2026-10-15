#include "m2c.h"

M2C_UNK func_02001724(M2C_UNK);                     /* extern */
M2C_UNK func_02001f94(M2C_UNK);                     /* extern */
s32 func_02001fc4();                                /* extern */
M2C_UNK func_02001ff0(M2C_UNK);                     /* extern */
s32 func_0204fb80(M2C_UNK);                         /* extern */
M2C_UNK func_02087728(M2C_UNK *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0215a16c;

void func_02004130(void) {
    func_02001724(1);
    func_02001f94(0);
    func_02087728(&data_0215a16c, 0, func_0204fb80(0), 2, 1);
    do {

    } while (func_02001fc4() == 0);
    func_02001ff0(0);
}
