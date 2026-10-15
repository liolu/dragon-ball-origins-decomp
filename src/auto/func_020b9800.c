#include "m2c.h"

s32 func_020b91cc();                                /* extern */
s32 func_020b9894(M2C_UNK);                         /* extern */
s32 func_020b9978(M2C_UNK);                         /* extern */
M2C_UNK func_020b9a20(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9a34(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9bc8(s32);                         /* extern */
M2C_UNK func_020b9bd0(s32);                         /* extern */
extern M2C_UNK data_0216d11c;

void func_020b9800(void) {
    func_020b9a20(2, func_020b9894(2));
    func_020b9a34(2, func_020b9978(2));
    if ((M2C_FIELD(&data_0216d11c, s32 *, 4) != 0) && ((func_020b91cc() & 3) != 1)) {
        return;
    }
    func_020b9bc8(0x0200002B);
    func_020b9bd0(0x023E0021);
}
