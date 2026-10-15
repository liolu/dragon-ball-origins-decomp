#include "m2c.h"

M2C_UNK func_0208e834();                            /* extern */
M2C_UNK func_0208edec();                            /* extern */
M2C_UNK func_0208ee0c(void *);                      /* extern */
M2C_UNK func_0208ee20(void *);                      /* extern */
M2C_UNK func_0208ee34(void *);                      /* extern */
M2C_UNK func_0208ee48(void *);                      /* extern */
M2C_UNK func_0208ee5c(void *);                      /* extern */

void func_0208ed98(void *arg0) {
    func_0208edec();
    func_0208ee0c(arg0);
    func_0208ee20(arg0);
    func_0208ee34(arg0);
    func_0208ee48(arg0);
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0208ee5c(arg0);
    func_0208e834();
}
