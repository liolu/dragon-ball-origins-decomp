#include "m2c.h"

M2C_UNK func_02056ba4();                            /* extern */

void func_0205a060(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xAC) == 0x86) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) M2C_FIELD(arg0, s32 *, 0x1C4);
        M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 1;
        M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    }
    func_02056ba4();
}
