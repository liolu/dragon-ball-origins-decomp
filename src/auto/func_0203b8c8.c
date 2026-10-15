#include "m2c.h"

M2C_UNK func_02002800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203ab94(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203b26c(void *);                      /* extern */

void func_0203b8c8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1CC) ^ 1);
    func_02002800(M2C_FIELD(arg0, s32 *, 8), 0);
    func_0203b26c(arg0);
    func_0203ab94(arg0, 0);
}
