#include "m2c.h"

M2C_UNK func_0203de88(void *);                      /* extern */
M2C_UNK func_0209b854(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209ce60(void *, s32);                 /* extern */
M2C_UNK func_0209ce7c(void *, M2C_UNK);             /* extern */

void func_0203ddc4(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x390) < 3) {
        var_r1 = 0x80;
    } else {
        var_r1 = 0x10;
    }
    func_0209b854(arg0 + 0x394, var_r1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x390) < 2) {
        func_0209ce60(arg0 + 0x9E8, 0x8C);
        func_0209ce60(arg0 + 0xA50, 0x8C);
        func_0209ce60(arg0 + 0x980, 0x8C);
        func_0209ce7c(arg0 + 0x980, 0x88);
    } else {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x398);
        func_0209ce60(arg0 + 0xAB8, temp_r4 + 0xC);
        func_0209ce60(arg0 + 0xB20, temp_r4 + 0xC);
        func_0209ce60(arg0 + 0xB88, temp_r4 + 0xC);
        func_0209ce60(arg0 + 0xBF0, temp_r4 + 0xC);
        func_0209ce60(arg0 + 0x980, temp_r4 + 0xC);
        func_0209ce7c(arg0 + 0x980, 0x94);
    }
    func_0203de88(arg0);
}
