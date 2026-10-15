#include "m2c.h"

M2C_UNK func_020bd6e0(void *);                      /* extern */

void func_020a1eec(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1BC) != 0) {
        func_020bd6e0(arg0 + 0x10);
    }
    M2C_FIELD(arg0, u8 *, 0x1BC) = 0U;
}
