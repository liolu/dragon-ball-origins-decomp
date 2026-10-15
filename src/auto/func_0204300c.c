#include "m2c.h"

M2C_UNK func_020016f4(void *);                      /* extern */
M2C_UNK func_02043140();                            /* extern */
M2C_UNK func_02043278(void *);                      /* extern */

void func_0204300c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 1:
            func_02043140(arg0);
            return;
        case 2:
            func_020016f4(arg0 + 0xA8);
            M2C_FIELD(arg0, s32 *, 4) = 3;
        /* fallthrough */
        case 3:
            func_02043278(arg0);
            return;
    }
}
