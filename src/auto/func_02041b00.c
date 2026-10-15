#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_02041a4c();                            /* extern */
M2C_UNK func_02041b2c(void *);                      /* extern */

void func_02041b00(void *arg0) {
    func_02041a4c();
    func_02002800(M2C_FIELD(arg0, s32 *, 4), 1);
    func_02041b2c(arg0);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
}
