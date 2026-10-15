#include "m2c.h"

M2C_UNK func_02021840(void *);                      /* extern */
M2C_UNK func_020888c4(M2C_UNK *);                   /* extern */
M2C_UNK func_0209ddbc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209ddec(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215a16c;
extern M2C_UNK data_02160404;

void func_020214c0(void *arg0) {
    u32 temp_r0;

    func_020888c4(&data_0215a16c);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1B0);
    switch (temp_r0) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            break;
        default:
            break;
        case 0:
            M2C_FIELD(arg0, u32 *, 0x1B0) = (u32) (temp_r0 + 1);
            M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
            break;
        case 1:
            func_02021840(arg0);
            break;
    }
    func_0209ddbc(&data_02160404, 0);
    func_0209ddec(&data_02160404);
}
