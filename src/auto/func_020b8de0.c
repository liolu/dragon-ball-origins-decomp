#include "m2c.h"

M2C_UNK func_020b88f4(s32, void *);                 /* extern */
M2C_UNK func_020b89d8(void *);                      /* extern */
M2C_UNK func_020b8e8c(void *);                      /* extern */
M2C_UNK func_020b8f44();                            /* extern */
M2C_UNK func_020b9040();                            /* extern */
M2C_UNK func_020b9074();                            /* extern */
M2C_UNK func_020b94d8(void *);                      /* extern */
M2C_UNK func_020ba2b8();                            /* extern */
extern M2C_UNK data_0216cea0;

void func_020b8de0(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0216cea0, void ***, 8);
    func_020b9040();
    func_020b94d8(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020b88f4(temp_r0, temp_r4);
    }
    func_020b89d8(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020b8e8c(temp_r4 + 0x9C);
    func_020b9074();
    func_020b8f44();
    func_020ba2b8();
}
