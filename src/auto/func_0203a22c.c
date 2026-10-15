#include "m2c.h"

M2C_UNK func_0209b868();                    /* extern */
extern M2C_UNK data_0213eff0;

void func_0203a22c(s32 arg0, s32 arg1) {
    if ((M2C_FIELD(&data_0213eff0, s32 *, 0x568) != 0) && (M2C_FIELD(&data_0213eff0, s32 *, 0x3A4) == 1)) {
        func_0209b868(arg0 + 0x5E0);
        func_0209b868(arg0 + 0x640, arg1);
        func_0209b868(arg0 + 0x6A8, arg1 + 0x20);
        return;
    }
    func_0209b868(arg0 + 0x5E0, 0xC0);
    func_0209b868(arg0 + 0x640, 0xC0);
    func_0209b868(arg0 + 0x6A8, 0xC0);
}
