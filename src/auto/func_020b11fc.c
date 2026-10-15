#include "m2c.h"

s32 func_020b1214();                                /* extern */

s32 func_020b11fc(void) {
    if (func_020b1214() == 0) {
        return 1;
    }
    return 0;
}
