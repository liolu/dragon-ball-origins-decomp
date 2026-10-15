#include "m2c.h"

s32 func_0202abe4(M2C_UNK, M2C_UNK, void *, s32);   /* extern */
s32 func_0202bb44(void *, M2C_UNK *);               /* extern */

s32 func_0202bf20(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[24];
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x148) == 0) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x24) & 8)) {
        return 0;
    }
    return func_0202abe4(arg1, arg2, arg0 + 0x64, func_0202bb44(temp_r0, sp0));
}
