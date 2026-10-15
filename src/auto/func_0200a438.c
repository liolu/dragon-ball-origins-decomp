#include "m2c.h"

M2C_UNK func_0202bdac(void *);                      /* extern */
M2C_UNK func_020a1e08(void *);                      /* extern */

void func_0200a438(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x274) = 0;
    M2C_FIELD(arg0, s32 *, 0x278) = 0;
    M2C_FIELD(arg0, s32 *, 0x27C) = 0;
    M2C_FIELD(arg0, s32 *, 0x280) = 0;
    func_020a1e08(arg0 + 0xB4);
    func_0202bdac(arg0);
}
