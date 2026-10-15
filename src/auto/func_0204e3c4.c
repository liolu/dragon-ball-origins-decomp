#include "m2c.h"

extern M2C_UNK data_0212af24;
extern M2C_UNK data_0212b044;

s32 func_0204e3c4(s32 arg0) {
    s32 var_r1;
    s32 var_r1_2;

    if ((arg0 >= 0xD8) && (arg0 < 0xE0)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        return ((arg0 - 0xD8) * 0x24) + (s32) &data_0212af24 + 0x14;
    }
    if ((arg0 >= 0xE4) && (arg0 < 0x108)) {
        var_r1_2 = 1;
    } else {
        var_r1_2 = 0;
    }
    if (var_r1_2 == 0) {
        return 0;
    }
    return ((arg0 - 0xE4) * 0xC) + (s32) &data_0212b044 + 8;
}
