#include "m2c.h"

M2C_UNK func_020a04a8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_020a0430(M2C_UNK arg0) {
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    func_020a04a8(&data_020e7ddc, arg0, 4);
}
