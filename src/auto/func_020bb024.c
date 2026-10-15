#include "m2c.h"

M2C_UNK func_020b93e0(M2C_UNK *);                   /* extern */
M2C_UNK func_020bb084();                            /* extern */
M2C_UNK func_020bb794();                            /* extern */
extern s32 data_0216d244;
extern M2C_UNK data_0216d248;

void func_020bb024(void) {
    if (data_0216d244 != 0) {
        return;
    }
    data_0216d244 = 1;
    func_020b93e0(&data_0216d248);
    func_020bb084();
    func_020bb794();
}
