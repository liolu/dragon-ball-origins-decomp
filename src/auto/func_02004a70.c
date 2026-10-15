#include "m2c.h"

M2C_UNK func_02004c10();                            /* extern */
M2C_UNK func_0204b138(M2C_UNK *);                   /* extern */
M2C_UNK func_0209ddbc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209ddec(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021267b0;
extern M2C_UNK data_02160404;

void func_02004a70(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 4);
    switch (temp_r1) {
        case 1:
        case 4:
            break;
        default:
            break;
        case 0:
            M2C_FIELD(arg0, u32 *, 4) = 1U;
            break;
        case 2:
            M2C_FIELD(arg0, u32 *, 4) = 3U;
            M2C_FIELD(arg0, s32 *, 8) = 0;
            break;
        case 3:
            func_02004c10();
            break;
    }
    func_0209ddbc(&data_02160404, 0);
    func_0204b138(&data_021267b0);
    func_0209ddec(&data_02160404);
}
