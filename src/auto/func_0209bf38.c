#include "m2c.h"

M2C_UNK func_0209b59c(void *, void *);              /* extern */
M2C_UNK func_0209b808(void *, s32, s32);            /* extern */
M2C_UNK func_0209bfbc();                            /* extern */

void func_0209bf38(void *arg0, void *arg1) {
    func_0209bfbc();
    func_0209b59c(arg0, arg1);
    func_0209b808(arg0, M2C_FIELD(arg1, s32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
}
