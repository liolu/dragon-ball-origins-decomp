#include "m2c.h"

M2C_UNK func_020297f0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02051ec0();                            /* extern */
M2C_UNK func_020a0f68(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_02029624(void *arg0) {
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    func_020a0f68(&data_020e7ddc, 0x7C00, 0x1F);
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 6) {
        func_02051ec0();
    }
    func_020297f0(arg0, 2, 0);
}
