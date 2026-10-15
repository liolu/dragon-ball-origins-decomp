#include "m2c.h"

M2C_UNK func_020503b4(M2C_UNK *);                   /* extern */
M2C_UNK func_020504bc(M2C_UNK *);                   /* extern */
s32 func_02050bb4(M2C_UNK *);                       /* extern */
s32 func_02050ea0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0213c810;
extern M2C_UNK data_0213d354;
extern M2C_UNK data_0213dff0;
extern M2C_UNK data_0213fc40;

s32 func_02052c1c(u32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {
        default:
            break;
        case 0:
            func_020503b4(&data_0213dff0);
            M2C_FIELD(M2C_FIELD(&data_0213d354, void **, 0xC9C), s32 *, 0x78C) = 1;
            break;
        case 1:
            func_020504bc(&data_0213dff0);
            break;
        case 2:
            var_r4 = func_02050ea0(&data_0213fc40);
            break;
        case 3:
            var_r4 = func_02050bb4(&data_0213c810);
            break;
    }
    return var_r4;
}
