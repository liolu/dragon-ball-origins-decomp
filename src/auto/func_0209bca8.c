#include "m2c.h"

s32 func_0209bca8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 temp_r2;

    temp_ip = M2C_FIELD(arg0, s32 *, 8);
    if ((arg2 >= temp_ip) && (arg2 < (s32) (temp_ip + M2C_FIELD(arg0, s32 *, 0x10)))) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 4);
        if ((arg1 >= temp_r2) && (arg1 < (s32) (temp_r2 + M2C_FIELD(arg0, s32 *, 0xC)))) {
            return 1;
        }
    }
    return 0;
}
