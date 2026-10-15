#include "m2c.h"

M2C_UNK func_020afac8(void *);                      /* extern */
M2C_UNK func_020b2720(void *);                      /* extern */
M2C_UNK func_020b93f8(M2C_UNK *);                   /* extern */
M2C_UNK func_020b947c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0216bf70;
extern M2C_UNK data_0216c5e8;

void func_020b2688(void *arg0) {
    func_020b93f8(&data_0216c5e8);
    if (M2C_FIELD(&data_0216bf70, s32 *, 4) != 0) {
        func_020b93f8(M2C_FIELD(&data_0216bf70, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_020afac8(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_020b2720(arg0);
    func_020b947c(&data_0216c5e8);
    if (M2C_FIELD(&data_0216bf70, s32 *, 4) == 0) {
        return;
    }
    func_020b947c(M2C_FIELD(&data_0216bf70, s32 *, 4) + 0x4C8);
}
