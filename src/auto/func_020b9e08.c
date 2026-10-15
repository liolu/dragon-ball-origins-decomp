#include "m2c.h"

M2C_UNK func_020b822c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020b8370(M2C_UNK);                     /* extern */
M2C_UNK func_020b9dec(M2C_UNK);                     /* extern */
extern M2C_UNK data_0216d1f8;
extern M2C_UNK func_020b9e90;

void func_020b9e08(void) {
    if (M2C_FIELD(&data_0216d1f8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0216d1f8, u16 *, 0) = 1U;
    func_020b9dec(0);
    M2C_FIELD(&data_0216d1f8, s32 *, 8)       = 0;
    M2C_FIELD(&data_0216d1f8, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_020b822c(8, &func_020b9e90);
    func_020b8370(8);
    M2C_FIELD(&data_0216d1f8, s32 *, 4) = 0;
}
