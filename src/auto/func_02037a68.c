#include "m2c.h"

M2C_UNK func_02001af8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02001c08(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02037ad0();                            /* extern */

void func_02037a68(void *arg0) {
    func_02037ad0();
    func_02001c08(0, 6, 0);
    func_02001af8(0x58, 4);
    M2C_FIELD(arg0, s32 *, 0x2920) = 2;
}
