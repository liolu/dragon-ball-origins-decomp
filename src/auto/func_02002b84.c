#include "m2c.h"

M2C_UNK func_020015f4(M2C_UNK *);                   /* extern */
M2C_UNK func_0200163c(M2C_UNK *);                   /* extern */
M2C_UNK func_02002bc4(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0209d8f0(M2C_UNK);                     /* extern */

void func_02002b84(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[12];

    func_020015f4(sp0);
    func_02002bc4(arg0, arg1, sp0);
    func_0209d8f0(arg0);
    func_0200163c(sp0);
}
