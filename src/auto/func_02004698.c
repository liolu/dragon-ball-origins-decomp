#include "m2c.h"

M2C_UNK func_020019d8(M2C_UNK);                     /* extern */
M2C_UNK func_02004130(M2C_UNK *);                   /* extern */
M2C_UNK func_020048a8(M2C_UNK *);                   /* extern */
M2C_UNK func_020896ac(M2C_UNK *);                   /* extern */
M2C_UNK func_0209de5c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209fb54(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020b5864(s32, s32);                    /* extern */
extern M2C_UNK data_020f1844;
extern M2C_UNK data_020f1970;
extern M2C_UNK data_0215a16c;
extern M2C_UNK data_02160404;

s32 func_02004698(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 == 2) {
        func_0209fb54(arg0, &data_020f1844);
        func_020019d8(0);
        func_02004130(&data_020f1844);
        return 1;
    }
    if (temp_r1 == 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0 - M2C_FIELD(arg0, s32 *, 8));
        if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0x10) {
            func_0209fb54(arg0, &data_020f1970);
            func_020048a8(&data_020f1970);
            return 1;
        }
    }
    func_020896ac(&data_0215a16c);
    func_0209de5c(&data_02160404, 0, 0);
    func_020b5864(0x0400006C, M2C_FIELD(arg0, s32 *, 0xC));
    func_020b5864(0x0400106C, M2C_FIELD(arg0, s32 *, 0xC));
    return 0;
}
