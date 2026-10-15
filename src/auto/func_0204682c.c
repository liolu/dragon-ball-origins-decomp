#include "m2c.h"

s32 func_0204682c(void *arg0) {
    void *temp_r2;

    temp_r2                        = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(arg0, void **, 0x24) = (void *) (temp_r2 + M2C_FIELD(temp_r2, s32 *, 4));
    return 1;
}
