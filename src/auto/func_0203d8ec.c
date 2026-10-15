#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203ec00(void *);                      /* extern */

void func_0203d8ec(void *arg0) {
    func_02002800(M2C_FIELD(arg0, s32 *, 0xC), 0);
    func_0203ec00(arg0 + 0x508);
    M2C_FIELD(arg0, s32 *, 0x118) = 2;
}
