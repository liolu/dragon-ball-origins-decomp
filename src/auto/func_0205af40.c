#include "m2c.h"

M2C_UNK func_02056ba4();                      /* extern */
s32 func_0205b1fc();                     /* extern */
s32 func_0205b2d4();                     /* extern */
extern s32 data_0213dff0;

void func_0205af40(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24)  = (s32) data_0213dff0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = func_0205b1fc(arg0);
    M2C_FIELD(arg0, s32 *, 0x1CC) = func_0205b1fc(arg0, M2C_FIELD(arg0, s32 *, 0x20));
    if (func_0205b2d4(arg0, M2C_FIELD(arg0, s32 *, 0x20)) != -1) {
        M2C_FIELD(arg0, s32 *, 0x1C4) = (s32) M2C_FIELD(arg0, s32 *, 0x1C8);
        M2C_FIELD(arg0, s32 *, 0x1B0) = 1;
    } else if (M2C_FIELD(arg0, s32 *, 0x1D0) == M2C_FIELD(arg0, s32 *, 0x1CC)) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 1;
    }
    func_02056ba4(arg0);
}
