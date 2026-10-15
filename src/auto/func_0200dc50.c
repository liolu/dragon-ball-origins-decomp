#include "m2c.h"

M2C_UNK func_02099570(u16);                         /* extern */
s32 func_020995a8(M2C_UNK);                         /* extern */
extern s32 data_0213b36c;
extern s32 data_0213b380;

void *func_0200dc50(s32 arg0, void *arg1) {
    s32 temp_r3;

    temp_r3       = data_0213b380 + 1;
    data_0213b380 = temp_r3;
    func_02099570((u16) (temp_r3 * (data_0213b36c + 1)));
    if ((s32) M2C_FIELD(arg1, s16 *, 8) < func_020995a8(0x64)) {
        return arg1 + 0xC;
    }
    return arg1 + M2C_FIELD(arg1, s16 *, 4);
}
