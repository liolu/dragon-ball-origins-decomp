#include "m2c.h"

s32 func_020b91cc();
extern M2C_UNK data_0216d11c;

s32 func_020b9978(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x2170EA0;
        case 2:
            if ((M2C_FIELD(&data_0216d11c, s32 *, 4) == 0) || ((func_020b91cc() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x1FFF5E0;
        case 4:
            return 0x27E0160;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
        case 1:
            return 0;
    }
}
