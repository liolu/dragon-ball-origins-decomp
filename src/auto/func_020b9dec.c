#include "m2c.h"

extern u16 data_0216d1f4;

void func_020b9dec(s32 arg0) {
    data_0216d1f4 |= 1 << arg0;
}
