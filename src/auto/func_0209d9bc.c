#include "m2c.h"

M2C_UNK func_0209d428(s32, s32, s32, s32, s32);     /* extern */

void func_0209d9bc(void *arg0) {
    func_0209d428(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x3C),
                  M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & ~4);
}
