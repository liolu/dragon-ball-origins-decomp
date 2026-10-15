#include "m2c.h"

M2C_UNK func_020ae324(s32, void *);                 /* extern */
void *func_020ae384(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020b0f18(s32);                         /* extern */
extern M2C_UNK data_0216b3e4;

s32 func_020af4c0(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_0216b3e4;
    temp_r0 = func_020ae384(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020ae324(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    func_020b0f18(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
