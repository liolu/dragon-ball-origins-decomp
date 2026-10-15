#include "m2c.h"

M2C_UNK func_02001368(M2C_UNK);                     /* extern */
M2C_UNK func_020214c0();                            /* extern */
M2C_UNK func_02021538(void *);                      /* extern */
s32 func_020215b4(void *);                          /* extern */

void func_0202146c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B4) + 1);
    M2C_FIELD(arg0, s32 *, 0x1BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1BC) + 1);
    func_020214c0(arg0);
    func_02001368(1);
    if (func_020215b4(arg0) != 0) {
        return;
    }
    func_02021538(arg0);
}
