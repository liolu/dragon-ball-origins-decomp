#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203ab94(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203acfc();                            /* extern */
M2C_UNK func_0203aea8();                            /* extern */
M2C_UNK func_0203af14();                            /* extern */
M2C_UNK func_0203b534();                            /* extern */
M2C_UNK func_0203bf4c(void *);                      /* extern */
M2C_UNK func_020400dc(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02123784;

void func_0203bed0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6A4) == 0) {
        func_0203aea8(arg0);
    } else {
        func_0203b534(arg0);
        func_020400dc(&data_02123784, -1, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x6A4) = (s32) M2C_FIELD(arg0, s32 *, 0x6A8);
    func_0203bf4c(arg0);
    func_02002800(M2C_FIELD(arg0, s32 *, 4), 0);
    if (M2C_FIELD(arg0, s32 *, 0x6A4) == 0) {
        func_0203acfc(arg0);
    } else {
        func_0203af14(arg0);
    }
    func_0203ab94(arg0, 0);
}
