#include "m2c.h"

M2C_UNK func_02098ea4();                            /* extern */

void func_02098e94(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x104) = arg2;
    func_02098ea4();
}
