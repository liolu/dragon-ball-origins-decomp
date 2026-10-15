#include "m2c.h"

M2C_UNK func_020af8ac(void *);                      /* extern */
M2C_UNK func_020b2688(void *);                      /* extern */
M2C_UNK func_020b93f8(M2C_UNK *);                   /* extern */
M2C_UNK func_020b947c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0216bf70;
extern M2C_UNK data_0216c5e8;

void func_020b296c(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_020b93f8(&data_0216c5e8);
    if (M2C_FIELD(&data_0216bf70, s32 *, 4) != 0) {
        func_020b93f8(M2C_FIELD(&data_0216bf70, s32 *, 4) + 0x4C8);
    }
    func_020b2688(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_020af8ac(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_020b947c(&data_0216c5e8);
    if (M2C_FIELD(&data_0216bf70, s32 *, 4) == 0) {
        return;
    }
    func_020b947c(M2C_FIELD(&data_0216bf70, s32 *, 4) + 0x4C8);
}
