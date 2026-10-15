#include "m2c.h"

M2C_UNK func_02043e50();                            /* extern */
M2C_UNK func_02051048(M2C_UNK *, void *, M2C_UNK);  /* extern */
extern M2C_UNK data_0213fc40;

void func_020284cc(s32 arg0, void *arg1) {
    void *temp_r1;

    if (M2C_FIELD(arg1, void **, 0x20) == NULL) {
        return;
    }
    func_02043e50();
    temp_r1 = M2C_FIELD(arg1, void **, 0x20);
    if (M2C_FIELD(temp_r1, s32 *, 0x274) != 0) {
        func_02051048(&data_0213fc40, temp_r1, 0);
    }
    M2C_FIELD(arg1, void **, 0x20) = NULL;
}
