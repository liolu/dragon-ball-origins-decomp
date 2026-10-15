#include "m2c.h"

M2C_UNK func_02027ee4(void *, s32);                 /* extern */

void func_02027ec8(void *arg0, s32 arg1) {
    func_02027ee4(arg0, (0x24 * arg1) + M2C_FIELD(arg0, s32 *, 0x2250));
}
