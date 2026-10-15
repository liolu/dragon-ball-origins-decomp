#include "m2c.h"

s32 func_0204d06c();                         /* extern */
M2C_UNK func_0204d2dc();                /* extern */
s32 func_0204de04();                         /* extern */
extern void *data_0213dff0;

void func_0204d8d0(void) {
    s32 temp_r4;
    s32 var_r1;
    void *temp_r4_2;

    temp_r4 = func_0204de04(0xE1);
    func_0204d2dc(0, temp_r4 + func_0204d06c(0));
    var_r1 = 0;
    if ((data_0213dff0 != NULL) && (M2C_FIELD(data_0213dff0, s32 *, 0x274) != 0)) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        return;
    }
    temp_r4_2 = data_0213dff0;
    if (M2C_FIELD(temp_r4_2, s32 *, 0xB0) != 0) {
        return;
    }
    M2C_FIELD(temp_r4_2, s32 *, 0x784) = func_0204d06c();
}
