#include "m2c.h"

M2C_UNK func_02097040(M2C_UNK *);                   /* extern */
M2C_UNK func_0209e1c8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209e214(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e260(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e2ac(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215dbb8;
extern M2C_UNK data_02160404;

void func_02099260(void) {
    func_0209e1c8(&data_02160404, 0);
    func_0209e214(&data_02160404, 0, 0);
    func_0209e260(&data_02160404, 0, 0);
    func_0209e2ac(&data_02160404);
    func_02097040(&data_0215dbb8);
}
