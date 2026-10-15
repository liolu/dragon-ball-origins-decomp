#include "m2c.h"

M2C_UNK func_020716a4();                            /* extern */
M2C_UNK func_0208375c(void *);                      /* extern */

void func_0208372c(void *arg0) {
    func_020716a4();
    M2C_FIELD(arg0, s32 *, 0x40C) = -1;
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
    M2C_FIELD(arg0, s32 *, 0x41C) = -1;
    M2C_FIELD(arg0, s32 *, 0x420) = 0;
    func_0208375c(arg0);
}
