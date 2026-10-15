#include "m2c.h"

M2C_UNK func_020229dc();                            /* extern */
M2C_UNK func_02022a74();                            /* extern */
extern M2C_UNK data_0215f2fc;

void func_02022788(void *arg0) {
    if (M2C_FIELD(&data_0215f2fc, s32 *, 0x30) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x314) == 0x108) {
        func_02022a74(arg0);
        return;
    }
    func_020229dc(arg0);
}
