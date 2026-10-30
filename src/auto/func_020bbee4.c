/* Reconstructed from USA ARM9 at 0x020d128c (36 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

int func_020bbee4(u32 bit, u32 index) {
    const volatile u32 *words = (const volatile u32 *) 0x027ffc00;
    return (words[index + 0x388 / 4] & (1U << bit)) != 0;
}
