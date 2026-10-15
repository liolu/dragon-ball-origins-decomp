#include "m2c.h"

M2C_UNK func_0209b338(void *);                      /* extern */
M2C_UNK func_0209cc08(void *);                      /* extern */
M2C_UNK func_020c644c(void *, M2C_UNK, M2C_UNK, M2C_UNK (*)(void *), M2C_UNK *); /* extern */
extern M2C_UNK func_0209b358;
extern M2C_UNK func_0209cc30;

void *func_020435c0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    func_020c644c(arg0 + 0xC, 2, 0x68, func_0209cc08, &func_0209cc30);
    func_020c644c(arg0 + 0xDC, 2, 0x28, func_0209b338, &func_0209b358);
    func_0209b338(arg0 + 0x12C);
    return arg0;
}
