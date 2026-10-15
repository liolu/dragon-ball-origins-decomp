#include "m2c.h"

M2C_UNK func_02002c10(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0203cfbc(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x11C);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_02002c10(arg0 + 0x10, 0x28, 0);
            func_02002c10(arg0 + 0x38, 0x29, 0);
            func_02002c10(arg0 + 0x60, 0x2B, 0);
            return;
        case 1:
            func_02002c10(arg0 + 0x10, 0x27, 0);
            func_02002c10(arg0 + 0x38, 0x2A, 0);
            func_02002c10(arg0 + 0x60, 0x2B, 0);
            return;
        case 2:
            func_02002c10(arg0 + 0x10, 0x27, 0);
            func_02002c10(arg0 + 0x38, 0x29, 0);
            func_02002c10(arg0 + 0x60, 0x2C, 0);
            return;
    }
}
