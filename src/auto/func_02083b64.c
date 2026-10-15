#include "m2c.h"

s32 func_0206b34c();                                /* extern */
M2C_UNK func_02083ca4(void *);                      /* extern */

void func_02083b64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = func_0206b34c();
    func_02083ca4(arg0);
}
