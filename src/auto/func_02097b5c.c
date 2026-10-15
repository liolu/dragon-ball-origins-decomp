#include "m2c.h"

M2C_UNK func_02097300(M2C_UNK *, void *, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0215dbb8;

void func_02097b5c(void *arg0) {
    func_02097300(&data_0215dbb8, arg0 + 0x60, 2, M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x30) + 0x23, 0x40,
                  0x10, 0, 2);
}
