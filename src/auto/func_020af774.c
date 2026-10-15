#include "m2c.h"

M2C_UNK func_020ae324(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020af55c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020af5ac(void *);                      /* extern */
extern M2C_UNK data_0216af98;

void func_020af774(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020ae324(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020ae324(&data_0216af98, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020af55c(temp_r4, arg0);
    }
    func_020af5ac(arg0);
}
