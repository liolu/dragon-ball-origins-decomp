#include "m2c.h"

s32 func_0204e9c4(s32, s32);                        /* extern */
s32 func_0204e9fc(s32, s32);                        /* extern */
s32 func_0204ebd8();                                /* extern */

void func_020231ac(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x314) =
        func_0204e9fc(M2C_FIELD(arg0, s32 *, 0x1C), func_0204e9c4(M2C_FIELD(arg0, s32 *, 0x1C), func_0204ebd8()));
}
