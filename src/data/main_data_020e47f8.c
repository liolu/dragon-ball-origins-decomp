/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e3bd4[];
extern u8 data_020e4838[];
extern u8 data_020e4850[];
extern u8 data_020e7b54[];

u32 data_020e47f8[3] = {(u32) &data_020e7b54, (u32) &data_020e4850, (u32) &data_020e3bd4};
u32 data_020e4804[5] = {(u32) &data_020e7b54, (u32) &data_020e4838, (u32) &data_020e3bd4, 0x00000000, (u32) &data_020e47f8};
