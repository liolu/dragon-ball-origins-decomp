/* Reconstructed from USA ARM9 at 0x020ccb04 (48 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

s32 func_020b8370(s32 arg0) {
    s32 temp_r1;
    u16 temp_r2;
    u16 dead;

    temp_r2             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 0;
    temp_r1             = *(s32 *) 0x04000210;
    *(s32 *) 0x04000210 = temp_r1 | arg0;
    dead                = *(volatile u16 *) 0x04000208;
    *(u16 *) 0x04000208 = temp_r2;
    return temp_r1;
}
