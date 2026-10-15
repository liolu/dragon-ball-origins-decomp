#include "m2c.h"

M2C_UNK func_020b8da8(s32);                         /* extern */
M2C_UNK func_020b90b0(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020b9180(void *);                      /* extern */
extern M2C_UNK data_0216cea0;

void func_020b8d4c(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_0216cea0, s32 *, 0x1C) != 0) {
        func_020b90b0(arg0, func_020b8da8);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020b9180(arg0);
        return;
    }
    func_020b8da8(arg1);
}
