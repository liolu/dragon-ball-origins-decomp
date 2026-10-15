#include "m2c.h"

s32 func_0204ce50(s32);                             /* extern */
M2C_UNK func_02052fc0();                            /* extern */

void func_02053f20(void *arg0) {
    func_02052fc0();
    M2C_FIELD(arg0, s32 *, 0x17C) = func_0204ce50(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
}
