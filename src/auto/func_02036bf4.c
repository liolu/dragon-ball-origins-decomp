#include "m2c.h"

M2C_UNK func_02002c10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02036c4c();                            /* extern */
s32 func_02036ed4(void *);                          /* extern */
M2C_UNK func_0209b87c(void *, s32, s32);            /* extern */
s32 func_0209bb9c(s32);                             /* extern */
extern M2C_UNK data_02136be0;

void func_02036bf4(void *arg0) {
    func_02036c4c(arg0);
    func_02002c10(arg0 + 4, 0x1F, 0);
    M2C_FIELD(arg0, s32 *, 0x44) = func_0209bb9c(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_02036ed4(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    func_0209b87c(arg0 + 4, M2C_FIELD(&data_02136be0, s32 *, 0x274), M2C_FIELD(&data_02136be0, s32 *, 0x278));
}
