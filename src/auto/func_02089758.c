#include "m2c.h"

M2C_UNK func_0209de5c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e680(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020a6af0(void *);                      /* extern */
M2C_UNK func_020b5864(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b6c80(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020b729c(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02160404;

void func_02089758(void *arg0) {
    func_0209e680(M2C_FIELD(arg0, s32 *, 0x20), 0x400, 1);
    if (M2C_FIELD(arg0, u8 *, 0xD) == 0) {
        func_020b5864(0x0400006C, 0);
        func_020b5864(0x0400106C, 0);
    }
    func_020b6c80(0x04000050, 0x11, M2C_FIELD(arg0, s32 *, 0x954));
    func_020a6af0(arg0 + 0x2C);
    if (M2C_FIELD(arg0, u8 *, 0x970) == 0) {
        return;
    }
    func_0209de5c(&data_02160404, 0, 1);
    func_020b729c(arg0 + 0x972, 0x40, 0x1C0);
}
