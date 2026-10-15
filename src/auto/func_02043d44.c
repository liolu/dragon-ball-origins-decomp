#include "m2c.h"

M2C_UNK func_02043d20();                            /* extern */

void func_02043d44(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != arg1) {
        return;
    }
    func_02043d20(arg0);
}
