#include "m2c.h"

M2C_UNK func_02043e50();                            /* extern */
M2C_UNK func_02050c54(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_0213c810;

void func_020286c4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
        return;
    }
    func_02043e50();
    func_02050c54(&data_0213c810, M2C_FIELD(arg1, s32 *, 0x20), 0);
    M2C_FIELD(arg1, s32 *, 0x20) = 0;
}
