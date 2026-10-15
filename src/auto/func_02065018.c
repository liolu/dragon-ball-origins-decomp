#include "m2c.h"

M2C_UNK func_020609e0(M2C_UNK *);                   /* extern */
M2C_UNK func_02068eb8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02083e58(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0214768c;
extern M2C_UNK data_021583cc;
extern M2C_UNK data_02159df0;

void func_02065018(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020609e0(&data_0214768c);
    func_02083e58(&data_02159df0, arg1, arg2);
    func_02068eb8(&data_021583cc, arg1, arg2);
}
