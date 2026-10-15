#include "m2c.h"

M2C_UNK func_0209a9f0(s16, s32, s32, s32);          /* extern */
M2C_UNK func_0209d3e4(s16, s16, s32, s32, s32);     /* extern */

void func_02002b14(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_0209d3e4(M2C_FIELD(arg0, s16 *, 4), M2C_FIELD(arg0, s16 *, 6), M2C_FIELD(arg0, s32 *, 0x10),
                      M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
        return;
    }
    func_0209a9f0(M2C_FIELD(arg0, s16 *, 4), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 8),
                  M2C_FIELD(arg0, s32 *, 0xC));
}
