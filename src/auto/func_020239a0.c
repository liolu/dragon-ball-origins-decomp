#include "m2c.h"

M2C_UNK func_0204b0f4(M2C_UNK *);                   /* extern */
s32 func_0204b374(M2C_UNK *);                       /* extern */
extern M2C_UNK data_021267b0;

void func_020239a0(void *arg0) {
    func_0204b0f4(&data_021267b0);
    if (func_0204b374(&data_021267b0) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8)   = 5;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
