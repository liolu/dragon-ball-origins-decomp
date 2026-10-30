/* Reconstructed from USA ARM9 at 0x020ccad8 (44 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

s32 func_020b8344(s32 arg0) {
    volatile u16 *p;
    u16 temp_r2;
    s32 temp_r1;
    p                       = (volatile u16 *) 0x04000208;
    temp_r2                 = p[0];
    p[0]                    = 0;
    temp_r1                 = *(s32 *) ((u8 *) p + 8);
    *(s32 *) ((u8 *) p + 8) = arg0;
    p[0];
    p[0] = temp_r2;
    return temp_r1;
}
