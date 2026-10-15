#include "m2c.h"

M2C_UNK func_020b8c30(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020b8ef4(void *);                      /* extern */
s32 func_020ba034();                                /* extern */
M2C_UNK func_020ba048(s32);                         /* extern */
M2C_UNK func_020c34a0(M2C_UNK *);                   /* extern */
extern void *data_02170528;
extern M2C_UNK data_0217052c;
extern M2C_UNK data_02170950;
extern M2C_UNK func_020c34b4;

void func_020c3414(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020ba034();
    if (data_02170528 == NULL) {
        data_02170528 = arg0;
        func_020c34a0(arg0 + 0xC4);
        func_020c34a0(&data_0217052c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020b8c30(arg0, &func_020c34b4, arg0, &data_02170950, 0x400, 0x14);
        func_020b8ef4(arg0);
    }
    func_020ba048(temp_r4);
}
