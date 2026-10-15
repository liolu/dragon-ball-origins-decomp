#include "m2c.h"

M2C_UNK func_0208d1e8(s32 *);                       /* extern */
M2C_UNK func_0208d7d8(s32 *);                       /* extern */
M2C_UNK func_020ba6f0(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0208d1b4(s32 *arg0) {
    func_020ba6f0(0, ((s8 *) arg0 + 4), 4);
    func_0208d1e8(arg0);
    *arg0 = 5;
    func_0208d7d8(arg0);
}
