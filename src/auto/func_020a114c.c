#include "m2c.h"

s32 func_020a114c(s32 *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = *arg0;
    *arg0   = temp_r2 + arg1;
    return temp_r2;
}
