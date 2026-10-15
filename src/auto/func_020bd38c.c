#include "m2c.h"

M2C_UNK func_020bd964();                            /* extern */
extern s32 data_0216ee38;

void func_020bd38c(s32 arg0) {
    if (data_0216ee38 != 0) {
        return;
    }
    data_0216ee38 = 1;
    func_020bd964(arg0);
}
