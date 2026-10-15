#include "m2c.h"

M2C_UNK func_020b8c30(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020b8ef4(M2C_UNK *);                   /* extern */
M2C_UNK func_020b91e4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0216b934;
extern M2C_UNK data_0216b93c;
extern M2C_UNK data_0216b95c;
extern M2C_UNK data_0216ba70;
extern M2C_UNK data_0216bf30;
extern M2C_UNK func_020b06d0;

void func_020aff78(s32 arg0) {
    if (M2C_FIELD(&data_0216b934, s32 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0216b934, s32 *, 4) = 0;
    func_020b91e4(&data_0216b93c, &data_0216b95c, 8);
    func_020b8c30(&data_0216ba70, &func_020b06d0, 0, &data_0216bf30, 0x400, arg0);
    M2C_FIELD(&data_0216b934, s32 *, 0) = 1;
    func_020b8ef4(&data_0216ba70);
}
