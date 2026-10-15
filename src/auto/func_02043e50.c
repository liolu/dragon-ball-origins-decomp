#include "m2c.h"

M2C_UNK func_02048678();                            /* extern */
M2C_UNK func_02048970(s32);                         /* extern */
M2C_UNK func_02048b80(s32);                         /* extern */
M2C_UNK func_02048d0c(s32);                         /* extern */
M2C_UNK func_02048dfc(s32);                         /* extern */
M2C_UNK func_020496bc(s32);                         /* extern */

void func_02043e50(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02048678();
    func_02048970(arg0);
    func_02048b80(arg0);
    func_02048d0c(arg0);
    func_02048dfc(arg0);
    func_020496bc(arg0);
}
