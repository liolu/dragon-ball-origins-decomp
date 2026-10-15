#include "m2c.h"

M2C_UNK func_02056ba4();                            /* extern */
extern s32 data_0213dff0;

void func_0205b3b4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) data_0213dff0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xAC) == 0x9D) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 2;
    }
    func_02056ba4();
}
