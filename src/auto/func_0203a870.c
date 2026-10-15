#include "m2c.h"

s32 func_020027e0(M2C_UNK);                         /* extern */
M2C_UNK func_0203a8b4();                            /* extern */
M2C_UNK func_0203ab94(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203acfc(void *);                      /* extern */
M2C_UNK func_0203bd78(void *);                      /* extern */

void func_0203a870(void *arg0) {
    func_0203a8b4();
    M2C_FIELD(arg0, s32 *, 0x6A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    func_0203bd78(arg0);
    M2C_FIELD(arg0, s32 *, 4) = func_020027e0(0);
    func_0203acfc(arg0);
    func_0203ab94(arg0, 0);
}
