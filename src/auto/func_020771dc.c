#include "m2c.h"

M2C_UNK func_020752cc(void *, M2C_UNK);             /* extern */
extern s32 data_027e0000;

void func_020771dc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x8EC) = (s32) data_027e0000;
    func_020752cc(arg0, 0);
}
