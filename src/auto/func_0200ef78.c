#include "m2c.h"

void *func_0204cb08(s32);                           /* extern */
void *func_0204cb6c();                              /* extern */

void func_0200ef78(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r5;

    temp_r5                       = func_0204cb08(M2C_FIELD(arg0, s32 *, 0xAC));
    temp_r0                       = func_0204cb6c();
    M2C_FIELD(arg0, s32 *, 0x5BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C0) = (s32) M2C_FIELD(temp_r5, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x614) = 0;
    M2C_FIELD(arg0, s32 *, 0x618) = 0;
    M2C_FIELD(arg0, s32 *, 0x5B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x60C) = (s32) M2C_FIELD(temp_r5, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x610) = (s32) M2C_FIELD(temp_r5, s32 *, 0x14);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x614) = (s32) M2C_FIELD(temp_r0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x618) = (s32) M2C_FIELD(temp_r0, s32 *, 0x14);
}
