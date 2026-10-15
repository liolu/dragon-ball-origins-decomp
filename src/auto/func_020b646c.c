#include "m2c.h"

M2C_UNK func_020b5930(u16);                         /* extern */
extern u16 data_0216cde4;

u16 func_020b646c(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0216cde4 |= temp_r4;
    func_020b5930(temp_r4);
    return temp_r4;
}
