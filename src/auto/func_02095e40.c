#include "m2c.h"

s32 *func_02095e34();                               /* extern */

s32 func_02095e40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64) + *func_02095e34();
}
