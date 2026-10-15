#include "m2c.h"

M2C_UNK func_02035c04(s32, s32, s32);               /* extern */
M2C_UNK func_02035c80();                            /* extern */
M2C_UNK func_02035e70(s32, s32, s32);               /* extern */
M2C_UNK func_020365b0(s32, s32, s32);               /* extern */
M2C_UNK func_020365c8(s32);                         /* extern */
extern void *data_0213dff0;

void func_0203647c(s32 arg0) {
    void *temp_r4;

    temp_r4 = data_0213dff0;
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x274) != 0)) {
        func_02035c80(arg0);
        func_02035e70(arg0, arg0 + 0x150, arg0 + 0x178);
        func_02035c04(arg0, M2C_FIELD(temp_r4, s32 *, 0x2FC), M2C_FIELD(temp_r4, s32 *, 0x300));
        func_020365b0(arg0, M2C_FIELD(temp_r4, s32 *, 0x780), M2C_FIELD(temp_r4, s32 *, 0x784));
        func_020365c8(arg0);
    }
}
