#include "m2c.h"

void *func_0202c83c();                              /* extern */
M2C_UNK func_02083c98(void *);                      /* extern */

void func_02083e04(void *arg0, s32 arg1, s32 *arg2) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    if ((s32) M2C_FIELD(func_0202c83c(), s32 *, 8) > (s32) *arg2) {
        return;
    }
    func_02083c98(arg0);
}
