#include "m2c.h"

M2C_UNK func_020b87e4(); /* extern */
s32 func_020c367c();              /* extern */
extern M2C_UNK data_020e6a8c;
extern M2C_UNK data_020e6acc;
extern M2C_UNK data_020e6ad4;

void func_02087338(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020c367c(arg2, &data_020e6a8c) != 0) {
        func_020b87e4(arg1, &data_020e6acc, arg2);
        return;
    }
    func_020b87e4(arg1, &data_020e6ad4, arg2, arg2);
}
