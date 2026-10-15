#include "m2c.h"

M2C_UNK func_02056ba4(void *);                      /* extern */
M2C_UNK func_02059fcc();                            /* extern */
extern s32 data_0213dff0;

void func_02059abc(void *arg0) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x24) = (s32) data_0213dff0;
    if (M2C_FIELD(arg0, void **, 0x1C4) == NULL) {
        func_02059fcc(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1D4) != 0) {
        if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), s32 *, 0x2FC) <= 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 1) {
            if (M2C_FIELD(arg0, s32 *, 0x1B0) == 1) {
                M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
                M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
                M2C_FIELD(arg0, s32 *, 8)   = 0x13;
                M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
            }
            M2C_FIELD(arg0, s32 *, 0x1B0) = 2;
            M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
        }
    }
    func_02056ba4(arg0);
}
