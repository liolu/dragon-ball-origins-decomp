#include "m2c.h"

M2C_UNK func_020bd6a4(void *);                      /* extern */
extern s32 data_020e7dcc;
extern M2C_UNK data_020e7ddc;

void func_020a1e08(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        if (!(data_020e7dcc & 1)) {
            data_020e7dcc |= 1;
        }
        M2C_FIELD(*M2C_FIELD(&data_020e7ddc, void ***, 0x10), M2C_UNK(**)(void **, s32),
                  4)(M2C_FIELD(&data_020e7ddc, void ***, 0x10), M2C_FIELD(arg0, s32 *, 0x64));
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) & 0x10) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_020bd6a4(arg0 + 0x10);
}
