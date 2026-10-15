#include "m2c.h"

M2C_UNK func_02027a30(void *, s32);                 /* extern */

void func_020279c0(void *arg0, s32 arg1) {
    func_02027a30(arg0, (0x44 * arg1) + M2C_FIELD(arg0, s32 *, 0xBA8));
}
