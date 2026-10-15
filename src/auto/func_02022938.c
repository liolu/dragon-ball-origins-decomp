#include "m2c.h"

M2C_UNK func_02022b94(M2C_UNK);                     /* extern */
M2C_UNK func_0204b0f4(M2C_UNK *);                   /* extern */
s32 func_0204b374(M2C_UNK *);                       /* extern */
extern M2C_UNK data_021267b0;

void func_02022938(M2C_UNK arg0) {
    if (func_0204b374(&data_021267b0) != 0) {
        func_02022b94(arg0);
        return;
    }
    func_0204b0f4(&data_021267b0);
}
