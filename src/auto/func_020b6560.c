#include "m2c.h"

M2C_UNK func_020b646c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0216cdfa;

void func_020b6560(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020b646c(&data_0216cdfa);
}
