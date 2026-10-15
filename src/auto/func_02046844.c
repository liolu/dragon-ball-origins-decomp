#include "m2c.h"

s32 func_02025410(M2C_UNK *);                       /* extern */
M2C_UNK func_0204aaf4(s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_020f6268;

void func_02046844(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02025410(&data_020f6268);
    if (temp_r0 == 0) {
        return;
    }
    func_0204aaf4(M2C_FIELD(arg0, s32 *, 0xC), 0, arg1, temp_r0, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x18),
                  M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
}
