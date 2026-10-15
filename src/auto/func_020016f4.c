#include "m2c.h"

M2C_UNK func_020997c0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020ed8e0;

s32 func_020016f4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_020997c0(&data_020ed8e0);
    M2C_FIELD(arg0, s32 *, 4)        = 0;
    return M2C_FIELD(arg0, s32 *, 8) = 0;
}
