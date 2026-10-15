#include "m2c.h"

M2C_UNK func_020bad10(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_020bb328(M2C_UNK);                     /* extern */
M2C_UNK func_020bb4e4(s32);                         /* extern */
s32 func_020bb550();                                /* extern */

void func_020afce4(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_020bad10(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_020bb550();
    func_020bb328(1);
    func_020bb4e4(temp_r4);
}
