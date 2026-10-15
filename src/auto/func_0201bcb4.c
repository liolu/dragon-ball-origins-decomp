#include "m2c.h"

void *func_0204cc08(s32, s32);                      /* extern */

s32 func_0201bcb4(void *arg0) {
    if (M2C_FIELD(func_0204cc08(M2C_FIELD(arg0, s32 *, 0xAC), M2C_FIELD(arg0, s32 *, 0x5C4)), s32 *, 0x20) & 0x4000) {
        return 1;
    }
    return 0;
}
