#include "m2c.h"

M2C_UNK func_020716a4();                            /* extern */
M2C_UNK func_020826a0(void *);                      /* extern */

void func_02082674(void *arg0) {
    func_020716a4();
    M2C_FIELD(arg0, s32 *, 0x40C) = -1;
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    func_020826a0(arg0);
}
