#include "m2c.h"

M2C_UNK func_020ba0a4(M2C_UNK);                     /* extern */
s32 func_020bb754();                                /* extern */
M2C_UNK func_020bbe98(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020bbee4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_020bb660;

void func_020bb684(void) {
    func_020bbe98(7, &func_020bb660);
    if (func_020bb754() == 0) {
        return;
    }
    if (func_020bbee4(7, 1) != 0) {
        return;
    }
    do {
        func_020ba0a4(0x64);
    } while (func_020bbee4(7, 1) == 0);
}
