#include "m2c.h"

M2C_UNK func_0202a76c(M2C_UNK *);                   /* extern */
M2C_UNK func_0202a7c4(M2C_UNK *, s32, s32, u16, s32); /* extern */
M2C_UNK func_0202a84c(M2C_UNK *, u16, s32, M2C_UNK); /* extern */
extern M2C_UNK data_020f8a08;

void func_020267b4(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x17C);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_0202a76c(&data_020f8a08);
            return;
        case 1:
            func_0202a7c4(&data_020f8a08, M2C_FIELD(arg0, s32 *, 0x180), M2C_FIELD(arg0, s32 *, 0x184),
                          M2C_FIELD(arg0, u16 *, 0x188), 0);
            return;
        case 2:
            func_0202a84c(&data_020f8a08, M2C_FIELD(arg0, u16 *, 0x188), M2C_FIELD(arg0, s32 *, 0x180), 0);
            return;
    }
}
