#include "m2c.h"

M2C_UNK func_020ba790(s32, s32, s32);               /* extern */

void func_020a134c(void *arg0, void *arg1) {
    func_020ba790(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, s32 *, 0),
                  M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), s16 *, 0x22) * 0x30);
    M2C_FIELD(arg1, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
}
