#include "m2c.h"

s32 func_0209bb9c(void *);                          /* extern */
M2C_UNK func_0209deb0(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_0209dfe0(M2C_UNK *, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02160404;

void func_0209b7a0(void *arg0) {
    func_0209deb0(&data_02160404, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    if (!(M2C_FIELD(arg0, s32 *, 0x24) & 1)) {
        return;
    }
    func_0209dfe0(&data_02160404, M2C_FIELD(arg0, s32 *, 0x1C), func_0209bb9c(arg0), M2C_FIELD(arg0, s32 *, 0x14),
                  M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
