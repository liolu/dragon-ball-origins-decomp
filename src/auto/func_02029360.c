#include "m2c.h"

M2C_UNK func_0200257c();                            /* extern */
s32 func_0204ae84();                                /* extern */
M2C_UNK func_0209de5c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e680(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b5864(s32, s32);                    /* extern */
extern M2C_UNK data_02160404;

void func_02029360(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        return;
    }
    func_0209e680(M2C_FIELD(arg0, s32 *, 0x74), 0x400, 0);
    func_0200257c();
    func_0209de5c(&data_02160404, 0, 0);
    if ((func_0204ae84() != 0) && (M2C_FIELD(arg0, s32 *, 0x48) != 0x10)) {

    } else {
        func_020b5864(0x0400006C, M2C_FIELD(arg0, s32 *, 0x48));
    }
    if ((func_0204ae84() != 0) && (M2C_FIELD(arg0, s32 *, 0x44) != 0x10)) {
        return;
    }
    func_020b5864(0x0400106C, M2C_FIELD(arg0, s32 *, 0x44));
}
