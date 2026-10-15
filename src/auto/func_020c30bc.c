#include "m2c.h"

M2C_UNK func_020bbd8c();                            /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020bbee4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c2da4();                            /* extern */
M2C_UNK func_020c3074(M2C_UNK);                     /* extern */
M2C_UNK func_020c3170();                            /* extern */
M2C_UNK func_020c3414(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02170360;
extern M2C_UNK data_02170440;
extern M2C_UNK func_020c3364;
extern M2C_UNK func_020c3390;
extern M2C_UNK func_020c3400;

void func_020c30bc(void) {
    if (M2C_FIELD(&data_02170360, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02170360, s32 *, 8) = 1;
    func_020c2da4();
    M2C_FIELD(&data_02170360, s32 *, 0xC) = 0;
    func_020bbd8c();
    do {

    } while (func_020bbee4(0xD, 1) == 0);
    func_020bbe98(0xD, &func_020c3364);
    func_020c3170();
    func_020bbe98(0xD, NULL);
    func_020bbe98(0xD, &func_020c3390);
    M2C_FIELD(&data_02170360, s32 *, 0x18) = 0;
    func_020c3414(&data_02170440);
    func_020bbe98(0x11, &func_020c3400);
    func_020c3074(0);
}
