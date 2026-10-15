#include "m2c.h"

M2C_UNK func_0202691c(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02040104(M2C_UNK *);                   /* extern */
M2C_UNK func_02040118(M2C_UNK *);                   /* extern */
M2C_UNK func_0209b854(void *, s32);                 /* extern */
extern M2C_UNK data_020f6268;
extern M2C_UNK data_02123784;

void func_0203d814(void *arg0) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x390);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_0202691c(&data_020f6268, 1);
            break;
        case 1:
            func_0202691c(&data_020f6268, 2);
            break;
        case 2:
            func_0202691c(&data_020f6268, 3);
            func_02040118(&data_02123784);
            break;
        case 3:
            func_0202691c(&data_020f6268, 3);
            func_02040104(&data_02123784);
            break;
    }
    func_0209b854(arg0 + 0x368, M2C_FIELD(((M2C_FIELD(arg0, u32 *, 0x390) * 0x38) + (s32) arg0), s32 *, 0x1CC));
    M2C_FIELD(arg0, s32 *, 0x504) = -1;
}
