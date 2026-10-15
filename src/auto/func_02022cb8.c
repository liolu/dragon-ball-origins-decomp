#include "m2c.h"

M2C_UNK func_0209e1c8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209e214(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e260(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e2ac(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02160404;

void func_02022cb8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0) {
        return;
    }
    func_0209e1c8(&data_02160404, 0);
    func_0209e214(&data_02160404, 0, 0);
    func_0209e260(&data_02160404, 0, 0);
    func_0209e2ac(&data_02160404);
}
