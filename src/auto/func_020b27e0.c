#include "m2c.h"

M2C_UNK func_020ae1d8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b8c30(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_020b8ef4(void *);                      /* extern */
M2C_UNK func_020b93e0(void *);                      /* extern */
extern M2C_UNK func_020b3644;

void func_020b27e0(void *arg0, s32 arg1) {
    func_020b8c30(arg0, &func_020b3644, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_020ae1d8(arg0 + 0x4E0, 0);
    func_020b93e0(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_020b8ef4(arg0);
}
