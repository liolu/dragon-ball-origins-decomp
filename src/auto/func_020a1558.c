#include "m2c.h"

extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_020a1558(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        if (!(data_020e7dcc & 1)) {
            data_020e7dcc |= 1;
        }
        M2C_FIELD(*M2C_FIELD(&data_020e7ddc, void ***, 0x10), M2C_UNK(**)(void **, s32),
                  4)(M2C_FIELD(&data_020e7ddc, void ***, 0x10), M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
