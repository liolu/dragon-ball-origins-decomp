#include "m2c.h"

M2C_UNK func_020015f4(void *);                      /* extern */
M2C_UNK func_0209b338(void *);                      /* extern */
M2C_UNK func_0209d748(void *);                      /* extern */
extern M2C_UNK data_020d93ac;

void *func_02042f60(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d93ac;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    func_0209d748(arg0 + 0xC);
    func_0209b338(arg0 + 0x58);
    func_0209b338(arg0 + 0x80);
    func_020015f4(arg0 + 0xA8);
    return arg0;
}
