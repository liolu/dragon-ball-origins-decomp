/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_02136be0;

u32 func_0204e600(s32 arg0) {
    u32 var_ip;
    u32 var_lr;

    var_ip = 0;
    var_lr = 0;
    do {
        if (arg0 == M2C_FIELD(((M2C_UNK *) ((s8 *) &data_02136be0 + (var_lr * 4))), s32 *, 0x288)) {
            switch (var_lr) {
                default:
                    break;
                case 0:
                    var_ip |= 0xF0;
                    break;
                case 1:
                    var_ip |= 0xC03;
                    break;
                case 2:
                    var_ip |= 0x200;
                    break;
                case 3:
                    var_ip |= 0x100;
                    break;
                case 4:
                    var_ip |= 8;
                    break;
                case 5:
                    var_ip |= 4;
                    break;
            }
        }
        var_lr += 1;
    } while ((s32) var_lr < 6);
    return var_ip;
}
