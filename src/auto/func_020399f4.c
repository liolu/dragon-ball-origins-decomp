#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_02039308(void *);                      /* extern */
M2C_UNK func_020397c8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02039aa4(void *);                      /* extern */
M2C_UNK func_02039af8(void *);                      /* extern */
M2C_UNK func_02039cc0();                            /* extern */
M2C_UNK func_02039d60(void *);                      /* extern */
M2C_UNK func_0203a46c(void *);                      /* extern */
M2C_UNK func_0203a65c();                            /* extern */
M2C_UNK func_020400cc(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02123784;

void func_020399f4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x750) == 0) {
        func_02039cc0(arg0);
        func_02039d60(arg0);
    } else {
        func_0203a65c(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x750) = (s32) M2C_FIELD(arg0, s32 *, 0x754);
    func_02039aa4(arg0);
    M2C_FIELD(arg0, s32 *, 0x758) = 0;
    M2C_FIELD(arg0, s32 *, 0x760) = -1;
    func_020400cc(&data_02123784, 0x108);
    M2C_FIELD(arg0, s32 *, 0x788) = -1;
    func_02002800(M2C_FIELD(arg0, s32 *, 4), 0);
    if (M2C_FIELD(arg0, s32 *, 0x750) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x75C) != 0) {
            func_02039af8(arg0);
        }
        func_02039308(arg0);
    } else {
        func_0203a46c(arg0);
    }
    func_020397c8(arg0, 0);
}
