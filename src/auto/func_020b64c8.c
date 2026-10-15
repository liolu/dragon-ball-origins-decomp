#include "m2c.h"

M2C_UNK func_020b646c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0216cdf2;

void func_020b64c8(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020b646c(&data_0216cdf2);
}
