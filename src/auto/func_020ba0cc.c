#include "m2c.h"

M2C_UNK func_020bbd8c();                            /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020bbee4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0216d228;
extern M2C_UNK func_020ba120;

void func_020ba0cc(void) {
    if (M2C_FIELD(&data_0216d228, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_0216d228, u16 *, 2) = 1U;
    func_020bbd8c();
    do {

    } while (func_020bbee4(0xC, 1) == 0);
    func_020bbe98(0xC, &func_020ba120);
}
