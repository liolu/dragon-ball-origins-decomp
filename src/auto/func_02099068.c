#include "m2c.h"

M2C_UNK func_0209762c(M2C_UNK *);                   /* extern */
s32 func_02097bb0(void *);                          /* extern */
s32 func_02097bd4(void *, s32, s32);                /* extern */
extern M2C_UNK data_0215dbb8;
extern M2C_UNK data_0215f2fc;

s32 func_02099068(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xB8) == 0) {
        return 0;
    }
    if (func_02097bb0(arg0 + 0x28) != 0) {
        func_0209762c(&data_0215dbb8);
    }
    if (M2C_FIELD(&data_0215f2fc, s32 *, 0x30) != 0) {
        if (func_02097bd4(arg0 + 0x28, M2C_FIELD(&data_0215f2fc, s32 *, 0x20), M2C_FIELD(&data_0215f2fc, s32 *, 0x24)) != 0) {
            var_r0 = 1;
        } else {
            var_r0                       = 0;
            M2C_FIELD(arg0, s32 *, 0xB8) = 0;
        }
        return var_r0;
    }
    return 1;
}
