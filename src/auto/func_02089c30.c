#include "m2c.h"

s32 func_020016b8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02089c74(void *);                      /* extern */
M2C_UNK func_020ba820(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020c35e8(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_02136be0;

void func_02089c30(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020016b8(arg0 + 0x3C, 0x11, 0x20);
    func_020ba820(temp_r0, 0, M2C_FIELD(arg0, s32 *, 0x44));
    func_020c35e8(temp_r0, &data_02136be0);
    func_02089c74(arg0);
}
