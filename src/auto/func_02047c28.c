#include "m2c.h"

s32 func_020253d0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020f6268;

s32 func_02047c28(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        return M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return func_020253d0(&data_020f6268);
}
