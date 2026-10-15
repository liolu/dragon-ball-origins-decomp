#include "m2c.h"

M2C_UNK func_020afbf4(void *);                      /* extern */
M2C_UNK func_020bad10(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_020bb328(M2C_UNK);                     /* extern */
M2C_UNK func_020bb4e4(s32);                         /* extern */
s32 func_020bb550();                                /* extern */
M2C_UNK func_020bef44(void *);                      /* extern */
M2C_UNK func_020bef5c(void *);                      /* extern */

void func_020afb80(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020bad10(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020bef44(arg0 + 8);
        func_020bef5c(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020bb550();
        func_020bb328(1);
        func_020bb4e4(temp_r5);
    }
    func_020afbf4(arg0);
}
