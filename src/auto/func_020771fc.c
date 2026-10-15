#include "m2c.h"

M2C_UNK func_020752cc(void *, M2C_UNK);             /* extern */

void func_020771fc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x8EC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x8CC), s32 *, 0x3C);
    func_020752cc(arg0, 5);
}
