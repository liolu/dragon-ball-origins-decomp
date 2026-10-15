#include "m2c.h"

M2C_UNK func_020b5930();                            /* extern */
extern u16 data_0216cde4;

void func_020b6234(s32 arg0) {
    data_0216cde4 |= arg0;
    func_020b5930(arg0);
}
