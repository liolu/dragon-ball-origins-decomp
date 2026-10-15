#include "m2c.h"

M2C_UNK func_02056ba4(void *);                      /* extern */
M2C_UNK func_02059a04();                            /* extern */
extern s32 data_0213dff0;

void func_02058f60(void *arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0x24) = (s32) data_0213dff0;
    temp_r1                      = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xAC);
    if (temp_r1 == 0x94) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
        func_02059a04(arg0);
        M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
    } else if (temp_r1 == 0x95) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = 1;
        M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    }
    func_02056ba4(arg0);
}
