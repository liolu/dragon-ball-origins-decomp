#include "m2c.h"

M2C_UNK func_0203a764();                            /* extern */

void func_0203a740(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x78C) = (s32) (arg1 - 8);
    M2C_FIELD(arg0, s32 *, 0x790) = (s32) (arg2 - 8);
    M2C_FIELD(arg0, s32 *, 0x794) = 0;
    func_0203a764();
}
