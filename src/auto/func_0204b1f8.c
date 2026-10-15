#include "m2c.h"

M2C_UNK func_0204b3d8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204b68c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204b710(void *);                      /* extern */

void func_0204b1f8(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s32 *, 0x2D0) = (s32) (arg1 & 4);
    M2C_FIELD(arg0, s32 *, 0x2DC) = (s32) (arg1 & 3);
    M2C_FIELD(arg0, s32 *, 0x2E0) = 0;
    func_0204b3d8(arg0, arg3);
    func_0204b68c(arg0, arg2);
    func_0204b710(arg0);
    M2C_FIELD(arg0, s32 *, 0x2EC) = 1;
}
