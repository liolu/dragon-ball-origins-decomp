#include "m2c.h"

s32 func_0203ce78();                                /* extern */
M2C_UNK func_0203cf2c();                            /* extern */
M2C_UNK func_0203d69c(void *);                      /* extern */
M2C_UNK func_0203dc84(void *);                      /* extern */
M2C_UNK func_0203e440(void *);                      /* extern */

void func_0203cc08(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x118) == 1) {
        func_0203cf2c(arg0);
        return;
    }
    if (func_0203ce78() != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x11C);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0203d69c(arg0);
            return;
        case 1:
            func_0203dc84(arg0);
            return;
        case 2:
            func_0203e440(arg0);
            return;
    }
}
