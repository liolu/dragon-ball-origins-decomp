#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204e7b8(s32);                         /* extern */
M2C_UNK func_0204e80c(s32);                         /* extern */
M2C_UNK func_0208d7d8();                            /* extern */
M2C_UNK func_020937c8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02095e5c(M2C_UNK *, s32);                  /* extern */
extern s32 data_0215b09c;
extern M2C_UNK data_0215b8f8;
extern M2C_UNK data_0215db08;

void func_0208b248(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02095e5c(&data_0215db08, M2C_FIELD(arg0, s32 *, 0x3C8));
    temp_r4 = func_02095e5c(&data_0215db08, M2C_FIELD(arg0, s32 *, 0x3CC));
    func_0204e80c(temp_r5);
    func_0204e7b8(temp_r4);
    data_0215b09c = 0;
    func_0208d7d8();
    func_02001c08(0, 0xA, 0);
    M2C_FIELD(&data_0215b8f8, s32 *, 0x30) = 1;
    func_020937c8(&data_0215b8f8, -1, 0, 5);
    M2C_FIELD(arg0, s32 *, 0x3DC) = 5;
}
