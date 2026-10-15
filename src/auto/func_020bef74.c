#include "m2c.h"

M2C_UNK func_020bbd8c();                            /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020bbee4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0216ef58;
extern M2C_UNK func_020bf08c;

void func_020bef74(void) {
    if (M2C_FIELD(&data_0216ef58, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0216ef58, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0216ef58, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0216ef58, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0216ef58, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0216ef58, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0216ef58, s32 *, 0x18) = 0;
    func_020bbd8c();
    do {

    } while (func_020bbee4(5, 1) == 0);
    func_020bbe98(5, &func_020bf08c);
}
