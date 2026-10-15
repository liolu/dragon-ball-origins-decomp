#include "m2c.h"

extern void *data_02170e9c;

void func_020c6630(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, void **, 0) = (void *) data_02170e9c;
    M2C_FIELD(arg2, s32 *, 4)   = arg1;
    M2C_FIELD(arg2, s32 *, 8)   = arg0;
    data_02170e9c               = arg2;
}
