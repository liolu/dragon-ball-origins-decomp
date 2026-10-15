#include "m2c.h"

M2C_UNK func_02089758(M2C_UNK *);                   /* extern */
M2C_UNK func_0209de5c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b5864(s32, s32);                    /* extern */
extern M2C_UNK data_0215a16c;
extern M2C_UNK data_02160404;

void func_02023618(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0209de5c(&data_02160404, 1, 0);
    func_02089758(&data_0215a16c);
    func_0209de5c(&data_02160404, 0, 1);
    func_020b5864(0x0400006C, M2C_FIELD(arg0, s32 *, 0x10));
    func_020b5864(0x0400106C, M2C_FIELD(arg0, s32 *, 0x10));
}
