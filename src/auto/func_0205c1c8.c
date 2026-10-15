#include "m2c.h"

M2C_UNK func_02056ba4();                            /* extern */
extern s32 data_0213dff0;

void func_0205c1c8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) data_0213dff0;
    func_02056ba4();
}
