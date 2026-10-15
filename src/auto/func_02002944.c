#include "m2c.h"

M2C_UNK func_020015f4(M2C_UNK *);                   /* extern */
M2C_UNK func_0200163c(M2C_UNK *);                   /* extern */
M2C_UNK func_02002a88(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02002b14(M2C_UNK *);                   /* extern */

void func_02002944(M2C_UNK arg0) {
    u8 spC[20];
    u8 sp0[12];

    func_020015f4(sp0);
    func_02002a88(spC, arg0, sp0);
    func_02002b14(spC);
    func_0200163c(sp0);
}
