#include "m2c.h"

M2C_UNK func_020bbd8c();                            /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0216f880;
extern M2C_UNK func_020c0b74;

void func_020c0b48(void) {
    func_020bbd8c();
    func_020bbe98(0xE, &func_020c0b74);
    M2C_FIELD(&data_0216f880, s32 *, 4) = 0;
}
