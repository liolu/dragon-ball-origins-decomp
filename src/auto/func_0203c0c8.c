#include "m2c.h"

s32 func_020027e0(M2C_UNK);                         /* extern */
M2C_UNK func_0203c108();                            /* extern */
M2C_UNK func_0203c2f8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203c40c(void *);                      /* extern */
M2C_UNK func_0203c928(void *);                      /* extern */

void func_0203c0c8(void *arg0) {
    func_0203c108();
    M2C_FIELD(arg0, s32 *, 0x674) = 0;
    func_0203c928(arg0);
    M2C_FIELD(arg0, s32 *, 4) = func_020027e0(0);
    func_0203c40c(arg0);
    func_0203c2f8(arg0, 0);
}
