#include "m2c.h"

extern u16 data_020d8e90;
extern s32 data_020d8e94;

void func_02026828(void *arg0) {
    data_020d8e90 = M2C_FIELD(arg0, u16 *, 0x18C);
    data_020d8e94 = (s32) M2C_FIELD(arg0, s16 *, 0x18E);
}
