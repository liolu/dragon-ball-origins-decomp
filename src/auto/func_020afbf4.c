#include "m2c.h"

M2C_UNK func_020ae324(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020aef04(s32);                         /* extern */
extern M2C_UNK data_0216b868;

void func_020afbf4(void *arg0) {
    func_020aef04(M2C_FIELD(arg0, s32 *, 0x40));
    func_020ae324(&data_0216b868, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
