#include "m2c.h"

void *func_0200f950(void *arg0, u16 *arg1) {
    u16 temp_ip;

    temp_ip = *arg1;
    switch (temp_ip) {                              /* irregular */
        case 0x20A:
            M2C_FIELD(arg0, s32 *, 0x638) = 0;
            break;
        case 0x209:
            M2C_FIELD(arg0, s32 *, 0x634) = 0;
            break;
        case 0x206:
            M2C_FIELD(arg0, s32 *, 0x63C) = 0;
            break;
    }
    return ((s8 *) arg1 + 4);
}
