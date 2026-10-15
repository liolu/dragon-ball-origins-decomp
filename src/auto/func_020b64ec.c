#include "m2c.h"

M2C_UNK func_020b646c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0216cdf4;

void func_020b64ec(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020b646c(&data_0216cdf4);
}
