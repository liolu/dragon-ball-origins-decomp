#include "m2c.h"

M2C_UNK func_0209d934();                            /* extern */
M2C_UNK func_0209d978(void *);                      /* extern */
M2C_UNK func_0209d9bc(void *);                      /* extern */

void func_0209d8f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) & 1) {
        func_0209d934(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 2) {
        func_0209d978(arg0);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 4)) {
        return;
    }
    func_0209d9bc(arg0);
}
