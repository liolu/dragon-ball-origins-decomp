#include "m2c.h"

M2C_UNK func_02022a94();                            /* extern */
M2C_UNK func_02022b40();                            /* extern */
M2C_UNK func_0204b0f4(M2C_UNK *);                   /* extern */
s32 func_0204b374(M2C_UNK *);                       /* extern */
extern M2C_UNK data_021267b0;

void func_020227f0(void *arg0) {
    if (func_0204b374(&data_021267b0) != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2D8) < (u32) M2C_FIELD(arg0, u32 *, 0x2DC)) {
            func_02022a94(arg0);
            return;
        }
        func_02022b40(arg0);
        return;
    }
    func_0204b0f4(&data_021267b0);
}
