#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204b0f4(M2C_UNK *);                   /* extern */
s32 func_0204b374(M2C_UNK *);                       /* extern */
extern M2C_UNK data_021267b0;

void func_020439ec(s32 *arg0) {
    func_0204b0f4(&data_021267b0);
    if (func_0204b374(&data_021267b0) == 0) {
        return;
    }
    func_02001c08(0, 0, 0);
    *arg0 = 4;
}
