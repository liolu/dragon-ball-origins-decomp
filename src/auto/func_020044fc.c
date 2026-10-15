#include "m2c.h"

M2C_UNK func_02001368(M2C_UNK);                     /* extern */
M2C_UNK func_02004550();                            /* extern */
M2C_UNK func_02004618(void *);                      /* extern */
s32 func_02004698(void *);                          /* extern */

void func_020044fc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    func_02004550(arg0);
    func_02001368(1);
    if (func_02004698(arg0) != 0) {
        return;
    }
    func_02004618(arg0);
}
