#include "m2c.h"

M2C_UNK func_020ac694(M2C_UNK);                     /* extern */
M2C_UNK func_020ac6a4();                            /* extern */
s32 func_020c1650(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020ad470;

void func_020ad420(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020ac6a4();
        func_020ac694(0xA);
        return;
    }
    if (func_020c1650(&func_020ad470) != 0) {
        func_020ac6a4();
        func_020ac694(0xA);
        return;
    }
    func_020ac694(1);
}
