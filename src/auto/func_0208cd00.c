#include "m2c.h"

s32 func_0208cd00(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x3BA) == 0xFFFF) {
        return 1;
    }
    return 0;
}
