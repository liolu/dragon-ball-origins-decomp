#include "m2c.h"

void *func_020c4f9c(void *, M2C_UNK *);             /* extern */

void func_020c691c(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_020c4f9c(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_020c4f9c(temp_r0, &sp0);
}
