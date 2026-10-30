/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_020a0ec8(M2C_UNK *);                   /* extern */
M2C_UNK func_020ba0b0();                            /* extern */
extern M2C_UNK data_020e7c00;
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_02001368(s32 arg0) {
    if ((s32) (M2C_FIELD(&data_020e7c00, s32 *, 0xC) + 1) < arg0) {
        do {
            func_020ba0b0();
        } while ((s32) (M2C_FIELD(&data_020e7c00, s32 *, 0xC) + 1) < arg0);
    }
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    func_020a0ec8(&data_020e7ddc);
    do {

    } while (*(s32 *) 0x04000600 & 0x08000000);
    if (!(data_020e7dcc & 1)) {
        data_020e7dcc |= 1;
    }
    M2C_FIELD(&data_020e7ddc, s8 *, 0x1F0) = 0;
}
