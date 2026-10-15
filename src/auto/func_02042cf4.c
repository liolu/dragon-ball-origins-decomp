#include "m2c.h"

M2C_UNK func_02026888(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209d49c(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020f6268;

void func_02042cf4(void *arg0) {
    func_0209d49c(1, 2, M2C_FIELD(arg0, s32 *, 0x5AC), 0, M2C_FIELD(arg0, s32 *, 0x5B0));
    func_02026888(&data_020f6268, 1, 0, 3);
    M2C_FIELD(arg0, s32 *, 0x5A0) = 5;
}
