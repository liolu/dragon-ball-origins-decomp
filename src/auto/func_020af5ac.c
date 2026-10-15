#include "m2c.h"

M2C_UNK func_020ae2c0();   /* extern */
void *func_020ae384();            /* extern */
extern M2C_UNK data_0216af98;

void func_020af5ac(void *arg0) {
    void *var_r1;

    var_r1 = func_020ae384(&data_0216af98, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020ae384(&data_0216af98);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020ae2c0(&data_0216af98, var_r1, arg0);
}
