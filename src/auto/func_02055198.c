#include "m2c.h"

s32 func_0204cee0(s32);                             /* extern */
M2C_UNK func_02054b74(void *);                      /* extern */

void func_02055198(void *arg0) {
    if (func_0204cee0(M2C_FIELD(arg0, s32 *, 0x14)) == 1) {
        return;
    }
    func_02054b74(arg0);
}
