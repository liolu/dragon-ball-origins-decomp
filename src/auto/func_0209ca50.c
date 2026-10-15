#include "m2c.h"

M2C_UNK func_0209c7e0(void *, void *);              /* extern */
M2C_UNK func_0209ca88();                            /* extern */

void func_0209ca50(void *arg0, void *arg1) {
    func_0209ca88();
    func_0209c7e0(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
