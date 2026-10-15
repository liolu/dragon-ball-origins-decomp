#include "m2c.h"

M2C_UNK func_020b9604(void *, M2C_UNK);             /* extern */
extern void *data_0216eda0;

s32 func_020bb858(void) {
    func_020b9604(data_0216eda0 + 4, 4);
    return M2C_FIELD(data_0216eda0, s32 *, 4);
}
