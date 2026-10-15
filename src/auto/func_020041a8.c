#include "m2c.h"

M2C_UNK func_02001368(M2C_UNK);                     /* extern */
M2C_UNK func_02004228(M2C_UNK *);                   /* extern */
M2C_UNK func_020888c4(M2C_UNK *);                   /* extern */
M2C_UNK func_020892b0(M2C_UNK *);                   /* extern */
s32 func_020896ac(M2C_UNK *);                       /* extern */
M2C_UNK func_0209fb54(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020f1860;
extern M2C_UNK data_0215a16c;

void func_020041a8(M2C_UNK arg0) {
    func_020888c4(&data_0215a16c);
    func_02001368(1);
    if (func_020896ac(&data_0215a16c) != 0) {
        func_0209fb54(arg0, &data_020f1860);
        func_02004228(&data_020f1860);
        return;
    }
    func_020892b0(&data_0215a16c);
}
