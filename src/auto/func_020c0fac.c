#include "m2c.h"

s32 func_020b92a0(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_020b9344(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_020b9604(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_0216f8a8;

u16 *func_020c0fac(void) {
    u16 *sp0;

    if (func_020b92a0(&data_0216f8a8, &sp0, 0) == 0) {
        return NULL;
    }
    func_020b9604(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_020b9344(&data_0216f8a8, sp0, 1);
    return NULL;
}
