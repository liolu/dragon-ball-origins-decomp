#include "m2c.h"

M2C_UNK func_0209d624(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0209d8f0();                            /* extern */

void func_0209d9f8(void *arg0) {
    func_0209d8f0();
    if (!(M2C_FIELD(arg0, s32 *, 0x48) & 1)) {
        return;
    }
    func_0209d624(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC),
                  M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) & ~1);
}
