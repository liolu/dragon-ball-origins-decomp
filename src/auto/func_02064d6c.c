#include "m2c.h"

M2C_UNK func_0205fe40(M2C_UNK *);                   /* extern */
M2C_UNK func_020601a0(M2C_UNK *);                   /* extern */
void *func_02060688(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0214768c;

void func_02064d6c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    func_0205fe40(&data_0214768c);
    func_020601a0(&data_0214768c);
    M2C_FIELD(arg0, s32 *, 8)     = (s32) M2C_FIELD(&data_0214768c, s32 *, 8);
    temp_r0                       = func_02060688(&data_0214768c, arg1, arg2);
    M2C_FIELD(arg0, void **, 0xC) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x14)  = (s32) M2C_FIELD(temp_r0, s32 *, 0x44);
}
