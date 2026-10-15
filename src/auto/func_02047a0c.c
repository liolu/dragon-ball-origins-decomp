#include "m2c.h"

M2C_UNK func_0204b1f8(M2C_UNK *, u16, s32, s32);    /* extern */
s32 func_0204bcec(u16);                             /* extern */
s32 func_0204ccd8(u16);                             /* extern */
extern M2C_UNK data_021267b0;

void func_02047a0c(void *arg0) {
    s32 var_r4;
    u16 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x24);
    var_r4  = 0;
    temp_r0 = M2C_FIELD(temp_r1, u16 *, 6);
    switch (temp_r0) {                              /* irregular */
        case 0:
            break;
        case 1:
            var_r4 = func_0204ccd8(M2C_FIELD(temp_r1, u16 *, 8));
            break;
        case 2:
            var_r4 = func_0204bcec(M2C_FIELD(temp_r1, u16 *, 8));
            break;
    }
    func_0204b1f8(&data_021267b0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u16 *, 4), var_r4,
                  func_0204bcec(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u16 *, 0xA)));
}
