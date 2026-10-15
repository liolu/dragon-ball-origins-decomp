#include "m2c.h"

M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02009358(void *);                      /* extern */

void func_02009394(void *arg0) {
    func_02001c08(0, 0xE, 0);
    func_02009358(arg0);
    M2C_FIELD(arg0, s32 *, 4)    = 2;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
