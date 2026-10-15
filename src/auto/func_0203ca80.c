#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203c2f8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203c40c();                            /* extern */
M2C_UNK func_0203c5b8();                            /* extern */
M2C_UNK func_0203c624();                            /* extern */
M2C_UNK func_0203c7c8();                            /* extern */
M2C_UNK func_0203caf8(void *);                      /* extern */
M2C_UNK func_020400f0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02123784;

void func_0203ca80(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x674) == 0) {
        func_0203c5b8(arg0);
    } else {
        func_0203c7c8(arg0);
        func_020400f0(&data_02123784, 0x108);
    }
    M2C_FIELD(arg0, s32 *, 0x674) = (s32) M2C_FIELD(arg0, s32 *, 0x678);
    func_0203caf8(arg0);
    func_02002800(M2C_FIELD(arg0, s32 *, 4), 0);
    if (M2C_FIELD(arg0, s32 *, 0x674) == 0) {
        func_0203c40c(arg0);
    } else {
        func_0203c624(arg0);
    }
    func_0203c2f8(arg0, 0);
}
