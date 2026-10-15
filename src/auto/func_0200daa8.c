#include "m2c.h"

s32 func_02099b28(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0215f2fc;

void *func_0200daa8(s32 arg0, void *arg1) {
    if (func_02099b28(&data_0215f2fc) != 0) {
        return arg1 + 8;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
