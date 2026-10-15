#include "m2c.h"

M2C_UNK func_020015f4(void *);                      /* extern */
M2C_UNK func_0209b338(void *);                      /* extern */
M2C_UNK func_0209d748(s32);                         /* extern */
M2C_UNK func_020c644c(void *, M2C_UNK, M2C_UNK, M2C_UNK (*)(void *), M2C_UNK *); /* extern */
extern M2C_UNK data_020d9388;
extern M2C_UNK func_0209b358;

void *func_0204245c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d9388;
    func_0209d748(arg0 + 4);
    func_0209b338(arg0 + 0x50);
    func_0209b338(arg0 + 0x78);
    func_020c644c(arg0 + 0xA0, 0x20, 0x28, func_0209b338, &func_0209b358);
    M2C_FIELD(arg0, s32 *, 0x5A0) = 0;
    func_020015f4(arg0 + 0x5A8);
    return arg0;
}
