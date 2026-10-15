#include "m2c.h"

s32 func_020ac658(M2C_UNK);                         /* extern */
M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1b54(M2C_UNK *);                       /* extern */
M2C_UNK func_020c26b4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02166680;
extern M2C_UNK func_020ad4c8;

void func_020ad138(void) {
    if (func_020ac658(5) != 0) {
        func_020c26b4(&data_02166680);
    }
    func_020ac694(3);
    if (func_020c1b54(&func_020ad4c8) == 2) {
        return;
    }
    func_020ac6a4();
    func_020ac694(0xA);
}
