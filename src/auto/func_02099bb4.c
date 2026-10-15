#include "m2c.h"

M2C_UNK func_020bd6a4(void *);                      /* extern */
M2C_UNK func_020bd6e0(void *);                      /* extern */
M2C_UNK func_020bd7a0(void *);                      /* extern */

void func_02099bb4(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_020bd7a0(arg0);
        func_020bd6e0(arg0);
    }
    func_020bd6a4(arg0);
}
