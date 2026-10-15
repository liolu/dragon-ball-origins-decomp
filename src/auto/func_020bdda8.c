#include "m2c.h"

M2C_UNK func_020bbd8c();                            /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020bbee4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0216eeb0;
extern M2C_UNK func_020bdb28;

void func_020bdda8(void) {
    if (M2C_FIELD(&data_0216eeb0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0216eeb0, u16 *, 0) = 1U;
    func_020bbd8c();
    M2C_FIELD(&data_0216eeb0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_0216eeb0, s32 *, 4)    = 0;
    M2C_FIELD(&data_0216eeb0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0216eeb0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0216eeb0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_0216eeb0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_0216eeb0, s16 *, 0x38) = 0;
    do {

    } while (func_020bbee4(6, 1) == 0);
    func_020bbe98(6, &func_020bdb28);
}
