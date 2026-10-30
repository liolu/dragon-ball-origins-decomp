/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d4f74[];
extern u8 data_020d4f84[];
extern u8 data_020d4ff4[];
extern u8 data_020d5044[];
extern u8 data_020e7b54[];

u32 data_020d4fbc[3] = {(u32) &data_020e7b54, (u32) &data_020d4ff4, (u32) &data_020d4f84};
u32 data_020d4fc8[5] = {(u32) &data_020e7b54, (u32) &data_020d5044, (u32) &data_020d4f74, 0x00000000, (u32) &data_020d4fbc};
