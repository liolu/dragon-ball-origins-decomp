#include "m2c.h"

M2C_UNK func_0203e66c();                            /* extern */
M2C_UNK func_0203eaf8();                            /* extern */

void func_0203e5b4(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_0203e66c(arg0);
            return;
        case 1:
            func_0203eaf8(arg0);
            return;
    }
}
