#include "m2c.h"

s32 func_02036ed4();                                /* extern */

void func_02036c60(void *arg0, s32 arg1) {
    if (func_02036ed4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    }
}
