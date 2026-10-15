#include "m2c.h"

M2C_UNK func_020ba820(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020ba8dc(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_020c2d58(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK func_020adeb0;

void func_0208cb9c(void *arg0, void *arg1) {
    func_020c2d58(&func_020adeb0, 0);
    M2C_FIELD(arg0, u16 *, 0x3BA) = (u16) M2C_FIELD(arg1, u16 *, 0x10);
    func_020ba820(arg0 + 0x3A8, 0, 0x11);
    func_020ba8dc(arg1 + 0x14, arg0 + 0x3A8, 0x10);
}
