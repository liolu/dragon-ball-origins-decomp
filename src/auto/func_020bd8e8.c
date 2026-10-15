#include "m2c.h"

M2C_UNK func_020bfa74(u16);                         /* extern */
M2C_UNK func_020bfa90(u16);                         /* extern */
extern s32 data_0216ee3c;

s32 func_020bd8e8(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020bfa74((u16) data_0216ee3c);
            return 0;
        case 10:
            func_020bfa90((u16) data_0216ee3c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
