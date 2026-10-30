/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d4f84[];
extern u8 data_020e7644[];
extern u8 data_020e7b54[];

#pragma explicit_zero_data on
u32 data_020e7614[1] = {0};
u32 data_020e7618[3] = {(u32) &data_020e7b54, (u32) &data_020e7644, (u32) &data_020d4f84};
u32 data_020e7624[6] = {0x6168737B, 0x56776F64, 0x6D756C6F, 0x00007D65, 0x00000000, (u32) &data_020e7618};
