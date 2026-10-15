#include "m2c.h"

M2C_UNK func_02091df0(s32);                         /* extern */

void func_020939c4(void *arg0) {
    func_02091df0(arg0 + 0x6E8);
    M2C_FIELD(arg0, s32 *, 0xD88) = -1;
    M2C_FIELD(arg0, s32 *, 0xD90) = 0;
    M2C_FIELD(arg0, s32 *, 0xD94) = -1;
}
