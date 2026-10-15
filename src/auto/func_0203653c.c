#include "m2c.h"

M2C_UNK func_02035d20();                            /* extern */
M2C_UNK func_0209b854(s32, s32);                    /* extern */
M2C_UNK func_0209d308(s32, s32);                    /* extern */

void func_0203653c(s32 arg0, s32 arg1) {
    func_02035d20();
    func_0209d308(arg0 + 0x150, arg1 + 0x14);
    func_0209d308(arg0 + 0x178, arg1 + 0x14);
    func_0209b854(arg0 + 0x1A0, arg1 + 0x14);
}
