#include "m2c.h"

M2C_UNK func_020ae324(s32, void *);                 /* extern */
M2C_UNK func_020b0f00();                            /* extern */
extern M2C_UNK data_0216b3e4;

void func_020af724(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020b0f00();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020ae324((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_0216b3e4 + 0xC, arg0);
}
