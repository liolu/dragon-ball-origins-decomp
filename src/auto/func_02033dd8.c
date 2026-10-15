#include "m2c.h"

s32 func_02024ea8(M2C_UNK *, s32, s32);             /* extern */
s32 func_02024f38(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK data_020f6268;

s32 func_02033dd8(void *arg0, void *arg1) {
    if (func_02024ea8(&data_020f6268, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8)) != 0) {
        return 1;
    }
    if ((s32) (func_02024f38(&data_020f6268, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8)) * 0x6400) >
        (s32) M2C_FIELD(arg1, s32 *, 4)) {
        return 1;
    }
    return 0;
}
