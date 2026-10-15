#include "m2c.h"

s32 func_02011f34(void **arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
        case 0x901:
            return M2C_FIELD(*arg0, s32(**)(), 0xD4)(arg0, arg1);
        case 0x902:
            return M2C_FIELD(*arg0, s32(**)(), 0xD8)(arg0, arg1);
        case 0x900:
            return M2C_FIELD(*arg0, s32(**)(), 0xD0)(arg0, arg1);
        default:
            return 0;
    }
}
