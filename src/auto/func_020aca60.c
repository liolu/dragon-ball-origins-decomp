#include "m2c.h"

s32 func_020c1d64(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020ad570;

s32 func_020aca60(void) {
    if (func_020c1d64(&func_020ad570) == 2) {
        return 1;
    }
    return 0;
}
