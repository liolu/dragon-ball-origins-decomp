/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e3bbc[];
extern u8 data_020e3c38[];
extern u8 data_020e3cd0[];
extern u8 data_020e7b54[];

u32 data_020e3c00[3] = {(u32) &data_020e7b54, (u32) &data_020e3cd0, (u32) &data_020e3bbc};
u32 data_020e3c0c[5] = {(u32) &data_020e7b54, (u32) &data_020e3c38, (u32) &data_020e3bbc, 0x00000000, (u32) &data_020e3bbc};
