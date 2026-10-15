#include "m2c.h"

s32 func_0202c83c(s32);                             /* extern */
s32 func_02047c7c(s32);                             /* extern */
M2C_UNK func_02048a38(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020b4f7c(s32, void *, M2C_UNK *);      /* extern */

s32 func_020489c0(void *arg0) {
    u8 sp0[12];

    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) <= 1U) || (func_02047c7c(M2C_FIELD(arg0, s32 *, 0)) != 0)) {
        func_02048a38(M2C_FIELD(arg0, s32 *, 4), arg0 + 8);
        return 1;
    }
    func_020b4f7c(func_0202c83c(M2C_FIELD(arg0, s32 *, 4)), arg0 + 0x14, sp0);
    func_02048a38(M2C_FIELD(arg0, s32 *, 4), sp0);
    M2C_FIELD(arg0, u32 *, 0x20) = (u32) (M2C_FIELD(arg0, u32 *, 0x20) - 1);
    return 0;
}
