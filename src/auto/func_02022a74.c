#include "m2c.h"

M2C_UNK func_02022a94();                            /* extern */
M2C_UNK func_02022b40();                            /* extern */

void func_02022a74(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2DC) != 0) {
        func_02022a94(arg0);
        return;
    }
    func_02022b40(arg0);
}
