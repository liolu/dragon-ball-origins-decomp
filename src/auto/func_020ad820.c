#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020acd6c();                                /* extern */
s32 func_020acdd8();                                /* extern */
extern M2C_UNK data_021662c0;

void func_020ad820(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020ac6a4();
        func_020ac694(9);
        return;
    }
    if (M2C_FIELD(&data_021662c0, s32 *, 0x24) != 0) {
        if (func_020acdd8() != 0) {
            return;
        }
        func_020ac694(9);
        return;
    }
    if (func_020acd6c() != 0) {
        return;
    }
    func_020ac694(9);
}
