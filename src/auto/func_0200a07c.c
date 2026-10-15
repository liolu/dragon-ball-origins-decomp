#include "m2c.h"

M2C_UNK func_02001368(M2C_UNK);                     /* extern */
M2C_UNK func_0200a0e8(M2C_UNK);                     /* extern */
M2C_UNK func_020888c4(M2C_UNK *);                   /* extern */
M2C_UNK func_020892b0(M2C_UNK *);                   /* extern */
s32 func_020896ac(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0215a16c;
extern M2C_UNK data_0215f2fc;

void func_0200a07c(M2C_UNK arg0) {
    func_020888c4(&data_0215a16c);
    func_02001368(1);
    if ((func_020896ac(&data_0215a16c) != 0) || (M2C_FIELD(&data_0215f2fc, u16 *, 6) & 8)) {
        func_0200a0e8(arg0);
        return;
    }
    func_020892b0(&data_0215a16c);
}
