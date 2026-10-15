#include "m2c.h"

extern s32 data_0216af80;

s32 func_020aee7c(s32 arg0) {
    if (arg0 & data_0216af80) {
        return 0;
    }
    data_0216af80 |= arg0;
    return 1;
}
