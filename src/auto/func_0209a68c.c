#include "m2c.h"

u32 func_0209a6ac();                                /* extern */

u32 func_0209a68c(void *arg0) {
    return func_0209a6ac() >> (((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 6) + 5);
}
