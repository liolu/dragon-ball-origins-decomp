#include "m2c.h"

extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

s32 func_020a3d84(void) {
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    return M2C_FIELD(&data_020e7ddc, s32 *, 0x144);
}
