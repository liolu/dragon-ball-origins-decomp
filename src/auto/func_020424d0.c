#include "m2c.h"

M2C_UNK func_02042528();                            /* extern */
M2C_UNK func_020425a0(void *);                      /* extern */
M2C_UNK func_020ba734(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_020424d0(void *arg0, s32 arg1) {
    func_02042528();
    M2C_FIELD(arg0, s32 *, 0x5A0) = 1;
    M2C_FIELD(arg0, s32 *, 0x5A4) = 0;
    func_020ba734(0, arg0 + 0x5C4, 0x18);
    if ((arg1 != 0) && (M2C_FIELD(arg0, s32 *, 0x5A0) != 5)) {
        do {
            func_020425a0(arg0);
        } while (M2C_FIELD(arg0, s32 *, 0x5A0) != 5);
    }
}
