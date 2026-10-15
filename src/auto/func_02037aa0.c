#include "m2c.h"

M2C_UNK func_02037ad0(void *);                      /* extern */
M2C_UNK func_02037c14(void *);                      /* extern */
M2C_UNK func_02037c58(void *, M2C_UNK);             /* extern */

void func_02037aa0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2920) = 7;
    func_02037c58(arg0, 0);
    func_02037c14(arg0);
    func_02037ad0(arg0);
}
