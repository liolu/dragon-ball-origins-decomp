#include "m2c.h"

M2C_UNK func_020c4164(M2C_UNK);                     /* extern */
M2C_UNK func_020c63ac();                            /* extern */
extern M2C_UNK data_02170950;

void func_020c4118(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02170950, s32 *, 0xC) == 0) {
        func_020c63ac();
        if (M2C_FIELD(&data_02170950, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02170950, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02170950, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_020c4164(arg0);
}
