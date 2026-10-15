#include "m2c.h"

M2C_UNK func_020aff4c();                            /* extern */
M2C_UNK func_020bafc0(M2C_UNK);                     /* extern */
extern s32 data_020e7918;

void func_020b36e8(void) {
    if (data_020e7918 == 1) {
        func_020bafc0(0);
    }
    func_020aff4c();
}
