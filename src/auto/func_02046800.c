#include "m2c.h"

s32 func_0204682c();                                /* extern */

s32 func_02046800(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4) == 0) {
        M2C_FIELD(arg0, void **, 0x24) = NULL;
        return 0;
    }
    return func_0204682c();
}
