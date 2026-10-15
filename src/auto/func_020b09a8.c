#include "m2c.h"

extern s32 data_0216bf30;

s32 func_020b09a8(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0216bf30;
    data_0216bf30 = arg0;
    return temp_r2;
}
