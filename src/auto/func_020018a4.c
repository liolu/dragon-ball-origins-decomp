#include "m2c.h"

M2C_UNK func_020016f4(M2C_UNK *);                   /* extern */
M2C_UNK func_020019d8(M2C_UNK);                     /* extern */
M2C_UNK func_02099ea4(M2C_UNK *);                   /* extern */
extern s32 data_020ed8f8;
extern M2C_UNK data_020ed908;
extern M2C_UNK data_0215fcc8;

void func_020018a4(void) {
    if (data_020ed8f8 == 0) {
        return;
    }
    func_020019d8(0);
    func_02099ea4(&data_0215fcc8);
    func_020016f4(&data_020ed908);
    data_020ed8f8 = 0;
}
