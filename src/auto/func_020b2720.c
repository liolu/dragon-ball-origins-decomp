#include "m2c.h"

M2C_UNK func_020b2394(void *);                      /* extern */
M2C_UNK func_020b27bc();                            /* extern */
M2C_UNK func_020b2840(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0216bf70;
extern M2C_UNK data_0216c600;

void func_020b2720(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020b27bc(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    func_020b2840(&data_0216c600, arg0);
    if (M2C_FIELD(&data_0216bf70, s32 *, 4) != 0) {
        func_020b2840(M2C_FIELD(&data_0216bf70, s32 *, 4) + 0x4E0, arg0);
    }
    func_020b2394(arg0);
}
