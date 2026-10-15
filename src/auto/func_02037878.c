#include "m2c.h"

M2C_UNK func_02039594(void *);                      /* extern */
M2C_UNK func_0203a90c(void *);                      /* extern */
M2C_UNK func_0203c160(void *);                      /* extern */
M2C_UNK func_0203cc08(void *);                      /* extern */
M2C_UNK func_0203f424(void *);                      /* extern */

s32 func_02037878(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 8);
    switch (temp_r1) {
        default:
            break;
        case 0:
            func_02039594(arg0 + 0x2EC);
            break;
        case 1:
            func_0203a90c(arg0 + 0xA84);
            break;
        case 2:
            func_0203c160(arg0 + 0x1428);
            break;
        case 3:
            func_0203cc08(arg0 + 0x1AA8);
            break;
        case 4:
            func_0203f424(arg0 + 0x284C);
            break;
    }
    return 1;
}
