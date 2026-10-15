#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203e548();                            /* extern */
M2C_UNK func_0203e60c(void *);                      /* extern */
M2C_UNK func_0203ea9c(void *);                      /* extern */
M2C_UNK func_0209b854(void *, s32);                 /* extern */
extern M2C_UNK data_02122e44;

void func_0203e4d8(void *arg0) {
    s32 temp_r0;

    func_0203e548();
    func_02002800(M2C_FIELD(arg0, s32 *, 8), 0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0203e60c(arg0);
            break;
        case 1:
            func_0203ea9c(arg0);
            break;
    }
    func_0209b854(arg0 + 0x368, M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x390) * 0x38) + (s32) arg0), s32 *, 0x1CC));
    M2C_FIELD(&data_02122e44, s32 *, 0x924) = 0;
}
